#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
semanal_namedtuple___NamedTupleAnalyzer_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *semanal_namedtuple___NamedTupleAnalyzer_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_namedtuple___NamedTupleAnalyzer(PyObject *cpy_r_options, PyObject *cpy_r_api);

static PyObject *
semanal_namedtuple___NamedTupleAnalyzer_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_namedtuple___NamedTupleAnalyzer) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = semanal_namedtuple___NamedTupleAnalyzer_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_semanal_namedtuple___NamedTupleAnalyzer_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
semanal_namedtuple___NamedTupleAnalyzer_traverse(mypy___semanal_namedtuple___NamedTupleAnalyzerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_options);
    Py_VISIT(self->_api);
    return 0;
}

static int
semanal_namedtuple___NamedTupleAnalyzer_clear(mypy___semanal_namedtuple___NamedTupleAnalyzerObject *self)
{
    Py_CLEAR(self->_options);
    Py_CLEAR(self->_api);
    return 0;
}

static void
semanal_namedtuple___NamedTupleAnalyzer_dealloc(mypy___semanal_namedtuple___NamedTupleAnalyzerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_namedtuple___NamedTupleAnalyzer_dealloc)
    semanal_namedtuple___NamedTupleAnalyzer_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_namedtuple___NamedTupleAnalyzer_vtable[10];
static bool
CPyDef_semanal_namedtuple___NamedTupleAnalyzer_trait_vtable_setup(void)
{
    CPyVTableItem semanal_namedtuple___NamedTupleAnalyzer_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_semanal_namedtuple___NamedTupleAnalyzer_____init__,
        (CPyVTableItem)CPyDef_semanal_namedtuple___NamedTupleAnalyzer___analyze_namedtuple_classdef,
        (CPyVTableItem)CPyDef_semanal_namedtuple___NamedTupleAnalyzer___check_namedtuple_classdef,
        (CPyVTableItem)CPyDef_semanal_namedtuple___NamedTupleAnalyzer___check_namedtuple,
        (CPyVTableItem)CPyDef_semanal_namedtuple___NamedTupleAnalyzer___store_namedtuple_info,
        (CPyVTableItem)CPyDef_semanal_namedtuple___NamedTupleAnalyzer___parse_namedtuple_args,
        (CPyVTableItem)CPyDef_semanal_namedtuple___NamedTupleAnalyzer___parse_namedtuple_fields_with_types,
        (CPyVTableItem)CPyDef_semanal_namedtuple___NamedTupleAnalyzer___build_namedtuple_typeinfo,
        (CPyVTableItem)CPyDef_semanal_namedtuple___NamedTupleAnalyzer___save_namedtuple_body,
        (CPyVTableItem)CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail,
    };
    memcpy(semanal_namedtuple___NamedTupleAnalyzer_vtable, semanal_namedtuple___NamedTupleAnalyzer_vtable_scratch, sizeof(semanal_namedtuple___NamedTupleAnalyzer_vtable));
    return 1;
}

static PyObject *
semanal_namedtuple___NamedTupleAnalyzer_get_options(mypy___semanal_namedtuple___NamedTupleAnalyzerObject *self, void *closure);
static int
semanal_namedtuple___NamedTupleAnalyzer_set_options(mypy___semanal_namedtuple___NamedTupleAnalyzerObject *self, PyObject *value, void *closure);
static PyObject *
semanal_namedtuple___NamedTupleAnalyzer_get_api(mypy___semanal_namedtuple___NamedTupleAnalyzerObject *self, void *closure);
static int
semanal_namedtuple___NamedTupleAnalyzer_set_api(mypy___semanal_namedtuple___NamedTupleAnalyzerObject *self, PyObject *value, void *closure);

static PyGetSetDef semanal_namedtuple___NamedTupleAnalyzer_getseters[] = {
    {"options",
     (getter)semanal_namedtuple___NamedTupleAnalyzer_get_options, (setter)semanal_namedtuple___NamedTupleAnalyzer_set_options,
     NULL, NULL},
    {"api",
     (getter)semanal_namedtuple___NamedTupleAnalyzer_get_api, (setter)semanal_namedtuple___NamedTupleAnalyzer_set_api,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef semanal_namedtuple___NamedTupleAnalyzer_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_semanal_namedtuple___NamedTupleAnalyzer_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"analyze_namedtuple_classdef",
     (PyCFunction)CPyPy_semanal_namedtuple___NamedTupleAnalyzer___analyze_namedtuple_classdef,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_namedtuple_classdef",
     (PyCFunction)CPyPy_semanal_namedtuple___NamedTupleAnalyzer___check_namedtuple_classdef,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_namedtuple",
     (PyCFunction)CPyPy_semanal_namedtuple___NamedTupleAnalyzer___check_namedtuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"store_namedtuple_info",
     (PyCFunction)CPyPy_semanal_namedtuple___NamedTupleAnalyzer___store_namedtuple_info,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"parse_namedtuple_args",
     (PyCFunction)CPyPy_semanal_namedtuple___NamedTupleAnalyzer___parse_namedtuple_args,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"parse_namedtuple_fields_with_types",
     (PyCFunction)CPyPy_semanal_namedtuple___NamedTupleAnalyzer___parse_namedtuple_fields_with_types,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"build_namedtuple_typeinfo",
     (PyCFunction)CPyPy_semanal_namedtuple___NamedTupleAnalyzer___build_namedtuple_typeinfo,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"save_namedtuple_body",
     (PyCFunction)CPyPy_semanal_namedtuple___NamedTupleAnalyzer___save_namedtuple_body,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fail",
     (PyCFunction)CPyPy_semanal_namedtuple___NamedTupleAnalyzer___fail,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_namedtuple___NamedTupleAnalyzer_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "NamedTupleAnalyzer",
    .tp_new = semanal_namedtuple___NamedTupleAnalyzer_new,
    .tp_dealloc = (destructor)semanal_namedtuple___NamedTupleAnalyzer_dealloc,
    .tp_traverse = (traverseproc)semanal_namedtuple___NamedTupleAnalyzer_traverse,
    .tp_clear = (inquiry)semanal_namedtuple___NamedTupleAnalyzer_clear,
    .tp_getset = semanal_namedtuple___NamedTupleAnalyzer_getseters,
    .tp_methods = semanal_namedtuple___NamedTupleAnalyzer_methods,
    .tp_init = semanal_namedtuple___NamedTupleAnalyzer_init,
    .tp_basicsize = sizeof(mypy___semanal_namedtuple___NamedTupleAnalyzerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_semanal_namedtuple___NamedTupleAnalyzer_template = &CPyType_semanal_namedtuple___NamedTupleAnalyzer_template_;

static PyObject *
semanal_namedtuple___NamedTupleAnalyzer_setup(PyTypeObject *type)
{
    mypy___semanal_namedtuple___NamedTupleAnalyzerObject *self;
    self = (mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_namedtuple___NamedTupleAnalyzer_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_namedtuple___NamedTupleAnalyzer(PyObject *cpy_r_options, PyObject *cpy_r_api)
{
    PyObject *self = semanal_namedtuple___NamedTupleAnalyzer_setup(CPyType_semanal_namedtuple___NamedTupleAnalyzer);
    if (self == NULL)
        return NULL;
    char res = CPyDef_semanal_namedtuple___NamedTupleAnalyzer_____init__(self, cpy_r_options, cpy_r_api);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
semanal_namedtuple___NamedTupleAnalyzer_get_options(mypy___semanal_namedtuple___NamedTupleAnalyzerObject *self, void *closure)
{
    if (unlikely(self->_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options' of 'NamedTupleAnalyzer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options);
    PyObject *retval = self->_options;
    return retval;
}

static int
semanal_namedtuple___NamedTupleAnalyzer_set_options(mypy___semanal_namedtuple___NamedTupleAnalyzerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NamedTupleAnalyzer' object attribute 'options' cannot be deleted");
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
semanal_namedtuple___NamedTupleAnalyzer_get_api(mypy___semanal_namedtuple___NamedTupleAnalyzerObject *self, void *closure)
{
    if (unlikely(self->_api == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'api' of 'NamedTupleAnalyzer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_api);
    PyObject *retval = self->_api;
    return retval;
}

static int
semanal_namedtuple___NamedTupleAnalyzer_set_api(mypy___semanal_namedtuple___NamedTupleAnalyzerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NamedTupleAnalyzer' object attribute 'api' cannot be deleted");
        return -1;
    }
    if (self->_api != NULL) {
        CPy_DECREF(self->_api);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_semanal___SemanticAnalyzer))
        tmp = value;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_api = tmp;
    return 0;
}

static PyObject *semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env(void);

static PyObject *
semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_setup(type);
}

static int
semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_traverse(mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_default_items);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    if (CPyTagged_CheckLong(self->_MDEF)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_MDEF));
    }
    Py_VISIT(self->_function_type);
    Py_VISIT(self->_info);
    Py_VISIT(self->_selftype);
    Py_VISIT(self->_tuple_base);
    Py_VISIT(self->_tvd);
    Py_VISIT(self->_add_field);
    Py_VISIT(self->_add_method);
    Py_VISIT(self->_make_init_arg);
    Py_VISIT(self->_self);
    Py_VISIT(self->_name);
    Py_VISIT(self->_items);
    Py_VISIT(self->_types);
    Py_VISIT(self->_existing_info);
    Py_VISIT(self->_strtype);
    Py_VISIT(self->_implicit_any);
    Py_VISIT(self->_basetuple_type);
    Py_VISIT(self->_dictype);
    Py_VISIT(self->_ordereddictype);
    Py_VISIT(self->_fallback);
    Py_VISIT(self->_iterable_type);
    Py_VISIT(self->_item);
    Py_VISIT(self->_literals);
    Py_VISIT(self->_match_args_type);
    Py_VISIT(self->_typ);
    Py_VISIT(self->_fields);
    Py_VISIT(self->_var);
    Py_VISIT(self->_vars);
    Py_VISIT(self->__);
    Py_VISIT(self->_tuple_of_strings);
    return 0;
}

static int
semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_clear(mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_default_items);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_MDEF)) {
        CPyTagged __tmp = self->_MDEF;
        self->_MDEF = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_function_type);
    Py_CLEAR(self->_info);
    Py_CLEAR(self->_selftype);
    Py_CLEAR(self->_tuple_base);
    Py_CLEAR(self->_tvd);
    Py_CLEAR(self->_add_field);
    Py_CLEAR(self->_add_method);
    Py_CLEAR(self->_make_init_arg);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_items);
    Py_CLEAR(self->_types);
    Py_CLEAR(self->_existing_info);
    Py_CLEAR(self->_strtype);
    Py_CLEAR(self->_implicit_any);
    Py_CLEAR(self->_basetuple_type);
    Py_CLEAR(self->_dictype);
    Py_CLEAR(self->_ordereddictype);
    Py_CLEAR(self->_fallback);
    Py_CLEAR(self->_iterable_type);
    Py_CLEAR(self->_item);
    Py_CLEAR(self->_literals);
    Py_CLEAR(self->_match_args_type);
    Py_CLEAR(self->_typ);
    Py_CLEAR(self->_fields);
    Py_CLEAR(self->_var);
    Py_CLEAR(self->_vars);
    Py_CLEAR(self->__);
    Py_CLEAR(self->_tuple_of_strings);
    return 0;
}

static void
semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_dealloc(mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_dealloc)
    semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_vtable[1];
static bool
CPyDef_semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_trait_vtable_setup(void)
{
    CPyVTableItem semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_vtable_scratch[] = {
        NULL
    };
    memcpy(semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_vtable, semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_vtable_scratch, sizeof(semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_vtable));
    return 1;
}

static PyMethodDef semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "build_namedtuple_typeinfo_NamedTupleAnalyzer_env",
    .tp_new = semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_new,
    .tp_dealloc = (destructor)semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_dealloc,
    .tp_traverse = (traverseproc)semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_traverse,
    .tp_clear = (inquiry)semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_clear,
    .tp_methods = semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_methods,
    .tp_basicsize = sizeof(mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_template = &CPyType_semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_template_;

static PyObject *
semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_setup(PyTypeObject *type)
{
    mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *self;
    self = (mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_vtable;
    self->_line = CPY_INT_TAG;
    self->_MDEF = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env(void)
{
    PyObject *self = semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_setup(CPyType_semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__(self, instance, owner);
}
PyMemberDef semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj(void);

static PyObject *
semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_setup(type);
}

static int
semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_traverse(mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject))));
    return 0;
}

static int
semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_clear(mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject))));
    return 0;
}

static void
semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_dealloc(mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_dealloc)
    semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable[2];
static bool
CPyDef_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_trait_vtable_setup(void)
{
    CPyVTableItem semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__,
        (CPyVTableItem)CPyDef_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__,
    };
    memcpy(semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable, semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable_scratch, sizeof(semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable));
    return 1;
}

static PyMethodDef semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj",
    .tp_new = semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_new,
    .tp_dealloc = (destructor)semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_dealloc,
    .tp_traverse = (traverseproc)semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_traverse,
    .tp_clear = (inquiry)semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_clear,
    .tp_methods = semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj,
    .tp_members = semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_members,
    .tp_basicsize = sizeof(mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject),
    .tp_weaklistoffset = sizeof(mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_template = &CPyType_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_template_;

static PyObject *
semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_setup(PyTypeObject *type)
{
    mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *self;
    self = (mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable;
    self->vectorcall = CPyPy_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj(void)
{
    PyObject *self = semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_setup(CPyType_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__(self, instance, owner);
}
PyMemberDef semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj(void);

static PyObject *
semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_setup(type);
}

static int
semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_traverse(mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject))));
    return 0;
}

static int
semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_clear(mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject))));
    return 0;
}

static void
semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_dealloc(mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_dealloc)
    semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable[2];
static bool
CPyDef_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_trait_vtable_setup(void)
{
    CPyVTableItem semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__,
        (CPyVTableItem)CPyDef_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__,
    };
    memcpy(semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable, semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable_scratch, sizeof(semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable));
    return 1;
}

static PyMethodDef semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj",
    .tp_new = semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_new,
    .tp_dealloc = (destructor)semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_dealloc,
    .tp_traverse = (traverseproc)semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_traverse,
    .tp_clear = (inquiry)semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_clear,
    .tp_methods = semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj,
    .tp_members = semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_members,
    .tp_basicsize = sizeof(mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject),
    .tp_weaklistoffset = sizeof(mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_template = &CPyType_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_template_;

static PyObject *
semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_setup(PyTypeObject *type)
{
    mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *self;
    self = (mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable;
    self->vectorcall = CPyPy_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj(void)
{
    PyObject *self = semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_setup(CPyType_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__(self, instance, owner);
}
PyMemberDef semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj(void);

static PyObject *
semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_setup(type);
}

static int
semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_traverse(mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject))));
    return 0;
}

static int
semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_clear(mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject))));
    return 0;
}

static void
semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_dealloc(mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_dealloc)
    semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable[2];
static bool
CPyDef_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_trait_vtable_setup(void)
{
    CPyVTableItem semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__,
        (CPyVTableItem)CPyDef_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__,
    };
    memcpy(semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable, semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable_scratch, sizeof(semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable));
    return 1;
}

static PyMethodDef semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj",
    .tp_new = semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_new,
    .tp_dealloc = (destructor)semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_dealloc,
    .tp_traverse = (traverseproc)semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_traverse,
    .tp_clear = (inquiry)semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_clear,
    .tp_methods = semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj,
    .tp_members = semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_members,
    .tp_basicsize = sizeof(mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject),
    .tp_weaklistoffset = sizeof(mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_template = &CPyType_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_template_;

static PyObject *
semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_setup(PyTypeObject *type)
{
    mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *self;
    self = (mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable;
    self->vectorcall = CPyPy_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj(void)
{
    PyObject *self = semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_setup(CPyType_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__(self, instance, owner);
}
PyMemberDef semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj(void);

static PyObject *
semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_setup(type);
}

static int
semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_traverse(mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject))));
    return 0;
}

static int
semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_clear(mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject))));
    return 0;
}

static void
semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_dealloc(mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_dealloc)
    semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable[2];
static bool
CPyDef_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_trait_vtable_setup(void)
{
    CPyVTableItem semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__,
        (CPyVTableItem)CPyDef_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__,
    };
    memcpy(semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable, semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable_scratch, sizeof(semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable));
    return 1;
}

static PyMethodDef semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj",
    .tp_new = semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_new,
    .tp_dealloc = (destructor)semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_dealloc,
    .tp_traverse = (traverseproc)semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_traverse,
    .tp_clear = (inquiry)semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_clear,
    .tp_methods = semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj,
    .tp_members = semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_members,
    .tp_basicsize = sizeof(mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject),
    .tp_weaklistoffset = sizeof(mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_template = &CPyType_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_template_;

static PyObject *
semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_setup(PyTypeObject *type)
{
    mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *self;
    self = (mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_vtable;
    self->vectorcall = CPyPy_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj(void)
{
    PyObject *self = semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_setup(CPyType_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env(void);

static PyObject *
semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_setup(type);
}

static int
semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_traverse(mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_named_tuple_info);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->_nt_names);
    Py_VISIT(self->___mypyc_temp__0.f0);
    Py_VISIT(self->___mypyc_temp__0.f1);
    Py_VISIT(self->___mypyc_temp__0.f2);
    Py_VISIT(self->___mypyc_temp__0.f3);
    Py_VISIT(self->___mypyc_temp__0.f4);
    Py_VISIT(self->___mypyc_temp__0.f5);
    Py_VISIT(self->___mypyc_temp__0.f6);
    Py_VISIT(self->___mypyc_temp__0.f7);
    Py_VISIT(self->___mypyc_temp__0.f8);
    Py_VISIT(self->___mypyc_temp__0.f9);
    Py_VISIT(self->___mypyc_temp__0.f10);
    Py_VISIT(self->___mypyc_temp__0.f11);
    Py_VISIT(self->___mypyc_temp__1);
    Py_VISIT(self->_prohibited);
    Py_VISIT(self->_ctx);
    Py_VISIT(self->___mypyc_temp__2);
    Py_VISIT(self->___mypyc_temp__5);
    Py_VISIT(self->_key);
    Py_VISIT(self->_sym);
    Py_VISIT(self->_r_key);
    return 0;
}

static int
semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_clear(mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_named_tuple_info);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_nt_names);
    Py_CLEAR(self->___mypyc_temp__0.f0);
    Py_CLEAR(self->___mypyc_temp__0.f1);
    Py_CLEAR(self->___mypyc_temp__0.f2);
    Py_CLEAR(self->___mypyc_temp__0.f3);
    Py_CLEAR(self->___mypyc_temp__0.f4);
    Py_CLEAR(self->___mypyc_temp__0.f5);
    Py_CLEAR(self->___mypyc_temp__0.f6);
    Py_CLEAR(self->___mypyc_temp__0.f7);
    Py_CLEAR(self->___mypyc_temp__0.f8);
    Py_CLEAR(self->___mypyc_temp__0.f9);
    Py_CLEAR(self->___mypyc_temp__0.f10);
    Py_CLEAR(self->___mypyc_temp__0.f11);
    Py_CLEAR(self->___mypyc_temp__1);
    Py_CLEAR(self->_prohibited);
    Py_CLEAR(self->_ctx);
    Py_CLEAR(self->___mypyc_temp__2);
    Py_CLEAR(self->___mypyc_temp__5);
    Py_CLEAR(self->_key);
    Py_CLEAR(self->_sym);
    Py_CLEAR(self->_r_key);
    return 0;
}

static void
semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_dealloc(mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_dealloc)
    semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_vtable[1];
static bool
CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_trait_vtable_setup(void)
{
    CPyVTableItem semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_vtable_scratch[] = {
        NULL
    };
    memcpy(semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_vtable, semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_vtable_scratch, sizeof(semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_vtable));
    return 1;
}

static PyMethodDef semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "save_namedtuple_body_NamedTupleAnalyzer_env",
    .tp_new = semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_new,
    .tp_dealloc = (destructor)semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_dealloc,
    .tp_traverse = (traverseproc)semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_traverse,
    .tp_clear = (inquiry)semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_clear,
    .tp_methods = semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_methods,
    .tp_basicsize = sizeof(mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_template = &CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_template_;

static PyObject *
semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_setup(PyTypeObject *type)
{
    mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *self;
    self = (mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__0 = (tuple_T12OOOOOOOOOOOO) { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
    self->___mypyc_temp__3 = CPY_INT_TAG;
    self->___mypyc_temp__4 = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env(void)
{
    PyObject *self = semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_setup(CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen(void);

static PyObject *
semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_setup(type);
}

static int
semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_traverse(mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_clear(mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_dealloc(mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_dealloc)
    semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_vtable[6];
static bool
CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_trait_vtable_setup(void)
{
    CPyVTableItem semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____next__,
        (CPyVTableItem)CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen___send,
        (CPyVTableItem)CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____iter__,
        (CPyVTableItem)CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen___throw,
        (CPyVTableItem)CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen___close,
    };
    memcpy(semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_vtable, semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_vtable_scratch, sizeof(semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_vtable));
    return 1;
}

static PyMethodDef semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "save_namedtuple_body_NamedTupleAnalyzer_gen",
    .tp_new = semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_new,
    .tp_dealloc = (destructor)semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_dealloc,
    .tp_traverse = (traverseproc)semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_traverse,
    .tp_clear = (inquiry)semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_clear,
    .tp_methods = semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_methods,
    .tp_iter = CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____iter__,
    .tp_iternext = CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____next__,
    .tp_basicsize = sizeof(mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_template = &CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_template_;

static PyObject *
semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_setup(PyTypeObject *type)
{
    mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_genObject *self;
    self = (mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen(void)
{
    PyObject *self = semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_setup(CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef semanal_namedtuplemodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef semanal_namedtuplemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.semanal_namedtuple",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    semanal_namedtuplemodule_methods
};

PyObject *CPyInit_mypy___semanal_namedtuple(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___semanal_namedtuple_internal) {
        Py_INCREF(CPyModule_mypy___semanal_namedtuple_internal);
        return CPyModule_mypy___semanal_namedtuple_internal;
    }
    CPyModule_mypy___semanal_namedtuple_internal = PyModule_Create(&semanal_namedtuplemodule);
    if (unlikely(CPyModule_mypy___semanal_namedtuple_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___semanal_namedtuple_internal, "__name__");
    CPyStatic_semanal_namedtuple___globals = PyModule_GetDict(CPyModule_mypy___semanal_namedtuple_internal);
    if (unlikely(CPyStatic_semanal_namedtuple___globals == NULL))
        goto fail;
    CPyType_semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env_template, NULL, modname);
    if (unlikely(!CPyType_semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env))
        goto fail;
    CPyType_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_template, NULL, modname);
    if (unlikely(!CPyType_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj))
        goto fail;
    CPyType_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_template, NULL, modname);
    if (unlikely(!CPyType_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj))
        goto fail;
    CPyType_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_template, NULL, modname);
    if (unlikely(!CPyType_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj))
        goto fail;
    CPyType_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_template, NULL, modname);
    if (unlikely(!CPyType_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj))
        goto fail;
    CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env_template, NULL, modname);
    if (unlikely(!CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env))
        goto fail;
    CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_template, NULL, modname);
    if (unlikely(!CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_semanal_namedtuple_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___semanal_namedtuple_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___semanal_namedtuple_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f0);
    CPy_XDECREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f1);
    CPy_XDECREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f2);
    CPy_XDECREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f3);
    CPy_XDECREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f4);
    CPy_XDECREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f5);
    CPy_XDECREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f6);
    CPy_XDECREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f7);
    CPy_XDECREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f8);
    CPy_XDECREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f9);
    CPy_XDECREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f10);
    CPy_XDECREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f11);
    CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES = (tuple_T12OOOOOOOOOOOO) { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
    Py_CLEAR(CPyType_semanal_namedtuple___NamedTupleAnalyzer);
    Py_CLEAR(CPyType_semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env);
    Py_CLEAR(CPyType_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj);
    Py_CLEAR(CPyType_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj);
    Py_CLEAR(CPyType_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj);
    Py_CLEAR(CPyType_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj);
    Py_CLEAR(CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env);
    Py_CLEAR(CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen);
    return NULL;
}

char CPyDef_semanal_namedtuple___NamedTupleAnalyzer_____init__(PyObject *cpy_r_self, PyObject *cpy_r_options, PyObject *cpy_r_api) {
    CPy_INCREF(cpy_r_options);
    ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_options = cpy_r_options;
    CPy_INCREF(cpy_r_api);
    ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api = cpy_r_api;
    return 1;
}

PyObject *CPyPy_semanal_namedtuple___NamedTupleAnalyzer_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"options", "api", 0};
    PyObject *obj_options;
    PyObject *obj_api;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_options, &obj_api)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_namedtuple___NamedTupleAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_namedtuple.NamedTupleAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_api;
    if (likely(Py_TYPE(obj_api) == CPyType_semanal___SemanticAnalyzer))
        arg_api = obj_api;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_api); 
        goto fail;
    }
    char retval = CPyDef_semanal_namedtuple___NamedTupleAnalyzer_____init__(arg_self, arg_options, arg_api);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "__init__", 94, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

tuple_T2CO CPyDef_semanal_namedtuple___NamedTupleAnalyzer___analyze_namedtuple_classdef(PyObject *cpy_r_self, PyObject *cpy_r_defn, char cpy_r_is_stub_file, char cpy_r_is_func_scope) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_base_expr;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    tuple_T2OO cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    tuple_T2CC cpy_r_r36;
    PyObject *cpy_r_r37;
    tuple_T2CO cpy_r_r38;
    tuple_T4OOOO cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_default_items;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_statements;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_existing_info;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyPtr cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyTagged cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    CPyTagged cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    tuple_T2CO cpy_r_r81;
    CPyTagged cpy_r_r82;
    tuple_T2CC cpy_r_r83;
    PyObject *cpy_r_r84;
    tuple_T2CO cpy_r_r85;
    tuple_T2CO cpy_r_r86;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_base_type_exprs;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL41;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_nodes___Expression)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 107, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Expression", cpy_r_r6);
        goto CPyL42;
    }
    cpy_r_base_expr = cpy_r_r7;
    cpy_r_r8 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_base_expr)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL5;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL6;
CPyL5: ;
    cpy_r_r13 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_base_expr)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    cpy_r_r12 = cpy_r_r16;
CPyL6: ;
    if (!cpy_r_r12) goto CPyL8;
    cpy_r_r17 = cpy_r_r12;
    goto CPyL9;
CPyL8: ;
    cpy_r_r18 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_base_expr)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    cpy_r_r17 = cpy_r_r21;
CPyL9: ;
    if (!cpy_r_r17) goto CPyL43;
    cpy_r_r22 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r22);
    CPy_INCREF(cpy_r_base_expr);
    if (likely((Py_TYPE(cpy_r_base_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_base_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_base_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r23 = cpy_r_base_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 109, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.RefExpr", cpy_r_base_expr);
        goto CPyL44;
    }
    cpy_r_r24 = CPY_GET_METHOD_TRAIT(cpy_r_r22, CPyType_semanal_shared___SemanticAnalyzerInterface, 3, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *))(cpy_r_r22, cpy_r_r23); /* accept */
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 109, CPyStatic_semanal_namedtuple___globals);
        goto CPyL45;
    }
    if (likely((Py_TYPE(cpy_r_base_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_base_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_base_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r25 = cpy_r_base_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 110, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.RefExpr", cpy_r_base_expr);
        goto CPyL45;
    }
    cpy_r_r26 = CPY_GET_ATTR(cpy_r_r25, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 110, CPyStatic_semanal_namedtuple___globals);
        goto CPyL45;
    }
CPyL14: ;
    CPy_DECREF(cpy_r_base_expr);
    cpy_r_r27 = CPyStatic_types___TYPED_NAMEDTUPLE_NAMES;
    if (unlikely(cpy_r_r27.f0 == NULL)) {
        goto CPyL46;
    } else
        goto CPyL17;
CPyL15: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPED_NAMEDTUPLE_NAMES\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 110, CPyStatic_semanal_namedtuple___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL17: ;
    CPy_INCREF(cpy_r_r27.f0);
    CPy_INCREF(cpy_r_r27.f1);
    cpy_r_r29 = PyTuple_New(2);
    if (unlikely(cpy_r_r29 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5966 = cpy_r_r27.f0;
    PyTuple_SET_ITEM(cpy_r_r29, 0, __tmp5966);
    PyObject *__tmp5967 = cpy_r_r27.f1;
    PyTuple_SET_ITEM(cpy_r_r29, 1, __tmp5967);
    cpy_r_r30 = PySequence_Contains(cpy_r_r29, cpy_r_r26);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 110, CPyStatic_semanal_namedtuple___globals);
        goto CPyL42;
    }
    cpy_r_r32 = cpy_r_r30;
    if (cpy_r_r32) {
        goto CPyL47;
    } else
        goto CPyL38;
CPyL19: ;
    cpy_r_r33 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___check_namedtuple_classdef(cpy_r_self, cpy_r_defn, cpy_r_is_stub_file);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 111, CPyStatic_semanal_namedtuple___globals);
        goto CPyL40;
    }
    cpy_r_result = cpy_r_r33;
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = cpy_r_result == cpy_r_r34;
    if (cpy_r_r35) {
        goto CPyL48;
    } else
        goto CPyL22;
CPyL21: ;
    cpy_r_r36.f0 = 1;
    cpy_r_r36.f1 = 1;
    cpy_r_r37 = Py_None;
    cpy_r_r38.f0 = 1;
    cpy_r_r38.f1 = cpy_r_r37;
    CPy_INCREF(cpy_r_r38.f1);
    return cpy_r_r38;
CPyL22: ;
    PyObject *__tmp5968;
    if (unlikely(!(PyTuple_Check(cpy_r_result) && PyTuple_GET_SIZE(cpy_r_result) == 4))) {
        __tmp5968 = NULL;
        goto __LL5969;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_result, 0))))
        __tmp5968 = PyTuple_GET_ITEM(cpy_r_result, 0);
    else {
        __tmp5968 = NULL;
    }
    if (__tmp5968 == NULL) goto __LL5969;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_result, 1))))
        __tmp5968 = PyTuple_GET_ITEM(cpy_r_result, 1);
    else {
        __tmp5968 = NULL;
    }
    if (__tmp5968 == NULL) goto __LL5969;
    if (likely(PyDict_Check(PyTuple_GET_ITEM(cpy_r_result, 2))))
        __tmp5968 = PyTuple_GET_ITEM(cpy_r_result, 2);
    else {
        __tmp5968 = NULL;
    }
    if (__tmp5968 == NULL) goto __LL5969;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_result, 3))))
        __tmp5968 = PyTuple_GET_ITEM(cpy_r_result, 3);
    else {
        __tmp5968 = NULL;
    }
    if (__tmp5968 == NULL) goto __LL5969;
    __tmp5968 = cpy_r_result;
__LL5969: ;
    if (unlikely(__tmp5968 == NULL)) {
        CPy_TypeError("tuple[list, list, dict, list]", cpy_r_result); cpy_r_r39 = (tuple_T4OOOO) { NULL, NULL, NULL, NULL };
    } else {
        PyObject *__tmp5970 = PyTuple_GET_ITEM(cpy_r_result, 0);
        CPy_INCREF(__tmp5970);
        PyObject *__tmp5971;
        if (likely(PyList_Check(__tmp5970)))
            __tmp5971 = __tmp5970;
        else {
            CPy_TypeError("list", __tmp5970); 
            __tmp5971 = NULL;
        }
        cpy_r_r39.f0 = __tmp5971;
        PyObject *__tmp5972 = PyTuple_GET_ITEM(cpy_r_result, 1);
        CPy_INCREF(__tmp5972);
        PyObject *__tmp5973;
        if (likely(PyList_Check(__tmp5972)))
            __tmp5973 = __tmp5972;
        else {
            CPy_TypeError("list", __tmp5972); 
            __tmp5973 = NULL;
        }
        cpy_r_r39.f1 = __tmp5973;
        PyObject *__tmp5974 = PyTuple_GET_ITEM(cpy_r_result, 2);
        CPy_INCREF(__tmp5974);
        PyObject *__tmp5975;
        if (likely(PyDict_Check(__tmp5974)))
            __tmp5975 = __tmp5974;
        else {
            CPy_TypeError("dict", __tmp5974); 
            __tmp5975 = NULL;
        }
        cpy_r_r39.f2 = __tmp5975;
        PyObject *__tmp5976 = PyTuple_GET_ITEM(cpy_r_result, 3);
        CPy_INCREF(__tmp5976);
        PyObject *__tmp5977;
        if (likely(PyList_Check(__tmp5976)))
            __tmp5977 = __tmp5976;
        else {
            CPy_TypeError("list", __tmp5976); 
            __tmp5977 = NULL;
        }
        cpy_r_r39.f3 = __tmp5977;
    }
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r39.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 115, CPyStatic_semanal_namedtuple___globals);
        goto CPyL40;
    }
    cpy_r_r40 = cpy_r_r39.f0;
    CPy_INCREF(cpy_r_r40);
    cpy_r_items = cpy_r_r40;
    cpy_r_r41 = cpy_r_r39.f1;
    CPy_INCREF(cpy_r_r41);
    cpy_r_types = cpy_r_r41;
    cpy_r_r42 = cpy_r_r39.f2;
    CPy_INCREF(cpy_r_r42);
    cpy_r_default_items = cpy_r_r42;
    cpy_r_r43 = cpy_r_r39.f3;
    CPy_INCREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r39.f0);
    CPy_DECREF(cpy_r_r39.f1);
    CPy_DECREF(cpy_r_r39.f2);
    CPy_DECREF(cpy_r_r39.f3);
    cpy_r_statements = cpy_r_r43;
    if (!cpy_r_is_func_scope) goto CPyL30;
    cpy_r_r44 = CPyStatics[1784]; /* '@' */
    cpy_r_r45 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_name;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = PySequence_Contains(cpy_r_r45, cpy_r_r44);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 116, CPyStatic_semanal_namedtuple___globals);
        goto CPyL49;
    }
    cpy_r_r48 = cpy_r_r46;
    cpy_r_r49 = cpy_r_r48 ^ 1;
    if (!cpy_r_r49) goto CPyL30;
    cpy_r_r50 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_name;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[1784]; /* '@' */
    cpy_r_r52 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_line;
    CPyTagged_INCREF(cpy_r_r52);
    cpy_r_r53 = CPyTagged_Str(cpy_r_r52);
    CPyTagged_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 117, CPyStatic_semanal_namedtuple___globals);
        goto CPyL50;
    }
    cpy_r_r54 = PyUnicode_Concat(cpy_r_r51, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 117, CPyStatic_semanal_namedtuple___globals);
        goto CPyL50;
    }
    cpy_r_r55 = CPyStr_Append(cpy_r_r50, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 117, CPyStatic_semanal_namedtuple___globals);
        goto CPyL49;
    }
    CPy_DECREF(((mypy___nodes___ClassDefObject *)cpy_r_defn)->_name);
    ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_name = cpy_r_r55;
CPyL30: ;
    cpy_r_r57 = Py_None;
    CPy_INCREF(cpy_r_r57);
    cpy_r_existing_info = cpy_r_r57;
    cpy_r_r58 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_analyzed;
    cpy_r_r59 = (PyObject *)CPyType_nodes___NamedTupleExpr;
    cpy_r_r60 = (CPyPtr)&((PyObject *)cpy_r_r58)->ob_type;
    cpy_r_r61 = *(PyObject * *)cpy_r_r60;
    cpy_r_r62 = cpy_r_r61 == cpy_r_r59;
    if (cpy_r_r62) {
        goto CPyL51;
    } else
        goto CPyL33;
CPyL31: ;
    cpy_r_r63 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r63) == CPyType_nodes___NamedTupleExpr))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 120, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.NamedTupleExpr", cpy_r_r63);
        goto CPyL49;
    }
    cpy_r_r65 = ((mypy___nodes___NamedTupleExprObject *)cpy_r_r64)->_info;
    CPy_INCREF(cpy_r_r65);
    cpy_r_existing_info = cpy_r_r65;
CPyL33: ;
    cpy_r_r66 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_name;
    CPy_INCREF(cpy_r_r66);
    cpy_r_r67 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_line;
    CPyTagged_INCREF(cpy_r_r67);
    cpy_r_r68 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___build_namedtuple_typeinfo(cpy_r_self, cpy_r_r66, cpy_r_items, cpy_r_types, cpy_r_default_items, cpy_r_r67, cpy_r_existing_info);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_default_items);
    CPyTagged_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_existing_info);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 121, CPyStatic_semanal_namedtuple___globals);
        goto CPyL52;
    }
    cpy_r_info = cpy_r_r68;
    cpy_r_r69 = CPyDef_nodes___NamedTupleExpr(cpy_r_info, 1);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 124, CPyStatic_semanal_namedtuple___globals);
        goto CPyL53;
    }
    CPy_DECREF(((mypy___nodes___ClassDefObject *)cpy_r_defn)->_analyzed);
    ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_analyzed = cpy_r_r69;
    cpy_r_r71 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_line;
    CPyTagged_INCREF(cpy_r_r71);
    cpy_r_r72 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r72) == CPyType_nodes___NamedTupleExpr))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 125, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.NamedTupleExpr", cpy_r_r72);
        goto CPyL54;
    }
    CPyTagged_DECREF(((mypy___nodes___NamedTupleExprObject *)cpy_r_r73)->_line);
    ((mypy___nodes___NamedTupleExprObject *)cpy_r_r73)->_line = cpy_r_r71;
    cpy_r_r75 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_column;
    CPyTagged_INCREF(cpy_r_r75);
    cpy_r_r76 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r76) == CPyType_nodes___NamedTupleExpr))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 126, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.NamedTupleExpr", cpy_r_r76);
        goto CPyL55;
    }
    CPyTagged_DECREF(((mypy___nodes___NamedTupleExprObject *)cpy_r_r77)->_column);
    ((mypy___nodes___NamedTupleExprObject *)cpy_r_r77)->_column = cpy_r_r75;
    cpy_r_r79 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_defs;
    CPy_DECREF(((mypy___nodes___BlockObject *)cpy_r_r79)->_body);
    ((mypy___nodes___BlockObject *)cpy_r_r79)->_body = cpy_r_statements;
    cpy_r_r81.f0 = 1;
    cpy_r_r81.f1 = cpy_r_info;
    CPy_INCREF(cpy_r_r81.f1);
    CPy_DECREF(cpy_r_info);
    return cpy_r_r81;
CPyL38: ;
    cpy_r_r82 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r82;
    goto CPyL1;
CPyL39: ;
    cpy_r_r83.f0 = 0;
    cpy_r_r83.f1 = 1;
    cpy_r_r84 = Py_None;
    cpy_r_r85.f0 = 0;
    cpy_r_r85.f1 = cpy_r_r84;
    CPy_INCREF(cpy_r_r85.f1);
    return cpy_r_r85;
CPyL40: ;
    tuple_T2CO __tmp5978 = { 2, NULL };
    cpy_r_r86 = __tmp5978;
    return cpy_r_r86;
CPyL41: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL39;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL40;
CPyL43: ;
    CPy_DECREF(cpy_r_base_expr);
    goto CPyL38;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_base_expr);
    CPy_DecRef(cpy_r_r22);
    goto CPyL40;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_base_expr);
    goto CPyL40;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r26);
    goto CPyL15;
CPyL47: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL19;
CPyL48: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL21;
CPyL49: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_default_items);
    CPy_DecRef(cpy_r_statements);
    goto CPyL40;
CPyL50: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_default_items);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r50);
    goto CPyL40;
CPyL51: ;
    CPy_DECREF(cpy_r_existing_info);
    goto CPyL31;
CPyL52: ;
    CPy_DecRef(cpy_r_statements);
    goto CPyL40;
CPyL53: ;
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_info);
    goto CPyL40;
CPyL54: ;
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_info);
    CPyTagged_DecRef(cpy_r_r71);
    goto CPyL40;
CPyL55: ;
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_info);
    CPyTagged_DecRef(cpy_r_r75);
    goto CPyL40;
}

PyObject *CPyPy_semanal_namedtuple___NamedTupleAnalyzer___analyze_namedtuple_classdef(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"defn", "is_stub_file", "is_func_scope", 0};
    static CPyArg_Parser parser = {"OOO:analyze_namedtuple_classdef", kwlist, 0};
    PyObject *obj_defn;
    PyObject *obj_is_stub_file;
    PyObject *obj_is_func_scope;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_defn, &obj_is_stub_file, &obj_is_func_scope)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_namedtuple___NamedTupleAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_namedtuple.NamedTupleAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_defn;
    if (likely(Py_TYPE(obj_defn) == CPyType_nodes___ClassDef))
        arg_defn = obj_defn;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_defn); 
        goto fail;
    }
    char arg_is_stub_file;
    if (unlikely(!PyBool_Check(obj_is_stub_file))) {
        CPy_TypeError("bool", obj_is_stub_file); goto fail;
    } else
        arg_is_stub_file = obj_is_stub_file == Py_True;
    char arg_is_func_scope;
    if (unlikely(!PyBool_Check(obj_is_func_scope))) {
        CPy_TypeError("bool", obj_is_func_scope); goto fail;
    } else
        arg_is_func_scope = obj_is_func_scope == Py_True;
    tuple_T2CO retval = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___analyze_namedtuple_classdef(arg_self, arg_defn, arg_is_stub_file, arg_is_func_scope);
    if (retval.f0 == 2) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5979 = retval.f0 ? Py_True : Py_False;
    CPy_INCREF(__tmp5979);
    PyTuple_SET_ITEM(retbox, 0, __tmp5979);
    PyObject *__tmp5980 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp5980);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "analyze_namedtuple_classdef", 98, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

PyObject *CPyDef_semanal_namedtuple___NamedTupleAnalyzer___check_namedtuple_classdef(PyObject *cpy_r_self, PyObject *cpy_r_defn, char cpy_r_is_stub_file) {
    PyObject *cpy_r_r0;
    tuple_T2II cpy_r_r1;
    tuple_T2II cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    tuple_T4OOOO cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_default_items;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_statements;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_stmt;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyPtr cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyPtr cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyPtr cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyPtr cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyPtr cpy_r_r93;
    int64_t cpy_r_r94;
    CPyTagged cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyPtr cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_name;
    int32_t cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    CPyTagged cpy_r_r126;
    CPyTagged cpy_r_r127;
    PyObject *cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    char cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_analyzed;
    PyObject *cpy_r_r149;
    char cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    int32_t cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    char cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    CPyPtr cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    int64_t cpy_r_r179;
    CPyTagged cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    int32_t cpy_r_r187;
    char cpy_r_r188;
    CPyTagged cpy_r_r189;
    tuple_T4OOOO cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    cpy_r_r0 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_options;
    cpy_r_r1 = ((mypy___options___OptionsObject *)cpy_r_r0)->_python_version;
    CPyTagged_INCREF(cpy_r_r1.f0);
    CPyTagged_INCREF(cpy_r_r1.f1);
    cpy_r_r2.f0 = 6;
    cpy_r_r2.f1 = 12;
    CPyTagged_INCREF(cpy_r_r2.f0);
    CPyTagged_INCREF(cpy_r_r2.f1);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5981 = CPyTagged_StealAsObject(cpy_r_r1.f0);
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp5981);
    PyObject *__tmp5982 = CPyTagged_StealAsObject(cpy_r_r1.f1);
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp5982);
    cpy_r_r4 = PyTuple_New(2);
    if (unlikely(cpy_r_r4 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5983 = CPyTagged_StealAsObject(cpy_r_r2.f0);
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp5983);
    PyObject *__tmp5984 = CPyTagged_StealAsObject(cpy_r_r2.f1);
    PyTuple_SET_ITEM(cpy_r_r4, 1, __tmp5984);
    cpy_r_r5 = PyObject_RichCompare(cpy_r_r3, cpy_r_r4, 0);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 145, CPyStatic_semanal_namedtuple___globals);
        goto CPyL93;
    }
    if (unlikely(!PyBool_Check(cpy_r_r5))) {
        CPy_TypeError("bool", cpy_r_r5); cpy_r_r6 = 2;
    } else
        cpy_r_r6 = cpy_r_r5 == Py_True;
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 145, CPyStatic_semanal_namedtuple___globals);
        goto CPyL93;
    }
    if (!cpy_r_r6) goto CPyL10;
    if (cpy_r_is_stub_file) goto CPyL10;
    cpy_r_r7 = CPyStatics[5197]; /* 'NamedTuple class syntax is only supported in Python 3.6' */
    cpy_r_r8 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r7, cpy_r_defn);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 146, CPyStatic_semanal_namedtuple___globals);
        goto CPyL93;
    }
    cpy_r_r9 = PyList_New(0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 147, CPyStatic_semanal_namedtuple___globals);
        goto CPyL93;
    }
    cpy_r_r10 = PyList_New(0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 147, CPyStatic_semanal_namedtuple___globals);
        goto CPyL94;
    }
    cpy_r_r11 = PyDict_New();
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 147, CPyStatic_semanal_namedtuple___globals);
        goto CPyL95;
    }
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 147, CPyStatic_semanal_namedtuple___globals);
        goto CPyL96;
    }
    cpy_r_r13.f0 = cpy_r_r9;
    cpy_r_r13.f1 = cpy_r_r10;
    cpy_r_r13.f2 = cpy_r_r11;
    cpy_r_r13.f3 = cpy_r_r12;
    CPy_INCREF(cpy_r_r13.f0);
    CPy_INCREF(cpy_r_r13.f1);
    CPy_INCREF(cpy_r_r13.f2);
    CPy_INCREF(cpy_r_r13.f3);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = PyTuple_New(4);
    if (unlikely(cpy_r_r14 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5985 = cpy_r_r13.f0;
    PyTuple_SET_ITEM(cpy_r_r14, 0, __tmp5985);
    PyObject *__tmp5986 = cpy_r_r13.f1;
    PyTuple_SET_ITEM(cpy_r_r14, 1, __tmp5986);
    PyObject *__tmp5987 = cpy_r_r13.f2;
    PyTuple_SET_ITEM(cpy_r_r14, 2, __tmp5987);
    PyObject *__tmp5988 = cpy_r_r13.f3;
    PyTuple_SET_ITEM(cpy_r_r14, 3, __tmp5988);
    return cpy_r_r14;
CPyL10: ;
    cpy_r_r15 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_base_type_exprs;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r15)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r18 > (Py_ssize_t)2;
    if (!cpy_r_r19) goto CPyL12;
    cpy_r_r20 = CPyStatics[5198]; /* 'NamedTuple should be a single base' */
    cpy_r_r21 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r20, cpy_r_defn);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 149, CPyStatic_semanal_namedtuple___globals);
        goto CPyL93;
    }
CPyL12: ;
    cpy_r_r22 = PyList_New(0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 150, CPyStatic_semanal_namedtuple___globals);
        goto CPyL93;
    }
    cpy_r_items = cpy_r_r22;
    cpy_r_r23 = PyList_New(0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 151, CPyStatic_semanal_namedtuple___globals);
        goto CPyL97;
    }
    cpy_r_types = cpy_r_r23;
    cpy_r_r24 = PyDict_New();
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 152, CPyStatic_semanal_namedtuple___globals);
        goto CPyL98;
    }
    cpy_r_default_items = cpy_r_r24;
    cpy_r_r25 = PyList_New(0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 153, CPyStatic_semanal_namedtuple___globals);
        goto CPyL99;
    }
    cpy_r_statements = cpy_r_r25;
    cpy_r_r26 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_defs;
    cpy_r_r27 = ((mypy___nodes___BlockObject *)cpy_r_r26)->_body;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = 0;
CPyL17: ;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_r27)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = (Py_ssize_t)cpy_r_r28 < (Py_ssize_t)cpy_r_r31;
    if (!cpy_r_r32) goto CPyL100;
    cpy_r_r33 = CPyList_GetItemUnsafe(cpy_r_r27, cpy_r_r28);
    if (likely(PyObject_TypeCheck(cpy_r_r33, CPyType_nodes___Statement)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 154, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Statement", cpy_r_r33);
        goto CPyL101;
    }
    cpy_r_stmt = cpy_r_r34;
    cpy_r_r35 = PyList_Append(cpy_r_statements, cpy_r_stmt);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 155, CPyStatic_semanal_namedtuple___globals);
        goto CPyL102;
    }
    cpy_r_r37 = (PyObject *)CPyType_nodes___AssignmentStmt;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    if (cpy_r_r40) goto CPyL42;
    cpy_r_r41 = (PyObject *)CPyType_nodes___PassStmt;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (cpy_r_r44) goto CPyL103;
    cpy_r_r45 = (PyObject *)CPyType_nodes___ExpressionStmt;
    cpy_r_r46 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r47 = *(PyObject * *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 == cpy_r_r45;
    if (!cpy_r_r48) goto CPyL25;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___ExpressionStmt))
        cpy_r_r49 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 159, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.ExpressionStmt", cpy_r_stmt);
        goto CPyL102;
    }
    cpy_r_r50 = ((mypy___nodes___ExpressionStmtObject *)cpy_r_r49)->_expr;
    cpy_r_r51 = (PyObject *)CPyType_nodes___EllipsisExpr;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_r50)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    if (cpy_r_r54) goto CPyL103;
CPyL25: ;
    cpy_r_r55 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r56 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r57 = *(PyObject * *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 == cpy_r_r55;
    if (!cpy_r_r58) goto CPyL27;
    cpy_r_r59 = cpy_r_r58;
    goto CPyL34;
CPyL27: ;
    cpy_r_r60 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r61 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r62 = *(PyObject * *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 == cpy_r_r60;
    if (!cpy_r_r63) goto CPyL29;
    cpy_r_r64 = cpy_r_r63;
    goto CPyL30;
CPyL29: ;
    cpy_r_r65 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r66 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r67 = *(PyObject * *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 == cpy_r_r65;
    cpy_r_r64 = cpy_r_r68;
CPyL30: ;
    if (!cpy_r_r64) goto CPyL32;
    cpy_r_r69 = cpy_r_r64;
    goto CPyL33;
CPyL32: ;
    cpy_r_r70 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r71 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r72 = *(PyObject * *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 == cpy_r_r70;
    cpy_r_r69 = cpy_r_r73;
CPyL33: ;
    cpy_r_r59 = cpy_r_r69;
CPyL34: ;
    if (cpy_r_r59) goto CPyL103;
    cpy_r_r74 = (PyObject *)CPyType_nodes___ExpressionStmt;
    cpy_r_r75 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r76 = *(PyObject * *)cpy_r_r75;
    cpy_r_r77 = cpy_r_r76 == cpy_r_r74;
    if (!cpy_r_r77) goto CPyL38;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___ExpressionStmt))
        cpy_r_r78 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 166, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.ExpressionStmt", cpy_r_stmt);
        goto CPyL102;
    }
    cpy_r_r79 = ((mypy___nodes___ExpressionStmtObject *)cpy_r_r78)->_expr;
    cpy_r_r80 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r81 = (CPyPtr)&((PyObject *)cpy_r_r79)->ob_type;
    cpy_r_r82 = *(PyObject * *)cpy_r_r81;
    cpy_r_r83 = cpy_r_r82 == cpy_r_r80;
    if (cpy_r_r83) goto CPyL103;
CPyL38: ;
    cpy_r_r84 = CPyList_PopLast(cpy_r_statements);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 168, CPyStatic_semanal_namedtuple___globals);
        goto CPyL102;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r84, CPyType_nodes___Statement)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeError("mypy.nodes.Statement", cpy_r_r84); 
        cpy_r_r85 = NULL;
    }
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 168, CPyStatic_semanal_namedtuple___globals);
        goto CPyL102;
    } else
        goto CPyL104;
CPyL40: ;
    cpy_r_r86 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_removed_statements;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r87 = PyList_Append(cpy_r_r86, cpy_r_stmt);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 169, CPyStatic_semanal_namedtuple___globals);
        goto CPyL102;
    }
    cpy_r_r89 = CPyStatics[5199]; /* ('Invalid statement in NamedTuple definition; expected '
                                     '"field_name: field_type [= default]"') */
    cpy_r_r90 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r89, cpy_r_stmt);
    CPy_DECREF(cpy_r_stmt);
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 170, CPyStatic_semanal_namedtuple___globals);
        goto CPyL101;
    } else
        goto CPyL91;
CPyL42: ;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r91 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 171, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL102;
    }
    cpy_r_r92 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r91)->_lvalues;
    cpy_r_r93 = (CPyPtr)&((PyVarObject *)cpy_r_r92)->ob_size;
    cpy_r_r94 = *(int64_t *)cpy_r_r93;
    cpy_r_r95 = cpy_r_r94 << 1;
    cpy_r_r96 = (Py_ssize_t)cpy_r_r95 > (Py_ssize_t)2;
    if (cpy_r_r96) goto CPyL47;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r97 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 171, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL102;
    }
    cpy_r_r98 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r97)->_lvalues;
    cpy_r_r99 = CPyList_GetItemShortBorrow(cpy_r_r98, 0);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 171, CPyStatic_semanal_namedtuple___globals);
        goto CPyL102;
    }
    cpy_r_r100 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r101 = (CPyPtr)&((PyObject *)cpy_r_r99)->ob_type;
    cpy_r_r102 = *(PyObject * *)cpy_r_r101;
    cpy_r_r103 = cpy_r_r102 == cpy_r_r100;
    if (cpy_r_r103) goto CPyL53;
CPyL47: ;
    cpy_r_r104 = CPyList_PopLast(cpy_r_statements);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 173, CPyStatic_semanal_namedtuple___globals);
        goto CPyL102;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r104, CPyType_nodes___Statement)))
        cpy_r_r105 = cpy_r_r104;
    else {
        CPy_TypeError("mypy.nodes.Statement", cpy_r_r104); 
        cpy_r_r105 = NULL;
    }
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 173, CPyStatic_semanal_namedtuple___globals);
        goto CPyL102;
    } else
        goto CPyL105;
CPyL49: ;
    cpy_r_r106 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_removed_statements;
    CPy_INCREF(cpy_r_r106);
    CPy_INCREF(cpy_r_stmt);
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r107 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 174, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL106;
    }
    cpy_r_r108 = PyList_Append(cpy_r_r106, cpy_r_r107);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 174, CPyStatic_semanal_namedtuple___globals);
        goto CPyL102;
    }
    cpy_r_r110 = CPyStatics[5199]; /* ('Invalid statement in NamedTuple definition; expected '
                                      '"field_name: field_type [= default]"') */
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r111 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 175, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL101;
    }
    cpy_r_r112 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r110, cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 175, CPyStatic_semanal_namedtuple___globals);
        goto CPyL101;
    } else
        goto CPyL91;
CPyL53: ;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r113 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 178, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL102;
    }
    cpy_r_r114 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r113)->_lvalues;
    cpy_r_r115 = CPyList_GetItemShortBorrow(cpy_r_r114, 0);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 178, CPyStatic_semanal_namedtuple___globals);
        goto CPyL102;
    }
    if (likely(Py_TYPE(cpy_r_r115) == CPyType_nodes___NameExpr))
        cpy_r_r116 = cpy_r_r115;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 178, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.NameExpr", cpy_r_r115);
        goto CPyL102;
    }
    cpy_r_r117 = ((mypy___nodes___NameExprObject *)cpy_r_r116)->_name;
    CPy_INCREF(cpy_r_r117);
    cpy_r_name = cpy_r_r117;
    cpy_r_r118 = PyList_Append(cpy_r_items, cpy_r_name);
    cpy_r_r119 = cpy_r_r118 >= 0;
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 179, CPyStatic_semanal_namedtuple___globals);
        goto CPyL107;
    }
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r120 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 180, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL107;
    }
    cpy_r_r121 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r120)->_type;
    cpy_r_r122 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r123 = cpy_r_r121 == cpy_r_r122;
    if (!cpy_r_r123) goto CPyL61;
    cpy_r_r124 = NULL;
    cpy_r_r125 = NULL;
    cpy_r_r126 = CPY_INT_TAG;
    cpy_r_r127 = CPY_INT_TAG;
    cpy_r_r128 = CPyDef_types___AnyType(2, cpy_r_r124, cpy_r_r125, cpy_r_r126, cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 181, CPyStatic_semanal_namedtuple___globals);
        goto CPyL107;
    }
    cpy_r_r129 = PyList_Append(cpy_r_types, cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 181, CPyStatic_semanal_namedtuple___globals);
        goto CPyL107;
    } else
        goto CPyL72;
CPyL61: ;
    cpy_r_r131 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r131);
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r132 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 187, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL108;
    }
    cpy_r_r133 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r132)->_type;
    CPy_INCREF(cpy_r_r133);
    if (likely(cpy_r_r133 != Py_None))
        cpy_r_r134 = cpy_r_r133;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 187, CPyStatic_semanal_namedtuple___globals, "mypy.types.Type", cpy_r_r133);
        goto CPyL108;
    }
    cpy_r_r135 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_options;
    cpy_r_r136 = ((mypy___options___OptionsObject *)cpy_r_r135)->_disable_recursive_aliases;
    cpy_r_r137 = cpy_r_r136 ^ 1;
    if (cpy_r_r137) goto CPyL65;
    cpy_r_r138 = cpy_r_r137;
    goto CPyL67;
CPyL65: ;
    cpy_r_r139 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r139);
    cpy_r_r140 = CPY_GET_METHOD_TRAIT(cpy_r_r139, CPyType_semanal_shared___SemanticAnalyzerInterface, 28, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *))(cpy_r_r139); /* is_func_scope */
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r140 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 189, CPyStatic_semanal_namedtuple___globals);
        goto CPyL109;
    }
    cpy_r_r141 = cpy_r_r140 ^ 1;
    cpy_r_r138 = cpy_r_r141;
CPyL67: ;
    cpy_r_r142 = CPyStatics[5200]; /* 'NamedTuple item type' */
    cpy_r_r143 = NULL;
    cpy_r_r144 = 2;
    cpy_r_r145 = 2;
    cpy_r_r146 = 2;
    cpy_r_r147 = 2;
    cpy_r_r148 = CPY_GET_METHOD_TRAIT(cpy_r_r131, CPyType_semanal_shared___SemanticAnalyzerInterface, 4, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *, char, char, char, char, char, PyObject *))(cpy_r_r131, cpy_r_r134, cpy_r_r143, cpy_r_r144, cpy_r_r145, cpy_r_r146, cpy_r_r138, cpy_r_r147, cpy_r_r142); /* anal_type */
    CPy_DECREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 186, CPyStatic_semanal_namedtuple___globals);
        goto CPyL107;
    }
    cpy_r_analyzed = cpy_r_r148;
    cpy_r_r149 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r150 = cpy_r_analyzed == cpy_r_r149;
    if (cpy_r_r150) {
        goto CPyL110;
    } else
        goto CPyL70;
CPyL69: ;
    cpy_r_r151 = Py_None;
    CPy_INCREF(cpy_r_r151);
    return cpy_r_r151;
CPyL70: ;
    if (likely(cpy_r_analyzed != Py_None))
        cpy_r_r152 = cpy_r_analyzed;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 195, CPyStatic_semanal_namedtuple___globals, "mypy.types.Type", cpy_r_analyzed);
        goto CPyL107;
    }
    cpy_r_r153 = PyList_Append(cpy_r_types, cpy_r_r152);
    CPy_DECREF(cpy_r_r152);
    cpy_r_r154 = cpy_r_r153 >= 0;
    if (unlikely(!cpy_r_r154)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 195, CPyStatic_semanal_namedtuple___globals);
        goto CPyL107;
    }
CPyL72: ;
    cpy_r_r155 = CPyStatics[755]; /* '_' */
    cpy_r_r156 = CPyStr_Startswith(cpy_r_name, cpy_r_r155);
    if (!cpy_r_r156) goto CPyL76;
    cpy_r_r157 = CPyStatics[5201]; /* ('NamedTuple field name cannot start with an '
                                      'underscore: ') */
    cpy_r_r158 = CPyStr_Build(2, cpy_r_r157, cpy_r_name);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 199, CPyStatic_semanal_namedtuple___globals);
        goto CPyL107;
    }
    CPy_INCREF(cpy_r_stmt);
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r159 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 199, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL111;
    }
    cpy_r_r160 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r158, cpy_r_r159);
    CPy_DECREF(cpy_r_r158);
    CPy_DECREF(cpy_r_r159);
    if (unlikely(cpy_r_r160 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 198, CPyStatic_semanal_namedtuple___globals);
        goto CPyL107;
    }
CPyL76: ;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r161 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 201, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL107;
    }
    cpy_r_r162 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r161)->_type;
    cpy_r_r163 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r164 = cpy_r_r162 == cpy_r_r163;
    if (cpy_r_r164) goto CPyL112;
    CPy_INCREF(cpy_r_stmt);
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r165 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 201, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL107;
    }
    cpy_r_r166 = CPyStatics[4135]; /* 'new_syntax' */
    cpy_r_r167 = PyObject_HasAttr(cpy_r_r165, cpy_r_r166);
    CPy_DECREF(cpy_r_r165);
    if (!cpy_r_r167) goto CPyL84;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r168 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 201, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL107;
    }
    cpy_r_r169 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r168)->_new_syntax;
    if (cpy_r_r169) {
        goto CPyL84;
    } else
        goto CPyL112;
CPyL82: ;
    cpy_r_r170 = CPyStatics[5199]; /* ('Invalid statement in NamedTuple definition; expected '
                                      '"field_name: field_type [= default]"') */
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r171 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 202, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL101;
    }
    cpy_r_r172 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r170, cpy_r_r171);
    CPy_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r172 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 202, CPyStatic_semanal_namedtuple___globals);
        goto CPyL101;
    } else
        goto CPyL91;
CPyL84: ;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r173 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 203, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL107;
    }
    cpy_r_r174 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r173)->_rvalue;
    cpy_r_r175 = (PyObject *)CPyType_nodes___TempNode;
    cpy_r_r176 = (CPyPtr)&((PyObject *)cpy_r_r174)->ob_type;
    cpy_r_r177 = *(PyObject * *)cpy_r_r176;
    cpy_r_r178 = cpy_r_r177 == cpy_r_r175;
    if (cpy_r_r178) {
        goto CPyL113;
    } else
        goto CPyL89;
CPyL86: ;
    cpy_r_r179 = PyDict_Size(cpy_r_default_items);
    cpy_r_r180 = cpy_r_r179 << 1;
    cpy_r_r181 = cpy_r_r180 != 0;
    if (!cpy_r_r181) goto CPyL103;
    cpy_r_r182 = CPyStatics[5202]; /* ('Non-default NamedTuple fields cannot follow default '
                                      'fields') */
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r183 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 207, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL101;
    }
    cpy_r_r184 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r182, cpy_r_r183);
    CPy_DECREF(cpy_r_r183);
    if (unlikely(cpy_r_r184 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 206, CPyStatic_semanal_namedtuple___globals);
        goto CPyL101;
    } else
        goto CPyL91;
CPyL89: ;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r185 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 210, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL107;
    }
    cpy_r_r186 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r185)->_rvalue;
    CPy_INCREF(cpy_r_r186);
    CPy_DECREF(cpy_r_stmt);
    cpy_r_r187 = CPyDict_SetItem(cpy_r_default_items, cpy_r_name, cpy_r_r186);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r186);
    cpy_r_r188 = cpy_r_r187 >= 0;
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 210, CPyStatic_semanal_namedtuple___globals);
        goto CPyL101;
    }
CPyL91: ;
    cpy_r_r189 = cpy_r_r28 + 2;
    cpy_r_r28 = cpy_r_r189;
    goto CPyL17;
CPyL92: ;
    cpy_r_r190.f0 = cpy_r_items;
    cpy_r_r190.f1 = cpy_r_types;
    cpy_r_r190.f2 = cpy_r_default_items;
    cpy_r_r190.f3 = cpy_r_statements;
    CPy_INCREF(cpy_r_r190.f0);
    CPy_INCREF(cpy_r_r190.f1);
    CPy_INCREF(cpy_r_r190.f2);
    CPy_INCREF(cpy_r_r190.f3);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_default_items);
    CPy_DECREF(cpy_r_statements);
    cpy_r_r191 = PyTuple_New(4);
    if (unlikely(cpy_r_r191 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5989 = cpy_r_r190.f0;
    PyTuple_SET_ITEM(cpy_r_r191, 0, __tmp5989);
    PyObject *__tmp5990 = cpy_r_r190.f1;
    PyTuple_SET_ITEM(cpy_r_r191, 1, __tmp5990);
    PyObject *__tmp5991 = cpy_r_r190.f2;
    PyTuple_SET_ITEM(cpy_r_r191, 2, __tmp5991);
    PyObject *__tmp5992 = cpy_r_r190.f3;
    PyTuple_SET_ITEM(cpy_r_r191, 3, __tmp5992);
    return cpy_r_r191;
CPyL93: ;
    cpy_r_r192 = NULL;
    return cpy_r_r192;
CPyL94: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL93;
CPyL95: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    goto CPyL93;
CPyL96: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r11);
    goto CPyL93;
CPyL97: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL93;
CPyL98: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    goto CPyL93;
CPyL99: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_default_items);
    goto CPyL93;
CPyL100: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL92;
CPyL101: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_default_items);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r27);
    goto CPyL93;
CPyL102: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_default_items);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_stmt);
    goto CPyL93;
CPyL103: ;
    CPy_DECREF(cpy_r_stmt);
    goto CPyL91;
CPyL104: ;
    CPy_DECREF(cpy_r_r85);
    goto CPyL40;
CPyL105: ;
    CPy_DECREF(cpy_r_r105);
    goto CPyL49;
CPyL106: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_default_items);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r106);
    goto CPyL93;
CPyL107: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_default_items);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_name);
    goto CPyL93;
CPyL108: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_default_items);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r131);
    goto CPyL93;
CPyL109: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_default_items);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r134);
    goto CPyL93;
CPyL110: ;
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_default_items);
    CPy_DECREF(cpy_r_statements);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_stmt);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_analyzed);
    goto CPyL69;
CPyL111: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_default_items);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r158);
    goto CPyL93;
CPyL112: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL82;
CPyL113: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL86;
}

PyObject *CPyPy_semanal_namedtuple___NamedTupleAnalyzer___check_namedtuple_classdef(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"defn", "is_stub_file", 0};
    static CPyArg_Parser parser = {"OO:check_namedtuple_classdef", kwlist, 0};
    PyObject *obj_defn;
    PyObject *obj_is_stub_file;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_defn, &obj_is_stub_file)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_namedtuple___NamedTupleAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_namedtuple.NamedTupleAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_defn;
    if (likely(Py_TYPE(obj_defn) == CPyType_nodes___ClassDef))
        arg_defn = obj_defn;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_defn); 
        goto fail;
    }
    char arg_is_stub_file;
    if (unlikely(!PyBool_Check(obj_is_stub_file))) {
        CPy_TypeError("bool", obj_is_stub_file); goto fail;
    } else
        arg_is_stub_file = obj_is_stub_file == Py_True;
    PyObject *retval = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___check_namedtuple_classdef(arg_self, arg_defn, arg_is_stub_file);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple_classdef", 133, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

tuple_T3OOO CPyDef_semanal_namedtuple___NamedTupleAnalyzer___check_namedtuple(PyObject *cpy_r_self, PyObject *cpy_r_node, PyObject *cpy_r_var_name, char cpy_r_is_func_scope) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T3CCO cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T3OOO cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_call;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_callee;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    tuple_T3CCO cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    tuple_T3OOO cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_fullname;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_is_typed;
    tuple_T2OO cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    tuple_T3CCO cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    tuple_T3OOO cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    tuple_T6OOOOOC cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    tuple_T6OOOOOC cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_defaults;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_typename;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_tvar_defs;
    char cpy_r_r64;
    char cpy_r_ok;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r70;
    CPyTagged cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyTagged cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    tuple_T3OOO cpy_r_r99;
    PyObject *cpy_r_r100;
    tuple_T3OOO cpy_r_r101;
    PyObject *cpy_r_r102;
    tuple_T3OCO cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    tuple_T3OOO cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyTagged cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    CPyPtr cpy_r_r119;
    int64_t cpy_r_r120;
    CPyTagged cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    CPyPtr cpy_r_r124;
    int64_t cpy_r_r125;
    CPyTagged cpy_r_r126;
    CPyTagged cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    CPyTagged cpy_r_r130;
    CPyTagged cpy_r_r131;
    CPyPtr cpy_r_r132;
    int64_t cpy_r_r133;
    CPyTagged cpy_r_r134;
    char cpy_r_r135;
    CPyPtr cpy_r_r136;
    int64_t cpy_r_r137;
    CPyTagged cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_arg_name;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_default;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    CPyTagged cpy_r_r146;
    CPyTagged cpy_r_r147;
    PyObject *cpy_r_default_items;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_existing_info;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    CPyPtr cpy_r_r153;
    PyObject *cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    CPyTagged cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    char cpy_r_r180;
    tuple_T3OOO cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    tuple_T3OOO cpy_r_r185;
    tuple_T3OOO cpy_r_r186;
    cpy_r_r0 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL3;
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 230, CPyStatic_semanal_namedtuple___globals);
        goto CPyL114;
    }
    cpy_r_r5.f0 = 1;
    cpy_r_r5.f1 = 1;
    cpy_r_r5.f2 = cpy_r_r4;
    CPy_INCREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f2);
    cpy_r_r6 = Py_None;
    cpy_r_r7 = Py_None;
    cpy_r_r8.f0 = cpy_r_r6;
    cpy_r_r8.f1 = cpy_r_r7;
    cpy_r_r8.f2 = cpy_r_r4;
    CPy_INCREF(cpy_r_r8.f0);
    CPy_INCREF(cpy_r_r8.f1);
    CPy_INCREF(cpy_r_r8.f2);
    CPy_DECREF(cpy_r_r4);
    return cpy_r_r8;
CPyL3: ;
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r9 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 231, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL114;
    }
    cpy_r_call = cpy_r_r9;
    cpy_r_r10 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_callee;
    CPy_INCREF(cpy_r_r10);
    cpy_r_callee = cpy_r_r10;
    cpy_r_r11 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL6;
    cpy_r_r15 = cpy_r_r14;
    goto CPyL7;
CPyL6: ;
    cpy_r_r16 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    cpy_r_r15 = cpy_r_r19;
CPyL7: ;
    if (!cpy_r_r15) goto CPyL9;
    cpy_r_r20 = cpy_r_r15;
    goto CPyL10;
CPyL9: ;
    cpy_r_r21 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    cpy_r_r20 = cpy_r_r24;
CPyL10: ;
    if (cpy_r_r20) {
        goto CPyL13;
    } else
        goto CPyL115;
CPyL11: ;
    cpy_r_r25 = PyList_New(0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 234, CPyStatic_semanal_namedtuple___globals);
        goto CPyL114;
    }
    cpy_r_r26.f0 = 1;
    cpy_r_r26.f1 = 1;
    cpy_r_r26.f2 = cpy_r_r25;
    CPy_INCREF(cpy_r_r26.f2);
    CPy_DECREF(cpy_r_r26.f2);
    cpy_r_r27 = Py_None;
    cpy_r_r28 = Py_None;
    cpy_r_r29.f0 = cpy_r_r27;
    cpy_r_r29.f1 = cpy_r_r28;
    cpy_r_r29.f2 = cpy_r_r25;
    CPy_INCREF(cpy_r_r29.f0);
    CPy_INCREF(cpy_r_r29.f1);
    CPy_INCREF(cpy_r_r29.f2);
    CPy_DECREF(cpy_r_r25);
    return cpy_r_r29;
CPyL13: ;
    if (likely((Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_callee) == CPyType_nodes___RefExpr)))
        cpy_r_r30 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 235, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.RefExpr", cpy_r_callee);
        goto CPyL116;
    }
    cpy_r_r31 = CPY_GET_ATTR(cpy_r_r30, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 235, CPyStatic_semanal_namedtuple___globals);
        goto CPyL116;
    }
CPyL15: ;
    CPy_DECREF(cpy_r_callee);
    cpy_r_fullname = cpy_r_r31;
    cpy_r_r32 = CPyStatics[4928]; /* 'collections.namedtuple' */
    cpy_r_r33 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 == -1;
    if (!cpy_r_r34) goto CPyL18;
    cpy_r_r35 = PyErr_Occurred();
    cpy_r_r36 = cpy_r_r35 != NULL;
    if (!cpy_r_r36) goto CPyL18;
    cpy_r_r37 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 236, CPyStatic_semanal_namedtuple___globals);
        goto CPyL117;
    }
CPyL18: ;
    cpy_r_r38 = cpy_r_r33 == 0;
    if (!cpy_r_r38) goto CPyL20;
    cpy_r_is_typed = 0;
    goto CPyL28;
CPyL20: ;
    cpy_r_r39 = CPyStatic_types___TYPED_NAMEDTUPLE_NAMES;
    if (unlikely(cpy_r_r39.f0 == NULL)) {
        goto CPyL118;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPED_NAMEDTUPLE_NAMES\" was not set");
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 238, CPyStatic_semanal_namedtuple___globals);
        goto CPyL114;
    }
    CPy_Unreachable();
CPyL23: ;
    CPy_INCREF(cpy_r_r39.f0);
    CPy_INCREF(cpy_r_r39.f1);
    cpy_r_r41 = PyTuple_New(2);
    if (unlikely(cpy_r_r41 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5993 = cpy_r_r39.f0;
    PyTuple_SET_ITEM(cpy_r_r41, 0, __tmp5993);
    PyObject *__tmp5994 = cpy_r_r39.f1;
    PyTuple_SET_ITEM(cpy_r_r41, 1, __tmp5994);
    cpy_r_r42 = PySequence_Contains(cpy_r_r41, cpy_r_fullname);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 238, CPyStatic_semanal_namedtuple___globals);
        goto CPyL117;
    }
    cpy_r_r44 = cpy_r_r42;
    if (!cpy_r_r44) goto CPyL119;
    cpy_r_is_typed = 1;
    goto CPyL28;
CPyL26: ;
    cpy_r_r45 = PyList_New(0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 241, CPyStatic_semanal_namedtuple___globals);
        goto CPyL114;
    }
    cpy_r_r46.f0 = 1;
    cpy_r_r46.f1 = 1;
    cpy_r_r46.f2 = cpy_r_r45;
    CPy_INCREF(cpy_r_r46.f2);
    CPy_DECREF(cpy_r_r46.f2);
    cpy_r_r47 = Py_None;
    cpy_r_r48 = Py_None;
    cpy_r_r49.f0 = cpy_r_r47;
    cpy_r_r49.f1 = cpy_r_r48;
    cpy_r_r49.f2 = cpy_r_r45;
    CPy_INCREF(cpy_r_r49.f0);
    CPy_INCREF(cpy_r_r49.f1);
    CPy_INCREF(cpy_r_r49.f2);
    CPy_DECREF(cpy_r_r45);
    return cpy_r_r49;
CPyL28: ;
    cpy_r_r50 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___parse_namedtuple_args(cpy_r_self, cpy_r_call, cpy_r_fullname);
    CPy_DECREF(cpy_r_fullname);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 242, CPyStatic_semanal_namedtuple___globals);
        goto CPyL120;
    }
    cpy_r_result = cpy_r_r50;
    cpy_r_r51 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r52 = cpy_r_result != cpy_r_r51;
    if (!cpy_r_r52) goto CPyL121;
    PyObject *__tmp5995;
    if (unlikely(!(PyTuple_Check(cpy_r_result) && PyTuple_GET_SIZE(cpy_r_result) == 6))) {
        __tmp5995 = NULL;
        goto __LL5996;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_result, 0))))
        __tmp5995 = PyTuple_GET_ITEM(cpy_r_result, 0);
    else {
        __tmp5995 = NULL;
    }
    if (__tmp5995 == NULL) goto __LL5996;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_result, 1))))
        __tmp5995 = PyTuple_GET_ITEM(cpy_r_result, 1);
    else {
        __tmp5995 = NULL;
    }
    if (__tmp5995 == NULL) goto __LL5996;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_result, 2))))
        __tmp5995 = PyTuple_GET_ITEM(cpy_r_result, 2);
    else {
        __tmp5995 = NULL;
    }
    if (__tmp5995 == NULL) goto __LL5996;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_result, 3))))
        __tmp5995 = PyTuple_GET_ITEM(cpy_r_result, 3);
    else {
        __tmp5995 = NULL;
    }
    if (__tmp5995 == NULL) goto __LL5996;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_result, 4))))
        __tmp5995 = PyTuple_GET_ITEM(cpy_r_result, 4);
    else {
        __tmp5995 = NULL;
    }
    if (__tmp5995 == NULL) goto __LL5996;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_result, 5))))
        __tmp5995 = PyTuple_GET_ITEM(cpy_r_result, 5);
    else {
        __tmp5995 = NULL;
    }
    if (__tmp5995 == NULL) goto __LL5996;
    __tmp5995 = cpy_r_result;
__LL5996: ;
    if (unlikely(__tmp5995 == NULL)) {
        CPy_TypeError("tuple[list, list, list, str, list, bool]", cpy_r_result); cpy_r_r53 = (tuple_T6OOOOOC) { NULL, NULL, NULL, NULL, NULL, 2 };
    } else {
        PyObject *__tmp5997 = PyTuple_GET_ITEM(cpy_r_result, 0);
        CPy_INCREF(__tmp5997);
        PyObject *__tmp5998;
        if (likely(PyList_Check(__tmp5997)))
            __tmp5998 = __tmp5997;
        else {
            CPy_TypeError("list", __tmp5997); 
            __tmp5998 = NULL;
        }
        cpy_r_r53.f0 = __tmp5998;
        PyObject *__tmp5999 = PyTuple_GET_ITEM(cpy_r_result, 1);
        CPy_INCREF(__tmp5999);
        PyObject *__tmp6000;
        if (likely(PyList_Check(__tmp5999)))
            __tmp6000 = __tmp5999;
        else {
            CPy_TypeError("list", __tmp5999); 
            __tmp6000 = NULL;
        }
        cpy_r_r53.f1 = __tmp6000;
        PyObject *__tmp6001 = PyTuple_GET_ITEM(cpy_r_result, 2);
        CPy_INCREF(__tmp6001);
        PyObject *__tmp6002;
        if (likely(PyList_Check(__tmp6001)))
            __tmp6002 = __tmp6001;
        else {
            CPy_TypeError("list", __tmp6001); 
            __tmp6002 = NULL;
        }
        cpy_r_r53.f2 = __tmp6002;
        PyObject *__tmp6003 = PyTuple_GET_ITEM(cpy_r_result, 3);
        CPy_INCREF(__tmp6003);
        PyObject *__tmp6004;
        if (likely(PyUnicode_Check(__tmp6003)))
            __tmp6004 = __tmp6003;
        else {
            CPy_TypeError("str", __tmp6003); 
            __tmp6004 = NULL;
        }
        cpy_r_r53.f3 = __tmp6004;
        PyObject *__tmp6005 = PyTuple_GET_ITEM(cpy_r_result, 4);
        CPy_INCREF(__tmp6005);
        PyObject *__tmp6006;
        if (likely(PyList_Check(__tmp6005)))
            __tmp6006 = __tmp6005;
        else {
            CPy_TypeError("list", __tmp6005); 
            __tmp6006 = NULL;
        }
        cpy_r_r53.f4 = __tmp6006;
        PyObject *__tmp6007 = PyTuple_GET_ITEM(cpy_r_result, 5);
        char __tmp6008;
        if (unlikely(!PyBool_Check(__tmp6007))) {
            CPy_TypeError("bool", __tmp6007); __tmp6008 = 2;
        } else
            __tmp6008 = __tmp6007 == Py_True;
        cpy_r_r53.f5 = __tmp6008;
    }
    if (unlikely(cpy_r_r53.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 242, CPyStatic_semanal_namedtuple___globals);
        goto CPyL122;
    }
    cpy_r_r54 = PyTuple_New(6);
    if (unlikely(cpy_r_r54 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6009 = cpy_r_r53.f0;
    PyTuple_SET_ITEM(cpy_r_r54, 0, __tmp6009);
    PyObject *__tmp6010 = cpy_r_r53.f1;
    PyTuple_SET_ITEM(cpy_r_r54, 1, __tmp6010);
    PyObject *__tmp6011 = cpy_r_r53.f2;
    PyTuple_SET_ITEM(cpy_r_r54, 2, __tmp6011);
    PyObject *__tmp6012 = cpy_r_r53.f3;
    PyTuple_SET_ITEM(cpy_r_r54, 3, __tmp6012);
    PyObject *__tmp6013 = cpy_r_r53.f4;
    PyTuple_SET_ITEM(cpy_r_r54, 4, __tmp6013);
    PyObject *__tmp6014 = cpy_r_r53.f5 ? Py_True : Py_False;
    CPy_INCREF(__tmp6014);
    PyTuple_SET_ITEM(cpy_r_r54, 5, __tmp6014);
    cpy_r_r55 = PyObject_IsTrue(cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 242, CPyStatic_semanal_namedtuple___globals);
        goto CPyL122;
    }
    cpy_r_r57 = cpy_r_r55;
    if (!cpy_r_r57) goto CPyL121;
    PyObject *__tmp6015;
    if (unlikely(!(PyTuple_Check(cpy_r_result) && PyTuple_GET_SIZE(cpy_r_result) == 6))) {
        __tmp6015 = NULL;
        goto __LL6016;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_result, 0))))
        __tmp6015 = PyTuple_GET_ITEM(cpy_r_result, 0);
    else {
        __tmp6015 = NULL;
    }
    if (__tmp6015 == NULL) goto __LL6016;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_result, 1))))
        __tmp6015 = PyTuple_GET_ITEM(cpy_r_result, 1);
    else {
        __tmp6015 = NULL;
    }
    if (__tmp6015 == NULL) goto __LL6016;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_result, 2))))
        __tmp6015 = PyTuple_GET_ITEM(cpy_r_result, 2);
    else {
        __tmp6015 = NULL;
    }
    if (__tmp6015 == NULL) goto __LL6016;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_result, 3))))
        __tmp6015 = PyTuple_GET_ITEM(cpy_r_result, 3);
    else {
        __tmp6015 = NULL;
    }
    if (__tmp6015 == NULL) goto __LL6016;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_result, 4))))
        __tmp6015 = PyTuple_GET_ITEM(cpy_r_result, 4);
    else {
        __tmp6015 = NULL;
    }
    if (__tmp6015 == NULL) goto __LL6016;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_result, 5))))
        __tmp6015 = PyTuple_GET_ITEM(cpy_r_result, 5);
    else {
        __tmp6015 = NULL;
    }
    if (__tmp6015 == NULL) goto __LL6016;
    __tmp6015 = cpy_r_result;
__LL6016: ;
    if (unlikely(__tmp6015 == NULL)) {
        CPy_TypeError("tuple[list, list, list, str, list, bool]", cpy_r_result); cpy_r_r58 = (tuple_T6OOOOOC) { NULL, NULL, NULL, NULL, NULL, 2 };
    } else {
        PyObject *__tmp6017 = PyTuple_GET_ITEM(cpy_r_result, 0);
        CPy_INCREF(__tmp6017);
        PyObject *__tmp6018;
        if (likely(PyList_Check(__tmp6017)))
            __tmp6018 = __tmp6017;
        else {
            CPy_TypeError("list", __tmp6017); 
            __tmp6018 = NULL;
        }
        cpy_r_r58.f0 = __tmp6018;
        PyObject *__tmp6019 = PyTuple_GET_ITEM(cpy_r_result, 1);
        CPy_INCREF(__tmp6019);
        PyObject *__tmp6020;
        if (likely(PyList_Check(__tmp6019)))
            __tmp6020 = __tmp6019;
        else {
            CPy_TypeError("list", __tmp6019); 
            __tmp6020 = NULL;
        }
        cpy_r_r58.f1 = __tmp6020;
        PyObject *__tmp6021 = PyTuple_GET_ITEM(cpy_r_result, 2);
        CPy_INCREF(__tmp6021);
        PyObject *__tmp6022;
        if (likely(PyList_Check(__tmp6021)))
            __tmp6022 = __tmp6021;
        else {
            CPy_TypeError("list", __tmp6021); 
            __tmp6022 = NULL;
        }
        cpy_r_r58.f2 = __tmp6022;
        PyObject *__tmp6023 = PyTuple_GET_ITEM(cpy_r_result, 3);
        CPy_INCREF(__tmp6023);
        PyObject *__tmp6024;
        if (likely(PyUnicode_Check(__tmp6023)))
            __tmp6024 = __tmp6023;
        else {
            CPy_TypeError("str", __tmp6023); 
            __tmp6024 = NULL;
        }
        cpy_r_r58.f3 = __tmp6024;
        PyObject *__tmp6025 = PyTuple_GET_ITEM(cpy_r_result, 4);
        CPy_INCREF(__tmp6025);
        PyObject *__tmp6026;
        if (likely(PyList_Check(__tmp6025)))
            __tmp6026 = __tmp6025;
        else {
            CPy_TypeError("list", __tmp6025); 
            __tmp6026 = NULL;
        }
        cpy_r_r58.f4 = __tmp6026;
        PyObject *__tmp6027 = PyTuple_GET_ITEM(cpy_r_result, 5);
        char __tmp6028;
        if (unlikely(!PyBool_Check(__tmp6027))) {
            CPy_TypeError("bool", __tmp6027); __tmp6028 = 2;
        } else
            __tmp6028 = __tmp6027 == Py_True;
        cpy_r_r58.f5 = __tmp6028;
    }
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r58.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 244, CPyStatic_semanal_namedtuple___globals);
        goto CPyL120;
    }
    cpy_r_r59 = cpy_r_r58.f0;
    CPy_INCREF(cpy_r_r59);
    cpy_r_items = cpy_r_r59;
    cpy_r_r60 = cpy_r_r58.f1;
    CPy_INCREF(cpy_r_r60);
    cpy_r_types = cpy_r_r60;
    cpy_r_r61 = cpy_r_r58.f2;
    CPy_INCREF(cpy_r_r61);
    cpy_r_defaults = cpy_r_r61;
    cpy_r_r62 = cpy_r_r58.f3;
    CPy_INCREF(cpy_r_r62);
    cpy_r_typename = cpy_r_r62;
    cpy_r_r63 = cpy_r_r58.f4;
    CPy_INCREF(cpy_r_r63);
    cpy_r_tvar_defs = cpy_r_r63;
    cpy_r_r64 = cpy_r_r58.f5;
    CPy_DECREF(cpy_r_r58.f0);
    CPy_DECREF(cpy_r_r58.f1);
    CPy_DECREF(cpy_r_r58.f2);
    CPy_DECREF(cpy_r_r58.f3);
    CPy_DECREF(cpy_r_r58.f4);
    cpy_r_ok = cpy_r_r64;
    goto CPyL64;
CPyL35: ;
    cpy_r_r65 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r66 = cpy_r_var_name != cpy_r_r65;
    if (!cpy_r_r66) goto CPyL44;
    CPy_INCREF(cpy_r_var_name);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r67 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 214, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_var_name);
        goto CPyL120;
    }
    cpy_r_r68 = CPyStr_IsTrue(cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    if (!cpy_r_r68) goto CPyL44;
    CPy_INCREF(cpy_r_var_name);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r69 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 248, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_var_name);
        goto CPyL120;
    }
    cpy_r_name = cpy_r_r69;
    if (!cpy_r_is_func_scope) goto CPyL123;
    cpy_r_r70 = CPyStatics[1784]; /* '@' */
    cpy_r_r71 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_line;
    CPyTagged_INCREF(cpy_r_r71);
    cpy_r_r72 = CPyTagged_Str(cpy_r_r71);
    CPyTagged_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 250, CPyStatic_semanal_namedtuple___globals);
        goto CPyL124;
    }
    cpy_r_r73 = PyUnicode_Concat(cpy_r_r70, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 250, CPyStatic_semanal_namedtuple___globals);
        goto CPyL124;
    }
    cpy_r_r74 = CPyStr_Append(cpy_r_name, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 250, CPyStatic_semanal_namedtuple___globals);
        goto CPyL120;
    }
    cpy_r_name = cpy_r_r74;
    goto CPyL123;
CPyL44: ;
    cpy_r_r75 = CPyStatics[5203]; /* 'namedtuple@' */
    cpy_r_r76 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_line;
    CPyTagged_INCREF(cpy_r_r76);
    cpy_r_r77 = CPyTagged_Str(cpy_r_r76);
    CPyTagged_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 252, CPyStatic_semanal_namedtuple___globals);
        goto CPyL120;
    }
    cpy_r_r78 = PyUnicode_Concat(cpy_r_r75, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 252, CPyStatic_semanal_namedtuple___globals);
        goto CPyL120;
    }
    CPy_INCREF(cpy_r_r78);
    cpy_r_name = cpy_r_r78;
    cpy_r_var_name = cpy_r_r78;
CPyL47: ;
    cpy_r_r79 = PyList_New(0);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 253, CPyStatic_semanal_namedtuple___globals);
        goto CPyL125;
    }
    cpy_r_r80 = PyList_New(0);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 253, CPyStatic_semanal_namedtuple___globals);
        goto CPyL126;
    }
    cpy_r_r81 = PyDict_New();
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 253, CPyStatic_semanal_namedtuple___globals);
        goto CPyL127;
    }
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r82 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 253, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL128;
    }
    cpy_r_r83 = ((mypy___nodes___CallExprObject *)cpy_r_r82)->_line;
    CPyTagged_INCREF(cpy_r_r83);
    cpy_r_r84 = Py_None;
    cpy_r_r85 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___build_namedtuple_typeinfo(cpy_r_self, cpy_r_name, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r81);
    CPyTagged_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 253, CPyStatic_semanal_namedtuple___globals);
        goto CPyL125;
    }
    cpy_r_info = cpy_r_r85;
    CPy_INCREF(cpy_r_var_name);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r86 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 254, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_var_name);
        goto CPyL129;
    }
    cpy_r_r87 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___store_namedtuple_info(cpy_r_self, cpy_r_info, cpy_r_r86, cpy_r_call, cpy_r_is_typed);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_call);
    if (unlikely(cpy_r_r87 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 254, CPyStatic_semanal_namedtuple___globals);
        goto CPyL130;
    }
    CPy_INCREF(cpy_r_var_name);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r88 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 255, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_var_name);
        goto CPyL130;
    }
    cpy_r_r89 = PyUnicode_Compare(cpy_r_name, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r90 = cpy_r_r89 == -1;
    if (!cpy_r_r90) goto CPyL58;
    cpy_r_r91 = PyErr_Occurred();
    cpy_r_r92 = cpy_r_r91 != NULL;
    if (!cpy_r_r92) goto CPyL58;
    cpy_r_r93 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 255, CPyStatic_semanal_namedtuple___globals);
        goto CPyL130;
    }
CPyL58: ;
    cpy_r_r94 = cpy_r_r89 != 0;
    if (cpy_r_r94) goto CPyL60;
    if (!cpy_r_is_func_scope) goto CPyL131;
CPyL60: ;
    cpy_r_r95 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r95);
    cpy_r_r96 = CPY_GET_METHOD_TRAIT(cpy_r_r95, CPyType_semanal_shared___SemanticAnalyzerInterface, 11, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r95, cpy_r_name, cpy_r_info); /* add_symbol_skip_local */
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 257, CPyStatic_semanal_namedtuple___globals);
        goto CPyL132;
    }
CPyL61: ;
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r97 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 258, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_var_name);
        goto CPyL133;
    }
    cpy_r_r98 = PyList_New(0);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 258, CPyStatic_semanal_namedtuple___globals);
        goto CPyL134;
    }
    cpy_r_r99.f0 = cpy_r_r97;
    cpy_r_r99.f1 = cpy_r_info;
    cpy_r_r99.f2 = cpy_r_r98;
    CPy_INCREF(cpy_r_r99.f0);
    CPy_INCREF(cpy_r_r99.f1);
    CPy_INCREF(cpy_r_r99.f2);
    CPy_DECREF(cpy_r_info);
    cpy_r_r100 = cpy_r_r99.f1;
    CPy_INCREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r99.f0);
    CPy_DECREF(cpy_r_r99.f1);
    CPy_DECREF(cpy_r_r99.f2);
    cpy_r_r101.f0 = cpy_r_r97;
    cpy_r_r101.f1 = cpy_r_r100;
    cpy_r_r101.f2 = cpy_r_r98;
    CPy_INCREF(cpy_r_r101.f0);
    CPy_INCREF(cpy_r_r101.f1);
    CPy_INCREF(cpy_r_r101.f2);
    CPy_DECREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r98);
    return cpy_r_r101;
CPyL64: ;
    if (cpy_r_ok) {
        goto CPyL67;
    } else
        goto CPyL135;
CPyL65: ;
    cpy_r_r102 = PyList_New(0);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 261, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    cpy_r_r103.f0 = cpy_r_typename;
    cpy_r_r103.f1 = 1;
    cpy_r_r103.f2 = cpy_r_r102;
    CPy_INCREF(cpy_r_r103.f0);
    CPy_INCREF(cpy_r_r103.f2);
    CPy_DECREF(cpy_r_typename);
    cpy_r_r104 = cpy_r_r103.f0;
    CPy_INCREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r103.f0);
    CPy_DECREF(cpy_r_r103.f2);
    cpy_r_r105 = Py_None;
    cpy_r_r106.f0 = cpy_r_r104;
    cpy_r_r106.f1 = cpy_r_r105;
    cpy_r_r106.f2 = cpy_r_r102;
    CPy_INCREF(cpy_r_r106.f0);
    CPy_INCREF(cpy_r_r106.f1);
    CPy_INCREF(cpy_r_r106.f2);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r102);
    return cpy_r_r106;
CPyL67: ;
    cpy_r_r107 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r108 = cpy_r_var_name != cpy_r_r107;
    if (!cpy_r_r108) goto CPyL72;
    CPy_INCREF(cpy_r_var_name);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r109 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 214, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_var_name);
        goto CPyL137;
    }
    cpy_r_r110 = CPyStr_IsTrue(cpy_r_r109);
    CPy_DECREF(cpy_r_r109);
    if (!cpy_r_r110) goto CPyL72;
    CPy_INCREF(cpy_r_var_name);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r111 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 269, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_var_name);
        goto CPyL137;
    }
    cpy_r_name = cpy_r_r111;
    goto CPyL73;
CPyL72: ;
    CPy_INCREF(cpy_r_typename);
    cpy_r_name = cpy_r_typename;
CPyL73: ;
    cpy_r_r112 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r113 = cpy_r_var_name == cpy_r_r112;
    if (cpy_r_r113) goto CPyL75;
    if (!cpy_r_is_func_scope) goto CPyL79;
CPyL75: ;
    cpy_r_r114 = CPyStatics[1784]; /* '@' */
    cpy_r_r115 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_line;
    CPyTagged_INCREF(cpy_r_r115);
    cpy_r_r116 = CPyTagged_Str(cpy_r_r115);
    CPyTagged_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 282, CPyStatic_semanal_namedtuple___globals);
        goto CPyL138;
    }
    cpy_r_r117 = PyUnicode_Concat(cpy_r_r114, cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 282, CPyStatic_semanal_namedtuple___globals);
        goto CPyL138;
    }
    cpy_r_r118 = CPyStr_Append(cpy_r_name, cpy_r_r117);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 282, CPyStatic_semanal_namedtuple___globals);
        goto CPyL137;
    }
    cpy_r_name = cpy_r_r118;
CPyL79: ;
    cpy_r_r119 = (CPyPtr)&((PyVarObject *)cpy_r_defaults)->ob_size;
    cpy_r_r120 = *(int64_t *)cpy_r_r119;
    cpy_r_r121 = cpy_r_r120 << 1;
    cpy_r_r122 = cpy_r_r121 != 0;
    if (!cpy_r_r122) goto CPyL139;
    cpy_r_r123 = PyDict_New();
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 284, CPyStatic_semanal_namedtuple___globals);
        goto CPyL138;
    }
    cpy_r_r124 = (CPyPtr)&((PyVarObject *)cpy_r_defaults)->ob_size;
    cpy_r_r125 = *(int64_t *)cpy_r_r124;
    cpy_r_r126 = cpy_r_r125 << 1;
    cpy_r_r127 = CPyTagged_Negate(cpy_r_r126);
    cpy_r_r128 = CPyList_GetSlice(cpy_r_items, cpy_r_r127, 9223372036854775806LL);
    CPyTagged_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 285, CPyStatic_semanal_namedtuple___globals);
        goto CPyL140;
    }
    if (likely(PyList_Check(cpy_r_r128)))
        cpy_r_r129 = cpy_r_r128;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 285, CPyStatic_semanal_namedtuple___globals, "list", cpy_r_r128);
        goto CPyL140;
    }
    cpy_r_r130 = 0;
    cpy_r_r131 = 0;
CPyL84: ;
    cpy_r_r132 = (CPyPtr)&((PyVarObject *)cpy_r_r129)->ob_size;
    cpy_r_r133 = *(int64_t *)cpy_r_r132;
    cpy_r_r134 = cpy_r_r133 << 1;
    cpy_r_r135 = (Py_ssize_t)cpy_r_r130 < (Py_ssize_t)cpy_r_r134;
    if (!cpy_r_r135) goto CPyL141;
    cpy_r_r136 = (CPyPtr)&((PyVarObject *)cpy_r_defaults)->ob_size;
    cpy_r_r137 = *(int64_t *)cpy_r_r136;
    cpy_r_r138 = cpy_r_r137 << 1;
    cpy_r_r139 = (Py_ssize_t)cpy_r_r131 < (Py_ssize_t)cpy_r_r138;
    if (!cpy_r_r139) goto CPyL141;
    cpy_r_r140 = CPyList_GetItemUnsafe(cpy_r_r129, cpy_r_r130);
    if (likely(PyUnicode_Check(cpy_r_r140)))
        cpy_r_r141 = cpy_r_r140;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 284, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_r140);
        goto CPyL142;
    }
    cpy_r_arg_name = cpy_r_r141;
    cpy_r_r142 = CPyList_GetItemUnsafe(cpy_r_defaults, cpy_r_r131);
    if (likely(PyObject_TypeCheck(cpy_r_r142, CPyType_nodes___Expression)))
        cpy_r_r143 = cpy_r_r142;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 284, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Expression", cpy_r_r142);
        goto CPyL143;
    }
    cpy_r_default = cpy_r_r143;
    cpy_r_r144 = CPyDict_SetItem(cpy_r_r123, cpy_r_arg_name, cpy_r_default);
    CPy_DECREF(cpy_r_arg_name);
    CPy_DECREF(cpy_r_default);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 284, CPyStatic_semanal_namedtuple___globals);
        goto CPyL142;
    }
    cpy_r_r146 = cpy_r_r130 + 2;
    cpy_r_r130 = cpy_r_r146;
    cpy_r_r147 = cpy_r_r131 + 2;
    cpy_r_r131 = cpy_r_r147;
    goto CPyL84;
CPyL90: ;
    cpy_r_default_items = cpy_r_r123;
    goto CPyL93;
CPyL91: ;
    cpy_r_r148 = PyDict_New();
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 288, CPyStatic_semanal_namedtuple___globals);
        goto CPyL144;
    }
    cpy_r_default_items = cpy_r_r148;
CPyL93: ;
    cpy_r_r149 = Py_None;
    CPy_INCREF(cpy_r_r149);
    cpy_r_existing_info = cpy_r_r149;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r150 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 291, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL145;
    }
    cpy_r_r151 = ((mypy___nodes___CallExprObject *)cpy_r_r150)->_analyzed;
    cpy_r_r152 = (PyObject *)CPyType_nodes___NamedTupleExpr;
    cpy_r_r153 = (CPyPtr)&((PyObject *)cpy_r_r151)->ob_type;
    cpy_r_r154 = *(PyObject * *)cpy_r_r153;
    cpy_r_r155 = cpy_r_r154 == cpy_r_r152;
    if (cpy_r_r155) {
        goto CPyL146;
    } else
        goto CPyL98;
CPyL95: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r156 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 292, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL147;
    }
    cpy_r_r157 = ((mypy___nodes___CallExprObject *)cpy_r_r156)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r157) == CPyType_nodes___NamedTupleExpr))
        cpy_r_r158 = cpy_r_r157;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 292, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.NamedTupleExpr", cpy_r_r157);
        goto CPyL147;
    }
    cpy_r_r159 = ((mypy___nodes___NamedTupleExprObject *)cpy_r_r158)->_info;
    CPy_INCREF(cpy_r_r159);
    cpy_r_existing_info = cpy_r_r159;
CPyL98: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r160 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 294, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL145;
    }
    cpy_r_r161 = ((mypy___nodes___CallExprObject *)cpy_r_r160)->_line;
    CPyTagged_INCREF(cpy_r_r161);
    cpy_r_r162 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___build_namedtuple_typeinfo(cpy_r_self, cpy_r_name, cpy_r_items, cpy_r_types, cpy_r_default_items, cpy_r_r161, cpy_r_existing_info);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_default_items);
    CPyTagged_DECREF(cpy_r_r161);
    CPy_DECREF(cpy_r_existing_info);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 293, CPyStatic_semanal_namedtuple___globals);
        goto CPyL148;
    }
    cpy_r_info = cpy_r_r162;
    cpy_r_r163 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r164 = cpy_r_var_name != cpy_r_r163;
    if (!cpy_r_r164) goto CPyL105;
    CPy_INCREF(cpy_r_var_name);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r165 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 214, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_var_name);
        goto CPyL149;
    }
    cpy_r_r166 = CPyStr_IsTrue(cpy_r_r165);
    CPy_DECREF(cpy_r_r165);
    if (!cpy_r_r166) goto CPyL105;
    CPy_INCREF(cpy_r_var_name);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r167 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 301, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_var_name);
        goto CPyL149;
    }
    cpy_r_r168 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___store_namedtuple_info(cpy_r_self, cpy_r_info, cpy_r_r167, cpy_r_call, cpy_r_is_typed);
    CPy_DECREF(cpy_r_r167);
    CPy_DECREF(cpy_r_call);
    if (unlikely(cpy_r_r168 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 301, CPyStatic_semanal_namedtuple___globals);
        goto CPyL150;
    } else
        goto CPyL108;
CPyL105: ;
    cpy_r_r169 = CPyDef_nodes___NamedTupleExpr(cpy_r_info, cpy_r_is_typed);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 303, CPyStatic_semanal_namedtuple___globals);
        goto CPyL149;
    }
    CPy_DECREF(((mypy___nodes___CallExprObject *)cpy_r_call)->_analyzed);
    ((mypy___nodes___CallExprObject *)cpy_r_call)->_analyzed = cpy_r_r169;
    cpy_r_r171 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_analyzed;
    CPy_INCREF(cpy_r_r171);
    if (likely(Py_TYPE(cpy_r_r171) == CPyType_nodes___NamedTupleExpr))
        cpy_r_r172 = cpy_r_r171;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 304, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.NamedTupleExpr", cpy_r_r171);
        goto CPyL149;
    }
    cpy_r_r173 = NULL;
    cpy_r_r174 = NULL;
    cpy_r_r175 = NULL;
    cpy_r_r176 = CPyDef_nodes___Context___set_line(cpy_r_r172, cpy_r_call, cpy_r_r173, cpy_r_r174, cpy_r_r175);
    CPy_DECREF(cpy_r_call);
    CPy_DECREF(cpy_r_r172);
    if (unlikely(cpy_r_r176 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 304, CPyStatic_semanal_namedtuple___globals);
        goto CPyL150;
    }
CPyL108: ;
    cpy_r_r177 = PyObject_RichCompare(cpy_r_name, cpy_r_var_name, 3);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 317, CPyStatic_semanal_namedtuple___globals);
        goto CPyL150;
    }
    if (unlikely(!PyBool_Check(cpy_r_r177))) {
        CPy_TypeError("bool", cpy_r_r177); cpy_r_r178 = 2;
    } else
        cpy_r_r178 = cpy_r_r177 == Py_True;
    CPy_DECREF(cpy_r_r177);
    if (unlikely(cpy_r_r178 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 317, CPyStatic_semanal_namedtuple___globals);
        goto CPyL150;
    }
    if (cpy_r_r178) goto CPyL112;
    if (!cpy_r_is_func_scope) goto CPyL151;
CPyL112: ;
    cpy_r_r179 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r179);
    cpy_r_r180 = CPY_GET_METHOD_TRAIT(cpy_r_r179, CPyType_semanal_shared___SemanticAnalyzerInterface, 11, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r179, cpy_r_name, cpy_r_info); /* add_symbol_skip_local */
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r179);
    if (unlikely(cpy_r_r180 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 319, CPyStatic_semanal_namedtuple___globals);
        goto CPyL152;
    }
CPyL113: ;
    cpy_r_r181.f0 = cpy_r_typename;
    cpy_r_r181.f1 = cpy_r_info;
    cpy_r_r181.f2 = cpy_r_tvar_defs;
    CPy_INCREF(cpy_r_r181.f0);
    CPy_INCREF(cpy_r_r181.f1);
    CPy_INCREF(cpy_r_r181.f2);
    CPy_DECREF(cpy_r_typename);
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_tvar_defs);
    cpy_r_r182 = cpy_r_r181.f0;
    CPy_INCREF(cpy_r_r182);
    cpy_r_r183 = cpy_r_r181.f1;
    CPy_INCREF(cpy_r_r183);
    cpy_r_r184 = cpy_r_r181.f2;
    CPy_INCREF(cpy_r_r184);
    CPy_DECREF(cpy_r_r181.f0);
    CPy_DECREF(cpy_r_r181.f1);
    CPy_DECREF(cpy_r_r181.f2);
    cpy_r_r185.f0 = cpy_r_r182;
    cpy_r_r185.f1 = cpy_r_r183;
    cpy_r_r185.f2 = cpy_r_r184;
    CPy_INCREF(cpy_r_r185.f0);
    CPy_INCREF(cpy_r_r185.f1);
    CPy_INCREF(cpy_r_r185.f2);
    CPy_DECREF(cpy_r_r182);
    CPy_DECREF(cpy_r_r183);
    CPy_DECREF(cpy_r_r184);
    return cpy_r_r185;
CPyL114: ;
    tuple_T3OOO __tmp6029 = { NULL, NULL, NULL };
    cpy_r_r186 = __tmp6029;
    return cpy_r_r186;
CPyL115: ;
    CPy_DECREF(cpy_r_call);
    CPy_DECREF(cpy_r_callee);
    goto CPyL11;
CPyL116: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_callee);
    goto CPyL114;
CPyL117: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_fullname);
    goto CPyL114;
CPyL118: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_fullname);
    goto CPyL21;
CPyL119: ;
    CPy_DECREF(cpy_r_call);
    CPy_DECREF(cpy_r_fullname);
    goto CPyL26;
CPyL120: ;
    CPy_DecRef(cpy_r_call);
    goto CPyL114;
CPyL121: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL35;
CPyL122: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_result);
    goto CPyL114;
CPyL123: ;
    CPy_INCREF(cpy_r_var_name);
    goto CPyL47;
CPyL124: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    goto CPyL114;
CPyL125: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    goto CPyL114;
CPyL126: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r79);
    goto CPyL114;
CPyL127: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r80);
    goto CPyL114;
CPyL128: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r81);
    goto CPyL114;
CPyL129: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_info);
    goto CPyL114;
CPyL130: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_info);
    goto CPyL114;
CPyL131: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL61;
CPyL132: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_info);
    goto CPyL114;
CPyL133: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL114;
CPyL134: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r97);
    goto CPyL114;
CPyL135: ;
    CPy_DECREF(cpy_r_call);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_defaults);
    CPy_DECREF(cpy_r_tvar_defs);
    goto CPyL65;
CPyL136: ;
    CPy_DecRef(cpy_r_typename);
    goto CPyL114;
CPyL137: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_tvar_defs);
    goto CPyL114;
CPyL138: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_name);
    goto CPyL114;
CPyL139: ;
    CPy_DECREF(cpy_r_defaults);
    goto CPyL91;
CPyL140: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r123);
    goto CPyL114;
CPyL141: ;
    CPy_DECREF(cpy_r_defaults);
    CPy_DECREF(cpy_r_r129);
    goto CPyL90;
CPyL142: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r129);
    goto CPyL114;
CPyL143: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_arg_name);
    goto CPyL114;
CPyL144: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_name);
    goto CPyL114;
CPyL145: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_default_items);
    CPy_DecRef(cpy_r_existing_info);
    goto CPyL114;
CPyL146: ;
    CPy_DECREF(cpy_r_existing_info);
    goto CPyL95;
CPyL147: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_default_items);
    goto CPyL114;
CPyL148: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_name);
    goto CPyL114;
CPyL149: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_info);
    goto CPyL114;
CPyL150: ;
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_info);
    goto CPyL114;
CPyL151: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL113;
CPyL152: ;
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_info);
    goto CPyL114;
}

PyObject *CPyPy_semanal_namedtuple___NamedTupleAnalyzer___check_namedtuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", "var_name", "is_func_scope", 0};
    static CPyArg_Parser parser = {"OOO:check_namedtuple", kwlist, 0};
    PyObject *obj_node;
    PyObject *obj_var_name;
    PyObject *obj_is_func_scope;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_node, &obj_var_name, &obj_is_func_scope)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_namedtuple___NamedTupleAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_namedtuple.NamedTupleAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___Expression)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_node); 
        goto fail;
    }
    PyObject *arg_var_name;
    if (PyUnicode_Check(obj_var_name))
        arg_var_name = obj_var_name;
    else {
        arg_var_name = NULL;
    }
    if (arg_var_name != NULL) goto __LL6030;
    if (obj_var_name == Py_None)
        arg_var_name = obj_var_name;
    else {
        arg_var_name = NULL;
    }
    if (arg_var_name != NULL) goto __LL6030;
    CPy_TypeError("str or None", obj_var_name); 
    goto fail;
__LL6030: ;
    char arg_is_func_scope;
    if (unlikely(!PyBool_Check(obj_is_func_scope))) {
        CPy_TypeError("bool", obj_is_func_scope); goto fail;
    } else
        arg_is_func_scope = obj_is_func_scope == Py_True;
    tuple_T3OOO retval = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___check_namedtuple(arg_self, arg_node, arg_var_name, arg_is_func_scope);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6031 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp6031);
    PyObject *__tmp6032 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp6032);
    PyObject *__tmp6033 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp6033);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "check_namedtuple", 213, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

char CPyDef_semanal_namedtuple___NamedTupleAnalyzer___store_namedtuple_info(PyObject *cpy_r_self, PyObject *cpy_r_info, PyObject *cpy_r_name, PyObject *cpy_r_call, char cpy_r_is_typed) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 2;
    cpy_r_r2 = 2;
    cpy_r_r3 = 2;
    cpy_r_r4 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_semanal_shared___SemanticAnalyzerInterface, 10, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *, char, char, char))(cpy_r_r0, cpy_r_name, cpy_r_info, cpy_r_call, cpy_r_r1, cpy_r_r2, cpy_r_r3); /* add_symbol */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "store_namedtuple_info", 325, CPyStatic_semanal_namedtuple___globals);
        goto CPyL5;
    }
    cpy_r_r5 = CPyDef_nodes___NamedTupleExpr(cpy_r_info, cpy_r_is_typed);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "store_namedtuple_info", 326, CPyStatic_semanal_namedtuple___globals);
        goto CPyL5;
    }
    CPy_DECREF(((mypy___nodes___CallExprObject *)cpy_r_call)->_analyzed);
    ((mypy___nodes___CallExprObject *)cpy_r_call)->_analyzed = cpy_r_r5;
    cpy_r_r7 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_analyzed;
    CPy_INCREF(cpy_r_r7);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_nodes___NamedTupleExpr))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "store_namedtuple_info", 327, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.NamedTupleExpr", cpy_r_r7);
        goto CPyL5;
    }
    cpy_r_r9 = NULL;
    cpy_r_r10 = NULL;
    cpy_r_r11 = NULL;
    cpy_r_r12 = CPyDef_nodes___Context___set_line(cpy_r_r8, cpy_r_call, cpy_r_r9, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "store_namedtuple_info", 327, CPyStatic_semanal_namedtuple___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
}

PyObject *CPyPy_semanal_namedtuple___NamedTupleAnalyzer___store_namedtuple_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"info", "name", "call", "is_typed", 0};
    static CPyArg_Parser parser = {"OOOO:store_namedtuple_info", kwlist, 0};
    PyObject *obj_info;
    PyObject *obj_name;
    PyObject *obj_call;
    PyObject *obj_is_typed;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_info, &obj_name, &obj_call, &obj_is_typed)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_namedtuple___NamedTupleAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_namedtuple.NamedTupleAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_call;
    if (likely(Py_TYPE(obj_call) == CPyType_nodes___CallExpr))
        arg_call = obj_call;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_call); 
        goto fail;
    }
    char arg_is_typed;
    if (unlikely(!PyBool_Check(obj_is_typed))) {
        CPy_TypeError("bool", obj_is_typed); goto fail;
    } else
        arg_is_typed = obj_is_typed == Py_True;
    char retval = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___store_namedtuple_info(arg_self, arg_info, arg_name, arg_call, arg_is_typed);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "store_namedtuple_info", 322, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

PyObject *CPyDef_semanal_namedtuple___NamedTupleAnalyzer___parse_namedtuple_args(PyObject *cpy_r_self, PyObject *cpy_r_call, PyObject *cpy_r_fullname) {
    tuple_T2OO cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_type_name;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_args;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_defaults;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    tuple_T2OO cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    tuple_T2IO cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_arg_name;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyPtr cpy_r_r64;
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
    char cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyPtr cpy_r_r86;
    CPyPtr cpy_r_r87;
    CPyPtr cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyPtr cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_typename;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_tvar_defs;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    CPyPtr cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    CPyPtr cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    CPyPtr cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_str_expr;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_listexpr;
    PyObject *cpy_r_r147;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    char cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    CPyPtr cpy_r_r155;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    CPyPtr cpy_r_r168;
    PyObject *cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    CPyPtr cpy_r_r176;
    int64_t cpy_r_r177;
    PyObject *cpy_r_r178;
    CPyTagged cpy_r_r179;
    CPyPtr cpy_r_r180;
    int64_t cpy_r_r181;
    CPyTagged cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r186;
    char cpy_r_r187;
    CPyTagged cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    CPyPtr cpy_r_r191;
    PyObject *cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    CPyTagged cpy_r_r199;
    CPyPtr cpy_r_r200;
    int64_t cpy_r_r201;
    CPyTagged cpy_r_r202;
    char cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r206;
    CPyPtr cpy_r_r207;
    PyObject *cpy_r_r208;
    char cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    CPyPtr cpy_r_r213;
    int64_t cpy_r_r214;
    CPyTagged cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    int32_t cpy_r_r221;
    char cpy_r_r222;
    CPyTagged cpy_r_r223;
    PyObject *cpy_r_type_exprs;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    CPyPtr cpy_r_r227;
    PyObject *cpy_r_r228;
    char cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r236;
    char cpy_r_r237;
    PyObject *cpy_r_r238;
    tuple_T4OOOC cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r__;
    char cpy_r_r243;
    char cpy_r_ok;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    tuple_T6OOOOOC cpy_r_r248;
    PyObject *cpy_r_r249;
    CPyPtr cpy_r_r250;
    int64_t cpy_r_r251;
    CPyTagged cpy_r_r252;
    char cpy_r_r253;
    CPyPtr cpy_r_r254;
    int64_t cpy_r_r255;
    PyObject *cpy_r_r256;
    CPyTagged cpy_r_r257;
    CPyPtr cpy_r_r258;
    int64_t cpy_r_r259;
    CPyTagged cpy_r_r260;
    char cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r___2;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    CPyTagged cpy_r_r266;
    CPyTagged cpy_r_r267;
    PyObject *cpy_r_r268;
    char cpy_r_r269;
    CPyTagged cpy_r_r270;
    PyObject *cpy_r_r271;
    CPyTagged cpy_r_r272;
    CPyPtr cpy_r_r273;
    int64_t cpy_r_r274;
    CPyTagged cpy_r_r275;
    char cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_item_2;
    PyObject *cpy_r_r279;
    char cpy_r_r280;
    int32_t cpy_r_r281;
    char cpy_r_r282;
    CPyTagged cpy_r_r283;
    PyObject *cpy_r_underscore;
    CPyPtr cpy_r_r284;
    int64_t cpy_r_r285;
    CPyTagged cpy_r_r286;
    char cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    char cpy_r_r294;
    CPyPtr cpy_r_r295;
    int64_t cpy_r_r296;
    CPyTagged cpy_r_r297;
    CPyPtr cpy_r_r298;
    int64_t cpy_r_r299;
    CPyTagged cpy_r_r300;
    char cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    char cpy_r_r305;
    CPyPtr cpy_r_r306;
    int64_t cpy_r_r307;
    CPyTagged cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    tuple_T6OOOOOC cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    cpy_r_r0 = CPyStatic_types___TYPED_NAMEDTUPLE_NAMES;
    if (likely(cpy_r_r0.f0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPED_NAMEDTUPLE_NAMES\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 344, CPyStatic_semanal_namedtuple___globals);
        goto CPyL180;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_INCREF(cpy_r_r0.f0);
    CPy_INCREF(cpy_r_r0.f1);
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6034 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp6034);
    PyObject *__tmp6035 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp6035);
    cpy_r_r3 = PySequence_Contains(cpy_r_r2, cpy_r_fullname);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 344, CPyStatic_semanal_namedtuple___globals);
        goto CPyL180;
    }
    cpy_r_r5 = cpy_r_r3;
    if (!cpy_r_r5) goto CPyL6;
    cpy_r_r6 = CPyStatics[512]; /* 'NamedTuple' */
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = cpy_r_r6;
    goto CPyL7;
CPyL6: ;
    cpy_r_r8 = CPyStatics[5204]; /* 'namedtuple' */
    CPy_INCREF(cpy_r_r8);
    cpy_r_r7 = cpy_r_r8;
CPyL7: ;
    cpy_r_type_name = cpy_r_r7;
    cpy_r_r9 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_args;
    CPy_INCREF(cpy_r_r9);
    cpy_r_args = cpy_r_r9;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)4;
    if (cpy_r_r13) {
        goto CPyL181;
    } else
        goto CPyL11;
CPyL8: ;
    cpy_r_r14 = CPyStatics[5205]; /* 'Too few arguments for "' */
    cpy_r_r15 = CPyStatics[5206]; /* '()"' */
    cpy_r_r16 = CPyStr_Build(3, cpy_r_r14, cpy_r_type_name, cpy_r_r15);
    CPy_DECREF(cpy_r_type_name);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 348, CPyStatic_semanal_namedtuple___globals);
        goto CPyL180;
    }
    cpy_r_r17 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r16, cpy_r_call);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 348, CPyStatic_semanal_namedtuple___globals);
        goto CPyL180;
    }
    cpy_r_r18 = Py_None;
    CPy_INCREF(cpy_r_r18);
    return cpy_r_r18;
CPyL11: ;
    cpy_r_r19 = PyList_New(0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 350, CPyStatic_semanal_namedtuple___globals);
        goto CPyL182;
    }
    cpy_r_defaults = cpy_r_r19;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r22 > (Py_ssize_t)4;
    if (!cpy_r_r23) goto CPyL47;
    cpy_r_r24 = CPyStatic_types___TYPED_NAMEDTUPLE_NAMES;
    if (unlikely(cpy_r_r24.f0 == NULL)) {
        goto CPyL183;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPED_NAMEDTUPLE_NAMES\" was not set");
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 353, CPyStatic_semanal_namedtuple___globals);
        goto CPyL180;
    }
    CPy_Unreachable();
CPyL16: ;
    CPy_INCREF(cpy_r_r24.f0);
    CPy_INCREF(cpy_r_r24.f1);
    cpy_r_r26 = PyTuple_New(2);
    if (unlikely(cpy_r_r26 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6036 = cpy_r_r24.f0;
    PyTuple_SET_ITEM(cpy_r_r26, 0, __tmp6036);
    PyObject *__tmp6037 = cpy_r_r24.f1;
    PyTuple_SET_ITEM(cpy_r_r26, 1, __tmp6037);
    cpy_r_r27 = PySequence_Contains(cpy_r_r26, cpy_r_fullname);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 353, CPyStatic_semanal_namedtuple___globals);
        goto CPyL184;
    }
    cpy_r_r29 = cpy_r_r27;
    if (cpy_r_r29) {
        goto CPyL185;
    } else
        goto CPyL20;
CPyL18: ;
    cpy_r_r30 = CPyStatics[5207]; /* 'Too many arguments for "NamedTuple()"' */
    cpy_r_r31 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r30, cpy_r_call);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 354, CPyStatic_semanal_namedtuple___globals);
        goto CPyL180;
    }
    cpy_r_r32 = Py_None;
    CPy_INCREF(cpy_r_r32);
    return cpy_r_r32;
CPyL20: ;
    cpy_r_r33 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_names;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = CPyList_GetSlice(cpy_r_r33, 4, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 356, CPyStatic_semanal_namedtuple___globals);
        goto CPyL184;
    }
    if (likely(PyList_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 356, CPyStatic_semanal_namedtuple___globals, "list", cpy_r_r34);
        goto CPyL184;
    }
    cpy_r_r36 = CPyModule_builtins;
    cpy_r_r37 = CPyStatics[4484]; /* 'enumerate' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 356, CPyStatic_semanal_namedtuple___globals);
        goto CPyL186;
    }
    cpy_r_r39 = CPyStatics[9018]; /* 2 */
    PyObject *cpy_r_r40[2] = {cpy_r_r35, cpy_r_r39};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r41, 2, 0);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 356, CPyStatic_semanal_namedtuple___globals);
        goto CPyL186;
    }
    CPy_DECREF(cpy_r_r35);
    cpy_r_r43 = PyObject_GetIter(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 356, CPyStatic_semanal_namedtuple___globals);
        goto CPyL184;
    }
CPyL25: ;
    cpy_r_r44 = PyIter_Next(cpy_r_r43);
    if (cpy_r_r44 == NULL) goto CPyL187;
    PyObject *__tmp6038;
    if (unlikely(!(PyTuple_Check(cpy_r_r44) && PyTuple_GET_SIZE(cpy_r_r44) == 2))) {
        __tmp6038 = NULL;
        goto __LL6039;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r44, 0))))
        __tmp6038 = PyTuple_GET_ITEM(cpy_r_r44, 0);
    else {
        __tmp6038 = NULL;
    }
    if (__tmp6038 == NULL) goto __LL6039;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r44, 1)))
        __tmp6038 = PyTuple_GET_ITEM(cpy_r_r44, 1);
    else {
        __tmp6038 = NULL;
    }
    if (__tmp6038 != NULL) goto __LL6040;
    if (PyTuple_GET_ITEM(cpy_r_r44, 1) == Py_None)
        __tmp6038 = PyTuple_GET_ITEM(cpy_r_r44, 1);
    else {
        __tmp6038 = NULL;
    }
    if (__tmp6038 != NULL) goto __LL6040;
    __tmp6038 = NULL;
__LL6040: ;
    if (__tmp6038 == NULL) goto __LL6039;
    __tmp6038 = cpy_r_r44;
__LL6039: ;
    if (unlikely(__tmp6038 == NULL)) {
        CPy_TypeError("tuple[int, union[str, None]]", cpy_r_r44); cpy_r_r45 = (tuple_T2IO) { CPY_INT_TAG, NULL };
    } else {
        PyObject *__tmp6041 = PyTuple_GET_ITEM(cpy_r_r44, 0);
        CPyTagged __tmp6042;
        if (likely(PyLong_Check(__tmp6041)))
            __tmp6042 = CPyTagged_FromObject(__tmp6041);
        else {
            CPy_TypeError("int", __tmp6041); __tmp6042 = CPY_INT_TAG;
        }
        cpy_r_r45.f0 = __tmp6042;
        PyObject *__tmp6043 = PyTuple_GET_ITEM(cpy_r_r44, 1);
        CPy_INCREF(__tmp6043);
        PyObject *__tmp6044;
        if (PyUnicode_Check(__tmp6043))
            __tmp6044 = __tmp6043;
        else {
            __tmp6044 = NULL;
        }
        if (__tmp6044 != NULL) goto __LL6045;
        if (__tmp6043 == Py_None)
            __tmp6044 = __tmp6043;
        else {
            __tmp6044 = NULL;
        }
        if (__tmp6044 != NULL) goto __LL6045;
        CPy_TypeError("str or None", __tmp6043); 
        __tmp6044 = NULL;
__LL6045: ;
        cpy_r_r45.f1 = __tmp6044;
    }
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 356, CPyStatic_semanal_namedtuple___globals);
        goto CPyL188;
    }
    cpy_r_r46 = cpy_r_r45.f0;
    CPyTagged_INCREF(cpy_r_r46);
    cpy_r_i = cpy_r_r46;
    cpy_r_r47 = cpy_r_r45.f1;
    CPy_INCREF(cpy_r_r47);
    CPyTagged_DECREF(cpy_r_r45.f0);
    CPy_DECREF(cpy_r_r45.f1);
    cpy_r_arg_name = cpy_r_r47;
    cpy_r_r48 = CPyStatics[1565]; /* 'defaults' */
    cpy_r_r49 = PyObject_RichCompare(cpy_r_arg_name, cpy_r_r48, 2);
    CPy_DECREF(cpy_r_arg_name);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 357, CPyStatic_semanal_namedtuple___globals);
        goto CPyL189;
    }
    if (unlikely(!PyBool_Check(cpy_r_r49))) {
        CPy_TypeError("bool", cpy_r_r49); cpy_r_r50 = 2;
    } else
        cpy_r_r50 = cpy_r_r49 == Py_True;
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 357, CPyStatic_semanal_namedtuple___globals);
        goto CPyL189;
    }
    if (cpy_r_r50) {
        goto CPyL190;
    } else
        goto CPyL191;
CPyL30: ;
    cpy_r_r51 = CPyList_GetItem(cpy_r_args, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 358, CPyStatic_semanal_namedtuple___globals);
        goto CPyL184;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r51, CPyType_nodes___Expression)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 358, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Expression", cpy_r_r51);
        goto CPyL184;
    }
    cpy_r_arg = cpy_r_r52;
    cpy_r_r53 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    if (!cpy_r_r56) goto CPyL34;
    cpy_r_r57 = cpy_r_r56;
    goto CPyL35;
CPyL34: ;
    cpy_r_r58 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r59 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r60 = *(PyObject * *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 == cpy_r_r58;
    cpy_r_r57 = cpy_r_r61;
CPyL35: ;
    if (cpy_r_r57) {
        goto CPyL192;
    } else
        goto CPyL44;
CPyL36: ;
    if (Py_TYPE(cpy_r_arg) == CPyType_nodes___ListExpr)
        cpy_r_r62 = cpy_r_arg;
    else {
        cpy_r_r62 = NULL;
    }
    if (cpy_r_r62 != NULL) goto __LL6046;
    if (Py_TYPE(cpy_r_arg) == CPyType_nodes___TupleExpr)
        cpy_r_r62 = cpy_r_arg;
    else {
        cpy_r_r62 = NULL;
    }
    if (cpy_r_r62 != NULL) goto __LL6046;
    CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 362, CPyStatic_semanal_namedtuple___globals, "union[mypy.nodes.ListExpr, mypy.nodes.TupleExpr]", cpy_r_arg);
    goto CPyL182;
__LL6046: ;
    cpy_r_r63 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r64 = (CPyPtr)&((PyObject *)cpy_r_r62)->ob_type;
    cpy_r_r65 = *(PyObject * *)cpy_r_r64;
    cpy_r_r66 = cpy_r_r65 == cpy_r_r63;
    if (!cpy_r_r66) goto CPyL40;
    if (likely(Py_TYPE(cpy_r_r62) == CPyType_nodes___ListExpr))
        cpy_r_r67 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 362, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.ListExpr", cpy_r_r62);
        goto CPyL182;
    }
    cpy_r_r68 = ((mypy___nodes___ListExprObject *)cpy_r_r67)->_items;
    CPy_INCREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r69 = cpy_r_r68;
    goto CPyL42;
CPyL40: ;
    if (likely(Py_TYPE(cpy_r_r62) == CPyType_nodes___TupleExpr))
        cpy_r_r70 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 362, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.TupleExpr", cpy_r_r62);
        goto CPyL182;
    }
    cpy_r_r71 = ((mypy___nodes___TupleExprObject *)cpy_r_r70)->_items;
    CPy_INCREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r69 = cpy_r_r71;
CPyL42: ;
    cpy_r_r72 = PySequence_List(cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 362, CPyStatic_semanal_namedtuple___globals);
        goto CPyL182;
    }
    cpy_r_defaults = cpy_r_r72;
    goto CPyL47;
CPyL44: ;
    cpy_r_r73 = CPyStatics[5208]; /* ('List or tuple literal expected as the defaults '
                                     'argument to ') */
    cpy_r_r74 = CPyStatics[4970]; /* '()' */
    cpy_r_r75 = CPyStr_Build(3, cpy_r_r73, cpy_r_type_name, cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 365, CPyStatic_semanal_namedtuple___globals);
        goto CPyL193;
    }
    cpy_r_r76 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r75, cpy_r_arg);
    CPy_DECREF(cpy_r_r75);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 364, CPyStatic_semanal_namedtuple___globals);
        goto CPyL184;
    } else
        goto CPyL47;
CPyL46: ;
    cpy_r_r77 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 356, CPyStatic_semanal_namedtuple___globals);
        goto CPyL184;
    }
CPyL47: ;
    cpy_r_r78 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_kinds;
    CPy_INCREF(cpy_r_r78);
    cpy_r_r79 = CPyList_GetSlice(cpy_r_r78, 0, 4);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 370, CPyStatic_semanal_namedtuple___globals);
        goto CPyL184;
    }
    if (likely(PyList_Check(cpy_r_r79)))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 370, CPyStatic_semanal_namedtuple___globals, "list", cpy_r_r79);
        goto CPyL184;
    }
    cpy_r_r81 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r81 == NULL)) {
        goto CPyL194;
    } else
        goto CPyL52;
CPyL50: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r82 = 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 370, CPyStatic_semanal_namedtuple___globals);
        goto CPyL180;
    }
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r83 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r83 == NULL)) {
        goto CPyL195;
    } else
        goto CPyL55;
CPyL53: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r84 = 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 370, CPyStatic_semanal_namedtuple___globals);
        goto CPyL180;
    }
    CPy_Unreachable();
CPyL55: ;
    cpy_r_r85 = PyList_New(2);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 370, CPyStatic_semanal_namedtuple___globals);
        goto CPyL196;
    }
    cpy_r_r86 = (CPyPtr)&((PyListObject *)cpy_r_r85)->ob_item;
    cpy_r_r87 = *(CPyPtr *)cpy_r_r86;
    CPy_INCREF(cpy_r_r81);
    *(PyObject * *)cpy_r_r87 = cpy_r_r81;
    cpy_r_r88 = cpy_r_r87 + 8;
    CPy_INCREF(cpy_r_r83);
    *(PyObject * *)cpy_r_r88 = cpy_r_r83;
    cpy_r_r89 = PyObject_RichCompare(cpy_r_r80, cpy_r_r85, 3);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 370, CPyStatic_semanal_namedtuple___globals);
        goto CPyL184;
    }
    if (unlikely(!PyBool_Check(cpy_r_r89))) {
        CPy_TypeError("bool", cpy_r_r89); cpy_r_r90 = 2;
    } else
        cpy_r_r90 = cpy_r_r89 == Py_True;
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 370, CPyStatic_semanal_namedtuple___globals);
        goto CPyL184;
    }
    if (cpy_r_r90) {
        goto CPyL197;
    } else
        goto CPyL62;
CPyL59: ;
    cpy_r_r91 = CPyStatics[5209]; /* 'Unexpected arguments to "' */
    cpy_r_r92 = CPyStatics[5206]; /* '()"' */
    cpy_r_r93 = CPyStr_Build(3, cpy_r_r91, cpy_r_type_name, cpy_r_r92);
    CPy_DECREF(cpy_r_type_name);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 371, CPyStatic_semanal_namedtuple___globals);
        goto CPyL180;
    }
    cpy_r_r94 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r93, cpy_r_call);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 371, CPyStatic_semanal_namedtuple___globals);
        goto CPyL180;
    }
    cpy_r_r95 = Py_None;
    CPy_INCREF(cpy_r_r95);
    return cpy_r_r95;
CPyL62: ;
    cpy_r_r96 = CPyList_GetItemShortBorrow(cpy_r_args, 0);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 373, CPyStatic_semanal_namedtuple___globals);
        goto CPyL184;
    }
    cpy_r_r97 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r98 = (CPyPtr)&((PyObject *)cpy_r_r96)->ob_type;
    cpy_r_r99 = *(PyObject * *)cpy_r_r98;
    cpy_r_r100 = cpy_r_r99 == cpy_r_r97;
    if (cpy_r_r100) {
        goto CPyL67;
    } else
        goto CPyL198;
CPyL64: ;
    cpy_r_r101 = CPyStatics[178]; /* '"' */
    cpy_r_r102 = CPyStatics[5210]; /* '()" expects a string literal as the first argument' */
    cpy_r_r103 = CPyStr_Build(3, cpy_r_r101, cpy_r_type_name, cpy_r_r102);
    CPy_DECREF(cpy_r_type_name);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 374, CPyStatic_semanal_namedtuple___globals);
        goto CPyL180;
    }
    cpy_r_r104 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r103, cpy_r_call);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 374, CPyStatic_semanal_namedtuple___globals);
        goto CPyL180;
    }
    cpy_r_r105 = Py_None;
    CPy_INCREF(cpy_r_r105);
    return cpy_r_r105;
CPyL67: ;
    cpy_r_r106 = CPyList_GetItemShortBorrow(cpy_r_args, 0);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 376, CPyStatic_semanal_namedtuple___globals);
        goto CPyL184;
    }
    if (likely(Py_TYPE(cpy_r_r106) == CPyType_nodes___StrExpr))
        cpy_r_r107 = cpy_r_r106;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 376, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.StrExpr", cpy_r_r106);
        goto CPyL184;
    }
    cpy_r_r108 = ((mypy___nodes___StrExprObject *)cpy_r_r107)->_value;
    CPy_INCREF(cpy_r_r108);
    cpy_r_typename = cpy_r_r108;
    cpy_r_r109 = PyList_New(0);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 377, CPyStatic_semanal_namedtuple___globals);
        goto CPyL199;
    }
    cpy_r_types = cpy_r_r109;
    cpy_r_r110 = PyList_New(0);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 378, CPyStatic_semanal_namedtuple___globals);
        goto CPyL200;
    }
    cpy_r_tvar_defs = cpy_r_r110;
    cpy_r_r111 = CPyList_GetItemShortBorrow(cpy_r_args, 2);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 379, CPyStatic_semanal_namedtuple___globals);
        goto CPyL201;
    }
    cpy_r_r112 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r113 = (CPyPtr)&((PyObject *)cpy_r_r111)->ob_type;
    cpy_r_r114 = *(PyObject * *)cpy_r_r113;
    cpy_r_r115 = cpy_r_r114 == cpy_r_r112;
    if (!cpy_r_r115) goto CPyL74;
    cpy_r_r116 = cpy_r_r115;
    goto CPyL75;
CPyL74: ;
    cpy_r_r117 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r118 = (CPyPtr)&((PyObject *)cpy_r_r111)->ob_type;
    cpy_r_r119 = *(PyObject * *)cpy_r_r118;
    cpy_r_r120 = cpy_r_r119 == cpy_r_r117;
    cpy_r_r116 = cpy_r_r120;
CPyL75: ;
    if (cpy_r_r116) goto CPyL90;
    cpy_r_r121 = CPyStatics[4928]; /* 'collections.namedtuple' */
    cpy_r_r122 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r121);
    cpy_r_r123 = cpy_r_r122 == -1;
    if (!cpy_r_r123) goto CPyL79;
    cpy_r_r124 = PyErr_Occurred();
    cpy_r_r125 = cpy_r_r124 != NULL;
    if (!cpy_r_r125) goto CPyL79;
    cpy_r_r126 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 380, CPyStatic_semanal_namedtuple___globals);
        goto CPyL201;
    }
CPyL79: ;
    cpy_r_r127 = cpy_r_r122 == 0;
    if (!cpy_r_r127) goto CPyL202;
    cpy_r_r128 = CPyList_GetItemShortBorrow(cpy_r_args, 2);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 380, CPyStatic_semanal_namedtuple___globals);
        goto CPyL201;
    }
    cpy_r_r129 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r130 = (CPyPtr)&((PyObject *)cpy_r_r128)->ob_type;
    cpy_r_r131 = *(PyObject * *)cpy_r_r130;
    cpy_r_r132 = cpy_r_r131 == cpy_r_r129;
    if (!cpy_r_r132) goto CPyL202;
    cpy_r_r133 = CPyList_GetItemShort(cpy_r_args, 2);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 381, CPyStatic_semanal_namedtuple___globals);
        goto CPyL203;
    }
    if (likely(Py_TYPE(cpy_r_r133) == CPyType_nodes___StrExpr))
        cpy_r_r134 = cpy_r_r133;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 381, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.StrExpr", cpy_r_r133);
        goto CPyL203;
    }
    cpy_r_str_expr = cpy_r_r134;
    cpy_r_r135 = ((mypy___nodes___StrExprObject *)cpy_r_str_expr)->_value;
    CPy_INCREF(cpy_r_r135);
    CPy_DECREF(cpy_r_str_expr);
    cpy_r_r136 = CPyStatics[242]; /* ',' */
    cpy_r_r137 = CPyStatics[295]; /* ' ' */
    cpy_r_r138 = PyUnicode_Replace(cpy_r_r135, cpy_r_r136, cpy_r_r137, -1);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 382, CPyStatic_semanal_namedtuple___globals);
        goto CPyL203;
    }
    cpy_r_r139 = PyUnicode_Split(cpy_r_r138, NULL, -1);
    CPy_DECREF(cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 382, CPyStatic_semanal_namedtuple___globals);
        goto CPyL203;
    }
    cpy_r_items = cpy_r_r139;
    goto CPyL152;
CPyL87: ;
    cpy_r_r140 = CPyStatics[5211]; /* ('List or tuple literal expected as the second '
                                      'argument to "') */
    cpy_r_r141 = CPyStatics[5206]; /* '()"' */
    cpy_r_r142 = CPyStr_Build(3, cpy_r_r140, cpy_r_type_name, cpy_r_r141);
    CPy_DECREF(cpy_r_type_name);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 385, CPyStatic_semanal_namedtuple___globals);
        goto CPyL180;
    }
    cpy_r_r143 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r142, cpy_r_call);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r143 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 384, CPyStatic_semanal_namedtuple___globals);
        goto CPyL180;
    }
    cpy_r_r144 = Py_None;
    CPy_INCREF(cpy_r_r144);
    return cpy_r_r144;
CPyL90: ;
    cpy_r_r145 = CPyList_GetItemShort(cpy_r_args, 2);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 392, CPyStatic_semanal_namedtuple___globals);
        goto CPyL203;
    }
    if (Py_TYPE(cpy_r_r145) == CPyType_nodes___ListExpr)
        cpy_r_r146 = cpy_r_r145;
    else {
        cpy_r_r146 = NULL;
    }
    if (cpy_r_r146 != NULL) goto __LL6047;
    if (Py_TYPE(cpy_r_r145) == CPyType_nodes___TupleExpr)
        cpy_r_r146 = cpy_r_r145;
    else {
        cpy_r_r146 = NULL;
    }
    if (cpy_r_r146 != NULL) goto __LL6047;
    CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 392, CPyStatic_semanal_namedtuple___globals, "union[mypy.nodes.ListExpr, mypy.nodes.TupleExpr]", cpy_r_r145);
    goto CPyL203;
__LL6047: ;
    cpy_r_listexpr = cpy_r_r146;
    cpy_r_r147 = CPyStatics[4928]; /* 'collections.namedtuple' */
    cpy_r_r148 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r147);
    cpy_r_r149 = cpy_r_r148 == -1;
    if (!cpy_r_r149) goto CPyL95;
    cpy_r_r150 = PyErr_Occurred();
    cpy_r_r151 = cpy_r_r150 != NULL;
    if (!cpy_r_r151) goto CPyL95;
    cpy_r_r152 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 393, CPyStatic_semanal_namedtuple___globals);
        goto CPyL204;
    }
CPyL95: ;
    cpy_r_r153 = cpy_r_r148 == 0;
    if (!cpy_r_r153) goto CPyL205;
    cpy_r_r154 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r155 = (CPyPtr)&((PyObject *)cpy_r_listexpr)->ob_type;
    cpy_r_r156 = *(PyObject * *)cpy_r_r155;
    cpy_r_r157 = cpy_r_r156 == cpy_r_r154;
    if (!cpy_r_r157) goto CPyL99;
    CPy_INCREF(cpy_r_listexpr);
    if (likely(Py_TYPE(cpy_r_listexpr) == CPyType_nodes___ListExpr))
        cpy_r_r158 = cpy_r_listexpr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 395, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.ListExpr", cpy_r_listexpr);
        goto CPyL204;
    }
    cpy_r_r159 = ((mypy___nodes___ListExprObject *)cpy_r_r158)->_items;
    CPy_INCREF(cpy_r_r159);
    CPy_DECREF(cpy_r_r158);
    cpy_r_r160 = cpy_r_r159;
    goto CPyL101;
CPyL99: ;
    CPy_INCREF(cpy_r_listexpr);
    if (likely(Py_TYPE(cpy_r_listexpr) == CPyType_nodes___TupleExpr))
        cpy_r_r161 = cpy_r_listexpr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 395, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.TupleExpr", cpy_r_listexpr);
        goto CPyL204;
    }
    cpy_r_r162 = ((mypy___nodes___TupleExprObject *)cpy_r_r161)->_items;
    CPy_INCREF(cpy_r_r162);
    CPy_DECREF(cpy_r_r161);
    cpy_r_r160 = cpy_r_r162;
CPyL101: ;
    cpy_r_r163 = CPyDef_nodes___is_StrExpr_list(cpy_r_r160);
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r163 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 395, CPyStatic_semanal_namedtuple___globals);
        goto CPyL204;
    }
    if (cpy_r_r163) {
        goto CPyL105;
    } else
        goto CPyL206;
CPyL103: ;
    cpy_r_r164 = CPyStatics[5212]; /* 'String literal expected as "namedtuple()" item' */
    cpy_r_r165 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r164, cpy_r_call);
    if (unlikely(cpy_r_r165 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 396, CPyStatic_semanal_namedtuple___globals);
        goto CPyL180;
    }
    cpy_r_r166 = Py_None;
    CPy_INCREF(cpy_r_r166);
    return cpy_r_r166;
CPyL105: ;
    cpy_r_r167 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r168 = (CPyPtr)&((PyObject *)cpy_r_listexpr)->ob_type;
    cpy_r_r169 = *(PyObject * *)cpy_r_r168;
    cpy_r_r170 = cpy_r_r169 == cpy_r_r167;
    if (!cpy_r_r170) goto CPyL108;
    if (likely(Py_TYPE(cpy_r_listexpr) == CPyType_nodes___ListExpr))
        cpy_r_r171 = cpy_r_listexpr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 398, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.ListExpr", cpy_r_listexpr);
        goto CPyL203;
    }
    cpy_r_r172 = ((mypy___nodes___ListExprObject *)cpy_r_r171)->_items;
    CPy_INCREF(cpy_r_r172);
    CPy_DECREF(cpy_r_r171);
    cpy_r_r173 = cpy_r_r172;
    goto CPyL110;
CPyL108: ;
    if (likely(Py_TYPE(cpy_r_listexpr) == CPyType_nodes___TupleExpr))
        cpy_r_r174 = cpy_r_listexpr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 398, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.TupleExpr", cpy_r_listexpr);
        goto CPyL203;
    }
    cpy_r_r175 = ((mypy___nodes___TupleExprObject *)cpy_r_r174)->_items;
    CPy_INCREF(cpy_r_r175);
    CPy_DECREF(cpy_r_r174);
    cpy_r_r173 = cpy_r_r175;
CPyL110: ;
    cpy_r_r176 = (CPyPtr)&((PyVarObject *)cpy_r_r173)->ob_size;
    cpy_r_r177 = *(int64_t *)cpy_r_r176;
    cpy_r_r178 = PyList_New(cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 398, CPyStatic_semanal_namedtuple___globals);
        goto CPyL207;
    }
    cpy_r_r179 = 0;
CPyL112: ;
    cpy_r_r180 = (CPyPtr)&((PyVarObject *)cpy_r_r173)->ob_size;
    cpy_r_r181 = *(int64_t *)cpy_r_r180;
    cpy_r_r182 = cpy_r_r181 << 1;
    cpy_r_r183 = (Py_ssize_t)cpy_r_r179 < (Py_ssize_t)cpy_r_r182;
    if (!cpy_r_r183) goto CPyL208;
    cpy_r_r184 = CPyList_GetItemUnsafe(cpy_r_r173, cpy_r_r179);
    if (likely(Py_TYPE(cpy_r_r184) == CPyType_nodes___StrExpr))
        cpy_r_r185 = cpy_r_r184;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 398, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.StrExpr", cpy_r_r184);
        goto CPyL209;
    }
    cpy_r_item = cpy_r_r185;
    cpy_r_r186 = ((mypy___nodes___StrExprObject *)cpy_r_item)->_value;
    CPy_INCREF(cpy_r_r186);
    CPy_DECREF(cpy_r_item);
    cpy_r_r187 = CPyList_SetItemUnsafe(cpy_r_r178, cpy_r_r179, cpy_r_r186);
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 398, CPyStatic_semanal_namedtuple___globals);
        goto CPyL209;
    }
    cpy_r_r188 = cpy_r_r179 + 2;
    cpy_r_r179 = cpy_r_r188;
    goto CPyL112;
CPyL116: ;
    cpy_r_items = cpy_r_r178;
    goto CPyL152;
CPyL117: ;
    cpy_r_r189 = PyList_New(0);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 400, CPyStatic_semanal_namedtuple___globals);
        goto CPyL210;
    }
    cpy_r_r190 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r191 = (CPyPtr)&((PyObject *)cpy_r_listexpr)->ob_type;
    cpy_r_r192 = *(PyObject * *)cpy_r_r191;
    cpy_r_r193 = cpy_r_r192 == cpy_r_r190;
    if (!cpy_r_r193) goto CPyL121;
    CPy_INCREF(cpy_r_listexpr);
    if (likely(Py_TYPE(cpy_r_listexpr) == CPyType_nodes___ListExpr))
        cpy_r_r194 = cpy_r_listexpr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 402, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.ListExpr", cpy_r_listexpr);
        goto CPyL211;
    }
    cpy_r_r195 = ((mypy___nodes___ListExprObject *)cpy_r_r194)->_items;
    CPy_INCREF(cpy_r_r195);
    CPy_DECREF(cpy_r_r194);
    cpy_r_r196 = cpy_r_r195;
    goto CPyL123;
CPyL121: ;
    CPy_INCREF(cpy_r_listexpr);
    if (likely(Py_TYPE(cpy_r_listexpr) == CPyType_nodes___TupleExpr))
        cpy_r_r197 = cpy_r_listexpr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 402, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.TupleExpr", cpy_r_listexpr);
        goto CPyL211;
    }
    cpy_r_r198 = ((mypy___nodes___TupleExprObject *)cpy_r_r197)->_items;
    CPy_INCREF(cpy_r_r198);
    CPy_DECREF(cpy_r_r197);
    cpy_r_r196 = cpy_r_r198;
CPyL123: ;
    cpy_r_r199 = 0;
CPyL124: ;
    cpy_r_r200 = (CPyPtr)&((PyVarObject *)cpy_r_r196)->ob_size;
    cpy_r_r201 = *(int64_t *)cpy_r_r200;
    cpy_r_r202 = cpy_r_r201 << 1;
    cpy_r_r203 = (Py_ssize_t)cpy_r_r199 < (Py_ssize_t)cpy_r_r202;
    if (!cpy_r_r203) goto CPyL212;
    cpy_r_r204 = CPyList_GetItemUnsafe(cpy_r_r196, cpy_r_r199);
    if (likely(PyObject_TypeCheck(cpy_r_r204, CPyType_nodes___Expression)))
        cpy_r_r205 = cpy_r_r204;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 400, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Expression", cpy_r_r204);
        goto CPyL213;
    }
    cpy_r_t = cpy_r_r205;
    cpy_r_r206 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r207 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r208 = *(PyObject * *)cpy_r_r207;
    cpy_r_r209 = cpy_r_r208 == cpy_r_r206;
    if (cpy_r_r209) goto CPyL128;
    cpy_r_r210 = cpy_r_r209;
    goto CPyL130;
CPyL128: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_nodes___TupleExpr))
        cpy_r_r211 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 403, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.TupleExpr", cpy_r_t);
        goto CPyL214;
    }
    cpy_r_r212 = ((mypy___nodes___TupleExprObject *)cpy_r_r211)->_items;
    cpy_r_r213 = (CPyPtr)&((PyVarObject *)cpy_r_r212)->ob_size;
    cpy_r_r214 = *(int64_t *)cpy_r_r213;
    cpy_r_r215 = cpy_r_r214 << 1;
    cpy_r_r216 = cpy_r_r215 == 4;
    cpy_r_r210 = cpy_r_r216;
CPyL130: ;
    if (!cpy_r_r210) goto CPyL215;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_nodes___TupleExpr))
        cpy_r_r217 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 401, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.TupleExpr", cpy_r_t);
        goto CPyL214;
    }
    cpy_r_r218 = ((mypy___nodes___TupleExprObject *)cpy_r_r217)->_items;
    cpy_r_r219 = CPyList_GetItemShort(cpy_r_r218, 2);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 401, CPyStatic_semanal_namedtuple___globals);
        goto CPyL214;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r219, CPyType_nodes___Expression)))
        cpy_r_r220 = cpy_r_r219;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 401, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Expression", cpy_r_r219);
        goto CPyL214;
    }
    CPy_DECREF(cpy_r_t);
    cpy_r_r221 = PyList_Append(cpy_r_r189, cpy_r_r220);
    CPy_DECREF(cpy_r_r220);
    cpy_r_r222 = cpy_r_r221 >= 0;
    if (unlikely(!cpy_r_r222)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 400, CPyStatic_semanal_namedtuple___globals);
        goto CPyL213;
    }
CPyL135: ;
    cpy_r_r223 = cpy_r_r199 + 2;
    cpy_r_r199 = cpy_r_r223;
    goto CPyL124;
CPyL136: ;
    cpy_r_type_exprs = cpy_r_r189;
    cpy_r_r224 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r224);
    cpy_r_r225 = CPY_GET_METHOD_TRAIT(cpy_r_r224, CPyType_semanal_shared___SemanticAnalyzerInterface, 5, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r224, cpy_r_type_exprs); /* get_and_bind_all_tvars */
    CPy_DECREF(cpy_r_type_exprs);
    CPy_DECREF(cpy_r_r224);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 405, CPyStatic_semanal_namedtuple___globals);
        goto CPyL210;
    }
    cpy_r_tvar_defs = cpy_r_r225;
    cpy_r_r226 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r227 = (CPyPtr)&((PyObject *)cpy_r_listexpr)->ob_type;
    cpy_r_r228 = *(PyObject * *)cpy_r_r227;
    cpy_r_r229 = cpy_r_r228 == cpy_r_r226;
    if (!cpy_r_r229) goto CPyL140;
    if (likely(Py_TYPE(cpy_r_listexpr) == CPyType_nodes___ListExpr))
        cpy_r_r230 = cpy_r_listexpr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 407, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.ListExpr", cpy_r_listexpr);
        goto CPyL216;
    }
    cpy_r_r231 = ((mypy___nodes___ListExprObject *)cpy_r_r230)->_items;
    CPy_INCREF(cpy_r_r231);
    CPy_DECREF(cpy_r_r230);
    cpy_r_r232 = cpy_r_r231;
    goto CPyL142;
CPyL140: ;
    if (likely(Py_TYPE(cpy_r_listexpr) == CPyType_nodes___TupleExpr))
        cpy_r_r233 = cpy_r_listexpr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 407, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.TupleExpr", cpy_r_listexpr);
        goto CPyL216;
    }
    cpy_r_r234 = ((mypy___nodes___TupleExprObject *)cpy_r_r233)->_items;
    CPy_INCREF(cpy_r_r234);
    CPy_DECREF(cpy_r_r233);
    cpy_r_r232 = cpy_r_r234;
CPyL142: ;
    cpy_r_r235 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___parse_namedtuple_fields_with_types(cpy_r_self, cpy_r_r232, cpy_r_call);
    CPy_DECREF(cpy_r_r232);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 407, CPyStatic_semanal_namedtuple___globals);
        goto CPyL216;
    }
    cpy_r_result = cpy_r_r235;
    cpy_r_r236 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r237 = cpy_r_result == cpy_r_r236;
    if (cpy_r_r237) {
        goto CPyL217;
    } else
        goto CPyL145;
CPyL144: ;
    cpy_r_r238 = Py_None;
    CPy_INCREF(cpy_r_r238);
    return cpy_r_r238;
CPyL145: ;
    PyObject *__tmp6048;
    if (unlikely(!(PyTuple_Check(cpy_r_result) && PyTuple_GET_SIZE(cpy_r_result) == 4))) {
        __tmp6048 = NULL;
        goto __LL6049;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_result, 0))))
        __tmp6048 = PyTuple_GET_ITEM(cpy_r_result, 0);
    else {
        __tmp6048 = NULL;
    }
    if (__tmp6048 == NULL) goto __LL6049;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_result, 1))))
        __tmp6048 = PyTuple_GET_ITEM(cpy_r_result, 1);
    else {
        __tmp6048 = NULL;
    }
    if (__tmp6048 == NULL) goto __LL6049;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_result, 2))))
        __tmp6048 = PyTuple_GET_ITEM(cpy_r_result, 2);
    else {
        __tmp6048 = NULL;
    }
    if (__tmp6048 == NULL) goto __LL6049;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_result, 3))))
        __tmp6048 = PyTuple_GET_ITEM(cpy_r_result, 3);
    else {
        __tmp6048 = NULL;
    }
    if (__tmp6048 == NULL) goto __LL6049;
    __tmp6048 = cpy_r_result;
__LL6049: ;
    if (unlikely(__tmp6048 == NULL)) {
        CPy_TypeError("tuple[list, list, list, bool]", cpy_r_result); cpy_r_r239 = (tuple_T4OOOC) { NULL, NULL, NULL, 2 };
    } else {
        PyObject *__tmp6050 = PyTuple_GET_ITEM(cpy_r_result, 0);
        CPy_INCREF(__tmp6050);
        PyObject *__tmp6051;
        if (likely(PyList_Check(__tmp6050)))
            __tmp6051 = __tmp6050;
        else {
            CPy_TypeError("list", __tmp6050); 
            __tmp6051 = NULL;
        }
        cpy_r_r239.f0 = __tmp6051;
        PyObject *__tmp6052 = PyTuple_GET_ITEM(cpy_r_result, 1);
        CPy_INCREF(__tmp6052);
        PyObject *__tmp6053;
        if (likely(PyList_Check(__tmp6052)))
            __tmp6053 = __tmp6052;
        else {
            CPy_TypeError("list", __tmp6052); 
            __tmp6053 = NULL;
        }
        cpy_r_r239.f1 = __tmp6053;
        PyObject *__tmp6054 = PyTuple_GET_ITEM(cpy_r_result, 2);
        CPy_INCREF(__tmp6054);
        PyObject *__tmp6055;
        if (likely(PyList_Check(__tmp6054)))
            __tmp6055 = __tmp6054;
        else {
            CPy_TypeError("list", __tmp6054); 
            __tmp6055 = NULL;
        }
        cpy_r_r239.f2 = __tmp6055;
        PyObject *__tmp6056 = PyTuple_GET_ITEM(cpy_r_result, 3);
        char __tmp6057;
        if (unlikely(!PyBool_Check(__tmp6056))) {
            CPy_TypeError("bool", __tmp6056); __tmp6057 = 2;
        } else
            __tmp6057 = __tmp6056 == Py_True;
        cpy_r_r239.f3 = __tmp6057;
    }
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r239.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 411, CPyStatic_semanal_namedtuple___globals);
        goto CPyL216;
    }
    cpy_r_r240 = cpy_r_r239.f0;
    CPy_INCREF(cpy_r_r240);
    cpy_r_items = cpy_r_r240;
    cpy_r_r241 = cpy_r_r239.f1;
    CPy_INCREF(cpy_r_r241);
    cpy_r_types = cpy_r_r241;
    cpy_r_r242 = cpy_r_r239.f2;
    CPy_INCREF(cpy_r_r242);
    cpy_r__ = cpy_r_r242;
    CPy_DECREF(cpy_r__);
    cpy_r_r243 = cpy_r_r239.f3;
    CPy_DECREF(cpy_r_r239.f0);
    CPy_DECREF(cpy_r_r239.f1);
    CPy_DECREF(cpy_r_r239.f2);
    cpy_r_ok = cpy_r_r243;
    if (cpy_r_ok) {
        goto CPyL152;
    } else
        goto CPyL218;
CPyL147: ;
    cpy_r_r244 = PyList_New(0);
    if (unlikely(cpy_r_r244 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 413, CPyStatic_semanal_namedtuple___globals);
        goto CPyL219;
    }
    cpy_r_r245 = PyList_New(0);
    if (unlikely(cpy_r_r245 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 413, CPyStatic_semanal_namedtuple___globals);
        goto CPyL220;
    }
    cpy_r_r246 = PyList_New(0);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 413, CPyStatic_semanal_namedtuple___globals);
        goto CPyL221;
    }
    cpy_r_r247 = PyList_New(0);
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 413, CPyStatic_semanal_namedtuple___globals);
        goto CPyL222;
    }
    cpy_r_r248.f0 = cpy_r_r244;
    cpy_r_r248.f1 = cpy_r_r245;
    cpy_r_r248.f2 = cpy_r_r246;
    cpy_r_r248.f3 = cpy_r_typename;
    cpy_r_r248.f4 = cpy_r_r247;
    cpy_r_r248.f5 = 0;
    CPy_INCREF(cpy_r_r248.f0);
    CPy_INCREF(cpy_r_r248.f1);
    CPy_INCREF(cpy_r_r248.f2);
    CPy_INCREF(cpy_r_r248.f3);
    CPy_INCREF(cpy_r_r248.f4);
    CPy_DECREF(cpy_r_r244);
    CPy_DECREF(cpy_r_r245);
    CPy_DECREF(cpy_r_r246);
    CPy_DECREF(cpy_r_typename);
    CPy_DECREF(cpy_r_r247);
    cpy_r_r249 = PyTuple_New(6);
    if (unlikely(cpy_r_r249 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6058 = cpy_r_r248.f0;
    PyTuple_SET_ITEM(cpy_r_r249, 0, __tmp6058);
    PyObject *__tmp6059 = cpy_r_r248.f1;
    PyTuple_SET_ITEM(cpy_r_r249, 1, __tmp6059);
    PyObject *__tmp6060 = cpy_r_r248.f2;
    PyTuple_SET_ITEM(cpy_r_r249, 2, __tmp6060);
    PyObject *__tmp6061 = cpy_r_r248.f3;
    PyTuple_SET_ITEM(cpy_r_r249, 3, __tmp6061);
    PyObject *__tmp6062 = cpy_r_r248.f4;
    PyTuple_SET_ITEM(cpy_r_r249, 4, __tmp6062);
    PyObject *__tmp6063 = cpy_r_r248.f5 ? Py_True : Py_False;
    CPy_INCREF(__tmp6063);
    PyTuple_SET_ITEM(cpy_r_r249, 5, __tmp6063);
    return cpy_r_r249;
CPyL152: ;
    cpy_r_r250 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r251 = *(int64_t *)cpy_r_r250;
    cpy_r_r252 = cpy_r_r251 << 1;
    cpy_r_r253 = cpy_r_r252 != 0;
    if (cpy_r_r253) {
        goto CPyL161;
    } else
        goto CPyL223;
CPyL153: ;
    cpy_r_r254 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r255 = *(int64_t *)cpy_r_r254;
    cpy_r_r256 = PyList_New(cpy_r_r255);
    if (unlikely(cpy_r_r256 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 415, CPyStatic_semanal_namedtuple___globals);
        goto CPyL224;
    }
    cpy_r_r257 = 0;
CPyL155: ;
    cpy_r_r258 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r259 = *(int64_t *)cpy_r_r258;
    cpy_r_r260 = cpy_r_r259 << 1;
    cpy_r_r261 = (Py_ssize_t)cpy_r_r257 < (Py_ssize_t)cpy_r_r260;
    if (!cpy_r_r261) goto CPyL160;
    cpy_r_r262 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r257);
    if (likely(PyUnicode_Check(cpy_r_r262)))
        cpy_r_r263 = cpy_r_r262;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 415, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_r262);
        goto CPyL225;
    }
    cpy_r___2 = cpy_r_r263;
    CPy_DECREF(cpy_r___2);
    cpy_r_r264 = NULL;
    cpy_r_r265 = NULL;
    cpy_r_r266 = CPY_INT_TAG;
    cpy_r_r267 = CPY_INT_TAG;
    cpy_r_r268 = CPyDef_types___AnyType(2, cpy_r_r264, cpy_r_r265, cpy_r_r266, cpy_r_r267);
    if (unlikely(cpy_r_r268 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 415, CPyStatic_semanal_namedtuple___globals);
        goto CPyL225;
    }
    cpy_r_r269 = CPyList_SetItemUnsafe(cpy_r_r256, cpy_r_r257, cpy_r_r268);
    if (unlikely(!cpy_r_r269)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 415, CPyStatic_semanal_namedtuple___globals);
        goto CPyL225;
    }
    cpy_r_r270 = cpy_r_r257 + 2;
    cpy_r_r257 = cpy_r_r270;
    goto CPyL155;
CPyL160: ;
    cpy_r_types = cpy_r_r256;
CPyL161: ;
    cpy_r_r271 = PyList_New(0);
    if (unlikely(cpy_r_r271 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 416, CPyStatic_semanal_namedtuple___globals);
        goto CPyL226;
    }
    cpy_r_r272 = 0;
CPyL163: ;
    cpy_r_r273 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r274 = *(int64_t *)cpy_r_r273;
    cpy_r_r275 = cpy_r_r274 << 1;
    cpy_r_r276 = (Py_ssize_t)cpy_r_r272 < (Py_ssize_t)cpy_r_r275;
    if (!cpy_r_r276) goto CPyL168;
    cpy_r_r277 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r272);
    if (likely(PyUnicode_Check(cpy_r_r277)))
        cpy_r_r278 = cpy_r_r277;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 416, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_r277);
        goto CPyL227;
    }
    cpy_r_item_2 = cpy_r_r278;
    cpy_r_r279 = CPyStatics[755]; /* '_' */
    cpy_r_r280 = CPyStr_Startswith(cpy_r_item_2, cpy_r_r279);
    if (!cpy_r_r280) goto CPyL228;
    cpy_r_r281 = PyList_Append(cpy_r_r271, cpy_r_item_2);
    CPy_DECREF(cpy_r_item_2);
    cpy_r_r282 = cpy_r_r281 >= 0;
    if (unlikely(!cpy_r_r282)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 416, CPyStatic_semanal_namedtuple___globals);
        goto CPyL227;
    }
CPyL167: ;
    cpy_r_r283 = cpy_r_r272 + 2;
    cpy_r_r272 = cpy_r_r283;
    goto CPyL163;
CPyL168: ;
    cpy_r_underscore = cpy_r_r271;
    cpy_r_r284 = (CPyPtr)&((PyVarObject *)cpy_r_underscore)->ob_size;
    cpy_r_r285 = *(int64_t *)cpy_r_r284;
    cpy_r_r286 = cpy_r_r285 << 1;
    cpy_r_r287 = cpy_r_r286 != 0;
    if (!cpy_r_r287) goto CPyL229;
    cpy_r_r288 = CPyStatics[178]; /* '"' */
    cpy_r_r289 = CPyStatics[5213]; /* '()" field names cannot start with an underscore: ' */
    cpy_r_r290 = CPyStr_Build(3, cpy_r_r288, cpy_r_type_name, cpy_r_r289);
    if (unlikely(cpy_r_r290 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 419, CPyStatic_semanal_namedtuple___globals);
        goto CPyL230;
    }
    cpy_r_r291 = CPyStatics[71]; /* ', ' */
    cpy_r_r292 = PyUnicode_Join(cpy_r_r291, cpy_r_underscore);
    CPy_DECREF(cpy_r_underscore);
    if (unlikely(cpy_r_r292 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 420, CPyStatic_semanal_namedtuple___globals);
        goto CPyL231;
    }
    cpy_r_r293 = PyUnicode_Concat(cpy_r_r290, cpy_r_r292);
    CPy_DECREF(cpy_r_r290);
    CPy_DECREF(cpy_r_r292);
    if (unlikely(cpy_r_r293 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 419, CPyStatic_semanal_namedtuple___globals);
        goto CPyL226;
    }
    cpy_r_r294 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r293, cpy_r_call);
    CPy_DECREF(cpy_r_r293);
    if (unlikely(cpy_r_r294 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 418, CPyStatic_semanal_namedtuple___globals);
        goto CPyL226;
    }
CPyL173: ;
    cpy_r_r295 = (CPyPtr)&((PyVarObject *)cpy_r_defaults)->ob_size;
    cpy_r_r296 = *(int64_t *)cpy_r_r295;
    cpy_r_r297 = cpy_r_r296 << 1;
    cpy_r_r298 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r299 = *(int64_t *)cpy_r_r298;
    cpy_r_r300 = cpy_r_r299 << 1;
    cpy_r_r301 = (Py_ssize_t)cpy_r_r297 > (Py_ssize_t)cpy_r_r300;
    if (!cpy_r_r301) goto CPyL232;
    cpy_r_r302 = CPyStatics[5214]; /* 'Too many defaults given in call to "' */
    cpy_r_r303 = CPyStatics[5206]; /* '()"' */
    cpy_r_r304 = CPyStr_Build(3, cpy_r_r302, cpy_r_type_name, cpy_r_r303);
    CPy_DECREF(cpy_r_type_name);
    if (unlikely(cpy_r_r304 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 424, CPyStatic_semanal_namedtuple___globals);
        goto CPyL233;
    }
    cpy_r_r305 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r304, cpy_r_call);
    CPy_DECREF(cpy_r_r304);
    if (unlikely(cpy_r_r305 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 424, CPyStatic_semanal_namedtuple___globals);
        goto CPyL233;
    }
    cpy_r_r306 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r307 = *(int64_t *)cpy_r_r306;
    cpy_r_r308 = cpy_r_r307 << 1;
    cpy_r_r309 = CPyList_GetSlice(cpy_r_defaults, 0, cpy_r_r308);
    CPy_DECREF(cpy_r_defaults);
    if (unlikely(cpy_r_r309 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 425, CPyStatic_semanal_namedtuple___globals);
        goto CPyL234;
    }
    if (likely(PyList_Check(cpy_r_r309)))
        cpy_r_r310 = cpy_r_r309;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 425, CPyStatic_semanal_namedtuple___globals, "list", cpy_r_r309);
        goto CPyL234;
    }
    cpy_r_defaults = cpy_r_r310;
CPyL179: ;
    cpy_r_r311.f0 = cpy_r_items;
    cpy_r_r311.f1 = cpy_r_types;
    cpy_r_r311.f2 = cpy_r_defaults;
    cpy_r_r311.f3 = cpy_r_typename;
    cpy_r_r311.f4 = cpy_r_tvar_defs;
    cpy_r_r311.f5 = 1;
    CPy_INCREF(cpy_r_r311.f0);
    CPy_INCREF(cpy_r_r311.f1);
    CPy_INCREF(cpy_r_r311.f2);
    CPy_INCREF(cpy_r_r311.f3);
    CPy_INCREF(cpy_r_r311.f4);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_defaults);
    CPy_DECREF(cpy_r_typename);
    CPy_DECREF(cpy_r_tvar_defs);
    cpy_r_r312 = PyTuple_New(6);
    if (unlikely(cpy_r_r312 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6064 = cpy_r_r311.f0;
    PyTuple_SET_ITEM(cpy_r_r312, 0, __tmp6064);
    PyObject *__tmp6065 = cpy_r_r311.f1;
    PyTuple_SET_ITEM(cpy_r_r312, 1, __tmp6065);
    PyObject *__tmp6066 = cpy_r_r311.f2;
    PyTuple_SET_ITEM(cpy_r_r312, 2, __tmp6066);
    PyObject *__tmp6067 = cpy_r_r311.f3;
    PyTuple_SET_ITEM(cpy_r_r312, 3, __tmp6067);
    PyObject *__tmp6068 = cpy_r_r311.f4;
    PyTuple_SET_ITEM(cpy_r_r312, 4, __tmp6068);
    PyObject *__tmp6069 = cpy_r_r311.f5 ? Py_True : Py_False;
    CPy_INCREF(__tmp6069);
    PyTuple_SET_ITEM(cpy_r_r312, 5, __tmp6069);
    return cpy_r_r312;
CPyL180: ;
    cpy_r_r313 = NULL;
    return cpy_r_r313;
CPyL181: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL8;
CPyL182: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_args);
    goto CPyL180;
CPyL183: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_defaults);
    goto CPyL14;
CPyL184: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_defaults);
    goto CPyL180;
CPyL185: ;
    CPy_DECREF(cpy_r_type_name);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_defaults);
    goto CPyL18;
CPyL186: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_r35);
    goto CPyL180;
CPyL187: ;
    CPy_DECREF(cpy_r_r43);
    goto CPyL46;
CPyL188: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_r43);
    goto CPyL180;
CPyL189: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_r43);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL180;
CPyL190: ;
    CPy_DECREF(cpy_r_r43);
    goto CPyL30;
CPyL191: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL25;
CPyL192: ;
    CPy_DECREF(cpy_r_defaults);
    goto CPyL36;
CPyL193: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_arg);
    goto CPyL180;
CPyL194: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_r80);
    goto CPyL50;
CPyL195: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_r80);
    goto CPyL53;
CPyL196: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_r80);
    goto CPyL180;
CPyL197: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_defaults);
    goto CPyL59;
CPyL198: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_defaults);
    goto CPyL64;
CPyL199: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    goto CPyL180;
CPyL200: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_types);
    goto CPyL180;
CPyL201: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    goto CPyL180;
CPyL202: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_defaults);
    CPy_DECREF(cpy_r_typename);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_tvar_defs);
    goto CPyL87;
CPyL203: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    goto CPyL180;
CPyL204: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_listexpr);
    goto CPyL180;
CPyL205: ;
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_tvar_defs);
    goto CPyL117;
CPyL206: ;
    CPy_DECREF(cpy_r_type_name);
    CPy_DECREF(cpy_r_defaults);
    CPy_DECREF(cpy_r_typename);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_tvar_defs);
    CPy_DECREF(cpy_r_listexpr);
    goto CPyL103;
CPyL207: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_r173);
    goto CPyL180;
CPyL208: ;
    CPy_DECREF(cpy_r_r173);
    goto CPyL116;
CPyL209: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_r178);
    goto CPyL180;
CPyL210: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_listexpr);
    goto CPyL180;
CPyL211: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_listexpr);
    CPy_DecRef(cpy_r_r189);
    goto CPyL180;
CPyL212: ;
    CPy_DECREF(cpy_r_r196);
    goto CPyL136;
CPyL213: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_listexpr);
    CPy_DecRef(cpy_r_r189);
    CPy_DecRef(cpy_r_r196);
    goto CPyL180;
CPyL214: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_listexpr);
    CPy_DecRef(cpy_r_r189);
    CPy_DecRef(cpy_r_r196);
    CPy_DecRef(cpy_r_t);
    goto CPyL180;
CPyL215: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL135;
CPyL216: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_tvar_defs);
    goto CPyL180;
CPyL217: ;
    CPy_DECREF(cpy_r_type_name);
    CPy_DECREF(cpy_r_defaults);
    CPy_DECREF(cpy_r_typename);
    CPy_DECREF(cpy_r_tvar_defs);
    CPy_DECREF(cpy_r_result);
    goto CPyL144;
CPyL218: ;
    CPy_DECREF(cpy_r_type_name);
    CPy_DECREF(cpy_r_defaults);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_tvar_defs);
    CPy_DECREF(cpy_r_items);
    goto CPyL147;
CPyL219: ;
    CPy_DecRef(cpy_r_typename);
    goto CPyL180;
CPyL220: ;
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_r244);
    goto CPyL180;
CPyL221: ;
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r245);
    goto CPyL180;
CPyL222: ;
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r245);
    CPy_DecRef(cpy_r_r246);
    goto CPyL180;
CPyL223: ;
    CPy_DECREF(cpy_r_types);
    goto CPyL153;
CPyL224: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_items);
    goto CPyL180;
CPyL225: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r256);
    goto CPyL180;
CPyL226: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_items);
    goto CPyL180;
CPyL227: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r271);
    goto CPyL180;
CPyL228: ;
    CPy_DECREF(cpy_r_item_2);
    goto CPyL167;
CPyL229: ;
    CPy_DECREF(cpy_r_underscore);
    goto CPyL173;
CPyL230: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_underscore);
    goto CPyL180;
CPyL231: ;
    CPy_DecRef(cpy_r_type_name);
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r290);
    goto CPyL180;
CPyL232: ;
    CPy_DECREF(cpy_r_type_name);
    goto CPyL179;
CPyL233: ;
    CPy_DecRef(cpy_r_defaults);
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_items);
    goto CPyL180;
CPyL234: ;
    CPy_DecRef(cpy_r_typename);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_items);
    goto CPyL180;
}

PyObject *CPyPy_semanal_namedtuple___NamedTupleAnalyzer___parse_namedtuple_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"call", "fullname", 0};
    static CPyArg_Parser parser = {"OO:parse_namedtuple_args", kwlist, 0};
    PyObject *obj_call;
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_call, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_namedtuple___NamedTupleAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_namedtuple.NamedTupleAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_call;
    if (likely(Py_TYPE(obj_call) == CPyType_nodes___CallExpr))
        arg_call = obj_call;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_call); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___parse_namedtuple_args(arg_self, arg_call, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_args", 329, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

PyObject *CPyDef_semanal_namedtuple___NamedTupleAnalyzer___parse_namedtuple_fields_with_types(PyObject *cpy_r_self, PyObject *cpy_r_nodes, PyObject *cpy_r_context) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_types;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_type_node;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_type;
    tuple_T3OOO cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_analyzed;
    PyObject *cpy_r_r70;
    CPyPtr cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    CPyTagged cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    tuple_T4OOOC cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyTagged cpy_r_r92;
    PyObject *cpy_r_r93;
    tuple_T4OOOC cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 435, CPyStatic_semanal_namedtuple___globals);
        goto CPyL51;
    }
    cpy_r_items = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 436, CPyStatic_semanal_namedtuple___globals);
        goto CPyL52;
    }
    cpy_r_types = cpy_r_r1;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_nodes)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL49;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_nodes, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_nodes___Expression)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 437, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Expression", cpy_r_r7);
        goto CPyL53;
    }
    cpy_r_item = cpy_r_r8;
    cpy_r_r9 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (!cpy_r_r12) goto CPyL54;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___TupleExpr))
        cpy_r_r13 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 439, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.TupleExpr", cpy_r_item);
        goto CPyL55;
    }
    cpy_r_r14 = ((mypy___nodes___TupleExprObject *)cpy_r_r13)->_items;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = cpy_r_r17 != 4;
    if (cpy_r_r18) {
        goto CPyL56;
    } else
        goto CPyL11;
CPyL8: ;
    cpy_r_r19 = CPyStatics[5215]; /* 'Invalid "NamedTuple()" field definition' */
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___TupleExpr))
        cpy_r_r20 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 440, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.TupleExpr", cpy_r_item);
        goto CPyL51;
    }
    cpy_r_r21 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 440, CPyStatic_semanal_namedtuple___globals);
        goto CPyL51;
    }
    cpy_r_r22 = Py_None;
    CPy_INCREF(cpy_r_r22);
    return cpy_r_r22;
CPyL11: ;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___TupleExpr))
        cpy_r_r23 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 442, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.TupleExpr", cpy_r_item);
        goto CPyL55;
    }
    cpy_r_r24 = ((mypy___nodes___TupleExprObject *)cpy_r_r23)->_items;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPySequence_CheckUnpackCount(cpy_r_r24, 2);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 442, CPyStatic_semanal_namedtuple___globals);
        goto CPyL57;
    }
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_r24, 0);
    cpy_r_r28 = CPyList_GetItemUnsafe(cpy_r_r24, 2);
    CPy_DECREF(cpy_r_r24);
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_nodes___Expression)))
        cpy_r_r29 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 442, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Expression", cpy_r_r27);
        goto CPyL58;
    }
    cpy_r_name = cpy_r_r29;
    if (likely(PyObject_TypeCheck(cpy_r_r28, CPyType_nodes___Expression)))
        cpy_r_r30 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 442, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Expression", cpy_r_r28);
        goto CPyL59;
    }
    cpy_r_type_node = cpy_r_r30;
    cpy_r_r31 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_name)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (cpy_r_r34) {
        goto CPyL60;
    } else
        goto CPyL61;
CPyL16: ;
    if (likely(Py_TYPE(cpy_r_name) == CPyType_nodes___StrExpr))
        cpy_r_r35 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 444, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.StrExpr", cpy_r_name);
        goto CPyL62;
    }
    cpy_r_r36 = ((mypy___nodes___StrExprObject *)cpy_r_r35)->_value;
    CPy_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_name);
    cpy_r_r37 = PyList_Append(cpy_r_items, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 444, CPyStatic_semanal_namedtuple___globals);
        goto CPyL63;
    } else
        goto CPyL21;
CPyL18: ;
    cpy_r_r39 = CPyStatics[5216]; /* 'Invalid "NamedTuple()" field name' */
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___TupleExpr))
        cpy_r_r40 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 446, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.TupleExpr", cpy_r_item);
        goto CPyL51;
    }
    cpy_r_r41 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 446, CPyStatic_semanal_namedtuple___globals);
        goto CPyL51;
    }
    cpy_r_r42 = Py_None;
    CPy_INCREF(cpy_r_r42);
    return cpy_r_r42;
CPyL21: ;
    cpy_r_r43 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = CPY_GET_ATTR_TRAIT(cpy_r_r44, CPyType_semanal_shared___SemanticAnalyzerInterface, 27, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char); /* is_stub_file */
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 449, CPyStatic_semanal_namedtuple___globals);
        goto CPyL64;
    }
CPyL22: ;
    cpy_r_r46 = NULL;
    cpy_r_r47 = CPyDef_exprtotype___expr_to_unanalyzed_type(cpy_r_type_node, cpy_r_r43, cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 449, CPyStatic_semanal_namedtuple___globals);
        goto CPyL65;
    } else
        goto CPyL66;
CPyL23: ;
    cpy_r_type = cpy_r_r47;
    goto CPyL31;
CPyL24: ;
    cpy_r_r48 = CPy_CatchError();
    cpy_r_r49 = (PyObject *)CPyType_exprtotype___TypeTranslationError;
    cpy_r_r50 = CPy_ExceptionMatches(cpy_r_r49);
    if (!cpy_r_r50) goto CPyL67;
    cpy_r_r51 = CPyStatics[5217]; /* 'Invalid field type' */
    cpy_r_r52 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r51, cpy_r_type_node);
    CPy_DecRef(cpy_r_type_node);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 451, CPyStatic_semanal_namedtuple___globals);
        goto CPyL29;
    }
    cpy_r_r53 = Py_None;
    CPy_RestoreExcInfo(cpy_r_r48);
    CPy_DecRef(cpy_r_r48.f0);
    CPy_DecRef(cpy_r_r48.f1);
    CPy_DecRef(cpy_r_r48.f2);
    CPy_INCREF(cpy_r_r53);
    return cpy_r_r53;
CPyL27: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL29;
    } else
        goto CPyL68;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    CPy_RestoreExcInfo(cpy_r_r48);
    CPy_DecRef(cpy_r_r48.f0);
    CPy_DecRef(cpy_r_r48.f1);
    CPy_DecRef(cpy_r_r48.f2);
    cpy_r_r54 = CPy_KeepPropagating();
    if (!cpy_r_r54) goto CPyL51;
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r55 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_options;
    cpy_r_r57 = ((mypy___options___OptionsObject *)cpy_r_r56)->_disable_recursive_aliases;
    cpy_r_r58 = cpy_r_r57 ^ 1;
    if (cpy_r_r58) goto CPyL33;
    cpy_r_r59 = cpy_r_r58;
    goto CPyL35;
CPyL33: ;
    cpy_r_r60 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61 = CPY_GET_METHOD_TRAIT(cpy_r_r60, CPyType_semanal_shared___SemanticAnalyzerInterface, 28, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *))(cpy_r_r60); /* is_func_scope */
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 457, CPyStatic_semanal_namedtuple___globals);
        goto CPyL69;
    }
    cpy_r_r62 = cpy_r_r61 ^ 1;
    cpy_r_r59 = cpy_r_r62;
CPyL35: ;
    cpy_r_r63 = CPyStatics[5200]; /* 'NamedTuple item type' */
    cpy_r_r64 = NULL;
    cpy_r_r65 = 2;
    cpy_r_r66 = 2;
    cpy_r_r67 = 2;
    cpy_r_r68 = 2;
    cpy_r_r69 = CPY_GET_METHOD_TRAIT(cpy_r_r55, CPyType_semanal_shared___SemanticAnalyzerInterface, 4, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *, char, char, char, char, char, PyObject *))(cpy_r_r55, cpy_r_type, cpy_r_r64, cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_r59, cpy_r_r68, cpy_r_r63); /* anal_type */
    CPy_DECREF(cpy_r_type);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 454, CPyStatic_semanal_namedtuple___globals);
        goto CPyL53;
    }
    cpy_r_analyzed = cpy_r_r69;
    cpy_r_r70 = (PyObject *)CPyType_types___UnboundType;
    cpy_r_r71 = (CPyPtr)&((PyObject *)cpy_r_analyzed)->ob_type;
    cpy_r_r72 = *(PyObject * *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 == cpy_r_r70;
    if (cpy_r_r73) {
        goto CPyL70;
    } else
        goto CPyL39;
CPyL37: ;
    cpy_r_r74 = NULL;
    cpy_r_r75 = NULL;
    cpy_r_r76 = CPY_INT_TAG;
    cpy_r_r77 = CPY_INT_TAG;
    cpy_r_r78 = CPyDef_types___AnyType(10, cpy_r_r74, cpy_r_r75, cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 462, CPyStatic_semanal_namedtuple___globals);
        goto CPyL53;
    }
    cpy_r_analyzed = cpy_r_r78;
CPyL39: ;
    cpy_r_r79 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r80 = cpy_r_analyzed == cpy_r_r79;
    if (cpy_r_r80) {
        goto CPyL71;
    } else
        goto CPyL44;
CPyL40: ;
    cpy_r_r81 = PyList_New(0);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 465, CPyStatic_semanal_namedtuple___globals);
        goto CPyL51;
    }
    cpy_r_r82 = PyList_New(0);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 465, CPyStatic_semanal_namedtuple___globals);
        goto CPyL72;
    }
    cpy_r_r83 = PyList_New(0);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 465, CPyStatic_semanal_namedtuple___globals);
        goto CPyL73;
    }
    cpy_r_r84.f0 = cpy_r_r81;
    cpy_r_r84.f1 = cpy_r_r82;
    cpy_r_r84.f2 = cpy_r_r83;
    cpy_r_r84.f3 = 0;
    CPy_INCREF(cpy_r_r84.f0);
    CPy_INCREF(cpy_r_r84.f1);
    CPy_INCREF(cpy_r_r84.f2);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r82);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r85 = PyTuple_New(4);
    if (unlikely(cpy_r_r85 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6070 = cpy_r_r84.f0;
    PyTuple_SET_ITEM(cpy_r_r85, 0, __tmp6070);
    PyObject *__tmp6071 = cpy_r_r84.f1;
    PyTuple_SET_ITEM(cpy_r_r85, 1, __tmp6071);
    PyObject *__tmp6072 = cpy_r_r84.f2;
    PyTuple_SET_ITEM(cpy_r_r85, 2, __tmp6072);
    PyObject *__tmp6073 = cpy_r_r84.f3 ? Py_True : Py_False;
    CPy_INCREF(__tmp6073);
    PyTuple_SET_ITEM(cpy_r_r85, 3, __tmp6073);
    return cpy_r_r85;
CPyL44: ;
    if (likely(cpy_r_analyzed != Py_None))
        cpy_r_r86 = cpy_r_analyzed;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 466, CPyStatic_semanal_namedtuple___globals, "mypy.types.Type", cpy_r_analyzed);
        goto CPyL53;
    }
    cpy_r_r87 = PyList_Append(cpy_r_types, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 466, CPyStatic_semanal_namedtuple___globals);
        goto CPyL53;
    } else
        goto CPyL48;
CPyL46: ;
    cpy_r_r89 = CPyStatics[5218]; /* 'Tuple expected as "NamedTuple()" field' */
    cpy_r_r90 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_self, cpy_r_r89, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 468, CPyStatic_semanal_namedtuple___globals);
        goto CPyL51;
    }
    cpy_r_r91 = Py_None;
    CPy_INCREF(cpy_r_r91);
    return cpy_r_r91;
CPyL48: ;
    cpy_r_r92 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r92;
    goto CPyL3;
CPyL49: ;
    cpy_r_r93 = PyList_New(0);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 470, CPyStatic_semanal_namedtuple___globals);
        goto CPyL53;
    }
    cpy_r_r94.f0 = cpy_r_items;
    cpy_r_r94.f1 = cpy_r_types;
    cpy_r_r94.f2 = cpy_r_r93;
    cpy_r_r94.f3 = 1;
    CPy_INCREF(cpy_r_r94.f0);
    CPy_INCREF(cpy_r_r94.f1);
    CPy_INCREF(cpy_r_r94.f2);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r95 = PyTuple_New(4);
    if (unlikely(cpy_r_r95 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6074 = cpy_r_r94.f0;
    PyTuple_SET_ITEM(cpy_r_r95, 0, __tmp6074);
    PyObject *__tmp6075 = cpy_r_r94.f1;
    PyTuple_SET_ITEM(cpy_r_r95, 1, __tmp6075);
    PyObject *__tmp6076 = cpy_r_r94.f2;
    PyTuple_SET_ITEM(cpy_r_r95, 2, __tmp6076);
    PyObject *__tmp6077 = cpy_r_r94.f3 ? Py_True : Py_False;
    CPy_INCREF(__tmp6077);
    PyTuple_SET_ITEM(cpy_r_r95, 3, __tmp6077);
    return cpy_r_r95;
CPyL51: ;
    cpy_r_r96 = NULL;
    return cpy_r_r96;
CPyL52: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL51;
CPyL53: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    goto CPyL51;
CPyL54: ;
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    goto CPyL46;
CPyL55: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_item);
    goto CPyL51;
CPyL56: ;
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    goto CPyL8;
CPyL57: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_r24);
    goto CPyL51;
CPyL58: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_r28);
    goto CPyL51;
CPyL59: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_name);
    goto CPyL51;
CPyL60: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL16;
CPyL61: ;
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_type_node);
    goto CPyL18;
CPyL62: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_type_node);
    goto CPyL51;
CPyL63: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_type_node);
    goto CPyL51;
CPyL64: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r43);
    goto CPyL24;
CPyL65: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    goto CPyL24;
CPyL66: ;
    CPy_DECREF(cpy_r_type_node);
    goto CPyL23;
CPyL67: ;
    CPy_DecRef(cpy_r_type_node);
    goto CPyL27;
CPyL68: ;
    CPy_DecRef(cpy_r_r48.f0);
    CPy_DecRef(cpy_r_r48.f1);
    CPy_DecRef(cpy_r_r48.f2);
    goto CPyL28;
CPyL69: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_r55);
    goto CPyL51;
CPyL70: ;
    CPy_DECREF(cpy_r_analyzed);
    goto CPyL37;
CPyL71: ;
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_analyzed);
    goto CPyL40;
CPyL72: ;
    CPy_DecRef(cpy_r_r81);
    goto CPyL51;
CPyL73: ;
    CPy_DecRef(cpy_r_r81);
    CPy_DecRef(cpy_r_r82);
    goto CPyL51;
}

PyObject *CPyPy_semanal_namedtuple___NamedTupleAnalyzer___parse_namedtuple_fields_with_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"nodes", "context", 0};
    static CPyArg_Parser parser = {"OO:parse_namedtuple_fields_with_types", kwlist, 0};
    PyObject *obj_nodes;
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_nodes, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_namedtuple___NamedTupleAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_namedtuple.NamedTupleAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_nodes;
    if (likely(PyList_Check(obj_nodes)))
        arg_nodes = obj_nodes;
    else {
        CPy_TypeError("list", obj_nodes); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___parse_namedtuple_fields_with_types(arg_self, arg_nodes, arg_context);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "parse_namedtuple_fields_with_types", 428, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

PyObject *CPyDef_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "__get__", -1, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

char CPyDef_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "<lambda>", "__mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj", "__mypyc_env__", 513, CPyStatic_semanal_namedtuple___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_tuple_base;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'tuple_base' of 'build_namedtuple_typeinfo_NamedTupleAnalyzer_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<lambda>", 513, CPyStatic_semanal_namedtuple___globals);
        goto CPyL4;
    }
CPyL2: ;
    cpy_r_r2 = CPyDef_semanal_shared___calculate_tuple_fallback(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<lambda>", 513, CPyStatic_semanal_namedtuple___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "<lambda>", 513, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

PyObject *CPyDef_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "__get__", -1, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

char CPyDef_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_var, char cpy_r_is_initialized_in_class, char cpy_r_is_property) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_add_field;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = ((mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "add_field", "add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj", "__mypyc_env__", 516, CPyStatic_semanal_namedtuple___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_field;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "add_field", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "add_field", -1, CPyStatic_semanal_namedtuple___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_add_field = cpy_r_r1;
    CPy_DECREF(cpy_r_add_field);
    if (cpy_r_is_initialized_in_class != 2) goto CPyL4;
    cpy_r_is_initialized_in_class = 0;
CPyL4: ;
    if (cpy_r_is_property != 2) goto CPyL6;
    cpy_r_is_property = 0;
CPyL6: ;
    cpy_r_r2 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "add_field", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 519, CPyStatic_semanal_namedtuple___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r2);
CPyL7: ;
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_var)->_info);
    ((mypy___nodes___VarObject *)cpy_r_var)->_info = cpy_r_r2;
    ((mypy___nodes___VarObject *)cpy_r_var)->_is_initialized_in_class = cpy_r_is_initialized_in_class;
    ((mypy___nodes___VarObject *)cpy_r_var)->_is_property = cpy_r_is_property;
    cpy_r_r6 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "add_field", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 522, CPyStatic_semanal_namedtuple___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r6);
CPyL8: ;
    cpy_r_r7 = CPY_GET_ATTR(cpy_r_r6, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_field", 522, CPyStatic_semanal_namedtuple___globals);
        goto CPyL18;
    }
CPyL9: ;
    cpy_r_r8 = CPyStatics[224]; /* '.' */
    cpy_r_r9 = CPY_GET_ATTR(cpy_r_var, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_field", 522, CPyStatic_semanal_namedtuple___globals);
        goto CPyL19;
    }
CPyL10: ;
    cpy_r_r10 = CPyStr_Build(3, cpy_r_r7, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_field", 522, CPyStatic_semanal_namedtuple___globals);
        goto CPyL18;
    }
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_var)->__fullname);
    ((mypy___nodes___VarObject *)cpy_r_var)->__fullname = cpy_r_r10;
    cpy_r_r12 = 2;
    cpy_r_r13 = 2;
    cpy_r_r14 = 2;
    cpy_r_r15 = 2;
    cpy_r_r16 = 2;
    cpy_r_r17 = CPyDef_nodes___SymbolTableNode(4, cpy_r_var, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_field", 523, CPyStatic_semanal_namedtuple___globals);
        goto CPyL18;
    }
    cpy_r_r18 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r18 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'info' of 'build_namedtuple_typeinfo_NamedTupleAnalyzer_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r18);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_field", 523, CPyStatic_semanal_namedtuple___globals);
        goto CPyL20;
    }
CPyL13: ;
    cpy_r_r19 = ((mypy___nodes___TypeInfoObject *)cpy_r_r18)->_names;
    if (unlikely(cpy_r_r19 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r19);
    }
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_field", 523, CPyStatic_semanal_namedtuple___globals);
        goto CPyL20;
    }
CPyL14: ;
    cpy_r_r20 = CPY_GET_ATTR(cpy_r_var, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_field", 523, CPyStatic_semanal_namedtuple___globals);
        goto CPyL21;
    }
CPyL15: ;
    cpy_r_r21 = CPyDict_SetItem(cpy_r_r19, cpy_r_r20, cpy_r_r17);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_field", 523, CPyStatic_semanal_namedtuple___globals);
        goto CPyL17;
    }
    return 1;
CPyL17: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r19);
    goto CPyL17;
}

PyObject *CPyPy_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"var", "is_initialized_in_class", "is_property", 0};
    static CPyArg_Parser parser = {"O|OO:__call__", kwlist, 0};
    PyObject *obj_var;
    PyObject *obj_is_initialized_in_class = NULL;
    PyObject *obj_is_property = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_var, &obj_is_initialized_in_class, &obj_is_property)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_var;
    if (likely(Py_TYPE(obj_var) == CPyType_nodes___Var))
        arg_var = obj_var;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_var); 
        goto fail;
    }
    char arg_is_initialized_in_class;
    if (obj_is_initialized_in_class == NULL) {
        arg_is_initialized_in_class = 2;
    } else if (unlikely(!PyBool_Check(obj_is_initialized_in_class))) {
        CPy_TypeError("bool", obj_is_initialized_in_class); goto fail;
    } else
        arg_is_initialized_in_class = obj_is_initialized_in_class == Py_True;
    char arg_is_property;
    if (obj_is_property == NULL) {
        arg_is_property = 2;
    } else if (unlikely(!PyBool_Check(obj_is_property))) {
        CPy_TypeError("bool", obj_is_property); goto fail;
    } else
        arg_is_property = obj_is_property == Py_True;
    char retval = CPyDef_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__(arg___mypyc_self__, arg_var, arg_is_initialized_in_class, arg_is_property);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_field", 516, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

PyObject *CPyDef_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "__get__", -1, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

char CPyDef_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_funcname, PyObject *cpy_r_ret, PyObject *cpy_r_args, char cpy_r_is_classmethod, char cpy_r_is_new) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_add_method;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_first;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyPtr cpy_r_r35;
    int64_t cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_types;
    CPyPtr cpy_r_r44;
    int64_t cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_arg_2;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_items;
    CPyPtr cpy_r_r58;
    int64_t cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyTagged cpy_r_r61;
    CPyPtr cpy_r_r62;
    int64_t cpy_r_r63;
    CPyTagged cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_arg_3;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    CPyTagged cpy_r_r70;
    PyObject *cpy_r_arg_kinds;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyTagged cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_signature;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyPtr cpy_r_r95;
    CPyPtr cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_func;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    CPyTagged cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_v;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    CPyPtr cpy_r_r127;
    CPyPtr cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_dec;
    CPyTagged cpy_r_r130;
    char cpy_r_r131;
    char cpy_r_r132;
    char cpy_r_r133;
    char cpy_r_r134;
    char cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_sym;
    char cpy_r_r138;
    char cpy_r_r139;
    char cpy_r_r140;
    char cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    int32_t cpy_r_r147;
    char cpy_r_r148;
    char cpy_r_r149;
    cpy_r_r0 = ((mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "add_method", "add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj", "__mypyc_env__", 555, CPyStatic_semanal_namedtuple___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_method;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "add_method", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "add_method", -1, CPyStatic_semanal_namedtuple___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_add_method = cpy_r_r1;
    CPy_DECREF(cpy_r_add_method);
    if (cpy_r_is_classmethod != 2) goto CPyL4;
    cpy_r_is_classmethod = 0;
CPyL4: ;
    if (cpy_r_is_new != 2) goto CPyL6;
    cpy_r_is_new = 0;
CPyL6: ;
    if (cpy_r_is_classmethod) goto CPyL8;
    if (!cpy_r_is_new) goto CPyL17;
CPyL8: ;
    cpy_r_r2 = CPyStatics[4474]; /* '_cls' */
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPyDef_nodes___Var(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 563, CPyStatic_semanal_namedtuple___globals);
        goto CPyL82;
    }
    cpy_r_r5 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_selftype;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "add_method", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "selftype", 563, CPyStatic_semanal_namedtuple___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r5);
CPyL10: ;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = CPyDef_types___TypeType___make_normalized(cpy_r_r5, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 563, CPyStatic_semanal_namedtuple___globals);
        goto CPyL83;
    }
    cpy_r_r9 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r9 == NULL)) {
        goto CPyL84;
    } else
        goto CPyL14;
CPyL12: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 563, CPyStatic_semanal_namedtuple___globals);
        goto CPyL81;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r11 = Py_None;
    cpy_r_r12 = 2;
    cpy_r_r13 = CPyDef_nodes___Argument(cpy_r_r4, cpy_r_r8, cpy_r_r11, cpy_r_r9, cpy_r_r12);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 563, CPyStatic_semanal_namedtuple___globals);
        goto CPyL82;
    }
    cpy_r_r14 = PyList_New(1);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 563, CPyStatic_semanal_namedtuple___globals);
        goto CPyL85;
    }
    cpy_r_r15 = (CPyPtr)&((PyListObject *)cpy_r_r14)->ob_item;
    cpy_r_r16 = *(CPyPtr *)cpy_r_r15;
    *(PyObject * *)cpy_r_r16 = cpy_r_r13;
    cpy_r_first = cpy_r_r14;
    goto CPyL25;
CPyL17: ;
    cpy_r_r17 = CPyStatics[5219]; /* '_self' */
    cpy_r_r18 = NULL;
    cpy_r_r19 = CPyDef_nodes___Var(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 565, CPyStatic_semanal_namedtuple___globals);
        goto CPyL82;
    }
    cpy_r_r20 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_selftype;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "add_method", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "selftype", 565, CPyStatic_semanal_namedtuple___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r20);
CPyL19: ;
    cpy_r_r21 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r21 == NULL)) {
        goto CPyL87;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r22 = 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 565, CPyStatic_semanal_namedtuple___globals);
        goto CPyL81;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r23 = Py_None;
    cpy_r_r24 = 2;
    cpy_r_r25 = CPyDef_nodes___Argument(cpy_r_r19, cpy_r_r20, cpy_r_r23, cpy_r_r21, cpy_r_r24);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 565, CPyStatic_semanal_namedtuple___globals);
        goto CPyL82;
    }
    cpy_r_r26 = PyList_New(1);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 565, CPyStatic_semanal_namedtuple___globals);
        goto CPyL88;
    }
    cpy_r_r27 = (CPyPtr)&((PyListObject *)cpy_r_r26)->ob_item;
    cpy_r_r28 = *(CPyPtr *)cpy_r_r27;
    *(PyObject * *)cpy_r_r28 = cpy_r_r25;
    cpy_r_first = cpy_r_r26;
CPyL25: ;
    cpy_r_r29 = PyNumber_Add(cpy_r_first, cpy_r_args);
    CPy_DECREF(cpy_r_first);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 566, CPyStatic_semanal_namedtuple___globals);
        goto CPyL82;
    }
    if (likely(PyList_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "add_method", 566, CPyStatic_semanal_namedtuple___globals, "list", cpy_r_r29);
        goto CPyL82;
    }
    cpy_r_args = cpy_r_r30;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = PyList_New(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 568, CPyStatic_semanal_namedtuple___globals);
        goto CPyL89;
    }
    cpy_r_r34 = 0;
CPyL29: ;
    cpy_r_r35 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r36 = *(int64_t *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 << 1;
    cpy_r_r38 = (Py_ssize_t)cpy_r_r34 < (Py_ssize_t)cpy_r_r37;
    if (!cpy_r_r38) goto CPyL33;
    cpy_r_r39 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r34);
    if (likely(Py_TYPE(cpy_r_r39) == CPyType_nodes___Argument))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "add_method", 568, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Argument", cpy_r_r39);
        goto CPyL90;
    }
    cpy_r_arg = cpy_r_r40;
    cpy_r_r41 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_type_annotation;
    CPy_INCREF(cpy_r_r41);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r42 = CPyList_SetItemUnsafe(cpy_r_r33, cpy_r_r34, cpy_r_r41);
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 568, CPyStatic_semanal_namedtuple___globals);
        goto CPyL90;
    }
    cpy_r_r43 = cpy_r_r34 + 2;
    cpy_r_r34 = cpy_r_r43;
    goto CPyL29;
CPyL33: ;
    cpy_r_types = cpy_r_r33;
    cpy_r_r44 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r45 = *(int64_t *)cpy_r_r44;
    cpy_r_r46 = PyList_New(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 569, CPyStatic_semanal_namedtuple___globals);
        goto CPyL91;
    }
    cpy_r_r47 = 0;
CPyL35: ;
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = (Py_ssize_t)cpy_r_r47 < (Py_ssize_t)cpy_r_r50;
    if (!cpy_r_r51) goto CPyL40;
    cpy_r_r52 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r47);
    if (likely(Py_TYPE(cpy_r_r52) == CPyType_nodes___Argument))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "add_method", 569, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Argument", cpy_r_r52);
        goto CPyL92;
    }
    cpy_r_arg_2 = cpy_r_r53;
    cpy_r_r54 = ((mypy___nodes___ArgumentObject *)cpy_r_arg_2)->_variable;
    cpy_r_r55 = CPY_GET_ATTR(cpy_r_r54, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 569, CPyStatic_semanal_namedtuple___globals);
        goto CPyL93;
    }
CPyL38: ;
    CPy_DECREF(cpy_r_arg_2);
    cpy_r_r56 = CPyList_SetItemUnsafe(cpy_r_r46, cpy_r_r47, cpy_r_r55);
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 569, CPyStatic_semanal_namedtuple___globals);
        goto CPyL92;
    }
    cpy_r_r57 = cpy_r_r47 + 2;
    cpy_r_r47 = cpy_r_r57;
    goto CPyL35;
CPyL40: ;
    cpy_r_items = cpy_r_r46;
    cpy_r_r58 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r59 = *(int64_t *)cpy_r_r58;
    cpy_r_r60 = PyList_New(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 570, CPyStatic_semanal_namedtuple___globals);
        goto CPyL94;
    }
    cpy_r_r61 = 0;
CPyL42: ;
    cpy_r_r62 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r63 = *(int64_t *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 << 1;
    cpy_r_r65 = (Py_ssize_t)cpy_r_r61 < (Py_ssize_t)cpy_r_r64;
    if (!cpy_r_r65) goto CPyL46;
    cpy_r_r66 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r61);
    if (likely(Py_TYPE(cpy_r_r66) == CPyType_nodes___Argument))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "add_method", 570, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Argument", cpy_r_r66);
        goto CPyL95;
    }
    cpy_r_arg_3 = cpy_r_r67;
    cpy_r_r68 = ((mypy___nodes___ArgumentObject *)cpy_r_arg_3)->_kind;
    CPy_INCREF(cpy_r_r68);
    CPy_DECREF(cpy_r_arg_3);
    cpy_r_r69 = CPyList_SetItemUnsafe(cpy_r_r60, cpy_r_r61, cpy_r_r68);
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 570, CPyStatic_semanal_namedtuple___globals);
        goto CPyL95;
    }
    cpy_r_r70 = cpy_r_r61 + 2;
    cpy_r_r61 = cpy_r_r70;
    goto CPyL42;
CPyL46: ;
    cpy_r_arg_kinds = cpy_r_r60;
    cpy_r_r71 = Py_None;
    cpy_r_r72 = PySequence_Contains(cpy_r_types, cpy_r_r71);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 571, CPyStatic_semanal_namedtuple___globals);
        goto CPyL96;
    }
    cpy_r_r74 = cpy_r_r72;
    cpy_r_r75 = cpy_r_r74 ^ 1;
    if (cpy_r_r75) {
        goto CPyL50;
    } else
        goto CPyL97;
CPyL48: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r76 = 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 571, CPyStatic_semanal_namedtuple___globals);
        goto CPyL81;
    }
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r77 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_function_type;
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "add_method", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "function_type", 572, CPyStatic_semanal_namedtuple___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r77);
CPyL51: ;
    cpy_r_r78 = NULL;
    cpy_r_r79 = NULL;
    cpy_r_r80 = NULL;
    cpy_r_r81 = CPY_INT_TAG;
    cpy_r_r82 = CPY_INT_TAG;
    cpy_r_r83 = 2;
    cpy_r_r84 = 2;
    cpy_r_r85 = NULL;
    cpy_r_r86 = 2;
    cpy_r_r87 = NULL;
    cpy_r_r88 = NULL;
    cpy_r_r89 = NULL;
    cpy_r_r90 = 2;
    cpy_r_r91 = 2;
    cpy_r_r92 = CPyDef_types___CallableType(cpy_r_types, cpy_r_arg_kinds, cpy_r_items, cpy_r_ret, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r82, cpy_r_r83, cpy_r_r84, cpy_r_r85, cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r89, cpy_r_r90, cpy_r_r91);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_arg_kinds);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 572, CPyStatic_semanal_namedtuple___globals);
        goto CPyL89;
    }
    cpy_r_signature = cpy_r_r92;
    cpy_r_r93 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_tvd;
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "add_method", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "tvd", 573, CPyStatic_semanal_namedtuple___globals);
        goto CPyL98;
    }
    CPy_INCREF(cpy_r_r93);
CPyL53: ;
    cpy_r_r94 = PyList_New(1);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 573, CPyStatic_semanal_namedtuple___globals);
        goto CPyL99;
    }
    cpy_r_r95 = (CPyPtr)&((PyListObject *)cpy_r_r94)->ob_item;
    cpy_r_r96 = *(CPyPtr *)cpy_r_r95;
    *(PyObject * *)cpy_r_r96 = cpy_r_r93;
    CPy_DECREF(((mypy___types___CallableTypeObject *)cpy_r_signature)->_variables);
    ((mypy___types___CallableTypeObject *)cpy_r_signature)->_variables = cpy_r_r94;
    cpy_r_r98 = PyList_New(0);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 574, CPyStatic_semanal_namedtuple___globals);
        goto CPyL98;
    }
    cpy_r_r99 = CPyDef_nodes___Block(cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 574, CPyStatic_semanal_namedtuple___globals);
        goto CPyL98;
    }
    cpy_r_r100 = NULL;
    cpy_r_r101 = CPyDef_nodes___FuncDef(cpy_r_funcname, cpy_r_args, cpy_r_r99, cpy_r_r100);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 574, CPyStatic_semanal_namedtuple___globals);
        goto CPyL100;
    }
    cpy_r_func = cpy_r_r101;
    cpy_r_r102 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "add_method", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 575, CPyStatic_semanal_namedtuple___globals);
        goto CPyL101;
    }
    CPy_INCREF(cpy_r_r102);
CPyL58: ;
    CPy_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_func)->_info);
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->_info = cpy_r_r102;
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->_is_class = cpy_r_is_classmethod;
    cpy_r_r105 = CPyDef_semanal_shared___set_callable_name(cpy_r_signature, cpy_r_func);
    CPy_DECREF(cpy_r_signature);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 577, CPyStatic_semanal_namedtuple___globals);
        goto CPyL102;
    }
    CPy_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_func)->_type);
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->_type = cpy_r_r105;
    cpy_r_r107 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "add_method", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 578, CPyStatic_semanal_namedtuple___globals);
        goto CPyL102;
    }
    CPy_INCREF(cpy_r_r107);
CPyL60: ;
    cpy_r_r108 = CPY_GET_ATTR(cpy_r_r107, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 578, CPyStatic_semanal_namedtuple___globals);
        goto CPyL102;
    }
CPyL61: ;
    cpy_r_r109 = CPyStatics[224]; /* '.' */
    cpy_r_r110 = PyUnicode_Concat(cpy_r_r108, cpy_r_r109);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 578, CPyStatic_semanal_namedtuple___globals);
        goto CPyL102;
    }
    cpy_r_r111 = PyUnicode_Concat(cpy_r_r110, cpy_r_funcname);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 578, CPyStatic_semanal_namedtuple___globals);
        goto CPyL102;
    }
    CPy_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_func)->__fullname);
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->__fullname = cpy_r_r111;
    cpy_r_r113 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r113 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "add_method", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "line", 579, CPyStatic_semanal_namedtuple___globals);
        goto CPyL102;
    }
    CPyTagged_INCREF(cpy_r_r113);
CPyL64: ;
    CPyTagged_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_func)->_line);
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->_line = cpy_r_r113;
    if (!cpy_r_is_classmethod) goto CPyL75;
    cpy_r_r115 = ((mypy___nodes___FuncDefObject *)cpy_r_func)->_type;
    CPy_INCREF(cpy_r_r115);
    if (likely(cpy_r_r115 != Py_None))
        cpy_r_r116 = cpy_r_r115;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "add_method", 581, CPyStatic_semanal_namedtuple___globals, "mypy.types.ProperType", cpy_r_r115);
        goto CPyL102;
    }
    cpy_r_r117 = CPyDef_nodes___Var(cpy_r_funcname, cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 581, CPyStatic_semanal_namedtuple___globals);
        goto CPyL102;
    }
    cpy_r_v = cpy_r_r117;
    ((mypy___nodes___VarObject *)cpy_r_v)->_is_classmethod = 1;
    cpy_r_r119 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "add_method", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 583, CPyStatic_semanal_namedtuple___globals);
        goto CPyL103;
    }
    CPy_INCREF(cpy_r_r119);
CPyL68: ;
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_v)->_info);
    ((mypy___nodes___VarObject *)cpy_r_v)->_info = cpy_r_r119;
    cpy_r_r121 = ((mypy___nodes___FuncDefObject *)cpy_r_func)->__fullname;
    CPy_INCREF(cpy_r_r121);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_v)->__fullname);
    ((mypy___nodes___VarObject *)cpy_r_v)->__fullname = cpy_r_r121;
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->_is_decorated = 1;
    cpy_r_r123 = 1;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 585, CPyStatic_semanal_namedtuple___globals);
        goto CPyL103;
    }
    cpy_r_r124 = CPyStatics[4849]; /* 'classmethod' */
    cpy_r_r125 = CPyDef_nodes___NameExpr(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 586, CPyStatic_semanal_namedtuple___globals);
        goto CPyL103;
    }
    cpy_r_r126 = PyList_New(1);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 586, CPyStatic_semanal_namedtuple___globals);
        goto CPyL104;
    }
    cpy_r_r127 = (CPyPtr)&((PyListObject *)cpy_r_r126)->ob_item;
    cpy_r_r128 = *(CPyPtr *)cpy_r_r127;
    *(PyObject * *)cpy_r_r128 = cpy_r_r125;
    cpy_r_r129 = CPyDef_nodes___Decorator(cpy_r_func, cpy_r_r126, cpy_r_v);
    CPy_DECREF(cpy_r_func);
    CPy_DECREF(cpy_r_r126);
    CPy_DECREF(cpy_r_v);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 586, CPyStatic_semanal_namedtuple___globals);
        goto CPyL82;
    }
    cpy_r_dec = cpy_r_r129;
    cpy_r_r130 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r130 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "add_method", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "line", 587, CPyStatic_semanal_namedtuple___globals);
        goto CPyL105;
    }
    CPyTagged_INCREF(cpy_r_r130);
CPyL73: ;
    CPyTagged_DECREF(((mypy___nodes___DecoratorObject *)cpy_r_dec)->_line);
    ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_line = cpy_r_r130;
    cpy_r_r132 = 2;
    cpy_r_r133 = 2;
    cpy_r_r134 = 2;
    cpy_r_r135 = 2;
    cpy_r_r136 = 2;
    cpy_r_r137 = CPyDef_nodes___SymbolTableNode(4, cpy_r_dec, cpy_r_r132, cpy_r_r133, cpy_r_r134, cpy_r_r135, cpy_r_r136);
    CPy_DECREF(cpy_r_dec);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 588, CPyStatic_semanal_namedtuple___globals);
        goto CPyL82;
    }
    cpy_r_sym = cpy_r_r137;
    goto CPyL77;
CPyL75: ;
    cpy_r_r138 = 2;
    cpy_r_r139 = 2;
    cpy_r_r140 = 2;
    cpy_r_r141 = 2;
    cpy_r_r142 = 2;
    cpy_r_r143 = CPyDef_nodes___SymbolTableNode(4, cpy_r_func, cpy_r_r138, cpy_r_r139, cpy_r_r140, cpy_r_r141, cpy_r_r142);
    CPy_DECREF(cpy_r_func);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 590, CPyStatic_semanal_namedtuple___globals);
        goto CPyL82;
    }
    cpy_r_sym = cpy_r_r143;
CPyL77: ;
    ((mypy___nodes___SymbolTableNodeObject *)cpy_r_sym)->_plugin_generated = 1;
    cpy_r_r145 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r145 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'info' of 'build_namedtuple_typeinfo_NamedTupleAnalyzer_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r145);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 592, CPyStatic_semanal_namedtuple___globals);
        goto CPyL106;
    }
CPyL78: ;
    cpy_r_r146 = ((mypy___nodes___TypeInfoObject *)cpy_r_r145)->_names;
    if (unlikely(cpy_r_r146 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r146);
    }
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 592, CPyStatic_semanal_namedtuple___globals);
        goto CPyL106;
    }
CPyL79: ;
    cpy_r_r147 = CPyDict_SetItem(cpy_r_r146, cpy_r_funcname, cpy_r_sym);
    CPy_DECREF(cpy_r_r146);
    CPy_DECREF(cpy_r_sym);
    cpy_r_r148 = cpy_r_r147 >= 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 592, CPyStatic_semanal_namedtuple___globals);
        goto CPyL81;
    }
    return 1;
CPyL81: ;
    cpy_r_r149 = 2;
    return cpy_r_r149;
CPyL82: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL81;
CPyL83: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL81;
CPyL84: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r8);
    goto CPyL12;
CPyL85: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r13);
    goto CPyL81;
CPyL86: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r19);
    goto CPyL81;
CPyL87: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    goto CPyL20;
CPyL88: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r25);
    goto CPyL81;
CPyL89: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r0);
    goto CPyL81;
CPyL90: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r33);
    goto CPyL81;
CPyL91: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_types);
    goto CPyL81;
CPyL92: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r46);
    goto CPyL81;
CPyL93: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_arg_2);
    goto CPyL81;
CPyL94: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_items);
    goto CPyL81;
CPyL95: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r60);
    goto CPyL81;
CPyL96: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_arg_kinds);
    goto CPyL81;
CPyL97: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_arg_kinds);
    goto CPyL48;
CPyL98: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_signature);
    goto CPyL81;
CPyL99: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_r93);
    goto CPyL81;
CPyL100: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_signature);
    goto CPyL81;
CPyL101: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_func);
    goto CPyL81;
CPyL102: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_func);
    goto CPyL81;
CPyL103: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_v);
    goto CPyL81;
CPyL104: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_r125);
    goto CPyL81;
CPyL105: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_dec);
    goto CPyL81;
CPyL106: ;
    CPy_DecRef(cpy_r_sym);
    goto CPyL81;
}

PyObject *CPyPy_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"funcname", "ret", "args", "is_classmethod", "is_new", 0};
    static CPyArg_Parser parser = {"OOO|OO:__call__", kwlist, 0};
    PyObject *obj_funcname;
    PyObject *obj_ret;
    PyObject *obj_args;
    PyObject *obj_is_classmethod = NULL;
    PyObject *obj_is_new = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_funcname, &obj_ret, &obj_args, &obj_is_classmethod, &obj_is_new)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_funcname;
    if (likely(PyUnicode_Check(obj_funcname)))
        arg_funcname = obj_funcname;
    else {
        CPy_TypeError("str", obj_funcname); 
        goto fail;
    }
    PyObject *arg_ret;
    if (likely(PyObject_TypeCheck(obj_ret, CPyType_types___Type)))
        arg_ret = obj_ret;
    else {
        CPy_TypeError("mypy.types.Type", obj_ret); 
        goto fail;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    char arg_is_classmethod;
    if (obj_is_classmethod == NULL) {
        arg_is_classmethod = 2;
    } else if (unlikely(!PyBool_Check(obj_is_classmethod))) {
        CPy_TypeError("bool", obj_is_classmethod); goto fail;
    } else
        arg_is_classmethod = obj_is_classmethod == Py_True;
    char arg_is_new;
    if (obj_is_new == NULL) {
        arg_is_new = 2;
    } else if (unlikely(!PyBool_Check(obj_is_new))) {
        CPy_TypeError("bool", obj_is_new); goto fail;
    } else
        arg_is_new = obj_is_new == Py_True;
    char retval = CPyDef_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__(arg___mypyc_self__, arg_funcname, arg_ret, arg_args, arg_is_classmethod, arg_is_new);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "add_method", 555, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

PyObject *CPyDef_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "__get__", -1, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

PyObject *CPyDef_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_var) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_make_init_arg;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_default;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_kind;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = ((mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "make_init_arg", "make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj", "__mypyc_env__", 600, CPyStatic_semanal_namedtuple___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_make_init_arg;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "make_init_arg", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "make_init_arg", -1, CPyStatic_semanal_namedtuple___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_make_init_arg = cpy_r_r1;
    CPy_DECREF(cpy_r_make_init_arg);
    cpy_r_r2 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_default_items;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'default_items' of 'build_namedtuple_typeinfo_NamedTupleAnalyzer_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "make_init_arg", 601, CPyStatic_semanal_namedtuple___globals);
        goto CPyL17;
    }
CPyL3: ;
    cpy_r_r3 = CPY_GET_ATTR(cpy_r_var, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "make_init_arg", 601, CPyStatic_semanal_namedtuple___globals);
        goto CPyL19;
    }
CPyL4: ;
    cpy_r_r4 = CPyStatics[308]; /* 'get' */
    cpy_r_r5 = Py_None;
    PyObject *cpy_r_r6[3] = {cpy_r_r2, cpy_r_r3, cpy_r_r5};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r7, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "make_init_arg", 601, CPyStatic_semanal_namedtuple___globals);
        goto CPyL20;
    }
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (PyObject_TypeCheck(cpy_r_r8, CPyType_nodes___Expression))
        cpy_r_r9 = cpy_r_r8;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL6078;
    if (cpy_r_r8 == Py_None)
        cpy_r_r9 = cpy_r_r8;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL6078;
    CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "make_init_arg", 601, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Expression or None", cpy_r_r8);
    goto CPyL17;
__LL6078: ;
    cpy_r_default = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_default == cpy_r_r10;
    if (!cpy_r_r11) goto CPyL11;
    cpy_r_r12 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r12 == NULL)) {
        goto CPyL21;
    } else
        goto CPyL10;
CPyL8: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "make_init_arg", 602, CPyStatic_semanal_namedtuple___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL10: ;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r12;
    goto CPyL15;
CPyL11: ;
    cpy_r_r15 = CPyStatic_nodes___ARG_OPT;
    if (unlikely(cpy_r_r15 == NULL)) {
        goto CPyL22;
    } else
        goto CPyL14;
CPyL12: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_OPT\" was not set");
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "make_init_arg", 602, CPyStatic_semanal_namedtuple___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL14: ;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r14 = cpy_r_r15;
CPyL15: ;
    cpy_r_kind = cpy_r_r14;
    cpy_r_r17 = ((mypy___nodes___VarObject *)cpy_r_var)->_type;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = 2;
    cpy_r_r19 = CPyDef_nodes___Argument(cpy_r_var, cpy_r_r17, cpy_r_default, cpy_r_kind, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_default);
    CPy_DECREF(cpy_r_kind);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "make_init_arg", 603, CPyStatic_semanal_namedtuple___globals);
        goto CPyL17;
    }
    return cpy_r_r19;
CPyL17: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_default);
    goto CPyL8;
CPyL22: ;
    CPy_DecRef(cpy_r_default);
    goto CPyL12;
}

PyObject *CPyPy_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"var", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_var;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_var)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_var;
    if (likely(Py_TYPE(obj_var) == CPyType_nodes___Var))
        arg_var = obj_var;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_var); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj_____call__(arg___mypyc_self__, arg_var);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "make_init_arg", 600, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

PyObject *CPyDef_semanal_namedtuple___NamedTupleAnalyzer___build_namedtuple_typeinfo(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_items, PyObject *cpy_r_types, PyObject *cpy_r_default_items, CPyTagged cpy_r_line, PyObject *cpy_r_existing_info) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_strtype;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_implicit_any;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_basetuple_type;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_dictype;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    CPyPtr cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_ordereddictype;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    CPyPtr cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_fallback;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_iterable_type;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    CPyPtr cpy_r_r49;
    int64_t cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyTagged cpy_r_r52;
    CPyPtr cpy_r_r53;
    int64_t cpy_r_r54;
    CPyTagged cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_item;
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_literals;
    CPyTagged cpy_r_r64;
    CPyTagged cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_match_args_type;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    CPyTagged cpy_r_r80;
    CPyTagged cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    CPyTagged cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject **cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    CPyTagged cpy_r_r134;
    CPyTagged cpy_r_r135;
    CPyPtr cpy_r_r136;
    int64_t cpy_r_r137;
    CPyTagged cpy_r_r138;
    char cpy_r_r139;
    CPyPtr cpy_r_r140;
    int64_t cpy_r_r141;
    CPyTagged cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_item_2;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r148;
    int32_t cpy_r_r149;
    char cpy_r_r150;
    CPyTagged cpy_r_r151;
    CPyTagged cpy_r_r152;
    PyObject *cpy_r_fields;
    CPyTagged cpy_r_r153;
    CPyPtr cpy_r_r154;
    int64_t cpy_r_r155;
    CPyTagged cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_var;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject **cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    CPyTagged cpy_r_r166;
    PyObject *cpy_r_r167;
    CPyTagged cpy_r_r168;
    CPyTagged cpy_r_r169;
    CPyPtr cpy_r_r170;
    int64_t cpy_r_r171;
    CPyTagged cpy_r_r172;
    char cpy_r_r173;
    CPyPtr cpy_r_r174;
    int64_t cpy_r_r175;
    CPyTagged cpy_r_r176;
    char cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_item_3;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_typ_2;
    PyObject *cpy_r_r182;
    int32_t cpy_r_r183;
    char cpy_r_r184;
    CPyTagged cpy_r_r185;
    CPyTagged cpy_r_r186;
    PyObject *cpy_r_vars;
    CPyPtr cpy_r_r187;
    int64_t cpy_r_r188;
    PyObject *cpy_r_r189;
    CPyTagged cpy_r_r190;
    CPyPtr cpy_r_r191;
    int64_t cpy_r_r192;
    CPyTagged cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r__;
    char cpy_r_r197;
    CPyTagged cpy_r_r198;
    CPyTagged cpy_r_r199;
    CPyTagged cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_tuple_of_strings;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject **cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject **cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject **cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject **cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject **cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject **cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    tuple_T2II cpy_r_r252;
    tuple_T2II cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    char cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject **cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    char cpy_r_r269;
    char cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    CPyTagged cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    CPyTagged cpy_r_r287;
    CPyTagged cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    CPyTagged cpy_r_r291;
    CPyTagged cpy_r_r292;
    CPyTagged cpy_r_r293;
    PyObject *cpy_r_r294;
    char cpy_r_r295;
    PyObject *cpy_r_r296;
    char cpy_r_r297;
    PyObject *cpy_r_r298;
    char cpy_r_r299;
    char cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    CPyPtr cpy_r_r303;
    int64_t cpy_r_r304;
    PyObject *cpy_r_r305;
    CPyTagged cpy_r_r306;
    CPyPtr cpy_r_r307;
    int64_t cpy_r_r308;
    CPyTagged cpy_r_r309;
    char cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_var_2;
    PyObject *cpy_r_r313;
    CPyTagged cpy_r_r314;
    CPyTagged cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    char cpy_r_r318;
    char cpy_r_r319;
    PyObject *cpy_r_r320;
    char cpy_r_r321;
    CPyTagged cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject **cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    char cpy_r_r329;
    char cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    CPyPtr cpy_r_r333;
    int64_t cpy_r_r334;
    PyObject *cpy_r_r335;
    CPyTagged cpy_r_r336;
    CPyPtr cpy_r_r337;
    int64_t cpy_r_r338;
    CPyTagged cpy_r_r339;
    char cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_var_3;
    PyObject *cpy_r_r343;
    PyObject **cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    char cpy_r_r348;
    CPyTagged cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject **cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject **cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    char cpy_r_r368;
    PyObject *cpy_r_r369;
    char cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    CPyPtr cpy_r_r373;
    CPyPtr cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject **cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    CPyTagged cpy_r_r394;
    CPyTagged cpy_r_r395;
    PyObject *cpy_r_r396;
    CPyTagged cpy_r_r397;
    PyObject *cpy_r_r398;
    PyObject *cpy_r_self_tvar_expr;
    char cpy_r_r399;
    char cpy_r_r400;
    char cpy_r_r401;
    char cpy_r_r402;
    char cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    int32_t cpy_r_r408;
    char cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    size_t __tmp6083;
    cpy_r_r0 = CPyDef_semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 472, CPyStatic_semanal_namedtuple___globals);
        goto CPyL215;
    }
    CPy_INCREF(cpy_r_default_items);
    if (((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_default_items != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_default_items);
    }
    ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_default_items = cpy_r_default_items;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 472, CPyStatic_semanal_namedtuple___globals);
        goto CPyL216;
    }
    CPyTagged_INCREF(cpy_r_line);
    if (((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_line);
    }
    ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_line = cpy_r_line;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 472, CPyStatic_semanal_namedtuple___globals);
        goto CPyL216;
    }
    cpy_r_r3 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPY_GET_METHOD_TRAIT(cpy_r_r3, CPyType_semanal_shared___SemanticAnalyzerInterface, 1, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r3, cpy_r_r4, cpy_r_r5); /* named_type */
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 481, CPyStatic_semanal_namedtuple___globals);
        goto CPyL216;
    }
    cpy_r_strtype = cpy_r_r6;
    cpy_r_r7 = NULL;
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = CPY_INT_TAG;
    cpy_r_r11 = CPyDef_types___AnyType(12, cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 482, CPyStatic_semanal_namedtuple___globals);
        goto CPyL217;
    }
    cpy_r_implicit_any = cpy_r_r11;
    cpy_r_r12 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r14 = PyList_New(1);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 483, CPyStatic_semanal_namedtuple___globals);
        goto CPyL218;
    }
    cpy_r_r15 = (CPyPtr)&((PyListObject *)cpy_r_r14)->ob_item;
    cpy_r_r16 = *(CPyPtr *)cpy_r_r15;
    CPy_INCREF(cpy_r_implicit_any);
    *(PyObject * *)cpy_r_r16 = cpy_r_implicit_any;
    cpy_r_r17 = CPY_GET_METHOD_TRAIT(cpy_r_r12, CPyType_semanal_shared___SemanticAnalyzerInterface, 1, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r12, cpy_r_r13, cpy_r_r14); /* named_type */
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 483, CPyStatic_semanal_namedtuple___globals);
        goto CPyL219;
    }
    cpy_r_basetuple_type = cpy_r_r17;
    cpy_r_r18 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r20 = PyList_New(2);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 484, CPyStatic_semanal_namedtuple___globals);
        goto CPyL220;
    }
    cpy_r_r21 = (CPyPtr)&((PyListObject *)cpy_r_r20)->ob_item;
    cpy_r_r22 = *(CPyPtr *)cpy_r_r21;
    CPy_INCREF(cpy_r_strtype);
    *(PyObject * *)cpy_r_r22 = cpy_r_strtype;
    cpy_r_r23 = cpy_r_r22 + 8;
    CPy_INCREF(cpy_r_implicit_any);
    *(PyObject * *)cpy_r_r23 = cpy_r_implicit_any;
    cpy_r_r24 = CPY_GET_METHOD_TRAIT(cpy_r_r18, CPyType_semanal_shared___SemanticAnalyzerInterface, 1, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r18, cpy_r_r19, cpy_r_r20); /* named_type */
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 484, CPyStatic_semanal_namedtuple___globals);
        goto CPyL221;
    }
    cpy_r_dictype = cpy_r_r24;
    cpy_r_r25 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r27 = PyList_New(2);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 486, CPyStatic_semanal_namedtuple___globals);
        goto CPyL222;
    }
    cpy_r_r28 = (CPyPtr)&((PyListObject *)cpy_r_r27)->ob_item;
    cpy_r_r29 = *(CPyPtr *)cpy_r_r28;
    CPy_INCREF(cpy_r_strtype);
    *(PyObject * *)cpy_r_r29 = cpy_r_strtype;
    cpy_r_r30 = cpy_r_r29 + 8;
    CPy_INCREF(cpy_r_implicit_any);
    *(PyObject * *)cpy_r_r30 = cpy_r_implicit_any;
    cpy_r_r31 = CPY_GET_METHOD_TRAIT(cpy_r_r25, CPyType_semanal_shared___SemanticAnalyzerInterface, 1, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r25, cpy_r_r26, cpy_r_r27); /* named_type */
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 486, CPyStatic_semanal_namedtuple___globals);
        goto CPyL223;
    }
    cpy_r_ordereddictype = cpy_r_r31;
    cpy_r_r32 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r34 = PyList_New(1);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 487, CPyStatic_semanal_namedtuple___globals);
        goto CPyL224;
    }
    cpy_r_r35 = (CPyPtr)&((PyListObject *)cpy_r_r34)->ob_item;
    cpy_r_r36 = *(CPyPtr *)cpy_r_r35;
    CPy_INCREF(cpy_r_implicit_any);
    *(PyObject * *)cpy_r_r36 = cpy_r_implicit_any;
    cpy_r_r37 = CPY_GET_METHOD_TRAIT(cpy_r_r32, CPyType_semanal_shared___SemanticAnalyzerInterface, 1, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r32, cpy_r_r33, cpy_r_r34); /* named_type */
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 487, CPyStatic_semanal_namedtuple___globals);
        goto CPyL225;
    }
    cpy_r_fallback = cpy_r_r37;
    cpy_r_r38 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[757]; /* 'typing.Iterable' */
    cpy_r_r40 = PyList_New(1);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 490, CPyStatic_semanal_namedtuple___globals);
        goto CPyL226;
    }
    cpy_r_r41 = (CPyPtr)&((PyListObject *)cpy_r_r40)->ob_item;
    cpy_r_r42 = *(CPyPtr *)cpy_r_r41;
    *(PyObject * *)cpy_r_r42 = cpy_r_implicit_any;
    cpy_r_r43 = CPY_GET_METHOD_TRAIT(cpy_r_r38, CPyType_semanal_shared___SemanticAnalyzerInterface, 2, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r38, cpy_r_r39, cpy_r_r40); /* named_type_or_none */
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 490, CPyStatic_semanal_namedtuple___globals);
        goto CPyL227;
    }
    cpy_r_iterable_type = cpy_r_r43;
    cpy_r_r44 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r46 = NULL;
    cpy_r_r47 = CPY_GET_METHOD_TRAIT(cpy_r_r44, CPyType_semanal_shared___SemanticAnalyzerInterface, 1, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r44, cpy_r_r45, cpy_r_r46); /* named_type */
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 491, CPyStatic_semanal_namedtuple___globals);
        goto CPyL228;
    }
    if (((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_function_type != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_function_type);
    }
    ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_function_type = cpy_r_r47;
    cpy_r_r48 = 1;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 491, CPyStatic_semanal_namedtuple___globals);
        goto CPyL228;
    }
    cpy_r_r49 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r50 = *(int64_t *)cpy_r_r49;
    cpy_r_r51 = PyList_New(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 493, CPyStatic_semanal_namedtuple___globals);
        goto CPyL228;
    }
    cpy_r_r52 = 0;
CPyL19: ;
    cpy_r_r53 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r54 = *(int64_t *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 << 1;
    cpy_r_r56 = (Py_ssize_t)cpy_r_r52 < (Py_ssize_t)cpy_r_r55;
    if (!cpy_r_r56) goto CPyL24;
    cpy_r_r57 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r52);
    if (likely(PyUnicode_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 493, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_r57);
        goto CPyL229;
    }
    cpy_r_item = cpy_r_r58;
    cpy_r_r59 = CPY_INT_TAG;
    cpy_r_r60 = CPY_INT_TAG;
    cpy_r_r61 = CPyDef_types___LiteralType(cpy_r_item, cpy_r_strtype, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 493, CPyStatic_semanal_namedtuple___globals);
        goto CPyL229;
    }
    cpy_r_r62 = CPyList_SetItemUnsafe(cpy_r_r51, cpy_r_r52, cpy_r_r61);
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 493, CPyStatic_semanal_namedtuple___globals);
        goto CPyL229;
    }
    cpy_r_r63 = cpy_r_r52 + 2;
    cpy_r_r52 = cpy_r_r63;
    goto CPyL19;
CPyL24: ;
    cpy_r_literals = cpy_r_r51;
    cpy_r_r64 = CPY_INT_TAG;
    cpy_r_r65 = CPY_INT_TAG;
    cpy_r_r66 = 2;
    cpy_r_r67 = CPyDef_types___TupleType(cpy_r_literals, cpy_r_basetuple_type, cpy_r_r64, cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_literals);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 494, CPyStatic_semanal_namedtuple___globals);
        goto CPyL228;
    }
    cpy_r_match_args_type = cpy_r_r67;
    cpy_r_r68 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r69 = cpy_r_existing_info != cpy_r_r68;
    if (!cpy_r_r69) goto CPyL31;
    CPy_INCREF(cpy_r_existing_info);
    if (likely(cpy_r_existing_info != Py_None))
        cpy_r_r70 = cpy_r_existing_info;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 479, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.TypeInfo", cpy_r_existing_info);
        goto CPyL230;
    }
    cpy_r_r71 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 479, CPyStatic_semanal_namedtuple___globals);
        goto CPyL230;
    }
    if (!cpy_r_r71) goto CPyL31;
    CPy_INCREF(cpy_r_existing_info);
    if (likely(cpy_r_existing_info != Py_None))
        cpy_r_r72 = cpy_r_existing_info;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 496, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.TypeInfo", cpy_r_existing_info);
        goto CPyL230;
    }
    cpy_r_r73 = cpy_r_r72;
    goto CPyL34;
CPyL31: ;
    cpy_r_r74 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r74);
    cpy_r_r75 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r75 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "line", 496, CPyStatic_semanal_namedtuple___globals);
        goto CPyL231;
    }
    CPyTagged_INCREF(cpy_r_r75);
CPyL32: ;
    cpy_r_r76 = CPY_GET_METHOD_TRAIT(cpy_r_r74, CPyType_semanal_shared___SemanticAnalyzerInterface, 6, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *, CPyTagged))(cpy_r_r74, cpy_r_name, cpy_r_fallback, cpy_r_r75); /* basic_new_typeinfo */
    CPyTagged_DECREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 496, CPyStatic_semanal_namedtuple___globals);
        goto CPyL230;
    }
    cpy_r_r73 = cpy_r_r76;
CPyL34: ;
    if (((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info);
    }
    ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info = cpy_r_r73;
    cpy_r_r77 = 1;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 496, CPyStatic_semanal_namedtuple___globals);
        goto CPyL230;
    }
    cpy_r_r78 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 497, CPyStatic_semanal_namedtuple___globals);
        goto CPyL230;
    }
    CPy_INCREF(cpy_r_r78);
CPyL36: ;
    ((mypy___nodes___TypeInfoObject *)cpy_r_r78)->_is_named_tuple = 1;
    cpy_r_r79 = 1;
    CPy_DECREF(cpy_r_r78);
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 497, CPyStatic_semanal_namedtuple___globals);
        goto CPyL230;
    }
    cpy_r_r80 = CPY_INT_TAG;
    cpy_r_r81 = CPY_INT_TAG;
    cpy_r_r82 = 2;
    cpy_r_r83 = CPyDef_types___TupleType(cpy_r_types, cpy_r_fallback, cpy_r_r80, cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_fallback);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 498, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    if (((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_tuple_base != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_tuple_base);
    }
    ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_tuple_base = cpy_r_r83;
    cpy_r_r84 = 1;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 498, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    cpy_r_r85 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 499, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    CPy_INCREF(cpy_r_r85);
CPyL40: ;
    cpy_r_r86 = ((mypy___nodes___TypeInfoObject *)cpy_r_r85)->_special_alias;
    if (unlikely(cpy_r_r86 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'special_alias' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r86);
    }
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 499, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
CPyL41: ;
    cpy_r_r87 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r88 = cpy_r_r86 != cpy_r_r87;
    CPy_DECREF(cpy_r_r86);
    if (!cpy_r_r88) goto CPyL54;
    cpy_r_r89 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 499, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    CPy_INCREF(cpy_r_r89);
CPyL43: ;
    cpy_r_r90 = ((mypy___nodes___TypeInfoObject *)cpy_r_r89)->_special_alias;
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "TypeInfo", "special_alias", 499, CPyStatic_semanal_namedtuple___globals);
        goto CPyL233;
    }
CPyL44: ;
    if (likely(cpy_r_r90 != Py_None))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 499, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.TypeAlias", cpy_r_r90);
        goto CPyL233;
    }
    cpy_r_r92 = ((mypy___nodes___TypeAliasObject *)cpy_r_r91)->_target;
    CPy_INCREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r93 = CPyDef_semanal_shared___has_placeholder(cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r93 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 499, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    if (!cpy_r_r93) goto CPyL54;
    cpy_r_r94 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r94);
    cpy_r_r95 = CPyStatics[5220]; /* 'NamedTuple item' */
    cpy_r_r96 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 501, CPyStatic_semanal_namedtuple___globals);
        goto CPyL234;
    }
    CPy_INCREF(cpy_r_r96);
CPyL48: ;
    cpy_r_r97 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_tuple_base;
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "tuple_base", 501, CPyStatic_semanal_namedtuple___globals);
        goto CPyL235;
    }
    CPy_INCREF(cpy_r_r97);
CPyL49: ;
    cpy_r_r98 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 501, CPyStatic_semanal_namedtuple___globals);
        goto CPyL236;
    }
    CPy_INCREF(cpy_r_r98);
CPyL50: ;
    cpy_r_r99 = ((mypy___nodes___TypeInfoObject *)cpy_r_r98)->_tuple_type;
    if (unlikely(cpy_r_r99 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'tuple_type' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r99);
    }
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 501, CPyStatic_semanal_namedtuple___globals);
        goto CPyL236;
    }
CPyL51: ;
    cpy_r_r100 = PyObject_RichCompare(cpy_r_r97, cpy_r_r99, 3);
    CPy_DECREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 501, CPyStatic_semanal_namedtuple___globals);
        goto CPyL235;
    }
    if (unlikely(!PyBool_Check(cpy_r_r100))) {
        CPy_TypeError("bool", cpy_r_r100); cpy_r_r101 = 2;
    } else
        cpy_r_r101 = cpy_r_r100 == Py_True;
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r101 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 501, CPyStatic_semanal_namedtuple___globals);
        goto CPyL235;
    }
    cpy_r_r102 = Py_None;
    cpy_r_r103 = CPY_GET_METHOD_TRAIT(cpy_r_r94, CPyType_semanal_shared___SemanticAnalyzerInterface, 15, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *, char))(cpy_r_r94, cpy_r_r102, cpy_r_r95, cpy_r_r96, cpy_r_r101); /* process_placeholder */
    CPy_DECREF(cpy_r_r96);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r103 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 500, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
CPyL54: ;
    cpy_r_r104 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 503, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    CPy_INCREF(cpy_r_r104);
CPyL55: ;
    cpy_r_r105 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_tuple_base;
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "tuple_base", 503, CPyStatic_semanal_namedtuple___globals);
        goto CPyL237;
    }
    CPy_INCREF(cpy_r_r105);
CPyL56: ;
    cpy_r_r106 = CPyDef_nodes___TypeInfo___update_tuple_type(cpy_r_r104, cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r106 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 503, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    cpy_r_r107 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r107 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "line", 504, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    CPyTagged_INCREF(cpy_r_r107);
CPyL58: ;
    cpy_r_r108 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 504, CPyStatic_semanal_namedtuple___globals);
        goto CPyL238;
    }
    CPy_INCREF(cpy_r_r108);
CPyL59: ;
    if (((mypy___nodes___TypeInfoObject *)cpy_r_r108)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_r108)->_line);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_r108)->_line = cpy_r_r107;
    cpy_r_r109 = 1;
    CPy_DECREF(cpy_r_r108);
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 504, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    cpy_r_r110 = CPyStatics[5221]; /* 'fields' */
    cpy_r_r111 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r112[1] = {cpy_r_items};
    cpy_r_r113 = (PyObject **)&cpy_r_r112;
    cpy_r_r114 = PyObject_VectorcallMethod(cpy_r_r111, cpy_r_r113, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 506, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    if (likely(PyList_Check(cpy_r_r114)))
        cpy_r_r115 = cpy_r_r114;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 506, CPyStatic_semanal_namedtuple___globals, "list", cpy_r_r114);
        goto CPyL232;
    }
    cpy_r_r116 = CPyDict_Build(1, cpy_r_r110, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 506, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    cpy_r_r117 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 506, CPyStatic_semanal_namedtuple___globals);
        goto CPyL239;
    }
    CPy_INCREF(cpy_r_r117);
CPyL64: ;
    cpy_r_r118 = ((mypy___nodes___TypeInfoObject *)cpy_r_r117)->_metadata;
    if (unlikely(cpy_r_r118 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'metadata' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r118);
    }
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 506, CPyStatic_semanal_namedtuple___globals);
        goto CPyL239;
    }
CPyL65: ;
    cpy_r_r119 = CPyStatics[5204]; /* 'namedtuple' */
    cpy_r_r120 = CPyDict_SetItem(cpy_r_r118, cpy_r_r119, cpy_r_r116);
    CPy_DECREF(cpy_r_r118);
    CPy_DECREF(cpy_r_r116);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 506, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    cpy_r_r122 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_tuple_base;
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "tuple_base", 511, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    CPy_INCREF(cpy_r_r122);
CPyL67: ;
    cpy_r_r123 = CPyDef_semanal_shared___has_placeholder(cpy_r_r122);
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r123 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 511, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    if (cpy_r_r123) goto CPyL75;
    cpy_r_r124 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_tuple_base;
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "tuple_base", 511, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    CPy_INCREF(cpy_r_r124);
CPyL70: ;
    cpy_r_r125 = CPyDef_types___has_type_vars(cpy_r_r124);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 511, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    if (cpy_r_r125) goto CPyL75;
    cpy_r_r126 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r126);
    cpy_r_r127 = CPyDef_semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj();
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 513, CPyStatic_semanal_namedtuple___globals);
        goto CPyL240;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)cpy_r_r127)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)cpy_r_r127)->___mypyc_env__);
    }
    ((mypy___semanal_namedtuple_____mypyc_lambda__0_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)cpy_r_r127)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r128 = 1;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 513, CPyStatic_semanal_namedtuple___globals);
        goto CPyL241;
    }
    cpy_r_r129 = CPY_GET_METHOD_TRAIT(cpy_r_r126, CPyType_semanal_shared___SemanticAnalyzerInterface, 7, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, CPyTagged, PyObject *))(cpy_r_r126, 2, cpy_r_r127); /* schedule_patch */
    CPy_DECREF(cpy_r_r127);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r129 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 512, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
CPyL75: ;
    cpy_r_r130 = CPyDef_semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj();
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 516, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)cpy_r_r130)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)cpy_r_r130)->___mypyc_env__);
    }
    ((mypy___semanal_namedtuple___add_field_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)cpy_r_r130)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r131 = 1;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 516, CPyStatic_semanal_namedtuple___globals);
        goto CPyL242;
    }
    if (((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_field != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_field);
    }
    ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_field = cpy_r_r130;
    cpy_r_r132 = 1;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 516, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    cpy_r_r133 = PyList_New(0);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 525, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    cpy_r_r134 = 0;
    cpy_r_r135 = 0;
CPyL80: ;
    cpy_r_r136 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r137 = *(int64_t *)cpy_r_r136;
    cpy_r_r138 = cpy_r_r137 << 1;
    cpy_r_r139 = (Py_ssize_t)cpy_r_r134 < (Py_ssize_t)cpy_r_r138;
    if (!cpy_r_r139) goto CPyL87;
    cpy_r_r140 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r141 = *(int64_t *)cpy_r_r140;
    cpy_r_r142 = cpy_r_r141 << 1;
    cpy_r_r143 = (Py_ssize_t)cpy_r_r135 < (Py_ssize_t)cpy_r_r142;
    if (!cpy_r_r143) goto CPyL87;
    cpy_r_r144 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r134);
    if (likely(PyUnicode_Check(cpy_r_r144)))
        cpy_r_r145 = cpy_r_r144;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 525, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_r144);
        goto CPyL243;
    }
    cpy_r_item_2 = cpy_r_r145;
    cpy_r_r146 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r135);
    if (likely(PyObject_TypeCheck(cpy_r_r146, CPyType_types___Type)))
        cpy_r_r147 = cpy_r_r146;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 525, CPyStatic_semanal_namedtuple___globals, "mypy.types.Type", cpy_r_r146);
        goto CPyL244;
    }
    cpy_r_typ = cpy_r_r147;
    cpy_r_r148 = CPyDef_nodes___Var(cpy_r_item_2, cpy_r_typ);
    CPy_DECREF(cpy_r_item_2);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 525, CPyStatic_semanal_namedtuple___globals);
        goto CPyL243;
    }
    cpy_r_r149 = PyList_Append(cpy_r_r133, cpy_r_r148);
    CPy_DECREF(cpy_r_r148);
    cpy_r_r150 = cpy_r_r149 >= 0;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 525, CPyStatic_semanal_namedtuple___globals);
        goto CPyL243;
    }
    cpy_r_r151 = cpy_r_r134 + 2;
    cpy_r_r134 = cpy_r_r151;
    cpy_r_r152 = cpy_r_r135 + 2;
    cpy_r_r135 = cpy_r_r152;
    goto CPyL80;
CPyL87: ;
    cpy_r_fields = cpy_r_r133;
    cpy_r_r153 = 0;
CPyL88: ;
    cpy_r_r154 = (CPyPtr)&((PyVarObject *)cpy_r_fields)->ob_size;
    cpy_r_r155 = *(int64_t *)cpy_r_r154;
    cpy_r_r156 = cpy_r_r155 << 1;
    cpy_r_r157 = (Py_ssize_t)cpy_r_r153 < (Py_ssize_t)cpy_r_r156;
    if (!cpy_r_r157) goto CPyL245;
    cpy_r_r158 = CPyList_GetItemUnsafe(cpy_r_fields, cpy_r_r153);
    if (likely(Py_TYPE(cpy_r_r158) == CPyType_nodes___Var))
        cpy_r_r159 = cpy_r_r158;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 526, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Var", cpy_r_r158);
        goto CPyL246;
    }
    cpy_r_var = cpy_r_r159;
    cpy_r_r160 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_field;
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "add_field", 527, CPyStatic_semanal_namedtuple___globals);
        goto CPyL247;
    }
    CPy_INCREF(cpy_r_r160);
CPyL91: ;
    cpy_r_r161 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r162[2] = {cpy_r_var, cpy_r_r161};
    cpy_r_r163 = (PyObject **)&cpy_r_r162;
    cpy_r_r164 = CPyStatics[9713]; /* ('is_property',) */
    cpy_r_r165 = _PyObject_Vectorcall(cpy_r_r160, cpy_r_r163, 1, cpy_r_r164);
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 527, CPyStatic_semanal_namedtuple___globals);
        goto CPyL247;
    } else
        goto CPyL248;
CPyL92: ;
    CPy_DECREF(cpy_r_var);
    cpy_r_r166 = cpy_r_r153 + 2;
    cpy_r_r153 = cpy_r_r166;
    goto CPyL88;
CPyL94: ;
    cpy_r_r167 = PyList_New(0);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 532, CPyStatic_semanal_namedtuple___globals);
        goto CPyL232;
    }
    cpy_r_r168 = 0;
    cpy_r_r169 = 0;
CPyL96: ;
    cpy_r_r170 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r171 = *(int64_t *)cpy_r_r170;
    cpy_r_r172 = cpy_r_r171 << 1;
    cpy_r_r173 = (Py_ssize_t)cpy_r_r168 < (Py_ssize_t)cpy_r_r172;
    if (!cpy_r_r173) goto CPyL103;
    cpy_r_r174 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r175 = *(int64_t *)cpy_r_r174;
    cpy_r_r176 = cpy_r_r175 << 1;
    cpy_r_r177 = (Py_ssize_t)cpy_r_r169 < (Py_ssize_t)cpy_r_r176;
    if (!cpy_r_r177) goto CPyL103;
    cpy_r_r178 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r168);
    if (likely(PyUnicode_Check(cpy_r_r178)))
        cpy_r_r179 = cpy_r_r178;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 532, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_r178);
        goto CPyL249;
    }
    cpy_r_item_3 = cpy_r_r179;
    cpy_r_r180 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r169);
    if (likely(PyObject_TypeCheck(cpy_r_r180, CPyType_types___Type)))
        cpy_r_r181 = cpy_r_r180;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 532, CPyStatic_semanal_namedtuple___globals, "mypy.types.Type", cpy_r_r180);
        goto CPyL250;
    }
    cpy_r_typ_2 = cpy_r_r181;
    cpy_r_r182 = CPyDef_nodes___Var(cpy_r_item_3, cpy_r_typ_2);
    CPy_DECREF(cpy_r_item_3);
    CPy_DECREF(cpy_r_typ_2);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 532, CPyStatic_semanal_namedtuple___globals);
        goto CPyL249;
    }
    cpy_r_r183 = PyList_Append(cpy_r_r167, cpy_r_r182);
    CPy_DECREF(cpy_r_r182);
    cpy_r_r184 = cpy_r_r183 >= 0;
    if (unlikely(!cpy_r_r184)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 532, CPyStatic_semanal_namedtuple___globals);
        goto CPyL249;
    }
    cpy_r_r185 = cpy_r_r168 + 2;
    cpy_r_r168 = cpy_r_r185;
    cpy_r_r186 = cpy_r_r169 + 2;
    cpy_r_r169 = cpy_r_r186;
    goto CPyL96;
CPyL103: ;
    cpy_r_vars = cpy_r_r167;
    cpy_r_r187 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r188 = *(int64_t *)cpy_r_r187;
    cpy_r_r189 = PyList_New(cpy_r_r188);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 534, CPyStatic_semanal_namedtuple___globals);
        goto CPyL251;
    }
    cpy_r_r190 = 0;
CPyL105: ;
    cpy_r_r191 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r192 = *(int64_t *)cpy_r_r191;
    cpy_r_r193 = cpy_r_r192 << 1;
    cpy_r_r194 = (Py_ssize_t)cpy_r_r190 < (Py_ssize_t)cpy_r_r193;
    if (!cpy_r_r194) goto CPyL109;
    cpy_r_r195 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r190);
    if (likely(PyUnicode_Check(cpy_r_r195)))
        cpy_r_r196 = cpy_r_r195;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 534, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_r195);
        goto CPyL252;
    }
    cpy_r__ = cpy_r_r196;
    CPy_DECREF(cpy_r__);
    CPy_INCREF(cpy_r_strtype);
    cpy_r_r197 = CPyList_SetItemUnsafe(cpy_r_r189, cpy_r_r190, cpy_r_strtype);
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 534, CPyStatic_semanal_namedtuple___globals);
        goto CPyL252;
    }
    cpy_r_r198 = cpy_r_r190 + 2;
    cpy_r_r190 = cpy_r_r198;
    goto CPyL105;
CPyL109: ;
    cpy_r_r199 = CPY_INT_TAG;
    cpy_r_r200 = CPY_INT_TAG;
    cpy_r_r201 = 2;
    cpy_r_r202 = CPyDef_types___TupleType(cpy_r_r189, cpy_r_basetuple_type, cpy_r_r199, cpy_r_r200, cpy_r_r201);
    CPy_DECREF(cpy_r_r189);
    CPy_DECREF(cpy_r_basetuple_type);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 534, CPyStatic_semanal_namedtuple___globals);
        goto CPyL253;
    }
    cpy_r_tuple_of_strings = cpy_r_r202;
    cpy_r_r203 = CPyStatics[5222]; /* '_fields' */
    cpy_r_r204 = CPyDef_nodes___Var(cpy_r_r203, cpy_r_tuple_of_strings);
    CPy_DECREF(cpy_r_tuple_of_strings);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 535, CPyStatic_semanal_namedtuple___globals);
        goto CPyL253;
    }
    cpy_r_r205 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_field;
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "add_field", 535, CPyStatic_semanal_namedtuple___globals);
        goto CPyL254;
    }
    CPy_INCREF(cpy_r_r205);
CPyL112: ;
    cpy_r_r206 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r207[2] = {cpy_r_r204, cpy_r_r206};
    cpy_r_r208 = (PyObject **)&cpy_r_r207;
    cpy_r_r209 = CPyStatics[9714]; /* ('is_initialized_in_class',) */
    cpy_r_r210 = _PyObject_Vectorcall(cpy_r_r205, cpy_r_r208, 1, cpy_r_r209);
    CPy_DECREF(cpy_r_r205);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 535, CPyStatic_semanal_namedtuple___globals);
        goto CPyL254;
    } else
        goto CPyL255;
CPyL113: ;
    CPy_DECREF(cpy_r_r204);
    cpy_r_r211 = CPyStatics[5223]; /* '_field_types' */
    cpy_r_r212 = CPyDef_nodes___Var(cpy_r_r211, cpy_r_dictype);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 536, CPyStatic_semanal_namedtuple___globals);
        goto CPyL253;
    }
    cpy_r_r213 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_field;
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "add_field", 536, CPyStatic_semanal_namedtuple___globals);
        goto CPyL256;
    }
    CPy_INCREF(cpy_r_r213);
CPyL115: ;
    cpy_r_r214 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r215[2] = {cpy_r_r212, cpy_r_r214};
    cpy_r_r216 = (PyObject **)&cpy_r_r215;
    cpy_r_r217 = CPyStatics[9714]; /* ('is_initialized_in_class',) */
    cpy_r_r218 = _PyObject_Vectorcall(cpy_r_r213, cpy_r_r216, 1, cpy_r_r217);
    CPy_DECREF(cpy_r_r213);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 536, CPyStatic_semanal_namedtuple___globals);
        goto CPyL256;
    } else
        goto CPyL257;
CPyL116: ;
    CPy_DECREF(cpy_r_r212);
    cpy_r_r219 = CPyStatics[5224]; /* '_field_defaults' */
    cpy_r_r220 = CPyDef_nodes___Var(cpy_r_r219, cpy_r_dictype);
    CPy_DECREF(cpy_r_dictype);
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 537, CPyStatic_semanal_namedtuple___globals);
        goto CPyL258;
    }
    cpy_r_r221 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_field;
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "add_field", 537, CPyStatic_semanal_namedtuple___globals);
        goto CPyL259;
    }
    CPy_INCREF(cpy_r_r221);
CPyL118: ;
    cpy_r_r222 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r223[2] = {cpy_r_r220, cpy_r_r222};
    cpy_r_r224 = (PyObject **)&cpy_r_r223;
    cpy_r_r225 = CPyStatics[9714]; /* ('is_initialized_in_class',) */
    cpy_r_r226 = _PyObject_Vectorcall(cpy_r_r221, cpy_r_r224, 1, cpy_r_r225);
    CPy_DECREF(cpy_r_r221);
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 537, CPyStatic_semanal_namedtuple___globals);
        goto CPyL259;
    } else
        goto CPyL260;
CPyL119: ;
    CPy_DECREF(cpy_r_r220);
    cpy_r_r227 = CPyStatics[5225]; /* '_source' */
    cpy_r_r228 = CPyDef_nodes___Var(cpy_r_r227, cpy_r_strtype);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 538, CPyStatic_semanal_namedtuple___globals);
        goto CPyL258;
    }
    cpy_r_r229 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_field;
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "add_field", 538, CPyStatic_semanal_namedtuple___globals);
        goto CPyL261;
    }
    CPy_INCREF(cpy_r_r229);
CPyL121: ;
    cpy_r_r230 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r231[2] = {cpy_r_r228, cpy_r_r230};
    cpy_r_r232 = (PyObject **)&cpy_r_r231;
    cpy_r_r233 = CPyStatics[9714]; /* ('is_initialized_in_class',) */
    cpy_r_r234 = _PyObject_Vectorcall(cpy_r_r229, cpy_r_r232, 1, cpy_r_r233);
    CPy_DECREF(cpy_r_r229);
    if (unlikely(cpy_r_r234 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 538, CPyStatic_semanal_namedtuple___globals);
        goto CPyL261;
    } else
        goto CPyL262;
CPyL122: ;
    CPy_DECREF(cpy_r_r228);
    cpy_r_r235 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r236 = CPyDef_nodes___Var(cpy_r_r235, cpy_r_ordereddictype);
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 539, CPyStatic_semanal_namedtuple___globals);
        goto CPyL258;
    }
    cpy_r_r237 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_field;
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "add_field", 539, CPyStatic_semanal_namedtuple___globals);
        goto CPyL263;
    }
    CPy_INCREF(cpy_r_r237);
CPyL124: ;
    cpy_r_r238 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r239[2] = {cpy_r_r236, cpy_r_r238};
    cpy_r_r240 = (PyObject **)&cpy_r_r239;
    cpy_r_r241 = CPyStatics[9714]; /* ('is_initialized_in_class',) */
    cpy_r_r242 = _PyObject_Vectorcall(cpy_r_r237, cpy_r_r240, 1, cpy_r_r241);
    CPy_DECREF(cpy_r_r237);
    if (unlikely(cpy_r_r242 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 539, CPyStatic_semanal_namedtuple___globals);
        goto CPyL263;
    } else
        goto CPyL264;
CPyL125: ;
    CPy_DECREF(cpy_r_r236);
    cpy_r_r243 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r244 = CPyDef_nodes___Var(cpy_r_r243, cpy_r_strtype);
    CPy_DECREF(cpy_r_strtype);
    if (unlikely(cpy_r_r244 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 540, CPyStatic_semanal_namedtuple___globals);
        goto CPyL265;
    }
    cpy_r_r245 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_field;
    if (unlikely(cpy_r_r245 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "add_field", 540, CPyStatic_semanal_namedtuple___globals);
        goto CPyL266;
    }
    CPy_INCREF(cpy_r_r245);
CPyL127: ;
    cpy_r_r246 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r247[2] = {cpy_r_r244, cpy_r_r246};
    cpy_r_r248 = (PyObject **)&cpy_r_r247;
    cpy_r_r249 = CPyStatics[9714]; /* ('is_initialized_in_class',) */
    cpy_r_r250 = _PyObject_Vectorcall(cpy_r_r245, cpy_r_r248, 1, cpy_r_r249);
    CPy_DECREF(cpy_r_r245);
    if (unlikely(cpy_r_r250 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 540, CPyStatic_semanal_namedtuple___globals);
        goto CPyL266;
    } else
        goto CPyL267;
CPyL128: ;
    CPy_DECREF(cpy_r_r244);
    cpy_r_r251 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_options;
    cpy_r_r252 = ((mypy___options___OptionsObject *)cpy_r_r251)->_python_version;
    CPyTagged_INCREF(cpy_r_r252.f0);
    CPyTagged_INCREF(cpy_r_r252.f1);
    cpy_r_r253.f0 = 6;
    cpy_r_r253.f1 = 20;
    CPyTagged_INCREF(cpy_r_r253.f0);
    CPyTagged_INCREF(cpy_r_r253.f1);
    cpy_r_r254 = PyTuple_New(2);
    if (unlikely(cpy_r_r254 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6079 = CPyTagged_StealAsObject(cpy_r_r252.f0);
    PyTuple_SET_ITEM(cpy_r_r254, 0, __tmp6079);
    PyObject *__tmp6080 = CPyTagged_StealAsObject(cpy_r_r252.f1);
    PyTuple_SET_ITEM(cpy_r_r254, 1, __tmp6080);
    cpy_r_r255 = PyTuple_New(2);
    if (unlikely(cpy_r_r255 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6081 = CPyTagged_StealAsObject(cpy_r_r253.f0);
    PyTuple_SET_ITEM(cpy_r_r255, 0, __tmp6081);
    PyObject *__tmp6082 = CPyTagged_StealAsObject(cpy_r_r253.f1);
    PyTuple_SET_ITEM(cpy_r_r255, 1, __tmp6082);
    cpy_r_r256 = PyObject_RichCompare(cpy_r_r254, cpy_r_r255, 5);
    CPy_DECREF(cpy_r_r254);
    CPy_DECREF(cpy_r_r255);
    if (unlikely(cpy_r_r256 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 541, CPyStatic_semanal_namedtuple___globals);
        goto CPyL265;
    }
    if (unlikely(!PyBool_Check(cpy_r_r256))) {
        CPy_TypeError("bool", cpy_r_r256); cpy_r_r257 = 2;
    } else
        cpy_r_r257 = cpy_r_r256 == Py_True;
    CPy_DECREF(cpy_r_r256);
    if (unlikely(cpy_r_r257 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 541, CPyStatic_semanal_namedtuple___globals);
        goto CPyL265;
    }
    if (!cpy_r_r257) goto CPyL268;
    cpy_r_r258 = CPyStatics[786]; /* '__match_args__' */
    cpy_r_r259 = CPyDef_nodes___Var(cpy_r_r258, cpy_r_match_args_type);
    CPy_DECREF(cpy_r_match_args_type);
    if (unlikely(cpy_r_r259 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 542, CPyStatic_semanal_namedtuple___globals);
        goto CPyL269;
    }
    cpy_r_r260 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_field;
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "add_field", 542, CPyStatic_semanal_namedtuple___globals);
        goto CPyL270;
    }
    CPy_INCREF(cpy_r_r260);
CPyL133: ;
    cpy_r_r261 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r262[2] = {cpy_r_r259, cpy_r_r261};
    cpy_r_r263 = (PyObject **)&cpy_r_r262;
    cpy_r_r264 = CPyStatics[9714]; /* ('is_initialized_in_class',) */
    cpy_r_r265 = _PyObject_Vectorcall(cpy_r_r260, cpy_r_r263, 1, cpy_r_r264);
    CPy_DECREF(cpy_r_r260);
    if (unlikely(cpy_r_r265 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 542, CPyStatic_semanal_namedtuple___globals);
        goto CPyL270;
    } else
        goto CPyL271;
CPyL134: ;
    CPy_DECREF(cpy_r_r259);
CPyL135: ;
    cpy_r_r266 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r266 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 544, CPyStatic_semanal_namedtuple___globals);
        goto CPyL269;
    }
    CPy_INCREF(cpy_r_r266);
CPyL136: ;
    cpy_r_r267 = ((mypy___nodes___TypeInfoObject *)cpy_r_r266)->_tuple_type;
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "TypeInfo", "tuple_type", 544, CPyStatic_semanal_namedtuple___globals);
        goto CPyL272;
    }
CPyL137: ;
    cpy_r_r268 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r269 = cpy_r_r267 != cpy_r_r268;
    CPy_DECREF(cpy_r_r266);
    if (cpy_r_r269) {
        goto CPyL140;
    } else
        goto CPyL273;
CPyL138: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r270 = 0;
    if (unlikely(!cpy_r_r270)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 544, CPyStatic_semanal_namedtuple___globals);
        goto CPyL215;
    }
    CPy_Unreachable();
CPyL140: ;
    cpy_r_r271 = CPyStatics[5226]; /* '_NT' */
    cpy_r_r272 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 547, CPyStatic_semanal_namedtuple___globals);
        goto CPyL269;
    }
    CPy_INCREF(cpy_r_r272);
CPyL141: ;
    cpy_r_r273 = CPY_GET_ATTR(cpy_r_r272, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r272);
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 547, CPyStatic_semanal_namedtuple___globals);
        goto CPyL269;
    }
CPyL142: ;
    cpy_r_r274 = CPyStatics[224]; /* '.' */
    cpy_r_r275 = PyUnicode_Concat(cpy_r_r273, cpy_r_r274);
    CPy_DECREF(cpy_r_r273);
    if (unlikely(cpy_r_r275 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 547, CPyStatic_semanal_namedtuple___globals);
        goto CPyL269;
    }
    cpy_r_r276 = CPyStatics[5226]; /* '_NT' */
    cpy_r_r277 = PyUnicode_Concat(cpy_r_r275, cpy_r_r276);
    CPy_DECREF(cpy_r_r275);
    if (unlikely(cpy_r_r277 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 547, CPyStatic_semanal_namedtuple___globals);
        goto CPyL269;
    }
    cpy_r_r278 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    __tmp6083 = CPy_FindAttrOffset(CPyType_semanal_shared___SemanticAnalyzerInterface, ((mypy___semanal_shared___SemanticAnalyzerInterfaceObject *)cpy_r_r278)->vtable, 0);
    cpy_r_r279 = *(PyObject * *)((char *)cpy_r_r278 + __tmp6083);
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "SemanticAnalyzerInterface", "tvar_scope", 548, CPyStatic_semanal_namedtuple___globals);
        goto CPyL274;
    }
    CPy_INCREF(cpy_r_r279);
CPyL145: ;
    cpy_r_r280 = CPyDef_tvar_scope___TypeVarLikeScope___new_unique_func_id(cpy_r_r279);
    CPy_DECREF(cpy_r_r279);
    if (unlikely(cpy_r_r280 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 548, CPyStatic_semanal_namedtuple___globals);
        goto CPyL274;
    }
    cpy_r_r281 = PyList_New(0);
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 549, CPyStatic_semanal_namedtuple___globals);
        goto CPyL275;
    }
    cpy_r_r282 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r282 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 550, CPyStatic_semanal_namedtuple___globals);
        goto CPyL276;
    }
    CPy_INCREF(cpy_r_r282);
CPyL148: ;
    cpy_r_r283 = ((mypy___nodes___TypeInfoObject *)cpy_r_r282)->_tuple_type;
    if (unlikely(cpy_r_r283 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'tuple_type' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r283);
    }
    CPy_DECREF(cpy_r_r282);
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 550, CPyStatic_semanal_namedtuple___globals);
        goto CPyL276;
    }
CPyL149: ;
    if (likely(cpy_r_r283 != Py_None))
        cpy_r_r284 = cpy_r_r283;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 550, CPyStatic_semanal_namedtuple___globals, "mypy.types.TupleType", cpy_r_r283);
        goto CPyL276;
    }
    cpy_r_r285 = NULL;
    cpy_r_r286 = NULL;
    cpy_r_r287 = CPY_INT_TAG;
    cpy_r_r288 = CPY_INT_TAG;
    cpy_r_r289 = CPyDef_types___AnyType(8, cpy_r_r285, cpy_r_r286, cpy_r_r287, cpy_r_r288);
    if (unlikely(cpy_r_r289 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 551, CPyStatic_semanal_namedtuple___globals);
        goto CPyL277;
    }
    cpy_r_r290 = CPyTagged_StealAsObject(cpy_r_r280);
    cpy_r_r291 = CPY_INT_TAG;
    cpy_r_r292 = CPY_INT_TAG;
    cpy_r_r293 = CPY_INT_TAG;
    cpy_r_r294 = CPyDef_types___TypeVarType(cpy_r_r271, cpy_r_r277, cpy_r_r290, cpy_r_r281, cpy_r_r284, cpy_r_r289, cpy_r_r291, cpy_r_r292, cpy_r_r293);
    CPy_DECREF(cpy_r_r277);
    CPy_DECREF(cpy_r_r290);
    CPy_DECREF(cpy_r_r281);
    CPy_DECREF(cpy_r_r284);
    CPy_DECREF(cpy_r_r289);
    if (unlikely(cpy_r_r294 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 545, CPyStatic_semanal_namedtuple___globals);
        goto CPyL269;
    }
    if (((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_tvd != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_tvd);
    }
    ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_tvd = cpy_r_r294;
    cpy_r_r295 = 1;
    if (unlikely(!cpy_r_r295)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 545, CPyStatic_semanal_namedtuple___globals);
        goto CPyL269;
    }
    cpy_r_r296 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_tvd;
    if (unlikely(cpy_r_r296 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "tvd", 553, CPyStatic_semanal_namedtuple___globals);
        goto CPyL269;
    }
    CPy_INCREF(cpy_r_r296);
CPyL154: ;
    if (((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_selftype != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_selftype);
    }
    ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_selftype = cpy_r_r296;
    cpy_r_r297 = 1;
    if (unlikely(!cpy_r_r297)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 553, CPyStatic_semanal_namedtuple___globals);
        goto CPyL269;
    }
    cpy_r_r298 = CPyDef_semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj();
    if (unlikely(cpy_r_r298 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 555, CPyStatic_semanal_namedtuple___globals);
        goto CPyL269;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)cpy_r_r298)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)cpy_r_r298)->___mypyc_env__);
    }
    ((mypy___semanal_namedtuple___add_method_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)cpy_r_r298)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r299 = 1;
    if (unlikely(!cpy_r_r299)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 555, CPyStatic_semanal_namedtuple___globals);
        goto CPyL278;
    }
    if (((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_method != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_method);
    }
    ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_method = cpy_r_r298;
    cpy_r_r300 = 1;
    if (unlikely(!cpy_r_r300)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 555, CPyStatic_semanal_namedtuple___globals);
        goto CPyL269;
    }
    cpy_r_r301 = CPyStatics[331]; /* '_replace' */
    cpy_r_r302 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_selftype;
    if (unlikely(cpy_r_r302 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "selftype", 596, CPyStatic_semanal_namedtuple___globals);
        goto CPyL269;
    }
    CPy_INCREF(cpy_r_r302);
CPyL159: ;
    cpy_r_r303 = (CPyPtr)&((PyVarObject *)cpy_r_vars)->ob_size;
    cpy_r_r304 = *(int64_t *)cpy_r_r303;
    cpy_r_r305 = PyList_New(cpy_r_r304);
    if (unlikely(cpy_r_r305 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 597, CPyStatic_semanal_namedtuple___globals);
        goto CPyL279;
    }
    cpy_r_r306 = 0;
CPyL161: ;
    cpy_r_r307 = (CPyPtr)&((PyVarObject *)cpy_r_vars)->ob_size;
    cpy_r_r308 = *(int64_t *)cpy_r_r307;
    cpy_r_r309 = cpy_r_r308 << 1;
    cpy_r_r310 = (Py_ssize_t)cpy_r_r306 < (Py_ssize_t)cpy_r_r309;
    if (!cpy_r_r310) goto CPyL170;
    cpy_r_r311 = CPyList_GetItemUnsafe(cpy_r_vars, cpy_r_r306);
    if (likely(Py_TYPE(cpy_r_r311) == CPyType_nodes___Var))
        cpy_r_r312 = cpy_r_r311;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 597, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Var", cpy_r_r311);
        goto CPyL280;
    }
    cpy_r_var_2 = cpy_r_r312;
    cpy_r_r313 = ((mypy___nodes___VarObject *)cpy_r_var_2)->_type;
    CPy_INCREF(cpy_r_r313);
    cpy_r_r314 = CPY_INT_TAG;
    cpy_r_r315 = CPY_INT_TAG;
    cpy_r_r316 = CPyDef_nodes___EllipsisExpr(cpy_r_r314, cpy_r_r315);
    if (unlikely(cpy_r_r316 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 597, CPyStatic_semanal_namedtuple___globals);
        goto CPyL281;
    }
    cpy_r_r317 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (unlikely(cpy_r_r317 == NULL)) {
        goto CPyL282;
    } else
        goto CPyL167;
CPyL165: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r318 = 0;
    if (unlikely(!cpy_r_r318)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 597, CPyStatic_semanal_namedtuple___globals);
        goto CPyL215;
    }
    CPy_Unreachable();
CPyL167: ;
    cpy_r_r319 = 2;
    cpy_r_r320 = CPyDef_nodes___Argument(cpy_r_var_2, cpy_r_r313, cpy_r_r316, cpy_r_r317, cpy_r_r319);
    CPy_DECREF(cpy_r_var_2);
    CPy_DECREF(cpy_r_r313);
    CPy_DECREF(cpy_r_r316);
    if (unlikely(cpy_r_r320 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 597, CPyStatic_semanal_namedtuple___globals);
        goto CPyL280;
    }
    cpy_r_r321 = CPyList_SetItemUnsafe(cpy_r_r305, cpy_r_r306, cpy_r_r320);
    if (unlikely(!cpy_r_r321)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 597, CPyStatic_semanal_namedtuple___globals);
        goto CPyL280;
    }
    cpy_r_r322 = cpy_r_r306 + 2;
    cpy_r_r306 = cpy_r_r322;
    goto CPyL161;
CPyL170: ;
    cpy_r_r323 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_method;
    if (unlikely(cpy_r_r323 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "add_method", 594, CPyStatic_semanal_namedtuple___globals);
        goto CPyL280;
    }
    CPy_INCREF(cpy_r_r323);
CPyL171: ;
    PyObject *cpy_r_r324[3] = {cpy_r_r301, cpy_r_r302, cpy_r_r305};
    cpy_r_r325 = (PyObject **)&cpy_r_r324;
    cpy_r_r326 = CPyStatics[9715]; /* ('ret', 'args') */
    cpy_r_r327 = _PyObject_Vectorcall(cpy_r_r323, cpy_r_r325, 1, cpy_r_r326);
    CPy_DECREF(cpy_r_r323);
    if (unlikely(cpy_r_r327 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 594, CPyStatic_semanal_namedtuple___globals);
        goto CPyL280;
    } else
        goto CPyL283;
CPyL172: ;
    CPy_DECREF(cpy_r_r302);
    CPy_DECREF(cpy_r_r305);
    cpy_r_r328 = CPyDef_semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_obj();
    if (unlikely(cpy_r_r328 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 600, CPyStatic_semanal_namedtuple___globals);
        goto CPyL269;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)cpy_r_r328)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)cpy_r_r328)->___mypyc_env__);
    }
    ((mypy___semanal_namedtuple___make_init_arg_build_namedtuple_typeinfo_NamedTupleAnalyzer_objObject *)cpy_r_r328)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r329 = 1;
    if (unlikely(!cpy_r_r329)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 600, CPyStatic_semanal_namedtuple___globals);
        goto CPyL284;
    }
    if (((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_make_init_arg != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_make_init_arg);
    }
    ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_make_init_arg = cpy_r_r328;
    cpy_r_r330 = 1;
    if (unlikely(!cpy_r_r330)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 600, CPyStatic_semanal_namedtuple___globals);
        goto CPyL269;
    }
    cpy_r_r331 = CPyStatics[721]; /* '__new__' */
    cpy_r_r332 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_selftype;
    if (unlikely(cpy_r_r332 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "selftype", 605, CPyStatic_semanal_namedtuple___globals);
        goto CPyL269;
    }
    CPy_INCREF(cpy_r_r332);
CPyL176: ;
    cpy_r_r333 = (CPyPtr)&((PyVarObject *)cpy_r_vars)->ob_size;
    cpy_r_r334 = *(int64_t *)cpy_r_r333;
    cpy_r_r335 = PyList_New(cpy_r_r334);
    if (unlikely(cpy_r_r335 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 605, CPyStatic_semanal_namedtuple___globals);
        goto CPyL285;
    }
    cpy_r_r336 = 0;
CPyL178: ;
    cpy_r_r337 = (CPyPtr)&((PyVarObject *)cpy_r_vars)->ob_size;
    cpy_r_r338 = *(int64_t *)cpy_r_r337;
    cpy_r_r339 = cpy_r_r338 << 1;
    cpy_r_r340 = (Py_ssize_t)cpy_r_r336 < (Py_ssize_t)cpy_r_r339;
    if (!cpy_r_r340) goto CPyL286;
    cpy_r_r341 = CPyList_GetItemUnsafe(cpy_r_vars, cpy_r_r336);
    if (likely(Py_TYPE(cpy_r_r341) == CPyType_nodes___Var))
        cpy_r_r342 = cpy_r_r341;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 605, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Var", cpy_r_r341);
        goto CPyL287;
    }
    cpy_r_var_3 = cpy_r_r342;
    cpy_r_r343 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_make_init_arg;
    if (unlikely(cpy_r_r343 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "make_init_arg", 605, CPyStatic_semanal_namedtuple___globals);
        goto CPyL288;
    }
    CPy_INCREF(cpy_r_r343);
CPyL181: ;
    PyObject *cpy_r_r344[1] = {cpy_r_var_3};
    cpy_r_r345 = (PyObject **)&cpy_r_r344;
    cpy_r_r346 = _PyObject_Vectorcall(cpy_r_r343, cpy_r_r345, 1, 0);
    CPy_DECREF(cpy_r_r343);
    if (unlikely(cpy_r_r346 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 605, CPyStatic_semanal_namedtuple___globals);
        goto CPyL288;
    }
    CPy_DECREF(cpy_r_var_3);
    if (likely(Py_TYPE(cpy_r_r346) == CPyType_nodes___Argument))
        cpy_r_r347 = cpy_r_r346;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 605, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.Argument", cpy_r_r346);
        goto CPyL287;
    }
    cpy_r_r348 = CPyList_SetItemUnsafe(cpy_r_r335, cpy_r_r336, cpy_r_r347);
    if (unlikely(!cpy_r_r348)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 605, CPyStatic_semanal_namedtuple___globals);
        goto CPyL287;
    }
    cpy_r_r349 = cpy_r_r336 + 2;
    cpy_r_r336 = cpy_r_r349;
    goto CPyL178;
CPyL185: ;
    cpy_r_r350 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_method;
    if (unlikely(cpy_r_r350 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "add_method", 605, CPyStatic_semanal_namedtuple___globals);
        goto CPyL289;
    }
    CPy_INCREF(cpy_r_r350);
CPyL186: ;
    cpy_r_r351 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r352[4] = {cpy_r_r331, cpy_r_r332, cpy_r_r335, cpy_r_r351};
    cpy_r_r353 = (PyObject **)&cpy_r_r352;
    cpy_r_r354 = CPyStatics[9716]; /* ('ret', 'args', 'is_new') */
    cpy_r_r355 = _PyObject_Vectorcall(cpy_r_r350, cpy_r_r353, 1, cpy_r_r354);
    CPy_DECREF(cpy_r_r350);
    if (unlikely(cpy_r_r355 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 605, CPyStatic_semanal_namedtuple___globals);
        goto CPyL289;
    } else
        goto CPyL290;
CPyL187: ;
    CPy_DECREF(cpy_r_r332);
    CPy_DECREF(cpy_r_r335);
    cpy_r_r356 = CPyStatics[430]; /* '_asdict' */
    cpy_r_r357 = PyList_New(0);
    if (unlikely(cpy_r_r357 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 606, CPyStatic_semanal_namedtuple___globals);
        goto CPyL291;
    }
    cpy_r_r358 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_method;
    if (unlikely(cpy_r_r358 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "add_method", 606, CPyStatic_semanal_namedtuple___globals);
        goto CPyL292;
    }
    CPy_INCREF(cpy_r_r358);
CPyL189: ;
    PyObject *cpy_r_r359[3] = {cpy_r_r356, cpy_r_r357, cpy_r_ordereddictype};
    cpy_r_r360 = (PyObject **)&cpy_r_r359;
    cpy_r_r361 = CPyStatics[9717]; /* ('args', 'ret') */
    cpy_r_r362 = _PyObject_Vectorcall(cpy_r_r358, cpy_r_r360, 1, cpy_r_r361);
    CPy_DECREF(cpy_r_r358);
    if (unlikely(cpy_r_r362 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 606, CPyStatic_semanal_namedtuple___globals);
        goto CPyL292;
    } else
        goto CPyL293;
CPyL190: ;
    CPy_DECREF(cpy_r_r357);
    CPy_DECREF(cpy_r_ordereddictype);
    cpy_r_r363 = CPyStatics[5229]; /* '_make' */
    cpy_r_r364 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_selftype;
    if (unlikely(cpy_r_r364 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "selftype", 609, CPyStatic_semanal_namedtuple___globals);
        goto CPyL294;
    }
    CPy_INCREF(cpy_r_r364);
CPyL191: ;
    cpy_r_r365 = CPyStatics[5230]; /* 'iterable' */
    cpy_r_r366 = CPyDef_nodes___Var(cpy_r_r365, cpy_r_iterable_type);
    if (unlikely(cpy_r_r366 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 611, CPyStatic_semanal_namedtuple___globals);
        goto CPyL295;
    }
    cpy_r_r367 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r367 == NULL)) {
        goto CPyL296;
    } else
        goto CPyL195;
CPyL193: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r368 = 0;
    if (unlikely(!cpy_r_r368)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 611, CPyStatic_semanal_namedtuple___globals);
        goto CPyL215;
    }
    CPy_Unreachable();
CPyL195: ;
    cpy_r_r369 = Py_None;
    cpy_r_r370 = 2;
    cpy_r_r371 = CPyDef_nodes___Argument(cpy_r_r366, cpy_r_iterable_type, cpy_r_r369, cpy_r_r367, cpy_r_r370);
    CPy_DECREF(cpy_r_r366);
    CPy_DECREF(cpy_r_iterable_type);
    if (unlikely(cpy_r_r371 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 611, CPyStatic_semanal_namedtuple___globals);
        goto CPyL297;
    }
    cpy_r_r372 = PyList_New(1);
    if (unlikely(cpy_r_r372 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 611, CPyStatic_semanal_namedtuple___globals);
        goto CPyL298;
    }
    cpy_r_r373 = (CPyPtr)&((PyListObject *)cpy_r_r372)->ob_item;
    cpy_r_r374 = *(CPyPtr *)cpy_r_r373;
    *(PyObject * *)cpy_r_r374 = cpy_r_r371;
    cpy_r_r375 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_add_method;
    if (unlikely(cpy_r_r375 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "add_method", 607, CPyStatic_semanal_namedtuple___globals);
        goto CPyL299;
    }
    CPy_INCREF(cpy_r_r375);
CPyL198: ;
    cpy_r_r376 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r377[4] = {cpy_r_r363, cpy_r_r364, cpy_r_r376, cpy_r_r372};
    cpy_r_r378 = (PyObject **)&cpy_r_r377;
    cpy_r_r379 = CPyStatics[9718]; /* ('ret', 'is_classmethod', 'args') */
    cpy_r_r380 = _PyObject_Vectorcall(cpy_r_r375, cpy_r_r378, 1, cpy_r_r379);
    CPy_DECREF(cpy_r_r375);
    if (unlikely(cpy_r_r380 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 607, CPyStatic_semanal_namedtuple___globals);
        goto CPyL299;
    } else
        goto CPyL300;
CPyL199: ;
    CPy_DECREF(cpy_r_r364);
    CPy_DECREF(cpy_r_r372);
    cpy_r_r381 = CPyStatics[5226]; /* '_NT' */
    cpy_r_r382 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r382 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 616, CPyStatic_semanal_namedtuple___globals);
        goto CPyL216;
    }
    CPy_INCREF(cpy_r_r382);
CPyL200: ;
    cpy_r_r383 = CPY_GET_ATTR(cpy_r_r382, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r382);
    if (unlikely(cpy_r_r383 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 616, CPyStatic_semanal_namedtuple___globals);
        goto CPyL216;
    }
CPyL201: ;
    cpy_r_r384 = CPyStatics[224]; /* '.' */
    cpy_r_r385 = PyUnicode_Concat(cpy_r_r383, cpy_r_r384);
    CPy_DECREF(cpy_r_r383);
    if (unlikely(cpy_r_r385 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 616, CPyStatic_semanal_namedtuple___globals);
        goto CPyL216;
    }
    cpy_r_r386 = CPyStatics[5226]; /* '_NT' */
    cpy_r_r387 = PyUnicode_Concat(cpy_r_r385, cpy_r_r386);
    CPy_DECREF(cpy_r_r385);
    if (unlikely(cpy_r_r387 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 616, CPyStatic_semanal_namedtuple___globals);
        goto CPyL216;
    }
    cpy_r_r388 = PyList_New(0);
    if (unlikely(cpy_r_r388 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 617, CPyStatic_semanal_namedtuple___globals);
        goto CPyL301;
    }
    cpy_r_r389 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r389 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 618, CPyStatic_semanal_namedtuple___globals);
        goto CPyL302;
    }
    CPy_INCREF(cpy_r_r389);
CPyL205: ;
    cpy_r_r390 = ((mypy___nodes___TypeInfoObject *)cpy_r_r389)->_tuple_type;
    if (unlikely(cpy_r_r390 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'tuple_type' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r390);
    }
    CPy_DECREF(cpy_r_r389);
    if (unlikely(cpy_r_r390 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 618, CPyStatic_semanal_namedtuple___globals);
        goto CPyL302;
    }
CPyL206: ;
    if (likely(cpy_r_r390 != Py_None))
        cpy_r_r391 = cpy_r_r390;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 618, CPyStatic_semanal_namedtuple___globals, "mypy.types.TupleType", cpy_r_r390);
        goto CPyL302;
    }
    cpy_r_r392 = NULL;
    cpy_r_r393 = NULL;
    cpy_r_r394 = CPY_INT_TAG;
    cpy_r_r395 = CPY_INT_TAG;
    cpy_r_r396 = CPyDef_types___AnyType(8, cpy_r_r392, cpy_r_r393, cpy_r_r394, cpy_r_r395);
    if (unlikely(cpy_r_r396 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 619, CPyStatic_semanal_namedtuple___globals);
        goto CPyL303;
    }
    cpy_r_r397 = CPY_INT_TAG;
    cpy_r_r398 = CPyDef_nodes___TypeVarExpr(cpy_r_r381, cpy_r_r387, cpy_r_r388, cpy_r_r391, cpy_r_r396, cpy_r_r397);
    CPy_DECREF(cpy_r_r387);
    CPy_DECREF(cpy_r_r388);
    CPy_DECREF(cpy_r_r391);
    CPy_DECREF(cpy_r_r396);
    if (unlikely(cpy_r_r398 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 614, CPyStatic_semanal_namedtuple___globals);
        goto CPyL216;
    }
    cpy_r_self_tvar_expr = cpy_r_r398;
    cpy_r_r399 = 2;
    cpy_r_r400 = 2;
    cpy_r_r401 = 2;
    cpy_r_r402 = 2;
    cpy_r_r403 = 2;
    cpy_r_r404 = CPyDef_nodes___SymbolTableNode(4, cpy_r_self_tvar_expr, cpy_r_r399, cpy_r_r400, cpy_r_r401, cpy_r_r402, cpy_r_r403);
    CPy_DECREF(cpy_r_self_tvar_expr);
    if (unlikely(cpy_r_r404 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 621, CPyStatic_semanal_namedtuple___globals);
        goto CPyL216;
    }
    cpy_r_r405 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r405 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", "build_namedtuple_typeinfo_NamedTupleAnalyzer_env", "info", 621, CPyStatic_semanal_namedtuple___globals);
        goto CPyL304;
    }
    CPy_INCREF(cpy_r_r405);
CPyL211: ;
    cpy_r_r406 = ((mypy___nodes___TypeInfoObject *)cpy_r_r405)->_names;
    if (unlikely(cpy_r_r406 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r406);
    }
    CPy_DECREF(cpy_r_r405);
    if (unlikely(cpy_r_r406 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 621, CPyStatic_semanal_namedtuple___globals);
        goto CPyL304;
    }
CPyL212: ;
    cpy_r_r407 = CPyStatics[5226]; /* '_NT' */
    cpy_r_r408 = CPyDict_SetItem(cpy_r_r406, cpy_r_r407, cpy_r_r404);
    CPy_DECREF(cpy_r_r406);
    CPy_DECREF(cpy_r_r404);
    cpy_r_r409 = cpy_r_r408 >= 0;
    if (unlikely(!cpy_r_r409)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 621, CPyStatic_semanal_namedtuple___globals);
        goto CPyL216;
    }
    cpy_r_r410 = ((mypy___semanal_namedtuple___build_namedtuple_typeinfo_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r410 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'info' of 'build_namedtuple_typeinfo_NamedTupleAnalyzer_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r410);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r410 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 622, CPyStatic_semanal_namedtuple___globals);
        goto CPyL215;
    }
CPyL214: ;
    return cpy_r_r410;
CPyL215: ;
    cpy_r_r411 = NULL;
    return cpy_r_r411;
CPyL216: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL215;
CPyL217: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    goto CPyL215;
CPyL218: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_implicit_any);
    CPy_DecRef(cpy_r_r12);
    goto CPyL215;
CPyL219: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_implicit_any);
    goto CPyL215;
CPyL220: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_implicit_any);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_r18);
    goto CPyL215;
CPyL221: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_implicit_any);
    CPy_DecRef(cpy_r_basetuple_type);
    goto CPyL215;
CPyL222: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_implicit_any);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_r25);
    goto CPyL215;
CPyL223: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_implicit_any);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    goto CPyL215;
CPyL224: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_implicit_any);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_r32);
    goto CPyL215;
CPyL225: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_implicit_any);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    goto CPyL215;
CPyL226: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_implicit_any);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_r38);
    goto CPyL215;
CPyL227: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_fallback);
    goto CPyL215;
CPyL228: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_iterable_type);
    goto CPyL215;
CPyL229: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_r51);
    goto CPyL215;
CPyL230: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    goto CPyL215;
CPyL231: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_r74);
    goto CPyL215;
CPyL232: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    goto CPyL215;
CPyL233: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_r89);
    goto CPyL215;
CPyL234: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_r94);
    goto CPyL215;
CPyL235: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r96);
    goto CPyL215;
CPyL236: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r96);
    CPy_DecRef(cpy_r_r97);
    goto CPyL215;
CPyL237: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_r104);
    goto CPyL215;
CPyL238: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPyTagged_DecRef(cpy_r_r107);
    goto CPyL215;
CPyL239: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_r116);
    goto CPyL215;
CPyL240: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_r126);
    goto CPyL215;
CPyL241: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r127);
    goto CPyL215;
CPyL242: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_r130);
    goto CPyL215;
CPyL243: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_r133);
    goto CPyL215;
CPyL244: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_item_2);
    goto CPyL215;
CPyL245: ;
    CPy_DECREF(cpy_r_fields);
    goto CPyL94;
CPyL246: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_fields);
    goto CPyL215;
CPyL247: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_var);
    goto CPyL215;
CPyL248: ;
    CPy_DECREF(cpy_r_r165);
    goto CPyL92;
CPyL249: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_r167);
    goto CPyL215;
CPyL250: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_r167);
    CPy_DecRef(cpy_r_item_3);
    goto CPyL215;
CPyL251: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_vars);
    goto CPyL215;
CPyL252: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_basetuple_type);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r189);
    goto CPyL215;
CPyL253: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_vars);
    goto CPyL215;
CPyL254: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r204);
    goto CPyL215;
CPyL255: ;
    CPy_DECREF(cpy_r_r210);
    goto CPyL113;
CPyL256: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_dictype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r212);
    goto CPyL215;
CPyL257: ;
    CPy_DECREF(cpy_r_r218);
    goto CPyL116;
CPyL258: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_vars);
    goto CPyL215;
CPyL259: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r220);
    goto CPyL215;
CPyL260: ;
    CPy_DECREF(cpy_r_r226);
    goto CPyL119;
CPyL261: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r228);
    goto CPyL215;
CPyL262: ;
    CPy_DECREF(cpy_r_r234);
    goto CPyL122;
CPyL263: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_strtype);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r236);
    goto CPyL215;
CPyL264: ;
    CPy_DECREF(cpy_r_r242);
    goto CPyL125;
CPyL265: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_vars);
    goto CPyL215;
CPyL266: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r244);
    goto CPyL215;
CPyL267: ;
    CPy_DECREF(cpy_r_r250);
    goto CPyL128;
CPyL268: ;
    CPy_DECREF(cpy_r_match_args_type);
    goto CPyL135;
CPyL269: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_vars);
    goto CPyL215;
CPyL270: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r259);
    goto CPyL215;
CPyL271: ;
    CPy_DECREF(cpy_r_r265);
    goto CPyL134;
CPyL272: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r266);
    goto CPyL215;
CPyL273: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_ordereddictype);
    CPy_DECREF(cpy_r_iterable_type);
    CPy_DECREF(cpy_r_vars);
    goto CPyL138;
CPyL274: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r277);
    goto CPyL215;
CPyL275: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r277);
    CPyTagged_DecRef(cpy_r_r280);
    goto CPyL215;
CPyL276: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r277);
    CPyTagged_DecRef(cpy_r_r280);
    CPy_DecRef(cpy_r_r281);
    goto CPyL215;
CPyL277: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r277);
    CPyTagged_DecRef(cpy_r_r280);
    CPy_DecRef(cpy_r_r281);
    CPy_DecRef(cpy_r_r284);
    goto CPyL215;
CPyL278: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r298);
    goto CPyL215;
CPyL279: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r302);
    goto CPyL215;
CPyL280: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r302);
    CPy_DecRef(cpy_r_r305);
    goto CPyL215;
CPyL281: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r302);
    CPy_DecRef(cpy_r_r305);
    CPy_DecRef(cpy_r_var_2);
    CPy_DecRef(cpy_r_r313);
    goto CPyL215;
CPyL282: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r302);
    CPy_DecRef(cpy_r_r305);
    CPy_DecRef(cpy_r_var_2);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r316);
    goto CPyL165;
CPyL283: ;
    CPy_DECREF(cpy_r_r327);
    goto CPyL172;
CPyL284: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r328);
    goto CPyL215;
CPyL285: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r332);
    goto CPyL215;
CPyL286: ;
    CPy_DECREF(cpy_r_vars);
    goto CPyL185;
CPyL287: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r332);
    CPy_DecRef(cpy_r_r335);
    goto CPyL215;
CPyL288: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r332);
    CPy_DecRef(cpy_r_r335);
    CPy_DecRef(cpy_r_var_3);
    goto CPyL215;
CPyL289: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_r332);
    CPy_DecRef(cpy_r_r335);
    goto CPyL215;
CPyL290: ;
    CPy_DECREF(cpy_r_r355);
    goto CPyL187;
CPyL291: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    goto CPyL215;
CPyL292: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ordereddictype);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_r357);
    goto CPyL215;
CPyL293: ;
    CPy_DECREF(cpy_r_r362);
    goto CPyL190;
CPyL294: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_iterable_type);
    goto CPyL215;
CPyL295: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_r364);
    goto CPyL215;
CPyL296: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_iterable_type);
    CPy_DecRef(cpy_r_r364);
    CPy_DecRef(cpy_r_r366);
    goto CPyL193;
CPyL297: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r364);
    goto CPyL215;
CPyL298: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r364);
    CPy_DecRef(cpy_r_r371);
    goto CPyL215;
CPyL299: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r364);
    CPy_DecRef(cpy_r_r372);
    goto CPyL215;
CPyL300: ;
    CPy_DECREF(cpy_r_r380);
    goto CPyL199;
CPyL301: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r387);
    goto CPyL215;
CPyL302: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r387);
    CPy_DecRef(cpy_r_r388);
    goto CPyL215;
CPyL303: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r387);
    CPy_DecRef(cpy_r_r388);
    CPy_DecRef(cpy_r_r391);
    goto CPyL215;
CPyL304: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r404);
    goto CPyL215;
}

PyObject *CPyPy_semanal_namedtuple___NamedTupleAnalyzer___build_namedtuple_typeinfo(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "items", "types", "default_items", "line", "existing_info", 0};
    static CPyArg_Parser parser = {"OOOOOO:build_namedtuple_typeinfo", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_items;
    PyObject *obj_types;
    PyObject *obj_default_items;
    PyObject *obj_line;
    PyObject *obj_existing_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_items, &obj_types, &obj_default_items, &obj_line, &obj_existing_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_namedtuple___NamedTupleAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_namedtuple.NamedTupleAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_items;
    if (likely(PyList_Check(obj_items)))
        arg_items = obj_items;
    else {
        CPy_TypeError("list", obj_items); 
        goto fail;
    }
    PyObject *arg_types;
    if (likely(PyList_Check(obj_types)))
        arg_types = obj_types;
    else {
        CPy_TypeError("list", obj_types); 
        goto fail;
    }
    PyObject *arg_default_items = obj_default_items;
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *arg_existing_info;
    if ((Py_TYPE(obj_existing_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_existing_info) == CPyType_nodes___TypeInfo))
        arg_existing_info = obj_existing_info;
    else {
        arg_existing_info = NULL;
    }
    if (arg_existing_info != NULL) goto __LL6084;
    if (obj_existing_info == Py_None)
        arg_existing_info = obj_existing_info;
    else {
        arg_existing_info = NULL;
    }
    if (arg_existing_info != NULL) goto __LL6084;
    CPy_TypeError("mypy.nodes.TypeInfo or None", obj_existing_info); 
    goto fail;
__LL6084: ;
    PyObject *retval = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___build_namedtuple_typeinfo(arg_self, arg_name, arg_items, arg_types, arg_default_items, arg_line, arg_existing_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "build_namedtuple_typeinfo", 472, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

PyObject *CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    tuple_T12OOOOOOOOOOOO cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    int64_t cpy_r_r66;
    CPyTagged cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyTagged cpy_r_r72;
    tuple_T4CIOO cpy_r_r73;
    CPyTagged cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    CPyPtr cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    CPyPtr cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    CPyPtr cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyPtr cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    int32_t cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    int32_t cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    CPyTagged cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    int64_t cpy_r_r149;
    char cpy_r_r150;
    char cpy_r_r151;
    char cpy_r_r152;
    char cpy_r_r153;
    int64_t cpy_r_r154;
    char cpy_r_r155;
    char cpy_r_r156;
    char cpy_r_r157;
    char cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    cpy_r_r0 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_gen", "__mypyc_env__", 625, CPyStatic_semanal_namedtuple___globals);
        goto CPyL135;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "__mypyc_next_label__", 625, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL125;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL137;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 625, CPyStatic_semanal_namedtuple___globals);
        goto CPyL135;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_named_tuple_info;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "named_tuple_info", 633, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___nodes___TypeInfoObject *)cpy_r_r4)->_names;
    if (unlikely(cpy_r_r5 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r5);
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 633, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
CPyL7: ;
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_nt_names != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_nt_names);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_nt_names = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 633, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    cpy_r_r7 = (PyObject *)CPyType_nodes___SymbolTable;
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r7, 0, 0, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 634, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    if (likely(PyDict_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 634, CPyStatic_semanal_namedtuple___globals, "dict", cpy_r_r8);
        goto CPyL136;
    }
    cpy_r_r10 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_named_tuple_info;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "named_tuple_info", 634, CPyStatic_semanal_namedtuple___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r10);
CPyL11: ;
    if (((mypy___nodes___TypeInfoObject *)cpy_r_r10)->_names != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_r10)->_names);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_r10)->_names = cpy_r_r9;
    cpy_r_r11 = 1;
    CPy_DECREF(cpy_r_r10);
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 634, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    cpy_r_r12 = Py_None;
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r13 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 636, CPyStatic_semanal_namedtuple___globals);
        goto CPyL135;
    }
    CPy_INCREF(cpy_r_r12);
    return cpy_r_r12;
CPyL14: ;
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_type != cpy_r_r14;
    if (cpy_r_r15) {
        goto CPyL139;
    } else
        goto CPyL17;
CPyL15: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 636, CPyStatic_semanal_namedtuple___globals);
        goto CPyL135;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r16 = CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES;
    if (unlikely(cpy_r_r16.f0 == NULL)) {
        goto CPyL140;
    } else
        goto CPyL20;
CPyL18: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"NAMEDTUPLE_PROHIBITED_NAMES\" was not set");
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 639, CPyStatic_semanal_namedtuple___globals);
        goto CPyL135;
    }
    CPy_Unreachable();
CPyL20: ;
    CPy_INCREF(cpy_r_r16.f0);
    CPy_INCREF(cpy_r_r16.f1);
    CPy_INCREF(cpy_r_r16.f2);
    CPy_INCREF(cpy_r_r16.f3);
    CPy_INCREF(cpy_r_r16.f4);
    CPy_INCREF(cpy_r_r16.f5);
    CPy_INCREF(cpy_r_r16.f6);
    CPy_INCREF(cpy_r_r16.f7);
    CPy_INCREF(cpy_r_r16.f8);
    CPy_INCREF(cpy_r_r16.f9);
    CPy_INCREF(cpy_r_r16.f10);
    CPy_INCREF(cpy_r_r16.f11);
    cpy_r_r18 = PyTuple_New(12);
    if (unlikely(cpy_r_r18 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6085 = cpy_r_r16.f0;
    PyTuple_SET_ITEM(cpy_r_r18, 0, __tmp6085);
    PyObject *__tmp6086 = cpy_r_r16.f1;
    PyTuple_SET_ITEM(cpy_r_r18, 1, __tmp6086);
    PyObject *__tmp6087 = cpy_r_r16.f2;
    PyTuple_SET_ITEM(cpy_r_r18, 2, __tmp6087);
    PyObject *__tmp6088 = cpy_r_r16.f3;
    PyTuple_SET_ITEM(cpy_r_r18, 3, __tmp6088);
    PyObject *__tmp6089 = cpy_r_r16.f4;
    PyTuple_SET_ITEM(cpy_r_r18, 4, __tmp6089);
    PyObject *__tmp6090 = cpy_r_r16.f5;
    PyTuple_SET_ITEM(cpy_r_r18, 5, __tmp6090);
    PyObject *__tmp6091 = cpy_r_r16.f6;
    PyTuple_SET_ITEM(cpy_r_r18, 6, __tmp6091);
    PyObject *__tmp6092 = cpy_r_r16.f7;
    PyTuple_SET_ITEM(cpy_r_r18, 7, __tmp6092);
    PyObject *__tmp6093 = cpy_r_r16.f8;
    PyTuple_SET_ITEM(cpy_r_r18, 8, __tmp6093);
    PyObject *__tmp6094 = cpy_r_r16.f9;
    PyTuple_SET_ITEM(cpy_r_r18, 9, __tmp6094);
    PyObject *__tmp6095 = cpy_r_r16.f10;
    PyTuple_SET_ITEM(cpy_r_r18, 10, __tmp6095);
    PyObject *__tmp6096 = cpy_r_r16.f11;
    PyTuple_SET_ITEM(cpy_r_r18, 11, __tmp6096);
    cpy_r_r19 = PyObject_GetIter(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 639, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r16.f0);
    CPy_INCREF(cpy_r_r16.f1);
    CPy_INCREF(cpy_r_r16.f2);
    CPy_INCREF(cpy_r_r16.f3);
    CPy_INCREF(cpy_r_r16.f4);
    CPy_INCREF(cpy_r_r16.f5);
    CPy_INCREF(cpy_r_r16.f6);
    CPy_INCREF(cpy_r_r16.f7);
    CPy_INCREF(cpy_r_r16.f8);
    CPy_INCREF(cpy_r_r16.f9);
    CPy_INCREF(cpy_r_r16.f10);
    CPy_INCREF(cpy_r_r16.f11);
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__0.f0 != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__0.f0);
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__0.f1);
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__0.f2);
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__0.f3);
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__0.f4);
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__0.f5);
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__0.f6);
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__0.f7);
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__0.f8);
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__0.f9);
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__0.f10);
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__0.f11);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__0 = cpy_r_r16;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", -1, CPyStatic_semanal_namedtuple___globals);
        goto CPyL141;
    }
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__1 != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__1);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__1 = cpy_r_r19;
    cpy_r_r21 = 1;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", -1, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
CPyL23: ;
    cpy_r_r22 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__1;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "__mypyc_temp__1", 639, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r22);
CPyL24: ;
    cpy_r_r23 = PyIter_Next(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (cpy_r_r23 == NULL) goto CPyL58;
    if (likely(PyUnicode_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 639, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_r23);
        goto CPyL136;
    }
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_prohibited != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_prohibited);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_prohibited = cpy_r_r24;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 639, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    cpy_r_r26 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_prohibited;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "prohibited", 640, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r26);
CPyL28: ;
    cpy_r_r27 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_named_tuple_info;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "named_tuple_info", 640, CPyStatic_semanal_namedtuple___globals);
        goto CPyL142;
    }
    CPy_INCREF(cpy_r_r27);
CPyL29: ;
    cpy_r_r28 = ((mypy___nodes___TypeInfoObject *)cpy_r_r27)->_names;
    if (unlikely(cpy_r_r28 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r28);
    }
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 640, CPyStatic_semanal_namedtuple___globals);
        goto CPyL142;
    }
CPyL30: ;
    cpy_r_r29 = PyDict_Contains(cpy_r_r28, cpy_r_r26);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 640, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    cpy_r_r31 = cpy_r_r29;
    if (!cpy_r_r31) goto CPyL23;
    cpy_r_r32 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_nt_names;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "nt_names", 641, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r32);
CPyL33: ;
    cpy_r_r33 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_prohibited;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "prohibited", 641, CPyStatic_semanal_namedtuple___globals);
        goto CPyL143;
    }
    CPy_INCREF(cpy_r_r33);
CPyL34: ;
    cpy_r_r34 = CPyDict_GetWithNone(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 641, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    if (Py_TYPE(cpy_r_r34) == CPyType_nodes___SymbolTableNode)
        cpy_r_r35 = cpy_r_r34;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL6097;
    if (cpy_r_r34 == Py_None)
        cpy_r_r35 = cpy_r_r34;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL6097;
    CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 641, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r34);
    goto CPyL136;
__LL6097: ;
    cpy_r_r36 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_named_tuple_info;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "named_tuple_info", 641, CPyStatic_semanal_namedtuple___globals);
        goto CPyL144;
    }
    CPy_INCREF(cpy_r_r36);
CPyL37: ;
    cpy_r_r37 = ((mypy___nodes___TypeInfoObject *)cpy_r_r36)->_names;
    if (unlikely(cpy_r_r37 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r37);
    }
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 641, CPyStatic_semanal_namedtuple___globals);
        goto CPyL144;
    }
CPyL38: ;
    cpy_r_r38 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_prohibited;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "prohibited", 641, CPyStatic_semanal_namedtuple___globals);
        goto CPyL145;
    }
    CPy_INCREF(cpy_r_r38);
CPyL39: ;
    cpy_r_r39 = CPyDict_GetItem(cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 641, CPyStatic_semanal_namedtuple___globals);
        goto CPyL144;
    }
    if (likely(Py_TYPE(cpy_r_r39) == CPyType_nodes___SymbolTableNode))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 641, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.SymbolTableNode", cpy_r_r39);
        goto CPyL144;
    }
    cpy_r_r41 = cpy_r_r35 == cpy_r_r40;
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r40);
    if (cpy_r_r41) goto CPyL23;
    cpy_r_r42 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_named_tuple_info;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "named_tuple_info", 643, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r42);
CPyL43: ;
    cpy_r_r43 = ((mypy___nodes___TypeInfoObject *)cpy_r_r42)->_names;
    if (unlikely(cpy_r_r43 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r43);
    }
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 643, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
CPyL44: ;
    cpy_r_r44 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_prohibited;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "prohibited", 643, CPyStatic_semanal_namedtuple___globals);
        goto CPyL146;
    }
    CPy_INCREF(cpy_r_r44);
CPyL45: ;
    cpy_r_r45 = CPyDict_GetItem(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 643, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    if (likely(Py_TYPE(cpy_r_r45) == CPyType_nodes___SymbolTableNode))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 643, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.SymbolTableNode", cpy_r_r45);
        goto CPyL136;
    }
    cpy_r_r47 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r46)->_node;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_ctx != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_ctx);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_ctx = cpy_r_r47;
    cpy_r_r48 = 1;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 643, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    cpy_r_r49 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_ctx;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "ctx", 644, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r49);
CPyL49: ;
    cpy_r_r50 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r51 = cpy_r_r49 != cpy_r_r50;
    CPy_DECREF(cpy_r_r49);
    if (cpy_r_r51) {
        goto CPyL52;
    } else
        goto CPyL147;
CPyL50: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r52 = 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 644, CPyStatic_semanal_namedtuple___globals);
        goto CPyL135;
    }
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r53 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "self", 645, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r53);
CPyL53: ;
    cpy_r_r54 = CPyStatics[5231]; /* 'Cannot overwrite NamedTuple attribute "' */
    cpy_r_r55 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_prohibited;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "prohibited", 645, CPyStatic_semanal_namedtuple___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r55);
CPyL54: ;
    cpy_r_r56 = CPyStatics[178]; /* '"' */
    cpy_r_r57 = CPyStr_Build(3, cpy_r_r54, cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 645, CPyStatic_semanal_namedtuple___globals);
        goto CPyL148;
    }
    cpy_r_r58 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_ctx;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "ctx", 645, CPyStatic_semanal_namedtuple___globals);
        goto CPyL149;
    }
    CPy_INCREF(cpy_r_r58);
CPyL56: ;
    if (likely(cpy_r_r58 != Py_None))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 645, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.SymbolNode", cpy_r_r58);
        goto CPyL149;
    }
    cpy_r_r60 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(cpy_r_r53, cpy_r_r57, cpy_r_r59);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 645, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    } else
        goto CPyL23;
CPyL58: ;
    cpy_r_r61 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 639, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    cpy_r_r62 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_nt_names;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "nt_names", 650, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r62);
CPyL60: ;
    CPy_INCREF(cpy_r_r62);
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__2);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__2 = cpy_r_r62;
    cpy_r_r63 = 1;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", -1, CPyStatic_semanal_namedtuple___globals);
        goto CPyL150;
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__3 = 0;
    cpy_r_r64 = 1;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", -1, CPyStatic_semanal_namedtuple___globals);
        goto CPyL150;
    }
    cpy_r_r65 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__2;
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "__mypyc_temp__2", 650, CPyStatic_semanal_namedtuple___globals);
        goto CPyL150;
    }
    CPy_INCREF(cpy_r_r65);
CPyL63: ;
    cpy_r_r66 = PyDict_Size(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 << 1;
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__4 = cpy_r_r67;
    cpy_r_r68 = 1;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", -1, CPyStatic_semanal_namedtuple___globals);
        goto CPyL150;
    }
    cpy_r_r69 = CPyDict_GetItemsIter(cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 650, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__5 != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__5);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__5 = cpy_r_r69;
    cpy_r_r70 = 1;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", -1, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
CPyL66: ;
    cpy_r_r71 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__5;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "__mypyc_temp__5", 650, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r71);
CPyL67: ;
    cpy_r_r72 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__3;
    if (unlikely(cpy_r_r72 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "__mypyc_temp__3", 650, CPyStatic_semanal_namedtuple___globals);
        goto CPyL151;
    }
CPyL68: ;
    cpy_r_r73 = CPyDict_NextItem(cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r74 = cpy_r_r73.f1;
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__3 = cpy_r_r74;
    cpy_r_r75 = 1;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 650, CPyStatic_semanal_namedtuple___globals);
        goto CPyL152;
    }
    cpy_r_r76 = cpy_r_r73.f0;
    if (!cpy_r_r76) goto CPyL153;
    cpy_r_r77 = cpy_r_r73.f2;
    CPy_INCREF(cpy_r_r77);
    cpy_r_r78 = cpy_r_r73.f3;
    CPy_INCREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r73.f2);
    CPy_DECREF(cpy_r_r73.f3);
    if (likely(PyUnicode_Check(cpy_r_r77)))
        cpy_r_r79 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 650, CPyStatic_semanal_namedtuple___globals, "str", cpy_r_r77);
        goto CPyL154;
    }
    if (likely(Py_TYPE(cpy_r_r78) == CPyType_nodes___SymbolTableNode))
        cpy_r_r80 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 650, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.SymbolTableNode", cpy_r_r78);
        goto CPyL155;
    }
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_key != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_key);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_key = cpy_r_r79;
    cpy_r_r81 = 1;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 650, CPyStatic_semanal_namedtuple___globals);
        goto CPyL156;
    }
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_value != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_value);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_value = cpy_r_r80;
    cpy_r_r82 = 1;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 650, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    cpy_r_r83 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_key;
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "key", 651, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r83);
CPyL75: ;
    cpy_r_r84 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_named_tuple_info;
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "named_tuple_info", 651, CPyStatic_semanal_namedtuple___globals);
        goto CPyL157;
    }
    CPy_INCREF(cpy_r_r84);
CPyL76: ;
    cpy_r_r85 = ((mypy___nodes___TypeInfoObject *)cpy_r_r84)->_names;
    if (unlikely(cpy_r_r85 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r85);
    }
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 651, CPyStatic_semanal_namedtuple___globals);
        goto CPyL157;
    }
CPyL77: ;
    cpy_r_r86 = PyDict_Contains(cpy_r_r85, cpy_r_r83);
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 651, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    cpy_r_r88 = cpy_r_r86;
    if (!cpy_r_r88) goto CPyL113;
    cpy_r_r89 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_key;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "key", 652, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r89);
CPyL80: ;
    cpy_r_r90 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r91 = PyUnicode_Compare(cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r92 = cpy_r_r91 == -1;
    if (!cpy_r_r92) goto CPyL83;
    cpy_r_r93 = PyErr_Occurred();
    cpy_r_r94 = cpy_r_r93 != NULL;
    if (!cpy_r_r94) goto CPyL83;
    cpy_r_r95 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 652, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
CPyL83: ;
    cpy_r_r96 = cpy_r_r91 == 0;
    if (cpy_r_r96) goto CPyL118;
    cpy_r_r97 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_named_tuple_info;
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "named_tuple_info", 654, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r97);
CPyL85: ;
    cpy_r_r98 = ((mypy___nodes___TypeInfoObject *)cpy_r_r97)->_names;
    if (unlikely(cpy_r_r98 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r98);
    }
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 654, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
CPyL86: ;
    cpy_r_r99 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_key;
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "key", 654, CPyStatic_semanal_namedtuple___globals);
        goto CPyL158;
    }
    CPy_INCREF(cpy_r_r99);
CPyL87: ;
    cpy_r_r100 = CPyDict_GetItem(cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_r98);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 654, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    if (likely(Py_TYPE(cpy_r_r100) == CPyType_nodes___SymbolTableNode))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 654, CPyStatic_semanal_namedtuple___globals, "mypy.nodes.SymbolTableNode", cpy_r_r100);
        goto CPyL136;
    }
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_sym != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_sym);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_sym = cpy_r_r101;
    cpy_r_r102 = 1;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 654, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    cpy_r_r103 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_sym;
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "sym", 655, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r103);
CPyL91: ;
    cpy_r_r104 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r103)->_node;
    cpy_r_r105 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r106 = (CPyPtr)&((PyObject *)cpy_r_r104)->ob_type;
    cpy_r_r107 = *(PyObject * *)cpy_r_r106;
    cpy_r_r108 = cpy_r_r107 == cpy_r_r105;
    if (!cpy_r_r108) goto CPyL93;
    cpy_r_r109 = cpy_r_r108;
    goto CPyL94;
CPyL93: ;
    cpy_r_r110 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r111 = (CPyPtr)&((PyObject *)cpy_r_r104)->ob_type;
    cpy_r_r112 = *(PyObject * *)cpy_r_r111;
    cpy_r_r113 = cpy_r_r112 == cpy_r_r110;
    cpy_r_r109 = cpy_r_r113;
CPyL94: ;
    if (!cpy_r_r109) goto CPyL96;
    cpy_r_r114 = cpy_r_r109;
    goto CPyL97;
CPyL96: ;
    cpy_r_r115 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r116 = (CPyPtr)&((PyObject *)cpy_r_r104)->ob_type;
    cpy_r_r117 = *(PyObject * *)cpy_r_r116;
    cpy_r_r118 = cpy_r_r117 == cpy_r_r115;
    cpy_r_r114 = cpy_r_r118;
CPyL97: ;
    if (!cpy_r_r114) goto CPyL99;
    cpy_r_r119 = cpy_r_r114;
    goto CPyL100;
CPyL99: ;
    cpy_r_r120 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r121 = (CPyPtr)&((PyObject *)cpy_r_r104)->ob_type;
    cpy_r_r122 = *(PyObject * *)cpy_r_r121;
    cpy_r_r123 = cpy_r_r122 == cpy_r_r120;
    cpy_r_r119 = cpy_r_r123;
CPyL100: ;
    CPy_DECREF(cpy_r_r103);
    if (!cpy_r_r119) goto CPyL103;
    cpy_r_r124 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_sym;
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "sym", 655, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r124);
CPyL102: ;
    cpy_r_r125 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r124)->_plugin_generated;
    CPy_DECREF(cpy_r_r124);
    if (!cpy_r_r125) goto CPyL118;
CPyL103: ;
    cpy_r_r126 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_key;
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "key", 660, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r126);
CPyL104: ;
    cpy_r_r127 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_named_tuple_info;
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "named_tuple_info", 660, CPyStatic_semanal_namedtuple___globals);
        goto CPyL159;
    }
    CPy_INCREF(cpy_r_r127);
CPyL105: ;
    cpy_r_r128 = ((mypy___nodes___TypeInfoObject *)cpy_r_r127)->_names;
    if (unlikely(cpy_r_r128 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r128);
    }
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 660, CPyStatic_semanal_namedtuple___globals);
        goto CPyL159;
    }
CPyL106: ;
    cpy_r_r129 = CPyDef_mypy___util___get_unique_redefinition_name(cpy_r_r126, cpy_r_r128);
    CPy_DECREF(cpy_r_r126);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 660, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_r_key != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_r_key);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_r_key = cpy_r_r129;
    cpy_r_r130 = 1;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 660, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    cpy_r_r131 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_sym;
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "sym", 661, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r131);
CPyL109: ;
    cpy_r_r132 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_named_tuple_info;
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "named_tuple_info", 661, CPyStatic_semanal_namedtuple___globals);
        goto CPyL160;
    }
    CPy_INCREF(cpy_r_r132);
CPyL110: ;
    cpy_r_r133 = ((mypy___nodes___TypeInfoObject *)cpy_r_r132)->_names;
    if (unlikely(cpy_r_r133 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r133);
    }
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 661, CPyStatic_semanal_namedtuple___globals);
        goto CPyL160;
    }
CPyL111: ;
    cpy_r_r134 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_r_key;
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "r_key", 661, CPyStatic_semanal_namedtuple___globals);
        goto CPyL161;
    }
    CPy_INCREF(cpy_r_r134);
CPyL112: ;
    cpy_r_r135 = CPyDict_SetItem(cpy_r_r133, cpy_r_r134, cpy_r_r131);
    CPy_DECREF(cpy_r_r133);
    CPy_DECREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r131);
    cpy_r_r136 = cpy_r_r135 >= 0;
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 661, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
CPyL113: ;
    cpy_r_r137 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_value;
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "value", 662, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r137);
CPyL114: ;
    cpy_r_r138 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_named_tuple_info;
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "named_tuple_info", 662, CPyStatic_semanal_namedtuple___globals);
        goto CPyL162;
    }
    CPy_INCREF(cpy_r_r138);
CPyL115: ;
    cpy_r_r139 = ((mypy___nodes___TypeInfoObject *)cpy_r_r138)->_names;
    if (unlikely(cpy_r_r139 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r139);
    }
    CPy_DECREF(cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 662, CPyStatic_semanal_namedtuple___globals);
        goto CPyL162;
    }
CPyL116: ;
    cpy_r_r140 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_key;
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "key", 662, CPyStatic_semanal_namedtuple___globals);
        goto CPyL163;
    }
    CPy_INCREF(cpy_r_r140);
CPyL117: ;
    cpy_r_r141 = CPyDict_SetItem(cpy_r_r139, cpy_r_r140, cpy_r_r137);
    CPy_DECREF(cpy_r_r139);
    CPy_DECREF(cpy_r_r140);
    CPy_DECREF(cpy_r_r137);
    cpy_r_r142 = cpy_r_r141 >= 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 662, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
CPyL118: ;
    cpy_r_r143 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__2;
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "__mypyc_temp__2", 650, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r143);
CPyL119: ;
    cpy_r_r144 = ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_temp__4;
    if (unlikely(cpy_r_r144 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/semanal_namedtuple.py", "save_namedtuple_body", "save_namedtuple_body_NamedTupleAnalyzer_env", "__mypyc_temp__4", 650, CPyStatic_semanal_namedtuple___globals);
        goto CPyL164;
    }
CPyL120: ;
    cpy_r_r145 = CPyDict_CheckSize(cpy_r_r143, cpy_r_r144);
    CPy_DECREF(cpy_r_r143);
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 650, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    } else
        goto CPyL66;
CPyL121: ;
    cpy_r_r146 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 650, CPyStatic_semanal_namedtuple___globals);
        goto CPyL136;
    }
    cpy_r_r147 = Py_None;
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r148 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 625, CPyStatic_semanal_namedtuple___globals);
        goto CPyL135;
    }
    CPyGen_SetStopIterationValue(cpy_r_r147);
    if (!0) goto CPyL135;
    CPy_Unreachable();
CPyL125: ;
    cpy_r_r149 = cpy_r_r1 & 1;
    cpy_r_r150 = cpy_r_r149 == 0;
    if (!cpy_r_r150) goto CPyL127;
    cpy_r_r151 = cpy_r_r1 == 0;
    cpy_r_r152 = cpy_r_r151;
    goto CPyL128;
CPyL127: ;
    cpy_r_r153 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r152 = cpy_r_r153;
CPyL128: ;
    if (cpy_r_r152) goto CPyL165;
    cpy_r_r154 = cpy_r_r1 & 1;
    cpy_r_r155 = cpy_r_r154 == 0;
    if (!cpy_r_r155) goto CPyL131;
    cpy_r_r156 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r157 = cpy_r_r156;
    goto CPyL132;
CPyL131: ;
    cpy_r_r158 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r157 = cpy_r_r158;
CPyL132: ;
    if (cpy_r_r157) {
        goto CPyL14;
    } else
        goto CPyL166;
CPyL133: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r159 = 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 625, CPyStatic_semanal_namedtuple___globals);
        goto CPyL135;
    }
    CPy_Unreachable();
CPyL135: ;
    cpy_r_r160 = NULL;
    return cpy_r_r160;
CPyL136: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL135;
CPyL137: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL138: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    goto CPyL135;
CPyL139: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL15;
CPyL140: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL18;
CPyL141: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r19);
    goto CPyL135;
CPyL142: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r26);
    goto CPyL135;
CPyL143: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r32);
    goto CPyL135;
CPyL144: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r35);
    goto CPyL135;
CPyL145: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r37);
    goto CPyL135;
CPyL146: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r43);
    goto CPyL135;
CPyL147: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL50;
CPyL148: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r53);
    goto CPyL135;
CPyL149: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r57);
    goto CPyL135;
CPyL150: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r62);
    goto CPyL135;
CPyL151: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r71);
    goto CPyL135;
CPyL152: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r73.f2);
    CPy_DecRef(cpy_r_r73.f3);
    goto CPyL135;
CPyL153: ;
    CPy_DECREF(cpy_r_r73.f2);
    CPy_DECREF(cpy_r_r73.f3);
    goto CPyL121;
CPyL154: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r78);
    goto CPyL135;
CPyL155: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r79);
    goto CPyL135;
CPyL156: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r80);
    goto CPyL135;
CPyL157: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r83);
    goto CPyL135;
CPyL158: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r98);
    goto CPyL135;
CPyL159: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r126);
    goto CPyL135;
CPyL160: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r131);
    goto CPyL135;
CPyL161: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    goto CPyL135;
CPyL162: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r137);
    goto CPyL135;
CPyL163: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r139);
    goto CPyL135;
CPyL164: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r143);
    goto CPyL135;
CPyL165: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL166: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL133;
}

PyObject *CPyPy_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 625, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

PyObject *CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.semanal_namedtuple.save_namedtuple_body_NamedTupleAnalyzer_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "__next__", -1, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

PyObject *CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.semanal_namedtuple.save_namedtuple_body_NamedTupleAnalyzer_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "send", -1, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

PyObject *CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.semanal_namedtuple.save_namedtuple_body_NamedTupleAnalyzer_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "__iter__", -1, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

PyObject *CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.semanal_namedtuple.save_namedtuple_body_NamedTupleAnalyzer_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "throw", -1, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

PyObject *CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp6098 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp6098);
    PyObject *__tmp6099 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp6099);
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

PyObject *CPyPy_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.semanal_namedtuple.save_namedtuple_body_NamedTupleAnalyzer_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "close", -1, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

PyObject *CPyDef_semanal_namedtuple___NamedTupleAnalyzer___save_namedtuple_body(PyObject *cpy_r_self, PyObject *cpy_r_named_tuple_info) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 625, CPyStatic_semanal_namedtuple___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 625, CPyStatic_semanal_namedtuple___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_named_tuple_info);
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_named_tuple_info != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_named_tuple_info);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->_named_tuple_info = cpy_r_named_tuple_info;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 625, CPyStatic_semanal_namedtuple___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 625, CPyStatic_semanal_namedtuple___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_genObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_genObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_genObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 625, CPyStatic_semanal_namedtuple___globals);
        goto CPyL9;
    }
    if (((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___semanal_namedtuple___save_namedtuple_body_NamedTupleAnalyzer_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 625, CPyStatic_semanal_namedtuple___globals);
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

PyObject *CPyPy_semanal_namedtuple___NamedTupleAnalyzer___save_namedtuple_body(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"named_tuple_info", 0};
    static CPyArg_Parser parser = {"O:save_namedtuple_body", kwlist, 0};
    PyObject *obj_named_tuple_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_named_tuple_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_namedtuple___NamedTupleAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_namedtuple.NamedTupleAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_named_tuple_info;
    if (likely((Py_TYPE(obj_named_tuple_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_named_tuple_info) == CPyType_nodes___TypeInfo)))
        arg_named_tuple_info = obj_named_tuple_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_named_tuple_info); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___save_namedtuple_body(arg_self, arg_named_tuple_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "save_namedtuple_body", 625, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

char CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(PyObject *cpy_r_self, PyObject *cpy_r_msg, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypy___semanal_namedtuple___NamedTupleAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 2;
    cpy_r_r2 = 2;
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_semanal_shared___SemanticAnalyzerInterface, 19, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r0, cpy_r_msg, cpy_r_ctx, cpy_r_r1, cpy_r_r2, cpy_r_r3); /* fail */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "fail", 667, CPyStatic_semanal_namedtuple___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_semanal_namedtuple___NamedTupleAnalyzer___fail(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "ctx", 0};
    static CPyArg_Parser parser = {"OO:fail", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_msg, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_namedtuple___NamedTupleAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_namedtuple.NamedTupleAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    char retval = CPyDef_semanal_namedtuple___NamedTupleAnalyzer___fail(arg_self, arg_msg, arg_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_namedtuple.py", "fail", 666, CPyStatic_semanal_namedtuple___globals);
    return NULL;
}

char CPyDef_semanal_namedtuple_____top_level__(void) {
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
    tuple_T12OOOOOOOOOOOO cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject **cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", -1, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_semanal_namedtuple___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 6, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9084]; /* ('contextmanager',) */
    cpy_r_r10 = CPyStatics[78]; /* 'contextlib' */
    cpy_r_r11 = CPyStatic_semanal_namedtuple___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 8, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    CPyModule_contextlib = cpy_r_r12;
    CPy_INCREF(CPyModule_contextlib);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9719]; /* ('Final', 'Iterator', 'List', 'Mapping', 'cast') */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_semanal_namedtuple___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 9, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9586]; /* ('TypeTranslationError', 'expr_to_unanalyzed_type') */
    cpy_r_r18 = CPyStatics[2338]; /* 'mypy.exprtotype' */
    cpy_r_r19 = CPyStatic_semanal_namedtuple___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 11, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    CPyModule_mypy___exprtotype = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___exprtotype);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9720]; /* ('ARG_NAMED_OPT', 'ARG_OPT', 'ARG_POS', 'MDEF',
                                     'Argument', 'AssignmentStmt', 'Block', 'CallExpr',
                                     'ClassDef', 'Context', 'Decorator', 'EllipsisExpr',
                                     'Expression', 'ExpressionStmt', 'FuncBase', 'FuncDef',
                                     'ListExpr', 'NamedTupleExpr', 'NameExpr', 'PassStmt',
                                     'RefExpr', 'Statement', 'StrExpr', 'SymbolTable',
                                     'SymbolTableNode', 'TempNode', 'TupleExpr', 'TypeInfo',
                                     'TypeVarExpr', 'Var', 'is_StrExpr_list') */
    cpy_r_r22 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r23 = CPyStatic_semanal_namedtuple___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 12, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    CPyModule_mypy___nodes = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r26 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r27 = CPyStatic_semanal_namedtuple___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 45, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    CPyModule_mypy___options = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9721]; /* ('PRIORITY_FALLBACKS', 'SemanticAnalyzerInterface',
                                     'calculate_tuple_fallback', 'has_placeholder',
                                     'set_callable_name') */
    cpy_r_r30 = CPyStatics[4478]; /* 'mypy.semanal_shared' */
    cpy_r_r31 = CPyStatic_semanal_namedtuple___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 46, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    CPyModule_mypy___semanal_shared = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___semanal_shared);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9722]; /* ('TYPED_NAMEDTUPLE_NAMES', 'AnyType', 'CallableType',
                                     'LiteralType', 'TupleType', 'Type', 'TypeOfAny',
                                     'TypeType', 'TypeVarLikeType', 'TypeVarType',
                                     'UnboundType', 'has_type_vars') */
    cpy_r_r34 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r35 = CPyStatic_semanal_namedtuple___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 53, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    CPyModule_mypy___types = cpy_r_r36;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9603]; /* ('get_unique_redefinition_name',) */
    cpy_r_r38 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r39 = CPyStatic_semanal_namedtuple___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 67, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    CPyModule_mypy___util = cpy_r_r40;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[721]; /* '__new__' */
    cpy_r_r42 = CPyStatics[288]; /* '__init__' */
    cpy_r_r43 = CPyStatics[785]; /* '__slots__' */
    cpy_r_r44 = CPyStatics[5232]; /* '__getnewargs__' */
    cpy_r_r45 = CPyStatics[5222]; /* '_fields' */
    cpy_r_r46 = CPyStatics[5224]; /* '_field_defaults' */
    cpy_r_r47 = CPyStatics[5223]; /* '_field_types' */
    cpy_r_r48 = CPyStatics[5229]; /* '_make' */
    cpy_r_r49 = CPyStatics[331]; /* '_replace' */
    cpy_r_r50 = CPyStatics[430]; /* '_asdict' */
    cpy_r_r51 = CPyStatics[5225]; /* '_source' */
    cpy_r_r52 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r53.f0 = cpy_r_r41;
    cpy_r_r53.f1 = cpy_r_r42;
    cpy_r_r53.f2 = cpy_r_r43;
    cpy_r_r53.f3 = cpy_r_r44;
    cpy_r_r53.f4 = cpy_r_r45;
    cpy_r_r53.f5 = cpy_r_r46;
    cpy_r_r53.f6 = cpy_r_r47;
    cpy_r_r53.f7 = cpy_r_r48;
    cpy_r_r53.f8 = cpy_r_r49;
    cpy_r_r53.f9 = cpy_r_r50;
    cpy_r_r53.f10 = cpy_r_r51;
    cpy_r_r53.f11 = cpy_r_r52;
    CPy_INCREF(cpy_r_r53.f0);
    CPy_INCREF(cpy_r_r53.f1);
    CPy_INCREF(cpy_r_r53.f2);
    CPy_INCREF(cpy_r_r53.f3);
    CPy_INCREF(cpy_r_r53.f4);
    CPy_INCREF(cpy_r_r53.f5);
    CPy_INCREF(cpy_r_r53.f6);
    CPy_INCREF(cpy_r_r53.f7);
    CPy_INCREF(cpy_r_r53.f8);
    CPy_INCREF(cpy_r_r53.f9);
    CPy_INCREF(cpy_r_r53.f10);
    CPy_INCREF(cpy_r_r53.f11);
    CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES = cpy_r_r53;
    CPy_INCREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f0);
    CPy_INCREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f1);
    CPy_INCREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f2);
    CPy_INCREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f3);
    CPy_INCREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f4);
    CPy_INCREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f5);
    CPy_INCREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f6);
    CPy_INCREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f7);
    CPy_INCREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f8);
    CPy_INCREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f9);
    CPy_INCREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f10);
    CPy_INCREF(CPyStatic_semanal_namedtuple___NAMEDTUPLE_PROHIBITED_NAMES.f11);
    cpy_r_r54 = CPyStatic_semanal_namedtuple___globals;
    cpy_r_r55 = CPyStatics[5233]; /* 'NAMEDTUPLE_PROHIBITED_NAMES' */
    cpy_r_r56 = PyTuple_New(12);
    if (unlikely(cpy_r_r56 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6100 = cpy_r_r53.f0;
    PyTuple_SET_ITEM(cpy_r_r56, 0, __tmp6100);
    PyObject *__tmp6101 = cpy_r_r53.f1;
    PyTuple_SET_ITEM(cpy_r_r56, 1, __tmp6101);
    PyObject *__tmp6102 = cpy_r_r53.f2;
    PyTuple_SET_ITEM(cpy_r_r56, 2, __tmp6102);
    PyObject *__tmp6103 = cpy_r_r53.f3;
    PyTuple_SET_ITEM(cpy_r_r56, 3, __tmp6103);
    PyObject *__tmp6104 = cpy_r_r53.f4;
    PyTuple_SET_ITEM(cpy_r_r56, 4, __tmp6104);
    PyObject *__tmp6105 = cpy_r_r53.f5;
    PyTuple_SET_ITEM(cpy_r_r56, 5, __tmp6105);
    PyObject *__tmp6106 = cpy_r_r53.f6;
    PyTuple_SET_ITEM(cpy_r_r56, 6, __tmp6106);
    PyObject *__tmp6107 = cpy_r_r53.f7;
    PyTuple_SET_ITEM(cpy_r_r56, 7, __tmp6107);
    PyObject *__tmp6108 = cpy_r_r53.f8;
    PyTuple_SET_ITEM(cpy_r_r56, 8, __tmp6108);
    PyObject *__tmp6109 = cpy_r_r53.f9;
    PyTuple_SET_ITEM(cpy_r_r56, 9, __tmp6109);
    PyObject *__tmp6110 = cpy_r_r53.f10;
    PyTuple_SET_ITEM(cpy_r_r56, 10, __tmp6110);
    PyObject *__tmp6111 = cpy_r_r53.f11;
    PyTuple_SET_ITEM(cpy_r_r56, 11, __tmp6111);
    cpy_r_r57 = CPyDict_SetItem(cpy_r_r54, cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 71, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    cpy_r_r59 = CPyStatics[5199]; /* ('Invalid statement in NamedTuple definition; expected '
                                     '"field_name: field_type [= default]"') */
    cpy_r_r60 = CPyStatic_semanal_namedtuple___globals;
    cpy_r_r61 = CPyStatics[5234]; /* 'NAMEDTUP_CLASS_ERROR' */
    cpy_r_r62 = CPyDict_SetItem(cpy_r_r60, cpy_r_r61, cpy_r_r59);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 87, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    cpy_r_r64 = CPyStatics[5226]; /* '_NT' */
    cpy_r_r65 = CPyStatic_semanal_namedtuple___globals;
    cpy_r_r66 = CPyStatics[4467]; /* 'SELF_TVAR_NAME' */
    cpy_r_r67 = CPyDict_SetItem(cpy_r_r65, cpy_r_r66, cpy_r_r64);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 90, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    cpy_r_r69 = NULL;
    cpy_r_r70 = CPyStatics[5066]; /* 'mypy.semanal_namedtuple' */
    cpy_r_r71 = (PyObject *)CPyType_semanal_namedtuple___NamedTupleAnalyzer_template;
    cpy_r_r72 = CPyType_FromTemplate(cpy_r_r71, cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 93, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    cpy_r_r73 = CPyDef_semanal_namedtuple___NamedTupleAnalyzer_trait_vtable_setup();
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", -1, CPyStatic_semanal_namedtuple___globals);
        goto CPyL26;
    }
    cpy_r_r74 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r75 = CPyStatics[159]; /* 'options' */
    cpy_r_r76 = CPyStatics[4369]; /* 'api' */
    cpy_r_r77 = PyTuple_Pack(2, cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 93, CPyStatic_semanal_namedtuple___globals);
        goto CPyL26;
    }
    cpy_r_r78 = PyObject_SetAttr(cpy_r_r72, cpy_r_r74, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 93, CPyStatic_semanal_namedtuple___globals);
        goto CPyL26;
    }
    CPyType_semanal_namedtuple___NamedTupleAnalyzer = (PyTypeObject *)cpy_r_r72;
    CPy_INCREF(CPyType_semanal_namedtuple___NamedTupleAnalyzer);
    cpy_r_r80 = CPyStatic_semanal_namedtuple___globals;
    cpy_r_r81 = CPyStatics[5065]; /* 'NamedTupleAnalyzer' */
    cpy_r_r82 = CPyDict_SetItem(cpy_r_r80, cpy_r_r81, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 93, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    cpy_r_r84 = (PyObject *)CPyType_semanal_namedtuple___NamedTupleAnalyzer;
    cpy_r_r85 = CPyStatics[4878]; /* 'save_namedtuple_body' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 625, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    cpy_r_r87 = CPyStatic_semanal_namedtuple___globals;
    cpy_r_r88 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r89 = CPyDict_GetItem(cpy_r_r87, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 624, CPyStatic_semanal_namedtuple___globals);
        goto CPyL27;
    }
    PyObject *cpy_r_r90[1] = {cpy_r_r86};
    cpy_r_r91 = (PyObject **)&cpy_r_r90;
    cpy_r_r92 = _PyObject_Vectorcall(cpy_r_r89, cpy_r_r91, 1, 0);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 625, CPyStatic_semanal_namedtuple___globals);
        goto CPyL27;
    }
    CPy_DECREF(cpy_r_r86);
    cpy_r_r93 = CPyStatics[4878]; /* 'save_namedtuple_body' */
    cpy_r_r94 = PyObject_SetAttr(cpy_r_r84, cpy_r_r93, cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/semanal_namedtuple.py", "<module>", 625, CPyStatic_semanal_namedtuple___globals);
        goto CPyL25;
    }
    return 1;
CPyL25: ;
    cpy_r_r96 = 2;
    return cpy_r_r96;
CPyL26: ;
    CPy_DecRef(cpy_r_r72);
    goto CPyL25;
CPyL27: ;
    CPy_DecRef(cpy_r_r86);
    goto CPyL25;
}
