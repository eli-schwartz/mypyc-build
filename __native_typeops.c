#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
typeops___TypeVarExtractor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef typeops___TypeVarExtractor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___typeops___TypeVarExtractorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___typeops___TypeVarExtractorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *typeops___TypeVarExtractor_setup(PyTypeObject *type);
PyObject *CPyDef_typeops___TypeVarExtractor(void);

static PyObject *
typeops___TypeVarExtractor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_typeops___TypeVarExtractor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = typeops___TypeVarExtractor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_typeops___TypeVarExtractor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
typeops___TypeVarExtractor_traverse(mypy___typeops___TypeVarExtractorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_strategy);
    Py_VISIT(self->_seen_aliases);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___typeops___TypeVarExtractorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___typeops___TypeVarExtractorObject))));
    return 0;
}

static int
typeops___TypeVarExtractor_clear(mypy___typeops___TypeVarExtractorObject *self)
{
    Py_CLEAR(self->_strategy);
    Py_CLEAR(self->_seen_aliases);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___typeops___TypeVarExtractorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___typeops___TypeVarExtractorObject))));
    return 0;
}

static void
typeops___TypeVarExtractor_dealloc(mypy___typeops___TypeVarExtractorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, typeops___TypeVarExtractor_dealloc)
    typeops___TypeVarExtractor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem typeops___TypeVarExtractor_vtable[37];
static CPyVTableItem typeops___TypeVarExtractor_type_visitor___SyntheticTypeVisitor_trait_vtable[26];
static size_t typeops___TypeVarExtractor_type_visitor___SyntheticTypeVisitor_offset_table[1];
static CPyVTableItem typeops___TypeVarExtractor_type_visitor___TypeVisitor_trait_vtable[21];
static size_t typeops___TypeVarExtractor_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_typeops___TypeVarExtractor_trait_vtable_setup(void)
{
    CPyVTableItem typeops___TypeVarExtractor_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_list,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_argument,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_placeholder_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_any,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_typeops___TypeVarExtractor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_parameters,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_instance,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_partial_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_alias_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unpack_type,
    };
    memcpy(typeops___TypeVarExtractor_type_visitor___SyntheticTypeVisitor_trait_vtable, typeops___TypeVarExtractor_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch, sizeof(typeops___TypeVarExtractor_type_visitor___SyntheticTypeVisitor_trait_vtable));
    size_t typeops___TypeVarExtractor_type_visitor___SyntheticTypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(typeops___TypeVarExtractor_type_visitor___SyntheticTypeVisitor_offset_table, typeops___TypeVarExtractor_type_visitor___SyntheticTypeVisitor_offset_table_scratch, sizeof(typeops___TypeVarExtractor_type_visitor___SyntheticTypeVisitor_offset_table));
    CPyVTableItem typeops___TypeVarExtractor_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_any,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_typeops___TypeVarExtractor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_parameters,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_instance,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_partial_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_alias_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unpack_type,
    };
    memcpy(typeops___TypeVarExtractor_type_visitor___TypeVisitor_trait_vtable, typeops___TypeVarExtractor_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(typeops___TypeVarExtractor_type_visitor___TypeVisitor_trait_vtable));
    size_t typeops___TypeVarExtractor_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(typeops___TypeVarExtractor_type_visitor___TypeVisitor_offset_table, typeops___TypeVarExtractor_type_visitor___TypeVisitor_offset_table_scratch, sizeof(typeops___TypeVarExtractor_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem typeops___TypeVarExtractor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___SyntheticTypeVisitor, (CPyVTableItem)typeops___TypeVarExtractor_type_visitor___SyntheticTypeVisitor_trait_vtable, (CPyVTableItem)typeops___TypeVarExtractor_type_visitor___SyntheticTypeVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)typeops___TypeVarExtractor_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)typeops___TypeVarExtractor_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_typeops___TypeVarExtractor_____init__,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_list,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_argument,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_any,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_typeops___TypeVarExtractor___visit_type_var__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unpack_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_parameters,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_partial_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_instance,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_placeholder_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_alias_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___query_types,
        (CPyVTableItem)CPyDef_typeops___TypeVarExtractor_____init__,
        (CPyVTableItem)CPyDef_typeops___TypeVarExtractor____merge,
        (CPyVTableItem)CPyDef_typeops___TypeVarExtractor___visit_type_var,
    };
    memcpy(typeops___TypeVarExtractor_vtable, typeops___TypeVarExtractor_vtable_scratch, sizeof(typeops___TypeVarExtractor_vtable));
    return 1;
}


static PyGetSetDef typeops___TypeVarExtractor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef typeops___TypeVarExtractor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_typeops___TypeVarExtractor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_merge",
     (PyCFunction)CPyPy_typeops___TypeVarExtractor____merge,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_typeops___TypeVarExtractor___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_typeops___TypeVarExtractor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeVarExtractor",
    .tp_new = typeops___TypeVarExtractor_new,
    .tp_dealloc = (destructor)typeops___TypeVarExtractor_dealloc,
    .tp_traverse = (traverseproc)typeops___TypeVarExtractor_traverse,
    .tp_clear = (inquiry)typeops___TypeVarExtractor_clear,
    .tp_getset = typeops___TypeVarExtractor_getseters,
    .tp_methods = typeops___TypeVarExtractor_methods,
    .tp_init = typeops___TypeVarExtractor_init,
    .tp_members = typeops___TypeVarExtractor_members,
    .tp_basicsize = sizeof(mypy___typeops___TypeVarExtractorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___typeops___TypeVarExtractorObject),
    .tp_weaklistoffset = sizeof(mypy___typeops___TypeVarExtractorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_typeops___TypeVarExtractor_template = &CPyType_typeops___TypeVarExtractor_template_;

static PyObject *
typeops___TypeVarExtractor_setup(PyTypeObject *type)
{
    mypy___typeops___TypeVarExtractorObject *self;
    self = (mypy___typeops___TypeVarExtractorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = typeops___TypeVarExtractor_vtable + 6;
    self->_skip_alias_target = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_typeops___TypeVarExtractor(void)
{
    PyObject *self = typeops___TypeVarExtractor_setup(CPyType_typeops___TypeVarExtractor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_typeops___TypeVarExtractor_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


static PyObject *typeops___bind_self_env_setup(PyTypeObject *type);
PyObject *CPyDef_typeops___bind_self_env(void);

static PyObject *
typeops___bind_self_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_typeops___bind_self_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return typeops___bind_self_env_setup(type);
}

static int
typeops___bind_self_env_traverse(mypy___typeops___bind_self_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_all_ids);
    Py_VISIT(self->_ids);
    Py_VISIT(self->_to_apply);
    Py_VISIT(self->_expand);
    Py_VISIT(self->_method);
    Py_VISIT(self->_original_type);
    Py_VISIT(self->_c);
    Py_VISIT(self->_func);
    Py_VISIT(self->_self_param_type);
    Py_VISIT(self->_variables);
    Py_VISIT(self->_typeargs);
    Py_VISIT(self->_t);
    Py_VISIT(self->_tid);
    return 0;
}

static int
typeops___bind_self_env_clear(mypy___typeops___bind_self_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_all_ids);
    Py_CLEAR(self->_ids);
    Py_CLEAR(self->_to_apply);
    Py_CLEAR(self->_expand);
    Py_CLEAR(self->_method);
    Py_CLEAR(self->_original_type);
    Py_CLEAR(self->_c);
    Py_CLEAR(self->_func);
    Py_CLEAR(self->_self_param_type);
    Py_CLEAR(self->_variables);
    Py_CLEAR(self->_typeargs);
    Py_CLEAR(self->_t);
    Py_CLEAR(self->_tid);
    return 0;
}

static void
typeops___bind_self_env_dealloc(mypy___typeops___bind_self_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, typeops___bind_self_env_dealloc)
    typeops___bind_self_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem typeops___bind_self_env_vtable[1];
static bool
CPyDef_typeops___bind_self_env_trait_vtable_setup(void)
{
    CPyVTableItem typeops___bind_self_env_vtable_scratch[] = {
        NULL
    };
    memcpy(typeops___bind_self_env_vtable, typeops___bind_self_env_vtable_scratch, sizeof(typeops___bind_self_env_vtable));
    return 1;
}

static PyMethodDef typeops___bind_self_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_typeops___bind_self_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "bind_self_env",
    .tp_new = typeops___bind_self_env_new,
    .tp_dealloc = (destructor)typeops___bind_self_env_dealloc,
    .tp_traverse = (traverseproc)typeops___bind_self_env_traverse,
    .tp_clear = (inquiry)typeops___bind_self_env_clear,
    .tp_methods = typeops___bind_self_env_methods,
    .tp_basicsize = sizeof(mypy___typeops___bind_self_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_typeops___bind_self_env_template = &CPyType_typeops___bind_self_env_template_;

static PyObject *
typeops___bind_self_env_setup(PyTypeObject *type)
{
    mypy___typeops___bind_self_envObject *self;
    self = (mypy___typeops___bind_self_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = typeops___bind_self_env_vtable;
    self->_is_classmethod = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_typeops___bind_self_env(void)
{
    PyObject *self = typeops___bind_self_env_setup(CPyType_typeops___bind_self_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__typeops___expand_bind_self_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_typeops___expand_bind_self_obj_____get__(self, instance, owner);
}
PyMemberDef typeops___expand_bind_self_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___typeops___expand_bind_self_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___typeops___expand_bind_self_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *typeops___expand_bind_self_obj_setup(PyTypeObject *type);
PyObject *CPyDef_typeops___expand_bind_self_obj(void);

static PyObject *
typeops___expand_bind_self_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_typeops___expand_bind_self_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return typeops___expand_bind_self_obj_setup(type);
}

static int
typeops___expand_bind_self_obj_traverse(mypy___typeops___expand_bind_self_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___typeops___expand_bind_self_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___typeops___expand_bind_self_objObject))));
    return 0;
}

static int
typeops___expand_bind_self_obj_clear(mypy___typeops___expand_bind_self_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___typeops___expand_bind_self_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___typeops___expand_bind_self_objObject))));
    return 0;
}

static void
typeops___expand_bind_self_obj_dealloc(mypy___typeops___expand_bind_self_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, typeops___expand_bind_self_obj_dealloc)
    typeops___expand_bind_self_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem typeops___expand_bind_self_obj_vtable[2];
static bool
CPyDef_typeops___expand_bind_self_obj_trait_vtable_setup(void)
{
    CPyVTableItem typeops___expand_bind_self_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_typeops___expand_bind_self_obj_____call__,
        (CPyVTableItem)CPyDef_typeops___expand_bind_self_obj_____get__,
    };
    memcpy(typeops___expand_bind_self_obj_vtable, typeops___expand_bind_self_obj_vtable_scratch, sizeof(typeops___expand_bind_self_obj_vtable));
    return 1;
}

static PyMethodDef typeops___expand_bind_self_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_typeops___expand_bind_self_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_typeops___expand_bind_self_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_typeops___expand_bind_self_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "expand_bind_self_obj",
    .tp_new = typeops___expand_bind_self_obj_new,
    .tp_dealloc = (destructor)typeops___expand_bind_self_obj_dealloc,
    .tp_traverse = (traverseproc)typeops___expand_bind_self_obj_traverse,
    .tp_clear = (inquiry)typeops___expand_bind_self_obj_clear,
    .tp_methods = typeops___expand_bind_self_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__typeops___expand_bind_self_obj,
    .tp_members = typeops___expand_bind_self_obj_members,
    .tp_basicsize = sizeof(mypy___typeops___expand_bind_self_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___typeops___expand_bind_self_objObject),
    .tp_weaklistoffset = sizeof(mypy___typeops___expand_bind_self_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___typeops___expand_bind_self_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_typeops___expand_bind_self_obj_template = &CPyType_typeops___expand_bind_self_obj_template_;

static PyObject *
typeops___expand_bind_self_obj_setup(PyTypeObject *type)
{
    mypy___typeops___expand_bind_self_objObject *self;
    self = (mypy___typeops___expand_bind_self_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = typeops___expand_bind_self_obj_vtable;
    self->vectorcall = CPyPy_typeops___expand_bind_self_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_typeops___expand_bind_self_obj(void)
{
    PyObject *self = typeops___expand_bind_self_obj_setup(CPyType_typeops___expand_bind_self_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *typeops___get_protocol_member_env_setup(PyTypeObject *type);
PyObject *CPyDef_typeops___get_protocol_member_env(void);

static PyObject *
typeops___get_protocol_member_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_typeops___get_protocol_member_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return typeops___get_protocol_member_env_setup(type);
}

static int
typeops___get_protocol_member_env_traverse(mypy___typeops___get_protocol_member_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_left);
    Py_VISIT(self->_named_type);
    Py_VISIT(self->_member);
    return 0;
}

static int
typeops___get_protocol_member_env_clear(mypy___typeops___get_protocol_member_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_left);
    Py_CLEAR(self->_named_type);
    Py_CLEAR(self->_member);
    return 0;
}

static void
typeops___get_protocol_member_env_dealloc(mypy___typeops___get_protocol_member_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, typeops___get_protocol_member_env_dealloc)
    typeops___get_protocol_member_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem typeops___get_protocol_member_env_vtable[1];
static bool
CPyDef_typeops___get_protocol_member_env_trait_vtable_setup(void)
{
    CPyVTableItem typeops___get_protocol_member_env_vtable_scratch[] = {
        NULL
    };
    memcpy(typeops___get_protocol_member_env_vtable, typeops___get_protocol_member_env_vtable_scratch, sizeof(typeops___get_protocol_member_env_vtable));
    return 1;
}

static PyMethodDef typeops___get_protocol_member_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_typeops___get_protocol_member_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_protocol_member_env",
    .tp_new = typeops___get_protocol_member_env_new,
    .tp_dealloc = (destructor)typeops___get_protocol_member_env_dealloc,
    .tp_traverse = (traverseproc)typeops___get_protocol_member_env_traverse,
    .tp_clear = (inquiry)typeops___get_protocol_member_env_clear,
    .tp_methods = typeops___get_protocol_member_env_methods,
    .tp_basicsize = sizeof(mypy___typeops___get_protocol_member_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_typeops___get_protocol_member_env_template = &CPyType_typeops___get_protocol_member_env_template_;

static PyObject *
typeops___get_protocol_member_env_setup(PyTypeObject *type)
{
    mypy___typeops___get_protocol_member_envObject *self;
    self = (mypy___typeops___get_protocol_member_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = typeops___get_protocol_member_env_vtable;
    self->_class_obj = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_typeops___get_protocol_member_env(void)
{
    PyObject *self = typeops___get_protocol_member_env_setup(CPyType_typeops___get_protocol_member_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__typeops___named_type_get_protocol_member_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_typeops___named_type_get_protocol_member_obj_____get__(self, instance, owner);
}
PyMemberDef typeops___named_type_get_protocol_member_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___typeops___named_type_get_protocol_member_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___typeops___named_type_get_protocol_member_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *typeops___named_type_get_protocol_member_obj_setup(PyTypeObject *type);
PyObject *CPyDef_typeops___named_type_get_protocol_member_obj(void);

static PyObject *
typeops___named_type_get_protocol_member_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_typeops___named_type_get_protocol_member_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return typeops___named_type_get_protocol_member_obj_setup(type);
}

static int
typeops___named_type_get_protocol_member_obj_traverse(mypy___typeops___named_type_get_protocol_member_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___typeops___named_type_get_protocol_member_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___typeops___named_type_get_protocol_member_objObject))));
    return 0;
}

static int
typeops___named_type_get_protocol_member_obj_clear(mypy___typeops___named_type_get_protocol_member_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___typeops___named_type_get_protocol_member_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___typeops___named_type_get_protocol_member_objObject))));
    return 0;
}

static void
typeops___named_type_get_protocol_member_obj_dealloc(mypy___typeops___named_type_get_protocol_member_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, typeops___named_type_get_protocol_member_obj_dealloc)
    typeops___named_type_get_protocol_member_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem typeops___named_type_get_protocol_member_obj_vtable[2];
static bool
CPyDef_typeops___named_type_get_protocol_member_obj_trait_vtable_setup(void)
{
    CPyVTableItem typeops___named_type_get_protocol_member_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_typeops___named_type_get_protocol_member_obj_____call__,
        (CPyVTableItem)CPyDef_typeops___named_type_get_protocol_member_obj_____get__,
    };
    memcpy(typeops___named_type_get_protocol_member_obj_vtable, typeops___named_type_get_protocol_member_obj_vtable_scratch, sizeof(typeops___named_type_get_protocol_member_obj_vtable));
    return 1;
}

static PyMethodDef typeops___named_type_get_protocol_member_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_typeops___named_type_get_protocol_member_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_typeops___named_type_get_protocol_member_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_typeops___named_type_get_protocol_member_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "named_type_get_protocol_member_obj",
    .tp_new = typeops___named_type_get_protocol_member_obj_new,
    .tp_dealloc = (destructor)typeops___named_type_get_protocol_member_obj_dealloc,
    .tp_traverse = (traverseproc)typeops___named_type_get_protocol_member_obj_traverse,
    .tp_clear = (inquiry)typeops___named_type_get_protocol_member_obj_clear,
    .tp_methods = typeops___named_type_get_protocol_member_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__typeops___named_type_get_protocol_member_obj,
    .tp_members = typeops___named_type_get_protocol_member_obj_members,
    .tp_basicsize = sizeof(mypy___typeops___named_type_get_protocol_member_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___typeops___named_type_get_protocol_member_objObject),
    .tp_weaklistoffset = sizeof(mypy___typeops___named_type_get_protocol_member_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___typeops___named_type_get_protocol_member_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_typeops___named_type_get_protocol_member_obj_template = &CPyType_typeops___named_type_get_protocol_member_obj_template_;

static PyObject *
typeops___named_type_get_protocol_member_obj_setup(PyTypeObject *type)
{
    mypy___typeops___named_type_get_protocol_member_objObject *self;
    self = (mypy___typeops___named_type_get_protocol_member_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = typeops___named_type_get_protocol_member_obj_vtable;
    self->vectorcall = CPyPy_typeops___named_type_get_protocol_member_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_typeops___named_type_get_protocol_member_obj(void)
{
    PyObject *self = typeops___named_type_get_protocol_member_obj_setup(CPyType_typeops___named_type_get_protocol_member_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef typeopsmodule_methods[] = {
    {"is_recursive_pair", (PyCFunction)CPyPy_typeops___is_recursive_pair, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"tuple_fallback", (PyCFunction)CPyPy_typeops___tuple_fallback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_self_type", (PyCFunction)CPyPy_typeops___get_self_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"type_object_type_from_function", (PyCFunction)CPyPy_typeops___type_object_type_from_function, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"class_callable", (PyCFunction)CPyPy_typeops___class_callable, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"map_type_from_supertype", (PyCFunction)CPyPy_typeops___map_type_from_supertype, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"supported_self_type", (PyCFunction)CPyPy_typeops___supported_self_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"bind_self", (PyCFunction)CPyPy_typeops___bind_self, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"erase_to_bound", (PyCFunction)CPyPy_typeops___erase_to_bound, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"callable_corresponding_argument", (PyCFunction)CPyPy_typeops___callable_corresponding_argument, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"simple_literal_type", (PyCFunction)CPyPy_typeops___simple_literal_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_simple_literal", (PyCFunction)CPyPy_typeops___is_simple_literal, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"make_simplified_union", (PyCFunction)CPyPy_typeops___make_simplified_union, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_remove_redundant_union_items", (PyCFunction)CPyPy_typeops____remove_redundant_union_items, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_get_type_special_method_bool_ret_type", (PyCFunction)CPyPy_typeops____get_type_special_method_bool_ret_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"true_only", (PyCFunction)CPyPy_typeops___true_only, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"false_only", (PyCFunction)CPyPy_typeops___false_only, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"true_or_false", (PyCFunction)CPyPy_typeops___true_or_false, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"erase_def_to_union_or_bound", (PyCFunction)CPyPy_typeops___erase_def_to_union_or_bound, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"erase_to_union_or_bound", (PyCFunction)CPyPy_typeops___erase_to_union_or_bound, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"function_type", (PyCFunction)CPyPy_typeops___function_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"callable_type", (PyCFunction)CPyPy_typeops___callable_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"try_getting_str_literals", (PyCFunction)CPyPy_typeops___try_getting_str_literals, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"try_getting_str_literals_from_type", (PyCFunction)CPyPy_typeops___try_getting_str_literals_from_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"try_getting_int_literals_from_type", (PyCFunction)CPyPy_typeops___try_getting_int_literals_from_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"try_getting_literals_from_type", (PyCFunction)CPyPy_typeops___try_getting_literals_from_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_literal_type_like", (PyCFunction)CPyPy_typeops___is_literal_type_like, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_singleton_type", (PyCFunction)CPyPy_typeops___is_singleton_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"try_expanding_sum_type_to_union", (PyCFunction)CPyPy_typeops___try_expanding_sum_type_to_union, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"try_contracting_literals_in_union", (PyCFunction)CPyPy_typeops___try_contracting_literals_in_union, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"coerce_to_literal", (PyCFunction)CPyPy_typeops___coerce_to_literal, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_type_vars", (PyCFunction)CPyPy_typeops___get_type_vars, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"custom_special_method", (PyCFunction)CPyPy_typeops___custom_special_method, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"separate_union_literals", (PyCFunction)CPyPy_typeops___separate_union_literals, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"try_getting_instance_fallback", (PyCFunction)CPyPy_typeops___try_getting_instance_fallback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"fixup_partial_type", (PyCFunction)CPyPy_typeops___fixup_partial_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_protocol_member", (PyCFunction)CPyPy_typeops___get_protocol_member, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef typeopsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.typeops",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    typeopsmodule_methods
};

PyObject *CPyInit_mypy___typeops(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___typeops_internal) {
        Py_INCREF(CPyModule_mypy___typeops_internal);
        return CPyModule_mypy___typeops_internal;
    }
    CPyModule_mypy___typeops_internal = PyModule_Create(&typeopsmodule);
    if (unlikely(CPyModule_mypy___typeops_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___typeops_internal, "__name__");
    CPyStatic_typeops___globals = PyModule_GetDict(CPyModule_mypy___typeops_internal);
    if (unlikely(CPyStatic_typeops___globals == NULL))
        goto fail;
    CPyType_typeops___bind_self_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_typeops___bind_self_env_template, NULL, modname);
    if (unlikely(!CPyType_typeops___bind_self_env))
        goto fail;
    CPyType_typeops___expand_bind_self_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_typeops___expand_bind_self_obj_template, NULL, modname);
    if (unlikely(!CPyType_typeops___expand_bind_self_obj))
        goto fail;
    CPyType_typeops___get_protocol_member_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_typeops___get_protocol_member_env_template, NULL, modname);
    if (unlikely(!CPyType_typeops___get_protocol_member_env))
        goto fail;
    CPyType_typeops___named_type_get_protocol_member_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_typeops___named_type_get_protocol_member_obj_template, NULL, modname);
    if (unlikely(!CPyType_typeops___named_type_get_protocol_member_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_typeops_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___typeops_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___typeops_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_typeops___TypeVarExtractor);
    Py_CLEAR(CPyType_typeops___bind_self_env);
    Py_CLEAR(CPyType_typeops___expand_bind_self_obj);
    Py_CLEAR(CPyType_typeops___get_protocol_member_env);
    Py_CLEAR(CPyType_typeops___named_type_get_protocol_member_obj);
    return NULL;
}

char CPyDef_typeops___is_recursive_pair(PyObject *cpy_r_s, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    cpy_r_r0 = (PyObject *)CPyType_types___TypeAliasType;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL22;
    CPy_INCREF(cpy_r_s);
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___TypeAliasType))
        cpy_r_r4 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_recursive_pair", 74, CPyStatic_typeops___globals, "mypy.types.TypeAliasType", cpy_r_s);
        goto CPyL45;
    }
    cpy_r_r5 = CPY_GET_ATTR(cpy_r_r4, CPyType_types___TypeAliasType, 19, mypy___types___TypeAliasTypeObject, char); /* is_recursive */
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "is_recursive_pair", 74, CPyStatic_typeops___globals);
        goto CPyL45;
    }
CPyL3: ;
    if (!cpy_r_r5) goto CPyL22;
CPyL4: ;
    cpy_r_r6 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "is_recursive_pair", 76, CPyStatic_typeops___globals);
        goto CPyL45;
    }
    cpy_r_r7 = (PyObject *)CPyType_types___Instance;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_r6)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (cpy_r_r10) {
        goto CPyL46;
    } else
        goto CPyL7;
CPyL6: ;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL8;
CPyL7: ;
    cpy_r_r12 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_r6)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    CPy_DECREF(cpy_r_r6);
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    cpy_r_r11 = cpy_r_r15;
CPyL8: ;
    if (!cpy_r_r11) goto CPyL10;
    cpy_r_r16 = cpy_r_r11;
    goto CPyL21;
CPyL10: ;
    cpy_r_r17 = (PyObject *)CPyType_types___TypeAliasType;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (cpy_r_r20) goto CPyL12;
    cpy_r_r21 = cpy_r_r20;
    goto CPyL15;
CPyL12: ;
    CPy_INCREF(cpy_r_t);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___TypeAliasType))
        cpy_r_r22 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_recursive_pair", 78, CPyStatic_typeops___globals, "mypy.types.TypeAliasType", cpy_r_t);
        goto CPyL45;
    }
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_r22, CPyType_types___TypeAliasType, 19, mypy___types___TypeAliasTypeObject, char); /* is_recursive */
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "is_recursive_pair", 78, CPyStatic_typeops___globals);
        goto CPyL45;
    }
CPyL14: ;
    cpy_r_r21 = cpy_r_r23;
CPyL15: ;
    if (!cpy_r_r21) goto CPyL17;
    cpy_r_r24 = cpy_r_r21;
    goto CPyL20;
CPyL17: ;
    CPy_INCREF(cpy_r_s);
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___TypeAliasType))
        cpy_r_r25 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_recursive_pair", 82, CPyStatic_typeops___globals, "mypy.types.TypeAliasType", cpy_r_s);
        goto CPyL45;
    }
    cpy_r_r26 = CPyDef_types___get_proper_type(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "is_recursive_pair", 82, CPyStatic_typeops___globals);
        goto CPyL45;
    }
    cpy_r_r27 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r28 = (CPyPtr)&((PyObject *)cpy_r_r26)->ob_type;
    cpy_r_r29 = *(PyObject * *)cpy_r_r28;
    CPy_DECREF(cpy_r_r26);
    cpy_r_r30 = cpy_r_r29 == cpy_r_r27;
    cpy_r_r24 = cpy_r_r30;
CPyL20: ;
    cpy_r_r16 = cpy_r_r24;
CPyL21: ;
    return cpy_r_r16;
CPyL22: ;
    cpy_r_r31 = (PyObject *)CPyType_types___TypeAliasType;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL44;
    CPy_INCREF(cpy_r_t);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___TypeAliasType))
        cpy_r_r35 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_recursive_pair", 84, CPyStatic_typeops___globals, "mypy.types.TypeAliasType", cpy_r_t);
        goto CPyL45;
    }
    cpy_r_r36 = CPY_GET_ATTR(cpy_r_r35, CPyType_types___TypeAliasType, 19, mypy___types___TypeAliasTypeObject, char); /* is_recursive */
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "is_recursive_pair", 84, CPyStatic_typeops___globals);
        goto CPyL45;
    }
CPyL25: ;
    if (!cpy_r_r36) goto CPyL44;
CPyL26: ;
    cpy_r_r37 = CPyDef_types___get_proper_type(cpy_r_s);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "is_recursive_pair", 86, CPyStatic_typeops___globals);
        goto CPyL45;
    }
    cpy_r_r38 = (PyObject *)CPyType_types___Instance;
    cpy_r_r39 = (CPyPtr)&((PyObject *)cpy_r_r37)->ob_type;
    cpy_r_r40 = *(PyObject * *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 == cpy_r_r38;
    if (cpy_r_r41) {
        goto CPyL47;
    } else
        goto CPyL29;
CPyL28: ;
    cpy_r_r42 = cpy_r_r41;
    goto CPyL30;
CPyL29: ;
    cpy_r_r43 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r44 = (CPyPtr)&((PyObject *)cpy_r_r37)->ob_type;
    cpy_r_r45 = *(PyObject * *)cpy_r_r44;
    CPy_DECREF(cpy_r_r37);
    cpy_r_r46 = cpy_r_r45 == cpy_r_r43;
    cpy_r_r42 = cpy_r_r46;
CPyL30: ;
    if (!cpy_r_r42) goto CPyL32;
    cpy_r_r47 = cpy_r_r42;
    goto CPyL43;
CPyL32: ;
    cpy_r_r48 = (PyObject *)CPyType_types___TypeAliasType;
    cpy_r_r49 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r50 = *(PyObject * *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 == cpy_r_r48;
    if (cpy_r_r51) goto CPyL34;
    cpy_r_r52 = cpy_r_r51;
    goto CPyL37;
CPyL34: ;
    CPy_INCREF(cpy_r_s);
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___TypeAliasType))
        cpy_r_r53 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_recursive_pair", 88, CPyStatic_typeops___globals, "mypy.types.TypeAliasType", cpy_r_s);
        goto CPyL45;
    }
    cpy_r_r54 = CPY_GET_ATTR(cpy_r_r53, CPyType_types___TypeAliasType, 19, mypy___types___TypeAliasTypeObject, char); /* is_recursive */
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "is_recursive_pair", 88, CPyStatic_typeops___globals);
        goto CPyL45;
    }
CPyL36: ;
    cpy_r_r52 = cpy_r_r54;
CPyL37: ;
    if (!cpy_r_r52) goto CPyL39;
    cpy_r_r55 = cpy_r_r52;
    goto CPyL42;
CPyL39: ;
    CPy_INCREF(cpy_r_t);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___TypeAliasType))
        cpy_r_r56 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_recursive_pair", 90, CPyStatic_typeops___globals, "mypy.types.TypeAliasType", cpy_r_t);
        goto CPyL45;
    }
    cpy_r_r57 = CPyDef_types___get_proper_type(cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "is_recursive_pair", 90, CPyStatic_typeops___globals);
        goto CPyL45;
    }
    cpy_r_r58 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r59 = (CPyPtr)&((PyObject *)cpy_r_r57)->ob_type;
    cpy_r_r60 = *(PyObject * *)cpy_r_r59;
    CPy_DECREF(cpy_r_r57);
    cpy_r_r61 = cpy_r_r60 == cpy_r_r58;
    cpy_r_r55 = cpy_r_r61;
CPyL42: ;
    cpy_r_r47 = cpy_r_r55;
CPyL43: ;
    return cpy_r_r47;
CPyL44: ;
    return 0;
CPyL45: ;
    cpy_r_r62 = 2;
    return cpy_r_r62;
CPyL46: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL6;
CPyL47: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL28;
}

PyObject *CPyPy_typeops___is_recursive_pair(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"s", "t", 0};
    static CPyArg_Parser parser = {"OO:is_recursive_pair", kwlist, 0};
    PyObject *obj_s;
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_s, &obj_t)) {
        return NULL;
    }
    PyObject *arg_s;
    if (likely(PyObject_TypeCheck(obj_s, CPyType_types___Type)))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.types.Type", obj_s); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___Type)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typeops___is_recursive_pair(arg_s, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "is_recursive_pair", 67, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___tuple_fallback(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_unpacked_type;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    CPyTagged cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    CPyPtr cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyTagged cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    cpy_r_r0 = CPyStatics[9834]; /* ('join_type_list',) */
    cpy_r_r1 = CPyStatics[92]; /* 'mypy.join' */
    cpy_r_r2 = CPyStatic_typeops___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 97, CPyStatic_typeops___globals);
        goto CPyL41;
    }
    CPyModule_mypy___join = cpy_r_r3;
    CPy_INCREF(CPyModule_mypy___join);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___types___TupleTypeObject *)cpy_r_typ)->_partial_fallback;
    cpy_r_r5 = ((mypy___types___InstanceObject *)cpy_r_r4)->_type;
    CPy_INCREF(cpy_r_r5);
    cpy_r_info = cpy_r_r5;
    cpy_r_r6 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 100, CPyStatic_typeops___globals);
        goto CPyL42;
    }
CPyL2: ;
    cpy_r_r7 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL5;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL5;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 100, CPyStatic_typeops___globals);
        goto CPyL42;
    }
CPyL5: ;
    cpy_r_r13 = cpy_r_r8 != 0;
    if (cpy_r_r13) {
        goto CPyL43;
    } else
        goto CPyL7;
CPyL6: ;
    cpy_r_r14 = ((mypy___types___TupleTypeObject *)cpy_r_typ)->_partial_fallback;
    CPy_INCREF(cpy_r_r14);
    return cpy_r_r14;
CPyL7: ;
    cpy_r_r15 = PyList_New(0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 102, CPyStatic_typeops___globals);
        goto CPyL42;
    }
    cpy_r_items = cpy_r_r15;
    cpy_r_r16 = ((mypy___types___TupleTypeObject *)cpy_r_typ)->_items;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = 0;
CPyL9: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL44;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r17);
    if (likely(PyObject_TypeCheck(cpy_r_r22, CPyType_types___Type)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "tuple_fallback", 103, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r22);
        goto CPyL45;
    }
    cpy_r_item = cpy_r_r23;
    cpy_r_r24 = (PyObject *)CPyType_types___UnpackType;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL35;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_types___UnpackType))
        cpy_r_r28 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "tuple_fallback", 105, CPyStatic_typeops___globals, "mypy.types.UnpackType", cpy_r_item);
        goto CPyL46;
    }
    cpy_r_r29 = ((mypy___types___UnpackTypeObject *)cpy_r_r28)->_type;
    CPy_INCREF(cpy_r_r29);
    CPy_DECREF(cpy_r_item);
    cpy_r_r30 = CPyDef_types___get_proper_type(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 105, CPyStatic_typeops___globals);
        goto CPyL45;
    }
    if (likely(cpy_r_r30 != Py_None))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "tuple_fallback", 105, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r30);
        goto CPyL45;
    }
    cpy_r_unpacked_type = cpy_r_r31;
    cpy_r_r32 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_unpacked_type)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (!cpy_r_r35) goto CPyL18;
    if (likely(Py_TYPE(cpy_r_unpacked_type) == CPyType_types___TypeVarTupleType))
        cpy_r_r36 = cpy_r_unpacked_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "tuple_fallback", 107, CPyStatic_typeops___globals, "mypy.types.TypeVarTupleType", cpy_r_unpacked_type);
        goto CPyL47;
    }
    cpy_r_r37 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_r36)->_upper_bound;
    CPy_INCREF(cpy_r_r37);
    CPy_DECREF(cpy_r_unpacked_type);
    cpy_r_r38 = PyList_Append(cpy_r_items, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 107, CPyStatic_typeops___globals);
        goto CPyL45;
    } else
        goto CPyL36;
CPyL18: ;
    cpy_r_r40 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r41 = (CPyPtr)&((PyObject *)cpy_r_unpacked_type)->ob_type;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 == cpy_r_r40;
    if (!cpy_r_r43) goto CPyL21;
    if (likely(Py_TYPE(cpy_r_unpacked_type) == CPyType_types___TupleType))
        cpy_r_r44 = cpy_r_unpacked_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "tuple_fallback", 111, CPyStatic_typeops___globals, "mypy.types.TupleType", cpy_r_unpacked_type);
        goto CPyL47;
    }
    cpy_r_r45 = ((mypy___types___TupleTypeObject *)cpy_r_r44)->_items;
    CPy_INCREF(cpy_r_r45);
    CPy_DECREF(cpy_r_unpacked_type);
    cpy_r_r46 = CPyList_Extend(cpy_r_items, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 111, CPyStatic_typeops___globals);
        goto CPyL45;
    } else
        goto CPyL48;
CPyL21: ;
    cpy_r_r47 = (PyObject *)CPyType_types___Instance;
    cpy_r_r48 = (CPyPtr)&((PyObject *)cpy_r_unpacked_type)->ob_type;
    cpy_r_r49 = *(PyObject * *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 == cpy_r_r47;
    if (!cpy_r_r50) goto CPyL49;
    if (likely(Py_TYPE(cpy_r_unpacked_type) == CPyType_types___Instance))
        cpy_r_r51 = cpy_r_unpacked_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "tuple_fallback", 114, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_unpacked_type);
        goto CPyL47;
    }
    cpy_r_r52 = ((mypy___types___InstanceObject *)cpy_r_r51)->_type;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = CPY_GET_ATTR(cpy_r_r52, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 114, CPyStatic_typeops___globals);
        goto CPyL47;
    }
CPyL24: ;
    cpy_r_r54 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r55 = PyUnicode_Compare(cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r56 = cpy_r_r55 == -1;
    if (!cpy_r_r56) goto CPyL27;
    cpy_r_r57 = PyErr_Occurred();
    cpy_r_r58 = cpy_r_r57 != NULL;
    if (!cpy_r_r58) goto CPyL27;
    cpy_r_r59 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 114, CPyStatic_typeops___globals);
        goto CPyL47;
    }
CPyL27: ;
    cpy_r_r60 = cpy_r_r55 == 0;
    if (!cpy_r_r60) goto CPyL49;
    if (likely(Py_TYPE(cpy_r_unpacked_type) == CPyType_types___Instance))
        cpy_r_r61 = cpy_r_unpacked_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "tuple_fallback", 116, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_unpacked_type);
        goto CPyL47;
    }
    cpy_r_r62 = ((mypy___types___InstanceObject *)cpy_r_r61)->_args;
    CPy_INCREF(cpy_r_r62);
    CPy_DECREF(cpy_r_unpacked_type);
    cpy_r_r63 = CPySequenceTuple_GetItem(cpy_r_r62, 0);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 116, CPyStatic_typeops___globals);
        goto CPyL45;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r63, CPyType_types___Type)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "tuple_fallback", 116, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r63);
        goto CPyL45;
    }
    cpy_r_r65 = PyList_Append(cpy_r_items, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 116, CPyStatic_typeops___globals);
        goto CPyL45;
    } else
        goto CPyL36;
CPyL32: ;
    cpy_r_r67 = CPyModule_builtins;
    cpy_r_r68 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r69 = CPyObject_GetAttr(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 118, CPyStatic_typeops___globals);
        goto CPyL41;
    }
    CPy_Raise(cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 118, CPyStatic_typeops___globals);
        goto CPyL41;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r70 = PyList_Append(cpy_r_items, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 120, CPyStatic_typeops___globals);
        goto CPyL45;
    }
CPyL36: ;
    cpy_r_r72 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r72;
    goto CPyL9;
CPyL37: ;
    cpy_r_r73 = CPyDef_join___join_type_list(cpy_r_items);
    CPy_DECREF(cpy_r_items);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 121, CPyStatic_typeops___globals);
        goto CPyL42;
    }
    cpy_r_r74 = PyList_New(1);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 121, CPyStatic_typeops___globals);
        goto CPyL50;
    }
    cpy_r_r75 = (CPyPtr)&((PyListObject *)cpy_r_r74)->ob_item;
    cpy_r_r76 = *(CPyPtr *)cpy_r_r75;
    *(PyObject * *)cpy_r_r76 = cpy_r_r73;
    cpy_r_r77 = ((mypy___types___TupleTypeObject *)cpy_r_typ)->_partial_fallback;
    cpy_r_r78 = ((mypy___types___InstanceObject *)cpy_r_r77)->_extra_attrs;
    CPy_INCREF(cpy_r_r78);
    cpy_r_r79 = CPY_INT_TAG;
    cpy_r_r80 = CPY_INT_TAG;
    cpy_r_r81 = NULL;
    cpy_r_r82 = CPyDef_types___Instance(cpy_r_info, cpy_r_r74, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r78);
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 121, CPyStatic_typeops___globals);
        goto CPyL41;
    }
    return cpy_r_r82;
CPyL41: ;
    cpy_r_r83 = NULL;
    return cpy_r_r83;
CPyL42: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL41;
CPyL43: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL6;
CPyL44: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL37;
CPyL45: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r16);
    goto CPyL41;
CPyL46: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_item);
    goto CPyL41;
CPyL47: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_unpacked_type);
    goto CPyL41;
CPyL48: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL36;
CPyL49: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_unpacked_type);
    goto CPyL32;
CPyL50: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r73);
    goto CPyL41;
}

PyObject *CPyPy_typeops___tuple_fallback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:tuple_fallback", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TupleType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___tuple_fallback(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "tuple_fallback", 95, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___get_self_type(PyObject *cpy_r_func, PyObject *cpy_r_default_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_ret_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_types___get_proper_type(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "get_self_type", 125, CPyStatic_typeops___globals);
        goto CPyL19;
    }
    cpy_r_r2 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_r1)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    CPy_DECREF(cpy_r_r1);
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL3;
    cpy_r_r6 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_ret_type;
    CPy_INCREF(cpy_r_r6);
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_arg_types;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = cpy_r_r10 != 0;
    if (!cpy_r_r11) goto CPyL18;
    cpy_r_r12 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_arg_types;
    cpy_r_r13 = CPyList_GetItemShort(cpy_r_r12, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "get_self_type", 127, CPyStatic_typeops___globals);
        goto CPyL19;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_types___Type)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "get_self_type", 127, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r13);
        goto CPyL19;
    }
    cpy_r_r15 = PyObject_RichCompare(cpy_r_r14, cpy_r_default_self, 3);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "get_self_type", 127, CPyStatic_typeops___globals);
        goto CPyL19;
    }
    if (unlikely(!PyBool_Check(cpy_r_r15))) {
        CPy_TypeError("bool", cpy_r_r15); cpy_r_r16 = 2;
    } else
        cpy_r_r16 = cpy_r_r15 == Py_True;
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "get_self_type", 127, CPyStatic_typeops___globals);
        goto CPyL19;
    }
    if (!cpy_r_r16) goto CPyL18;
    cpy_r_r17 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_arg_kinds;
    cpy_r_r18 = CPyList_GetItemShort(cpy_r_r17, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "get_self_type", 127, CPyStatic_typeops___globals);
        goto CPyL19;
    }
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_nodes___ArgKind))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "get_self_type", 127, CPyStatic_typeops___globals, "mypy.nodes.ArgKind", cpy_r_r18);
        goto CPyL19;
    }
    cpy_r_r20 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r20 == NULL)) {
        goto CPyL20;
    } else
        goto CPyL14;
CPyL12: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/typeops.py", "get_self_type", 127, CPyStatic_typeops___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r22 = cpy_r_r19 == cpy_r_r20;
    CPy_DECREF(cpy_r_r19);
    if (!cpy_r_r22) goto CPyL18;
    cpy_r_r23 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_arg_types;
    cpy_r_r24 = CPyList_GetItemShort(cpy_r_r23, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "get_self_type", 128, CPyStatic_typeops___globals);
        goto CPyL19;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r24, CPyType_types___Type)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "get_self_type", 128, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r24);
        goto CPyL19;
    }
    return cpy_r_r25;
CPyL18: ;
    cpy_r_r26 = Py_None;
    CPy_INCREF(cpy_r_r26);
    return cpy_r_r26;
CPyL19: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL20: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL12;
}

PyObject *CPyPy_typeops___get_self_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"func", "default_self", 0};
    static CPyArg_Parser parser = {"OO:get_self_type", kwlist, 0};
    PyObject *obj_func;
    PyObject *obj_default_self;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_func, &obj_default_self)) {
        return NULL;
    }
    PyObject *arg_func;
    if (likely(Py_TYPE(obj_func) == CPyType_types___CallableType))
        arg_func = obj_func;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_func); 
        goto fail;
    }
    PyObject *arg_default_self;
    if (Py_TYPE(obj_default_self) == CPyType_types___Instance)
        arg_default_self = obj_default_self;
    else {
        arg_default_self = NULL;
    }
    if (arg_default_self != NULL) goto __LL7722;
    if (Py_TYPE(obj_default_self) == CPyType_types___TupleType)
        arg_default_self = obj_default_self;
    else {
        arg_default_self = NULL;
    }
    if (arg_default_self != NULL) goto __LL7722;
    CPy_TypeError("union[mypy.types.Instance, mypy.types.TupleType]", obj_default_self); 
    goto fail;
__LL7722: ;
    PyObject *retval = CPyDef_typeops___get_self_type(arg_func, arg_default_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "get_self_type", 124, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___type_object_type_from_function(PyObject *cpy_r_signature, PyObject *cpy_r_info, PyObject *cpy_r_def_info, PyObject *cpy_r_fallback, char cpy_r_is_new) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_default_self;
    char cpy_r_r1;
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
    PyObject *cpy_r_it;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_orig_self_types;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_special_sig;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyTagged cpy_r_r55;
    CPyPtr cpy_r_r56;
    int64_t cpy_r_r57;
    CPyTagged cpy_r_r58;
    char cpy_r_r59;
    CPyPtr cpy_r_r60;
    int64_t cpy_r_r61;
    CPyTagged cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_orig_self;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    CPyTagged cpy_r_r71;
    CPyTagged cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    cpy_r_r0 = CPyDef_typevars___fill_typevars(cpy_r_info);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 141, CPyStatic_typeops___globals);
        goto CPyL48;
    }
    cpy_r_default_self = cpy_r_r0;
    if (cpy_r_is_new) goto CPyL13;
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_is_newtype;
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AttributeError("mypy/typeops.py", "type_object_type_from_function", "TypeInfo", "is_newtype", 142, CPyStatic_typeops___globals);
        goto CPyL49;
    }
CPyL3: ;
    if (cpy_r_r1) goto CPyL13;
CPyL4: ;
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_signature, CPyType_types___FunctionLike, 18, mypy___types___FunctionLikeObject, PyObject *); /* items */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 143, CPyStatic_typeops___globals);
        goto CPyL49;
    }
CPyL5: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = PyList_New(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 143, CPyStatic_typeops___globals);
        goto CPyL50;
    }
    cpy_r_r6 = 0;
CPyL7: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL51;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r6);
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_types___CallableType))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "type_object_type_from_function", 143, CPyStatic_typeops___globals, "mypy.types.CallableType", cpy_r_r11);
        goto CPyL52;
    }
    cpy_r_it = cpy_r_r12;
    cpy_r_r13 = CPyDef_typeops___get_self_type(cpy_r_it, cpy_r_default_self);
    CPy_DECREF(cpy_r_it);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 143, CPyStatic_typeops___globals);
        goto CPyL52;
    }
    cpy_r_r14 = CPyList_SetItemUnsafe(cpy_r_r5, cpy_r_r6, cpy_r_r13);
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 143, CPyStatic_typeops___globals);
        goto CPyL52;
    }
    cpy_r_r15 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r15;
    goto CPyL7;
CPyL12: ;
    cpy_r_orig_self_types = cpy_r_r5;
    goto CPyL17;
CPyL13: ;
    cpy_r_r16 = PyList_New(1);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 145, CPyStatic_typeops___globals);
        goto CPyL49;
    }
    cpy_r_r17 = Py_None;
    cpy_r_r18 = (CPyPtr)&((PyListObject *)cpy_r_r16)->ob_item;
    cpy_r_r19 = *(CPyPtr *)cpy_r_r18;
    CPy_INCREF(cpy_r_r17);
    *(PyObject * *)cpy_r_r19 = cpy_r_r17;
    cpy_r_r20 = CPY_GET_ATTR(cpy_r_signature, CPyType_types___FunctionLike, 18, mypy___types___FunctionLikeObject, PyObject *); /* items */
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 145, CPyStatic_typeops___globals);
        goto CPyL53;
    }
CPyL15: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    CPy_DECREF(cpy_r_r20);
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = CPySequence_Multiply(cpy_r_r16, cpy_r_r23);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 145, CPyStatic_typeops___globals);
        goto CPyL49;
    }
    cpy_r_orig_self_types = cpy_r_r24;
CPyL17: ;
    cpy_r_r25 = CPyDef_typeops___bind_self(cpy_r_signature, cpy_r_default_self, cpy_r_is_new);
    CPy_DECREF(cpy_r_default_self);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 157, CPyStatic_typeops___globals);
        goto CPyL54;
    }
    cpy_r_signature = cpy_r_r25;
    cpy_r_r26 = CPyDef_typeops___map_type_from_supertype(cpy_r_signature, cpy_r_info, cpy_r_def_info);
    CPy_DECREF(cpy_r_signature);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 158, CPyStatic_typeops___globals);
        goto CPyL54;
    }
    if (likely((Py_TYPE(cpy_r_r26) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r26) == CPyType_types___Overloaded)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "type_object_type_from_function", 158, CPyStatic_typeops___globals, "mypy.types.FunctionLike", cpy_r_r26);
        goto CPyL54;
    }
    cpy_r_signature = cpy_r_r27;
    cpy_r_r28 = Py_None;
    CPy_INCREF(cpy_r_r28);
    cpy_r_special_sig = cpy_r_r28;
    cpy_r_r29 = CPY_GET_ATTR(cpy_r_def_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 161, CPyStatic_typeops___globals);
        goto CPyL55;
    }
CPyL21: ;
    cpy_r_r30 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r31 = PyUnicode_Compare(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r32 = cpy_r_r31 == -1;
    if (!cpy_r_r32) goto CPyL24;
    cpy_r_r33 = PyErr_Occurred();
    cpy_r_r34 = cpy_r_r33 != NULL;
    if (!cpy_r_r34) goto CPyL24;
    cpy_r_r35 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 161, CPyStatic_typeops___globals);
        goto CPyL55;
    }
CPyL24: ;
    cpy_r_r36 = cpy_r_r31 == 0;
    if (cpy_r_r36) {
        goto CPyL56;
    } else
        goto CPyL26;
CPyL25: ;
    cpy_r_r37 = CPyStatics[1164]; /* 'dict' */
    CPy_INCREF(cpy_r_r37);
    cpy_r_special_sig = cpy_r_r37;
CPyL26: ;
    cpy_r_r38 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r39 = (CPyPtr)&((PyObject *)cpy_r_signature)->ob_type;
    cpy_r_r40 = *(PyObject * *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 == cpy_r_r38;
    if (!cpy_r_r41) goto CPyL32;
    if (likely(Py_TYPE(cpy_r_signature) == CPyType_types___CallableType))
        cpy_r_r42 = cpy_r_signature;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "type_object_type_from_function", 166, CPyStatic_typeops___globals, "mypy.types.CallableType", cpy_r_signature);
        goto CPyL57;
    }
    cpy_r_r43 = CPyList_GetItemShort(cpy_r_orig_self_types, 0);
    CPy_DECREF(cpy_r_orig_self_types);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 166, CPyStatic_typeops___globals);
        goto CPyL58;
    }
    if (PyObject_TypeCheck(cpy_r_r43, CPyType_types___Type))
        cpy_r_r44 = cpy_r_r43;
    else {
        cpy_r_r44 = NULL;
    }
    if (cpy_r_r44 != NULL) goto __LL7723;
    if (cpy_r_r43 == Py_None)
        cpy_r_r44 = cpy_r_r43;
    else {
        cpy_r_r44 = NULL;
    }
    if (cpy_r_r44 != NULL) goto __LL7723;
    CPy_TypeErrorTraceback("mypy/typeops.py", "type_object_type_from_function", 166, CPyStatic_typeops___globals, "mypy.types.Type or None", cpy_r_r43);
    goto CPyL58;
__LL7723: ;
    cpy_r_r45 = CPyDef_typeops___class_callable(cpy_r_r42, cpy_r_info, cpy_r_fallback, cpy_r_special_sig, cpy_r_is_new, cpy_r_r44);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_special_sig);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 166, CPyStatic_typeops___globals);
        goto CPyL48;
    }
    return cpy_r_r45;
CPyL32: ;
    cpy_r_r46 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r47 = (CPyPtr)&((PyObject *)cpy_r_signature)->ob_type;
    cpy_r_r48 = *(PyObject * *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 == cpy_r_r46;
    if (cpy_r_r49) {
        goto CPyL35;
    } else
        goto CPyL59;
CPyL33: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r50 = 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 169, CPyStatic_typeops___globals);
        goto CPyL48;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r51 = PyList_New(0);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 170, CPyStatic_typeops___globals);
        goto CPyL55;
    }
    cpy_r_items = cpy_r_r51;
    if (likely(Py_TYPE(cpy_r_signature) == CPyType_types___Overloaded))
        cpy_r_r52 = cpy_r_signature;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "type_object_type_from_function", 171, CPyStatic_typeops___globals, "mypy.types.Overloaded", cpy_r_signature);
        goto CPyL60;
    }
    cpy_r_r53 = CPY_GET_ATTR(cpy_r_r52, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 171, CPyStatic_typeops___globals);
        goto CPyL60;
    }
CPyL38: ;
    cpy_r_r54 = 0;
    cpy_r_r55 = 0;
CPyL39: ;
    cpy_r_r56 = (CPyPtr)&((PyVarObject *)cpy_r_r53)->ob_size;
    cpy_r_r57 = *(int64_t *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 << 1;
    cpy_r_r59 = (Py_ssize_t)cpy_r_r54 < (Py_ssize_t)cpy_r_r58;
    if (!cpy_r_r59) goto CPyL61;
    cpy_r_r60 = (CPyPtr)&((PyVarObject *)cpy_r_orig_self_types)->ob_size;
    cpy_r_r61 = *(int64_t *)cpy_r_r60;
    cpy_r_r62 = cpy_r_r61 << 1;
    cpy_r_r63 = (Py_ssize_t)cpy_r_r55 < (Py_ssize_t)cpy_r_r62;
    if (!cpy_r_r63) goto CPyL61;
    cpy_r_r64 = CPyList_GetItemUnsafe(cpy_r_r53, cpy_r_r54);
    if (likely(Py_TYPE(cpy_r_r64) == CPyType_types___CallableType))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "type_object_type_from_function", 171, CPyStatic_typeops___globals, "mypy.types.CallableType", cpy_r_r64);
        goto CPyL62;
    }
    cpy_r_item = cpy_r_r65;
    cpy_r_r66 = CPyList_GetItemUnsafe(cpy_r_orig_self_types, cpy_r_r55);
    if (PyObject_TypeCheck(cpy_r_r66, CPyType_types___Type))
        cpy_r_r67 = cpy_r_r66;
    else {
        cpy_r_r67 = NULL;
    }
    if (cpy_r_r67 != NULL) goto __LL7724;
    if (cpy_r_r66 == Py_None)
        cpy_r_r67 = cpy_r_r66;
    else {
        cpy_r_r67 = NULL;
    }
    if (cpy_r_r67 != NULL) goto __LL7724;
    CPy_TypeErrorTraceback("mypy/typeops.py", "type_object_type_from_function", 171, CPyStatic_typeops___globals, "mypy.types.Type or None", cpy_r_r66);
    goto CPyL63;
__LL7724: ;
    cpy_r_orig_self = cpy_r_r67;
    cpy_r_r68 = CPyDef_typeops___class_callable(cpy_r_item, cpy_r_info, cpy_r_fallback, cpy_r_special_sig, cpy_r_is_new, cpy_r_orig_self);
    CPy_DECREF(cpy_r_item);
    CPy_DECREF(cpy_r_orig_self);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 172, CPyStatic_typeops___globals);
        goto CPyL62;
    }
    cpy_r_r69 = PyList_Append(cpy_r_items, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 172, CPyStatic_typeops___globals);
        goto CPyL62;
    }
    cpy_r_r71 = cpy_r_r54 + 2;
    cpy_r_r54 = cpy_r_r71;
    cpy_r_r72 = cpy_r_r55 + 2;
    cpy_r_r55 = cpy_r_r72;
    goto CPyL39;
CPyL46: ;
    cpy_r_r73 = CPyDef_types___Overloaded(cpy_r_items);
    CPy_DECREF(cpy_r_items);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 173, CPyStatic_typeops___globals);
        goto CPyL48;
    }
    return cpy_r_r73;
CPyL48: ;
    cpy_r_r74 = NULL;
    return cpy_r_r74;
CPyL49: ;
    CPy_DecRef(cpy_r_default_self);
    goto CPyL48;
CPyL50: ;
    CPy_DecRef(cpy_r_default_self);
    CPy_DecRef(cpy_r_r2);
    goto CPyL48;
CPyL51: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL12;
CPyL52: ;
    CPy_DecRef(cpy_r_default_self);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL48;
CPyL53: ;
    CPy_DecRef(cpy_r_default_self);
    CPy_DecRef(cpy_r_r16);
    goto CPyL48;
CPyL54: ;
    CPy_DecRef(cpy_r_orig_self_types);
    goto CPyL48;
CPyL55: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_orig_self_types);
    CPy_DecRef(cpy_r_special_sig);
    goto CPyL48;
CPyL56: ;
    CPy_DECREF(cpy_r_special_sig);
    goto CPyL25;
CPyL57: ;
    CPy_DecRef(cpy_r_orig_self_types);
    CPy_DecRef(cpy_r_special_sig);
    goto CPyL48;
CPyL58: ;
    CPy_DecRef(cpy_r_special_sig);
    CPy_DecRef(cpy_r_r42);
    goto CPyL48;
CPyL59: ;
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_orig_self_types);
    CPy_DECREF(cpy_r_special_sig);
    goto CPyL33;
CPyL60: ;
    CPy_DecRef(cpy_r_orig_self_types);
    CPy_DecRef(cpy_r_special_sig);
    CPy_DecRef(cpy_r_items);
    goto CPyL48;
CPyL61: ;
    CPy_DECREF(cpy_r_orig_self_types);
    CPy_DECREF(cpy_r_special_sig);
    CPy_DECREF(cpy_r_r53);
    goto CPyL46;
CPyL62: ;
    CPy_DecRef(cpy_r_orig_self_types);
    CPy_DecRef(cpy_r_special_sig);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r53);
    goto CPyL48;
CPyL63: ;
    CPy_DecRef(cpy_r_orig_self_types);
    CPy_DecRef(cpy_r_special_sig);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_item);
    goto CPyL48;
}

PyObject *CPyPy_typeops___type_object_type_from_function(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"signature", "info", "def_info", "fallback", "is_new", 0};
    static CPyArg_Parser parser = {"OOOOO:type_object_type_from_function", kwlist, 0};
    PyObject *obj_signature;
    PyObject *obj_info;
    PyObject *obj_def_info;
    PyObject *obj_fallback;
    PyObject *obj_is_new;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_signature, &obj_info, &obj_def_info, &obj_fallback, &obj_is_new)) {
        return NULL;
    }
    PyObject *arg_signature;
    if (likely((Py_TYPE(obj_signature) == CPyType_types___CallableType) || (Py_TYPE(obj_signature) == CPyType_types___Overloaded)))
        arg_signature = obj_signature;
    else {
        CPy_TypeError("mypy.types.FunctionLike", obj_signature); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_def_info;
    if (likely((Py_TYPE(obj_def_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_def_info) == CPyType_nodes___TypeInfo)))
        arg_def_info = obj_def_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_def_info); 
        goto fail;
    }
    PyObject *arg_fallback;
    if (likely(Py_TYPE(obj_fallback) == CPyType_types___Instance))
        arg_fallback = obj_fallback;
    else {
        CPy_TypeError("mypy.types.Instance", obj_fallback); 
        goto fail;
    }
    char arg_is_new;
    if (unlikely(!PyBool_Check(obj_is_new))) {
        CPy_TypeError("bool", obj_is_new); goto fail;
    } else
        arg_is_new = obj_is_new == Py_True;
    PyObject *retval = CPyDef_typeops___type_object_type_from_function(arg_signature, arg_info, arg_def_info, arg_fallback, arg_is_new);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "type_object_type_from_function", 133, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___class_callable(PyObject *cpy_r_init_type, PyObject *cpy_r_info, PyObject *cpy_r_type_type, PyObject *cpy_r_special_sig, char cpy_r_is_new, PyObject *cpy_r_orig_self_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_variables;
    PyObject *cpy_r_r2;
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
    PyObject *cpy_r_init_ret_type;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_default_ret_type;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_explicit_type;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_ret_type;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_callable_type;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r67;
    if (cpy_r_orig_self_type != NULL) goto CPyL38;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_orig_self_type = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "class_callable", 185, CPyStatic_typeops___globals);
        goto CPyL39;
    }
    cpy_r_variables = cpy_r_r1;
    cpy_r_r2 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_defn;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "class_callable", "TypeInfo", "defn", 186, CPyStatic_typeops___globals);
        goto CPyL40;
    }
CPyL4: ;
    cpy_r_r3 = ((mypy___nodes___ClassDefObject *)cpy_r_r2)->_type_vars;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyList_Extend(cpy_r_variables, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "class_callable", 186, CPyStatic_typeops___globals);
        goto CPyL40;
    } else
        goto CPyL41;
CPyL5: ;
    cpy_r_r5 = ((mypy___types___CallableTypeObject *)cpy_r_init_type)->_variables;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyList_Extend(cpy_r_variables, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "class_callable", 187, CPyStatic_typeops___globals);
        goto CPyL40;
    } else
        goto CPyL42;
CPyL6: ;
    cpy_r_r7 = CPyStatics[9078]; /* ('is_subtype',) */
    cpy_r_r8 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r9 = CPyStatic_typeops___globals;
    cpy_r_r10 = CPyImport_ImportFromMany(cpy_r_r8, cpy_r_r7, cpy_r_r7, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "class_callable", 189, CPyStatic_typeops___globals);
        goto CPyL40;
    }
    CPyModule_mypy___subtypes = cpy_r_r10;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r11 = ((mypy___types___CallableTypeObject *)cpy_r_init_type)->_ret_type;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_types___get_proper_type(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "class_callable", 191, CPyStatic_typeops___globals);
        goto CPyL40;
    }
    if (likely(cpy_r_r12 != Py_None))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "class_callable", 191, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r12);
        goto CPyL40;
    }
    cpy_r_init_ret_type = cpy_r_r13;
    cpy_r_r14 = CPyDef_types___get_proper_type(cpy_r_orig_self_type);
    CPy_DECREF(cpy_r_orig_self_type);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "class_callable", 192, CPyStatic_typeops___globals);
        goto CPyL43;
    }
    cpy_r_orig_self_type = cpy_r_r14;
    cpy_r_r15 = CPyDef_typevars___fill_typevars(cpy_r_info);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "class_callable", 193, CPyStatic_typeops___globals);
        goto CPyL44;
    }
    cpy_r_default_ret_type = cpy_r_r15;
    if (cpy_r_is_new) {
        goto CPyL45;
    } else
        goto CPyL46;
CPyL12: ;
    cpy_r_r16 = cpy_r_init_ret_type;
    goto CPyL15;
CPyL13: ;
    if (PyObject_TypeCheck(cpy_r_orig_self_type, CPyType_types___ProperType))
        cpy_r_r17 = cpy_r_orig_self_type;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL7725;
    if (cpy_r_orig_self_type == Py_None)
        cpy_r_r17 = cpy_r_orig_self_type;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL7725;
    CPy_TypeErrorTraceback("mypy/typeops.py", "class_callable", 194, CPyStatic_typeops___globals, "mypy.types.ProperType or None", cpy_r_orig_self_type);
    goto CPyL47;
__LL7725: ;
    cpy_r_r16 = cpy_r_r17;
CPyL15: ;
    cpy_r_explicit_type = cpy_r_r16;
    cpy_r_r18 = (PyObject *)CPyType_types___Instance;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_explicit_type)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL17;
    cpy_r_r22 = cpy_r_r21;
    goto CPyL18;
CPyL17: ;
    cpy_r_r23 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_explicit_type)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    cpy_r_r22 = cpy_r_r26;
CPyL18: ;
    if (!cpy_r_r22) goto CPyL20;
    cpy_r_r27 = cpy_r_r22;
    goto CPyL21;
CPyL20: ;
    cpy_r_r28 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_explicit_type)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    cpy_r_r27 = cpy_r_r31;
CPyL21: ;
    if (!cpy_r_r27) goto CPyL48;
    cpy_r_r32 = (PyObject *)CPyType_types___Instance;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_default_ret_type)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (!cpy_r_r35) goto CPyL48;
    if (likely(Py_TYPE(cpy_r_default_ret_type) == CPyType_types___Instance))
        cpy_r_r36 = cpy_r_default_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "class_callable", 200, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_default_ret_type);
        goto CPyL49;
    }
    cpy_r_r37 = ((mypy___types___InstanceObject *)cpy_r_r36)->_type;
    cpy_r_r38 = ((mypy___nodes___TypeInfoObject *)cpy_r_r37)->_is_protocol;
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AttributeError("mypy/typeops.py", "class_callable", "TypeInfo", "is_protocol", 200, CPyStatic_typeops___globals);
        goto CPyL49;
    }
CPyL25: ;
    if (cpy_r_r38) goto CPyL48;
CPyL26: ;
    CPy_INCREF(cpy_r_explicit_type);
    if (Py_TYPE(cpy_r_explicit_type) == CPyType_types___Instance)
        cpy_r_r39 = cpy_r_explicit_type;
    else {
        cpy_r_r39 = NULL;
    }
    if (cpy_r_r39 != NULL) goto __LL7726;
    if (Py_TYPE(cpy_r_explicit_type) == CPyType_types___TupleType)
        cpy_r_r39 = cpy_r_explicit_type;
    else {
        cpy_r_r39 = NULL;
    }
    if (cpy_r_r39 != NULL) goto __LL7726;
    if (Py_TYPE(cpy_r_explicit_type) == CPyType_types___UninhabitedType)
        cpy_r_r39 = cpy_r_explicit_type;
    else {
        cpy_r_r39 = NULL;
    }
    if (cpy_r_r39 != NULL) goto __LL7726;
    CPy_TypeErrorTraceback("mypy/typeops.py", "class_callable", 203, CPyStatic_typeops___globals, "union[mypy.types.Instance, mypy.types.TupleType, mypy.types.UninhabitedType]", cpy_r_explicit_type);
    goto CPyL49;
__LL7726: ;
    CPy_INCREF(cpy_r_default_ret_type);
    if (likely(Py_TYPE(cpy_r_default_ret_type) == CPyType_types___Instance))
        cpy_r_r40 = cpy_r_default_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "class_callable", 203, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_default_ret_type);
        goto CPyL50;
    }
    cpy_r_r41 = NULL;
    cpy_r_r42 = 2;
    cpy_r_r43 = 2;
    cpy_r_r44 = 2;
    cpy_r_r45 = 2;
    cpy_r_r46 = NULL;
    cpy_r_r47 = CPyDef_subtypes___is_subtype(cpy_r_r39, cpy_r_r40, cpy_r_r41, 1, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "class_callable", 203, CPyStatic_typeops___globals);
        goto CPyL49;
    }
    if (cpy_r_r47) {
        goto CPyL51;
    } else
        goto CPyL48;
CPyL30: ;
    if (Py_TYPE(cpy_r_explicit_type) == CPyType_types___Instance)
        cpy_r_r48 = cpy_r_explicit_type;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL7727;
    if (Py_TYPE(cpy_r_explicit_type) == CPyType_types___TupleType)
        cpy_r_r48 = cpy_r_explicit_type;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL7727;
    if (Py_TYPE(cpy_r_explicit_type) == CPyType_types___UninhabitedType)
        cpy_r_r48 = cpy_r_explicit_type;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL7727;
    CPy_TypeErrorTraceback("mypy/typeops.py", "class_callable", 205, CPyStatic_typeops___globals, "union[mypy.types.Instance, mypy.types.TupleType, mypy.types.UninhabitedType]", cpy_r_explicit_type);
    goto CPyL52;
__LL7727: ;
    cpy_r_ret_type = cpy_r_r48;
    goto CPyL33;
CPyL32: ;
    cpy_r_ret_type = cpy_r_default_ret_type;
CPyL33: ;
    cpy_r_r49 = NULL;
    cpy_r_r50 = NULL;
    cpy_r_r51 = NULL;
    cpy_r_r52 = Py_None;
    cpy_r_r53 = NULL;
    cpy_r_r54 = CPY_INT_TAG;
    cpy_r_r55 = CPY_INT_TAG;
    cpy_r_r56 = NULL;
    cpy_r_r57 = NULL;
    cpy_r_r58 = NULL;
    cpy_r_r59 = NULL;
    cpy_r_r60 = NULL;
    cpy_r_r61 = NULL;
    cpy_r_r62 = NULL;
    cpy_r_r63 = NULL;
    cpy_r_r64 = CPyDef_types___CallableType___copy_modified(cpy_r_init_type, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_ret_type, cpy_r_type_type, cpy_r_r52, cpy_r_r53, cpy_r_variables, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_special_sig, cpy_r_r58, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_ret_type);
    CPy_DECREF(cpy_r_variables);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "class_callable", 209, CPyStatic_typeops___globals);
        goto CPyL37;
    }
    cpy_r_callable_type = cpy_r_r64;
    cpy_r_r65 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "class_callable", 216, CPyStatic_typeops___globals);
        goto CPyL53;
    }
CPyL35: ;
    cpy_r_r66 = CPyDef_types___CallableType___with_name(cpy_r_callable_type, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_callable_type);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "class_callable", 216, CPyStatic_typeops___globals);
        goto CPyL37;
    }
    cpy_r_c = cpy_r_r66;
    return cpy_r_c;
CPyL37: ;
    cpy_r_r67 = NULL;
    return cpy_r_r67;
CPyL38: ;
    CPy_INCREF(cpy_r_orig_self_type);
    goto CPyL2;
CPyL39: ;
    CPy_DecRef(cpy_r_orig_self_type);
    goto CPyL37;
CPyL40: ;
    CPy_DecRef(cpy_r_orig_self_type);
    CPy_DecRef(cpy_r_variables);
    goto CPyL37;
CPyL41: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL5;
CPyL42: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL6;
CPyL43: ;
    CPy_DecRef(cpy_r_variables);
    CPy_DecRef(cpy_r_init_ret_type);
    goto CPyL37;
CPyL44: ;
    CPy_DecRef(cpy_r_orig_self_type);
    CPy_DecRef(cpy_r_variables);
    CPy_DecRef(cpy_r_init_ret_type);
    goto CPyL37;
CPyL45: ;
    CPy_DECREF(cpy_r_orig_self_type);
    goto CPyL12;
CPyL46: ;
    CPy_DECREF(cpy_r_init_ret_type);
    goto CPyL13;
CPyL47: ;
    CPy_DecRef(cpy_r_variables);
    CPy_DecRef(cpy_r_default_ret_type);
    goto CPyL37;
CPyL48: ;
    CPy_DECREF(cpy_r_explicit_type);
    goto CPyL32;
CPyL49: ;
    CPy_DecRef(cpy_r_variables);
    CPy_DecRef(cpy_r_default_ret_type);
    CPy_DecRef(cpy_r_explicit_type);
    goto CPyL37;
CPyL50: ;
    CPy_DecRef(cpy_r_variables);
    CPy_DecRef(cpy_r_default_ret_type);
    CPy_DecRef(cpy_r_explicit_type);
    CPy_DecRef(cpy_r_r39);
    goto CPyL37;
CPyL51: ;
    CPy_DECREF(cpy_r_default_ret_type);
    goto CPyL30;
CPyL52: ;
    CPy_DecRef(cpy_r_variables);
    goto CPyL37;
CPyL53: ;
    CPy_DecRef(cpy_r_callable_type);
    goto CPyL37;
}

PyObject *CPyPy_typeops___class_callable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"init_type", "info", "type_type", "special_sig", "is_new", "orig_self_type", 0};
    static CPyArg_Parser parser = {"OOOOO|O:class_callable", kwlist, 0};
    PyObject *obj_init_type;
    PyObject *obj_info;
    PyObject *obj_type_type;
    PyObject *obj_special_sig;
    PyObject *obj_is_new;
    PyObject *obj_orig_self_type = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_init_type, &obj_info, &obj_type_type, &obj_special_sig, &obj_is_new, &obj_orig_self_type)) {
        return NULL;
    }
    PyObject *arg_init_type;
    if (likely(Py_TYPE(obj_init_type) == CPyType_types___CallableType))
        arg_init_type = obj_init_type;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_init_type); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_type_type;
    if (likely(Py_TYPE(obj_type_type) == CPyType_types___Instance))
        arg_type_type = obj_type_type;
    else {
        CPy_TypeError("mypy.types.Instance", obj_type_type); 
        goto fail;
    }
    PyObject *arg_special_sig;
    if (PyUnicode_Check(obj_special_sig))
        arg_special_sig = obj_special_sig;
    else {
        arg_special_sig = NULL;
    }
    if (arg_special_sig != NULL) goto __LL7728;
    if (obj_special_sig == Py_None)
        arg_special_sig = obj_special_sig;
    else {
        arg_special_sig = NULL;
    }
    if (arg_special_sig != NULL) goto __LL7728;
    CPy_TypeError("str or None", obj_special_sig); 
    goto fail;
__LL7728: ;
    char arg_is_new;
    if (unlikely(!PyBool_Check(obj_is_new))) {
        CPy_TypeError("bool", obj_is_new); goto fail;
    } else
        arg_is_new = obj_is_new == Py_True;
    PyObject *arg_orig_self_type;
    if (obj_orig_self_type == NULL) {
        arg_orig_self_type = NULL;
        goto __LL7729;
    }
    if (PyObject_TypeCheck(obj_orig_self_type, CPyType_types___Type))
        arg_orig_self_type = obj_orig_self_type;
    else {
        arg_orig_self_type = NULL;
    }
    if (arg_orig_self_type != NULL) goto __LL7729;
    if (obj_orig_self_type == Py_None)
        arg_orig_self_type = obj_orig_self_type;
    else {
        arg_orig_self_type = NULL;
    }
    if (arg_orig_self_type != NULL) goto __LL7729;
    CPy_TypeError("mypy.types.Type or None", obj_orig_self_type); 
    goto fail;
__LL7729: ;
    PyObject *retval = CPyDef_typeops___class_callable(arg_init_type, arg_info, arg_type_type, arg_special_sig, arg_is_new, arg_orig_self_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "class_callable", 176, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___map_type_from_supertype(PyObject *cpy_r_typ, PyObject *cpy_r_sub_info, PyObject *cpy_r_super_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_inst_type;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPyDef_typevars___fill_typevars(cpy_r_sub_info);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "map_type_from_supertype", 233, CPyStatic_typeops___globals);
        goto CPyL10;
    }
    cpy_r_inst_type = cpy_r_r0;
    cpy_r_r1 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_inst_type)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL5;
    if (likely(Py_TYPE(cpy_r_inst_type) == CPyType_types___TupleType))
        cpy_r_r5 = cpy_r_inst_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "map_type_from_supertype", 235, CPyStatic_typeops___globals, "mypy.types.TupleType", cpy_r_inst_type);
        goto CPyL10;
    }
    cpy_r_r6 = CPyDef_typeops___tuple_fallback(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "map_type_from_supertype", 235, CPyStatic_typeops___globals);
        goto CPyL10;
    }
    cpy_r_inst_type = cpy_r_r6;
CPyL5: ;
    if (likely(Py_TYPE(cpy_r_inst_type) == CPyType_types___Instance))
        cpy_r_r7 = cpy_r_inst_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "map_type_from_supertype", 240, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_inst_type);
        goto CPyL10;
    }
    cpy_r_r8 = CPyDef_maptype___map_instance_to_supertype(cpy_r_r7, cpy_r_super_info);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "map_type_from_supertype", 240, CPyStatic_typeops___globals);
        goto CPyL10;
    }
    cpy_r_inst_type = cpy_r_r8;
    if (likely(Py_TYPE(cpy_r_inst_type) == CPyType_types___Instance))
        cpy_r_r9 = cpy_r_inst_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "map_type_from_supertype", 246, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_inst_type);
        goto CPyL10;
    }
    cpy_r_r10 = CPyDef_expandtype___expand_type_by_instance(cpy_r_typ, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "map_type_from_supertype", 246, CPyStatic_typeops___globals);
        goto CPyL10;
    }
    return cpy_r_r10;
CPyL10: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
}

PyObject *CPyPy_typeops___map_type_from_supertype(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", "sub_info", "super_info", 0};
    static CPyArg_Parser parser = {"OOO:map_type_from_supertype", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_sub_info;
    PyObject *obj_super_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_sub_info, &obj_super_info)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_sub_info;
    if (likely((Py_TYPE(obj_sub_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_sub_info) == CPyType_nodes___TypeInfo)))
        arg_sub_info = obj_sub_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_sub_info); 
        goto fail;
    }
    PyObject *arg_super_info;
    if (likely((Py_TYPE(obj_super_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_super_info) == CPyType_nodes___TypeInfo)))
        arg_super_info = obj_super_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_super_info); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___map_type_from_supertype(arg_typ, arg_sub_info, arg_super_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "map_type_from_supertype", 220, CPyStatic_typeops___globals);
    return NULL;
}

char CPyDef_typeops___supported_self_type(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL4;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeType))
        cpy_r_r4 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "supported_self_type", 256, CPyStatic_typeops___globals, "mypy.types.TypeType", cpy_r_typ);
        goto CPyL16;
    }
    cpy_r_r5 = ((mypy___types___TypeTypeObject *)cpy_r_r4)->_item;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_typeops___supported_self_type(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "supported_self_type", 256, CPyStatic_typeops___globals);
        goto CPyL16;
    }
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL6;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL15;
CPyL6: ;
    cpy_r_r12 = (PyObject *)CPyType_types___Instance;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (cpy_r_r15) goto CPyL8;
    cpy_r_r16 = cpy_r_r15;
    goto CPyL14;
CPyL8: ;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r17 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "supported_self_type", 258, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL16;
    }
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r18 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "supported_self_type", 258, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL17;
    }
    cpy_r_r19 = ((mypy___types___InstanceObject *)cpy_r_r18)->_type;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyDef_typevars___fill_typevars(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "supported_self_type", 258, CPyStatic_typeops___globals);
        goto CPyL17;
    }
    cpy_r_r21 = PyObject_RichCompare(cpy_r_r17, cpy_r_r20, 3);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "supported_self_type", 258, CPyStatic_typeops___globals);
        goto CPyL16;
    }
    if (unlikely(!PyBool_Check(cpy_r_r21))) {
        CPy_TypeError("bool", cpy_r_r21); cpy_r_r22 = 2;
    } else
        cpy_r_r22 = cpy_r_r21 == Py_True;
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "supported_self_type", 258, CPyStatic_typeops___globals);
        goto CPyL16;
    }
    cpy_r_r16 = cpy_r_r22;
CPyL14: ;
    cpy_r_r11 = cpy_r_r16;
CPyL15: ;
    return cpy_r_r11;
CPyL16: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL17: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL16;
}

PyObject *CPyPy_typeops___supported_self_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:supported_self_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___ProperType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_typeops___supported_self_type(arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "supported_self_type", 249, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___expand_bind_self_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_typeops___expand_bind_self_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_typeops___expand_bind_self_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "__get__", -1, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___expand_bind_self_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_target) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_expand;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = ((mypy___typeops___expand_bind_self_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "expand", "expand_bind_self_obj", "__mypyc_env__", 333, CPyStatic_typeops___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___typeops___bind_self_envObject *)cpy_r_r0)->_expand;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "expand", "bind_self_env", "expand", -1, CPyStatic_typeops___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_expand = cpy_r_r1;
    CPy_DECREF(cpy_r_expand);
    cpy_r_r2 = PyDict_New();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "expand", 334, CPyStatic_typeops___globals);
        goto CPyL17;
    }
    cpy_r_r3 = ((mypy___typeops___bind_self_envObject *)cpy_r_r0)->_ids;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "expand", "bind_self_env", "ids", 334, CPyStatic_typeops___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = 0;
CPyL5: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL19;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_types___TypeVarId))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "expand", 334, CPyStatic_typeops___globals, "mypy.types.TypeVarId", cpy_r_r9);
        goto CPyL20;
    }
    cpy_r_id = cpy_r_r10;
    cpy_r_r11 = ((mypy___typeops___bind_self_envObject *)cpy_r_r0)->_to_apply;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "expand", "bind_self_env", "to_apply", 334, CPyStatic_typeops___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r11);
CPyL8: ;
    cpy_r_r12 = ((mypy___typeops___bind_self_envObject *)cpy_r_r0)->_all_ids;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "expand", "bind_self_env", "all_ids", 334, CPyStatic_typeops___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r12);
CPyL9: ;
    cpy_r_r13 = CPyList_Index(cpy_r_r12, cpy_r_id);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/typeops.py", "expand", 334, CPyStatic_typeops___globals);
        goto CPyL22;
    }
    cpy_r_r14 = CPyList_GetItem(cpy_r_r11, cpy_r_r13);
    CPy_DECREF(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "expand", 334, CPyStatic_typeops___globals);
        goto CPyL21;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_types___Type)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "expand", 334, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r14);
        goto CPyL21;
    }
    cpy_r_r16 = CPyDict_SetItem(cpy_r_r2, cpy_r_id, cpy_r_r15);
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/typeops.py", "expand", 334, CPyStatic_typeops___globals);
        goto CPyL20;
    }
    cpy_r_r18 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r18;
    goto CPyL5;
CPyL14: ;
    cpy_r_r19 = CPyDef_expandtype___expand_type(cpy_r_target, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "expand", 334, CPyStatic_typeops___globals);
        goto CPyL16;
    }
    return cpy_r_r19;
CPyL16: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL16;
CPyL19: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r3);
    goto CPyL14;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_id);
    goto CPyL16;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r11);
    goto CPyL16;
}

PyObject *CPyPy_typeops___expand_bind_self_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"target", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_target;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_target)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_target;
    if (likely(PyObject_TypeCheck(obj_target, CPyType_types___Type)))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypy.types.Type", obj_target); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___expand_bind_self_obj_____call__(arg___mypyc_self__, arg_target);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "expand", 333, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___bind_self(PyObject *cpy_r_method, PyObject *cpy_r_original_type, char cpy_r_is_classmethod) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_func;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_self_param_type;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_variables;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
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
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_typeargs;
    char cpy_r_r66;
    CPyTagged cpy_r_r67;
    CPyPtr cpy_r_r68;
    int64_t cpy_r_r69;
    CPyTagged cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyPtr cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyPtr cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyPtr cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    CPyPtr cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    CPyTagged cpy_r_r96;
    CPyTagged cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    CPyTagged cpy_r_r102;
    CPyPtr cpy_r_r103;
    int64_t cpy_r_r104;
    CPyTagged cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_tid;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    CPyTagged cpy_r_r111;
    CPyPtr cpy_r_r112;
    int64_t cpy_r_r113;
    CPyTagged cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_t_2;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    CPyTagged cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    CPyTagged cpy_r_r124;
    char cpy_r_r125;
    CPyPtr cpy_r_r126;
    int64_t cpy_r_r127;
    PyObject *cpy_r_r128;
    CPyTagged cpy_r_r129;
    CPyPtr cpy_r_r130;
    int64_t cpy_r_r131;
    CPyTagged cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_t_3;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    CPyTagged cpy_r_r141;
    CPyTagged cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    CPyTagged cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
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
    PyObject *cpy_r_x;
    PyObject *cpy_r_r163;
    PyObject **cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    CPyTagged cpy_r_r169;
    PyObject *cpy_r_arg_types;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject **cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_ret_type;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    int32_t cpy_r_r183;
    char cpy_r_r184;
    char cpy_r_r185;
    char cpy_r_r186;
    int32_t cpy_r_r187;
    char cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    CPyPtr cpy_r_r197;
    PyObject *cpy_r_r198;
    char cpy_r_r199;
    PyObject *cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    CPyTagged cpy_r_r204;
    CPyTagged cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    CPyPtr cpy_r_r215;
    CPyPtr cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    CPyTagged cpy_r_r220;
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
    PyObject *cpy_r_res;
    PyObject *cpy_r_r231;
    if (cpy_r_original_type != NULL) goto CPyL150;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_original_type = cpy_r_r0;
CPyL2: ;
    if (cpy_r_is_classmethod != 2) goto CPyL4;
    cpy_r_is_classmethod = 0;
CPyL4: ;
    cpy_r_r1 = CPyDef_typeops___bind_self_env();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 265, CPyStatic_typeops___globals);
        goto CPyL151;
    }
    cpy_r_r2 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_method)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL152;
    } else
        goto CPyL18;
CPyL6: ;
    CPy_INCREF(cpy_r_method);
    if (likely(Py_TYPE(cpy_r_method) == CPyType_types___Overloaded))
        cpy_r_r6 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 290, CPyStatic_typeops___globals, "mypy.types.Overloaded", cpy_r_method);
        goto CPyL151;
    }
    cpy_r_r7 = CPY_GET_ATTR(cpy_r_r6, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 290, CPyStatic_typeops___globals);
        goto CPyL151;
    }
CPyL8: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = PyList_New(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 290, CPyStatic_typeops___globals);
        goto CPyL153;
    }
    cpy_r_r11 = 0;
CPyL10: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL154;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r11);
    if (likely(Py_TYPE(cpy_r_r16) == CPyType_types___CallableType))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 290, CPyStatic_typeops___globals, "mypy.types.CallableType", cpy_r_r16);
        goto CPyL155;
    }
    cpy_r_c = cpy_r_r17;
    cpy_r_r18 = CPyDef_typeops___bind_self(cpy_r_c, cpy_r_original_type, cpy_r_is_classmethod);
    CPy_DECREF(cpy_r_c);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 290, CPyStatic_typeops___globals);
        goto CPyL155;
    }
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_types___CallableType))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 290, CPyStatic_typeops___globals, "mypy.types.CallableType", cpy_r_r18);
        goto CPyL155;
    }
    cpy_r_r20 = CPyList_SetItemUnsafe(cpy_r_r10, cpy_r_r11, cpy_r_r19);
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 290, CPyStatic_typeops___globals);
        goto CPyL155;
    }
    cpy_r_r21 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r21;
    goto CPyL10;
CPyL16: ;
    cpy_r_r22 = CPyDef_types___Overloaded(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 290, CPyStatic_typeops___globals);
        goto CPyL149;
    }
    return cpy_r_r22;
CPyL18: ;
    cpy_r_r23 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_method)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (cpy_r_r26) {
        goto CPyL21;
    } else
        goto CPyL156;
CPyL19: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 292, CPyStatic_typeops___globals);
        goto CPyL149;
    }
    CPy_Unreachable();
CPyL21: ;
    CPy_INCREF(cpy_r_method);
    if (likely(Py_TYPE(cpy_r_method) == CPyType_types___CallableType))
        cpy_r_r28 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 293, CPyStatic_typeops___globals, "mypy.types.CallableType", cpy_r_method);
        goto CPyL157;
    }
    cpy_r_func = cpy_r_r28;
    cpy_r_r29 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_arg_types;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r29)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    CPy_DECREF(cpy_r_r29);
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = cpy_r_r32 != 0;
    if (cpy_r_r33) {
        goto CPyL24;
    } else
        goto CPyL158;
CPyL23: ;
    return cpy_r_func;
CPyL24: ;
    cpy_r_r34 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_arg_kinds;
    cpy_r_r35 = CPyList_GetItemShort(cpy_r_r34, 0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 297, CPyStatic_typeops___globals);
        goto CPyL159;
    }
    if (likely(Py_TYPE(cpy_r_r35) == CPyType_nodes___ArgKind))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 297, CPyStatic_typeops___globals, "mypy.nodes.ArgKind", cpy_r_r35);
        goto CPyL159;
    }
    cpy_r_r37 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r37 == NULL)) {
        goto CPyL160;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 297, CPyStatic_typeops___globals);
        goto CPyL149;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r39 = cpy_r_r36 == cpy_r_r37;
    CPy_DECREF(cpy_r_r36);
    if (cpy_r_r39) {
        goto CPyL161;
    } else
        goto CPyL31;
CPyL30: ;
    return cpy_r_func;
CPyL31: ;
    cpy_r_r40 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_arg_types;
    cpy_r_r41 = CPyList_GetItemShort(cpy_r_r40, 0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 304, CPyStatic_typeops___globals);
        goto CPyL159;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r41, CPyType_types___Type)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 304, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r41);
        goto CPyL159;
    }
    cpy_r_r43 = CPyDef_types___get_proper_type(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 304, CPyStatic_typeops___globals);
        goto CPyL159;
    }
    if (likely(cpy_r_r43 != Py_None))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 304, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r43);
        goto CPyL159;
    }
    cpy_r_self_param_type = cpy_r_r44;
    cpy_r_r45 = PyList_New(0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 306, CPyStatic_typeops___globals);
        goto CPyL162;
    }
    cpy_r_variables = cpy_r_r45;
    CPy_DECREF(cpy_r_variables);
    cpy_r_r46 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_variables;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = PyObject_IsTrue(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 307, CPyStatic_typeops___globals);
        goto CPyL162;
    }
    cpy_r_r49 = cpy_r_r47;
    if (!cpy_r_r49) goto CPyL163;
    cpy_r_r50 = CPyDef_typeops___supported_self_type(cpy_r_self_param_type);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 307, CPyStatic_typeops___globals);
        goto CPyL162;
    }
    if (!cpy_r_r50) goto CPyL163;
    cpy_r_r51 = CPyStatics[9863]; /* ('infer_type_arguments',) */
    cpy_r_r52 = CPyStatics[1235]; /* 'mypy.infer' */
    cpy_r_r53 = CPyStatic_typeops___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 308, CPyStatic_typeops___globals);
        goto CPyL162;
    }
    CPyModule_mypy___infer = cpy_r_r54;
    CPy_INCREF(CPyModule_mypy___infer);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r56 = cpy_r_original_type == cpy_r_r55;
    if (cpy_r_r56) {
        goto CPyL164;
    } else
        goto CPyL44;
CPyL42: ;
    cpy_r_r57 = CPyDef_typeops___erase_to_bound(cpy_r_self_param_type);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 312, CPyStatic_typeops___globals);
        goto CPyL165;
    }
    cpy_r_original_type = cpy_r_r57;
CPyL44: ;
    if (likely(cpy_r_original_type != Py_None))
        cpy_r_r58 = cpy_r_original_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 313, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_original_type);
        goto CPyL165;
    }
    cpy_r_r59 = CPyDef_types___get_proper_type(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 313, CPyStatic_typeops___globals);
        goto CPyL165;
    }
    if (likely(cpy_r_r59 != Py_None))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 313, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r59);
        goto CPyL165;
    }
    cpy_r_original_type = cpy_r_r60;
    cpy_r_r61 = CPyDef_types___CallableType___type_var_ids(cpy_r_func);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 315, CPyStatic_typeops___globals);
        goto CPyL162;
    }
    if (((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_all_ids != NULL) {
        CPy_DECREF(((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_all_ids);
    }
    ((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_all_ids = cpy_r_r61;
    cpy_r_r62 = 1;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 315, CPyStatic_typeops___globals);
        goto CPyL162;
    }
    cpy_r_r63 = ((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_all_ids;
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "bind_self", "bind_self_env", "all_ids", 316, CPyStatic_typeops___globals);
        goto CPyL162;
    }
    CPy_INCREF(cpy_r_r63);
CPyL50: ;
    CPy_INCREF(cpy_r_original_type);
    if (likely(PyObject_TypeCheck(cpy_r_original_type, CPyType_types___ProperType)))
        cpy_r_r64 = cpy_r_original_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 316, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_original_type);
        goto CPyL166;
    }
    cpy_r_r65 = CPyDef_infer___infer_type_arguments(cpy_r_r63, cpy_r_self_param_type, cpy_r_r64, 1);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 316, CPyStatic_typeops___globals);
        goto CPyL162;
    }
    cpy_r_typeargs = cpy_r_r65;
    if (!cpy_r_is_classmethod) goto CPyL73;
    cpy_r_r66 = 0;
    cpy_r_r67 = 0;
CPyL54: ;
    cpy_r_r68 = (CPyPtr)&((PyVarObject *)cpy_r_typeargs)->ob_size;
    cpy_r_r69 = *(int64_t *)cpy_r_r68;
    cpy_r_r70 = cpy_r_r69 << 1;
    cpy_r_r71 = (Py_ssize_t)cpy_r_r67 < (Py_ssize_t)cpy_r_r70;
    if (!cpy_r_r71) goto CPyL60;
    cpy_r_r72 = CPyList_GetItemUnsafe(cpy_r_typeargs, cpy_r_r67);
    if (PyObject_TypeCheck(cpy_r_r72, CPyType_types___Type))
        cpy_r_r73 = cpy_r_r72;
    else {
        cpy_r_r73 = NULL;
    }
    if (cpy_r_r73 != NULL) goto __LL7730;
    if (cpy_r_r72 == Py_None)
        cpy_r_r73 = cpy_r_r72;
    else {
        cpy_r_r73 = NULL;
    }
    if (cpy_r_r73 != NULL) goto __LL7730;
    CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 320, CPyStatic_typeops___globals, "mypy.types.Type or None", cpy_r_r72);
    goto CPyL167;
__LL7730: ;
    cpy_r_t = cpy_r_r73;
    cpy_r_r74 = CPyDef_types___get_proper_type(cpy_r_t);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 320, CPyStatic_typeops___globals);
        goto CPyL167;
    }
    cpy_r_r75 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r76 = (CPyPtr)&((PyObject *)cpy_r_r74)->ob_type;
    cpy_r_r77 = *(PyObject * *)cpy_r_r76;
    CPy_DECREF(cpy_r_r74);
    cpy_r_r78 = cpy_r_r77 == cpy_r_r75;
    if (!cpy_r_r78) goto CPyL59;
    cpy_r_r66 = 1;
    goto CPyL60;
CPyL59: ;
    cpy_r_r79 = cpy_r_r67 + 2;
    cpy_r_r67 = cpy_r_r79;
    goto CPyL54;
CPyL60: ;
    if (!cpy_r_r66) goto CPyL73;
    cpy_r_r80 = (PyObject *)CPyType_types___Instance;
    cpy_r_r81 = (CPyPtr)&((PyObject *)cpy_r_original_type)->ob_type;
    cpy_r_r82 = *(PyObject * *)cpy_r_r81;
    cpy_r_r83 = cpy_r_r82 == cpy_r_r80;
    if (!cpy_r_r83) goto CPyL63;
    cpy_r_r84 = cpy_r_r83;
    goto CPyL64;
CPyL63: ;
    cpy_r_r85 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r86 = (CPyPtr)&((PyObject *)cpy_r_original_type)->ob_type;
    cpy_r_r87 = *(PyObject * *)cpy_r_r86;
    cpy_r_r88 = cpy_r_r87 == cpy_r_r85;
    cpy_r_r84 = cpy_r_r88;
CPyL64: ;
    if (!cpy_r_r84) goto CPyL66;
    cpy_r_r89 = cpy_r_r84;
    goto CPyL67;
CPyL66: ;
    cpy_r_r90 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r91 = (CPyPtr)&((PyObject *)cpy_r_original_type)->ob_type;
    cpy_r_r92 = *(PyObject * *)cpy_r_r91;
    cpy_r_r93 = cpy_r_r92 == cpy_r_r90;
    cpy_r_r89 = cpy_r_r93;
CPyL67: ;
    if (cpy_r_r89) {
        goto CPyL168;
    } else
        goto CPyL73;
CPyL68: ;
    cpy_r_r94 = ((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_all_ids;
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "bind_self", "bind_self_env", "all_ids", 325, CPyStatic_typeops___globals);
        goto CPyL162;
    }
    CPy_INCREF(cpy_r_r94);
CPyL69: ;
    CPy_INCREF(cpy_r_original_type);
    if (Py_TYPE(cpy_r_original_type) == CPyType_types___Instance)
        cpy_r_r95 = cpy_r_original_type;
    else {
        cpy_r_r95 = NULL;
    }
    if (cpy_r_r95 != NULL) goto __LL7731;
    if (Py_TYPE(cpy_r_original_type) == CPyType_types___TypeVarType)
        cpy_r_r95 = cpy_r_original_type;
    else {
        cpy_r_r95 = NULL;
    }
    if (cpy_r_r95 != NULL) goto __LL7731;
    if (Py_TYPE(cpy_r_original_type) == CPyType_types___TupleType)
        cpy_r_r95 = cpy_r_original_type;
    else {
        cpy_r_r95 = NULL;
    }
    if (cpy_r_r95 != NULL) goto __LL7731;
    CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 325, CPyStatic_typeops___globals, "union[mypy.types.Instance, mypy.types.TypeVarType, mypy.types.TupleType]", cpy_r_original_type);
    goto CPyL169;
__LL7731: ;
    cpy_r_r96 = CPY_INT_TAG;
    cpy_r_r97 = CPY_INT_TAG;
    cpy_r_r98 = CPyDef_types___TypeType(cpy_r_r95, cpy_r_r96, cpy_r_r97);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 325, CPyStatic_typeops___globals);
        goto CPyL169;
    }
    cpy_r_r99 = CPyDef_infer___infer_type_arguments(cpy_r_r94, cpy_r_self_param_type, cpy_r_r98, 1);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 324, CPyStatic_typeops___globals);
        goto CPyL162;
    }
    cpy_r_typeargs = cpy_r_r99;
CPyL73: ;
    cpy_r_r100 = PyList_New(0);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 328, CPyStatic_typeops___globals);
        goto CPyL167;
    }
    cpy_r_r101 = ((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_all_ids;
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "bind_self", "bind_self_env", "all_ids", 328, CPyStatic_typeops___globals);
        goto CPyL170;
    }
    CPy_INCREF(cpy_r_r101);
CPyL75: ;
    cpy_r_r102 = 0;
CPyL76: ;
    cpy_r_r103 = (CPyPtr)&((PyVarObject *)cpy_r_r101)->ob_size;
    cpy_r_r104 = *(int64_t *)cpy_r_r103;
    cpy_r_r105 = cpy_r_r104 << 1;
    cpy_r_r106 = (Py_ssize_t)cpy_r_r102 < (Py_ssize_t)cpy_r_r105;
    if (!cpy_r_r106) goto CPyL171;
    cpy_r_r107 = CPyList_GetItemUnsafe(cpy_r_r101, cpy_r_r102);
    if (likely(Py_TYPE(cpy_r_r107) == CPyType_types___TypeVarId))
        cpy_r_r108 = cpy_r_r107;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 328, CPyStatic_typeops___globals, "mypy.types.TypeVarId", cpy_r_r107);
        goto CPyL172;
    }
    cpy_r_tid = cpy_r_r108;
    cpy_r_r109 = 0;
    cpy_r_r110 = CPyDef_typeops___get_type_vars(cpy_r_self_param_type);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 328, CPyStatic_typeops___globals);
        goto CPyL173;
    }
    cpy_r_r111 = 0;
CPyL80: ;
    cpy_r_r112 = (CPyPtr)&((PyVarObject *)cpy_r_r110)->ob_size;
    cpy_r_r113 = *(int64_t *)cpy_r_r112;
    cpy_r_r114 = cpy_r_r113 << 1;
    cpy_r_r115 = (Py_ssize_t)cpy_r_r111 < (Py_ssize_t)cpy_r_r114;
    if (!cpy_r_r115) goto CPyL174;
    cpy_r_r116 = CPyList_GetItemUnsafe(cpy_r_r110, cpy_r_r111);
    if (likely(Py_TYPE(cpy_r_r116) == CPyType_types___TypeVarType))
        cpy_r_r117 = cpy_r_r116;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 328, CPyStatic_typeops___globals, "mypy.types.TypeVarType", cpy_r_r116);
        goto CPyL175;
    }
    cpy_r_t_2 = cpy_r_r117;
    cpy_r_r118 = ((mypy___types___TypeVarTypeObject *)cpy_r_t_2)->_id;
    CPy_INCREF(cpy_r_r118);
    CPy_DECREF(cpy_r_t_2);
    cpy_r_r119 = CPyDef_types___TypeVarId_____eq__(cpy_r_tid, cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 328, CPyStatic_typeops___globals);
        goto CPyL175;
    }
    if (unlikely(!PyBool_Check(cpy_r_r119))) {
        CPy_TypeError("bool", cpy_r_r119); cpy_r_r120 = 2;
    } else
        cpy_r_r120 = cpy_r_r119 == Py_True;
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r120 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 328, CPyStatic_typeops___globals);
        goto CPyL175;
    }
    if (cpy_r_r120) {
        goto CPyL176;
    } else
        goto CPyL86;
CPyL85: ;
    cpy_r_r109 = 1;
    goto CPyL87;
CPyL86: ;
    cpy_r_r121 = cpy_r_r111 + 2;
    cpy_r_r111 = cpy_r_r121;
    goto CPyL80;
CPyL87: ;
    if (!cpy_r_r109) goto CPyL177;
    cpy_r_r122 = PyList_Append(cpy_r_r100, cpy_r_tid);
    CPy_DECREF(cpy_r_tid);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 328, CPyStatic_typeops___globals);
        goto CPyL172;
    }
CPyL89: ;
    cpy_r_r124 = cpy_r_r102 + 2;
    cpy_r_r102 = cpy_r_r124;
    goto CPyL76;
CPyL90: ;
    if (((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_ids != NULL) {
        CPy_DECREF(((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_ids);
    }
    ((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_ids = cpy_r_r100;
    cpy_r_r125 = 1;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 328, CPyStatic_typeops___globals);
        goto CPyL178;
    }
    cpy_r_r126 = (CPyPtr)&((PyVarObject *)cpy_r_typeargs)->ob_size;
    cpy_r_r127 = *(int64_t *)cpy_r_r126;
    cpy_r_r128 = PyList_New(cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 331, CPyStatic_typeops___globals);
        goto CPyL178;
    }
    cpy_r_r129 = 0;
CPyL93: ;
    cpy_r_r130 = (CPyPtr)&((PyVarObject *)cpy_r_typeargs)->ob_size;
    cpy_r_r131 = *(int64_t *)cpy_r_r130;
    cpy_r_r132 = cpy_r_r131 << 1;
    cpy_r_r133 = (Py_ssize_t)cpy_r_r129 < (Py_ssize_t)cpy_r_r132;
    if (!cpy_r_r133) goto CPyL179;
    cpy_r_r134 = CPyList_GetItemUnsafe(cpy_r_typeargs, cpy_r_r129);
    if (PyObject_TypeCheck(cpy_r_r134, CPyType_types___Type))
        cpy_r_r135 = cpy_r_r134;
    else {
        cpy_r_r135 = NULL;
    }
    if (cpy_r_r135 != NULL) goto __LL7732;
    if (cpy_r_r134 == Py_None)
        cpy_r_r135 = cpy_r_r134;
    else {
        cpy_r_r135 = NULL;
    }
    if (cpy_r_r135 != NULL) goto __LL7732;
    CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 331, CPyStatic_typeops___globals, "mypy.types.Type or None", cpy_r_r134);
    goto CPyL180;
__LL7732: ;
    cpy_r_t_3 = cpy_r_r135;
    cpy_r_r136 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r137 = cpy_r_t_3 != cpy_r_r136;
    if (!cpy_r_r137) goto CPyL181;
    if (likely(cpy_r_t_3 != Py_None))
        cpy_r_r138 = cpy_r_t_3;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 331, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_t_3);
        goto CPyL180;
    }
    cpy_r_r139 = cpy_r_r138;
    goto CPyL100;
CPyL98: ;
    cpy_r_r140 = 2;
    cpy_r_r141 = CPY_INT_TAG;
    cpy_r_r142 = CPY_INT_TAG;
    cpy_r_r143 = CPyDef_types___UninhabitedType(cpy_r_r140, cpy_r_r141, cpy_r_r142);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 331, CPyStatic_typeops___globals);
        goto CPyL180;
    }
    cpy_r_r139 = cpy_r_r143;
CPyL100: ;
    cpy_r_r144 = CPyList_SetItemUnsafe(cpy_r_r128, cpy_r_r129, cpy_r_r139);
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 331, CPyStatic_typeops___globals);
        goto CPyL180;
    }
    cpy_r_r145 = cpy_r_r129 + 2;
    cpy_r_r129 = cpy_r_r145;
    goto CPyL93;
CPyL102: ;
    if (((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_to_apply != NULL) {
        CPy_DECREF(((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_to_apply);
    }
    ((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_to_apply = cpy_r_r128;
    cpy_r_r146 = 1;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 331, CPyStatic_typeops___globals);
        goto CPyL159;
    }
    cpy_r_r147 = CPyDef_typeops___expand_bind_self_obj();
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 333, CPyStatic_typeops___globals);
        goto CPyL159;
    }
    CPy_INCREF(cpy_r_r1);
    if (((mypy___typeops___expand_bind_self_objObject *)cpy_r_r147)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___typeops___expand_bind_self_objObject *)cpy_r_r147)->___mypyc_env__);
    }
    ((mypy___typeops___expand_bind_self_objObject *)cpy_r_r147)->___mypyc_env__ = cpy_r_r1;
    cpy_r_r148 = 1;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 333, CPyStatic_typeops___globals);
        goto CPyL182;
    }
    if (((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_expand != NULL) {
        CPy_DECREF(((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_expand);
    }
    ((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_expand = cpy_r_r147;
    cpy_r_r149 = 1;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 333, CPyStatic_typeops___globals);
        goto CPyL159;
    }
    cpy_r_r150 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_arg_types;
    CPy_INCREF(cpy_r_r150);
    cpy_r_r151 = CPyList_GetSlice(cpy_r_r150, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 336, CPyStatic_typeops___globals);
        goto CPyL159;
    }
    if (likely(PyList_Check(cpy_r_r151)))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 336, CPyStatic_typeops___globals, "list", cpy_r_r151);
        goto CPyL159;
    }
    cpy_r_r153 = (CPyPtr)&((PyVarObject *)cpy_r_r152)->ob_size;
    cpy_r_r154 = *(int64_t *)cpy_r_r153;
    cpy_r_r155 = PyList_New(cpy_r_r154);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 336, CPyStatic_typeops___globals);
        goto CPyL183;
    }
    cpy_r_r156 = 0;
CPyL110: ;
    cpy_r_r157 = (CPyPtr)&((PyVarObject *)cpy_r_r152)->ob_size;
    cpy_r_r158 = *(int64_t *)cpy_r_r157;
    cpy_r_r159 = cpy_r_r158 << 1;
    cpy_r_r160 = (Py_ssize_t)cpy_r_r156 < (Py_ssize_t)cpy_r_r159;
    if (!cpy_r_r160) goto CPyL184;
    cpy_r_r161 = CPyList_GetItemUnsafe(cpy_r_r152, cpy_r_r156);
    if (likely(PyObject_TypeCheck(cpy_r_r161, CPyType_types___Type)))
        cpy_r_r162 = cpy_r_r161;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 336, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r161);
        goto CPyL185;
    }
    cpy_r_x = cpy_r_r162;
    cpy_r_r163 = ((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_expand;
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "bind_self", "bind_self_env", "expand", 336, CPyStatic_typeops___globals);
        goto CPyL186;
    }
    CPy_INCREF(cpy_r_r163);
CPyL113: ;
    PyObject *cpy_r_r164[1] = {cpy_r_x};
    cpy_r_r165 = (PyObject **)&cpy_r_r164;
    cpy_r_r166 = _PyObject_Vectorcall(cpy_r_r163, cpy_r_r165, 1, 0);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 336, CPyStatic_typeops___globals);
        goto CPyL186;
    }
    CPy_DECREF(cpy_r_x);
    if (likely(PyObject_TypeCheck(cpy_r_r166, CPyType_types___Type)))
        cpy_r_r167 = cpy_r_r166;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 336, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r166);
        goto CPyL185;
    }
    cpy_r_r168 = CPyList_SetItemUnsafe(cpy_r_r155, cpy_r_r156, cpy_r_r167);
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 336, CPyStatic_typeops___globals);
        goto CPyL185;
    }
    cpy_r_r169 = cpy_r_r156 + 2;
    cpy_r_r156 = cpy_r_r169;
    goto CPyL110;
CPyL117: ;
    cpy_r_arg_types = cpy_r_r155;
    cpy_r_r170 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_ret_type;
    CPy_INCREF(cpy_r_r170);
    cpy_r_r171 = ((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_expand;
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "bind_self", "bind_self_env", "expand", 337, CPyStatic_typeops___globals);
        goto CPyL187;
    }
    CPy_INCREF(cpy_r_r171);
CPyL118: ;
    PyObject *cpy_r_r172[1] = {cpy_r_r170};
    cpy_r_r173 = (PyObject **)&cpy_r_r172;
    cpy_r_r174 = _PyObject_Vectorcall(cpy_r_r171, cpy_r_r173, 1, 0);
    CPy_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 337, CPyStatic_typeops___globals);
        goto CPyL187;
    }
    CPy_DECREF(cpy_r_r170);
    if (likely(PyObject_TypeCheck(cpy_r_r174, CPyType_types___Type)))
        cpy_r_r175 = cpy_r_r174;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 337, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r174);
        goto CPyL188;
    }
    cpy_r_ret_type = cpy_r_r175;
    cpy_r_r176 = PyList_New(0);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 338, CPyStatic_typeops___globals);
        goto CPyL189;
    }
    cpy_r_r177 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_variables;
    CPy_INCREF(cpy_r_r177);
    cpy_r_r178 = PyObject_GetIter(cpy_r_r177);
    CPy_DECREF(cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 338, CPyStatic_typeops___globals);
        goto CPyL190;
    }
CPyL122: ;
    cpy_r_r179 = PyIter_Next(cpy_r_r178);
    if (cpy_r_r179 == NULL) goto CPyL191;
    if (likely(PyObject_TypeCheck(cpy_r_r179, CPyType_types___TypeVarLikeType)))
        cpy_r_r180 = cpy_r_r179;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 338, CPyStatic_typeops___globals, "mypy.types.TypeVarLikeType", cpy_r_r179);
        goto CPyL192;
    }
    cpy_r_v = cpy_r_r180;
    cpy_r_r181 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_v)->_id;
    CPy_INCREF(cpy_r_r181);
    cpy_r_r182 = ((mypy___typeops___bind_self_envObject *)cpy_r_r1)->_ids;
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "bind_self", "bind_self_env", "ids", 338, CPyStatic_typeops___globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r182);
CPyL125: ;
    cpy_r_r183 = PySequence_Contains(cpy_r_r182, cpy_r_r181);
    CPy_DECREF(cpy_r_r182);
    CPy_DECREF(cpy_r_r181);
    cpy_r_r184 = cpy_r_r183 >= 0;
    if (unlikely(!cpy_r_r184)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 338, CPyStatic_typeops___globals);
        goto CPyL194;
    }
    cpy_r_r185 = cpy_r_r183;
    cpy_r_r186 = cpy_r_r185 ^ 1;
    if (!cpy_r_r186) goto CPyL195;
    cpy_r_r187 = PyList_Append(cpy_r_r176, cpy_r_v);
    CPy_DECREF(cpy_r_v);
    cpy_r_r188 = cpy_r_r187 >= 0;
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 338, CPyStatic_typeops___globals);
        goto CPyL192;
    } else
        goto CPyL122;
CPyL128: ;
    cpy_r_r189 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r189)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 338, CPyStatic_typeops___globals);
        goto CPyL196;
    }
    cpy_r_variables = cpy_r_r176;
    goto CPyL133;
CPyL130: ;
    cpy_r_r190 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_arg_types;
    CPy_INCREF(cpy_r_r190);
    cpy_r_r191 = CPyList_GetSlice(cpy_r_r190, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 340, CPyStatic_typeops___globals);
        goto CPyL197;
    }
    if (likely(PyList_Check(cpy_r_r191)))
        cpy_r_r192 = cpy_r_r191;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 340, CPyStatic_typeops___globals, "list", cpy_r_r191);
        goto CPyL197;
    }
    cpy_r_arg_types = cpy_r_r192;
    cpy_r_r193 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_ret_type;
    CPy_INCREF(cpy_r_r193);
    cpy_r_ret_type = cpy_r_r193;
    cpy_r_r194 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_variables;
    CPy_INCREF(cpy_r_r194);
    cpy_r_variables = cpy_r_r194;
CPyL133: ;
    cpy_r_r195 = CPyDef_types___get_proper_type(cpy_r_original_type);
    CPy_DECREF(cpy_r_original_type);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 344, CPyStatic_typeops___globals);
        goto CPyL198;
    }
    cpy_r_original_type = cpy_r_r195;
    cpy_r_r196 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r197 = (CPyPtr)&((PyObject *)cpy_r_original_type)->ob_type;
    cpy_r_r198 = *(PyObject * *)cpy_r_r197;
    cpy_r_r199 = cpy_r_r198 == cpy_r_r196;
    if (!cpy_r_r199) goto CPyL141;
    CPy_INCREF(cpy_r_original_type);
    if (likely(Py_TYPE(cpy_r_original_type) == CPyType_types___CallableType))
        cpy_r_r200 = cpy_r_original_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 345, CPyStatic_typeops___globals, "mypy.types.CallableType", cpy_r_original_type);
        goto CPyL199;
    }
    cpy_r_r201 = CPyDef_types___CallableType___is_type_obj(cpy_r_r200);
    CPy_DECREF(cpy_r_r200);
    if (unlikely(cpy_r_r201 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 345, CPyStatic_typeops___globals);
        goto CPyL199;
    }
    if (!cpy_r_r201) goto CPyL141;
    if (likely(Py_TYPE(cpy_r_original_type) == CPyType_types___CallableType))
        cpy_r_r202 = cpy_r_original_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 346, CPyStatic_typeops___globals, "mypy.types.CallableType", cpy_r_original_type);
        goto CPyL199;
    }
    cpy_r_r203 = ((mypy___types___CallableTypeObject *)cpy_r_r202)->_ret_type;
    CPy_INCREF(cpy_r_r203);
    CPy_DECREF(cpy_r_original_type);
    cpy_r_r204 = CPY_INT_TAG;
    cpy_r_r205 = CPY_INT_TAG;
    cpy_r_r206 = CPyDef_types___TypeType___make_normalized(cpy_r_r203, cpy_r_r204, cpy_r_r205);
    CPy_DECREF(cpy_r_r203);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 346, CPyStatic_typeops___globals);
        goto CPyL198;
    }
    cpy_r_original_type = cpy_r_r206;
CPyL141: ;
    cpy_r_r207 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_arg_kinds;
    CPy_INCREF(cpy_r_r207);
    cpy_r_r208 = CPyList_GetSlice(cpy_r_r207, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r207);
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 349, CPyStatic_typeops___globals);
        goto CPyL199;
    }
    if (likely(PyList_Check(cpy_r_r208)))
        cpy_r_r209 = cpy_r_r208;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 349, CPyStatic_typeops___globals, "list", cpy_r_r208);
        goto CPyL199;
    }
    cpy_r_r210 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_arg_names;
    CPy_INCREF(cpy_r_r210);
    cpy_r_r211 = CPyList_GetSlice(cpy_r_r210, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r210);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 350, CPyStatic_typeops___globals);
        goto CPyL200;
    }
    if (likely(PyList_Check(cpy_r_r211)))
        cpy_r_r212 = cpy_r_r211;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 350, CPyStatic_typeops___globals, "list", cpy_r_r211);
        goto CPyL200;
    }
    if (PyObject_TypeCheck(cpy_r_original_type, CPyType_types___ProperType))
        cpy_r_r213 = cpy_r_original_type;
    else {
        cpy_r_r213 = NULL;
    }
    if (cpy_r_r213 != NULL) goto __LL7733;
    if (cpy_r_original_type == Py_None)
        cpy_r_r213 = cpy_r_original_type;
    else {
        cpy_r_r213 = NULL;
    }
    if (cpy_r_r213 != NULL) goto __LL7733;
    CPy_TypeErrorTraceback("mypy/typeops.py", "bind_self", 353, CPyStatic_typeops___globals, "mypy.types.ProperType or None", cpy_r_original_type);
    goto CPyL201;
__LL7733: ;
    cpy_r_r214 = PyList_New(1);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 353, CPyStatic_typeops___globals);
        goto CPyL202;
    }
    cpy_r_r215 = (CPyPtr)&((PyListObject *)cpy_r_r214)->ob_item;
    cpy_r_r216 = *(CPyPtr *)cpy_r_r215;
    *(PyObject * *)cpy_r_r216 = cpy_r_r213;
    cpy_r_r217 = NULL;
    cpy_r_r218 = NULL;
    cpy_r_r219 = NULL;
    cpy_r_r220 = CPY_INT_TAG;
    cpy_r_r221 = CPY_INT_TAG;
    cpy_r_r222 = NULL;
    cpy_r_r223 = NULL;
    cpy_r_r224 = NULL;
    cpy_r_r225 = NULL;
    cpy_r_r226 = NULL;
    cpy_r_r227 = NULL;
    cpy_r_r228 = NULL;
    cpy_r_r229 = NULL;
    cpy_r_r230 = CPyDef_types___CallableType___copy_modified(cpy_r_func, cpy_r_arg_types, cpy_r_r209, cpy_r_r212, cpy_r_ret_type, cpy_r_r217, cpy_r_r218, cpy_r_r219, cpy_r_variables, cpy_r_r220, cpy_r_r221, cpy_r_r222, cpy_r_r223, cpy_r_r224, cpy_r_r225, cpy_r_r214, cpy_r_r226, cpy_r_r227, cpy_r_r228, cpy_r_r229);
    CPy_DECREF(cpy_r_arg_types);
    CPy_DECREF(cpy_r_r209);
    CPy_DECREF(cpy_r_r212);
    CPy_DECREF(cpy_r_ret_type);
    CPy_DECREF(cpy_r_variables);
    CPy_DECREF(cpy_r_r214);
    CPy_DECREF(cpy_r_func);
    if (unlikely(cpy_r_r230 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "bind_self", 347, CPyStatic_typeops___globals);
        goto CPyL149;
    }
    cpy_r_res = cpy_r_r230;
    return cpy_r_res;
CPyL149: ;
    cpy_r_r231 = NULL;
    return cpy_r_r231;
CPyL150: ;
    CPy_INCREF(cpy_r_original_type);
    goto CPyL2;
CPyL151: ;
    CPy_DecRef(cpy_r_original_type);
    goto CPyL149;
CPyL152: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
CPyL153: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r7);
    goto CPyL149;
CPyL154: ;
    CPy_DECREF(cpy_r_original_type);
    CPy_DECREF(cpy_r_r7);
    goto CPyL16;
CPyL155: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL149;
CPyL156: ;
    CPy_DECREF(cpy_r_original_type);
    CPy_DECREF(cpy_r_r1);
    goto CPyL19;
CPyL157: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    goto CPyL149;
CPyL158: ;
    CPy_DECREF(cpy_r_original_type);
    CPy_DECREF(cpy_r_r1);
    goto CPyL23;
CPyL159: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    goto CPyL149;
CPyL160: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r36);
    goto CPyL27;
CPyL161: ;
    CPy_DECREF(cpy_r_original_type);
    CPy_DECREF(cpy_r_r1);
    goto CPyL30;
CPyL162: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_self_param_type);
    goto CPyL149;
CPyL163: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_self_param_type);
    goto CPyL130;
CPyL164: ;
    CPy_DECREF(cpy_r_original_type);
    goto CPyL42;
CPyL165: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_self_param_type);
    goto CPyL149;
CPyL166: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_self_param_type);
    CPy_DecRef(cpy_r_r63);
    goto CPyL149;
CPyL167: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_self_param_type);
    CPy_DecRef(cpy_r_typeargs);
    goto CPyL149;
CPyL168: ;
    CPy_DECREF(cpy_r_typeargs);
    goto CPyL68;
CPyL169: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_self_param_type);
    CPy_DecRef(cpy_r_r94);
    goto CPyL149;
CPyL170: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_self_param_type);
    CPy_DecRef(cpy_r_typeargs);
    CPy_DecRef(cpy_r_r100);
    goto CPyL149;
CPyL171: ;
    CPy_DECREF(cpy_r_self_param_type);
    CPy_DECREF(cpy_r_r101);
    goto CPyL90;
CPyL172: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_self_param_type);
    CPy_DecRef(cpy_r_typeargs);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r101);
    goto CPyL149;
CPyL173: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_self_param_type);
    CPy_DecRef(cpy_r_typeargs);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_tid);
    goto CPyL149;
CPyL174: ;
    CPy_DECREF(cpy_r_r110);
    goto CPyL87;
CPyL175: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_self_param_type);
    CPy_DecRef(cpy_r_typeargs);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_tid);
    CPy_DecRef(cpy_r_r110);
    goto CPyL149;
CPyL176: ;
    CPy_DECREF(cpy_r_r110);
    goto CPyL85;
CPyL177: ;
    CPy_DECREF(cpy_r_tid);
    goto CPyL89;
CPyL178: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_typeargs);
    goto CPyL149;
CPyL179: ;
    CPy_DECREF(cpy_r_typeargs);
    goto CPyL102;
CPyL180: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_typeargs);
    CPy_DecRef(cpy_r_r128);
    goto CPyL149;
CPyL181: ;
    CPy_DECREF(cpy_r_t_3);
    goto CPyL98;
CPyL182: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r147);
    goto CPyL149;
CPyL183: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r152);
    goto CPyL149;
CPyL184: ;
    CPy_DECREF(cpy_r_r152);
    goto CPyL117;
CPyL185: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r155);
    goto CPyL149;
CPyL186: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_x);
    goto CPyL149;
CPyL187: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_r170);
    goto CPyL149;
CPyL188: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_arg_types);
    goto CPyL149;
CPyL189: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL149;
CPyL190: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r176);
    goto CPyL149;
CPyL191: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r178);
    goto CPyL128;
CPyL192: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r176);
    CPy_DecRef(cpy_r_r178);
    goto CPyL149;
CPyL193: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r176);
    CPy_DecRef(cpy_r_r178);
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_r181);
    goto CPyL149;
CPyL194: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r176);
    CPy_DecRef(cpy_r_r178);
    CPy_DecRef(cpy_r_v);
    goto CPyL149;
CPyL195: ;
    CPy_DECREF(cpy_r_v);
    goto CPyL122;
CPyL196: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r176);
    goto CPyL149;
CPyL197: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_func);
    goto CPyL149;
CPyL198: ;
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_variables);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL149;
CPyL199: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_variables);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL149;
CPyL200: ;
    CPy_DecRef(cpy_r_original_type);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_variables);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r209);
    goto CPyL149;
CPyL201: ;
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_variables);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r212);
    goto CPyL149;
CPyL202: ;
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_variables);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r212);
    CPy_DecRef(cpy_r_r213);
    goto CPyL149;
}

PyObject *CPyPy_typeops___bind_self(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"method", "original_type", "is_classmethod", 0};
    static CPyArg_Parser parser = {"O|OO:bind_self", kwlist, 0};
    PyObject *obj_method;
    PyObject *obj_original_type = NULL;
    PyObject *obj_is_classmethod = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_method, &obj_original_type, &obj_is_classmethod)) {
        return NULL;
    }
    PyObject *arg_method;
    if (likely((Py_TYPE(obj_method) == CPyType_types___CallableType) || (Py_TYPE(obj_method) == CPyType_types___Overloaded)))
        arg_method = obj_method;
    else {
        CPy_TypeError("mypy.types.FunctionLike", obj_method); 
        goto fail;
    }
    PyObject *arg_original_type;
    if (obj_original_type == NULL) {
        arg_original_type = NULL;
        goto __LL7734;
    }
    if (PyObject_TypeCheck(obj_original_type, CPyType_types___Type))
        arg_original_type = obj_original_type;
    else {
        arg_original_type = NULL;
    }
    if (arg_original_type != NULL) goto __LL7734;
    if (obj_original_type == Py_None)
        arg_original_type = obj_original_type;
    else {
        arg_original_type = NULL;
    }
    if (arg_original_type != NULL) goto __LL7734;
    CPy_TypeError("mypy.types.Type or None", obj_original_type); 
    goto fail;
__LL7734: ;
    char arg_is_classmethod;
    if (obj_is_classmethod == NULL) {
        arg_is_classmethod = 2;
    } else if (unlikely(!PyBool_Check(obj_is_classmethod))) {
        CPy_TypeError("bool", obj_is_classmethod); goto fail;
    } else
        arg_is_classmethod = obj_is_classmethod == Py_True;
    PyObject *retval = CPyDef_typeops___bind_self(arg_method, arg_original_type, arg_is_classmethod);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "bind_self", 265, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___erase_to_bound(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "erase_to_bound", 360, CPyStatic_typeops___globals);
        goto CPyL14;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "erase_to_bound", 360, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL14;
    }
    cpy_r_t = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL5;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___TypeVarType))
        cpy_r_r6 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "erase_to_bound", 362, CPyStatic_typeops___globals, "mypy.types.TypeVarType", cpy_r_t);
        goto CPyL15;
    }
    cpy_r_r7 = ((mypy___types___TypeVarTypeObject *)cpy_r_r6)->_upper_bound;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_t);
    return cpy_r_r7;
CPyL5: ;
    cpy_r_r8 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL12;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___TypeType))
        cpy_r_r12 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "erase_to_bound", 364, CPyStatic_typeops___globals, "mypy.types.TypeType", cpy_r_t);
        goto CPyL15;
    }
    cpy_r_r13 = ((mypy___types___TypeTypeObject *)cpy_r_r12)->_item;
    cpy_r_r14 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_r13)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL12;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___TypeType))
        cpy_r_r18 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "erase_to_bound", 365, CPyStatic_typeops___globals, "mypy.types.TypeType", cpy_r_t);
        goto CPyL15;
    }
    cpy_r_r19 = ((mypy___types___TypeTypeObject *)cpy_r_r18)->_item;
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_types___TypeVarType))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "erase_to_bound", 365, CPyStatic_typeops___globals, "mypy.types.TypeVarType", cpy_r_r19);
        goto CPyL15;
    }
    cpy_r_r21 = ((mypy___types___TypeVarTypeObject *)cpy_r_r20)->_upper_bound;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_t);
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = CPY_INT_TAG;
    cpy_r_r24 = CPyDef_types___TypeType___make_normalized(cpy_r_r21, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "erase_to_bound", 365, CPyStatic_typeops___globals);
        goto CPyL14;
    }
    return cpy_r_r24;
CPyL12: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r25 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "erase_to_bound", 366, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL14;
    }
    return cpy_r_r25;
CPyL14: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL15: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL14;
}

PyObject *CPyPy_typeops___erase_to_bound(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:erase_to_bound", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___Type)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___erase_to_bound(arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "erase_to_bound", 358, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___callable_corresponding_argument(PyObject *cpy_r_typ, PyObject *cpy_r_model) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_by_name;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_by_pos;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
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
    PyObject **cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_model, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 374, CPyStatic_typeops___globals);
        goto CPyL73;
    }
    if (PyUnicode_Check(cpy_r_r0))
        cpy_r_r1 = cpy_r_r0;
    else {
        cpy_r_r1 = NULL;
    }
    if (cpy_r_r1 != NULL) goto __LL7735;
    if (cpy_r_r0 == Py_None)
        cpy_r_r1 = cpy_r_r0;
    else {
        cpy_r_r1 = NULL;
    }
    if (cpy_r_r1 != NULL) goto __LL7735;
    CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 374, CPyStatic_typeops___globals, "str or None", cpy_r_r0);
    goto CPyL73;
__LL7735: ;
    cpy_r_r2 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL6;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___CallableType))
        cpy_r_r6 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 374, CPyStatic_typeops___globals, "mypy.types.CallableType", cpy_r_typ);
        goto CPyL74;
    }
    cpy_r_r7 = CPyDef_types___CallableType___argument_by_name(cpy_r_r6, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 374, CPyStatic_typeops___globals);
        goto CPyL73;
    }
    cpy_r_r8 = cpy_r_r7;
    goto CPyL9;
CPyL6: ;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Parameters))
        cpy_r_r9 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 374, CPyStatic_typeops___globals, "mypy.types.Parameters", cpy_r_typ);
        goto CPyL74;
    }
    cpy_r_r10 = CPyDef_types___Parameters___argument_by_name(cpy_r_r9, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 374, CPyStatic_typeops___globals);
        goto CPyL73;
    }
    cpy_r_r8 = cpy_r_r10;
CPyL9: ;
    cpy_r_by_name = cpy_r_r8;
    cpy_r_r11 = CPySequenceTuple_GetItem(cpy_r_model, 2);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 375, CPyStatic_typeops___globals);
        goto CPyL75;
    }
    if (PyLong_Check(cpy_r_r11))
        cpy_r_r12 = cpy_r_r11;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL7736;
    if (cpy_r_r11 == Py_None)
        cpy_r_r12 = cpy_r_r11;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL7736;
    CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 375, CPyStatic_typeops___globals, "int or None", cpy_r_r11);
    goto CPyL75;
__LL7736: ;
    cpy_r_r13 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL15;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___CallableType))
        cpy_r_r17 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 375, CPyStatic_typeops___globals, "mypy.types.CallableType", cpy_r_typ);
        goto CPyL76;
    }
    cpy_r_r18 = CPyDef_types___CallableType___argument_by_position(cpy_r_r17, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 375, CPyStatic_typeops___globals);
        goto CPyL75;
    }
    cpy_r_r19 = cpy_r_r18;
    goto CPyL18;
CPyL15: ;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Parameters))
        cpy_r_r20 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 375, CPyStatic_typeops___globals, "mypy.types.Parameters", cpy_r_typ);
        goto CPyL76;
    }
    cpy_r_r21 = CPyDef_types___Parameters___argument_by_position(cpy_r_r20, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 375, CPyStatic_typeops___globals);
        goto CPyL75;
    }
    cpy_r_r19 = cpy_r_r21;
CPyL18: ;
    cpy_r_by_pos = cpy_r_r19;
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_by_name == cpy_r_r22;
    if (!cpy_r_r23) goto CPyL21;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_by_pos == cpy_r_r24;
    if (cpy_r_r25) {
        goto CPyL77;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r26 = Py_None;
    CPy_INCREF(cpy_r_r26);
    return cpy_r_r26;
CPyL21: ;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_by_name != cpy_r_r27;
    if (!cpy_r_r28) goto CPyL68;
    cpy_r_r29 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r30 = cpy_r_by_pos != cpy_r_r29;
    if (!cpy_r_r30) goto CPyL68;
    CPy_INCREF(cpy_r_by_name);
    if (likely(cpy_r_by_name != Py_None))
        cpy_r_r31 = cpy_r_by_name;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 379, CPyStatic_typeops___globals, "tuple", cpy_r_by_name);
        goto CPyL78;
    }
    CPy_INCREF(cpy_r_by_pos);
    if (likely(cpy_r_by_pos != Py_None))
        cpy_r_r32 = cpy_r_by_pos;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 379, CPyStatic_typeops___globals, "tuple", cpy_r_by_pos);
        goto CPyL79;
    }
    cpy_r_r33 = PyObject_RichCompare(cpy_r_r31, cpy_r_r32, 2);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 379, CPyStatic_typeops___globals);
        goto CPyL78;
    }
    if (unlikely(!PyBool_Check(cpy_r_r33))) {
        CPy_TypeError("bool", cpy_r_r33); cpy_r_r34 = 2;
    } else
        cpy_r_r34 = cpy_r_r33 == Py_True;
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 379, CPyStatic_typeops___globals);
        goto CPyL78;
    }
    if (cpy_r_r34) {
        goto CPyL80;
    } else
        goto CPyL30;
CPyL28: ;
    if (likely(cpy_r_by_name != Py_None))
        cpy_r_r35 = cpy_r_by_name;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 380, CPyStatic_typeops___globals, "tuple", cpy_r_by_name);
        goto CPyL73;
    }
    return cpy_r_r35;
CPyL30: ;
    cpy_r_r36 = CPyStatics[9626]; /* ('is_equivalent',) */
    cpy_r_r37 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r38 = CPyStatic_typeops___globals;
    cpy_r_r39 = CPyImport_ImportFromMany(cpy_r_r37, cpy_r_r36, cpy_r_r36, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 387, CPyStatic_typeops___globals);
        goto CPyL78;
    }
    CPyModule_mypy___subtypes = cpy_r_r39;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r39);
    CPy_INCREF(cpy_r_by_name);
    if (likely(cpy_r_by_name != Py_None))
        cpy_r_r40 = cpy_r_by_name;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 390, CPyStatic_typeops___globals, "tuple", cpy_r_by_name);
        goto CPyL78;
    }
    cpy_r_r41 = CPySequenceTuple_GetItem(cpy_r_r40, 6);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 390, CPyStatic_typeops___globals);
        goto CPyL78;
    }
    if (unlikely(!PyBool_Check(cpy_r_r41))) {
        CPy_TypeError("bool", cpy_r_r41); cpy_r_r42 = 2;
    } else
        cpy_r_r42 = cpy_r_r41 == Py_True;
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 390, CPyStatic_typeops___globals);
        goto CPyL78;
    }
    if (cpy_r_r42) goto CPyL68;
    CPy_INCREF(cpy_r_by_pos);
    if (likely(cpy_r_by_pos != Py_None))
        cpy_r_r43 = cpy_r_by_pos;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 390, CPyStatic_typeops___globals, "tuple", cpy_r_by_pos);
        goto CPyL78;
    }
    cpy_r_r44 = CPySequenceTuple_GetItem(cpy_r_r43, 6);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 390, CPyStatic_typeops___globals);
        goto CPyL78;
    }
    if (unlikely(!PyBool_Check(cpy_r_r44))) {
        CPy_TypeError("bool", cpy_r_r44); cpy_r_r45 = 2;
    } else
        cpy_r_r45 = cpy_r_r44 == Py_True;
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 390, CPyStatic_typeops___globals);
        goto CPyL78;
    }
    if (cpy_r_r45) goto CPyL68;
    CPy_INCREF(cpy_r_by_pos);
    if (likely(cpy_r_by_pos != Py_None))
        cpy_r_r46 = cpy_r_by_pos;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 391, CPyStatic_typeops___globals, "tuple", cpy_r_by_pos);
        goto CPyL78;
    }
    cpy_r_r47 = CPySequenceTuple_GetItem(cpy_r_r46, 0);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 391, CPyStatic_typeops___globals);
        goto CPyL78;
    }
    if (PyUnicode_Check(cpy_r_r47))
        cpy_r_r48 = cpy_r_r47;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL7737;
    if (cpy_r_r47 == Py_None)
        cpy_r_r48 = cpy_r_r47;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL7737;
    CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 391, CPyStatic_typeops___globals, "str or None", cpy_r_r47);
    goto CPyL78;
__LL7737: ;
    cpy_r_r49 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r50 = cpy_r_r48 == cpy_r_r49;
    CPy_DECREF(cpy_r_r48);
    if (!cpy_r_r50) goto CPyL68;
    CPy_INCREF(cpy_r_by_name);
    if (likely(cpy_r_by_name != Py_None))
        cpy_r_r51 = cpy_r_by_name;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 392, CPyStatic_typeops___globals, "tuple", cpy_r_by_name);
        goto CPyL78;
    }
    cpy_r_r52 = CPySequenceTuple_GetItem(cpy_r_r51, 2);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 392, CPyStatic_typeops___globals);
        goto CPyL78;
    }
    if (PyLong_Check(cpy_r_r52))
        cpy_r_r53 = cpy_r_r52;
    else {
        cpy_r_r53 = NULL;
    }
    if (cpy_r_r53 != NULL) goto __LL7738;
    if (cpy_r_r52 == Py_None)
        cpy_r_r53 = cpy_r_r52;
    else {
        cpy_r_r53 = NULL;
    }
    if (cpy_r_r53 != NULL) goto __LL7738;
    CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 392, CPyStatic_typeops___globals, "int or None", cpy_r_r52);
    goto CPyL78;
__LL7738: ;
    cpy_r_r54 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r55 = cpy_r_r53 == cpy_r_r54;
    CPy_DECREF(cpy_r_r53);
    if (!cpy_r_r55) goto CPyL68;
    CPy_INCREF(cpy_r_by_name);
    if (likely(cpy_r_by_name != Py_None))
        cpy_r_r56 = cpy_r_by_name;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 393, CPyStatic_typeops___globals, "tuple", cpy_r_by_name);
        goto CPyL78;
    }
    cpy_r_r57 = CPySequenceTuple_GetItem(cpy_r_r56, 4);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 393, CPyStatic_typeops___globals);
        goto CPyL78;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r57, CPyType_types___Type)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 393, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r57);
        goto CPyL78;
    }
    CPy_INCREF(cpy_r_by_pos);
    if (likely(cpy_r_by_pos != Py_None))
        cpy_r_r59 = cpy_r_by_pos;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 393, CPyStatic_typeops___globals, "tuple", cpy_r_by_pos);
        goto CPyL81;
    }
    cpy_r_r60 = CPySequenceTuple_GetItem(cpy_r_r59, 4);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 393, CPyStatic_typeops___globals);
        goto CPyL81;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r60, CPyType_types___Type)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 393, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r60);
        goto CPyL81;
    }
    cpy_r_r62 = 2;
    cpy_r_r63 = 2;
    cpy_r_r64 = NULL;
    cpy_r_r65 = NULL;
    cpy_r_r66 = CPyDef_subtypes___is_equivalent(cpy_r_r58, cpy_r_r61, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 393, CPyStatic_typeops___globals);
        goto CPyL78;
    }
    if (!cpy_r_r66) goto CPyL68;
    CPy_INCREF(cpy_r_by_name);
    if (likely(cpy_r_by_name != Py_None))
        cpy_r_r67 = cpy_r_by_name;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 395, CPyStatic_typeops___globals, "tuple", cpy_r_by_name);
        goto CPyL78;
    }
    cpy_r_r68 = CPySequenceTuple_GetItem(cpy_r_r67, 0);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 395, CPyStatic_typeops___globals);
        goto CPyL78;
    }
    if (PyUnicode_Check(cpy_r_r68))
        cpy_r_r69 = cpy_r_r68;
    else {
        cpy_r_r69 = NULL;
    }
    if (cpy_r_r69 != NULL) goto __LL7739;
    if (cpy_r_r68 == Py_None)
        cpy_r_r69 = cpy_r_r68;
    else {
        cpy_r_r69 = NULL;
    }
    if (cpy_r_r69 != NULL) goto __LL7739;
    CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 395, CPyStatic_typeops___globals, "str or None", cpy_r_r68);
    goto CPyL78;
__LL7739: ;
    if (likely(cpy_r_by_pos != Py_None))
        cpy_r_r70 = cpy_r_by_pos;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 395, CPyStatic_typeops___globals, "tuple", cpy_r_by_pos);
        goto CPyL82;
    }
    cpy_r_r71 = CPySequenceTuple_GetItem(cpy_r_r70, 2);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 395, CPyStatic_typeops___globals);
        goto CPyL82;
    }
    if (PyLong_Check(cpy_r_r71))
        cpy_r_r72 = cpy_r_r71;
    else {
        cpy_r_r72 = NULL;
    }
    if (cpy_r_r72 != NULL) goto __LL7740;
    if (cpy_r_r71 == Py_None)
        cpy_r_r72 = cpy_r_r71;
    else {
        cpy_r_r72 = NULL;
    }
    if (cpy_r_r72 != NULL) goto __LL7740;
    CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 395, CPyStatic_typeops___globals, "int or None", cpy_r_r71);
    goto CPyL82;
__LL7740: ;
    if (likely(cpy_r_by_name != Py_None))
        cpy_r_r73 = cpy_r_by_name;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 395, CPyStatic_typeops___globals, "tuple", cpy_r_by_name);
        goto CPyL83;
    }
    cpy_r_r74 = CPySequenceTuple_GetItem(cpy_r_r73, 4);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 395, CPyStatic_typeops___globals);
        goto CPyL83;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r74, CPyType_types___Type)))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 395, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r74);
        goto CPyL83;
    }
    cpy_r_r76 = CPyStatic_typeops___globals;
    cpy_r_r77 = CPyStatics[6049]; /* 'FormalArgument' */
    cpy_r_r78 = CPyDict_GetItem(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 395, CPyStatic_typeops___globals);
        goto CPyL84;
    }
    cpy_r_r79 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r80[4] = {cpy_r_r69, cpy_r_r72, cpy_r_r75, cpy_r_r79};
    cpy_r_r81 = (PyObject **)&cpy_r_r80;
    cpy_r_r82 = _PyObject_Vectorcall(cpy_r_r78, cpy_r_r81, 4, 0);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 395, CPyStatic_typeops___globals);
        goto CPyL84;
    }
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r75);
    if (likely(PyTuple_Check(cpy_r_r82)))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 395, CPyStatic_typeops___globals, "tuple", cpy_r_r82);
        goto CPyL73;
    }
    return cpy_r_r83;
CPyL68: ;
    cpy_r_r84 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r85 = cpy_r_by_name != cpy_r_r84;
    if (cpy_r_r85) {
        goto CPyL85;
    } else
        goto CPyL86;
CPyL69: ;
    if (likely(cpy_r_by_name != Py_None))
        cpy_r_r86 = cpy_r_by_name;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_corresponding_argument", 396, CPyStatic_typeops___globals, "tuple", cpy_r_by_name);
        goto CPyL73;
    }
    cpy_r_r87 = cpy_r_r86;
    goto CPyL72;
CPyL71: ;
    cpy_r_r87 = cpy_r_by_pos;
CPyL72: ;
    return cpy_r_r87;
CPyL73: ;
    cpy_r_r88 = NULL;
    return cpy_r_r88;
CPyL74: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL73;
CPyL75: ;
    CPy_DecRef(cpy_r_by_name);
    goto CPyL73;
CPyL76: ;
    CPy_DecRef(cpy_r_by_name);
    CPy_DecRef(cpy_r_r12);
    goto CPyL73;
CPyL77: ;
    CPy_DECREF(cpy_r_by_name);
    CPy_DECREF(cpy_r_by_pos);
    goto CPyL20;
CPyL78: ;
    CPy_DecRef(cpy_r_by_name);
    CPy_DecRef(cpy_r_by_pos);
    goto CPyL73;
CPyL79: ;
    CPy_DecRef(cpy_r_by_name);
    CPy_DecRef(cpy_r_by_pos);
    CPy_DecRef(cpy_r_r31);
    goto CPyL73;
CPyL80: ;
    CPy_DECREF(cpy_r_by_pos);
    goto CPyL28;
CPyL81: ;
    CPy_DecRef(cpy_r_by_name);
    CPy_DecRef(cpy_r_by_pos);
    CPy_DecRef(cpy_r_r58);
    goto CPyL73;
CPyL82: ;
    CPy_DecRef(cpy_r_by_name);
    CPy_DecRef(cpy_r_r69);
    goto CPyL73;
CPyL83: ;
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r72);
    goto CPyL73;
CPyL84: ;
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r72);
    CPy_DecRef(cpy_r_r75);
    goto CPyL73;
CPyL85: ;
    CPy_DECREF(cpy_r_by_pos);
    goto CPyL69;
CPyL86: ;
    CPy_DECREF(cpy_r_by_name);
    goto CPyL71;
}

PyObject *CPyPy_typeops___callable_corresponding_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", "model", 0};
    static CPyArg_Parser parser = {"OO:callable_corresponding_argument", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_model;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_model)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (Py_TYPE(obj_typ) == CPyType_types___CallableType)
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL7741;
    if (Py_TYPE(obj_typ) == CPyType_types___Parameters)
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL7741;
    CPy_TypeError("union[mypy.types.CallableType, mypy.types.Parameters]", obj_typ); 
    goto fail;
__LL7741: ;
    PyObject * arg_model;
    if (likely(PyTuple_Check(obj_model)))
        arg_model = obj_model;
    else {
        CPy_TypeError("tuple", obj_model); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___callable_corresponding_argument(arg_typ, arg_model);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "callable_corresponding_argument", 369, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___simple_literal_type(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = (PyObject *)CPyType_types___Instance;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL11;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r4 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "simple_literal_type", 401, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL10;
    }
    cpy_r_r5 = ((mypy___types___InstanceObject *)cpy_r_r4)->_last_known_value;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 != cpy_r_r6;
    if (!cpy_r_r7) goto CPyL11;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r8 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "simple_literal_type", 402, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL10;
    }
    cpy_r_r9 = ((mypy___types___InstanceObject *)cpy_r_r8)->_last_known_value;
    CPy_INCREF(cpy_r_r9);
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "simple_literal_type", 402, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_r9);
        goto CPyL10;
    }
    cpy_r_t = cpy_r_r10;
CPyL6: ;
    cpy_r_r11 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL12;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___LiteralType))
        cpy_r_r15 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "simple_literal_type", 404, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_t);
        goto CPyL13;
    }
    cpy_r_r16 = ((mypy___types___LiteralTypeObject *)cpy_r_r15)->_fallback;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_t);
    return cpy_r_r16;
CPyL9: ;
    cpy_r_r17 = Py_None;
    CPy_INCREF(cpy_r_r17);
    return cpy_r_r17;
CPyL10: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL11: ;
    CPy_INCREF(cpy_r_t);
    goto CPyL6;
CPyL12: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL9;
CPyL13: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL10;
}

PyObject *CPyPy_typeops___simple_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:simple_literal_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_t;
    if (PyObject_TypeCheck(obj_t, CPyType_types___ProperType))
        arg_t = obj_t;
    else {
        arg_t = NULL;
    }
    if (arg_t != NULL) goto __LL7742;
    if (obj_t == Py_None)
        arg_t = obj_t;
    else {
        arg_t = NULL;
    }
    if (arg_t != NULL) goto __LL7742;
    CPy_TypeError("mypy.types.ProperType or None", obj_t); 
    goto fail;
__LL7742: ;
    PyObject *retval = CPyDef_typeops___simple_literal_type(arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "simple_literal_type", 399, CPyStatic_typeops___globals);
    return NULL;
}

char CPyDef_typeops___is_simple_literal(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    cpy_r_r0 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL12;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___LiteralType))
        cpy_r_r4 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_simple_literal", 410, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_t);
        goto CPyL22;
    }
    cpy_r_r5 = ((mypy___types___LiteralTypeObject *)cpy_r_r4)->_fallback;
    cpy_r_r6 = ((mypy___types___InstanceObject *)cpy_r_r5)->_type;
    cpy_r_r7 = ((mypy___nodes___TypeInfoObject *)cpy_r_r6)->_is_enum;
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AttributeError("mypy/typeops.py", "is_simple_literal", "TypeInfo", "is_enum", 410, CPyStatic_typeops___globals);
        goto CPyL22;
    }
CPyL3: ;
    if (!cpy_r_r7) goto CPyL5;
CPyL4: ;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL11;
CPyL5: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___LiteralType))
        cpy_r_r9 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_simple_literal", 410, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_t);
        goto CPyL22;
    }
    cpy_r_r10 = ((mypy___types___LiteralTypeObject *)cpy_r_r9)->_fallback;
    cpy_r_r11 = ((mypy___types___InstanceObject *)cpy_r_r10)->_type;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPY_GET_ATTR(cpy_r_r11, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "is_simple_literal", 410, CPyStatic_typeops___globals);
        goto CPyL22;
    }
CPyL7: ;
    cpy_r_r13 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r14 = PyUnicode_Compare(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = cpy_r_r14 == -1;
    if (!cpy_r_r15) goto CPyL10;
    cpy_r_r16 = PyErr_Occurred();
    cpy_r_r17 = cpy_r_r16 != NULL;
    if (!cpy_r_r17) goto CPyL10;
    cpy_r_r18 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/typeops.py", "is_simple_literal", 410, CPyStatic_typeops___globals);
        goto CPyL22;
    }
CPyL10: ;
    cpy_r_r19 = cpy_r_r14 == 0;
    cpy_r_r8 = cpy_r_r19;
CPyL11: ;
    return cpy_r_r8;
CPyL12: ;
    cpy_r_r20 = (PyObject *)CPyType_types___Instance;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    if (!cpy_r_r23) goto CPyL21;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r24 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_simple_literal", 412, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL22;
    }
    cpy_r_r25 = ((mypy___types___InstanceObject *)cpy_r_r24)->_last_known_value;
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_r25 != cpy_r_r26;
    if (cpy_r_r27) goto CPyL16;
    cpy_r_r28 = cpy_r_r27;
    goto CPyL20;
CPyL16: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r29 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_simple_literal", 412, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL22;
    }
    cpy_r_r30 = ((mypy___types___InstanceObject *)cpy_r_r29)->_last_known_value;
    if (likely(cpy_r_r30 != Py_None))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_simple_literal", 412, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_r30);
        goto CPyL22;
    }
    cpy_r_r32 = ((mypy___types___LiteralTypeObject *)cpy_r_r31)->_value;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = (PyObject *)&PyUnicode_Type;
    cpy_r_r34 = PyObject_IsInstance(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/typeops.py", "is_simple_literal", 412, CPyStatic_typeops___globals);
        goto CPyL22;
    }
    cpy_r_r36 = cpy_r_r34;
    cpy_r_r28 = cpy_r_r36;
CPyL20: ;
    return cpy_r_r28;
CPyL21: ;
    return 0;
CPyL22: ;
    cpy_r_r37 = 2;
    return cpy_r_r37;
}

PyObject *CPyPy_typeops___is_simple_literal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:is_simple_literal", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___ProperType)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typeops___is_simple_literal(arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "is_simple_literal", 408, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___make_simplified_union(PyObject *cpy_r_items, CPyTagged cpy_r_line, CPyTagged cpy_r_column, char cpy_r_keep_erased, char cpy_r_contract_literals) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_simplified_set;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    int64_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    int64_t cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_nitems;
    int64_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    int64_t cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_extra_attrs_set;
    PyObject *cpy_r_r60;
    CPyTagged cpy_r_r61;
    CPyPtr cpy_r_r62;
    int64_t cpy_r_r63;
    CPyTagged cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_item_2;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_instance;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    CPyTagged cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyPtr cpy_r_r93;
    int64_t cpy_r_r94;
    CPyTagged cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_fallback;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    if (cpy_r_line != CPY_INT_TAG) goto CPyL77;
    cpy_r_line = -2;
CPyL2: ;
    if (cpy_r_column != CPY_INT_TAG) goto CPyL78;
    cpy_r_column = -2;
CPyL4: ;
    if (cpy_r_keep_erased != 2) goto CPyL6;
    cpy_r_keep_erased = 0;
CPyL6: ;
    if (cpy_r_contract_literals != 2) goto CPyL8;
    cpy_r_contract_literals = 1;
CPyL8: ;
    cpy_r_r0 = 2;
    cpy_r_r1 = CPyDef_types___flatten_nested_unions(cpy_r_items, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 448, CPyStatic_typeops___globals);
        goto CPyL79;
    }
    cpy_r_items = cpy_r_r1;
    if (likely(PyList_Check(cpy_r_items)))
        cpy_r_r2 = cpy_r_items;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 451, CPyStatic_typeops___globals, "list", cpy_r_items);
        goto CPyL80;
    }
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = cpy_r_r5 == 2;
    if (cpy_r_r6) {
        goto CPyL81;
    } else
        goto CPyL17;
CPyL11: ;
    if (likely(PyList_Check(cpy_r_items)))
        cpy_r_r7 = cpy_r_items;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 452, CPyStatic_typeops___globals, "list", cpy_r_items);
        goto CPyL82;
    }
    cpy_r_r8 = CPyList_GetItemShort(cpy_r_r7, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 452, CPyStatic_typeops___globals);
        goto CPyL82;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_types___Type)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 452, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r8);
        goto CPyL82;
    }
    CPy_DECREF(cpy_r_items);
    cpy_r_r10 = CPyDef_types___get_proper_type(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 452, CPyStatic_typeops___globals);
        goto CPyL76;
    }
    if (likely(cpy_r_r10 != Py_None))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 452, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r10);
        goto CPyL76;
    }
    return cpy_r_r11;
CPyL17: ;
    CPy_INCREF(cpy_r_items);
    if (likely(PyList_Check(cpy_r_items)))
        cpy_r_r12 = cpy_r_items;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 455, CPyStatic_typeops___globals, "list", cpy_r_items);
        goto CPyL80;
    }
    cpy_r_r13 = CPyDef_typeops____remove_redundant_union_items(cpy_r_r12, cpy_r_keep_erased);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 455, CPyStatic_typeops___globals);
        goto CPyL80;
    }
    cpy_r_simplified_set = cpy_r_r13;
    if (!cpy_r_contract_literals) goto CPyL31;
    cpy_r_r14 = 0;
    cpy_r_r15 = PyObject_GetIter(cpy_r_simplified_set);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 460, CPyStatic_typeops___globals);
        goto CPyL83;
    }
CPyL21: ;
    cpy_r_r16 = PyIter_Next(cpy_r_r15);
    if (cpy_r_r16 == NULL) goto CPyL84;
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_types___Type)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 460, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r16);
        goto CPyL85;
    }
    CPy_INCREF(cpy_r_r17);
    cpy_r_item = cpy_r_r17;
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = CPyDef_types___get_proper_type(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 460, CPyStatic_typeops___globals);
        goto CPyL86;
    }
    cpy_r_r19 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_r18)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    CPy_DECREF(cpy_r_r18);
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = cpy_r_r23;
    cpy_r_r25 = CPyTagged_Add(cpy_r_r14, cpy_r_r24);
    CPyTagged_DECREF(cpy_r_r14);
    CPyTagged_DECREF(cpy_r_r24);
    cpy_r_r14 = cpy_r_r25;
    goto CPyL21;
CPyL25: ;
    cpy_r_r26 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 460, CPyStatic_typeops___globals);
        goto CPyL83;
    }
    cpy_r_r27 = cpy_r_r14 & 1;
    cpy_r_r28 = cpy_r_r27 != 0;
    if (!cpy_r_r28) goto CPyL28;
    cpy_r_r29 = CPyTagged_IsLt_(2, cpy_r_r14);
    CPyTagged_DECREF(cpy_r_r14);
    if (cpy_r_r29) {
        goto CPyL29;
    } else
        goto CPyL31;
CPyL28: ;
    cpy_r_r30 = (Py_ssize_t)cpy_r_r14 > (Py_ssize_t)2;
    CPyTagged_DECREF(cpy_r_r14);
    if (!cpy_r_r30) goto CPyL31;
CPyL29: ;
    cpy_r_r31 = CPyDef_typeops___try_contracting_literals_in_union(cpy_r_simplified_set);
    CPy_DECREF(cpy_r_simplified_set);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 462, CPyStatic_typeops___globals);
        goto CPyL80;
    }
    cpy_r_simplified_set = cpy_r_r31;
CPyL31: ;
    cpy_r_r32 = CPyDef_types___UnionType___make_union(cpy_r_simplified_set, cpy_r_line, cpy_r_column);
    CPy_DECREF(cpy_r_simplified_set);
    CPyTagged_DECREF(cpy_r_line);
    CPyTagged_DECREF(cpy_r_column);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 464, CPyStatic_typeops___globals);
        goto CPyL82;
    }
    cpy_r_r33 = CPyDef_types___get_proper_type(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 464, CPyStatic_typeops___globals);
        goto CPyL82;
    }
    if (likely(cpy_r_r33 != Py_None))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 464, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r33);
        goto CPyL82;
    }
    cpy_r_result = cpy_r_r34;
    if (likely(PyList_Check(cpy_r_items)))
        cpy_r_r35 = cpy_r_items;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 466, CPyStatic_typeops___globals, "list", cpy_r_items);
        goto CPyL87;
    }
    cpy_r_r36 = (CPyPtr)&((PyVarObject *)cpy_r_r35)->ob_size;
    cpy_r_r37 = *(int64_t *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 << 1;
    cpy_r_nitems = cpy_r_r38;
    cpy_r_r39 = cpy_r_nitems & 1;
    cpy_r_r40 = cpy_r_r39 != 0;
    if (!cpy_r_r40) goto CPyL37;
    cpy_r_r41 = CPyTagged_IsLt_(2, cpy_r_nitems);
    if (cpy_r_r41) {
        goto CPyL38;
    } else
        goto CPyL88;
CPyL37: ;
    cpy_r_r42 = (Py_ssize_t)cpy_r_nitems > (Py_ssize_t)2;
    if (!cpy_r_r42) goto CPyL88;
CPyL38: ;
    cpy_r_r43 = cpy_r_nitems & 1;
    cpy_r_r44 = cpy_r_r43 != 0;
    if (!cpy_r_r44) goto CPyL40;
    cpy_r_r45 = CPyTagged_IsLt_(4, cpy_r_nitems);
    CPyTagged_DECREF(cpy_r_nitems);
    if (cpy_r_r45) {
        goto CPyL49;
    } else
        goto CPyL41;
CPyL40: ;
    cpy_r_r46 = (Py_ssize_t)cpy_r_nitems > (Py_ssize_t)4;
    CPyTagged_DECREF(cpy_r_nitems);
    if (cpy_r_r46) goto CPyL49;
CPyL41: ;
    if (likely(PyList_Check(cpy_r_items)))
        cpy_r_r47 = cpy_r_items;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 468, CPyStatic_typeops___globals, "list", cpy_r_items);
        goto CPyL87;
    }
    cpy_r_r48 = CPyList_GetItemShort(cpy_r_r47, 0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 468, CPyStatic_typeops___globals);
        goto CPyL87;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r48, CPyType_types___Type)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 468, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r48);
        goto CPyL87;
    }
    cpy_r_r50 = PyObject_Type(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r52 = cpy_r_r50 == cpy_r_r51;
    CPy_DECREF(cpy_r_r50);
    if (cpy_r_r52) goto CPyL89;
    if (likely(PyList_Check(cpy_r_items)))
        cpy_r_r53 = cpy_r_items;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 468, CPyStatic_typeops___globals, "list", cpy_r_items);
        goto CPyL87;
    }
    cpy_r_r54 = CPyList_GetItemShort(cpy_r_r53, 2);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 468, CPyStatic_typeops___globals);
        goto CPyL87;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r54, CPyType_types___Type)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 468, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r54);
        goto CPyL87;
    }
    cpy_r_r56 = PyObject_Type(cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r57 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r58 = cpy_r_r56 == cpy_r_r57;
    CPy_DECREF(cpy_r_r56);
    if (cpy_r_r58) goto CPyL89;
CPyL49: ;
    cpy_r_r59 = Py_None;
    CPy_INCREF(cpy_r_r59);
    cpy_r_extra_attrs_set = cpy_r_r59;
    if (likely(PyList_Check(cpy_r_items)))
        cpy_r_r60 = cpy_r_items;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 475, CPyStatic_typeops___globals, "list", cpy_r_items);
        goto CPyL90;
    }
    cpy_r_r61 = 0;
CPyL51: ;
    cpy_r_r62 = (CPyPtr)&((PyVarObject *)cpy_r_r60)->ob_size;
    cpy_r_r63 = *(int64_t *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 << 1;
    cpy_r_r65 = (Py_ssize_t)cpy_r_r61 < (Py_ssize_t)cpy_r_r64;
    if (!cpy_r_r65) goto CPyL91;
    cpy_r_r66 = CPyList_GetItemUnsafe(cpy_r_r60, cpy_r_r61);
    if (likely(PyObject_TypeCheck(cpy_r_r66, CPyType_types___Type)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 475, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r66);
        goto CPyL92;
    }
    cpy_r_item_2 = cpy_r_r67;
    cpy_r_r68 = CPyDef_typeops___try_getting_instance_fallback(cpy_r_item_2);
    CPy_DECREF(cpy_r_item_2);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 476, CPyStatic_typeops___globals);
        goto CPyL92;
    }
    cpy_r_instance = cpy_r_r68;
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = cpy_r_instance != cpy_r_r69;
    if (!cpy_r_r70) goto CPyL93;
    if (likely(cpy_r_instance != Py_None))
        cpy_r_r71 = cpy_r_instance;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 477, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_instance);
        goto CPyL94;
    }
    cpy_r_r72 = ((mypy___types___InstanceObject *)cpy_r_r71)->_extra_attrs;
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r74 = cpy_r_r72 != cpy_r_r73;
    CPy_DECREF(cpy_r_r72);
    if (!cpy_r_r74) goto CPyL93;
    cpy_r_r75 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r76 = cpy_r_extra_attrs_set == cpy_r_r75;
    if (cpy_r_r76) {
        goto CPyL95;
    } else
        goto CPyL63;
CPyL58: ;
    if (likely(cpy_r_instance != Py_None))
        cpy_r_r77 = cpy_r_instance;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 479, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_instance);
        goto CPyL96;
    }
    cpy_r_r78 = ((mypy___types___InstanceObject *)cpy_r_r77)->_extra_attrs;
    CPy_INCREF(cpy_r_r78);
    if (likely(cpy_r_r78 != Py_None))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 479, CPyStatic_typeops___globals, "mypy.types.ExtraAttrs", cpy_r_r78);
        goto CPyL96;
    }
    CPy_DECREF(cpy_r_instance);
    cpy_r_r80 = PySet_New(NULL);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 479, CPyStatic_typeops___globals);
        goto CPyL97;
    }
    cpy_r_r81 = PySet_Add(cpy_r_r80, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 479, CPyStatic_typeops___globals);
        goto CPyL98;
    }
    cpy_r_extra_attrs_set = cpy_r_r80;
    goto CPyL67;
CPyL63: ;
    CPy_INCREF(cpy_r_extra_attrs_set);
    if (likely(cpy_r_extra_attrs_set != Py_None))
        cpy_r_r83 = cpy_r_extra_attrs_set;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 481, CPyStatic_typeops___globals, "set", cpy_r_extra_attrs_set);
        goto CPyL94;
    }
    if (likely(cpy_r_instance != Py_None))
        cpy_r_r84 = cpy_r_instance;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 481, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_instance);
        goto CPyL99;
    }
    cpy_r_r85 = ((mypy___types___InstanceObject *)cpy_r_r84)->_extra_attrs;
    CPy_INCREF(cpy_r_r85);
    if (likely(cpy_r_r85 != Py_None))
        cpy_r_r86 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 481, CPyStatic_typeops___globals, "mypy.types.ExtraAttrs", cpy_r_r85);
        goto CPyL99;
    }
    CPy_DECREF(cpy_r_instance);
    cpy_r_r87 = PySet_Add(cpy_r_r83, cpy_r_r86);
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 481, CPyStatic_typeops___globals);
        goto CPyL92;
    }
CPyL67: ;
    cpy_r_r89 = cpy_r_r61 + 2;
    cpy_r_r61 = cpy_r_r89;
    goto CPyL51;
CPyL68: ;
    cpy_r_r90 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r91 = cpy_r_extra_attrs_set != cpy_r_r90;
    if (!cpy_r_r91) goto CPyL100;
    if (likely(cpy_r_extra_attrs_set != Py_None))
        cpy_r_r92 = cpy_r_extra_attrs_set;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 483, CPyStatic_typeops___globals, "set", cpy_r_extra_attrs_set);
        goto CPyL101;
    }
    cpy_r_r93 = (CPyPtr)&((PySetObject *)cpy_r_r92)->used;
    cpy_r_r94 = *(int64_t *)cpy_r_r93;
    CPy_DECREF(cpy_r_r92);
    cpy_r_r95 = cpy_r_r94 << 1;
    cpy_r_r96 = (Py_ssize_t)cpy_r_r95 > (Py_ssize_t)2;
    if (!cpy_r_r96) goto CPyL75;
    cpy_r_r97 = CPyDef_typeops___try_getting_instance_fallback(cpy_r_result);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 484, CPyStatic_typeops___globals);
        goto CPyL101;
    }
    cpy_r_fallback = cpy_r_r97;
    cpy_r_r98 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r99 = cpy_r_fallback != cpy_r_r98;
    if (!cpy_r_r99) goto CPyL102;
    if (likely(cpy_r_fallback != Py_None))
        cpy_r_r100 = cpy_r_fallback;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "make_simplified_union", 486, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_fallback);
        goto CPyL103;
    }
    cpy_r_r101 = Py_None;
    CPy_INCREF(cpy_r_r101);
    CPy_DECREF(((mypy___types___InstanceObject *)cpy_r_r100)->_extra_attrs);
    ((mypy___types___InstanceObject *)cpy_r_r100)->_extra_attrs = cpy_r_r101;
    CPy_DECREF(cpy_r_fallback);
CPyL75: ;
    return cpy_r_result;
CPyL76: ;
    cpy_r_r103 = NULL;
    return cpy_r_r103;
CPyL77: ;
    CPyTagged_INCREF(cpy_r_line);
    goto CPyL2;
CPyL78: ;
    CPyTagged_INCREF(cpy_r_column);
    goto CPyL4;
CPyL79: ;
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    goto CPyL76;
CPyL80: ;
    CPy_DecRef(cpy_r_items);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    goto CPyL76;
CPyL81: ;
    CPyTagged_DECREF(cpy_r_line);
    CPyTagged_DECREF(cpy_r_column);
    goto CPyL11;
CPyL82: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL76;
CPyL83: ;
    CPy_DecRef(cpy_r_items);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_simplified_set);
    CPyTagged_DecRef(cpy_r_r14);
    goto CPyL76;
CPyL84: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL25;
CPyL85: ;
    CPy_DecRef(cpy_r_items);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_simplified_set);
    CPyTagged_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    goto CPyL76;
CPyL86: ;
    CPy_DecRef(cpy_r_items);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_simplified_set);
    CPyTagged_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    goto CPyL76;
CPyL87: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_result);
    goto CPyL76;
CPyL88: ;
    CPy_DECREF(cpy_r_items);
    CPyTagged_DECREF(cpy_r_nitems);
    goto CPyL75;
CPyL89: ;
    CPy_DECREF(cpy_r_items);
    goto CPyL75;
CPyL90: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_extra_attrs_set);
    goto CPyL76;
CPyL91: ;
    CPy_DECREF(cpy_r_r60);
    goto CPyL68;
CPyL92: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_extra_attrs_set);
    CPy_DecRef(cpy_r_r60);
    goto CPyL76;
CPyL93: ;
    CPy_DECREF(cpy_r_instance);
    goto CPyL67;
CPyL94: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_extra_attrs_set);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_instance);
    goto CPyL76;
CPyL95: ;
    CPy_DECREF(cpy_r_extra_attrs_set);
    goto CPyL58;
CPyL96: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_instance);
    goto CPyL76;
CPyL97: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r79);
    goto CPyL76;
CPyL98: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r80);
    goto CPyL76;
CPyL99: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_extra_attrs_set);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_r83);
    goto CPyL76;
CPyL100: ;
    CPy_DECREF(cpy_r_extra_attrs_set);
    goto CPyL75;
CPyL101: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL76;
CPyL102: ;
    CPy_DECREF(cpy_r_fallback);
    goto CPyL75;
CPyL103: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_fallback);
    goto CPyL76;
}

PyObject *CPyPy_typeops___make_simplified_union(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"items", "line", "column", "keep_erased", "contract_literals", 0};
    static CPyArg_Parser parser = {"O|OO$OO:make_simplified_union", kwlist, 0};
    PyObject *obj_items;
    PyObject *obj_line = NULL;
    PyObject *obj_column = NULL;
    PyObject *obj_keep_erased = NULL;
    PyObject *obj_contract_literals = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_items, &obj_line, &obj_column, &obj_keep_erased, &obj_contract_literals)) {
        return NULL;
    }
    PyObject *arg_items = obj_items;
    CPyTagged arg_line;
    if (obj_line == NULL) {
        arg_line = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    CPyTagged arg_column;
    if (obj_column == NULL) {
        arg_column = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_column)))
        arg_column = CPyTagged_BorrowFromObject(obj_column);
    else {
        CPy_TypeError("int", obj_column); goto fail;
    }
    char arg_keep_erased;
    if (obj_keep_erased == NULL) {
        arg_keep_erased = 2;
    } else if (unlikely(!PyBool_Check(obj_keep_erased))) {
        CPy_TypeError("bool", obj_keep_erased); goto fail;
    } else
        arg_keep_erased = obj_keep_erased == Py_True;
    char arg_contract_literals;
    if (obj_contract_literals == NULL) {
        arg_contract_literals = 2;
    } else if (unlikely(!PyBool_Check(obj_contract_literals))) {
        CPy_TypeError("bool", obj_contract_literals); goto fail;
    } else
        arg_contract_literals = obj_contract_literals == Py_True;
    PyObject *retval = CPyDef_typeops___make_simplified_union(arg_items, arg_line, arg_column, arg_keep_erased, arg_contract_literals);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "make_simplified_union", 416, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops____remove_redundant_union_items(PyObject *cpy_r_items, char cpy_r_keep_erased) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r__direction;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_new_items;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_seen;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_unduplicated_literal_fallbacks;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_ti;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_proper_ti;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_duplicate_index;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_j;
    CPyTagged cpy_r_r40;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_tj;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    CPyTagged cpy_r_r73;
    CPyTagged cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_orig_item;
    char cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    CPyPtr cpy_r_r86;
    int64_t cpy_r_r87;
    CPyTagged cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyPtr cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    int32_t cpy_r_r104;
    char cpy_r_r105;
    CPyTagged cpy_r_r106;
    CPyPtr cpy_r_r107;
    int64_t cpy_r_r108;
    CPyTagged cpy_r_r109;
    char cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    CPyTagged cpy_r_r113;
    PyObject *cpy_r_r114;
    cpy_r_r0 = CPyStatics[9864]; /* ('is_proper_subtype',) */
    cpy_r_r1 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r2 = CPyStatic_typeops___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 492, CPyStatic_typeops___globals);
        goto CPyL71;
    }
    CPyModule_mypy___subtypes = cpy_r_r3;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = 0;
    cpy_r__direction = cpy_r_r4;
    CPyTagged_DECREF(cpy_r__direction);
    goto CPyL72;
CPyL2: ;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)4;
    if (!cpy_r_r5) goto CPyL70;
    cpy_r_r6 = PyList_New(0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 498, CPyStatic_typeops___globals);
        goto CPyL73;
    }
    cpy_r_new_items = cpy_r_r6;
    cpy_r_r7 = PyDict_New();
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 500, CPyStatic_typeops___globals);
        goto CPyL74;
    }
    cpy_r_seen = cpy_r_r7;
    cpy_r_r8 = Py_None;
    CPy_INCREF(cpy_r_r8);
    cpy_r_unduplicated_literal_fallbacks = cpy_r_r8;
    cpy_r_r9 = 0;
CPyL6: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL75;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r9);
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_types___Type)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_remove_redundant_union_items", 502, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r14);
        goto CPyL76;
    }
    cpy_r_ti = cpy_r_r15;
    cpy_r_r16 = CPyDef_types___get_proper_type(cpy_r_ti);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 503, CPyStatic_typeops___globals);
        goto CPyL77;
    }
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_remove_redundant_union_items", 503, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r16);
        goto CPyL77;
    }
    cpy_r_proper_ti = cpy_r_r17;
    cpy_r_r18 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_proper_ti)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (cpy_r_r21) goto CPyL78;
    cpy_r_duplicate_index = -2;
    cpy_r_r22 = PyDict_Contains(cpy_r_seen, cpy_r_proper_ti);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 511, CPyStatic_typeops___globals);
        goto CPyL79;
    }
    cpy_r_r24 = cpy_r_r22;
    if (cpy_r_r24) {
        goto CPyL80;
    } else
        goto CPyL16;
CPyL13: ;
    cpy_r_r25 = CPyDict_GetItem(cpy_r_seen, cpy_r_proper_ti);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 512, CPyStatic_typeops___globals);
        goto CPyL81;
    }
    if (likely(PyLong_Check(cpy_r_r25)))
        cpy_r_r26 = CPyTagged_FromObject(cpy_r_r25);
    else {
        CPy_TypeError("int", cpy_r_r25); cpy_r_r26 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 512, CPyStatic_typeops___globals);
        goto CPyL81;
    }
    cpy_r_duplicate_index = cpy_r_r26;
    goto CPyL42;
CPyL16: ;
    cpy_r_r27 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r28 = (CPyPtr)&((PyObject *)cpy_r_proper_ti)->ob_type;
    cpy_r_r29 = *(PyObject * *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 == cpy_r_r27;
    if (!cpy_r_r30) goto CPyL22;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_unduplicated_literal_fallbacks != cpy_r_r31;
    if (!cpy_r_r32) goto CPyL22;
    if (likely(Py_TYPE(cpy_r_proper_ti) == CPyType_types___LiteralType))
        cpy_r_r33 = cpy_r_proper_ti;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_remove_redundant_union_items", 516, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_proper_ti);
        goto CPyL79;
    }
    cpy_r_r34 = ((mypy___types___LiteralTypeObject *)cpy_r_r33)->_fallback;
    CPy_INCREF(cpy_r_r34);
    CPy_INCREF(cpy_r_unduplicated_literal_fallbacks);
    if (likely(cpy_r_unduplicated_literal_fallbacks != Py_None))
        cpy_r_r35 = cpy_r_unduplicated_literal_fallbacks;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_remove_redundant_union_items", 516, CPyStatic_typeops___globals, "set", cpy_r_unduplicated_literal_fallbacks);
        goto CPyL82;
    }
    cpy_r_r36 = PySet_Contains(cpy_r_r35, cpy_r_r34);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 516, CPyStatic_typeops___globals);
        goto CPyL79;
    }
    cpy_r_r38 = cpy_r_r36;
    if (cpy_r_r38) goto CPyL42;
CPyL22: ;
    cpy_r_r39 = 0;
    cpy_r_j = 0;
    cpy_r_r40 = 0;
CPyL23: ;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_new_items)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 << 1;
    cpy_r_r44 = (Py_ssize_t)cpy_r_r40 < (Py_ssize_t)cpy_r_r43;
    if (!cpy_r_r44) goto CPyL83;
    cpy_r_r45 = CPyList_GetItemUnsafe(cpy_r_new_items, cpy_r_r40);
    if (likely(PyObject_TypeCheck(cpy_r_r45, CPyType_types___Type)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_remove_redundant_union_items", 527, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r45);
        goto CPyL84;
    }
    cpy_r_tj = cpy_r_r46;
    cpy_r_r47 = CPyDef_types___get_proper_type(cpy_r_tj);
    CPy_DECREF(cpy_r_tj);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 528, CPyStatic_typeops___globals);
        goto CPyL84;
    }
    if (likely(cpy_r_r47 != Py_None))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_remove_redundant_union_items", 528, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r47);
        goto CPyL84;
    }
    cpy_r_tj = cpy_r_r48;
    cpy_r_r49 = (PyObject *)CPyType_types___Instance;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_tj)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    if (!cpy_r_r52) goto CPyL37;
    if (likely(Py_TYPE(cpy_r_tj) == CPyType_types___Instance))
        cpy_r_r53 = cpy_r_tj;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_remove_redundant_union_items", 533, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_tj);
        goto CPyL85;
    }
    cpy_r_r54 = ((mypy___types___InstanceObject *)cpy_r_r53)->_last_known_value;
    cpy_r_r55 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r56 = cpy_r_r54 != cpy_r_r55;
    if (!cpy_r_r56) goto CPyL37;
    cpy_r_r57 = (PyObject *)CPyType_types___Instance;
    cpy_r_r58 = (CPyPtr)&((PyObject *)cpy_r_proper_ti)->ob_type;
    cpy_r_r59 = *(PyObject * *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 == cpy_r_r57;
    if (!cpy_r_r60) goto CPyL86;
    if (likely(Py_TYPE(cpy_r_tj) == CPyType_types___Instance))
        cpy_r_r61 = cpy_r_tj;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_remove_redundant_union_items", 536, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_tj);
        goto CPyL85;
    }
    cpy_r_r62 = ((mypy___types___InstanceObject *)cpy_r_r61)->_last_known_value;
    CPy_INCREF(cpy_r_r62);
    if (likely(cpy_r_r62 != Py_None))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_remove_redundant_union_items", 536, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_r62);
        goto CPyL85;
    }
    if (likely(Py_TYPE(cpy_r_proper_ti) == CPyType_types___Instance))
        cpy_r_r64 = cpy_r_proper_ti;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_remove_redundant_union_items", 536, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_proper_ti);
        goto CPyL87;
    }
    cpy_r_r65 = ((mypy___types___InstanceObject *)cpy_r_r64)->_last_known_value;
    CPy_INCREF(cpy_r_r65);
    cpy_r_r66 = PyObject_RichCompare(cpy_r_r63, cpy_r_r65, 2);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 536, CPyStatic_typeops___globals);
        goto CPyL85;
    }
    if (unlikely(!PyBool_Check(cpy_r_r66))) {
        CPy_TypeError("bool", cpy_r_r66); cpy_r_r67 = 2;
    } else
        cpy_r_r67 = cpy_r_r66 == Py_True;
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 536, CPyStatic_typeops___globals);
        goto CPyL85;
    }
    if (!cpy_r_r67) goto CPyL86;
CPyL37: ;
    if (likely(PyObject_TypeCheck(cpy_r_tj, CPyType_types___ProperType)))
        cpy_r_r68 = cpy_r_tj;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_remove_redundant_union_items", 542, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_tj);
        goto CPyL84;
    }
    cpy_r_r69 = NULL;
    cpy_r_r70 = 2;
    cpy_r_r71 = 2;
    cpy_r_r72 = CPyDef_subtypes___is_proper_subtype(cpy_r_ti, cpy_r_r68, cpy_r_r69, 1, cpy_r_r70, cpy_r_r71, cpy_r_keep_erased);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r72 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 541, CPyStatic_typeops___globals);
        goto CPyL84;
    }
    if (cpy_r_r72) {
        goto CPyL88;
    } else
        goto CPyL89;
CPyL40: ;
    cpy_r_duplicate_index = cpy_r_j;
    goto CPyL42;
CPyL41: ;
    cpy_r_r73 = cpy_r_r39 + 2;
    cpy_r_r39 = cpy_r_r73;
    cpy_r_j = cpy_r_r73;
    cpy_r_r74 = cpy_r_r40 + 2;
    cpy_r_r40 = cpy_r_r74;
    goto CPyL23;
CPyL42: ;
    cpy_r_r75 = (Py_ssize_t)cpy_r_duplicate_index != -2;
    if (cpy_r_r75) {
        goto CPyL90;
    } else
        goto CPyL91;
CPyL43: ;
    cpy_r_r76 = CPyList_GetItem(cpy_r_new_items, cpy_r_duplicate_index);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 548, CPyStatic_typeops___globals);
        goto CPyL92;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r76, CPyType_types___Type)))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_remove_redundant_union_items", 548, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r76);
        goto CPyL92;
    }
    cpy_r_orig_item = cpy_r_r77;
    cpy_r_r78 = CPY_GET_ATTR(cpy_r_orig_item, CPyType_types___Type, 3, mypy___types___TypeObject, char); /* can_be_true */
    if (unlikely(cpy_r_r78 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 549, CPyStatic_typeops___globals);
        goto CPyL93;
    }
CPyL46: ;
    if (cpy_r_r78) goto CPyL51;
CPyL47: ;
    cpy_r_r79 = CPY_GET_ATTR(cpy_r_ti, CPyType_types___Type, 3, mypy___types___TypeObject, char); /* can_be_true */
    if (unlikely(cpy_r_r79 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 549, CPyStatic_typeops___globals);
        goto CPyL93;
    }
CPyL48: ;
    if (cpy_r_r79) {
        goto CPyL94;
    } else
        goto CPyL51;
CPyL49: ;
    cpy_r_r80 = CPyDef_typeops___true_or_false(cpy_r_orig_item);
    CPy_DECREF(cpy_r_orig_item);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 550, CPyStatic_typeops___globals);
        goto CPyL95;
    }
    cpy_r_r81 = CPyList_SetItem(cpy_r_new_items, cpy_r_duplicate_index, cpy_r_r80);
    CPyTagged_DECREF(cpy_r_duplicate_index);
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 550, CPyStatic_typeops___globals);
        goto CPyL76;
    } else
        goto CPyL66;
CPyL51: ;
    cpy_r_r82 = CPY_GET_ATTR(cpy_r_orig_item, CPyType_types___Type, 5, mypy___types___TypeObject, char); /* can_be_false */
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 551, CPyStatic_typeops___globals);
        goto CPyL93;
    }
CPyL52: ;
    if (cpy_r_r82) goto CPyL96;
CPyL53: ;
    cpy_r_r83 = CPY_GET_ATTR(cpy_r_ti, CPyType_types___Type, 5, mypy___types___TypeObject, char); /* can_be_false */
    CPy_DECREF(cpy_r_ti);
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 551, CPyStatic_typeops___globals);
        goto CPyL97;
    }
CPyL54: ;
    if (!cpy_r_r83) goto CPyL98;
CPyL55: ;
    cpy_r_r84 = CPyDef_typeops___true_or_false(cpy_r_orig_item);
    CPy_DECREF(cpy_r_orig_item);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 552, CPyStatic_typeops___globals);
        goto CPyL95;
    }
    cpy_r_r85 = CPyList_SetItem(cpy_r_new_items, cpy_r_duplicate_index, cpy_r_r84);
    CPyTagged_DECREF(cpy_r_duplicate_index);
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 552, CPyStatic_typeops___globals);
        goto CPyL76;
    } else
        goto CPyL66;
CPyL57: ;
    cpy_r_r86 = (CPyPtr)&((PyVarObject *)cpy_r_new_items)->ob_size;
    cpy_r_r87 = *(int64_t *)cpy_r_r86;
    cpy_r_r88 = cpy_r_r87 << 1;
    cpy_r_r89 = CPyTagged_StealAsObject(cpy_r_r88);
    cpy_r_r90 = CPyDict_SetItem(cpy_r_seen, cpy_r_proper_ti, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 555, CPyStatic_typeops___globals);
        goto CPyL81;
    }
    cpy_r_r92 = PyList_Append(cpy_r_new_items, cpy_r_ti);
    CPy_DECREF(cpy_r_ti);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 556, CPyStatic_typeops___globals);
        goto CPyL99;
    }
    cpy_r_r94 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r95 = (CPyPtr)&((PyObject *)cpy_r_proper_ti)->ob_type;
    cpy_r_r96 = *(PyObject * *)cpy_r_r95;
    cpy_r_r97 = cpy_r_r96 == cpy_r_r94;
    if (!cpy_r_r97) goto CPyL100;
    cpy_r_r98 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r99 = cpy_r_unduplicated_literal_fallbacks == cpy_r_r98;
    if (cpy_r_r99) {
        goto CPyL101;
    } else
        goto CPyL63;
CPyL61: ;
    cpy_r_r100 = PySet_New(NULL);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 559, CPyStatic_typeops___globals);
        goto CPyL102;
    }
    cpy_r_unduplicated_literal_fallbacks = cpy_r_r100;
CPyL63: ;
    CPy_INCREF(cpy_r_unduplicated_literal_fallbacks);
    if (likely(cpy_r_unduplicated_literal_fallbacks != Py_None))
        cpy_r_r101 = cpy_r_unduplicated_literal_fallbacks;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_remove_redundant_union_items", 560, CPyStatic_typeops___globals, "set", cpy_r_unduplicated_literal_fallbacks);
        goto CPyL99;
    }
    if (likely(Py_TYPE(cpy_r_proper_ti) == CPyType_types___LiteralType))
        cpy_r_r102 = cpy_r_proper_ti;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_remove_redundant_union_items", 560, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_proper_ti);
        goto CPyL103;
    }
    cpy_r_r103 = ((mypy___types___LiteralTypeObject *)cpy_r_r102)->_fallback;
    CPy_INCREF(cpy_r_r103);
    CPy_DECREF(cpy_r_proper_ti);
    cpy_r_r104 = PySet_Add(cpy_r_r101, cpy_r_r103);
    CPy_DECREF(cpy_r_r101);
    CPy_DECREF(cpy_r_r103);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 560, CPyStatic_typeops___globals);
        goto CPyL76;
    }
CPyL66: ;
    cpy_r_r106 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r106;
    goto CPyL6;
CPyL67: ;
    cpy_r_items = cpy_r_new_items;
    cpy_r_r107 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r108 = *(int64_t *)cpy_r_r107;
    cpy_r_r109 = cpy_r_r108 << 1;
    cpy_r_r110 = (Py_ssize_t)cpy_r_r109 <= (Py_ssize_t)2;
    if (cpy_r_r110) goto CPyL70;
    cpy_r_r111 = PyList_Reverse(cpy_r_items);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 565, CPyStatic_typeops___globals);
        goto CPyL73;
    }
    cpy_r_r113 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r113;
    cpy_r__direction = cpy_r_r113;
    CPyTagged_DECREF(cpy_r__direction);
    goto CPyL2;
CPyL70: ;
    return cpy_r_items;
CPyL71: ;
    cpy_r_r114 = NULL;
    return cpy_r_r114;
CPyL72: ;
    CPy_INCREF(cpy_r_items);
    goto CPyL2;
CPyL73: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL71;
CPyL74: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    goto CPyL71;
CPyL75: ;
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_seen);
    CPy_DECREF(cpy_r_unduplicated_literal_fallbacks);
    goto CPyL67;
CPyL76: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unduplicated_literal_fallbacks);
    goto CPyL71;
CPyL77: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unduplicated_literal_fallbacks);
    CPy_DecRef(cpy_r_ti);
    goto CPyL71;
CPyL78: ;
    CPy_DECREF(cpy_r_ti);
    CPy_DECREF(cpy_r_proper_ti);
    goto CPyL66;
CPyL79: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unduplicated_literal_fallbacks);
    CPy_DecRef(cpy_r_ti);
    CPy_DecRef(cpy_r_proper_ti);
    CPyTagged_DecRef(cpy_r_duplicate_index);
    goto CPyL71;
CPyL80: ;
    CPyTagged_DECREF(cpy_r_duplicate_index);
    goto CPyL13;
CPyL81: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unduplicated_literal_fallbacks);
    CPy_DecRef(cpy_r_ti);
    CPy_DecRef(cpy_r_proper_ti);
    goto CPyL71;
CPyL82: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unduplicated_literal_fallbacks);
    CPy_DecRef(cpy_r_ti);
    CPy_DecRef(cpy_r_proper_ti);
    CPyTagged_DecRef(cpy_r_duplicate_index);
    CPy_DecRef(cpy_r_r34);
    goto CPyL71;
CPyL83: ;
    CPyTagged_DECREF(cpy_r_j);
    goto CPyL42;
CPyL84: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unduplicated_literal_fallbacks);
    CPy_DecRef(cpy_r_ti);
    CPy_DecRef(cpy_r_proper_ti);
    CPyTagged_DecRef(cpy_r_duplicate_index);
    CPyTagged_DecRef(cpy_r_j);
    goto CPyL71;
CPyL85: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unduplicated_literal_fallbacks);
    CPy_DecRef(cpy_r_ti);
    CPy_DecRef(cpy_r_proper_ti);
    CPyTagged_DecRef(cpy_r_duplicate_index);
    CPyTagged_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_tj);
    goto CPyL71;
CPyL86: ;
    CPyTagged_DECREF(cpy_r_j);
    CPy_DECREF(cpy_r_tj);
    goto CPyL41;
CPyL87: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unduplicated_literal_fallbacks);
    CPy_DecRef(cpy_r_ti);
    CPy_DecRef(cpy_r_proper_ti);
    CPyTagged_DecRef(cpy_r_duplicate_index);
    CPyTagged_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_tj);
    CPy_DecRef(cpy_r_r63);
    goto CPyL71;
CPyL88: ;
    CPyTagged_DECREF(cpy_r_duplicate_index);
    goto CPyL40;
CPyL89: ;
    CPyTagged_DECREF(cpy_r_j);
    goto CPyL41;
CPyL90: ;
    CPy_DECREF(cpy_r_proper_ti);
    goto CPyL43;
CPyL91: ;
    CPyTagged_DECREF(cpy_r_duplicate_index);
    goto CPyL57;
CPyL92: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unduplicated_literal_fallbacks);
    CPy_DecRef(cpy_r_ti);
    CPyTagged_DecRef(cpy_r_duplicate_index);
    goto CPyL71;
CPyL93: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unduplicated_literal_fallbacks);
    CPy_DecRef(cpy_r_ti);
    CPyTagged_DecRef(cpy_r_duplicate_index);
    CPy_DecRef(cpy_r_orig_item);
    goto CPyL71;
CPyL94: ;
    CPy_DECREF(cpy_r_ti);
    goto CPyL49;
CPyL95: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unduplicated_literal_fallbacks);
    CPyTagged_DecRef(cpy_r_duplicate_index);
    goto CPyL71;
CPyL96: ;
    CPy_DECREF(cpy_r_ti);
    CPyTagged_DECREF(cpy_r_duplicate_index);
    CPy_DECREF(cpy_r_orig_item);
    goto CPyL66;
CPyL97: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unduplicated_literal_fallbacks);
    CPyTagged_DecRef(cpy_r_duplicate_index);
    CPy_DecRef(cpy_r_orig_item);
    goto CPyL71;
CPyL98: ;
    CPyTagged_DECREF(cpy_r_duplicate_index);
    CPy_DECREF(cpy_r_orig_item);
    goto CPyL66;
CPyL99: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unduplicated_literal_fallbacks);
    CPy_DecRef(cpy_r_proper_ti);
    goto CPyL71;
CPyL100: ;
    CPy_DECREF(cpy_r_proper_ti);
    goto CPyL66;
CPyL101: ;
    CPy_DECREF(cpy_r_unduplicated_literal_fallbacks);
    goto CPyL61;
CPyL102: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_proper_ti);
    goto CPyL71;
CPyL103: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unduplicated_literal_fallbacks);
    CPy_DecRef(cpy_r_proper_ti);
    CPy_DecRef(cpy_r_r101);
    goto CPyL71;
}

PyObject *CPyPy_typeops____remove_redundant_union_items(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"items", "keep_erased", 0};
    static CPyArg_Parser parser = {"OO:_remove_redundant_union_items", kwlist, 0};
    PyObject *obj_items;
    PyObject *obj_keep_erased;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_items, &obj_keep_erased)) {
        return NULL;
    }
    PyObject *arg_items;
    if (likely(PyList_Check(obj_items)))
        arg_items = obj_items;
    else {
        CPy_TypeError("list", obj_items); 
        goto fail;
    }
    char arg_keep_erased;
    if (unlikely(!PyBool_Check(obj_keep_erased))) {
        CPy_TypeError("bool", obj_keep_erased); goto fail;
    } else
        arg_keep_erased = obj_keep_erased == Py_True;
    PyObject *retval = CPyDef_typeops____remove_redundant_union_items(arg_items, arg_keep_erased);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "_remove_redundant_union_items", 491, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops____get_type_special_method_bool_ret_type(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_bool_method;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_callee;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_get_type_special_method_bool_ret_type", 571, CPyStatic_typeops___globals);
        goto CPyL13;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_get_type_special_method_bool_ret_type", 571, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL13;
    }
    cpy_r_t = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___Instance;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r6 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_get_type_special_method_bool_ret_type", 574, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL15;
    }
    cpy_r_r7 = ((mypy___types___InstanceObject *)cpy_r_r6)->_type;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_t);
    cpy_r_r8 = CPyStatics[847]; /* '__bool__' */
    cpy_r_r9 = CPyDef_nodes___TypeInfo___get(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_get_type_special_method_bool_ret_type", 574, CPyStatic_typeops___globals);
        goto CPyL13;
    }
    cpy_r_bool_method = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_bool_method != cpy_r_r10;
    if (!cpy_r_r11) goto CPyL16;
    if (likely(cpy_r_bool_method != Py_None))
        cpy_r_r12 = cpy_r_bool_method;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_get_type_special_method_bool_ret_type", 576, CPyStatic_typeops___globals, "mypy.nodes.SymbolTableNode", cpy_r_bool_method);
        goto CPyL13;
    }
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_r12, CPyType_nodes___SymbolTableNode, 2, mypy___nodes___SymbolTableNodeObject, PyObject *); /* type */
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_get_type_special_method_bool_ret_type", 576, CPyStatic_typeops___globals);
        goto CPyL13;
    }
CPyL8: ;
    cpy_r_r14 = CPyDef_types___get_proper_type(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_get_type_special_method_bool_ret_type", 576, CPyStatic_typeops___globals);
        goto CPyL13;
    }
    cpy_r_callee = cpy_r_r14;
    cpy_r_r15 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (!cpy_r_r18) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_types___CallableType))
        cpy_r_r19 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_get_type_special_method_bool_ret_type", 578, CPyStatic_typeops___globals, "mypy.types.CallableType", cpy_r_callee);
        goto CPyL18;
    }
    cpy_r_r20 = ((mypy___types___CallableTypeObject *)cpy_r_r19)->_ret_type;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_callee);
    return cpy_r_r20;
CPyL12: ;
    cpy_r_r21 = Py_None;
    CPy_INCREF(cpy_r_r21);
    return cpy_r_r21;
CPyL13: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL14: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL13;
CPyL16: ;
    CPy_DECREF(cpy_r_bool_method);
    goto CPyL12;
CPyL17: ;
    CPy_DECREF(cpy_r_callee);
    goto CPyL12;
CPyL18: ;
    CPy_DecRef(cpy_r_callee);
    goto CPyL13;
}

PyObject *CPyPy_typeops____get_type_special_method_bool_ret_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:_get_type_special_method_bool_ret_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___Type)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops____get_type_special_method_bool_ret_type(arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "_get_type_special_method_bool_ret_type", 570, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___true_only(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_new_items;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_item_2;
    char cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_can_be_true_items;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_ret_type;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_new_t;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 587, CPyStatic_typeops___globals);
        goto CPyL52;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_only", 587, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL52;
    }
    cpy_r_t = cpy_r_r1;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r2 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_only", 589, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL53;
    }
    cpy_r_r3 = CPY_GET_ATTR(cpy_r_r2, CPyType_types___ProperType, 3, mypy___types___ProperTypeObject, char); /* can_be_true */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 589, CPyStatic_typeops___globals);
        goto CPyL53;
    }
CPyL4: ;
    if (cpy_r_r3) goto CPyL9;
CPyL5: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r4 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_only", 591, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL53;
    }
    cpy_r_r5 = ((mypy___types___ProperTypeObject *)cpy_r_r4)->_line;
    CPyTagged_INCREF(cpy_r_r5);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r6 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_only", 591, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL54;
    }
    cpy_r_r7 = ((mypy___types___ProperTypeObject *)cpy_r_r6)->_column;
    CPyTagged_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_t);
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyDef_types___UninhabitedType(cpy_r_r8, cpy_r_r5, cpy_r_r7);
    CPyTagged_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 591, CPyStatic_typeops___globals);
        goto CPyL52;
    }
    return cpy_r_r9;
CPyL9: ;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r10 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_only", 592, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL53;
    }
    cpy_r_r11 = CPY_GET_ATTR(cpy_r_r10, CPyType_types___ProperType, 5, mypy___types___ProperTypeObject, char); /* can_be_false */
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 592, CPyStatic_typeops___globals);
        goto CPyL53;
    }
CPyL11: ;
    if (cpy_r_r11) goto CPyL14;
CPyL12: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r12 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_only", 594, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL52;
    }
    return cpy_r_r12;
CPyL14: ;
    cpy_r_r13 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL35;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r17 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_only", 597, CPyStatic_typeops___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL53;
    }
    cpy_r_r18 = ((mypy___types___UnionTypeObject *)cpy_r_r17)->_items;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = PyList_New(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 597, CPyStatic_typeops___globals);
        goto CPyL55;
    }
    cpy_r_r22 = 0;
CPyL18: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL56;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_r18, cpy_r_r22);
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_types___Type)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_only", 597, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r27);
        goto CPyL57;
    }
    cpy_r_item = cpy_r_r28;
    cpy_r_r29 = CPyDef_typeops___true_only(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 597, CPyStatic_typeops___globals);
        goto CPyL57;
    }
    cpy_r_r30 = CPyList_SetItemUnsafe(cpy_r_r21, cpy_r_r22, cpy_r_r29);
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 597, CPyStatic_typeops___globals);
        goto CPyL57;
    }
    cpy_r_r31 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r31;
    goto CPyL18;
CPyL23: ;
    cpy_r_new_items = cpy_r_r21;
    cpy_r_r32 = PyList_New(0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 598, CPyStatic_typeops___globals);
        goto CPyL58;
    }
    cpy_r_r33 = 0;
CPyL25: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_new_items)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r33 < (Py_ssize_t)cpy_r_r36;
    if (!cpy_r_r37) goto CPyL59;
    cpy_r_r38 = CPyList_GetItemUnsafe(cpy_r_new_items, cpy_r_r33);
    if (likely(PyObject_TypeCheck(cpy_r_r38, CPyType_types___ProperType)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_only", 598, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r38);
        goto CPyL60;
    }
    cpy_r_item_2 = cpy_r_r39;
    cpy_r_r40 = CPY_GET_ATTR(cpy_r_item_2, CPyType_types___ProperType, 3, mypy___types___ProperTypeObject, char); /* can_be_true */
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 598, CPyStatic_typeops___globals);
        goto CPyL61;
    }
CPyL28: ;
    if (!cpy_r_r40) goto CPyL62;
CPyL29: ;
    cpy_r_r41 = PyList_Append(cpy_r_r32, cpy_r_item_2);
    CPy_DECREF(cpy_r_item_2);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 598, CPyStatic_typeops___globals);
        goto CPyL60;
    }
CPyL30: ;
    cpy_r_r43 = cpy_r_r33 + 2;
    cpy_r_r33 = cpy_r_r43;
    goto CPyL25;
CPyL31: ;
    cpy_r_can_be_true_items = cpy_r_r32;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r44 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_only", 599, CPyStatic_typeops___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL63;
    }
    cpy_r_r45 = ((mypy___types___UnionTypeObject *)cpy_r_r44)->_line;
    CPyTagged_INCREF(cpy_r_r45);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r46 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_only", 599, CPyStatic_typeops___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL64;
    }
    cpy_r_r47 = ((mypy___types___UnionTypeObject *)cpy_r_r46)->_column;
    CPyTagged_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_t);
    cpy_r_r48 = 2;
    cpy_r_r49 = 2;
    cpy_r_r50 = CPyDef_typeops___make_simplified_union(cpy_r_can_be_true_items, cpy_r_r45, cpy_r_r47, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_can_be_true_items);
    CPyTagged_DECREF(cpy_r_r45);
    CPyTagged_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 599, CPyStatic_typeops___globals);
        goto CPyL52;
    }
    return cpy_r_r50;
CPyL35: ;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r51 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_only", 601, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL53;
    }
    cpy_r_r52 = CPyDef_typeops____get_type_special_method_bool_ret_type(cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 601, CPyStatic_typeops___globals);
        goto CPyL53;
    }
    cpy_r_ret_type = cpy_r_r52;
    cpy_r_r53 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r54 = cpy_r_ret_type != cpy_r_r53;
    if (!cpy_r_r54) goto CPyL65;
    CPy_INCREF(cpy_r_ret_type);
    if (likely(cpy_r_ret_type != Py_None))
        cpy_r_r55 = cpy_r_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_only", 603, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_ret_type);
        goto CPyL66;
    }
    cpy_r_r56 = CPY_GET_ATTR(cpy_r_r55, CPyType_types___Type, 5, mypy___types___TypeObject, char); /* can_be_false */
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 603, CPyStatic_typeops___globals);
        goto CPyL66;
    }
CPyL40: ;
    if (!cpy_r_r56) goto CPyL65;
CPyL41: ;
    if (likely(cpy_r_ret_type != Py_None))
        cpy_r_r57 = cpy_r_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_only", 603, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_ret_type);
        goto CPyL53;
    }
    cpy_r_r58 = CPY_GET_ATTR(cpy_r_r57, CPyType_types___Type, 3, mypy___types___TypeObject, char); /* can_be_true */
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 603, CPyStatic_typeops___globals);
        goto CPyL53;
    }
CPyL43: ;
    if (cpy_r_r58) goto CPyL48;
CPyL44: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r59 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_only", 604, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL52;
    }
    cpy_r_r60 = CPyDef_copytype___copy_type(cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 604, CPyStatic_typeops___globals);
        goto CPyL52;
    }
    cpy_r_new_t = cpy_r_r60;
    cpy_r_r61 = CPY_SET_ATTR(cpy_r_new_t, CPyType_types___ProperType, 4, 0, mypy___types___ProperTypeObject, char); /* can_be_true */
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 605, CPyStatic_typeops___globals);
        goto CPyL67;
    }
    return cpy_r_new_t;
CPyL48: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r62 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_only", 608, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL52;
    }
    cpy_r_r63 = CPyDef_copytype___copy_type(cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 608, CPyStatic_typeops___globals);
        goto CPyL52;
    }
    cpy_r_new_t = cpy_r_r63;
    cpy_r_r64 = CPY_SET_ATTR(cpy_r_new_t, CPyType_types___ProperType, 6, 0, mypy___types___ProperTypeObject, char); /* can_be_false */
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/typeops.py", "true_only", 609, CPyStatic_typeops___globals);
        goto CPyL67;
    }
    return cpy_r_new_t;
CPyL52: ;
    cpy_r_r65 = NULL;
    return cpy_r_r65;
CPyL53: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL52;
CPyL54: ;
    CPy_DecRef(cpy_r_t);
    CPyTagged_DecRef(cpy_r_r5);
    goto CPyL52;
CPyL55: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r18);
    goto CPyL52;
CPyL56: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL23;
CPyL57: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r21);
    goto CPyL52;
CPyL58: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_new_items);
    goto CPyL52;
CPyL59: ;
    CPy_DECREF(cpy_r_new_items);
    goto CPyL31;
CPyL60: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_r32);
    goto CPyL52;
CPyL61: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_item_2);
    goto CPyL52;
CPyL62: ;
    CPy_DECREF(cpy_r_item_2);
    goto CPyL30;
CPyL63: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_can_be_true_items);
    goto CPyL52;
CPyL64: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_can_be_true_items);
    CPyTagged_DecRef(cpy_r_r45);
    goto CPyL52;
CPyL65: ;
    CPy_DECREF(cpy_r_ret_type);
    goto CPyL48;
CPyL66: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL52;
CPyL67: ;
    CPy_DecRef(cpy_r_new_t);
    goto CPyL52;
}

PyObject *CPyPy_typeops___true_only(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:true_only", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___Type)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___true_only(arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "true_only", 583, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___false_only(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_new_items;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyPtr cpy_r_r40;
    int64_t cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_item_2;
    char cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_can_be_false_items;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_ret_type;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_new_t;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 617, CPyStatic_typeops___globals);
        goto CPyL58;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "false_only", 617, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL58;
    }
    cpy_r_t = cpy_r_r1;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r2 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "false_only", 619, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL59;
    }
    cpy_r_r3 = CPY_GET_ATTR(cpy_r_r2, CPyType_types___ProperType, 5, mypy___types___ProperTypeObject, char); /* can_be_false */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 619, CPyStatic_typeops___globals);
        goto CPyL59;
    }
CPyL4: ;
    if (cpy_r_r3) goto CPyL15;
CPyL5: ;
    cpy_r_r4 = CPyStatic_state___state;
    if (unlikely(cpy_r_r4 == NULL)) {
        goto CPyL60;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 620, CPyStatic_typeops___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r6 = ((mypy___state___StrictOptionalStateObject *)cpy_r_r4)->_strict_optional;
    if (!cpy_r_r6) goto CPyL12;
CPyL9: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r7 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "false_only", 622, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL59;
    }
    cpy_r_r8 = ((mypy___types___ProperTypeObject *)cpy_r_r7)->_line;
    CPyTagged_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_t);
    cpy_r_r9 = 2;
    cpy_r_r10 = CPY_INT_TAG;
    cpy_r_r11 = CPyDef_types___UninhabitedType(cpy_r_r9, cpy_r_r8, cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 622, CPyStatic_typeops___globals);
        goto CPyL58;
    }
    return cpy_r_r11;
CPyL12: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r12 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "false_only", 626, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL59;
    }
    cpy_r_r13 = ((mypy___types___ProperTypeObject *)cpy_r_r12)->_line;
    CPyTagged_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_t);
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = CPyDef_types___NoneType(cpy_r_r13, cpy_r_r14);
    CPyTagged_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 626, CPyStatic_typeops___globals);
        goto CPyL58;
    }
    return cpy_r_r15;
CPyL15: ;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r16 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "false_only", 627, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL59;
    }
    cpy_r_r17 = CPY_GET_ATTR(cpy_r_r16, CPyType_types___ProperType, 3, mypy___types___ProperTypeObject, char); /* can_be_true */
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 627, CPyStatic_typeops___globals);
        goto CPyL59;
    }
CPyL17: ;
    if (cpy_r_r17) goto CPyL20;
CPyL18: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r18 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "false_only", 629, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL58;
    }
    return cpy_r_r18;
CPyL20: ;
    cpy_r_r19 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    if (!cpy_r_r22) goto CPyL41;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r23 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "false_only", 632, CPyStatic_typeops___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL59;
    }
    cpy_r_r24 = ((mypy___types___UnionTypeObject *)cpy_r_r23)->_items;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_r24)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = PyList_New(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 632, CPyStatic_typeops___globals);
        goto CPyL61;
    }
    cpy_r_r28 = 0;
CPyL24: ;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_r24)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = (Py_ssize_t)cpy_r_r28 < (Py_ssize_t)cpy_r_r31;
    if (!cpy_r_r32) goto CPyL62;
    cpy_r_r33 = CPyList_GetItemUnsafe(cpy_r_r24, cpy_r_r28);
    if (likely(PyObject_TypeCheck(cpy_r_r33, CPyType_types___Type)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "false_only", 632, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r33);
        goto CPyL63;
    }
    cpy_r_item = cpy_r_r34;
    cpy_r_r35 = CPyDef_typeops___false_only(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 632, CPyStatic_typeops___globals);
        goto CPyL63;
    }
    cpy_r_r36 = CPyList_SetItemUnsafe(cpy_r_r27, cpy_r_r28, cpy_r_r35);
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 632, CPyStatic_typeops___globals);
        goto CPyL63;
    }
    cpy_r_r37 = cpy_r_r28 + 2;
    cpy_r_r28 = cpy_r_r37;
    goto CPyL24;
CPyL29: ;
    cpy_r_new_items = cpy_r_r27;
    cpy_r_r38 = PyList_New(0);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 633, CPyStatic_typeops___globals);
        goto CPyL64;
    }
    cpy_r_r39 = 0;
CPyL31: ;
    cpy_r_r40 = (CPyPtr)&((PyVarObject *)cpy_r_new_items)->ob_size;
    cpy_r_r41 = *(int64_t *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 << 1;
    cpy_r_r43 = (Py_ssize_t)cpy_r_r39 < (Py_ssize_t)cpy_r_r42;
    if (!cpy_r_r43) goto CPyL65;
    cpy_r_r44 = CPyList_GetItemUnsafe(cpy_r_new_items, cpy_r_r39);
    if (likely(PyObject_TypeCheck(cpy_r_r44, CPyType_types___ProperType)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "false_only", 633, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r44);
        goto CPyL66;
    }
    cpy_r_item_2 = cpy_r_r45;
    cpy_r_r46 = CPY_GET_ATTR(cpy_r_item_2, CPyType_types___ProperType, 5, mypy___types___ProperTypeObject, char); /* can_be_false */
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 633, CPyStatic_typeops___globals);
        goto CPyL67;
    }
CPyL34: ;
    if (!cpy_r_r46) goto CPyL68;
CPyL35: ;
    cpy_r_r47 = PyList_Append(cpy_r_r38, cpy_r_item_2);
    CPy_DECREF(cpy_r_item_2);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 633, CPyStatic_typeops___globals);
        goto CPyL66;
    }
CPyL36: ;
    cpy_r_r49 = cpy_r_r39 + 2;
    cpy_r_r39 = cpy_r_r49;
    goto CPyL31;
CPyL37: ;
    cpy_r_can_be_false_items = cpy_r_r38;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r50 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "false_only", 634, CPyStatic_typeops___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL69;
    }
    cpy_r_r51 = ((mypy___types___UnionTypeObject *)cpy_r_r50)->_line;
    CPyTagged_INCREF(cpy_r_r51);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r52 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "false_only", 634, CPyStatic_typeops___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL70;
    }
    cpy_r_r53 = ((mypy___types___UnionTypeObject *)cpy_r_r52)->_column;
    CPyTagged_INCREF(cpy_r_r53);
    CPy_DECREF(cpy_r_t);
    cpy_r_r54 = 2;
    cpy_r_r55 = 2;
    cpy_r_r56 = CPyDef_typeops___make_simplified_union(cpy_r_can_be_false_items, cpy_r_r51, cpy_r_r53, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_can_be_false_items);
    CPyTagged_DECREF(cpy_r_r51);
    CPyTagged_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 634, CPyStatic_typeops___globals);
        goto CPyL58;
    }
    return cpy_r_r56;
CPyL41: ;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r57 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "false_only", 636, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL59;
    }
    cpy_r_r58 = CPyDef_typeops____get_type_special_method_bool_ret_type(cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 636, CPyStatic_typeops___globals);
        goto CPyL59;
    }
    cpy_r_ret_type = cpy_r_r58;
    cpy_r_r59 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r60 = cpy_r_ret_type != cpy_r_r59;
    if (!cpy_r_r60) goto CPyL71;
    CPy_INCREF(cpy_r_ret_type);
    if (likely(cpy_r_ret_type != Py_None))
        cpy_r_r61 = cpy_r_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "false_only", 638, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_ret_type);
        goto CPyL72;
    }
    cpy_r_r62 = CPY_GET_ATTR(cpy_r_r61, CPyType_types___Type, 3, mypy___types___TypeObject, char); /* can_be_true */
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 638, CPyStatic_typeops___globals);
        goto CPyL72;
    }
CPyL46: ;
    if (!cpy_r_r62) goto CPyL71;
CPyL47: ;
    if (likely(cpy_r_ret_type != Py_None))
        cpy_r_r63 = cpy_r_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "false_only", 638, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_ret_type);
        goto CPyL59;
    }
    cpy_r_r64 = CPY_GET_ATTR(cpy_r_r63, CPyType_types___Type, 5, mypy___types___TypeObject, char); /* can_be_false */
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 638, CPyStatic_typeops___globals);
        goto CPyL59;
    }
CPyL49: ;
    if (cpy_r_r64) goto CPyL54;
CPyL50: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r65 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "false_only", 639, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL58;
    }
    cpy_r_r66 = CPyDef_copytype___copy_type(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 639, CPyStatic_typeops___globals);
        goto CPyL58;
    }
    cpy_r_new_t = cpy_r_r66;
    cpy_r_r67 = CPY_SET_ATTR(cpy_r_new_t, CPyType_types___ProperType, 6, 0, mypy___types___ProperTypeObject, char); /* can_be_false */
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 640, CPyStatic_typeops___globals);
        goto CPyL73;
    }
    return cpy_r_new_t;
CPyL54: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r68 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "false_only", 643, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL58;
    }
    cpy_r_r69 = CPyDef_copytype___copy_type(cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 643, CPyStatic_typeops___globals);
        goto CPyL58;
    }
    cpy_r_new_t = cpy_r_r69;
    cpy_r_r70 = CPY_SET_ATTR(cpy_r_new_t, CPyType_types___ProperType, 4, 0, mypy___types___ProperTypeObject, char); /* can_be_true */
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/typeops.py", "false_only", 644, CPyStatic_typeops___globals);
        goto CPyL73;
    }
    return cpy_r_new_t;
CPyL58: ;
    cpy_r_r71 = NULL;
    return cpy_r_r71;
CPyL59: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL58;
CPyL60: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL6;
CPyL61: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r24);
    goto CPyL58;
CPyL62: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL29;
CPyL63: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    goto CPyL58;
CPyL64: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_new_items);
    goto CPyL58;
CPyL65: ;
    CPy_DECREF(cpy_r_new_items);
    goto CPyL37;
CPyL66: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_r38);
    goto CPyL58;
CPyL67: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_item_2);
    goto CPyL58;
CPyL68: ;
    CPy_DECREF(cpy_r_item_2);
    goto CPyL36;
CPyL69: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_can_be_false_items);
    goto CPyL58;
CPyL70: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_can_be_false_items);
    CPyTagged_DecRef(cpy_r_r51);
    goto CPyL58;
CPyL71: ;
    CPy_DECREF(cpy_r_ret_type);
    goto CPyL54;
CPyL72: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL58;
CPyL73: ;
    CPy_DecRef(cpy_r_new_t);
    goto CPyL58;
}

PyObject *CPyPy_typeops___false_only(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:false_only", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___Type)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___false_only(arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "false_only", 613, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___true_or_false(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_new_items;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_new_t;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "true_or_false", 652, CPyStatic_typeops___globals);
        goto CPyL22;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_or_false", 652, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL22;
    }
    cpy_r_t = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL15;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r6 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_or_false", 655, CPyStatic_typeops___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL23;
    }
    cpy_r_r7 = ((mypy___types___UnionTypeObject *)cpy_r_r6)->_items;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = PyList_New(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "true_or_false", 655, CPyStatic_typeops___globals);
        goto CPyL24;
    }
    cpy_r_r11 = 0;
CPyL6: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL25;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r11);
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_types___Type)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_or_false", 655, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r16);
        goto CPyL26;
    }
    cpy_r_item = cpy_r_r17;
    cpy_r_r18 = CPyDef_typeops___true_or_false(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "true_or_false", 655, CPyStatic_typeops___globals);
        goto CPyL26;
    }
    cpy_r_r19 = CPyList_SetItemUnsafe(cpy_r_r10, cpy_r_r11, cpy_r_r18);
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/typeops.py", "true_or_false", 655, CPyStatic_typeops___globals);
        goto CPyL26;
    }
    cpy_r_r20 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r20;
    goto CPyL6;
CPyL11: ;
    cpy_r_new_items = cpy_r_r10;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r21 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_or_false", 656, CPyStatic_typeops___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL27;
    }
    cpy_r_r22 = ((mypy___types___UnionTypeObject *)cpy_r_r21)->_line;
    CPyTagged_INCREF(cpy_r_r22);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r23 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_or_false", 656, CPyStatic_typeops___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL28;
    }
    cpy_r_r24 = ((mypy___types___UnionTypeObject *)cpy_r_r23)->_column;
    CPyTagged_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_t);
    cpy_r_r25 = 2;
    cpy_r_r26 = 2;
    cpy_r_r27 = CPyDef_typeops___make_simplified_union(cpy_r_new_items, cpy_r_r22, cpy_r_r24, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_new_items);
    CPyTagged_DECREF(cpy_r_r22);
    CPyTagged_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "true_or_false", 656, CPyStatic_typeops___globals);
        goto CPyL22;
    }
    return cpy_r_r27;
CPyL15: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r28 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "true_or_false", 658, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL22;
    }
    cpy_r_r29 = CPyDef_copytype___copy_type(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "true_or_false", 658, CPyStatic_typeops___globals);
        goto CPyL22;
    }
    cpy_r_new_t = cpy_r_r29;
    cpy_r_r30 = CPY_GET_METHOD(cpy_r_new_t, CPyType_types___ProperType, 7, mypy___types___ProperTypeObject, char (*)(PyObject *))(cpy_r_new_t); /* can_be_true_default */
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "true_or_false", 659, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    cpy_r_r31 = CPY_SET_ATTR(cpy_r_new_t, CPyType_types___ProperType, 4, cpy_r_r30, mypy___types___ProperTypeObject, char); /* can_be_true */
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/typeops.py", "true_or_false", 659, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    cpy_r_r32 = CPY_GET_METHOD(cpy_r_new_t, CPyType_types___ProperType, 8, mypy___types___ProperTypeObject, char (*)(PyObject *))(cpy_r_new_t); /* can_be_false_default */
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "true_or_false", 660, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    cpy_r_r33 = CPY_SET_ATTR(cpy_r_new_t, CPyType_types___ProperType, 6, cpy_r_r32, mypy___types___ProperTypeObject, char); /* can_be_false */
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/typeops.py", "true_or_false", 660, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    return cpy_r_new_t;
CPyL22: ;
    cpy_r_r34 = NULL;
    return cpy_r_r34;
CPyL23: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL22;
CPyL24: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r7);
    goto CPyL22;
CPyL25: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL11;
CPyL26: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL22;
CPyL27: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_new_items);
    goto CPyL22;
CPyL28: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_new_items);
    CPyTagged_DecRef(cpy_r_r22);
    goto CPyL22;
CPyL29: ;
    CPy_DecRef(cpy_r_new_t);
    goto CPyL22;
}

PyObject *CPyPy_typeops___true_or_false(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:true_or_false", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___Type)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___true_or_false(arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "true_or_false", 648, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___erase_def_to_union_or_bound(PyObject *cpy_r_tdef) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    cpy_r_r0 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_tdef)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL3;
    cpy_r_r4 = NULL;
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = CPyDef_types___AnyType(10, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "erase_def_to_union_or_bound", 667, CPyStatic_typeops___globals);
        goto CPyL13;
    }
    return cpy_r_r8;
CPyL3: ;
    cpy_r_r9 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_tdef)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (cpy_r_r12) goto CPyL6;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/typeops.py", "erase_def_to_union_or_bound", 668, CPyStatic_typeops___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL6: ;
    if (likely(Py_TYPE(cpy_r_tdef) == CPyType_types___TypeVarType))
        cpy_r_r14 = cpy_r_tdef;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "erase_def_to_union_or_bound", 669, CPyStatic_typeops___globals, "mypy.types.TypeVarType", cpy_r_tdef);
        goto CPyL13;
    }
    cpy_r_r15 = ((mypy___types___TypeVarTypeObject *)cpy_r_r14)->_values;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r15)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = cpy_r_r18 != 0;
    if (!cpy_r_r19) goto CPyL11;
    if (likely(Py_TYPE(cpy_r_tdef) == CPyType_types___TypeVarType))
        cpy_r_r20 = cpy_r_tdef;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "erase_def_to_union_or_bound", 670, CPyStatic_typeops___globals, "mypy.types.TypeVarType", cpy_r_tdef);
        goto CPyL13;
    }
    cpy_r_r21 = ((mypy___types___TypeVarTypeObject *)cpy_r_r20)->_values;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = CPY_INT_TAG;
    cpy_r_r24 = 2;
    cpy_r_r25 = 2;
    cpy_r_r26 = CPyDef_typeops___make_simplified_union(cpy_r_r21, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "erase_def_to_union_or_bound", 670, CPyStatic_typeops___globals);
        goto CPyL13;
    }
    return cpy_r_r26;
CPyL11: ;
    if (likely(Py_TYPE(cpy_r_tdef) == CPyType_types___TypeVarType))
        cpy_r_r27 = cpy_r_tdef;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "erase_def_to_union_or_bound", 672, CPyStatic_typeops___globals, "mypy.types.TypeVarType", cpy_r_tdef);
        goto CPyL13;
    }
    cpy_r_r28 = ((mypy___types___TypeVarTypeObject *)cpy_r_r27)->_upper_bound;
    CPy_INCREF(cpy_r_r28);
    return cpy_r_r28;
CPyL13: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
}

PyObject *CPyPy_typeops___erase_def_to_union_or_bound(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tdef", 0};
    static CPyArg_Parser parser = {"O:erase_def_to_union_or_bound", kwlist, 0};
    PyObject *obj_tdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tdef)) {
        return NULL;
    }
    PyObject *arg_tdef;
    if (likely(PyObject_TypeCheck(obj_tdef, CPyType_types___TypeVarLikeType)))
        arg_tdef = obj_tdef;
    else {
        CPy_TypeError("mypy.types.TypeVarLikeType", obj_tdef); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___erase_def_to_union_or_bound(arg_tdef);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "erase_def_to_union_or_bound", 664, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___erase_to_union_or_bound(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    cpy_r_r0 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_values;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_values;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = 2;
    cpy_r_r9 = 2;
    cpy_r_r10 = CPyDef_typeops___make_simplified_union(cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "erase_to_union_or_bound", 677, CPyStatic_typeops___globals);
        goto CPyL6;
    }
    return cpy_r_r10;
CPyL3: ;
    cpy_r_r11 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_upper_bound;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_types___get_proper_type(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "erase_to_union_or_bound", 679, CPyStatic_typeops___globals);
        goto CPyL6;
    }
    if (likely(cpy_r_r12 != Py_None))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "erase_to_union_or_bound", 679, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r12);
        goto CPyL6;
    }
    return cpy_r_r13;
CPyL6: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
}

PyObject *CPyPy_typeops___erase_to_union_or_bound(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:erase_to_union_or_bound", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypeVarType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___erase_to_union_or_bound(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "erase_to_union_or_bound", 675, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___function_type(PyObject *cpy_r_func, PyObject *cpy_r_fallback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
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
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_any_type;
    PyObject *cpy_r_r38;
    CPyPtr cpy_r_r39;
    CPyPtr cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    CPyPtr cpy_r_r48;
    CPyPtr cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    CPyPtr cpy_r_r54;
    CPyPtr cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyTagged cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_dummy;
    PyObject *cpy_r_r71;
    CPyPtr cpy_r_r72;
    CPyPtr cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    cpy_r_r0 = ((mypy___nodes___FuncBaseObject *)cpy_r_func)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r2) goto CPyL9;
    cpy_r_r3 = ((mypy___nodes___FuncBaseObject *)cpy_r_func)->_type;
    cpy_r_r4 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL3;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL4;
CPyL3: ;
    cpy_r_r9 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    cpy_r_r8 = cpy_r_r12;
CPyL4: ;
    if (cpy_r_r8) goto CPyL7;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/typeops.py", "function_type", 684, CPyStatic_typeops___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r14 = ((mypy___nodes___FuncBaseObject *)cpy_r_func)->_type;
    CPy_INCREF(cpy_r_r14);
    if (likely((Py_TYPE(cpy_r_r14) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r14) == CPyType_types___Overloaded)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "function_type", 685, CPyStatic_typeops___globals, "mypy.types.FunctionLike", cpy_r_r14);
        goto CPyL34;
    }
    return cpy_r_r15;
CPyL9: ;
    cpy_r_r16 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_func)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL11;
    cpy_r_r20 = cpy_r_r19;
    goto CPyL12;
CPyL11: ;
    cpy_r_r21 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_func)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    cpy_r_r20 = cpy_r_r24;
CPyL12: ;
    if (!cpy_r_r20) goto CPyL16;
    CPy_INCREF(cpy_r_func);
    if (likely((Py_TYPE(cpy_r_func) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_func) == CPyType_nodes___LambdaExpr)))
        cpy_r_r25 = cpy_r_func;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "function_type", 689, CPyStatic_typeops___globals, "mypy.nodes.FuncItem", cpy_r_func);
        goto CPyL34;
    }
    cpy_r_r26 = NULL;
    cpy_r_r27 = CPyDef_typeops___callable_type(cpy_r_r25, cpy_r_fallback, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "function_type", 689, CPyStatic_typeops___globals);
        goto CPyL34;
    }
    return cpy_r_r27;
CPyL16: ;
    cpy_r_r28 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_func)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    if (cpy_r_r31) goto CPyL19;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/typeops.py", "function_type", 693, CPyStatic_typeops___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r33 = NULL;
    cpy_r_r34 = NULL;
    cpy_r_r35 = CPY_INT_TAG;
    cpy_r_r36 = CPY_INT_TAG;
    cpy_r_r37 = CPyDef_types___AnyType(10, cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "function_type", 694, CPyStatic_typeops___globals);
        goto CPyL34;
    }
    cpy_r_any_type = cpy_r_r37;
    cpy_r_r38 = PyList_New(2);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "function_type", 696, CPyStatic_typeops___globals);
        goto CPyL35;
    }
    cpy_r_r39 = (CPyPtr)&((PyListObject *)cpy_r_r38)->ob_item;
    cpy_r_r40 = *(CPyPtr *)cpy_r_r39;
    CPy_INCREF(cpy_r_any_type);
    *(PyObject * *)cpy_r_r40 = cpy_r_any_type;
    cpy_r_r41 = cpy_r_r40 + 8;
    CPy_INCREF(cpy_r_any_type);
    *(PyObject * *)cpy_r_r41 = cpy_r_any_type;
    cpy_r_r42 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r42 == NULL)) {
        goto CPyL36;
    } else
        goto CPyL24;
CPyL22: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/typeops.py", "function_type", 697, CPyStatic_typeops___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r44 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r44 == NULL)) {
        goto CPyL37;
    } else
        goto CPyL27;
CPyL25: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/typeops.py", "function_type", 697, CPyStatic_typeops___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r46 = PyList_New(2);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "function_type", 697, CPyStatic_typeops___globals);
        goto CPyL38;
    }
    cpy_r_r47 = (CPyPtr)&((PyListObject *)cpy_r_r46)->ob_item;
    cpy_r_r48 = *(CPyPtr *)cpy_r_r47;
    CPy_INCREF(cpy_r_r42);
    *(PyObject * *)cpy_r_r48 = cpy_r_r42;
    cpy_r_r49 = cpy_r_r48 + 8;
    CPy_INCREF(cpy_r_r44);
    *(PyObject * *)cpy_r_r49 = cpy_r_r44;
    cpy_r_r50 = PyList_New(2);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "function_type", 698, CPyStatic_typeops___globals);
        goto CPyL39;
    }
    cpy_r_r51 = Py_None;
    cpy_r_r52 = Py_None;
    cpy_r_r53 = (CPyPtr)&((PyListObject *)cpy_r_r50)->ob_item;
    cpy_r_r54 = *(CPyPtr *)cpy_r_r53;
    CPy_INCREF(cpy_r_r51);
    *(PyObject * *)cpy_r_r54 = cpy_r_r51;
    cpy_r_r55 = cpy_r_r54 + 8;
    CPy_INCREF(cpy_r_r52);
    *(PyObject * *)cpy_r_r55 = cpy_r_r52;
    if (likely(Py_TYPE(cpy_r_func) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r56 = cpy_r_func;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "function_type", 701, CPyStatic_typeops___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_func);
        goto CPyL40;
    }
    cpy_r_r57 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r56)->_line;
    CPyTagged_INCREF(cpy_r_r57);
    cpy_r_r58 = NULL;
    cpy_r_r59 = NULL;
    cpy_r_r60 = NULL;
    cpy_r_r61 = CPY_INT_TAG;
    cpy_r_r62 = 2;
    cpy_r_r63 = NULL;
    cpy_r_r64 = 2;
    cpy_r_r65 = NULL;
    cpy_r_r66 = NULL;
    cpy_r_r67 = NULL;
    cpy_r_r68 = 2;
    cpy_r_r69 = 2;
    cpy_r_r70 = CPyDef_types___CallableType(cpy_r_r38, cpy_r_r46, cpy_r_r50, cpy_r_any_type, cpy_r_fallback, cpy_r_r58, cpy_r_r59, cpy_r_r60, cpy_r_r57, cpy_r_r61, 1, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_any_type);
    CPyTagged_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "function_type", 695, CPyStatic_typeops___globals);
        goto CPyL34;
    }
    cpy_r_dummy = cpy_r_r70;
    cpy_r_r71 = PyList_New(1);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "function_type", 706, CPyStatic_typeops___globals);
        goto CPyL41;
    }
    cpy_r_r72 = (CPyPtr)&((PyListObject *)cpy_r_r71)->ob_item;
    cpy_r_r73 = *(CPyPtr *)cpy_r_r72;
    *(PyObject * *)cpy_r_r73 = cpy_r_dummy;
    cpy_r_r74 = CPyDef_types___Overloaded(cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "function_type", 706, CPyStatic_typeops___globals);
        goto CPyL34;
    }
    return cpy_r_r74;
CPyL34: ;
    cpy_r_r75 = NULL;
    return cpy_r_r75;
CPyL35: ;
    CPy_DecRef(cpy_r_any_type);
    goto CPyL34;
CPyL36: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r38);
    goto CPyL22;
CPyL37: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r38);
    goto CPyL25;
CPyL38: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r38);
    goto CPyL34;
CPyL39: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    goto CPyL34;
CPyL40: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r50);
    goto CPyL34;
CPyL41: ;
    CPy_DecRef(cpy_r_dummy);
    goto CPyL34;
}

PyObject *CPyPy_typeops___function_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"func", "fallback", 0};
    static CPyArg_Parser parser = {"OO:function_type", kwlist, 0};
    PyObject *obj_func;
    PyObject *obj_fallback;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_func, &obj_fallback)) {
        return NULL;
    }
    PyObject *arg_func;
    if (likely((Py_TYPE(obj_func) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_func) == CPyType_nodes___LambdaExpr) || (Py_TYPE(obj_func) == CPyType_nodes___OverloadedFuncDef)))
        arg_func = obj_func;
    else {
        CPy_TypeError("mypy.nodes.FuncBase", obj_func); 
        goto fail;
    }
    PyObject *arg_fallback;
    if (likely(Py_TYPE(obj_fallback) == CPyType_types___Instance))
        arg_fallback = obj_fallback;
    else {
        CPy_TypeError("mypy.types.Instance", obj_fallback); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___function_type(arg_func, arg_fallback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "function_type", 682, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___callable_type(PyObject *cpy_r_fdef, PyObject *cpy_r_fallback, PyObject *cpy_r_ret_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_self_type;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    int64_t cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyTagged cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    int64_t cpy_r_r60;
    CPyTagged cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyTagged cpy_r_r71;
    CPyTagged cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyTagged cpy_r_r75;
    CPyTagged cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyPtr cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    if (cpy_r_ret_type != NULL) goto CPyL44;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_ret_type = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = ((mypy___nodes___FuncItemObject *)cpy_r_fdef)->_info;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 713, CPyStatic_typeops___globals);
        goto CPyL45;
    }
    if (!cpy_r_r2) goto CPyL27;
    cpy_r_r3 = ((mypy___nodes___FuncItemObject *)cpy_r_fdef)->_is_static;
    if (!cpy_r_r3) goto CPyL10;
CPyL5: ;
    cpy_r_r4 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncItem, 6, mypy___nodes___FuncItemObject, PyObject *); /* name */
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 713, CPyStatic_typeops___globals);
        goto CPyL45;
    }
CPyL6: ;
    cpy_r_r5 = CPyStatics[721]; /* '__new__' */
    cpy_r_r6 = PyUnicode_Compare(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r7 = cpy_r_r6 == -1;
    if (!cpy_r_r7) goto CPyL9;
    cpy_r_r8 = PyErr_Occurred();
    cpy_r_r9 = cpy_r_r8 != NULL;
    if (!cpy_r_r9) goto CPyL9;
    cpy_r_r10 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 713, CPyStatic_typeops___globals);
        goto CPyL45;
    }
CPyL9: ;
    cpy_r_r11 = cpy_r_r6 == 0;
    if (!cpy_r_r11) goto CPyL27;
CPyL10: ;
    cpy_r_r12 = ((mypy___nodes___FuncItemObject *)cpy_r_fdef)->_arg_names;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = cpy_r_r15 != 0;
    if (!cpy_r_r16) goto CPyL27;
    cpy_r_r17 = ((mypy___nodes___FuncItemObject *)cpy_r_fdef)->_info;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = CPyDef_typevars___fill_typevars(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 714, CPyStatic_typeops___globals);
        goto CPyL45;
    }
    cpy_r_self_type = cpy_r_r18;
    cpy_r_r19 = ((mypy___nodes___FuncItemObject *)cpy_r_fdef)->_is_class;
    if (cpy_r_r19) goto CPyL18;
CPyL13: ;
    cpy_r_r20 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncItem, 6, mypy___nodes___FuncItemObject, PyObject *); /* name */
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 715, CPyStatic_typeops___globals);
        goto CPyL46;
    }
CPyL14: ;
    cpy_r_r21 = CPyStatics[721]; /* '__new__' */
    cpy_r_r22 = PyUnicode_Compare(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r23 = cpy_r_r22 == -1;
    if (!cpy_r_r23) goto CPyL17;
    cpy_r_r24 = PyErr_Occurred();
    cpy_r_r25 = cpy_r_r24 != NULL;
    if (!cpy_r_r25) goto CPyL17;
    cpy_r_r26 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 715, CPyStatic_typeops___globals);
        goto CPyL46;
    }
CPyL17: ;
    cpy_r_r27 = cpy_r_r22 == 0;
    if (!cpy_r_r27) goto CPyL20;
CPyL18: ;
    cpy_r_r28 = CPY_INT_TAG;
    cpy_r_r29 = CPY_INT_TAG;
    cpy_r_r30 = CPyDef_types___TypeType___make_normalized(cpy_r_self_type, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_self_type);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 716, CPyStatic_typeops___globals);
        goto CPyL45;
    }
    cpy_r_self_type = cpy_r_r30;
CPyL20: ;
    cpy_r_r31 = PyList_New(1);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 717, CPyStatic_typeops___globals);
        goto CPyL46;
    }
    cpy_r_r32 = (CPyPtr)&((PyListObject *)cpy_r_r31)->ob_item;
    cpy_r_r33 = *(CPyPtr *)cpy_r_r32;
    *(PyObject * *)cpy_r_r33 = cpy_r_self_type;
    cpy_r_r34 = NULL;
    cpy_r_r35 = NULL;
    cpy_r_r36 = CPY_INT_TAG;
    cpy_r_r37 = CPY_INT_TAG;
    cpy_r_r38 = CPyDef_types___AnyType(2, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 717, CPyStatic_typeops___globals);
        goto CPyL47;
    }
    cpy_r_r39 = PyList_New(1);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 717, CPyStatic_typeops___globals);
        goto CPyL48;
    }
    cpy_r_r40 = (CPyPtr)&((PyListObject *)cpy_r_r39)->ob_item;
    cpy_r_r41 = *(CPyPtr *)cpy_r_r40;
    *(PyObject * *)cpy_r_r41 = cpy_r_r38;
    cpy_r_r42 = ((mypy___nodes___FuncItemObject *)cpy_r_fdef)->_arg_names;
    cpy_r_r43 = (CPyPtr)&((PyVarObject *)cpy_r_r42)->ob_size;
    cpy_r_r44 = *(int64_t *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 << 1;
    cpy_r_r46 = CPyTagged_Subtract(cpy_r_r45, 2);
    cpy_r_r47 = CPySequence_Multiply(cpy_r_r39, cpy_r_r46);
    CPy_DECREF(cpy_r_r39);
    CPyTagged_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 717, CPyStatic_typeops___globals);
        goto CPyL47;
    }
    cpy_r_r48 = PyNumber_Add(cpy_r_r31, cpy_r_r47);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 717, CPyStatic_typeops___globals);
        goto CPyL45;
    }
    if (likely(PyList_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_type", 717, CPyStatic_typeops___globals, "list", cpy_r_r48);
        goto CPyL45;
    }
    cpy_r_args = cpy_r_r49;
    goto CPyL31;
CPyL27: ;
    cpy_r_r50 = NULL;
    cpy_r_r51 = NULL;
    cpy_r_r52 = CPY_INT_TAG;
    cpy_r_r53 = CPY_INT_TAG;
    cpy_r_r54 = CPyDef_types___AnyType(2, cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 719, CPyStatic_typeops___globals);
        goto CPyL45;
    }
    cpy_r_r55 = PyList_New(1);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 719, CPyStatic_typeops___globals);
        goto CPyL49;
    }
    cpy_r_r56 = (CPyPtr)&((PyListObject *)cpy_r_r55)->ob_item;
    cpy_r_r57 = *(CPyPtr *)cpy_r_r56;
    *(PyObject * *)cpy_r_r57 = cpy_r_r54;
    cpy_r_r58 = ((mypy___nodes___FuncItemObject *)cpy_r_fdef)->_arg_names;
    cpy_r_r59 = (CPyPtr)&((PyVarObject *)cpy_r_r58)->ob_size;
    cpy_r_r60 = *(int64_t *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 << 1;
    cpy_r_r62 = CPySequence_Multiply(cpy_r_r55, cpy_r_r61);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 719, CPyStatic_typeops___globals);
        goto CPyL45;
    }
    cpy_r_args = cpy_r_r62;
CPyL31: ;
    cpy_r_r63 = ((mypy___nodes___FuncItemObject *)cpy_r_fdef)->_arg_kinds;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = ((mypy___nodes___FuncItemObject *)cpy_r_fdef)->_arg_names;
    CPy_INCREF(cpy_r_r64);
    cpy_r_r65 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r66 = cpy_r_ret_type != cpy_r_r65;
    if (!cpy_r_r66) goto CPyL50;
    if (likely(cpy_r_ret_type != Py_None))
        cpy_r_r67 = cpy_r_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_type", 725, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_ret_type);
        goto CPyL51;
    }
    cpy_r_r68 = cpy_r_r67;
    goto CPyL36;
CPyL34: ;
    cpy_r_r69 = NULL;
    cpy_r_r70 = NULL;
    cpy_r_r71 = CPY_INT_TAG;
    cpy_r_r72 = CPY_INT_TAG;
    cpy_r_r73 = CPyDef_types___AnyType(2, cpy_r_r69, cpy_r_r70, cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 725, CPyStatic_typeops___globals);
        goto CPyL51;
    }
    cpy_r_r68 = cpy_r_r73;
CPyL36: ;
    cpy_r_r74 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncItem, 6, mypy___nodes___FuncItemObject, PyObject *); /* name */
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 727, CPyStatic_typeops___globals);
        goto CPyL52;
    }
CPyL37: ;
    cpy_r_r75 = ((mypy___nodes___FuncItemObject *)cpy_r_fdef)->_line;
    CPyTagged_INCREF(cpy_r_r75);
    cpy_r_r76 = ((mypy___nodes___FuncItemObject *)cpy_r_fdef)->_column;
    CPyTagged_INCREF(cpy_r_r76);
    cpy_r_r77 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r78 = (CPyPtr)&((PyObject *)cpy_r_fdef)->ob_type;
    cpy_r_r79 = *(PyObject * *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 == cpy_r_r77;
    if (!cpy_r_r80) goto CPyL40;
    CPy_INCREF(cpy_r_fdef);
    if (likely(Py_TYPE(cpy_r_fdef) == CPyType_nodes___FuncDef))
        cpy_r_r81 = cpy_r_fdef;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "callable_type", 732, CPyStatic_typeops___globals, "mypy.nodes.FuncDef", cpy_r_fdef);
        goto CPyL53;
    }
    cpy_r_r82 = cpy_r_r81;
    goto CPyL41;
CPyL40: ;
    cpy_r_r83 = Py_None;
    CPy_INCREF(cpy_r_r83);
    cpy_r_r82 = cpy_r_r83;
CPyL41: ;
    cpy_r_r84 = NULL;
    cpy_r_r85 = 2;
    cpy_r_r86 = NULL;
    cpy_r_r87 = 2;
    cpy_r_r88 = NULL;
    cpy_r_r89 = NULL;
    cpy_r_r90 = NULL;
    cpy_r_r91 = 2;
    cpy_r_r92 = 2;
    cpy_r_r93 = CPyDef_types___CallableType(cpy_r_args, cpy_r_r63, cpy_r_r64, cpy_r_r68, cpy_r_fallback, cpy_r_r74, cpy_r_r82, cpy_r_r84, cpy_r_r75, cpy_r_r76, cpy_r_r85, 1, cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r89, cpy_r_r90, cpy_r_r91, cpy_r_r92);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r82);
    CPyTagged_DECREF(cpy_r_r75);
    CPyTagged_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "callable_type", 721, CPyStatic_typeops___globals);
        goto CPyL43;
    }
    return cpy_r_r93;
CPyL43: ;
    cpy_r_r94 = NULL;
    return cpy_r_r94;
CPyL44: ;
    CPy_INCREF(cpy_r_ret_type);
    goto CPyL2;
CPyL45: ;
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL43;
CPyL46: ;
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_self_type);
    goto CPyL43;
CPyL47: ;
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r31);
    goto CPyL43;
CPyL48: ;
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r38);
    goto CPyL43;
CPyL49: ;
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r54);
    goto CPyL43;
CPyL50: ;
    CPy_DECREF(cpy_r_ret_type);
    goto CPyL34;
CPyL51: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r64);
    goto CPyL43;
CPyL52: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r68);
    goto CPyL43;
CPyL53: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r74);
    CPyTagged_DecRef(cpy_r_r75);
    CPyTagged_DecRef(cpy_r_r76);
    goto CPyL43;
}

PyObject *CPyPy_typeops___callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fdef", "fallback", "ret_type", 0};
    static CPyArg_Parser parser = {"OO|O:callable_type", kwlist, 0};
    PyObject *obj_fdef;
    PyObject *obj_fallback;
    PyObject *obj_ret_type = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fdef, &obj_fallback, &obj_ret_type)) {
        return NULL;
    }
    PyObject *arg_fdef;
    if (likely((Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_fdef) == CPyType_nodes___LambdaExpr)))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_fdef); 
        goto fail;
    }
    PyObject *arg_fallback;
    if (likely(Py_TYPE(obj_fallback) == CPyType_types___Instance))
        arg_fallback = obj_fallback;
    else {
        CPy_TypeError("mypy.types.Instance", obj_fallback); 
        goto fail;
    }
    PyObject *arg_ret_type;
    if (obj_ret_type == NULL) {
        arg_ret_type = NULL;
        goto __LL7743;
    }
    if (PyObject_TypeCheck(obj_ret_type, CPyType_types___Type))
        arg_ret_type = obj_ret_type;
    else {
        arg_ret_type = NULL;
    }
    if (arg_ret_type != NULL) goto __LL7743;
    if (obj_ret_type == Py_None)
        arg_ret_type = obj_ret_type;
    else {
        arg_ret_type = NULL;
    }
    if (arg_ret_type != NULL) goto __LL7743;
    CPy_TypeError("mypy.types.Type or None", obj_ret_type); 
    goto fail;
__LL7743: ;
    PyObject *retval = CPyDef_typeops___callable_type(arg_fdef, arg_fallback, arg_ret_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "callable_type", 709, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___try_getting_str_literals(PyObject *cpy_r_expr, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL4;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___StrExpr))
        cpy_r_r4 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_str_literals", 749, CPyStatic_typeops___globals, "mypy.nodes.StrExpr", cpy_r_expr);
        goto CPyL6;
    }
    cpy_r_r5 = ((mypy___nodes___StrExprObject *)cpy_r_r4)->_value;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = PyList_New(1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_getting_str_literals", 749, CPyStatic_typeops___globals);
        goto CPyL7;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    *(PyObject * *)cpy_r_r8 = cpy_r_r5;
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r9 = CPyDef_typeops___try_getting_str_literals_from_type(cpy_r_typ);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_getting_str_literals", 752, CPyStatic_typeops___globals);
        goto CPyL6;
    }
    return cpy_r_r9;
CPyL6: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL7: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL6;
}

PyObject *CPyPy_typeops___try_getting_str_literals(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", "typ", 0};
    static CPyArg_Parser parser = {"OO:try_getting_str_literals", kwlist, 0};
    PyObject *obj_expr;
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___try_getting_str_literals(arg_expr, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "try_getting_str_literals", 736, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___try_getting_str_literals_from_type(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&PyUnicode_Type;
    cpy_r_r1 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r2 = CPyDef_typeops___try_getting_literals_from_type(cpy_r_typ, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_getting_str_literals_from_type", 763, CPyStatic_typeops___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_typeops___try_getting_str_literals_from_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:try_getting_str_literals_from_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___try_getting_str_literals_from_type(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "try_getting_str_literals_from_type", 755, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___try_getting_int_literals_from_type(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&PyLong_Type;
    cpy_r_r1 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r2 = CPyDef_typeops___try_getting_literals_from_type(cpy_r_typ, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_getting_int_literals_from_type", 774, CPyStatic_typeops___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_typeops___try_getting_int_literals_from_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:try_getting_int_literals_from_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___try_getting_int_literals_from_type(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "try_getting_int_literals_from_type", 766, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___try_getting_literals_from_type(PyObject *cpy_r_typ, PyObject *cpy_r_target_literal_type, PyObject *cpy_r_target_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_possible_literals;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_literals;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_lit;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_val;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_getting_literals_from_type", 788, CPyStatic_typeops___globals);
        goto CPyL36;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_literals_from_type", 788, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL36;
    }
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___Instance;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL9;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r6 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_literals_from_type", 790, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL37;
    }
    cpy_r_r7 = ((mypy___types___InstanceObject *)cpy_r_r6)->_last_known_value;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_r7 != cpy_r_r8;
    if (!cpy_r_r9) goto CPyL9;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r10 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_literals_from_type", 791, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL37;
    }
    cpy_r_r11 = ((mypy___types___InstanceObject *)cpy_r_r10)->_last_known_value;
    CPy_INCREF(cpy_r_r11);
    if (likely(cpy_r_r11 != Py_None))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_literals_from_type", 791, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_r11);
        goto CPyL37;
    }
    CPy_DECREF(cpy_r_typ);
    cpy_r_r13 = PyList_New(1);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_getting_literals_from_type", 791, CPyStatic_typeops___globals);
        goto CPyL38;
    }
    cpy_r_r14 = (CPyPtr)&((PyListObject *)cpy_r_r13)->ob_item;
    cpy_r_r15 = *(CPyPtr *)cpy_r_r14;
    *(PyObject * *)cpy_r_r15 = cpy_r_r12;
    cpy_r_possible_literals = cpy_r_r13;
    goto CPyL16;
CPyL9: ;
    cpy_r_r16 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL13;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r20 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_literals_from_type", 793, CPyStatic_typeops___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL37;
    }
    cpy_r_r21 = ((mypy___types___UnionTypeObject *)cpy_r_r20)->_items;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r22 = PySequence_List(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_getting_literals_from_type", 793, CPyStatic_typeops___globals);
        goto CPyL36;
    }
    cpy_r_possible_literals = cpy_r_r22;
    goto CPyL16;
CPyL13: ;
    if (likely(PyObject_TypeCheck(cpy_r_typ, CPyType_types___ProperType)))
        cpy_r_r23 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_literals_from_type", 795, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_typ);
        goto CPyL36;
    }
    cpy_r_r24 = PyList_New(1);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_getting_literals_from_type", 795, CPyStatic_typeops___globals);
        goto CPyL39;
    }
    cpy_r_r25 = (CPyPtr)&((PyListObject *)cpy_r_r24)->ob_item;
    cpy_r_r26 = *(CPyPtr *)cpy_r_r25;
    *(PyObject * *)cpy_r_r26 = cpy_r_r23;
    cpy_r_possible_literals = cpy_r_r24;
CPyL16: ;
    cpy_r_r27 = PyList_New(0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_getting_literals_from_type", 797, CPyStatic_typeops___globals);
        goto CPyL40;
    }
    cpy_r_literals = cpy_r_r27;
    cpy_r_r28 = CPyDef_types___get_proper_types(cpy_r_possible_literals);
    CPy_DECREF(cpy_r_possible_literals);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_getting_literals_from_type", 798, CPyStatic_typeops___globals);
        goto CPyL41;
    }
    cpy_r_r29 = 0;
CPyL19: ;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r28)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r29 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL42;
    cpy_r_r34 = CPyList_GetItemUnsafe(cpy_r_r28, cpy_r_r29);
    if (likely(PyObject_TypeCheck(cpy_r_r34, CPyType_types___ProperType)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_literals_from_type", 798, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r34);
        goto CPyL43;
    }
    cpy_r_lit = cpy_r_r35;
    cpy_r_r36 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_lit)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    if (!cpy_r_r39) goto CPyL44;
    if (likely(Py_TYPE(cpy_r_lit) == CPyType_types___LiteralType))
        cpy_r_r40 = cpy_r_lit;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_literals_from_type", 799, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_lit);
        goto CPyL45;
    }
    cpy_r_r41 = ((mypy___types___LiteralTypeObject *)cpy_r_r40)->_fallback;
    cpy_r_r42 = ((mypy___types___InstanceObject *)cpy_r_r41)->_type;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = CPY_GET_ATTR(cpy_r_r42, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_getting_literals_from_type", 799, CPyStatic_typeops___globals);
        goto CPyL45;
    }
CPyL24: ;
    cpy_r_r44 = PyUnicode_Compare(cpy_r_r43, cpy_r_target_fullname);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 == -1;
    if (!cpy_r_r45) goto CPyL27;
    cpy_r_r46 = PyErr_Occurred();
    cpy_r_r47 = cpy_r_r46 != NULL;
    if (!cpy_r_r47) goto CPyL27;
    cpy_r_r48 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/typeops.py", "try_getting_literals_from_type", 799, CPyStatic_typeops___globals);
        goto CPyL45;
    }
CPyL27: ;
    cpy_r_r49 = cpy_r_r44 == 0;
    if (!cpy_r_r49) goto CPyL44;
    if (likely(Py_TYPE(cpy_r_lit) == CPyType_types___LiteralType))
        cpy_r_r50 = cpy_r_lit;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_literals_from_type", 800, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_lit);
        goto CPyL45;
    }
    cpy_r_r51 = ((mypy___types___LiteralTypeObject *)cpy_r_r50)->_value;
    CPy_INCREF(cpy_r_r51);
    CPy_DECREF(cpy_r_lit);
    cpy_r_val = cpy_r_r51;
    cpy_r_r52 = PyObject_IsInstance(cpy_r_val, cpy_r_target_literal_type);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/typeops.py", "try_getting_literals_from_type", 801, CPyStatic_typeops___globals);
        goto CPyL46;
    }
    cpy_r_r54 = cpy_r_r52;
    if (!cpy_r_r54) goto CPyL47;
    cpy_r_r55 = PyList_Append(cpy_r_literals, cpy_r_val);
    CPy_DECREF(cpy_r_val);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/typeops.py", "try_getting_literals_from_type", 802, CPyStatic_typeops___globals);
        goto CPyL43;
    } else
        goto CPyL34;
CPyL32: ;
    cpy_r_r57 = Py_None;
    CPy_INCREF(cpy_r_r57);
    return cpy_r_r57;
CPyL33: ;
    cpy_r_r58 = Py_None;
    CPy_INCREF(cpy_r_r58);
    return cpy_r_r58;
CPyL34: ;
    cpy_r_r59 = cpy_r_r29 + 2;
    cpy_r_r29 = cpy_r_r59;
    goto CPyL19;
CPyL35: ;
    return cpy_r_literals;
CPyL36: ;
    cpy_r_r60 = NULL;
    return cpy_r_r60;
CPyL37: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL36;
CPyL38: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL36;
CPyL39: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL36;
CPyL40: ;
    CPy_DecRef(cpy_r_possible_literals);
    goto CPyL36;
CPyL41: ;
    CPy_DecRef(cpy_r_literals);
    goto CPyL36;
CPyL42: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL35;
CPyL43: ;
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_r28);
    goto CPyL36;
CPyL44: ;
    CPy_DECREF(cpy_r_literals);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_lit);
    goto CPyL33;
CPyL45: ;
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_lit);
    goto CPyL36;
CPyL46: ;
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_val);
    goto CPyL36;
CPyL47: ;
    CPy_DECREF(cpy_r_literals);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_val);
    goto CPyL32;
}

PyObject *CPyPy_typeops___try_getting_literals_from_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", "target_literal_type", "target_fullname", 0};
    static CPyArg_Parser parser = {"OOO:try_getting_literals_from_type", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_target_literal_type;
    PyObject *obj_target_fullname;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_target_literal_type, &obj_target_fullname)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_target_literal_type = obj_target_literal_type;
    PyObject *arg_target_fullname;
    if (likely(PyUnicode_Check(obj_target_fullname)))
        arg_target_fullname = obj_target_fullname;
    else {
        CPy_TypeError("str", obj_target_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___try_getting_literals_from_type(arg_typ, arg_target_literal_type, arg_target_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "try_getting_literals_from_type", 780, CPyStatic_typeops___globals);
    return NULL;
}

char CPyDef_typeops___is_literal_type_like(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_item;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyPtr cpy_r_r36;
    int64_t cpy_r_r37;
    CPyTagged cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_item_2;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "is_literal_type_like", 814, CPyStatic_typeops___globals);
        goto CPyL32;
    }
    cpy_r_t = cpy_r_r0;
    if (PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType))
        cpy_r_r1 = cpy_r_t;
    else {
        cpy_r_r1 = NULL;
    }
    if (cpy_r_r1 != NULL) goto __LL7744;
    if (cpy_r_t == Py_None)
        cpy_r_r1 = cpy_r_t;
    else {
        cpy_r_r1 = NULL;
    }
    if (cpy_r_r1 != NULL) goto __LL7744;
    CPy_TypeErrorTraceback("mypy/typeops.py", "is_literal_type_like", 815, CPyStatic_typeops___globals, "mypy.types.ProperType or None", cpy_r_t);
    goto CPyL33;
__LL7744: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 == cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL34;
    } else
        goto CPyL4;
CPyL3: ;
    return 0;
CPyL4: ;
    cpy_r_r4 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (cpy_r_r7) {
        goto CPyL35;
    } else
        goto CPyL6;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r8 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL16;
    cpy_r_r12 = 0;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r13 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_literal_type_like", 820, CPyStatic_typeops___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL33;
    }
    cpy_r_r14 = ((mypy___types___UnionTypeObject *)cpy_r_r13)->_items;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_t);
    cpy_r_r15 = 0;
CPyL9: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL36;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r15);
    if (likely(PyObject_TypeCheck(cpy_r_r20, CPyType_types___Type)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_literal_type_like", 820, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r20);
        goto CPyL37;
    }
    cpy_r_item = cpy_r_r21;
    cpy_r_r22 = CPyDef_typeops___is_literal_type_like(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "is_literal_type_like", 820, CPyStatic_typeops___globals);
        goto CPyL37;
    }
    if (cpy_r_r22) {
        goto CPyL38;
    } else
        goto CPyL14;
CPyL13: ;
    cpy_r_r12 = 1;
    goto CPyL15;
CPyL14: ;
    cpy_r_r23 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r23;
    goto CPyL9;
CPyL15: ;
    return cpy_r_r12;
CPyL16: ;
    cpy_r_r24 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL39;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___TypeVarType))
        cpy_r_r28 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_literal_type_like", 822, CPyStatic_typeops___globals, "mypy.types.TypeVarType", cpy_r_t);
        goto CPyL33;
    }
    cpy_r_r29 = ((mypy___types___TypeVarTypeObject *)cpy_r_r28)->_upper_bound;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = CPyDef_typeops___is_literal_type_like(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "is_literal_type_like", 822, CPyStatic_typeops___globals);
        goto CPyL33;
    }
    if (cpy_r_r30) {
        goto CPyL40;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r31 = cpy_r_r30;
    goto CPyL30;
CPyL21: ;
    cpy_r_r32 = 0;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___TypeVarType))
        cpy_r_r33 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_literal_type_like", 823, CPyStatic_typeops___globals, "mypy.types.TypeVarType", cpy_r_t);
        goto CPyL33;
    }
    cpy_r_r34 = ((mypy___types___TypeVarTypeObject *)cpy_r_r33)->_values;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_t);
    cpy_r_r35 = 0;
CPyL23: ;
    cpy_r_r36 = (CPyPtr)&((PyVarObject *)cpy_r_r34)->ob_size;
    cpy_r_r37 = *(int64_t *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 << 1;
    cpy_r_r39 = (Py_ssize_t)cpy_r_r35 < (Py_ssize_t)cpy_r_r38;
    if (!cpy_r_r39) goto CPyL41;
    cpy_r_r40 = CPyList_GetItemUnsafe(cpy_r_r34, cpy_r_r35);
    if (likely(PyObject_TypeCheck(cpy_r_r40, CPyType_types___Type)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_literal_type_like", 822, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r40);
        goto CPyL42;
    }
    cpy_r_item_2 = cpy_r_r41;
    cpy_r_r42 = CPyDef_typeops___is_literal_type_like(cpy_r_item_2);
    CPy_DECREF(cpy_r_item_2);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "is_literal_type_like", 823, CPyStatic_typeops___globals);
        goto CPyL42;
    }
    if (cpy_r_r42) {
        goto CPyL43;
    } else
        goto CPyL28;
CPyL27: ;
    cpy_r_r32 = 1;
    goto CPyL29;
CPyL28: ;
    cpy_r_r43 = cpy_r_r35 + 2;
    cpy_r_r35 = cpy_r_r43;
    goto CPyL23;
CPyL29: ;
    cpy_r_r31 = cpy_r_r32;
CPyL30: ;
    return cpy_r_r31;
CPyL31: ;
    return 0;
CPyL32: ;
    cpy_r_r44 = 2;
    return cpy_r_r44;
CPyL33: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL32;
CPyL34: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL3;
CPyL35: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL5;
CPyL36: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL15;
CPyL37: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL32;
CPyL38: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL13;
CPyL39: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL31;
CPyL40: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL20;
CPyL41: ;
    CPy_DECREF(cpy_r_r34);
    goto CPyL29;
CPyL42: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL32;
CPyL43: ;
    CPy_DECREF(cpy_r_r34);
    goto CPyL27;
}

PyObject *CPyPy_typeops___is_literal_type_like(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:is_literal_type_like", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_t;
    if (PyObject_TypeCheck(obj_t, CPyType_types___Type))
        arg_t = obj_t;
    else {
        arg_t = NULL;
    }
    if (arg_t != NULL) goto __LL7745;
    if (obj_t == Py_None)
        arg_t = obj_t;
    else {
        arg_t = NULL;
    }
    if (arg_t != NULL) goto __LL7745;
    CPy_TypeError("mypy.types.Type or None", obj_t); 
    goto fail;
__LL7745: ;
    char retval = CPyDef_typeops___is_literal_type_like(arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "is_literal_type_like", 810, CPyStatic_typeops___globals);
    return NULL;
}

char CPyDef_typeops___is_singleton_type(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "is_singleton_type", 845, CPyStatic_typeops___globals);
        goto CPyL5;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_singleton_type", 845, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL5;
    }
    cpy_r_typ = cpy_r_r1;
    if (likely(PyObject_TypeCheck(cpy_r_typ, CPyType_types___ProperType)))
        cpy_r_r2 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "is_singleton_type", 846, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_typ);
        goto CPyL5;
    }
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_r2, CPyType_types___ProperType, 14, mypy___types___ProperTypeObject, char (*)(PyObject *))(cpy_r_r2); /* is_singleton_type */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "is_singleton_type", 846, CPyStatic_typeops___globals);
        goto CPyL5;
    }
    return cpy_r_r3;
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_typeops___is_singleton_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:is_singleton_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_typeops___is_singleton_type(arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "is_singleton_type", 829, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___try_expanding_sum_type_to_union(PyObject *cpy_r_typ, PyObject *cpy_r_target_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_items;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_new_items;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    int64_t cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    tuple_T4CIOO cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_name;
    PyObject *cpy_r_symbol;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    tuple_T3OOO cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyTagged cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    CPyTagged cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    int32_t cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    CPyTagged cpy_r_r91;
    CPyTagged cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    CPyTagged cpy_r_r96;
    CPyTagged cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    CPyPtr cpy_r_r100;
    CPyPtr cpy_r_r101;
    CPyPtr cpy_r_r102;
    CPyTagged cpy_r_r103;
    CPyTagged cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 868, CPyStatic_typeops___globals);
        goto CPyL59;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 868, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL59;
    }
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r6 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 872, CPyStatic_typeops___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL59;
    }
    cpy_r_r7 = CPyDef_types___UnionType___relevant_items(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 872, CPyStatic_typeops___globals);
        goto CPyL59;
    }
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = PyList_New(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 871, CPyStatic_typeops___globals);
        goto CPyL60;
    }
    cpy_r_r11 = 0;
CPyL7: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL61;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r11);
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_types___Type)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 871, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r16);
        goto CPyL62;
    }
    cpy_r_item = cpy_r_r17;
    cpy_r_r18 = CPyDef_typeops___try_expanding_sum_type_to_union(cpy_r_item, cpy_r_target_fullname);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 872, CPyStatic_typeops___globals);
        goto CPyL62;
    }
    cpy_r_r19 = CPyList_SetItemUnsafe(cpy_r_r10, cpy_r_r11, cpy_r_r18);
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 871, CPyStatic_typeops___globals);
        goto CPyL62;
    }
    cpy_r_r20 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r20;
    goto CPyL7;
CPyL12: ;
    cpy_r_items = cpy_r_r10;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = 2;
    cpy_r_r24 = CPyDef_typeops___make_simplified_union(cpy_r_items, cpy_r_r21, cpy_r_r22, cpy_r_r23, 0);
    CPy_DECREF(cpy_r_items);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 874, CPyStatic_typeops___globals);
        goto CPyL59;
    }
    return cpy_r_r24;
CPyL14: ;
    cpy_r_r25 = (PyObject *)CPyType_types___Instance;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    if (!cpy_r_r28) goto CPyL57;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r29 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 875, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL63;
    }
    cpy_r_r30 = ((mypy___types___InstanceObject *)cpy_r_r29)->_type;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = CPY_GET_ATTR(cpy_r_r30, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 875, CPyStatic_typeops___globals);
        goto CPyL63;
    }
CPyL17: ;
    cpy_r_r32 = PyUnicode_Compare(cpy_r_r31, cpy_r_target_fullname);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 == -1;
    if (!cpy_r_r33) goto CPyL20;
    cpy_r_r34 = PyErr_Occurred();
    cpy_r_r35 = cpy_r_r34 != NULL;
    if (!cpy_r_r35) goto CPyL20;
    cpy_r_r36 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 875, CPyStatic_typeops___globals);
        goto CPyL63;
    }
CPyL20: ;
    cpy_r_r37 = cpy_r_r32 == 0;
    if (!cpy_r_r37) goto CPyL57;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r38 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 876, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL63;
    }
    cpy_r_r39 = ((mypy___types___InstanceObject *)cpy_r_r38)->_type;
    cpy_r_r40 = ((mypy___nodes___TypeInfoObject *)cpy_r_r39)->_is_enum;
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AttributeError("mypy/typeops.py", "try_expanding_sum_type_to_union", "TypeInfo", "is_enum", 876, CPyStatic_typeops___globals);
        goto CPyL63;
    }
CPyL23: ;
    if (!cpy_r_r40) goto CPyL44;
CPyL24: ;
    cpy_r_r41 = PyList_New(0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 877, CPyStatic_typeops___globals);
        goto CPyL63;
    }
    cpy_r_new_items = cpy_r_r41;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r42 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 878, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL64;
    }
    cpy_r_r43 = ((mypy___types___InstanceObject *)cpy_r_r42)->_type;
    cpy_r_r44 = ((mypy___nodes___TypeInfoObject *)cpy_r_r43)->_names;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "try_expanding_sum_type_to_union", "TypeInfo", "names", 878, CPyStatic_typeops___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r44);
CPyL27: ;
    cpy_r_r45 = 0;
    cpy_r_r46 = PyDict_Size(cpy_r_r44);
    cpy_r_r47 = cpy_r_r46 << 1;
    cpy_r_r48 = CPyDict_GetItemsIter(cpy_r_r44);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 878, CPyStatic_typeops___globals);
        goto CPyL65;
    }
CPyL28: ;
    cpy_r_r49 = CPyDict_NextItem(cpy_r_r48, cpy_r_r45);
    cpy_r_r50 = cpy_r_r49.f1;
    cpy_r_r45 = cpy_r_r50;
    cpy_r_r51 = cpy_r_r49.f0;
    if (!cpy_r_r51) goto CPyL66;
    cpy_r_r52 = cpy_r_r49.f2;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = cpy_r_r49.f3;
    CPy_INCREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r49.f2);
    CPy_DECREF(cpy_r_r49.f3);
    if (likely(PyUnicode_Check(cpy_r_r52)))
        cpy_r_r54 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 878, CPyStatic_typeops___globals, "str", cpy_r_r52);
        goto CPyL67;
    }
    if (likely(Py_TYPE(cpy_r_r53) == CPyType_nodes___SymbolTableNode))
        cpy_r_r55 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 878, CPyStatic_typeops___globals, "mypy.nodes.SymbolTableNode", cpy_r_r53);
        goto CPyL68;
    }
    cpy_r_name = cpy_r_r54;
    cpy_r_symbol = cpy_r_r55;
    cpy_r_r56 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_symbol)->_node;
    cpy_r_r57 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r58 = (CPyPtr)&((PyObject *)cpy_r_r56)->ob_type;
    cpy_r_r59 = *(PyObject * *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 == cpy_r_r57;
    CPy_DECREF(cpy_r_symbol);
    if (!cpy_r_r60) goto CPyL69;
    cpy_r_r61 = CPyStatic_types___ENUM_REMOVED_PROPS;
    if (unlikely(cpy_r_r61.f0 == NULL)) {
        goto CPyL70;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ENUM_REMOVED_PROPS\" was not set");
    cpy_r_r62 = 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 882, CPyStatic_typeops___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL35: ;
    CPy_INCREF(cpy_r_r61.f0);
    CPy_INCREF(cpy_r_r61.f1);
    CPy_INCREF(cpy_r_r61.f2);
    cpy_r_r63 = PyTuple_New(3);
    if (unlikely(cpy_r_r63 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7746 = cpy_r_r61.f0;
    PyTuple_SET_ITEM(cpy_r_r63, 0, __tmp7746);
    PyObject *__tmp7747 = cpy_r_r61.f1;
    PyTuple_SET_ITEM(cpy_r_r63, 1, __tmp7747);
    PyObject *__tmp7748 = cpy_r_r61.f2;
    PyTuple_SET_ITEM(cpy_r_r63, 2, __tmp7748);
    cpy_r_r64 = PySequence_Contains(cpy_r_r63, cpy_r_name);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 882, CPyStatic_typeops___globals);
        goto CPyL71;
    }
    cpy_r_r66 = cpy_r_r64;
    if (cpy_r_r66) goto CPyL69;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r67 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 884, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL71;
    }
    cpy_r_r68 = CPY_INT_TAG;
    cpy_r_r69 = CPY_INT_TAG;
    cpy_r_r70 = CPyDef_types___LiteralType(cpy_r_name, cpy_r_r67, cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 884, CPyStatic_typeops___globals);
        goto CPyL72;
    }
    cpy_r_r71 = PyList_Append(cpy_r_new_items, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 884, CPyStatic_typeops___globals);
        goto CPyL72;
    }
CPyL40: ;
    cpy_r_r73 = CPyDict_CheckSize(cpy_r_r44, cpy_r_r47);
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 878, CPyStatic_typeops___globals);
        goto CPyL72;
    } else
        goto CPyL28;
CPyL41: ;
    cpy_r_r74 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 878, CPyStatic_typeops___globals);
        goto CPyL73;
    }
    cpy_r_r75 = CPY_INT_TAG;
    cpy_r_r76 = CPY_INT_TAG;
    cpy_r_r77 = 2;
    cpy_r_r78 = CPyDef_typeops___make_simplified_union(cpy_r_new_items, cpy_r_r75, cpy_r_r76, cpy_r_r77, 0);
    CPy_DECREF(cpy_r_new_items);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 885, CPyStatic_typeops___globals);
        goto CPyL59;
    }
    return cpy_r_r78;
CPyL44: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r79 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 886, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL63;
    }
    cpy_r_r80 = ((mypy___types___InstanceObject *)cpy_r_r79)->_type;
    CPy_INCREF(cpy_r_r80);
    cpy_r_r81 = CPY_GET_ATTR(cpy_r_r80, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 886, CPyStatic_typeops___globals);
        goto CPyL63;
    }
CPyL46: ;
    cpy_r_r82 = CPyStatics[831]; /* 'builtins.bool' */
    cpy_r_r83 = PyUnicode_Compare(cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r84 = cpy_r_r83 == -1;
    if (!cpy_r_r84) goto CPyL49;
    cpy_r_r85 = PyErr_Occurred();
    cpy_r_r86 = cpy_r_r85 != NULL;
    if (!cpy_r_r86) goto CPyL49;
    cpy_r_r87 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 886, CPyStatic_typeops___globals);
        goto CPyL63;
    }
CPyL49: ;
    cpy_r_r88 = cpy_r_r83 == 0;
    if (!cpy_r_r88) goto CPyL57;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r89 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 888, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL63;
    }
    cpy_r_r90 = 1 ? Py_True : Py_False;
    cpy_r_r91 = CPY_INT_TAG;
    cpy_r_r92 = CPY_INT_TAG;
    cpy_r_r93 = CPyDef_types___LiteralType(cpy_r_r90, cpy_r_r89, cpy_r_r91, cpy_r_r92);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 888, CPyStatic_typeops___globals);
        goto CPyL63;
    }
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r94 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 888, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL74;
    }
    cpy_r_r95 = 0 ? Py_True : Py_False;
    cpy_r_r96 = CPY_INT_TAG;
    cpy_r_r97 = CPY_INT_TAG;
    cpy_r_r98 = CPyDef_types___LiteralType(cpy_r_r95, cpy_r_r94, cpy_r_r96, cpy_r_r97);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 888, CPyStatic_typeops___globals);
        goto CPyL74;
    }
    cpy_r_r99 = PyList_New(2);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 888, CPyStatic_typeops___globals);
        goto CPyL75;
    }
    cpy_r_r100 = (CPyPtr)&((PyListObject *)cpy_r_r99)->ob_item;
    cpy_r_r101 = *(CPyPtr *)cpy_r_r100;
    *(PyObject * *)cpy_r_r101 = cpy_r_r93;
    cpy_r_r102 = cpy_r_r101 + 8;
    *(PyObject * *)cpy_r_r102 = cpy_r_r98;
    cpy_r_r103 = CPY_INT_TAG;
    cpy_r_r104 = CPY_INT_TAG;
    cpy_r_r105 = 2;
    cpy_r_r106 = CPyDef_typeops___make_simplified_union(cpy_r_r99, cpy_r_r103, cpy_r_r104, cpy_r_r105, 0);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 887, CPyStatic_typeops___globals);
        goto CPyL59;
    }
    return cpy_r_r106;
CPyL57: ;
    if (likely(PyObject_TypeCheck(cpy_r_typ, CPyType_types___ProperType)))
        cpy_r_r107 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 891, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_typ);
        goto CPyL59;
    }
    return cpy_r_r107;
CPyL59: ;
    cpy_r_r108 = NULL;
    return cpy_r_r108;
CPyL60: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL59;
CPyL61: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL12;
CPyL62: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL59;
CPyL63: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL59;
CPyL64: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_items);
    goto CPyL59;
CPyL65: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_r44);
    goto CPyL59;
CPyL66: ;
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r49.f2);
    CPy_DECREF(cpy_r_r49.f3);
    goto CPyL41;
CPyL67: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r53);
    goto CPyL59;
CPyL68: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r54);
    goto CPyL59;
CPyL69: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL40;
CPyL70: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_name);
    goto CPyL33;
CPyL71: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_name);
    goto CPyL59;
CPyL72: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r48);
    goto CPyL59;
CPyL73: ;
    CPy_DecRef(cpy_r_new_items);
    goto CPyL59;
CPyL74: ;
    CPy_DecRef(cpy_r_r93);
    goto CPyL59;
CPyL75: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r98);
    goto CPyL59;
}

PyObject *CPyPy_typeops___try_expanding_sum_type_to_union(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", "target_fullname", 0};
    static CPyArg_Parser parser = {"OO:try_expanding_sum_type_to_union", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_target_fullname;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_target_fullname)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_target_fullname;
    if (likely(PyUnicode_Check(obj_target_fullname)))
        arg_target_fullname = obj_target_fullname;
    else {
        CPy_TypeError("str", obj_target_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___try_expanding_sum_type_to_union(arg_typ, arg_target_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "try_expanding_sum_type_to_union", 849, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___try_contracting_literals_in_union(PyObject *cpy_r_types) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_proper_types;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_sum_types;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_marked_for_deletion;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_idx;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_typ_2;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_fullname;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    tuple_T2OO cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    tuple_T2OO cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_literals;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_indexes;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    CPyTagged cpy_r_r79;
    CPyTagged cpy_r_first;
    PyObject *cpy_r_r80;
    CPyPtr cpy_r_r81;
    int64_t cpy_r_r82;
    CPyTagged cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_rest;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyTagged cpy_r_r92;
    CPyTagged cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyPtr cpy_r_r95;
    int64_t cpy_r_r96;
    CPyTagged cpy_r_r97;
    CPyTagged cpy_r_r98;
    CPyTagged cpy_r_i;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    int32_t cpy_r_r106;
    char cpy_r_r107;
    CPyTagged cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject **cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 905, CPyStatic_typeops___globals);
        goto CPyL70;
    }
    cpy_r_r1 = PyObject_GetIter(cpy_r_types);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 905, CPyStatic_typeops___globals);
        goto CPyL71;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL72;
    if (likely(PyObject_TypeCheck(cpy_r_r2, CPyType_types___Type)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 905, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r2);
        goto CPyL73;
    }
    cpy_r_typ = cpy_r_r3;
    cpy_r_r4 = CPyDef_types___get_proper_type(cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 905, CPyStatic_typeops___globals);
        goto CPyL73;
    }
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 905, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r4);
        goto CPyL73;
    }
    cpy_r_r6 = PyList_Append(cpy_r_r0, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 905, CPyStatic_typeops___globals);
        goto CPyL73;
    } else
        goto CPyL2;
CPyL7: ;
    cpy_r_r8 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 905, CPyStatic_typeops___globals);
        goto CPyL71;
    }
    cpy_r_proper_types = cpy_r_r0;
    cpy_r_r9 = PyDict_New();
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 906, CPyStatic_typeops___globals);
        goto CPyL74;
    }
    cpy_r_sum_types = cpy_r_r9;
    cpy_r_r10 = PySet_New(NULL);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 907, CPyStatic_typeops___globals);
        goto CPyL75;
    }
    cpy_r_marked_for_deletion = cpy_r_r10;
    cpy_r_r11 = 0;
    cpy_r_idx = 0;
    cpy_r_r12 = 0;
CPyL11: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_proper_types)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL76;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_proper_types, cpy_r_r12);
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_types___ProperType)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 908, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r17);
        goto CPyL77;
    }
    cpy_r_typ_2 = cpy_r_r18;
    cpy_r_r19 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_typ_2)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    if (!cpy_r_r22) goto CPyL78;
    if (likely(Py_TYPE(cpy_r_typ_2) == CPyType_types___LiteralType))
        cpy_r_r23 = cpy_r_typ_2;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 910, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_typ_2);
        goto CPyL79;
    }
    cpy_r_r24 = ((mypy___types___LiteralTypeObject *)cpy_r_r23)->_fallback;
    cpy_r_r25 = ((mypy___types___InstanceObject *)cpy_r_r24)->_type;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPY_GET_ATTR(cpy_r_r25, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 910, CPyStatic_typeops___globals);
        goto CPyL79;
    }
CPyL16: ;
    cpy_r_fullname = cpy_r_r26;
    if (likely(Py_TYPE(cpy_r_typ_2) == CPyType_types___LiteralType))
        cpy_r_r27 = cpy_r_typ_2;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 911, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_typ_2);
        goto CPyL80;
    }
    cpy_r_r28 = ((mypy___types___LiteralTypeObject *)cpy_r_r27)->_fallback;
    cpy_r_r29 = ((mypy___types___InstanceObject *)cpy_r_r28)->_type;
    cpy_r_r30 = ((mypy___nodes___TypeInfoObject *)cpy_r_r29)->_is_enum;
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AttributeError("mypy/typeops.py", "try_contracting_literals_in_union", "TypeInfo", "is_enum", 911, CPyStatic_typeops___globals);
        goto CPyL80;
    }
CPyL18: ;
    if (cpy_r_r30) goto CPyL22;
CPyL19: ;
    if (likely(Py_TYPE(cpy_r_typ_2) == CPyType_types___LiteralType))
        cpy_r_r31 = cpy_r_typ_2;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 911, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_typ_2);
        goto CPyL80;
    }
    cpy_r_r32 = ((mypy___types___LiteralTypeObject *)cpy_r_r31)->_value;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = (PyObject *)&PyBool_Type;
    cpy_r_r34 = PyObject_IsInstance(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 911, CPyStatic_typeops___globals);
        goto CPyL80;
    }
    cpy_r_r36 = cpy_r_r34;
    if (!cpy_r_r36) goto CPyL81;
CPyL22: ;
    cpy_r_r37 = PyDict_Contains(cpy_r_sum_types, cpy_r_fullname);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 912, CPyStatic_typeops___globals);
        goto CPyL80;
    }
    cpy_r_r39 = cpy_r_r37;
    cpy_r_r40 = cpy_r_r39 ^ 1;
    if (!cpy_r_r40) goto CPyL37;
    if (likely(Py_TYPE(cpy_r_typ_2) == CPyType_types___LiteralType))
        cpy_r_r41 = cpy_r_typ_2;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 915, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_typ_2);
        goto CPyL80;
    }
    cpy_r_r42 = ((mypy___types___LiteralTypeObject *)cpy_r_r41)->_fallback;
    cpy_r_r43 = ((mypy___types___InstanceObject *)cpy_r_r42)->_type;
    cpy_r_r44 = ((mypy___nodes___TypeInfoObject *)cpy_r_r43)->_is_enum;
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AttributeError("mypy/typeops.py", "try_contracting_literals_in_union", "TypeInfo", "is_enum", 915, CPyStatic_typeops___globals);
        goto CPyL80;
    }
CPyL26: ;
    if (!cpy_r_r44) goto CPyL31;
CPyL27: ;
    if (likely(Py_TYPE(cpy_r_typ_2) == CPyType_types___LiteralType))
        cpy_r_r45 = cpy_r_typ_2;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 914, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_typ_2);
        goto CPyL80;
    }
    cpy_r_r46 = ((mypy___types___LiteralTypeObject *)cpy_r_r45)->_fallback;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = CPyDef_types___Instance___get_enum_values(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 914, CPyStatic_typeops___globals);
        goto CPyL80;
    }
    cpy_r_r48 = PySet_New(cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 914, CPyStatic_typeops___globals);
        goto CPyL80;
    }
    cpy_r_r49 = cpy_r_r48;
    goto CPyL35;
CPyL31: ;
    cpy_r_r50 = PySet_New(NULL);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 916, CPyStatic_typeops___globals);
        goto CPyL80;
    }
    cpy_r_r51 = 1 ? Py_True : Py_False;
    cpy_r_r52 = PySet_Add(cpy_r_r50, cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 916, CPyStatic_typeops___globals);
        goto CPyL82;
    }
    cpy_r_r54 = 0 ? Py_True : Py_False;
    cpy_r_r55 = PySet_Add(cpy_r_r50, cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 916, CPyStatic_typeops___globals);
        goto CPyL82;
    }
    cpy_r_r49 = cpy_r_r50;
CPyL35: ;
    cpy_r_r57 = PyList_New(0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 917, CPyStatic_typeops___globals);
        goto CPyL83;
    }
    cpy_r_r58.f0 = cpy_r_r49;
    cpy_r_r58.f1 = cpy_r_r57;
    CPy_INCREF(cpy_r_r58.f0);
    CPy_INCREF(cpy_r_r58.f1);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r59 = PyTuple_New(2);
    if (unlikely(cpy_r_r59 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7749 = cpy_r_r58.f0;
    PyTuple_SET_ITEM(cpy_r_r59, 0, __tmp7749);
    PyObject *__tmp7750 = cpy_r_r58.f1;
    PyTuple_SET_ITEM(cpy_r_r59, 1, __tmp7750);
    cpy_r_r60 = CPyDict_SetItem(cpy_r_sum_types, cpy_r_fullname, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 913, CPyStatic_typeops___globals);
        goto CPyL80;
    }
CPyL37: ;
    cpy_r_r62 = CPyDict_GetItem(cpy_r_sum_types, cpy_r_fullname);
    CPy_DECREF(cpy_r_fullname);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 919, CPyStatic_typeops___globals);
        goto CPyL79;
    }
    PyObject *__tmp7751;
    if (unlikely(!(PyTuple_Check(cpy_r_r62) && PyTuple_GET_SIZE(cpy_r_r62) == 2))) {
        __tmp7751 = NULL;
        goto __LL7752;
    }
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r62, 0))))
        __tmp7751 = PyTuple_GET_ITEM(cpy_r_r62, 0);
    else {
        __tmp7751 = NULL;
    }
    if (__tmp7751 == NULL) goto __LL7752;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r62, 1))))
        __tmp7751 = PyTuple_GET_ITEM(cpy_r_r62, 1);
    else {
        __tmp7751 = NULL;
    }
    if (__tmp7751 == NULL) goto __LL7752;
    __tmp7751 = cpy_r_r62;
__LL7752: ;
    if (unlikely(__tmp7751 == NULL)) {
        CPy_TypeError("tuple[set, list]", cpy_r_r62); cpy_r_r63 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp7753 = PyTuple_GET_ITEM(cpy_r_r62, 0);
        CPy_INCREF(__tmp7753);
        PyObject *__tmp7754;
        if (likely(PySet_Check(__tmp7753)))
            __tmp7754 = __tmp7753;
        else {
            CPy_TypeError("set", __tmp7753); 
            __tmp7754 = NULL;
        }
        cpy_r_r63.f0 = __tmp7754;
        PyObject *__tmp7755 = PyTuple_GET_ITEM(cpy_r_r62, 1);
        CPy_INCREF(__tmp7755);
        PyObject *__tmp7756;
        if (likely(PyList_Check(__tmp7755)))
            __tmp7756 = __tmp7755;
        else {
            CPy_TypeError("list", __tmp7755); 
            __tmp7756 = NULL;
        }
        cpy_r_r63.f1 = __tmp7756;
    }
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63.f0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 919, CPyStatic_typeops___globals);
        goto CPyL79;
    }
    cpy_r_r64 = cpy_r_r63.f0;
    CPy_INCREF(cpy_r_r64);
    cpy_r_literals = cpy_r_r64;
    cpy_r_r65 = cpy_r_r63.f1;
    CPy_INCREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r63.f0);
    CPy_DECREF(cpy_r_r63.f1);
    cpy_r_indexes = cpy_r_r65;
    if (likely(Py_TYPE(cpy_r_typ_2) == CPyType_types___LiteralType))
        cpy_r_r66 = cpy_r_typ_2;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 920, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_typ_2);
        goto CPyL84;
    }
    cpy_r_r67 = ((mypy___types___LiteralTypeObject *)cpy_r_r66)->_value;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = PySet_Discard(cpy_r_literals, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 920, CPyStatic_typeops___globals);
        goto CPyL84;
    }
    cpy_r_r70 = CPyTagged_StealAsObject(cpy_r_idx);
    cpy_r_r71 = PyList_Append(cpy_r_indexes, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 921, CPyStatic_typeops___globals);
        goto CPyL85;
    }
    cpy_r_r73 = PyObject_IsTrue(cpy_r_literals);
    CPy_DECREF(cpy_r_literals);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 919, CPyStatic_typeops___globals);
        goto CPyL86;
    }
    cpy_r_r75 = cpy_r_r73;
    if (cpy_r_r75) goto CPyL87;
    cpy_r_r76 = PyObject_GetIter(cpy_r_indexes);
    CPy_DECREF(cpy_r_indexes);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 923, CPyStatic_typeops___globals);
        goto CPyL88;
    }
    cpy_r_r77 = PyIter_Next(cpy_r_r76);
    if (cpy_r_r77 == NULL) {
        goto CPyL89;
    } else
        goto CPyL48;
CPyL46: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r78 = 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 923, CPyStatic_typeops___globals);
        goto CPyL70;
    }
    CPy_Unreachable();
CPyL48: ;
    if (likely(PyLong_Check(cpy_r_r77)))
        cpy_r_r79 = CPyTagged_FromObject(cpy_r_r77);
    else {
        CPy_TypeError("int", cpy_r_r77); cpy_r_r79 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r79 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 923, CPyStatic_typeops___globals);
        goto CPyL90;
    }
    cpy_r_first = cpy_r_r79;
    cpy_r_r80 = PySequence_List(cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 923, CPyStatic_typeops___globals);
        goto CPyL91;
    }
    cpy_r_r81 = (CPyPtr)&((PyVarObject *)cpy_r_r80)->ob_size;
    cpy_r_r82 = *(int64_t *)cpy_r_r81;
    cpy_r_r83 = cpy_r_r82 << 1;
    cpy_r_r84 = (Py_ssize_t)0 <= (Py_ssize_t)cpy_r_r83;
    if (cpy_r_r84) {
        goto CPyL53;
    } else
        goto CPyL92;
CPyL51: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r85 = 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 923, CPyStatic_typeops___globals);
        goto CPyL70;
    }
    CPy_Unreachable();
CPyL53: ;
    cpy_r_rest = cpy_r_r80;
    if (likely(Py_TYPE(cpy_r_typ_2) == CPyType_types___LiteralType))
        cpy_r_r86 = cpy_r_typ_2;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 924, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_typ_2);
        goto CPyL93;
    }
    cpy_r_r87 = ((mypy___types___LiteralTypeObject *)cpy_r_r86)->_fallback;
    CPy_INCREF(cpy_r_r87);
    CPy_DECREF(cpy_r_typ_2);
    cpy_r_r88 = CPyList_SetItem(cpy_r_proper_types, cpy_r_first, cpy_r_r87);
    CPyTagged_DECREF(cpy_r_first);
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 924, CPyStatic_typeops___globals);
        goto CPyL94;
    }
    cpy_r_r89 = PySet_New(cpy_r_rest);
    CPy_DECREF(cpy_r_rest);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 925, CPyStatic_typeops___globals);
        goto CPyL95;
    }
    cpy_r_r90 = PyNumber_InPlaceOr(cpy_r_marked_for_deletion, cpy_r_r89);
    CPy_DECREF(cpy_r_marked_for_deletion);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 925, CPyStatic_typeops___globals);
        goto CPyL75;
    }
    if (likely(PySet_Check(cpy_r_r90)))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 925, CPyStatic_typeops___globals, "set", cpy_r_r90);
        goto CPyL75;
    }
    cpy_r_marked_for_deletion = cpy_r_r91;
CPyL59: ;
    cpy_r_r92 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r92;
    cpy_r_idx = cpy_r_r92;
    cpy_r_r93 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r93;
    goto CPyL11;
CPyL60: ;
    cpy_r_r94 = PyList_New(0);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 928, CPyStatic_typeops___globals);
        goto CPyL96;
    }
    cpy_r_r95 = (CPyPtr)&((PyVarObject *)cpy_r_proper_types)->ob_size;
    cpy_r_r96 = *(int64_t *)cpy_r_r95;
    cpy_r_r97 = cpy_r_r96 << 1;
    cpy_r_r98 = 0;
    cpy_r_i = cpy_r_r98;
CPyL62: ;
    cpy_r_r99 = (Py_ssize_t)cpy_r_r98 < (Py_ssize_t)cpy_r_r97;
    if (!cpy_r_r99) goto CPyL97;
    cpy_r_r100 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r101 = PySet_Contains(cpy_r_marked_for_deletion, cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 928, CPyStatic_typeops___globals);
        goto CPyL98;
    }
    cpy_r_r103 = cpy_r_r101;
    cpy_r_r104 = cpy_r_r103 ^ 1;
    cpy_r_r105 = cpy_r_r104 ? Py_True : Py_False;
    cpy_r_r106 = PyList_Append(cpy_r_r94, cpy_r_r105);
    cpy_r_r107 = cpy_r_r106 >= 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 928, CPyStatic_typeops___globals);
        goto CPyL98;
    }
    cpy_r_r108 = cpy_r_r98 + 2;
    cpy_r_r98 = cpy_r_r108;
    cpy_r_i = cpy_r_r108;
    goto CPyL62;
CPyL66: ;
    cpy_r_r109 = CPyModule_itertools;
    cpy_r_r110 = CPyStatics[6372]; /* 'compress' */
    cpy_r_r111 = CPyObject_GetAttr(cpy_r_r109, cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 927, CPyStatic_typeops___globals);
        goto CPyL99;
    }
    PyObject *cpy_r_r112[2] = {cpy_r_proper_types, cpy_r_r94};
    cpy_r_r113 = (PyObject **)&cpy_r_r112;
    cpy_r_r114 = _PyObject_Vectorcall(cpy_r_r111, cpy_r_r113, 2, 0);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 927, CPyStatic_typeops___globals);
        goto CPyL99;
    }
    CPy_DECREF(cpy_r_proper_types);
    CPy_DECREF(cpy_r_r94);
    cpy_r_r115 = PySequence_List(cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 926, CPyStatic_typeops___globals);
        goto CPyL70;
    }
    return cpy_r_r115;
CPyL70: ;
    cpy_r_r116 = NULL;
    return cpy_r_r116;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL70;
CPyL72: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL73: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL70;
CPyL74: ;
    CPy_DecRef(cpy_r_proper_types);
    goto CPyL70;
CPyL75: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_sum_types);
    goto CPyL70;
CPyL76: ;
    CPy_DECREF(cpy_r_sum_types);
    CPyTagged_DECREF(cpy_r_idx);
    goto CPyL60;
CPyL77: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_sum_types);
    CPy_DecRef(cpy_r_marked_for_deletion);
    CPyTagged_DecRef(cpy_r_idx);
    goto CPyL70;
CPyL78: ;
    CPyTagged_DECREF(cpy_r_idx);
    CPy_DECREF(cpy_r_typ_2);
    goto CPyL59;
CPyL79: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_sum_types);
    CPy_DecRef(cpy_r_marked_for_deletion);
    CPyTagged_DecRef(cpy_r_idx);
    CPy_DecRef(cpy_r_typ_2);
    goto CPyL70;
CPyL80: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_sum_types);
    CPy_DecRef(cpy_r_marked_for_deletion);
    CPyTagged_DecRef(cpy_r_idx);
    CPy_DecRef(cpy_r_typ_2);
    CPy_DecRef(cpy_r_fullname);
    goto CPyL70;
CPyL81: ;
    CPyTagged_DECREF(cpy_r_idx);
    CPy_DECREF(cpy_r_typ_2);
    CPy_DECREF(cpy_r_fullname);
    goto CPyL59;
CPyL82: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_sum_types);
    CPy_DecRef(cpy_r_marked_for_deletion);
    CPyTagged_DecRef(cpy_r_idx);
    CPy_DecRef(cpy_r_typ_2);
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_r50);
    goto CPyL70;
CPyL83: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_sum_types);
    CPy_DecRef(cpy_r_marked_for_deletion);
    CPyTagged_DecRef(cpy_r_idx);
    CPy_DecRef(cpy_r_typ_2);
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_r49);
    goto CPyL70;
CPyL84: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_sum_types);
    CPy_DecRef(cpy_r_marked_for_deletion);
    CPyTagged_DecRef(cpy_r_idx);
    CPy_DecRef(cpy_r_typ_2);
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_indexes);
    goto CPyL70;
CPyL85: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_sum_types);
    CPy_DecRef(cpy_r_marked_for_deletion);
    CPy_DecRef(cpy_r_typ_2);
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_indexes);
    goto CPyL70;
CPyL86: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_sum_types);
    CPy_DecRef(cpy_r_marked_for_deletion);
    CPy_DecRef(cpy_r_typ_2);
    CPy_DecRef(cpy_r_indexes);
    goto CPyL70;
CPyL87: ;
    CPy_DECREF(cpy_r_typ_2);
    CPy_DECREF(cpy_r_indexes);
    goto CPyL59;
CPyL88: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_sum_types);
    CPy_DecRef(cpy_r_marked_for_deletion);
    CPy_DecRef(cpy_r_typ_2);
    goto CPyL70;
CPyL89: ;
    CPy_DECREF(cpy_r_proper_types);
    CPy_DECREF(cpy_r_sum_types);
    CPy_DECREF(cpy_r_marked_for_deletion);
    CPy_DECREF(cpy_r_typ_2);
    CPy_DECREF(cpy_r_r76);
    goto CPyL46;
CPyL90: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_sum_types);
    CPy_DecRef(cpy_r_marked_for_deletion);
    CPy_DecRef(cpy_r_typ_2);
    CPy_DecRef(cpy_r_r76);
    goto CPyL70;
CPyL91: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_sum_types);
    CPy_DecRef(cpy_r_marked_for_deletion);
    CPy_DecRef(cpy_r_typ_2);
    CPyTagged_DecRef(cpy_r_first);
    goto CPyL70;
CPyL92: ;
    CPy_DECREF(cpy_r_proper_types);
    CPy_DECREF(cpy_r_sum_types);
    CPy_DECREF(cpy_r_marked_for_deletion);
    CPy_DECREF(cpy_r_typ_2);
    CPyTagged_DECREF(cpy_r_first);
    CPy_DECREF(cpy_r_r80);
    goto CPyL51;
CPyL93: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_sum_types);
    CPy_DecRef(cpy_r_marked_for_deletion);
    CPy_DecRef(cpy_r_typ_2);
    CPyTagged_DecRef(cpy_r_first);
    CPy_DecRef(cpy_r_rest);
    goto CPyL70;
CPyL94: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_sum_types);
    CPy_DecRef(cpy_r_marked_for_deletion);
    CPy_DecRef(cpy_r_rest);
    goto CPyL70;
CPyL95: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_sum_types);
    CPy_DecRef(cpy_r_marked_for_deletion);
    goto CPyL70;
CPyL96: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_marked_for_deletion);
    goto CPyL70;
CPyL97: ;
    CPy_DECREF(cpy_r_marked_for_deletion);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL66;
CPyL98: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_marked_for_deletion);
    CPy_DecRef(cpy_r_r94);
    goto CPyL70;
CPyL99: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_r94);
    goto CPyL70;
}

PyObject *CPyPy_typeops___try_contracting_literals_in_union(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:try_contracting_literals_in_union", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_types = obj_types;
    PyObject *retval = CPyDef_typeops___try_contracting_literals_in_union(arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "try_contracting_literals_in_union", 894, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___coerce_to_literal(PyObject *cpy_r_typ) {
    PyObject *cpy_r_original_type;
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_new_items;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_enum_values;
    CPyPtr cpy_r_r40;
    int64_t cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPy_INCREF(cpy_r_typ);
    cpy_r_original_type = cpy_r_typ;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "coerce_to_literal", 938, CPyStatic_typeops___globals);
        goto CPyL32;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "coerce_to_literal", 938, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL32;
    }
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL33;
    } else
        goto CPyL13;
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r6 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "coerce_to_literal", 940, CPyStatic_typeops___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL34;
    }
    cpy_r_r7 = ((mypy___types___UnionTypeObject *)cpy_r_r6)->_items;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = PyList_New(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "coerce_to_literal", 940, CPyStatic_typeops___globals);
        goto CPyL35;
    }
    cpy_r_r11 = 0;
CPyL6: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL36;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r11);
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_types___Type)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "coerce_to_literal", 940, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r16);
        goto CPyL37;
    }
    cpy_r_item = cpy_r_r17;
    cpy_r_r18 = CPyDef_typeops___coerce_to_literal(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "coerce_to_literal", 940, CPyStatic_typeops___globals);
        goto CPyL37;
    }
    cpy_r_r19 = CPyList_SetItemUnsafe(cpy_r_r10, cpy_r_r11, cpy_r_r18);
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/typeops.py", "coerce_to_literal", 940, CPyStatic_typeops___globals);
        goto CPyL37;
    }
    cpy_r_r20 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r20;
    goto CPyL6;
CPyL11: ;
    cpy_r_new_items = cpy_r_r10;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = CPyDef_types___UnionType___make_union(cpy_r_new_items, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_new_items);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "coerce_to_literal", 941, CPyStatic_typeops___globals);
        goto CPyL31;
    }
    return cpy_r_r23;
CPyL13: ;
    cpy_r_r24 = (PyObject *)CPyType_types___Instance;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL38;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r28 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "coerce_to_literal", 943, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL39;
    }
    cpy_r_r29 = ((mypy___types___InstanceObject *)cpy_r_r28)->_last_known_value;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_r29 != cpy_r_r30;
    CPy_DECREF(cpy_r_r29);
    if (cpy_r_r31) {
        goto CPyL40;
    } else
        goto CPyL19;
CPyL16: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r32 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "coerce_to_literal", 944, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL34;
    }
    cpy_r_r33 = ((mypy___types___InstanceObject *)cpy_r_r32)->_last_known_value;
    CPy_INCREF(cpy_r_r33);
    if (likely(cpy_r_r33 != Py_None))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "coerce_to_literal", 944, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_r33);
        goto CPyL34;
    }
    CPy_DECREF(cpy_r_typ);
    return cpy_r_r34;
CPyL19: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r35 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "coerce_to_literal", 945, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL39;
    }
    cpy_r_r36 = ((mypy___types___InstanceObject *)cpy_r_r35)->_type;
    cpy_r_r37 = ((mypy___nodes___TypeInfoObject *)cpy_r_r36)->_is_enum;
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AttributeError("mypy/typeops.py", "coerce_to_literal", "TypeInfo", "is_enum", 945, CPyStatic_typeops___globals);
        goto CPyL39;
    }
CPyL21: ;
    if (!cpy_r_r37) goto CPyL38;
CPyL22: ;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r38 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "coerce_to_literal", 946, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL39;
    }
    cpy_r_r39 = CPyDef_types___Instance___get_enum_values(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "coerce_to_literal", 946, CPyStatic_typeops___globals);
        goto CPyL39;
    }
    cpy_r_enum_values = cpy_r_r39;
    cpy_r_r40 = (CPyPtr)&((PyVarObject *)cpy_r_enum_values)->ob_size;
    cpy_r_r41 = *(int64_t *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 << 1;
    cpy_r_r43 = cpy_r_r42 == 2;
    if (cpy_r_r43) {
        goto CPyL41;
    } else
        goto CPyL42;
CPyL25: ;
    cpy_r_r44 = CPyList_GetItemShort(cpy_r_enum_values, 0);
    CPy_DECREF(cpy_r_enum_values);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "coerce_to_literal", 948, CPyStatic_typeops___globals);
        goto CPyL34;
    }
    if (likely(PyUnicode_Check(cpy_r_r44)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "coerce_to_literal", 948, CPyStatic_typeops___globals, "str", cpy_r_r44);
        goto CPyL34;
    }
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r46 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "coerce_to_literal", 948, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL43;
    }
    cpy_r_r47 = CPY_INT_TAG;
    cpy_r_r48 = CPY_INT_TAG;
    cpy_r_r49 = CPyDef_types___LiteralType(cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "coerce_to_literal", 948, CPyStatic_typeops___globals);
        goto CPyL31;
    }
    return cpy_r_r49;
CPyL30: ;
    return cpy_r_original_type;
CPyL31: ;
    cpy_r_r50 = NULL;
    return cpy_r_r50;
CPyL32: ;
    CPy_DecRef(cpy_r_original_type);
    goto CPyL31;
CPyL33: ;
    CPy_DECREF(cpy_r_original_type);
    goto CPyL3;
CPyL34: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL31;
CPyL35: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL31;
CPyL36: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL11;
CPyL37: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL31;
CPyL38: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL30;
CPyL39: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_original_type);
    goto CPyL31;
CPyL40: ;
    CPy_DECREF(cpy_r_original_type);
    goto CPyL16;
CPyL41: ;
    CPy_DECREF(cpy_r_original_type);
    goto CPyL25;
CPyL42: ;
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_enum_values);
    goto CPyL30;
CPyL43: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL31;
}

PyObject *CPyPy_typeops___coerce_to_literal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:coerce_to_literal", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___coerce_to_literal(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "coerce_to_literal", 933, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___get_type_vars(PyObject *cpy_r_tp) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_typeops___TypeVarExtractor();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "get_type_vars", 953, CPyStatic_typeops___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_tp, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_tp, cpy_r_r0); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "get_type_vars", 953, CPyStatic_typeops___globals);
        goto CPyL4;
    }
    if (likely(PyList_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "get_type_vars", 953, CPyStatic_typeops___globals, "list", cpy_r_r1);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_typeops___get_type_vars(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tp", 0};
    static CPyArg_Parser parser = {"O:get_type_vars", kwlist, 0};
    PyObject *obj_tp;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tp)) {
        return NULL;
    }
    PyObject *arg_tp;
    if (likely(PyObject_TypeCheck(obj_tp, CPyType_types___Type)))
        arg_tp = obj_tp;
    else {
        CPy_TypeError("mypy.types.Type", obj_tp); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___get_type_vars(arg_tp);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "get_type_vars", 952, CPyStatic_typeops___globals);
    return NULL;
}

char CPyDef_typeops___TypeVarExtractor_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyStatics[6373]; /* '_merge' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_self, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "__init__", 958, CPyStatic_typeops___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_type_visitor___TypeQuery_____init__(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "__init__", 958, CPyStatic_typeops___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_typeops___TypeVarExtractor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typeops___TypeVarExtractor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typeops.TypeVarExtractor", obj_self); 
        goto fail;
    }
    char retval = CPyDef_typeops___TypeVarExtractor_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "__init__", 957, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___TypeVarExtractor____merge(PyObject *cpy_r_self, PyObject *cpy_r_iter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_out;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_merge", 961, CPyStatic_typeops___globals);
        goto CPyL7;
    }
    cpy_r_out = cpy_r_r0;
    cpy_r_r1 = PyObject_GetIter(cpy_r_iter);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_merge", 962, CPyStatic_typeops___globals);
        goto CPyL8;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL9;
    if (likely(PyList_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "_merge", 962, CPyStatic_typeops___globals, "list", cpy_r_r2);
        goto CPyL10;
    }
    cpy_r_item = cpy_r_r3;
    cpy_r_r4 = CPyList_Extend(cpy_r_out, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "_merge", 963, CPyStatic_typeops___globals);
        goto CPyL10;
    } else
        goto CPyL11;
CPyL5: ;
    cpy_r_r5 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/typeops.py", "_merge", 962, CPyStatic_typeops___globals);
        goto CPyL8;
    }
    return cpy_r_out;
CPyL7: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL8: ;
    CPy_DecRef(cpy_r_out);
    goto CPyL7;
CPyL9: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL5;
CPyL10: ;
    CPy_DecRef(cpy_r_out);
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
CPyL11: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL2;
}

PyObject *CPyPy_typeops___TypeVarExtractor____merge(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"iter", 0};
    static CPyArg_Parser parser = {"O:_merge", kwlist, 0};
    PyObject *obj_iter;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_iter)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typeops___TypeVarExtractor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typeops.TypeVarExtractor", obj_self); 
        goto fail;
    }
    PyObject *arg_iter = obj_iter;
    PyObject *retval = CPyDef_typeops___TypeVarExtractor____merge(arg_self, arg_iter);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "_merge", 960, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___TypeVarExtractor___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = PyList_New(1);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "visit_type_var", 967, CPyStatic_typeops___globals);
        goto CPyL2;
    }
    cpy_r_r1 = (CPyPtr)&((PyListObject *)cpy_r_r0)->ob_item;
    cpy_r_r2 = *(CPyPtr *)cpy_r_r1;
    CPy_INCREF(cpy_r_t);
    *(PyObject * *)cpy_r_r2 = cpy_r_t;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_typeops___TypeVarExtractor___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typeops___TypeVarExtractor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typeops.TypeVarExtractor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___TypeVarExtractor___visit_type_var(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "visit_type_var", 966, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___TypeVarExtractor___visit_type_var__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_typeops___TypeVarExtractor___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_typeops___TypeVarExtractor___visit_type_var__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typeops___TypeVarExtractor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typeops.TypeVarExtractor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___TypeVarExtractor___visit_type_var__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "visit_type_var__TypeQuery_glue", -1, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___TypeVarExtractor___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_typeops___TypeVarExtractor___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_typeops___TypeVarExtractor___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typeops___TypeVarExtractor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typeops.TypeVarExtractor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___TypeVarExtractor___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_typeops___globals);
    return NULL;
}

char CPyDef_typeops___custom_special_method(PyObject *cpy_r_typ, PyObject *cpy_r_name, char cpy_r_check_all) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_method;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    tuple_T2OO cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    tuple_T3T2OOOO cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyPtr cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyPtr cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    CPyTagged cpy_r_r84;
    CPyPtr cpy_r_r85;
    int64_t cpy_r_r86;
    CPyTagged cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_t;
    char cpy_r_r91;
    char cpy_r_r92;
    CPyTagged cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyTagged cpy_r_r97;
    CPyPtr cpy_r_r98;
    int64_t cpy_r_r99;
    CPyTagged cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_t_2;
    char cpy_r_r104;
    char cpy_r_r105;
    CPyTagged cpy_r_r106;
    PyObject *cpy_r_r107;
    CPyPtr cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyPtr cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    CPyPtr cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    if (cpy_r_check_all != 2) goto CPyL2;
    cpy_r_check_all = 0;
CPyL2: ;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "custom_special_method", 975, CPyStatic_typeops___globals);
        goto CPyL81;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 975, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL81;
    }
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___Instance;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL46;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r6 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 977, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL82;
    }
    cpy_r_r7 = ((mypy___types___InstanceObject *)cpy_r_r6)->_type;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r8 = CPyDef_nodes___TypeInfo___get(cpy_r_r7, cpy_r_name);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "custom_special_method", 977, CPyStatic_typeops___globals);
        goto CPyL81;
    }
    cpy_r_method = cpy_r_r8;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_method != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL83;
    if (likely(cpy_r_method != Py_None))
        cpy_r_r11 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 978, CPyStatic_typeops___globals, "mypy.nodes.SymbolTableNode", cpy_r_method);
        goto CPyL84;
    }
    cpy_r_r12 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r11)->_node;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyStatic_typeops___globals;
    cpy_r_r14 = CPyStatics[1329]; /* 'SYMBOL_FUNCBASE_TYPES' */
    cpy_r_r15 = CPyDict_GetItem(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "custom_special_method", 978, CPyStatic_typeops___globals);
        goto CPyL85;
    }
    PyObject *__tmp7757;
    if (unlikely(!(PyTuple_Check(cpy_r_r15) && PyTuple_GET_SIZE(cpy_r_r15) == 2))) {
        __tmp7757 = NULL;
        goto __LL7758;
    }
    __tmp7757 = PyTuple_GET_ITEM(cpy_r_r15, 0);
    if (__tmp7757 == NULL) goto __LL7758;
    __tmp7757 = PyTuple_GET_ITEM(cpy_r_r15, 1);
    if (__tmp7757 == NULL) goto __LL7758;
    __tmp7757 = cpy_r_r15;
__LL7758: ;
    if (unlikely(__tmp7757 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r15); cpy_r_r16 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp7759 = PyTuple_GET_ITEM(cpy_r_r15, 0);
        CPy_INCREF(__tmp7759);
        PyObject *__tmp7760;
        __tmp7760 = __tmp7759;
        cpy_r_r16.f0 = __tmp7760;
        PyObject *__tmp7761 = PyTuple_GET_ITEM(cpy_r_r15, 1);
        CPy_INCREF(__tmp7761);
        PyObject *__tmp7762;
        __tmp7762 = __tmp7761;
        cpy_r_r16.f1 = __tmp7762;
    }
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16.f0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "custom_special_method", 978, CPyStatic_typeops___globals);
        goto CPyL85;
    }
    cpy_r_r17 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r18 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r19.f0 = cpy_r_r16;
    cpy_r_r19.f1 = cpy_r_r17;
    cpy_r_r19.f2 = cpy_r_r18;
    CPy_INCREF(cpy_r_r19.f0.f0);
    CPy_INCREF(cpy_r_r19.f0.f1);
    CPy_INCREF(cpy_r_r19.f1);
    CPy_INCREF(cpy_r_r19.f2);
    CPy_DECREF(cpy_r_r16.f0);
    CPy_DECREF(cpy_r_r16.f1);
    cpy_r_r20 = PyTuple_New(3);
    if (unlikely(cpy_r_r20 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7763 = PyTuple_New(2);
    if (unlikely(__tmp7763 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7764 = cpy_r_r19.f0.f0;
    PyTuple_SET_ITEM(__tmp7763, 0, __tmp7764);
    PyObject *__tmp7765 = cpy_r_r19.f0.f1;
    PyTuple_SET_ITEM(__tmp7763, 1, __tmp7765);
    PyTuple_SET_ITEM(cpy_r_r20, 0, __tmp7763);
    PyObject *__tmp7766 = cpy_r_r19.f1;
    PyTuple_SET_ITEM(cpy_r_r20, 1, __tmp7766);
    PyObject *__tmp7767 = cpy_r_r19.f2;
    PyTuple_SET_ITEM(cpy_r_r20, 2, __tmp7767);
    cpy_r_r21 = PyObject_IsInstance(cpy_r_r12, cpy_r_r20);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/typeops.py", "custom_special_method", 978, CPyStatic_typeops___globals);
        goto CPyL84;
    }
    cpy_r_r23 = cpy_r_r21;
    if (!cpy_r_r23) goto CPyL83;
    if (likely(cpy_r_method != Py_None))
        cpy_r_r24 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 979, CPyStatic_typeops___globals, "mypy.nodes.SymbolTableNode", cpy_r_method);
        goto CPyL84;
    }
    cpy_r_r25 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r24)->_node;
    CPy_INCREF(cpy_r_r25);
    if (Py_TYPE(cpy_r_r25) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r26 = cpy_r_r25;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL7768;
    if (Py_TYPE(cpy_r_r25) == CPyType_nodes___FuncDef)
        cpy_r_r26 = cpy_r_r25;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL7768;
    if (Py_TYPE(cpy_r_r25) == CPyType_nodes___Decorator)
        cpy_r_r26 = cpy_r_r25;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL7768;
    if (Py_TYPE(cpy_r_r25) == CPyType_nodes___Var)
        cpy_r_r26 = cpy_r_r25;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL7768;
    CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 979, CPyStatic_typeops___globals, "union[mypy.nodes.OverloadedFuncDef, mypy.nodes.FuncDef, mypy.nodes.Decorator, mypy.nodes.Var]", cpy_r_r25);
    goto CPyL84;
__LL7768: ;
    cpy_r_r27 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r28 = (CPyPtr)&((PyObject *)cpy_r_r26)->ob_type;
    cpy_r_r29 = *(PyObject * *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 == cpy_r_r27;
    if (!cpy_r_r30) goto CPyL18;
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r31 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 979, CPyStatic_typeops___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r26);
        goto CPyL84;
    }
    cpy_r_r32 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r31)->_info;
    CPy_INCREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32;
    goto CPyL27;
CPyL18: ;
    cpy_r_r34 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_r26)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    if (!cpy_r_r37) goto CPyL21;
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_nodes___FuncDef))
        cpy_r_r38 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 979, CPyStatic_typeops___globals, "mypy.nodes.FuncDef", cpy_r_r26);
        goto CPyL84;
    }
    cpy_r_r39 = ((mypy___nodes___FuncDefObject *)cpy_r_r38)->_info;
    CPy_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r33 = cpy_r_r39;
    goto CPyL27;
CPyL21: ;
    cpy_r_r40 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r41 = (CPyPtr)&((PyObject *)cpy_r_r26)->ob_type;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 == cpy_r_r40;
    if (!cpy_r_r43) goto CPyL25;
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_nodes___Decorator))
        cpy_r_r44 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 979, CPyStatic_typeops___globals, "mypy.nodes.Decorator", cpy_r_r26);
        goto CPyL84;
    }
    cpy_r_r45 = CPY_GET_ATTR(cpy_r_r44, CPyType_nodes___Decorator, 9, mypy___nodes___DecoratorObject, PyObject *); /* info */
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "custom_special_method", 979, CPyStatic_typeops___globals);
        goto CPyL84;
    }
CPyL24: ;
    cpy_r_r33 = cpy_r_r45;
    goto CPyL27;
CPyL25: ;
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_nodes___Var))
        cpy_r_r46 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 979, CPyStatic_typeops___globals, "mypy.nodes.Var", cpy_r_r26);
        goto CPyL84;
    }
    cpy_r_r47 = ((mypy___nodes___VarObject *)cpy_r_r46)->_info;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r33 = cpy_r_r47;
CPyL27: ;
    cpy_r_r48 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "custom_special_method", -1, CPyStatic_typeops___globals);
        goto CPyL84;
    }
    if (!cpy_r_r48) goto CPyL83;
    if (likely(cpy_r_method != Py_None))
        cpy_r_r49 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 980, CPyStatic_typeops___globals, "mypy.nodes.SymbolTableNode", cpy_r_method);
        goto CPyL84;
    }
    cpy_r_r50 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r49)->_node;
    CPy_INCREF(cpy_r_r50);
    if (Py_TYPE(cpy_r_r50) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r51 = cpy_r_r50;
    else {
        cpy_r_r51 = NULL;
    }
    if (cpy_r_r51 != NULL) goto __LL7769;
    if (Py_TYPE(cpy_r_r50) == CPyType_nodes___FuncDef)
        cpy_r_r51 = cpy_r_r50;
    else {
        cpy_r_r51 = NULL;
    }
    if (cpy_r_r51 != NULL) goto __LL7769;
    if (Py_TYPE(cpy_r_r50) == CPyType_nodes___Decorator)
        cpy_r_r51 = cpy_r_r50;
    else {
        cpy_r_r51 = NULL;
    }
    if (cpy_r_r51 != NULL) goto __LL7769;
    if (Py_TYPE(cpy_r_r50) == CPyType_nodes___Var)
        cpy_r_r51 = cpy_r_r50;
    else {
        cpy_r_r51 = NULL;
    }
    if (cpy_r_r51 != NULL) goto __LL7769;
    CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 980, CPyStatic_typeops___globals, "union[mypy.nodes.OverloadedFuncDef, mypy.nodes.FuncDef, mypy.nodes.Decorator, mypy.nodes.Var]", cpy_r_r50);
    goto CPyL84;
__LL7769: ;
    CPy_DECREF(cpy_r_method);
    cpy_r_r52 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r53 = (CPyPtr)&((PyObject *)cpy_r_r51)->ob_type;
    cpy_r_r54 = *(PyObject * *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 == cpy_r_r52;
    if (!cpy_r_r55) goto CPyL34;
    if (likely(Py_TYPE(cpy_r_r51) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r56 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 980, CPyStatic_typeops___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r51);
        goto CPyL81;
    }
    cpy_r_r57 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r56)->_info;
    CPy_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r58 = cpy_r_r57;
    goto CPyL43;
CPyL34: ;
    cpy_r_r59 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r60 = (CPyPtr)&((PyObject *)cpy_r_r51)->ob_type;
    cpy_r_r61 = *(PyObject * *)cpy_r_r60;
    cpy_r_r62 = cpy_r_r61 == cpy_r_r59;
    if (!cpy_r_r62) goto CPyL37;
    if (likely(Py_TYPE(cpy_r_r51) == CPyType_nodes___FuncDef))
        cpy_r_r63 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 980, CPyStatic_typeops___globals, "mypy.nodes.FuncDef", cpy_r_r51);
        goto CPyL81;
    }
    cpy_r_r64 = ((mypy___nodes___FuncDefObject *)cpy_r_r63)->_info;
    CPy_INCREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r58 = cpy_r_r64;
    goto CPyL43;
CPyL37: ;
    cpy_r_r65 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r66 = (CPyPtr)&((PyObject *)cpy_r_r51)->ob_type;
    cpy_r_r67 = *(PyObject * *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 == cpy_r_r65;
    if (!cpy_r_r68) goto CPyL41;
    if (likely(Py_TYPE(cpy_r_r51) == CPyType_nodes___Decorator))
        cpy_r_r69 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 980, CPyStatic_typeops___globals, "mypy.nodes.Decorator", cpy_r_r51);
        goto CPyL81;
    }
    cpy_r_r70 = CPY_GET_ATTR(cpy_r_r69, CPyType_nodes___Decorator, 9, mypy___nodes___DecoratorObject, PyObject *); /* info */
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "custom_special_method", 980, CPyStatic_typeops___globals);
        goto CPyL81;
    }
CPyL40: ;
    cpy_r_r58 = cpy_r_r70;
    goto CPyL43;
CPyL41: ;
    if (likely(Py_TYPE(cpy_r_r51) == CPyType_nodes___Var))
        cpy_r_r71 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 980, CPyStatic_typeops___globals, "mypy.nodes.Var", cpy_r_r51);
        goto CPyL81;
    }
    cpy_r_r72 = ((mypy___nodes___VarObject *)cpy_r_r71)->_info;
    CPy_INCREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r58 = cpy_r_r72;
CPyL43: ;
    cpy_r_r73 = CPY_GET_ATTR(cpy_r_r58, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "custom_special_method", 980, CPyStatic_typeops___globals);
        goto CPyL81;
    }
CPyL44: ;
    cpy_r_r74 = CPyStatics[1360]; /* 'builtins.' */
    cpy_r_r75 = CPyStr_Startswith(cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r76 = cpy_r_r75 ^ 1;
    return cpy_r_r76;
CPyL45: ;
    return 0;
CPyL46: ;
    cpy_r_r77 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r78 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r79 = *(PyObject * *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 == cpy_r_r77;
    if (!cpy_r_r80) goto CPyL66;
    if (!cpy_r_check_all) goto CPyL57;
    cpy_r_r81 = 1;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r82 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 984, CPyStatic_typeops___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL82;
    }
    cpy_r_r83 = ((mypy___types___UnionTypeObject *)cpy_r_r82)->_items;
    CPy_INCREF(cpy_r_r83);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r84 = 0;
CPyL50: ;
    cpy_r_r85 = (CPyPtr)&((PyVarObject *)cpy_r_r83)->ob_size;
    cpy_r_r86 = *(int64_t *)cpy_r_r85;
    cpy_r_r87 = cpy_r_r86 << 1;
    cpy_r_r88 = (Py_ssize_t)cpy_r_r84 < (Py_ssize_t)cpy_r_r87;
    if (!cpy_r_r88) goto CPyL86;
    cpy_r_r89 = CPyList_GetItemUnsafe(cpy_r_r83, cpy_r_r84);
    if (likely(PyObject_TypeCheck(cpy_r_r89, CPyType_types___Type)))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 984, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r89);
        goto CPyL87;
    }
    cpy_r_t = cpy_r_r90;
    cpy_r_r91 = CPyDef_typeops___custom_special_method(cpy_r_t, cpy_r_name, cpy_r_check_all);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "custom_special_method", 984, CPyStatic_typeops___globals);
        goto CPyL87;
    }
    cpy_r_r92 = cpy_r_r91 ^ 1;
    if (cpy_r_r92) {
        goto CPyL88;
    } else
        goto CPyL55;
CPyL54: ;
    cpy_r_r81 = 0;
    goto CPyL56;
CPyL55: ;
    cpy_r_r93 = cpy_r_r84 + 2;
    cpy_r_r84 = cpy_r_r93;
    goto CPyL50;
CPyL56: ;
    return cpy_r_r81;
CPyL57: ;
    cpy_r_r94 = 0;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r95 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 985, CPyStatic_typeops___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL82;
    }
    cpy_r_r96 = ((mypy___types___UnionTypeObject *)cpy_r_r95)->_items;
    CPy_INCREF(cpy_r_r96);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r97 = 0;
CPyL59: ;
    cpy_r_r98 = (CPyPtr)&((PyVarObject *)cpy_r_r96)->ob_size;
    cpy_r_r99 = *(int64_t *)cpy_r_r98;
    cpy_r_r100 = cpy_r_r99 << 1;
    cpy_r_r101 = (Py_ssize_t)cpy_r_r97 < (Py_ssize_t)cpy_r_r100;
    if (!cpy_r_r101) goto CPyL89;
    cpy_r_r102 = CPyList_GetItemUnsafe(cpy_r_r96, cpy_r_r97);
    if (likely(PyObject_TypeCheck(cpy_r_r102, CPyType_types___Type)))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 985, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r102);
        goto CPyL90;
    }
    cpy_r_t_2 = cpy_r_r103;
    cpy_r_r104 = 2;
    cpy_r_r105 = CPyDef_typeops___custom_special_method(cpy_r_t_2, cpy_r_name, cpy_r_r104);
    CPy_DECREF(cpy_r_t_2);
    if (unlikely(cpy_r_r105 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "custom_special_method", 985, CPyStatic_typeops___globals);
        goto CPyL90;
    }
    if (cpy_r_r105) {
        goto CPyL91;
    } else
        goto CPyL64;
CPyL63: ;
    cpy_r_r94 = 1;
    goto CPyL65;
CPyL64: ;
    cpy_r_r106 = cpy_r_r97 + 2;
    cpy_r_r97 = cpy_r_r106;
    goto CPyL59;
CPyL65: ;
    return cpy_r_r94;
CPyL66: ;
    cpy_r_r107 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r108 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r109 = *(PyObject * *)cpy_r_r108;
    cpy_r_r110 = cpy_r_r109 == cpy_r_r107;
    if (!cpy_r_r110) goto CPyL71;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TupleType))
        cpy_r_r111 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 987, CPyStatic_typeops___globals, "mypy.types.TupleType", cpy_r_typ);
        goto CPyL81;
    }
    cpy_r_r112 = CPyDef_typeops___tuple_fallback(cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "custom_special_method", 987, CPyStatic_typeops___globals);
        goto CPyL81;
    }
    cpy_r_r113 = CPyDef_typeops___custom_special_method(cpy_r_r112, cpy_r_name, cpy_r_check_all);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r113 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "custom_special_method", 987, CPyStatic_typeops___globals);
        goto CPyL81;
    }
    return cpy_r_r113;
CPyL71: ;
    cpy_r_r114 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r115 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r116 = *(PyObject * *)cpy_r_r115;
    cpy_r_r117 = cpy_r_r116 == cpy_r_r114;
    if (!cpy_r_r117) goto CPyL78;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___CallableType))
        cpy_r_r118 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 988, CPyStatic_typeops___globals, "mypy.types.CallableType", cpy_r_typ);
        goto CPyL82;
    }
    cpy_r_r119 = CPyDef_types___CallableType___is_type_obj(cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "custom_special_method", 988, CPyStatic_typeops___globals);
        goto CPyL82;
    }
    if (!cpy_r_r119) goto CPyL78;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___CallableType))
        cpy_r_r120 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "custom_special_method", 990, CPyStatic_typeops___globals, "mypy.types.CallableType", cpy_r_typ);
        goto CPyL82;
    }
    cpy_r_r121 = ((mypy___types___CallableTypeObject *)cpy_r_r120)->_fallback;
    CPy_INCREF(cpy_r_r121);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r122 = CPyDef_typeops___custom_special_method(cpy_r_r121, cpy_r_name, cpy_r_check_all);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r122 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "custom_special_method", 990, CPyStatic_typeops___globals);
        goto CPyL81;
    }
    return cpy_r_r122;
CPyL78: ;
    cpy_r_r123 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r124 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r125 = *(PyObject * *)cpy_r_r124;
    CPy_DECREF(cpy_r_typ);
    cpy_r_r126 = cpy_r_r125 == cpy_r_r123;
    if (!cpy_r_r126) goto CPyL80;
    return 1;
CPyL80: ;
    return 0;
CPyL81: ;
    cpy_r_r127 = 2;
    return cpy_r_r127;
CPyL82: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL81;
CPyL83: ;
    CPy_DECREF(cpy_r_method);
    goto CPyL45;
CPyL84: ;
    CPy_DecRef(cpy_r_method);
    goto CPyL81;
CPyL85: ;
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_r12);
    goto CPyL81;
CPyL86: ;
    CPy_DECREF(cpy_r_r83);
    goto CPyL56;
CPyL87: ;
    CPy_DecRef(cpy_r_r83);
    goto CPyL81;
CPyL88: ;
    CPy_DECREF(cpy_r_r83);
    goto CPyL54;
CPyL89: ;
    CPy_DECREF(cpy_r_r96);
    goto CPyL65;
CPyL90: ;
    CPy_DecRef(cpy_r_r96);
    goto CPyL81;
CPyL91: ;
    CPy_DECREF(cpy_r_r96);
    goto CPyL63;
}

PyObject *CPyPy_typeops___custom_special_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", "name", "check_all", 0};
    static CPyArg_Parser parser = {"OO|O:custom_special_method", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_name;
    PyObject *obj_check_all = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_name, &obj_check_all)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char arg_check_all;
    if (obj_check_all == NULL) {
        arg_check_all = 2;
    } else if (unlikely(!PyBool_Check(obj_check_all))) {
        CPy_TypeError("bool", obj_check_all); goto fail;
    } else
        arg_check_all = obj_check_all == Py_True;
    char retval = CPyDef_typeops___custom_special_method(arg_typ, arg_name, arg_check_all);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "custom_special_method", 970, CPyStatic_typeops___globals);
    return NULL;
}

tuple_T2OO CPyDef_typeops___separate_union_literals(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_literal_items;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_union_items;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_proper;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    tuple_T2OO cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    tuple_T2OO cpy_r_r25;
    tuple_T2OO cpy_r_r26;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "separate_union_literals", 1000, CPyStatic_typeops___globals);
        goto CPyL13;
    }
    cpy_r_literal_items = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "separate_union_literals", 1001, CPyStatic_typeops___globals);
        goto CPyL14;
    }
    cpy_r_union_items = cpy_r_r1;
    cpy_r_r2 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 0;
CPyL3: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL15;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_types___Type)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "separate_union_literals", 1003, CPyStatic_typeops___globals, "mypy.types.Type", cpy_r_r8);
        goto CPyL16;
    }
    cpy_r_item = cpy_r_r9;
    cpy_r_r10 = CPyDef_types___get_proper_type(cpy_r_item);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "separate_union_literals", 1004, CPyStatic_typeops___globals);
        goto CPyL17;
    }
    if (likely(cpy_r_r10 != Py_None))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "separate_union_literals", 1004, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r10);
        goto CPyL17;
    }
    cpy_r_proper = cpy_r_r11;
    cpy_r_r12 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_proper)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (cpy_r_r15) {
        goto CPyL18;
    } else
        goto CPyL19;
CPyL8: ;
    if (likely(Py_TYPE(cpy_r_proper) == CPyType_types___LiteralType))
        cpy_r_r16 = cpy_r_proper;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "separate_union_literals", 1006, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_proper);
        goto CPyL16;
    }
    cpy_r_r17 = PyList_Append(cpy_r_literal_items, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/typeops.py", "separate_union_literals", 1006, CPyStatic_typeops___globals);
        goto CPyL16;
    } else
        goto CPyL11;
CPyL10: ;
    cpy_r_r19 = PyList_Append(cpy_r_union_items, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/typeops.py", "separate_union_literals", 1008, CPyStatic_typeops___globals);
        goto CPyL16;
    }
CPyL11: ;
    cpy_r_r21 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r21;
    goto CPyL3;
CPyL12: ;
    cpy_r_r22.f0 = cpy_r_literal_items;
    cpy_r_r22.f1 = cpy_r_union_items;
    CPy_INCREF(cpy_r_r22.f0);
    CPy_INCREF(cpy_r_r22.f1);
    CPy_DECREF(cpy_r_literal_items);
    CPy_DECREF(cpy_r_union_items);
    cpy_r_r23 = cpy_r_r22.f0;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = cpy_r_r22.f1;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r22.f0);
    CPy_DECREF(cpy_r_r22.f1);
    cpy_r_r25.f0 = cpy_r_r23;
    cpy_r_r25.f1 = cpy_r_r24;
    CPy_INCREF(cpy_r_r25.f0);
    CPy_INCREF(cpy_r_r25.f1);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    return cpy_r_r25;
CPyL13: ;
    tuple_T2OO __tmp7770 = { NULL, NULL };
    cpy_r_r26 = __tmp7770;
    return cpy_r_r26;
CPyL14: ;
    CPy_DecRef(cpy_r_literal_items);
    goto CPyL13;
CPyL15: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_literal_items);
    CPy_DecRef(cpy_r_union_items);
    CPy_DecRef(cpy_r_r2);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_literal_items);
    CPy_DecRef(cpy_r_union_items);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_item);
    goto CPyL13;
CPyL18: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL8;
CPyL19: ;
    CPy_DECREF(cpy_r_proper);
    goto CPyL10;
}

PyObject *CPyPy_typeops___separate_union_literals(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:separate_union_literals", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_typeops___separate_union_literals(arg_t);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7771 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp7771);
    PyObject *__tmp7772 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp7772);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "separate_union_literals", 998, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___try_getting_instance_fallback(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_getting_instance_fallback", 1015, CPyStatic_typeops___globals);
        goto CPyL28;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_instance_fallback", 1015, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL28;
    }
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___Instance;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL5;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r6 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_instance_fallback", 1017, CPyStatic_typeops___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL28;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL8;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___LiteralType))
        cpy_r_r11 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_instance_fallback", 1019, CPyStatic_typeops___globals, "mypy.types.LiteralType", cpy_r_typ);
        goto CPyL29;
    }
    cpy_r_r12 = ((mypy___types___LiteralTypeObject *)cpy_r_r11)->_fallback;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_typ);
    return cpy_r_r12;
CPyL8: ;
    cpy_r_r13 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (cpy_r_r16) {
        goto CPyL30;
    } else
        goto CPyL10;
CPyL9: ;
    cpy_r_r17 = Py_None;
    CPy_INCREF(cpy_r_r17);
    return cpy_r_r17;
CPyL10: ;
    cpy_r_r18 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL12;
    cpy_r_r22 = cpy_r_r21;
    goto CPyL13;
CPyL12: ;
    cpy_r_r23 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    cpy_r_r22 = cpy_r_r26;
CPyL13: ;
    if (!cpy_r_r22) goto CPyL17;
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r27 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_instance_fallback", 1023, CPyStatic_typeops___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL29;
    }
    cpy_r_r28 = ((mypy___types___FunctionLikeObject *)cpy_r_r27)->_fallback;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "try_getting_instance_fallback", "FunctionLike", "fallback", 1023, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r28);
CPyL16: ;
    CPy_DECREF(cpy_r_typ);
    return cpy_r_r28;
CPyL17: ;
    cpy_r_r29 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL20;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TupleType))
        cpy_r_r33 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_instance_fallback", 1025, CPyStatic_typeops___globals, "mypy.types.TupleType", cpy_r_typ);
        goto CPyL29;
    }
    cpy_r_r34 = ((mypy___types___TupleTypeObject *)cpy_r_r33)->_partial_fallback;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_typ);
    return cpy_r_r34;
CPyL20: ;
    cpy_r_r35 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r36 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r37 = *(PyObject * *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 == cpy_r_r35;
    if (!cpy_r_r38) goto CPyL23;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypedDictType))
        cpy_r_r39 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_instance_fallback", 1027, CPyStatic_typeops___globals, "mypy.types.TypedDictType", cpy_r_typ);
        goto CPyL29;
    }
    cpy_r_r40 = ((mypy___types___TypedDictTypeObject *)cpy_r_r39)->_fallback;
    CPy_INCREF(cpy_r_r40);
    CPy_DECREF(cpy_r_typ);
    return cpy_r_r40;
CPyL23: ;
    cpy_r_r41 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (!cpy_r_r44) goto CPyL31;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r45 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "try_getting_instance_fallback", 1029, CPyStatic_typeops___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL29;
    }
    cpy_r_r46 = ((mypy___types___TypeVarTypeObject *)cpy_r_r45)->_upper_bound;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r47 = CPyDef_typeops___try_getting_instance_fallback(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "try_getting_instance_fallback", 1029, CPyStatic_typeops___globals);
        goto CPyL28;
    }
    return cpy_r_r47;
CPyL27: ;
    cpy_r_r48 = Py_None;
    CPy_INCREF(cpy_r_r48);
    return cpy_r_r48;
CPyL28: ;
    cpy_r_r49 = NULL;
    return cpy_r_r49;
CPyL29: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL28;
CPyL30: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL9;
CPyL31: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL27;
}

PyObject *CPyPy_typeops___try_getting_instance_fallback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:try_getting_instance_fallback", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___try_getting_instance_fallback(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "try_getting_instance_fallback", 1013, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___fixup_partial_type(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    CPyPtr cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyPtr cpy_r_r39;
    int64_t cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    cpy_r_r0 = (PyObject *)CPyType_types___PartialType;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    CPy_INCREF(cpy_r_typ);
    return cpy_r_typ;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___PartialType))
        cpy_r_r4 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "fixup_partial_type", 1041, CPyStatic_typeops___globals, "mypy.types.PartialType", cpy_r_typ);
        goto CPyL20;
    }
    cpy_r_r5 = ((mypy___types___PartialTypeObject *)cpy_r_r4)->_type;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 == cpy_r_r6;
    if (!cpy_r_r7) goto CPyL10;
    cpy_r_r8 = NULL;
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPY_INT_TAG;
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = CPyDef_types___AnyType(2, cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "fixup_partial_type", 1042, CPyStatic_typeops___globals);
        goto CPyL20;
    }
    cpy_r_r13 = CPY_INT_TAG;
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = CPyDef_types___NoneType(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "fixup_partial_type", 1042, CPyStatic_typeops___globals);
        goto CPyL21;
    }
    cpy_r_r16 = PyList_New(2);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "fixup_partial_type", 1042, CPyStatic_typeops___globals);
        goto CPyL22;
    }
    cpy_r_r17 = (CPyPtr)&((PyListObject *)cpy_r_r16)->ob_item;
    cpy_r_r18 = *(CPyPtr *)cpy_r_r17;
    *(PyObject * *)cpy_r_r18 = cpy_r_r12;
    cpy_r_r19 = cpy_r_r18 + 8;
    *(PyObject * *)cpy_r_r19 = cpy_r_r15;
    cpy_r_r20 = CPY_INT_TAG;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPyDef_types___UnionType___make_union(cpy_r_r16, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "fixup_partial_type", 1042, CPyStatic_typeops___globals);
        goto CPyL20;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r22, CPyType_types___ProperType)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "fixup_partial_type", 1042, CPyStatic_typeops___globals, "mypy.types.ProperType", cpy_r_r22);
        goto CPyL20;
    }
    return cpy_r_r23;
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___PartialType))
        cpy_r_r24 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "fixup_partial_type", 1044, CPyStatic_typeops___globals, "mypy.types.PartialType", cpy_r_typ);
        goto CPyL20;
    }
    cpy_r_r25 = ((mypy___types___PartialTypeObject *)cpy_r_r24)->_type;
    CPy_INCREF(cpy_r_r25);
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "fixup_partial_type", 1044, CPyStatic_typeops___globals, "mypy.nodes.TypeInfo", cpy_r_r25);
        goto CPyL20;
    }
    cpy_r_r27 = NULL;
    cpy_r_r28 = NULL;
    cpy_r_r29 = CPY_INT_TAG;
    cpy_r_r30 = CPY_INT_TAG;
    cpy_r_r31 = CPyDef_types___AnyType(2, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "fixup_partial_type", 1044, CPyStatic_typeops___globals);
        goto CPyL23;
    }
    cpy_r_r32 = PyList_New(1);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "fixup_partial_type", 1044, CPyStatic_typeops___globals);
        goto CPyL24;
    }
    cpy_r_r33 = (CPyPtr)&((PyListObject *)cpy_r_r32)->ob_item;
    cpy_r_r34 = *(CPyPtr *)cpy_r_r33;
    *(PyObject * *)cpy_r_r34 = cpy_r_r31;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___PartialType))
        cpy_r_r35 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "fixup_partial_type", 1044, CPyStatic_typeops___globals, "mypy.types.PartialType", cpy_r_typ);
        goto CPyL25;
    }
    cpy_r_r36 = ((mypy___types___PartialTypeObject *)cpy_r_r35)->_type;
    if (likely(cpy_r_r36 != Py_None))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "fixup_partial_type", 1044, CPyStatic_typeops___globals, "mypy.nodes.TypeInfo", cpy_r_r36);
        goto CPyL25;
    }
    cpy_r_r38 = ((mypy___nodes___TypeInfoObject *)cpy_r_r37)->_type_vars;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "fixup_partial_type", "TypeInfo", "type_vars", 1044, CPyStatic_typeops___globals);
        goto CPyL25;
    }
CPyL17: ;
    cpy_r_r39 = (CPyPtr)&((PyVarObject *)cpy_r_r38)->ob_size;
    cpy_r_r40 = *(int64_t *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 << 1;
    cpy_r_r42 = CPySequence_Multiply(cpy_r_r32, cpy_r_r41);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "fixup_partial_type", 1044, CPyStatic_typeops___globals);
        goto CPyL23;
    }
    cpy_r_r43 = CPY_INT_TAG;
    cpy_r_r44 = CPY_INT_TAG;
    cpy_r_r45 = NULL;
    cpy_r_r46 = NULL;
    cpy_r_r47 = CPyDef_types___Instance(cpy_r_r26, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "fixup_partial_type", 1044, CPyStatic_typeops___globals);
        goto CPyL20;
    }
    return cpy_r_r47;
CPyL20: ;
    cpy_r_r48 = NULL;
    return cpy_r_r48;
CPyL21: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL20;
CPyL22: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    goto CPyL20;
CPyL23: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL20;
CPyL24: ;
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r31);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r32);
    goto CPyL20;
}

PyObject *CPyPy_typeops___fixup_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:fixup_partial_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___fixup_partial_type(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "fixup_partial_type", 1033, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___named_type_get_protocol_member_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_typeops___named_type_get_protocol_member_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_typeops___named_type_get_protocol_member_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "__get__", -1, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___named_type_get_protocol_member_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_named_type;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = ((mypy___typeops___named_type_get_protocol_member_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "named_type", "named_type_get_protocol_member_obj", "__mypyc_env__", 1052, CPyStatic_typeops___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___typeops___get_protocol_member_envObject *)cpy_r_r0)->_named_type;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "named_type", "get_protocol_member_env", "named_type", -1, CPyStatic_typeops___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_named_type = cpy_r_r1;
    CPy_DECREF(cpy_r_named_type);
    cpy_r_r2 = ((mypy___typeops___get_protocol_member_envObject *)cpy_r_r0)->_left;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'left' of 'get_protocol_member_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "named_type", 1053, CPyStatic_typeops___globals);
        goto CPyL9;
    }
CPyL3: ;
    cpy_r_r3 = ((mypy___types___InstanceObject *)cpy_r_r2)->_type;
    cpy_r_r4 = ((mypy___nodes___TypeInfoObject *)cpy_r_r3)->_mro;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "named_type", "TypeInfo", "mro", 1053, CPyStatic_typeops___globals);
        goto CPyL11;
    }
CPyL4: ;
    cpy_r_r5 = CPyList_GetItemShort(cpy_r_r4, -2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "named_type", 1053, CPyStatic_typeops___globals);
        goto CPyL11;
    }
    if (likely((Py_TYPE(cpy_r_r5) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r5) == CPyType_nodes___TypeInfo)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/typeops.py", "named_type", 1053, CPyStatic_typeops___globals, "mypy.nodes.TypeInfo", cpy_r_r5);
        goto CPyL11;
    }
    CPy_DECREF(cpy_r_r2);
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "named_type", 1053, CPyStatic_typeops___globals);
        goto CPyL12;
    }
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = NULL;
    cpy_r_r11 = NULL;
    cpy_r_r12 = CPyDef_types___Instance(cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "named_type", 1053, CPyStatic_typeops___globals);
        goto CPyL9;
    }
    return cpy_r_r12;
CPyL9: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL9;
}

PyObject *CPyPy_typeops___named_type_get_protocol_member_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_typeops___named_type_get_protocol_member_obj_____call__(arg___mypyc_self__, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "named_type", 1052, CPyStatic_typeops___globals);
    return NULL;
}

PyObject *CPyDef_typeops___get_protocol_member(PyObject *cpy_r_left, PyObject *cpy_r_member, char cpy_r_class_obj) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
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
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    cpy_r_r0 = CPyDef_typeops___get_protocol_member_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "get_protocol_member", 1047, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_left);
    if (((mypy___typeops___get_protocol_member_envObject *)cpy_r_r0)->_left != NULL) {
        CPy_DECREF(((mypy___typeops___get_protocol_member_envObject *)cpy_r_r0)->_left);
    }
    ((mypy___typeops___get_protocol_member_envObject *)cpy_r_r0)->_left = cpy_r_left;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/typeops.py", "get_protocol_member", 1047, CPyStatic_typeops___globals);
        goto CPyL30;
    }
    cpy_r_r2 = CPyStatics[706]; /* '__call__' */
    cpy_r_r3 = PyUnicode_Compare(cpy_r_member, cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 == -1;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = PyErr_Occurred();
    cpy_r_r6 = cpy_r_r5 != NULL;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/typeops.py", "get_protocol_member", 1048, CPyStatic_typeops___globals);
        goto CPyL30;
    }
CPyL5: ;
    cpy_r_r8 = cpy_r_r3 == 0;
    if (!cpy_r_r8) goto CPyL15;
    if (!cpy_r_class_obj) goto CPyL15;
    cpy_r_r9 = CPyStatics[9577]; /* ('type_object_type',) */
    cpy_r_r10 = CPyStatics[913]; /* 'mypy.checkmember' */
    cpy_r_r11 = CPyStatic_typeops___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "get_protocol_member", 1050, CPyStatic_typeops___globals);
        goto CPyL30;
    }
    CPyModule_mypy___checkmember = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___checkmember);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_typeops___named_type_get_protocol_member_obj();
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "get_protocol_member", 1052, CPyStatic_typeops___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___typeops___named_type_get_protocol_member_objObject *)cpy_r_r13)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___typeops___named_type_get_protocol_member_objObject *)cpy_r_r13)->___mypyc_env__);
    }
    ((mypy___typeops___named_type_get_protocol_member_objObject *)cpy_r_r13)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/typeops.py", "get_protocol_member", 1052, CPyStatic_typeops___globals);
        goto CPyL31;
    }
    if (((mypy___typeops___get_protocol_member_envObject *)cpy_r_r0)->_named_type != NULL) {
        CPy_DECREF(((mypy___typeops___get_protocol_member_envObject *)cpy_r_r0)->_named_type);
    }
    ((mypy___typeops___get_protocol_member_envObject *)cpy_r_r0)->_named_type = cpy_r_r13;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/typeops.py", "get_protocol_member", 1052, CPyStatic_typeops___globals);
        goto CPyL30;
    }
    cpy_r_r16 = ((mypy___typeops___get_protocol_member_envObject *)cpy_r_r0)->_left;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "get_protocol_member", "get_protocol_member_env", "left", 1055, CPyStatic_typeops___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r16);
CPyL12: ;
    cpy_r_r17 = ((mypy___types___InstanceObject *)cpy_r_r16)->_type;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = ((mypy___typeops___get_protocol_member_envObject *)cpy_r_r0)->_named_type;
    if (unlikely(cpy_r_r18 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'named_type' of 'get_protocol_member_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r18);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "get_protocol_member", 1055, CPyStatic_typeops___globals);
        goto CPyL32;
    }
CPyL13: ;
    cpy_r_r19 = CPyDef_checkmember___type_object_type(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "get_protocol_member", 1055, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    return cpy_r_r19;
CPyL15: ;
    cpy_r_r20 = CPyStatics[706]; /* '__call__' */
    cpy_r_r21 = PyUnicode_Compare(cpy_r_member, cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 == -1;
    if (!cpy_r_r22) goto CPyL18;
    cpy_r_r23 = PyErr_Occurred();
    cpy_r_r24 = cpy_r_r23 != NULL;
    if (!cpy_r_r24) goto CPyL18;
    cpy_r_r25 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/typeops.py", "get_protocol_member", 1057, CPyStatic_typeops___globals);
        goto CPyL30;
    }
CPyL18: ;
    cpy_r_r26 = cpy_r_r21 == 0;
    if (!cpy_r_r26) goto CPyL23;
    cpy_r_r27 = ((mypy___typeops___get_protocol_member_envObject *)cpy_r_r0)->_left;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "get_protocol_member", "get_protocol_member_env", "left", 1057, CPyStatic_typeops___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r27);
CPyL20: ;
    cpy_r_r28 = ((mypy___types___InstanceObject *)cpy_r_r27)->_type;
    CPy_INCREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = CPyDef_nodes___TypeInfo___is_metaclass(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "get_protocol_member", 1057, CPyStatic_typeops___globals);
        goto CPyL30;
    }
    if (cpy_r_r29) {
        goto CPyL33;
    } else
        goto CPyL23;
CPyL22: ;
    cpy_r_r30 = Py_None;
    CPy_INCREF(cpy_r_r30);
    return cpy_r_r30;
CPyL23: ;
    cpy_r_r31 = CPyStatics[9865]; /* ('find_member',) */
    cpy_r_r32 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r33 = CPyStatic_typeops___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "get_protocol_member", 1062, CPyStatic_typeops___globals);
        goto CPyL30;
    }
    CPyModule_mypy___subtypes = cpy_r_r34;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = ((mypy___typeops___get_protocol_member_envObject *)cpy_r_r0)->_left;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypy/typeops.py", "get_protocol_member", "get_protocol_member_env", "left", 1064, CPyStatic_typeops___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r35);
CPyL25: ;
    cpy_r_r36 = ((mypy___typeops___get_protocol_member_envObject *)cpy_r_r0)->_left;
    if (unlikely(cpy_r_r36 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'left' of 'get_protocol_member_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r36);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "get_protocol_member", 1064, CPyStatic_typeops___globals);
        goto CPyL34;
    }
CPyL26: ;
    cpy_r_r37 = 2;
    cpy_r_r38 = CPyDef_subtypes___find_member(cpy_r_member, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_class_obj);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "get_protocol_member", 1064, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    cpy_r_r39 = CPyDef_types___get_proper_type(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "get_protocol_member", 1064, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    return cpy_r_r39;
CPyL29: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL29;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r13);
    goto CPyL29;
CPyL32: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL29;
CPyL33: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL22;
CPyL34: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL29;
}

PyObject *CPyPy_typeops___get_protocol_member(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"left", "member", "class_obj", 0};
    static CPyArg_Parser parser = {"OOO:get_protocol_member", kwlist, 0};
    PyObject *obj_left;
    PyObject *obj_member;
    PyObject *obj_class_obj;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_left, &obj_member, &obj_class_obj)) {
        return NULL;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_types___Instance))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypy.types.Instance", obj_left); 
        goto fail;
    }
    PyObject *arg_member;
    if (likely(PyUnicode_Check(obj_member)))
        arg_member = obj_member;
    else {
        CPy_TypeError("str", obj_member); 
        goto fail;
    }
    char arg_class_obj;
    if (unlikely(!PyBool_Check(obj_class_obj))) {
        CPy_TypeError("bool", obj_class_obj); goto fail;
    } else
        arg_class_obj = obj_class_obj == Py_True;
    PyObject *retval = CPyDef_typeops___get_protocol_member(arg_left, arg_member, arg_class_obj);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typeops.py", "get_protocol_member", 1047, CPyStatic_typeops___globals);
    return NULL;
}

char CPyDef_typeops_____top_level__(void) {
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
    PyObject **cpy_r_r57;
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
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", -1, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_typeops___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 8, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_itertools;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {10};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[9171]; /* (('itertools', 'itertools', 'itertools'),) */
    cpy_r_r15 = CPyStatic_typeops___globals;
    cpy_r_r16 = CPyStatics[6374]; /* 'mypy/typeops.py' */
    cpy_r_r17 = CPyStatics[17]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL29;
    cpy_r_r19 = CPyStatics[9866]; /* ('Any', 'Iterable', 'List', 'Sequence', 'TypeVar',
                                     'cast') */
    cpy_r_r20 = CPyStatics[21]; /* 'typing' */
    cpy_r_r21 = CPyStatic_typeops___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 11, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    CPyModule_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[9867]; /* ('copy_type',) */
    cpy_r_r24 = CPyStatics[1636]; /* 'mypy.copytype' */
    cpy_r_r25 = CPyStatic_typeops___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 13, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    CPyModule_mypy___copytype = cpy_r_r26;
    CPy_INCREF(CPyModule_mypy___copytype);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[9585]; /* ('expand_type', 'expand_type_by_instance') */
    cpy_r_r28 = CPyStatics[31]; /* 'mypy.expandtype' */
    cpy_r_r29 = CPyStatic_typeops___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 14, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    CPyModule_mypy___expandtype = cpy_r_r30;
    CPy_INCREF(CPyModule_mypy___expandtype);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[9081]; /* ('map_instance_to_supertype',) */
    cpy_r_r32 = CPyStatics[61]; /* 'mypy.maptype' */
    cpy_r_r33 = CPyStatic_typeops___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 15, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    CPyModule_mypy___maptype = cpy_r_r34;
    CPy_INCREF(CPyModule_mypy___maptype);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[9868]; /* ('ARG_POS', 'ARG_STAR', 'ARG_STAR2',
                                     'SYMBOL_FUNCBASE_TYPES', 'Decorator', 'Expression',
                                     'FuncBase', 'FuncDef', 'FuncItem', 'OverloadedFuncDef',
                                     'StrExpr', 'TypeInfo', 'Var') */
    cpy_r_r36 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r37 = CPyStatic_typeops___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 16, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    CPyModule_mypy___nodes = cpy_r_r38;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[9201]; /* ('state',) */
    cpy_r_r40 = CPyStatics[1020]; /* 'mypy.state' */
    cpy_r_r41 = CPyStatic_typeops___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 31, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    CPyModule_mypy___state = cpy_r_r42;
    CPy_INCREF(CPyModule_mypy___state);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[9869]; /* ('ENUM_REMOVED_PROPS', 'AnyType', 'CallableType',
                                     'ExtraAttrs', 'FormalArgument', 'FunctionLike',
                                     'Instance', 'LiteralType', 'NoneType', 'Overloaded',
                                     'Parameters', 'ParamSpecType', 'PartialType',
                                     'ProperType', 'TupleType', 'Type', 'TypeAliasType',
                                     'TypedDictType', 'TypeOfAny', 'TypeQuery', 'TypeType',
                                     'TypeVarLikeType', 'TypeVarTupleType', 'TypeVarType',
                                     'UninhabitedType', 'UnionType', 'UnpackType',
                                     'flatten_nested_unions', 'get_proper_type',
                                     'get_proper_types') */
    cpy_r_r44 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r45 = CPyStatic_typeops___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 32, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    CPyModule_mypy___types = cpy_r_r46;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[9242]; /* ('fill_typevars',) */
    cpy_r_r48 = CPyStatics[110]; /* 'mypy.typevars' */
    cpy_r_r49 = CPyStatic_typeops___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 64, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    CPyModule_mypy___typevars = cpy_r_r50;
    CPy_INCREF(CPyModule_mypy___typevars);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[1467]; /* 'F' */
    cpy_r_r52 = (PyObject *)CPyType_types___FunctionLike;
    cpy_r_r53 = CPyStatic_typeops___globals;
    cpy_r_r54 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r55 = CPyDict_GetItem(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 262, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    PyObject *cpy_r_r56[2] = {cpy_r_r51, cpy_r_r52};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = CPyStatics[9381]; /* ('bound',) */
    cpy_r_r59 = _PyObject_Vectorcall(cpy_r_r55, cpy_r_r57, 1, cpy_r_r58);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 262, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    cpy_r_r60 = CPyStatic_typeops___globals;
    cpy_r_r61 = CPyStatics[1467]; /* 'F' */
    cpy_r_r62 = CPyDict_SetItem(cpy_r_r60, cpy_r_r61, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 262, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    cpy_r_r64 = CPyStatics[1088]; /* 'T' */
    cpy_r_r65 = CPyStatic_typeops___globals;
    cpy_r_r66 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r67 = CPyDict_GetItem(cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 777, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    PyObject *cpy_r_r68[1] = {cpy_r_r64};
    cpy_r_r69 = (PyObject **)&cpy_r_r68;
    cpy_r_r70 = _PyObject_Vectorcall(cpy_r_r67, cpy_r_r69, 1, 0);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 777, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    cpy_r_r71 = CPyStatic_typeops___globals;
    cpy_r_r72 = CPyStatics[1088]; /* 'T' */
    cpy_r_r73 = CPyDict_SetItem(cpy_r_r71, cpy_r_r72, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 777, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    cpy_r_r75 = (PyObject *)CPyType_type_visitor___TypeQuery;
    cpy_r_r76 = CPyStatic_typeops___globals;
    cpy_r_r77 = CPyStatics[81]; /* 'List' */
    cpy_r_r78 = CPyDict_GetItem(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 956, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    cpy_r_r79 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r80 = PyObject_GetItem(cpy_r_r78, cpy_r_r79);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 956, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    cpy_r_r81 = PyObject_GetItem(cpy_r_r75, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 956, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    cpy_r_r82 = PyTuple_Pack(1, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 956, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    cpy_r_r83 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r84 = (PyObject *)CPyType_typeops___TypeVarExtractor_template;
    cpy_r_r85 = CPyType_FromTemplate(cpy_r_r84, cpy_r_r82, cpy_r_r83);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 956, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    cpy_r_r86 = CPyDef_typeops___TypeVarExtractor_trait_vtable_setup();
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", -1, CPyStatic_typeops___globals);
        goto CPyL30;
    }
    cpy_r_r87 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r88 = CPyStatics[1131]; /* 'strategy' */
    cpy_r_r89 = CPyStatics[1132]; /* 'seen_aliases' */
    cpy_r_r90 = CPyStatics[1133]; /* 'skip_alias_target' */
    cpy_r_r91 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r92 = PyTuple_Pack(4, cpy_r_r88, cpy_r_r89, cpy_r_r90, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 956, CPyStatic_typeops___globals);
        goto CPyL30;
    }
    cpy_r_r93 = PyObject_SetAttr(cpy_r_r85, cpy_r_r87, cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 956, CPyStatic_typeops___globals);
        goto CPyL30;
    }
    CPyType_typeops___TypeVarExtractor = (PyTypeObject *)cpy_r_r85;
    CPy_INCREF(CPyType_typeops___TypeVarExtractor);
    cpy_r_r95 = CPyStatic_typeops___globals;
    cpy_r_r96 = CPyStatics[6376]; /* 'TypeVarExtractor' */
    cpy_r_r97 = CPyDict_SetItem(cpy_r_r95, cpy_r_r96, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypy/typeops.py", "<module>", 956, CPyStatic_typeops___globals);
        goto CPyL29;
    }
    return 1;
CPyL29: ;
    cpy_r_r99 = 2;
    return cpy_r_r99;
CPyL30: ;
    CPy_DecRef(cpy_r_r85);
    goto CPyL29;
}
