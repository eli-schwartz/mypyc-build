#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
meet___TypeMeetVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef meet___TypeMeetVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___meet___TypeMeetVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___meet___TypeMeetVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *meet___TypeMeetVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_meet___TypeMeetVisitor(PyObject *cpy_r_s);

static PyObject *
meet___TypeMeetVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_meet___TypeMeetVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = meet___TypeMeetVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_meet___TypeMeetVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
meet___TypeMeetVisitor_traverse(mypy___meet___TypeMeetVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_s);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___meet___TypeMeetVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___meet___TypeMeetVisitorObject))));
    return 0;
}

static int
meet___TypeMeetVisitor_clear(mypy___meet___TypeMeetVisitorObject *self)
{
    Py_CLEAR(self->_s);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___meet___TypeMeetVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___meet___TypeMeetVisitorObject))));
    return 0;
}

static void
meet___TypeMeetVisitor_dealloc(mypy___meet___TypeMeetVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, meet___TypeMeetVisitor_dealloc)
    meet___TypeMeetVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem meet___TypeMeetVisitor_vtable[27];
static CPyVTableItem meet___TypeMeetVisitor_type_visitor___TypeVisitor_trait_vtable[21];
static size_t meet___TypeMeetVisitor_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_meet___TypeMeetVisitor_trait_vtable_setup(void)
{
    CPyVTableItem meet___TypeMeetVisitor_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(meet___TypeMeetVisitor_type_visitor___TypeVisitor_trait_vtable, meet___TypeMeetVisitor_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(meet___TypeMeetVisitor_type_visitor___TypeVisitor_trait_vtable));
    size_t meet___TypeMeetVisitor_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(meet___TypeMeetVisitor_type_visitor___TypeVisitor_offset_table, meet___TypeMeetVisitor_type_visitor___TypeVisitor_offset_table_scratch, sizeof(meet___TypeMeetVisitor_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem meet___TypeMeetVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)meet___TypeMeetVisitor_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)meet___TypeMeetVisitor_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor_____init__,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_unbound_type,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_any,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_union_type,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_none_type,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_deleted_type,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_erased_type,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_type_var,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_param_spec,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_unpack_type,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_parameters,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_instance,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_callable_type,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_overloaded,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_tuple_type,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_typeddict_type,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_literal_type,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_partial_type,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_type_type,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___visit_type_alias_type,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___meet,
        (CPyVTableItem)CPyDef_meet___TypeMeetVisitor___default,
    };
    memcpy(meet___TypeMeetVisitor_vtable, meet___TypeMeetVisitor_vtable_scratch, sizeof(meet___TypeMeetVisitor_vtable));
    return 1;
}

static PyObject *
meet___TypeMeetVisitor_get_s(mypy___meet___TypeMeetVisitorObject *self, void *closure);
static int
meet___TypeMeetVisitor_set_s(mypy___meet___TypeMeetVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef meet___TypeMeetVisitor_getseters[] = {
    {"s",
     (getter)meet___TypeMeetVisitor_get_s, (setter)meet___TypeMeetVisitor_set_s,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef meet___TypeMeetVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unbound_type",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_unbound_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_none_type",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_none_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_deleted_type",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_deleted_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_erased_type",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_erased_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_parameters",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_parameters,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_literal_type",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_partial_type",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_partial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_type",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_type_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"meet",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___meet,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"default",
     (PyCFunction)CPyPy_meet___TypeMeetVisitor___default,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_meet___TypeMeetVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeMeetVisitor",
    .tp_new = meet___TypeMeetVisitor_new,
    .tp_dealloc = (destructor)meet___TypeMeetVisitor_dealloc,
    .tp_traverse = (traverseproc)meet___TypeMeetVisitor_traverse,
    .tp_clear = (inquiry)meet___TypeMeetVisitor_clear,
    .tp_getset = meet___TypeMeetVisitor_getseters,
    .tp_methods = meet___TypeMeetVisitor_methods,
    .tp_init = meet___TypeMeetVisitor_init,
    .tp_members = meet___TypeMeetVisitor_members,
    .tp_basicsize = sizeof(mypy___meet___TypeMeetVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___meet___TypeMeetVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___meet___TypeMeetVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_meet___TypeMeetVisitor_template = &CPyType_meet___TypeMeetVisitor_template_;

static PyObject *
meet___TypeMeetVisitor_setup(PyTypeObject *type)
{
    mypy___meet___TypeMeetVisitorObject *self;
    self = (mypy___meet___TypeMeetVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = meet___TypeMeetVisitor_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_meet___TypeMeetVisitor(PyObject *cpy_r_s)
{
    PyObject *self = meet___TypeMeetVisitor_setup(CPyType_meet___TypeMeetVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_meet___TypeMeetVisitor_____init__(self, cpy_r_s);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
meet___TypeMeetVisitor_get_s(mypy___meet___TypeMeetVisitorObject *self, void *closure)
{
    if (unlikely(self->_s == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 's' of 'TypeMeetVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_s);
    PyObject *retval = self->_s;
    return retval;
}

static int
meet___TypeMeetVisitor_set_s(mypy___meet___TypeMeetVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeMeetVisitor' object attribute 's' cannot be deleted");
        return -1;
    }
    if (self->_s != NULL) {
        CPy_DECREF(self->_s);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_types___ProperType)))
        tmp = value;
    else {
        CPy_TypeError("mypy.types.ProperType", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_s = tmp;
    return 0;
}

static PyObject *meet___is_overlapping_types_env_setup(PyTypeObject *type);
PyObject *CPyDef_meet___is_overlapping_types_env(void);

static PyObject *
meet___is_overlapping_types_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_meet___is_overlapping_types_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return meet___is_overlapping_types_env_setup(type);
}

static int
meet___is_overlapping_types_env_traverse(mypy___meet___is_overlapping_types_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->__is_overlapping_types);
    Py_VISIT(self->_is_none_typevarlike_overlap);
    Py_VISIT(self->__type_object_overlap);
    Py_VISIT(self->_left);
    Py_VISIT(self->_right);
    Py_VISIT(self->_illegal_types.f0);
    Py_VISIT(self->_illegal_types.f1);
    Py_VISIT(self->_illegal_types.f2);
    Py_VISIT(self->_left_possible);
    Py_VISIT(self->_right_possible);
    Py_VISIT(self->_l);
    Py_VISIT(self->_r);
    return 0;
}

static int
meet___is_overlapping_types_env_clear(mypy___meet___is_overlapping_types_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->__is_overlapping_types);
    Py_CLEAR(self->_is_none_typevarlike_overlap);
    Py_CLEAR(self->__type_object_overlap);
    Py_CLEAR(self->_left);
    Py_CLEAR(self->_right);
    Py_CLEAR(self->_illegal_types.f0);
    Py_CLEAR(self->_illegal_types.f1);
    Py_CLEAR(self->_illegal_types.f2);
    Py_CLEAR(self->_left_possible);
    Py_CLEAR(self->_right_possible);
    Py_CLEAR(self->_l);
    Py_CLEAR(self->_r);
    return 0;
}

static void
meet___is_overlapping_types_env_dealloc(mypy___meet___is_overlapping_types_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, meet___is_overlapping_types_env_dealloc)
    meet___is_overlapping_types_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem meet___is_overlapping_types_env_vtable[1];
static bool
CPyDef_meet___is_overlapping_types_env_trait_vtable_setup(void)
{
    CPyVTableItem meet___is_overlapping_types_env_vtable_scratch[] = {
        NULL
    };
    memcpy(meet___is_overlapping_types_env_vtable, meet___is_overlapping_types_env_vtable_scratch, sizeof(meet___is_overlapping_types_env_vtable));
    return 1;
}

static PyMethodDef meet___is_overlapping_types_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_meet___is_overlapping_types_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "is_overlapping_types_env",
    .tp_new = meet___is_overlapping_types_env_new,
    .tp_dealloc = (destructor)meet___is_overlapping_types_env_dealloc,
    .tp_traverse = (traverseproc)meet___is_overlapping_types_env_traverse,
    .tp_clear = (inquiry)meet___is_overlapping_types_env_clear,
    .tp_methods = meet___is_overlapping_types_env_methods,
    .tp_basicsize = sizeof(mypy___meet___is_overlapping_types_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_meet___is_overlapping_types_env_template = &CPyType_meet___is_overlapping_types_env_template_;

static PyObject *
meet___is_overlapping_types_env_setup(PyTypeObject *type)
{
    mypy___meet___is_overlapping_types_envObject *self;
    self = (mypy___meet___is_overlapping_types_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = meet___is_overlapping_types_env_vtable;
    self->_ignore_promotions = 2;
    self->_prohibit_none_typevar_overlap = 2;
    self->_ignore_uninhabited = 2;
    self->_illegal_types = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_meet___is_overlapping_types_env(void)
{
    PyObject *self = meet___is_overlapping_types_env_setup(CPyType_meet___is_overlapping_types_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__meet____is_overlapping_types_is_overlapping_types_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_meet____is_overlapping_types_is_overlapping_types_obj_____get__(self, instance, owner);
}
PyMemberDef meet____is_overlapping_types_is_overlapping_types_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___meet____is_overlapping_types_is_overlapping_types_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___meet____is_overlapping_types_is_overlapping_types_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *meet____is_overlapping_types_is_overlapping_types_obj_setup(PyTypeObject *type);
PyObject *CPyDef_meet____is_overlapping_types_is_overlapping_types_obj(void);

static PyObject *
meet____is_overlapping_types_is_overlapping_types_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_meet____is_overlapping_types_is_overlapping_types_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return meet____is_overlapping_types_is_overlapping_types_obj_setup(type);
}

static int
meet____is_overlapping_types_is_overlapping_types_obj_traverse(mypy___meet____is_overlapping_types_is_overlapping_types_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___meet____is_overlapping_types_is_overlapping_types_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___meet____is_overlapping_types_is_overlapping_types_objObject))));
    return 0;
}

static int
meet____is_overlapping_types_is_overlapping_types_obj_clear(mypy___meet____is_overlapping_types_is_overlapping_types_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___meet____is_overlapping_types_is_overlapping_types_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___meet____is_overlapping_types_is_overlapping_types_objObject))));
    return 0;
}

static void
meet____is_overlapping_types_is_overlapping_types_obj_dealloc(mypy___meet____is_overlapping_types_is_overlapping_types_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, meet____is_overlapping_types_is_overlapping_types_obj_dealloc)
    meet____is_overlapping_types_is_overlapping_types_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem meet____is_overlapping_types_is_overlapping_types_obj_vtable[2];
static bool
CPyDef_meet____is_overlapping_types_is_overlapping_types_obj_trait_vtable_setup(void)
{
    CPyVTableItem meet____is_overlapping_types_is_overlapping_types_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_meet____is_overlapping_types_is_overlapping_types_obj_____call__,
        (CPyVTableItem)CPyDef_meet____is_overlapping_types_is_overlapping_types_obj_____get__,
    };
    memcpy(meet____is_overlapping_types_is_overlapping_types_obj_vtable, meet____is_overlapping_types_is_overlapping_types_obj_vtable_scratch, sizeof(meet____is_overlapping_types_is_overlapping_types_obj_vtable));
    return 1;
}

static PyMethodDef meet____is_overlapping_types_is_overlapping_types_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_meet____is_overlapping_types_is_overlapping_types_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_meet____is_overlapping_types_is_overlapping_types_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_meet____is_overlapping_types_is_overlapping_types_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_is_overlapping_types_is_overlapping_types_obj",
    .tp_new = meet____is_overlapping_types_is_overlapping_types_obj_new,
    .tp_dealloc = (destructor)meet____is_overlapping_types_is_overlapping_types_obj_dealloc,
    .tp_traverse = (traverseproc)meet____is_overlapping_types_is_overlapping_types_obj_traverse,
    .tp_clear = (inquiry)meet____is_overlapping_types_is_overlapping_types_obj_clear,
    .tp_methods = meet____is_overlapping_types_is_overlapping_types_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__meet____is_overlapping_types_is_overlapping_types_obj,
    .tp_members = meet____is_overlapping_types_is_overlapping_types_obj_members,
    .tp_basicsize = sizeof(mypy___meet____is_overlapping_types_is_overlapping_types_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___meet____is_overlapping_types_is_overlapping_types_objObject),
    .tp_weaklistoffset = sizeof(mypy___meet____is_overlapping_types_is_overlapping_types_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___meet____is_overlapping_types_is_overlapping_types_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_meet____is_overlapping_types_is_overlapping_types_obj_template = &CPyType_meet____is_overlapping_types_is_overlapping_types_obj_template_;

static PyObject *
meet____is_overlapping_types_is_overlapping_types_obj_setup(PyTypeObject *type)
{
    mypy___meet____is_overlapping_types_is_overlapping_types_objObject *self;
    self = (mypy___meet____is_overlapping_types_is_overlapping_types_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = meet____is_overlapping_types_is_overlapping_types_obj_vtable;
    self->vectorcall = CPyPy_meet____is_overlapping_types_is_overlapping_types_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_meet____is_overlapping_types_is_overlapping_types_obj(void)
{
    PyObject *self = meet____is_overlapping_types_is_overlapping_types_obj_setup(CPyType_meet____is_overlapping_types_is_overlapping_types_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__meet___is_none_typevarlike_overlap_is_overlapping_types_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_____get__(self, instance, owner);
}
PyMemberDef meet___is_none_typevarlike_overlap_is_overlapping_types_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *meet___is_none_typevarlike_overlap_is_overlapping_types_obj_setup(PyTypeObject *type);
PyObject *CPyDef_meet___is_none_typevarlike_overlap_is_overlapping_types_obj(void);

static PyObject *
meet___is_none_typevarlike_overlap_is_overlapping_types_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_meet___is_none_typevarlike_overlap_is_overlapping_types_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return meet___is_none_typevarlike_overlap_is_overlapping_types_obj_setup(type);
}

static int
meet___is_none_typevarlike_overlap_is_overlapping_types_obj_traverse(mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject))));
    return 0;
}

static int
meet___is_none_typevarlike_overlap_is_overlapping_types_obj_clear(mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject))));
    return 0;
}

static void
meet___is_none_typevarlike_overlap_is_overlapping_types_obj_dealloc(mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, meet___is_none_typevarlike_overlap_is_overlapping_types_obj_dealloc)
    meet___is_none_typevarlike_overlap_is_overlapping_types_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem meet___is_none_typevarlike_overlap_is_overlapping_types_obj_vtable[2];
static bool
CPyDef_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_trait_vtable_setup(void)
{
    CPyVTableItem meet___is_none_typevarlike_overlap_is_overlapping_types_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_____call__,
        (CPyVTableItem)CPyDef_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_____get__,
    };
    memcpy(meet___is_none_typevarlike_overlap_is_overlapping_types_obj_vtable, meet___is_none_typevarlike_overlap_is_overlapping_types_obj_vtable_scratch, sizeof(meet___is_none_typevarlike_overlap_is_overlapping_types_obj_vtable));
    return 1;
}

static PyMethodDef meet___is_none_typevarlike_overlap_is_overlapping_types_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "is_none_typevarlike_overlap_is_overlapping_types_obj",
    .tp_new = meet___is_none_typevarlike_overlap_is_overlapping_types_obj_new,
    .tp_dealloc = (destructor)meet___is_none_typevarlike_overlap_is_overlapping_types_obj_dealloc,
    .tp_traverse = (traverseproc)meet___is_none_typevarlike_overlap_is_overlapping_types_obj_traverse,
    .tp_clear = (inquiry)meet___is_none_typevarlike_overlap_is_overlapping_types_obj_clear,
    .tp_methods = meet___is_none_typevarlike_overlap_is_overlapping_types_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__meet___is_none_typevarlike_overlap_is_overlapping_types_obj,
    .tp_members = meet___is_none_typevarlike_overlap_is_overlapping_types_obj_members,
    .tp_basicsize = sizeof(mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject),
    .tp_weaklistoffset = sizeof(mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_template = &CPyType_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_template_;

static PyObject *
meet___is_none_typevarlike_overlap_is_overlapping_types_obj_setup(PyTypeObject *type)
{
    mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject *self;
    self = (mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = meet___is_none_typevarlike_overlap_is_overlapping_types_obj_vtable;
    self->vectorcall = CPyPy_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_meet___is_none_typevarlike_overlap_is_overlapping_types_obj(void)
{
    PyObject *self = meet___is_none_typevarlike_overlap_is_overlapping_types_obj_setup(CPyType_meet___is_none_typevarlike_overlap_is_overlapping_types_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__meet____type_object_overlap_is_overlapping_types_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_meet____type_object_overlap_is_overlapping_types_obj_____get__(self, instance, owner);
}
PyMemberDef meet____type_object_overlap_is_overlapping_types_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___meet____type_object_overlap_is_overlapping_types_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___meet____type_object_overlap_is_overlapping_types_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *meet____type_object_overlap_is_overlapping_types_obj_setup(PyTypeObject *type);
PyObject *CPyDef_meet____type_object_overlap_is_overlapping_types_obj(void);

static PyObject *
meet____type_object_overlap_is_overlapping_types_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_meet____type_object_overlap_is_overlapping_types_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return meet____type_object_overlap_is_overlapping_types_obj_setup(type);
}

static int
meet____type_object_overlap_is_overlapping_types_obj_traverse(mypy___meet____type_object_overlap_is_overlapping_types_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___meet____type_object_overlap_is_overlapping_types_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___meet____type_object_overlap_is_overlapping_types_objObject))));
    return 0;
}

static int
meet____type_object_overlap_is_overlapping_types_obj_clear(mypy___meet____type_object_overlap_is_overlapping_types_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___meet____type_object_overlap_is_overlapping_types_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___meet____type_object_overlap_is_overlapping_types_objObject))));
    return 0;
}

static void
meet____type_object_overlap_is_overlapping_types_obj_dealloc(mypy___meet____type_object_overlap_is_overlapping_types_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, meet____type_object_overlap_is_overlapping_types_obj_dealloc)
    meet____type_object_overlap_is_overlapping_types_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem meet____type_object_overlap_is_overlapping_types_obj_vtable[2];
static bool
CPyDef_meet____type_object_overlap_is_overlapping_types_obj_trait_vtable_setup(void)
{
    CPyVTableItem meet____type_object_overlap_is_overlapping_types_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_meet____type_object_overlap_is_overlapping_types_obj_____call__,
        (CPyVTableItem)CPyDef_meet____type_object_overlap_is_overlapping_types_obj_____get__,
    };
    memcpy(meet____type_object_overlap_is_overlapping_types_obj_vtable, meet____type_object_overlap_is_overlapping_types_obj_vtable_scratch, sizeof(meet____type_object_overlap_is_overlapping_types_obj_vtable));
    return 1;
}

static PyMethodDef meet____type_object_overlap_is_overlapping_types_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_meet____type_object_overlap_is_overlapping_types_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_meet____type_object_overlap_is_overlapping_types_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_meet____type_object_overlap_is_overlapping_types_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_type_object_overlap_is_overlapping_types_obj",
    .tp_new = meet____type_object_overlap_is_overlapping_types_obj_new,
    .tp_dealloc = (destructor)meet____type_object_overlap_is_overlapping_types_obj_dealloc,
    .tp_traverse = (traverseproc)meet____type_object_overlap_is_overlapping_types_obj_traverse,
    .tp_clear = (inquiry)meet____type_object_overlap_is_overlapping_types_obj_clear,
    .tp_methods = meet____type_object_overlap_is_overlapping_types_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__meet____type_object_overlap_is_overlapping_types_obj,
    .tp_members = meet____type_object_overlap_is_overlapping_types_obj_members,
    .tp_basicsize = sizeof(mypy___meet____type_object_overlap_is_overlapping_types_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___meet____type_object_overlap_is_overlapping_types_objObject),
    .tp_weaklistoffset = sizeof(mypy___meet____type_object_overlap_is_overlapping_types_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___meet____type_object_overlap_is_overlapping_types_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_meet____type_object_overlap_is_overlapping_types_obj_template = &CPyType_meet____type_object_overlap_is_overlapping_types_obj_template_;

static PyObject *
meet____type_object_overlap_is_overlapping_types_obj_setup(PyTypeObject *type)
{
    mypy___meet____type_object_overlap_is_overlapping_types_objObject *self;
    self = (mypy___meet____type_object_overlap_is_overlapping_types_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = meet____type_object_overlap_is_overlapping_types_obj_vtable;
    self->vectorcall = CPyPy_meet____type_object_overlap_is_overlapping_types_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_meet____type_object_overlap_is_overlapping_types_obj(void)
{
    PyObject *self = meet____type_object_overlap_is_overlapping_types_obj_setup(CPyType_meet____type_object_overlap_is_overlapping_types_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef meetmodule_methods[] = {
    {"trivial_meet", (PyCFunction)CPyPy_meet___trivial_meet, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"meet_types", (PyCFunction)CPyPy_meet___meet_types, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"narrow_declared_type", (PyCFunction)CPyPy_meet___narrow_declared_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_possible_variants", (PyCFunction)CPyPy_meet___get_possible_variants, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_enum_overlapping_union", (PyCFunction)CPyPy_meet___is_enum_overlapping_union, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_literal_in_union", (PyCFunction)CPyPy_meet___is_literal_in_union, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_overlapping_types", (PyCFunction)CPyPy_meet___is_overlapping_types, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_overlapping_erased_types", (PyCFunction)CPyPy_meet___is_overlapping_erased_types, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"are_typed_dicts_overlapping", (PyCFunction)CPyPy_meet___are_typed_dicts_overlapping, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"are_tuples_overlapping", (PyCFunction)CPyPy_meet___are_tuples_overlapping, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"adjust_tuple", (PyCFunction)CPyPy_meet___adjust_tuple, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_tuple", (PyCFunction)CPyPy_meet___is_tuple, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"meet_similar_callables", (PyCFunction)CPyPy_meet___meet_similar_callables, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"meet_type_list", (PyCFunction)CPyPy_meet___meet_type_list, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"typed_dict_mapping_pair", (PyCFunction)CPyPy_meet___typed_dict_mapping_pair, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"typed_dict_mapping_overlap", (PyCFunction)CPyPy_meet___typed_dict_mapping_overlap, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef meetmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.meet",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    meetmodule_methods
};

PyObject *CPyInit_mypy___meet(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___meet_internal) {
        Py_INCREF(CPyModule_mypy___meet_internal);
        return CPyModule_mypy___meet_internal;
    }
    CPyModule_mypy___meet_internal = PyModule_Create(&meetmodule);
    if (unlikely(CPyModule_mypy___meet_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___meet_internal, "__name__");
    CPyStatic_meet___globals = PyModule_GetDict(CPyModule_mypy___meet_internal);
    if (unlikely(CPyStatic_meet___globals == NULL))
        goto fail;
    CPyType_meet___is_overlapping_types_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_meet___is_overlapping_types_env_template, NULL, modname);
    if (unlikely(!CPyType_meet___is_overlapping_types_env))
        goto fail;
    CPyType_meet____is_overlapping_types_is_overlapping_types_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_meet____is_overlapping_types_is_overlapping_types_obj_template, NULL, modname);
    if (unlikely(!CPyType_meet____is_overlapping_types_is_overlapping_types_obj))
        goto fail;
    CPyType_meet___is_none_typevarlike_overlap_is_overlapping_types_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_template, NULL, modname);
    if (unlikely(!CPyType_meet___is_none_typevarlike_overlap_is_overlapping_types_obj))
        goto fail;
    CPyType_meet____type_object_overlap_is_overlapping_types_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_meet____type_object_overlap_is_overlapping_types_obj_template, NULL, modname);
    if (unlikely(!CPyType_meet____type_object_overlap_is_overlapping_types_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_meet_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___meet_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___meet_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_meet___TypeMeetVisitor);
    Py_CLEAR(CPyType_meet___is_overlapping_types_env);
    Py_CLEAR(CPyType_meet____is_overlapping_types_is_overlapping_types_obj);
    Py_CLEAR(CPyType_meet___is_none_typevarlike_overlap_is_overlapping_types_obj);
    Py_CLEAR(CPyType_meet____type_object_overlap_is_overlapping_types_obj);
    return NULL;
}

PyObject *CPyDef_meet___trivial_meet(PyObject *cpy_r_s, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = NULL;
    cpy_r_r1 = 2;
    cpy_r_r2 = 2;
    cpy_r_r3 = 2;
    cpy_r_r4 = 2;
    cpy_r_r5 = 2;
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_subtypes___is_subtype(cpy_r_s, cpy_r_t, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "trivial_meet", 56, CPyStatic_meet___globals);
        goto CPyL18;
    }
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPyDef_types___get_proper_type(cpy_r_s);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "trivial_meet", 57, CPyStatic_meet___globals);
        goto CPyL18;
    }
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "trivial_meet", 57, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r8);
        goto CPyL18;
    }
    return cpy_r_r9;
CPyL5: ;
    cpy_r_r10 = NULL;
    cpy_r_r11 = 2;
    cpy_r_r12 = 2;
    cpy_r_r13 = 2;
    cpy_r_r14 = 2;
    cpy_r_r15 = 2;
    cpy_r_r16 = NULL;
    cpy_r_r17 = CPyDef_subtypes___is_subtype(cpy_r_t, cpy_r_s, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "trivial_meet", 58, CPyStatic_meet___globals);
        goto CPyL18;
    }
    if (!cpy_r_r17) goto CPyL10;
    cpy_r_r18 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "trivial_meet", 59, CPyStatic_meet___globals);
        goto CPyL18;
    }
    if (likely(cpy_r_r18 != Py_None))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "trivial_meet", 59, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r18);
        goto CPyL18;
    }
    return cpy_r_r19;
CPyL10: ;
    cpy_r_r20 = CPyStatic_state___state;
    if (likely(cpy_r_r20 != NULL)) goto CPyL13;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/meet.py", "trivial_meet", 61, CPyStatic_meet___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r22 = ((mypy___state___StrictOptionalStateObject *)cpy_r_r20)->_strict_optional;
    if (!cpy_r_r22) goto CPyL16;
CPyL14: ;
    cpy_r_r23 = 2;
    cpy_r_r24 = CPY_INT_TAG;
    cpy_r_r25 = CPY_INT_TAG;
    cpy_r_r26 = CPyDef_types___UninhabitedType(cpy_r_r23, cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "trivial_meet", 62, CPyStatic_meet___globals);
        goto CPyL18;
    }
    return cpy_r_r26;
CPyL16: ;
    cpy_r_r27 = CPY_INT_TAG;
    cpy_r_r28 = CPY_INT_TAG;
    cpy_r_r29 = CPyDef_types___NoneType(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "trivial_meet", 64, CPyStatic_meet___globals);
        goto CPyL18;
    }
    return cpy_r_r29;
CPyL18: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
}

PyObject *CPyPy_meet___trivial_meet(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"s", "t", 0};
    static CPyArg_Parser parser = {"OO:trivial_meet", kwlist, 0};
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
    PyObject *retval = CPyDef_meet___trivial_meet(arg_s, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "trivial_meet", 54, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___meet_types(PyObject *cpy_r_s, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int64_t cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int64_t cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyPtr cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyPtr cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    CPyPtr cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    CPyPtr cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    CPyPtr cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    tuple_T2OO cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    cpy_r_r0 = CPyDef_typeops___is_recursive_pair(cpy_r_s, cpy_r_t);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "meet_types", 69, CPyStatic_meet___globals);
        goto CPyL74;
    }
    if (!cpy_r_r0) goto CPyL4;
    cpy_r_r1 = CPyDef_meet___trivial_meet(cpy_r_s, cpy_r_t);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_types", 72, CPyStatic_meet___globals);
        goto CPyL74;
    }
    return cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = CPyDef_types___get_proper_type(cpy_r_s);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_types", 73, CPyStatic_meet___globals);
        goto CPyL74;
    }
    if (likely(cpy_r_r2 != Py_None))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 73, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r2);
        goto CPyL74;
    }
    cpy_r_s = cpy_r_r3;
    cpy_r_r4 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_types", 74, CPyStatic_meet___globals);
        goto CPyL75;
    }
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 74, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r4);
        goto CPyL75;
    }
    cpy_r_t = cpy_r_r5;
    cpy_r_r6 = (PyObject *)CPyType_types___Instance;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL40;
    cpy_r_r10 = (PyObject *)CPyType_types___Instance;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL40;
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___Instance))
        cpy_r_r14 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 76, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_s);
        goto CPyL76;
    }
    cpy_r_r15 = ((mypy___types___InstanceObject *)cpy_r_r14)->_type;
    CPy_INCREF(cpy_r_r15);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r16 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 76, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL77;
    }
    cpy_r_r17 = ((mypy___types___InstanceObject *)cpy_r_r16)->_type;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = cpy_r_r15 == cpy_r_r17;
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r17);
    if (!cpy_r_r18) goto CPyL40;
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___Instance))
        cpy_r_r19 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 80, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_s);
        goto CPyL76;
    }
    cpy_r_r20 = ((mypy___types___InstanceObject *)cpy_r_r19)->_extra_attrs;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r22 = cpy_r_r20 != cpy_r_r21;
    CPy_DECREF(cpy_r_r20);
    if (cpy_r_r22) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r23 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 80, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL76;
    }
    cpy_r_r24 = ((mypy___types___InstanceObject *)cpy_r_r23)->_extra_attrs;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r26 = cpy_r_r24 != cpy_r_r25;
    CPy_DECREF(cpy_r_r24);
    if (!cpy_r_r26) goto CPyL40;
CPyL17: ;
    CPy_INCREF(cpy_r_s);
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___Instance))
        cpy_r_r27 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 80, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_s);
        goto CPyL76;
    }
    CPy_INCREF(cpy_r_t);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r28 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 80, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL78;
    }
    cpy_r_r29 = 2;
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPyDef_subtypes___is_same_type(cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "meet_types", 80, CPyStatic_meet___globals);
        goto CPyL76;
    }
    if (!cpy_r_r31) goto CPyL40;
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___Instance))
        cpy_r_r32 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 81, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_s);
        goto CPyL76;
    }
    cpy_r_r33 = ((mypy___types___InstanceObject *)cpy_r_r32)->_extra_attrs;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = cpy_r_r33 != cpy_r_r34;
    CPy_DECREF(cpy_r_r33);
    if (!cpy_r_r35) goto CPyL34;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r36 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 81, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL76;
    }
    cpy_r_r37 = ((mypy___types___InstanceObject *)cpy_r_r36)->_extra_attrs;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r39 = cpy_r_r37 != cpy_r_r38;
    CPy_DECREF(cpy_r_r37);
    if (!cpy_r_r39) goto CPyL34;
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___Instance))
        cpy_r_r40 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 82, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_s);
        goto CPyL76;
    }
    cpy_r_r41 = ((mypy___types___InstanceObject *)cpy_r_r40)->_extra_attrs;
    if (likely(cpy_r_r41 != Py_None))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 82, CPyStatic_meet___globals, "mypy.types.ExtraAttrs", cpy_r_r41);
        goto CPyL76;
    }
    cpy_r_r43 = ((mypy___types___ExtraAttrsObject *)cpy_r_r42)->_attrs;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = PyDict_Size(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 << 1;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r46 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 82, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL76;
    }
    cpy_r_r47 = ((mypy___types___InstanceObject *)cpy_r_r46)->_extra_attrs;
    if (likely(cpy_r_r47 != Py_None))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 82, CPyStatic_meet___globals, "mypy.types.ExtraAttrs", cpy_r_r47);
        goto CPyL76;
    }
    cpy_r_r49 = ((mypy___types___ExtraAttrsObject *)cpy_r_r48)->_attrs;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r50 = PyDict_Size(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 << 1;
    cpy_r_r52 = (Py_ssize_t)cpy_r_r45 > (Py_ssize_t)cpy_r_r51;
    if (cpy_r_r52) {
        goto CPyL79;
    } else
        goto CPyL80;
CPyL30: ;
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___Instance))
        cpy_r_r53 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 84, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_s);
        goto CPyL74;
    }
    return cpy_r_r53;
CPyL32: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r54 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 85, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL74;
    }
    return cpy_r_r54;
CPyL34: ;
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___Instance))
        cpy_r_r55 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 86, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_s);
        goto CPyL76;
    }
    cpy_r_r56 = ((mypy___types___InstanceObject *)cpy_r_r55)->_extra_attrs;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r58 = cpy_r_r56 != cpy_r_r57;
    CPy_DECREF(cpy_r_r56);
    if (cpy_r_r58) {
        goto CPyL81;
    } else
        goto CPyL82;
CPyL36: ;
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___Instance))
        cpy_r_r59 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 87, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_s);
        goto CPyL74;
    }
    return cpy_r_r59;
CPyL38: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r60 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 88, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL74;
    }
    return cpy_r_r60;
CPyL40: ;
    cpy_r_r61 = (PyObject *)CPyType_types___UnboundType;
    cpy_r_r62 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r63 = *(PyObject * *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 == cpy_r_r61;
    if (cpy_r_r64) goto CPyL54;
    cpy_r_r65 = (PyObject *)CPyType_types___UnboundType;
    cpy_r_r66 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r67 = *(PyObject * *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 == cpy_r_r65;
    if (cpy_r_r68) goto CPyL54;
    CPy_INCREF(cpy_r_s);
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r69 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 91, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL76;
    }
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r70 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 91, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL83;
    }
    cpy_r_r71 = NULL;
    cpy_r_r72 = 2;
    cpy_r_r73 = 2;
    cpy_r_r74 = 2;
    cpy_r_r75 = CPyDef_subtypes___is_proper_subtype(cpy_r_r69, cpy_r_r70, cpy_r_r71, 1, cpy_r_r72, cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "meet_types", 91, CPyStatic_meet___globals);
        goto CPyL76;
    }
    if (cpy_r_r75) {
        goto CPyL84;
    } else
        goto CPyL48;
CPyL46: ;
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r76 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 92, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL74;
    }
    return cpy_r_r76;
CPyL48: ;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r77 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 93, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL76;
    }
    CPy_INCREF(cpy_r_s);
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r78 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 93, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL85;
    }
    cpy_r_r79 = NULL;
    cpy_r_r80 = 2;
    cpy_r_r81 = 2;
    cpy_r_r82 = 2;
    cpy_r_r83 = CPyDef_subtypes___is_proper_subtype(cpy_r_r77, cpy_r_r78, cpy_r_r79, 1, cpy_r_r80, cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "meet_types", 93, CPyStatic_meet___globals);
        goto CPyL76;
    }
    if (cpy_r_r83) {
        goto CPyL86;
    } else
        goto CPyL54;
CPyL52: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r84 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 94, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL74;
    }
    return cpy_r_r84;
CPyL54: ;
    cpy_r_r85 = (PyObject *)CPyType_types___ErasedType;
    cpy_r_r86 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r87 = *(PyObject * *)cpy_r_r86;
    cpy_r_r88 = cpy_r_r87 == cpy_r_r85;
    if (cpy_r_r88) {
        goto CPyL87;
    } else
        goto CPyL57;
CPyL55: ;
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___ErasedType))
        cpy_r_r89 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 97, CPyStatic_meet___globals, "mypy.types.ErasedType", cpy_r_s);
        goto CPyL74;
    }
    return cpy_r_r89;
CPyL57: ;
    cpy_r_r90 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r91 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r92 = *(PyObject * *)cpy_r_r91;
    cpy_r_r93 = cpy_r_r92 == cpy_r_r90;
    if (cpy_r_r93) {
        goto CPyL88;
    } else
        goto CPyL60;
CPyL58: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r94 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 99, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL74;
    }
    return cpy_r_r94;
CPyL60: ;
    cpy_r_r95 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r96 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r97 = *(PyObject * *)cpy_r_r96;
    cpy_r_r98 = cpy_r_r97 == cpy_r_r95;
    if (!cpy_r_r98) goto CPyL65;
    cpy_r_r99 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r100 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r101 = *(PyObject * *)cpy_r_r100;
    cpy_r_r102 = cpy_r_r101 == cpy_r_r99;
    if (cpy_r_r102) goto CPyL65;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r103 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 101, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL75;
    }
    cpy_r_r104 = cpy_r_r103;
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r105 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 101, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL89;
    }
    cpy_r_r106 = cpy_r_r105;
    cpy_r_s = cpy_r_r104;
    cpy_r_t = cpy_r_r106;
CPyL65: ;
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r107 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 104, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL90;
    }
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r108 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 104, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL91;
    }
    cpy_r_r109 = CPyDef_join___normalize_callables(cpy_r_r107, cpy_r_r108);
    CPy_DECREF(cpy_r_r107);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109.f0 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_types", 104, CPyStatic_meet___globals);
        goto CPyL74;
    }
    cpy_r_r110 = cpy_r_r109.f0;
    CPy_INCREF(cpy_r_r110);
    cpy_r_s = cpy_r_r110;
    cpy_r_r111 = cpy_r_r109.f1;
    CPy_INCREF(cpy_r_r111);
    CPy_DECREF(cpy_r_r109.f0);
    CPy_DECREF(cpy_r_r109.f1);
    cpy_r_t = cpy_r_r111;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r112 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 106, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL75;
    }
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r113 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 106, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL92;
    }
    cpy_r_r114 = CPyDef_meet___TypeMeetVisitor(cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_types", 106, CPyStatic_meet___globals);
        goto CPyL92;
    }
    cpy_r_r115 = CPY_GET_METHOD(cpy_r_r112, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r112, cpy_r_r114); /* accept */
    CPy_DECREF(cpy_r_r114);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_types", 106, CPyStatic_meet___globals);
        goto CPyL74;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r115, CPyType_types___ProperType)))
        cpy_r_r116 = cpy_r_r115;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_types", 106, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r115);
        goto CPyL74;
    }
    return cpy_r_r116;
CPyL74: ;
    cpy_r_r117 = NULL;
    return cpy_r_r117;
CPyL75: ;
    CPy_DecRef(cpy_r_s);
    goto CPyL74;
CPyL76: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_t);
    goto CPyL74;
CPyL77: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r15);
    goto CPyL74;
CPyL78: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r27);
    goto CPyL74;
CPyL79: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL30;
CPyL80: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL32;
CPyL81: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL36;
CPyL82: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL38;
CPyL83: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r69);
    goto CPyL74;
CPyL84: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL46;
CPyL85: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r77);
    goto CPyL74;
CPyL86: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL52;
CPyL87: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL55;
CPyL88: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL58;
CPyL89: ;
    CPy_DecRef(cpy_r_r104);
    goto CPyL74;
CPyL90: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL74;
CPyL91: ;
    CPy_DecRef(cpy_r_r107);
    goto CPyL74;
CPyL92: ;
    CPy_DecRef(cpy_r_r112);
    goto CPyL74;
}

PyObject *CPyPy_meet___meet_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"s", "t", 0};
    static CPyArg_Parser parser = {"OO:meet_types", kwlist, 0};
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
    PyObject *retval = CPyDef_meet___meet_types(arg_s, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "meet_types", 67, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___narrow_declared_type(PyObject *cpy_r_declared, PyObject *cpy_r_narrowed) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_original_declared;
    PyObject *cpy_r_original_narrowed;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    CPyTagged cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    CPyTagged cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyPtr cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    int64_t cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    CPyPtr cpy_r_r79;
    int64_t cpy_r_r80;
    CPyTagged cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_x_2;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    CPyTagged cpy_r_r88;
    CPyTagged cpy_r_r89;
    CPyTagged cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyPtr cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    CPyPtr cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyPtr cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    CPyPtr cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    CPyTagged cpy_r_r127;
    CPyTagged cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    CPyPtr cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    CPyPtr cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    CPyPtr cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    CPyPtr cpy_r_r151;
    PyObject *cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    CPyPtr cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    CPyPtr cpy_r_r174;
    PyObject *cpy_r_r175;
    char cpy_r_r176;
    char cpy_r_r177;
    PyObject *cpy_r_r178;
    CPyPtr cpy_r_r179;
    PyObject *cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    CPyPtr cpy_r_r184;
    PyObject *cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    CPyPtr cpy_r_r188;
    PyObject *cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    int32_t cpy_r_r195;
    char cpy_r_r196;
    PyObject *cpy_r_r197;
    char cpy_r_r198;
    char cpy_r_r199;
    char cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    CPyTagged cpy_r_r205;
    CPyPtr cpy_r_r206;
    int64_t cpy_r_r207;
    CPyTagged cpy_r_r208;
    char cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r212;
    CPyPtr cpy_r_r213;
    PyObject *cpy_r_r214;
    char cpy_r_r215;
    char cpy_r_r216;
    CPyTagged cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    cpy_r_r0 = (PyObject *)CPyType_types___TypeGuardedType;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_narrowed)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL3;
    if (likely(Py_TYPE(cpy_r_narrowed) == CPyType_types___TypeGuardedType))
        cpy_r_r4 = cpy_r_narrowed;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 114, CPyStatic_meet___globals, "mypy.types.TypeGuardedType", cpy_r_narrowed);
        goto CPyL133;
    }
    cpy_r_r5 = ((mypy___types___TypeGuardedTypeObject *)cpy_r_r4)->_type_guard;
    CPy_INCREF(cpy_r_r5);
    return cpy_r_r5;
CPyL3: ;
    CPy_INCREF(cpy_r_declared);
    cpy_r_original_declared = cpy_r_declared;
    CPy_INCREF(cpy_r_narrowed);
    cpy_r_original_narrowed = cpy_r_narrowed;
    cpy_r_r6 = CPyDef_types___get_proper_type(cpy_r_declared);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 118, CPyStatic_meet___globals);
        goto CPyL134;
    }
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 118, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r6);
        goto CPyL134;
    }
    cpy_r_declared = cpy_r_r7;
    cpy_r_r8 = CPyDef_types___get_proper_type(cpy_r_narrowed);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 119, CPyStatic_meet___globals);
        goto CPyL135;
    }
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 119, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r8);
        goto CPyL135;
    }
    cpy_r_narrowed = cpy_r_r9;
    CPy_INCREF(cpy_r_declared);
    if (likely(PyObject_TypeCheck(cpy_r_declared, CPyType_types___ProperType)))
        cpy_r_r10 = cpy_r_declared;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 121, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_declared);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_narrowed);
    if (likely(PyObject_TypeCheck(cpy_r_narrowed, CPyType_types___ProperType)))
        cpy_r_r11 = cpy_r_narrowed;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 121, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_narrowed);
        goto CPyL137;
    }
    cpy_r_r12 = PyObject_RichCompare(cpy_r_r10, cpy_r_r11, 2);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 121, CPyStatic_meet___globals);
        goto CPyL136;
    }
    if (unlikely(!PyBool_Check(cpy_r_r12))) {
        CPy_TypeError("bool", cpy_r_r12); cpy_r_r13 = 2;
    } else
        cpy_r_r13 = cpy_r_r12 == Py_True;
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 121, CPyStatic_meet___globals);
        goto CPyL136;
    }
    if (cpy_r_r13) {
        goto CPyL138;
    } else
        goto CPyL13;
CPyL12: ;
    return cpy_r_original_declared;
CPyL13: ;
    cpy_r_r14 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_declared)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (cpy_r_r17) {
        goto CPyL139;
    } else
        goto CPyL34;
CPyL14: ;
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 125, CPyStatic_meet___globals);
        goto CPyL140;
    }
    if (likely(Py_TYPE(cpy_r_declared) == CPyType_types___UnionType))
        cpy_r_r19 = cpy_r_declared;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 127, CPyStatic_meet___globals, "mypy.types.UnionType", cpy_r_declared);
        goto CPyL141;
    }
    cpy_r_r20 = CPyDef_types___UnionType___relevant_items(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 127, CPyStatic_meet___globals);
        goto CPyL141;
    }
    cpy_r_r21 = 0;
CPyL18: ;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r24;
    if (!cpy_r_r25) goto CPyL142;
    cpy_r_r26 = CPyList_GetItemUnsafe(cpy_r_r20, cpy_r_r21);
    if (likely(PyObject_TypeCheck(cpy_r_r26, CPyType_types___Type)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 125, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r26);
        goto CPyL143;
    }
    cpy_r_x = cpy_r_r27;
    CPy_INCREF(cpy_r_narrowed);
    if (likely(PyObject_TypeCheck(cpy_r_narrowed, CPyType_types___ProperType)))
        cpy_r_r28 = cpy_r_narrowed;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 134, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_narrowed);
        goto CPyL144;
    }
    cpy_r_r29 = 2;
    cpy_r_r30 = 2;
    cpy_r_r31 = CPyDef_meet___is_overlapping_types(cpy_r_x, cpy_r_r28, 1, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 134, CPyStatic_meet___globals);
        goto CPyL144;
    }
    if (!cpy_r_r31) goto CPyL24;
    cpy_r_r32 = cpy_r_r31;
    goto CPyL27;
CPyL24: ;
    CPy_INCREF(cpy_r_narrowed);
    if (likely(PyObject_TypeCheck(cpy_r_narrowed, CPyType_types___ProperType)))
        cpy_r_r33 = cpy_r_narrowed;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 135, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_narrowed);
        goto CPyL144;
    }
    cpy_r_r34 = NULL;
    cpy_r_r35 = 2;
    cpy_r_r36 = 2;
    cpy_r_r37 = 2;
    cpy_r_r38 = 2;
    cpy_r_r39 = NULL;
    cpy_r_r40 = CPyDef_subtypes___is_subtype(cpy_r_r33, cpy_r_x, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37, 0, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 135, CPyStatic_meet___globals);
        goto CPyL144;
    }
    cpy_r_r32 = cpy_r_r40;
CPyL27: ;
    if (!cpy_r_r32) goto CPyL145;
    CPy_INCREF(cpy_r_narrowed);
    if (likely(PyObject_TypeCheck(cpy_r_narrowed, CPyType_types___ProperType)))
        cpy_r_r41 = cpy_r_narrowed;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 126, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_narrowed);
        goto CPyL144;
    }
    cpy_r_r42 = CPyDef_meet___narrow_declared_type(cpy_r_x, cpy_r_r41);
    CPy_DECREF(cpy_r_x);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 126, CPyStatic_meet___globals);
        goto CPyL143;
    }
    cpy_r_r43 = PyList_Append(cpy_r_r18, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 125, CPyStatic_meet___globals);
        goto CPyL143;
    }
CPyL31: ;
    cpy_r_r45 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r45;
    goto CPyL18;
CPyL32: ;
    cpy_r_r46 = CPY_INT_TAG;
    cpy_r_r47 = CPY_INT_TAG;
    cpy_r_r48 = 2;
    cpy_r_r49 = 2;
    cpy_r_r50 = CPyDef_typeops___make_simplified_union(cpy_r_r18, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 124, CPyStatic_meet___globals);
        goto CPyL133;
    }
    return cpy_r_r50;
CPyL34: ;
    CPy_INCREF(cpy_r_declared);
    if (likely(PyObject_TypeCheck(cpy_r_declared, CPyType_types___ProperType)))
        cpy_r_r51 = cpy_r_declared;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 139, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_declared);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_narrowed);
    if (likely(PyObject_TypeCheck(cpy_r_narrowed, CPyType_types___ProperType)))
        cpy_r_r52 = cpy_r_narrowed;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 139, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_narrowed);
        goto CPyL146;
    }
    cpy_r_r53 = CPyDef_meet___is_enum_overlapping_union(cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 139, CPyStatic_meet___globals);
        goto CPyL136;
    }
    if (cpy_r_r53) {
        goto CPyL147;
    } else
        goto CPyL39;
CPyL38: ;
    return cpy_r_original_narrowed;
CPyL39: ;
    CPy_INCREF(cpy_r_declared);
    if (likely(PyObject_TypeCheck(cpy_r_declared, CPyType_types___ProperType)))
        cpy_r_r54 = cpy_r_declared;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 141, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_declared);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_narrowed);
    if (likely(PyObject_TypeCheck(cpy_r_narrowed, CPyType_types___ProperType)))
        cpy_r_r55 = cpy_r_narrowed;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 141, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_narrowed);
        goto CPyL148;
    }
    cpy_r_r56 = 2;
    cpy_r_r57 = 2;
    cpy_r_r58 = CPyDef_meet___is_overlapping_types(cpy_r_r54, cpy_r_r55, cpy_r_r56, 1, cpy_r_r57);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 141, CPyStatic_meet___globals);
        goto CPyL136;
    }
    if (cpy_r_r58) {
        goto CPyL51;
    } else
        goto CPyL149;
CPyL43: ;
    cpy_r_r59 = CPyStatic_state___state;
    if (likely(cpy_r_r59 != NULL)) goto CPyL46;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r60 = 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 142, CPyStatic_meet___globals);
        goto CPyL133;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r61 = ((mypy___state___StrictOptionalStateObject *)cpy_r_r59)->_strict_optional;
    if (!cpy_r_r61) goto CPyL49;
CPyL47: ;
    cpy_r_r62 = 2;
    cpy_r_r63 = CPY_INT_TAG;
    cpy_r_r64 = CPY_INT_TAG;
    cpy_r_r65 = CPyDef_types___UninhabitedType(cpy_r_r62, cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 143, CPyStatic_meet___globals);
        goto CPyL133;
    }
    return cpy_r_r65;
CPyL49: ;
    cpy_r_r66 = CPY_INT_TAG;
    cpy_r_r67 = CPY_INT_TAG;
    cpy_r_r68 = CPyDef_types___NoneType(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 145, CPyStatic_meet___globals);
        goto CPyL133;
    }
    return cpy_r_r68;
CPyL51: ;
    cpy_r_r69 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r70 = (CPyPtr)&((PyObject *)cpy_r_narrowed)->ob_type;
    cpy_r_r71 = *(PyObject * *)cpy_r_r70;
    cpy_r_r72 = cpy_r_r71 == cpy_r_r69;
    if (cpy_r_r72) {
        goto CPyL150;
    } else
        goto CPyL64;
CPyL52: ;
    if (likely(Py_TYPE(cpy_r_narrowed) == CPyType_types___UnionType))
        cpy_r_r73 = cpy_r_narrowed;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 148, CPyStatic_meet___globals, "mypy.types.UnionType", cpy_r_narrowed);
        goto CPyL151;
    }
    cpy_r_r74 = CPyDef_types___UnionType___relevant_items(cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 148, CPyStatic_meet___globals);
        goto CPyL151;
    }
    cpy_r_r75 = (CPyPtr)&((PyVarObject *)cpy_r_r74)->ob_size;
    cpy_r_r76 = *(int64_t *)cpy_r_r75;
    cpy_r_r77 = PyList_New(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 148, CPyStatic_meet___globals);
        goto CPyL152;
    }
    cpy_r_r78 = 0;
CPyL56: ;
    cpy_r_r79 = (CPyPtr)&((PyVarObject *)cpy_r_r74)->ob_size;
    cpy_r_r80 = *(int64_t *)cpy_r_r79;
    cpy_r_r81 = cpy_r_r80 << 1;
    cpy_r_r82 = (Py_ssize_t)cpy_r_r78 < (Py_ssize_t)cpy_r_r81;
    if (!cpy_r_r82) goto CPyL153;
    cpy_r_r83 = CPyList_GetItemUnsafe(cpy_r_r74, cpy_r_r78);
    if (likely(PyObject_TypeCheck(cpy_r_r83, CPyType_types___Type)))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 148, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r83);
        goto CPyL154;
    }
    cpy_r_x_2 = cpy_r_r84;
    CPy_INCREF(cpy_r_declared);
    if (likely(PyObject_TypeCheck(cpy_r_declared, CPyType_types___ProperType)))
        cpy_r_r85 = cpy_r_declared;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 148, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_declared);
        goto CPyL155;
    }
    cpy_r_r86 = CPyDef_meet___narrow_declared_type(cpy_r_r85, cpy_r_x_2);
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_x_2);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 148, CPyStatic_meet___globals);
        goto CPyL154;
    }
    cpy_r_r87 = CPyList_SetItemUnsafe(cpy_r_r77, cpy_r_r78, cpy_r_r86);
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 148, CPyStatic_meet___globals);
        goto CPyL154;
    }
    cpy_r_r88 = cpy_r_r78 + 2;
    cpy_r_r78 = cpy_r_r88;
    goto CPyL56;
CPyL62: ;
    cpy_r_r89 = CPY_INT_TAG;
    cpy_r_r90 = CPY_INT_TAG;
    cpy_r_r91 = 2;
    cpy_r_r92 = 2;
    cpy_r_r93 = CPyDef_typeops___make_simplified_union(cpy_r_r77, cpy_r_r89, cpy_r_r90, cpy_r_r91, cpy_r_r92);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 147, CPyStatic_meet___globals);
        goto CPyL133;
    }
    return cpy_r_r93;
CPyL64: ;
    cpy_r_r94 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r95 = (CPyPtr)&((PyObject *)cpy_r_narrowed)->ob_type;
    cpy_r_r96 = *(PyObject * *)cpy_r_r95;
    cpy_r_r97 = cpy_r_r96 == cpy_r_r94;
    if (cpy_r_r97) {
        goto CPyL156;
    } else
        goto CPyL66;
CPyL65: ;
    return cpy_r_original_narrowed;
CPyL66: ;
    cpy_r_r98 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r99 = (CPyPtr)&((PyObject *)cpy_r_narrowed)->ob_type;
    cpy_r_r100 = *(PyObject * *)cpy_r_r99;
    cpy_r_r101 = cpy_r_r100 == cpy_r_r98;
    if (!cpy_r_r101) goto CPyL73;
    if (likely(Py_TYPE(cpy_r_narrowed) == CPyType_types___TypeVarType))
        cpy_r_r102 = cpy_r_narrowed;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 152, CPyStatic_meet___globals, "mypy.types.TypeVarType", cpy_r_narrowed);
        goto CPyL136;
    }
    cpy_r_r103 = ((mypy___types___TypeVarTypeObject *)cpy_r_r102)->_upper_bound;
    CPy_INCREF(cpy_r_r103);
    CPy_INCREF(cpy_r_declared);
    if (likely(PyObject_TypeCheck(cpy_r_declared, CPyType_types___ProperType)))
        cpy_r_r104 = cpy_r_declared;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 152, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_declared);
        goto CPyL157;
    }
    cpy_r_r105 = NULL;
    cpy_r_r106 = 2;
    cpy_r_r107 = 2;
    cpy_r_r108 = 2;
    cpy_r_r109 = 2;
    cpy_r_r110 = 2;
    cpy_r_r111 = NULL;
    cpy_r_r112 = CPyDef_subtypes___is_subtype(cpy_r_r103, cpy_r_r104, cpy_r_r105, cpy_r_r106, cpy_r_r107, cpy_r_r108, cpy_r_r109, cpy_r_r110, cpy_r_r111);
    CPy_DECREF(cpy_r_r103);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r112 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 152, CPyStatic_meet___globals);
        goto CPyL136;
    }
    if (cpy_r_r112) {
        goto CPyL158;
    } else
        goto CPyL73;
CPyL71: ;
    if (likely(Py_TYPE(cpy_r_narrowed) == CPyType_types___TypeVarType))
        cpy_r_r113 = cpy_r_narrowed;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 153, CPyStatic_meet___globals, "mypy.types.TypeVarType", cpy_r_narrowed);
        goto CPyL133;
    }
    return cpy_r_r113;
CPyL73: ;
    cpy_r_r114 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r115 = (CPyPtr)&((PyObject *)cpy_r_declared)->ob_type;
    cpy_r_r116 = *(PyObject * *)cpy_r_r115;
    cpy_r_r117 = cpy_r_r116 == cpy_r_r114;
    if (!cpy_r_r117) goto CPyL80;
    cpy_r_r118 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r119 = (CPyPtr)&((PyObject *)cpy_r_narrowed)->ob_type;
    cpy_r_r120 = *(PyObject * *)cpy_r_r119;
    cpy_r_r121 = cpy_r_r120 == cpy_r_r118;
    if (cpy_r_r121) {
        goto CPyL159;
    } else
        goto CPyL80;
CPyL75: ;
    if (likely(Py_TYPE(cpy_r_declared) == CPyType_types___TypeType))
        cpy_r_r122 = cpy_r_declared;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 155, CPyStatic_meet___globals, "mypy.types.TypeType", cpy_r_declared);
        goto CPyL140;
    }
    cpy_r_r123 = ((mypy___types___TypeTypeObject *)cpy_r_r122)->_item;
    CPy_INCREF(cpy_r_r123);
    CPy_DECREF(cpy_r_declared);
    if (likely(Py_TYPE(cpy_r_narrowed) == CPyType_types___TypeType))
        cpy_r_r124 = cpy_r_narrowed;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 155, CPyStatic_meet___globals, "mypy.types.TypeType", cpy_r_narrowed);
        goto CPyL160;
    }
    cpy_r_r125 = ((mypy___types___TypeTypeObject *)cpy_r_r124)->_item;
    CPy_INCREF(cpy_r_r125);
    CPy_DECREF(cpy_r_narrowed);
    cpy_r_r126 = CPyDef_meet___narrow_declared_type(cpy_r_r123, cpy_r_r125);
    CPy_DECREF(cpy_r_r123);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 155, CPyStatic_meet___globals);
        goto CPyL133;
    }
    cpy_r_r127 = CPY_INT_TAG;
    cpy_r_r128 = CPY_INT_TAG;
    cpy_r_r129 = CPyDef_types___TypeType___make_normalized(cpy_r_r126, cpy_r_r127, cpy_r_r128);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 155, CPyStatic_meet___globals);
        goto CPyL133;
    }
    return cpy_r_r129;
CPyL80: ;
    cpy_r_r130 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r131 = (CPyPtr)&((PyObject *)cpy_r_declared)->ob_type;
    cpy_r_r132 = *(PyObject * *)cpy_r_r131;
    cpy_r_r133 = cpy_r_r132 == cpy_r_r130;
    if (!cpy_r_r133) goto CPyL86;
    cpy_r_r134 = (PyObject *)CPyType_types___Instance;
    cpy_r_r135 = (CPyPtr)&((PyObject *)cpy_r_narrowed)->ob_type;
    cpy_r_r136 = *(PyObject * *)cpy_r_r135;
    cpy_r_r137 = cpy_r_r136 == cpy_r_r134;
    if (!cpy_r_r137) goto CPyL86;
    if (likely(Py_TYPE(cpy_r_narrowed) == CPyType_types___Instance))
        cpy_r_r138 = cpy_r_narrowed;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 159, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_narrowed);
        goto CPyL136;
    }
    cpy_r_r139 = ((mypy___types___InstanceObject *)cpy_r_r138)->_type;
    CPy_INCREF(cpy_r_r139);
    cpy_r_r140 = CPyDef_nodes___TypeInfo___is_metaclass(cpy_r_r139);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r140 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 159, CPyStatic_meet___globals);
        goto CPyL136;
    }
    if (cpy_r_r140) {
        goto CPyL161;
    } else
        goto CPyL86;
CPyL85: ;
    return cpy_r_original_declared;
CPyL86: ;
    cpy_r_r141 = (PyObject *)CPyType_types___Instance;
    cpy_r_r142 = (CPyPtr)&((PyObject *)cpy_r_declared)->ob_type;
    cpy_r_r143 = *(PyObject * *)cpy_r_r142;
    cpy_r_r144 = cpy_r_r143 == cpy_r_r141;
    if (!cpy_r_r144) goto CPyL103;
    if (likely(Py_TYPE(cpy_r_declared) == CPyType_types___Instance))
        cpy_r_r145 = cpy_r_declared;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 164, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_declared);
        goto CPyL136;
    }
    cpy_r_r146 = ((mypy___types___InstanceObject *)cpy_r_r145)->_type;
    cpy_r_r147 = ((mypy___nodes___TypeInfoObject *)cpy_r_r146)->_alt_promote;
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "narrow_declared_type", "TypeInfo", "alt_promote", 164, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r147);
CPyL89: ;
    cpy_r_r148 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r149 = cpy_r_r147 != cpy_r_r148;
    CPy_DECREF(cpy_r_r147);
    if (cpy_r_r149) {
        goto CPyL162;
    } else
        goto CPyL91;
CPyL90: ;
    return cpy_r_original_declared;
CPyL91: ;
    cpy_r_r150 = (PyObject *)CPyType_types___Instance;
    cpy_r_r151 = (CPyPtr)&((PyObject *)cpy_r_narrowed)->ob_type;
    cpy_r_r152 = *(PyObject * *)cpy_r_r151;
    cpy_r_r153 = cpy_r_r152 == cpy_r_r150;
    if (!cpy_r_r153) goto CPyL163;
    if (likely(Py_TYPE(cpy_r_narrowed) == CPyType_types___Instance))
        cpy_r_r154 = cpy_r_narrowed;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 169, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_narrowed);
        goto CPyL136;
    }
    cpy_r_r155 = ((mypy___types___InstanceObject *)cpy_r_r154)->_type;
    cpy_r_r156 = ((mypy___nodes___TypeInfoObject *)cpy_r_r155)->_alt_promote;
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "narrow_declared_type", "TypeInfo", "alt_promote", 169, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r156);
CPyL94: ;
    cpy_r_r157 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r158 = cpy_r_r156 != cpy_r_r157;
    CPy_DECREF(cpy_r_r156);
    if (!cpy_r_r158) goto CPyL163;
    if (likely(Py_TYPE(cpy_r_narrowed) == CPyType_types___Instance))
        cpy_r_r159 = cpy_r_narrowed;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 170, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_narrowed);
        goto CPyL136;
    }
    cpy_r_r160 = ((mypy___types___InstanceObject *)cpy_r_r159)->_type;
    cpy_r_r161 = ((mypy___nodes___TypeInfoObject *)cpy_r_r160)->_alt_promote;
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "narrow_declared_type", "TypeInfo", "alt_promote", 170, CPyStatic_meet___globals);
        goto CPyL136;
    }
CPyL97: ;
    if (likely(cpy_r_r161 != Py_None))
        cpy_r_r162 = cpy_r_r161;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 170, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r161);
        goto CPyL136;
    }
    cpy_r_r163 = ((mypy___types___InstanceObject *)cpy_r_r162)->_type;
    CPy_INCREF(cpy_r_r163);
    CPy_DECREF(cpy_r_narrowed);
    if (likely(Py_TYPE(cpy_r_declared) == CPyType_types___Instance))
        cpy_r_r164 = cpy_r_declared;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 170, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_declared);
        goto CPyL164;
    }
    cpy_r_r165 = ((mypy___types___InstanceObject *)cpy_r_r164)->_type;
    CPy_INCREF(cpy_r_r165);
    CPy_DECREF(cpy_r_declared);
    cpy_r_r166 = cpy_r_r163 == cpy_r_r165;
    CPy_DECREF(cpy_r_r163);
    CPy_DECREF(cpy_r_r165);
    if (cpy_r_r166) {
        goto CPyL165;
    } else
        goto CPyL101;
CPyL100: ;
    return cpy_r_original_declared;
CPyL101: ;
    cpy_r_r167 = CPyDef_meet___meet_types(cpy_r_original_declared, cpy_r_original_narrowed);
    CPy_DECREF(cpy_r_original_declared);
    CPy_DECREF(cpy_r_original_narrowed);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 175, CPyStatic_meet___globals);
        goto CPyL133;
    }
    return cpy_r_r167;
CPyL103: ;
    cpy_r_r168 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r169 = (CPyPtr)&((PyObject *)cpy_r_declared)->ob_type;
    cpy_r_r170 = *(PyObject * *)cpy_r_r169;
    cpy_r_r171 = cpy_r_r170 == cpy_r_r168;
    if (!cpy_r_r171) goto CPyL105;
    cpy_r_r172 = cpy_r_r171;
    goto CPyL106;
CPyL105: ;
    cpy_r_r173 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r174 = (CPyPtr)&((PyObject *)cpy_r_declared)->ob_type;
    cpy_r_r175 = *(PyObject * *)cpy_r_r174;
    cpy_r_r176 = cpy_r_r175 == cpy_r_r173;
    cpy_r_r172 = cpy_r_r176;
CPyL106: ;
    if (!cpy_r_r172) goto CPyL108;
    cpy_r_r177 = cpy_r_r172;
    goto CPyL109;
CPyL108: ;
    cpy_r_r178 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r179 = (CPyPtr)&((PyObject *)cpy_r_declared)->ob_type;
    cpy_r_r180 = *(PyObject * *)cpy_r_r179;
    cpy_r_r181 = cpy_r_r180 == cpy_r_r178;
    cpy_r_r177 = cpy_r_r181;
CPyL109: ;
    if (cpy_r_r177) {
        goto CPyL166;
    } else
        goto CPyL112;
CPyL110: ;
    cpy_r_r182 = CPyDef_meet___meet_types(cpy_r_original_declared, cpy_r_original_narrowed);
    CPy_DECREF(cpy_r_original_declared);
    CPy_DECREF(cpy_r_original_narrowed);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 177, CPyStatic_meet___globals);
        goto CPyL133;
    }
    return cpy_r_r182;
CPyL112: ;
    cpy_r_r183 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r184 = (CPyPtr)&((PyObject *)cpy_r_declared)->ob_type;
    cpy_r_r185 = *(PyObject * *)cpy_r_r184;
    CPy_DECREF(cpy_r_declared);
    cpy_r_r186 = cpy_r_r185 == cpy_r_r183;
    if (!cpy_r_r186) goto CPyL167;
    cpy_r_r187 = (PyObject *)CPyType_types___Instance;
    cpy_r_r188 = (CPyPtr)&((PyObject *)cpy_r_narrowed)->ob_type;
    cpy_r_r189 = *(PyObject * *)cpy_r_r188;
    cpy_r_r190 = cpy_r_r189 == cpy_r_r187;
    if (!cpy_r_r190) goto CPyL167;
    if (likely(Py_TYPE(cpy_r_narrowed) == CPyType_types___Instance))
        cpy_r_r191 = cpy_r_narrowed;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 180, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_narrowed);
        goto CPyL168;
    }
    cpy_r_r192 = ((mypy___types___InstanceObject *)cpy_r_r191)->_type;
    CPy_INCREF(cpy_r_r192);
    cpy_r_r193 = CPY_GET_ATTR(cpy_r_r192, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r192);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 180, CPyStatic_meet___globals);
        goto CPyL168;
    }
CPyL116: ;
    cpy_r_r194 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r195 = PyUnicode_Compare(cpy_r_r193, cpy_r_r194);
    CPy_DECREF(cpy_r_r193);
    cpy_r_r196 = cpy_r_r195 == -1;
    if (!cpy_r_r196) goto CPyL119;
    cpy_r_r197 = PyErr_Occurred();
    cpy_r_r198 = cpy_r_r197 != NULL;
    if (!cpy_r_r198) goto CPyL119;
    cpy_r_r199 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r199)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 180, CPyStatic_meet___globals);
        goto CPyL168;
    }
CPyL119: ;
    cpy_r_r200 = cpy_r_r195 == 0;
    if (!cpy_r_r200) goto CPyL169;
    cpy_r_r201 = 1;
    if (likely(Py_TYPE(cpy_r_narrowed) == CPyType_types___Instance))
        cpy_r_r202 = cpy_r_narrowed;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 181, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_narrowed);
        goto CPyL168;
    }
    cpy_r_r203 = ((mypy___types___InstanceObject *)cpy_r_r202)->_args;
    CPy_INCREF(cpy_r_r203);
    CPy_DECREF(cpy_r_narrowed);
    cpy_r_r204 = CPyDef_types___get_proper_types(cpy_r_r203);
    CPy_DECREF(cpy_r_r203);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 181, CPyStatic_meet___globals);
        goto CPyL134;
    }
    cpy_r_r205 = 0;
CPyL123: ;
    cpy_r_r206 = (CPyPtr)&((PyVarObject *)cpy_r_r204)->ob_size;
    cpy_r_r207 = *(int64_t *)cpy_r_r206;
    cpy_r_r208 = cpy_r_r207 << 1;
    cpy_r_r209 = (Py_ssize_t)cpy_r_r205 < (Py_ssize_t)cpy_r_r208;
    if (!cpy_r_r209) goto CPyL170;
    cpy_r_r210 = CPyList_GetItemUnsafe(cpy_r_r204, cpy_r_r205);
    if (likely(PyObject_TypeCheck(cpy_r_r210, CPyType_types___ProperType)))
        cpy_r_r211 = cpy_r_r210;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "narrow_declared_type", 180, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r210);
        goto CPyL171;
    }
    cpy_r_t = cpy_r_r211;
    cpy_r_r212 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r213 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r214 = *(PyObject * *)cpy_r_r213;
    CPy_DECREF(cpy_r_t);
    cpy_r_r215 = cpy_r_r214 == cpy_r_r212;
    cpy_r_r216 = cpy_r_r215 ^ 1;
    if (cpy_r_r216) {
        goto CPyL172;
    } else
        goto CPyL127;
CPyL126: ;
    cpy_r_r201 = 0;
    goto CPyL128;
CPyL127: ;
    cpy_r_r217 = cpy_r_r205 + 2;
    cpy_r_r205 = cpy_r_r217;
    goto CPyL123;
CPyL128: ;
    if (cpy_r_r201) {
        goto CPyL173;
    } else
        goto CPyL130;
CPyL129: ;
    return cpy_r_original_declared;
CPyL130: ;
    cpy_r_r218 = CPyDef_meet___meet_types(cpy_r_original_declared, cpy_r_original_narrowed);
    CPy_DECREF(cpy_r_original_declared);
    CPy_DECREF(cpy_r_original_narrowed);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 184, CPyStatic_meet___globals);
        goto CPyL133;
    }
    return cpy_r_r218;
CPyL132: ;
    return cpy_r_original_narrowed;
CPyL133: ;
    cpy_r_r219 = NULL;
    return cpy_r_r219;
CPyL134: ;
    CPy_DecRef(cpy_r_original_declared);
    CPy_DecRef(cpy_r_original_narrowed);
    goto CPyL133;
CPyL135: ;
    CPy_DecRef(cpy_r_declared);
    CPy_DecRef(cpy_r_original_declared);
    CPy_DecRef(cpy_r_original_narrowed);
    goto CPyL133;
CPyL136: ;
    CPy_DecRef(cpy_r_declared);
    CPy_DecRef(cpy_r_narrowed);
    CPy_DecRef(cpy_r_original_declared);
    CPy_DecRef(cpy_r_original_narrowed);
    goto CPyL133;
CPyL137: ;
    CPy_DecRef(cpy_r_declared);
    CPy_DecRef(cpy_r_narrowed);
    CPy_DecRef(cpy_r_original_declared);
    CPy_DecRef(cpy_r_original_narrowed);
    CPy_DecRef(cpy_r_r10);
    goto CPyL133;
CPyL138: ;
    CPy_DECREF(cpy_r_declared);
    CPy_DECREF(cpy_r_narrowed);
    CPy_DECREF(cpy_r_original_narrowed);
    goto CPyL12;
CPyL139: ;
    CPy_DECREF(cpy_r_original_declared);
    CPy_DECREF(cpy_r_original_narrowed);
    goto CPyL14;
CPyL140: ;
    CPy_DecRef(cpy_r_declared);
    CPy_DecRef(cpy_r_narrowed);
    goto CPyL133;
CPyL141: ;
    CPy_DecRef(cpy_r_narrowed);
    CPy_DecRef(cpy_r_r18);
    goto CPyL133;
CPyL142: ;
    CPy_DECREF(cpy_r_narrowed);
    CPy_DECREF(cpy_r_r20);
    goto CPyL32;
CPyL143: ;
    CPy_DecRef(cpy_r_narrowed);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r20);
    goto CPyL133;
CPyL144: ;
    CPy_DecRef(cpy_r_narrowed);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_x);
    goto CPyL133;
CPyL145: ;
    CPy_DECREF(cpy_r_x);
    goto CPyL31;
CPyL146: ;
    CPy_DecRef(cpy_r_declared);
    CPy_DecRef(cpy_r_narrowed);
    CPy_DecRef(cpy_r_original_declared);
    CPy_DecRef(cpy_r_original_narrowed);
    CPy_DecRef(cpy_r_r51);
    goto CPyL133;
CPyL147: ;
    CPy_DECREF(cpy_r_declared);
    CPy_DECREF(cpy_r_narrowed);
    CPy_DECREF(cpy_r_original_declared);
    goto CPyL38;
CPyL148: ;
    CPy_DecRef(cpy_r_declared);
    CPy_DecRef(cpy_r_narrowed);
    CPy_DecRef(cpy_r_original_declared);
    CPy_DecRef(cpy_r_original_narrowed);
    CPy_DecRef(cpy_r_r54);
    goto CPyL133;
CPyL149: ;
    CPy_DECREF(cpy_r_declared);
    CPy_DECREF(cpy_r_narrowed);
    CPy_DECREF(cpy_r_original_declared);
    CPy_DECREF(cpy_r_original_narrowed);
    goto CPyL43;
CPyL150: ;
    CPy_DECREF(cpy_r_original_declared);
    CPy_DECREF(cpy_r_original_narrowed);
    goto CPyL52;
CPyL151: ;
    CPy_DecRef(cpy_r_declared);
    goto CPyL133;
CPyL152: ;
    CPy_DecRef(cpy_r_declared);
    CPy_DecRef(cpy_r_r74);
    goto CPyL133;
CPyL153: ;
    CPy_DECREF(cpy_r_declared);
    CPy_DECREF(cpy_r_r74);
    goto CPyL62;
CPyL154: ;
    CPy_DecRef(cpy_r_declared);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r77);
    goto CPyL133;
CPyL155: ;
    CPy_DecRef(cpy_r_declared);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_x_2);
    goto CPyL133;
CPyL156: ;
    CPy_DECREF(cpy_r_declared);
    CPy_DECREF(cpy_r_narrowed);
    CPy_DECREF(cpy_r_original_declared);
    goto CPyL65;
CPyL157: ;
    CPy_DecRef(cpy_r_declared);
    CPy_DecRef(cpy_r_narrowed);
    CPy_DecRef(cpy_r_original_declared);
    CPy_DecRef(cpy_r_original_narrowed);
    CPy_DecRef(cpy_r_r103);
    goto CPyL133;
CPyL158: ;
    CPy_DECREF(cpy_r_declared);
    CPy_DECREF(cpy_r_original_declared);
    CPy_DECREF(cpy_r_original_narrowed);
    goto CPyL71;
CPyL159: ;
    CPy_DECREF(cpy_r_original_declared);
    CPy_DECREF(cpy_r_original_narrowed);
    goto CPyL75;
CPyL160: ;
    CPy_DecRef(cpy_r_narrowed);
    CPy_DecRef(cpy_r_r123);
    goto CPyL133;
CPyL161: ;
    CPy_DECREF(cpy_r_declared);
    CPy_DECREF(cpy_r_narrowed);
    CPy_DECREF(cpy_r_original_narrowed);
    goto CPyL85;
CPyL162: ;
    CPy_DECREF(cpy_r_declared);
    CPy_DECREF(cpy_r_narrowed);
    CPy_DECREF(cpy_r_original_narrowed);
    goto CPyL90;
CPyL163: ;
    CPy_DECREF(cpy_r_declared);
    CPy_DECREF(cpy_r_narrowed);
    goto CPyL101;
CPyL164: ;
    CPy_DecRef(cpy_r_declared);
    CPy_DecRef(cpy_r_original_declared);
    CPy_DecRef(cpy_r_original_narrowed);
    CPy_DecRef(cpy_r_r163);
    goto CPyL133;
CPyL165: ;
    CPy_DECREF(cpy_r_original_narrowed);
    goto CPyL100;
CPyL166: ;
    CPy_DECREF(cpy_r_declared);
    CPy_DECREF(cpy_r_narrowed);
    goto CPyL110;
CPyL167: ;
    CPy_DECREF(cpy_r_narrowed);
    CPy_DECREF(cpy_r_original_declared);
    goto CPyL132;
CPyL168: ;
    CPy_DecRef(cpy_r_narrowed);
    CPy_DecRef(cpy_r_original_declared);
    CPy_DecRef(cpy_r_original_narrowed);
    goto CPyL133;
CPyL169: ;
    CPy_DECREF(cpy_r_narrowed);
    goto CPyL130;
CPyL170: ;
    CPy_DECREF(cpy_r_r204);
    goto CPyL128;
CPyL171: ;
    CPy_DecRef(cpy_r_original_declared);
    CPy_DecRef(cpy_r_original_narrowed);
    CPy_DecRef(cpy_r_r204);
    goto CPyL133;
CPyL172: ;
    CPy_DECREF(cpy_r_r204);
    goto CPyL126;
CPyL173: ;
    CPy_DECREF(cpy_r_original_narrowed);
    goto CPyL129;
}

PyObject *CPyPy_meet___narrow_declared_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"declared", "narrowed", 0};
    static CPyArg_Parser parser = {"OO:narrow_declared_type", kwlist, 0};
    PyObject *obj_declared;
    PyObject *obj_narrowed;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_declared, &obj_narrowed)) {
        return NULL;
    }
    PyObject *arg_declared;
    if (likely(PyObject_TypeCheck(obj_declared, CPyType_types___Type)))
        arg_declared = obj_declared;
    else {
        CPy_TypeError("mypy.types.Type", obj_declared); 
        goto fail;
    }
    PyObject *arg_narrowed;
    if (likely(PyObject_TypeCheck(obj_narrowed, CPyType_types___Type)))
        arg_narrowed = obj_narrowed;
    else {
        CPy_TypeError("mypy.types.Type", obj_narrowed); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___narrow_declared_type(arg_declared, arg_narrowed);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "narrow_declared_type", 109, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___get_possible_variants(PyObject *cpy_r_typ) {
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
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    CPyPtr cpy_r_r45;
    PyObject *cpy_r_r46;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "get_possible_variants", 213, CPyStatic_meet___globals);
        goto CPyL26;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "get_possible_variants", 213, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL26;
    }
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL10;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r6 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "get_possible_variants", 216, CPyStatic_meet___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL27;
    }
    cpy_r_r7 = ((mypy___types___TypeVarTypeObject *)cpy_r_r6)->_values;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r10 > (Py_ssize_t)0;
    if (!cpy_r_r11) goto CPyL7;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r12 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "get_possible_variants", 217, CPyStatic_meet___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL27;
    }
    cpy_r_r13 = ((mypy___types___TypeVarTypeObject *)cpy_r_r12)->_values;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_typ);
    return cpy_r_r13;
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r14 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "get_possible_variants", 219, CPyStatic_meet___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL27;
    }
    cpy_r_r15 = ((mypy___types___TypeVarTypeObject *)cpy_r_r14)->_upper_bound;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r16 = PyList_New(1);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "get_possible_variants", 219, CPyStatic_meet___globals);
        goto CPyL28;
    }
    cpy_r_r17 = (CPyPtr)&((PyListObject *)cpy_r_r16)->ob_item;
    cpy_r_r18 = *(CPyPtr *)cpy_r_r17;
    *(PyObject * *)cpy_r_r18 = cpy_r_r15;
    return cpy_r_r16;
CPyL10: ;
    cpy_r_r19 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    if (!cpy_r_r22) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___ParamSpecType))
        cpy_r_r23 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "get_possible_variants", 221, CPyStatic_meet___globals, "mypy.types.ParamSpecType", cpy_r_typ);
        goto CPyL27;
    }
    cpy_r_r24 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r23)->_upper_bound;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r25 = PyList_New(1);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "get_possible_variants", 221, CPyStatic_meet___globals);
        goto CPyL29;
    }
    cpy_r_r26 = (CPyPtr)&((PyListObject *)cpy_r_r25)->ob_item;
    cpy_r_r27 = *(CPyPtr *)cpy_r_r26;
    *(PyObject * *)cpy_r_r27 = cpy_r_r24;
    return cpy_r_r25;
CPyL14: ;
    cpy_r_r28 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    if (!cpy_r_r31) goto CPyL18;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r32 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "get_possible_variants", 223, CPyStatic_meet___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL27;
    }
    cpy_r_r33 = ((mypy___types___UnionTypeObject *)cpy_r_r32)->_items;
    CPy_INCREF(cpy_r_r33);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r34 = PySequence_List(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "get_possible_variants", 223, CPyStatic_meet___globals);
        goto CPyL26;
    }
    return cpy_r_r34;
CPyL18: ;
    cpy_r_r35 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r36 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r37 = *(PyObject * *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 == cpy_r_r35;
    if (!cpy_r_r38) goto CPyL23;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded))
        cpy_r_r39 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "get_possible_variants", 227, CPyStatic_meet___globals, "mypy.types.Overloaded", cpy_r_typ);
        goto CPyL26;
    }
    cpy_r_r40 = CPY_GET_ATTR(cpy_r_r39, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "get_possible_variants", 227, CPyStatic_meet___globals);
        goto CPyL26;
    }
CPyL21: ;
    cpy_r_r41 = PySequence_List(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "get_possible_variants", 227, CPyStatic_meet___globals);
        goto CPyL26;
    }
    return cpy_r_r41;
CPyL23: ;
    if (likely(PyObject_TypeCheck(cpy_r_typ, CPyType_types___ProperType)))
        cpy_r_r42 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "get_possible_variants", 229, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_typ);
        goto CPyL26;
    }
    cpy_r_r43 = PyList_New(1);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "get_possible_variants", 229, CPyStatic_meet___globals);
        goto CPyL30;
    }
    cpy_r_r44 = (CPyPtr)&((PyListObject *)cpy_r_r43)->ob_item;
    cpy_r_r45 = *(CPyPtr *)cpy_r_r44;
    *(PyObject * *)cpy_r_r45 = cpy_r_r42;
    return cpy_r_r43;
CPyL26: ;
    cpy_r_r46 = NULL;
    return cpy_r_r46;
CPyL27: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL26;
CPyL30: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL26;
}

PyObject *CPyPy_meet___get_possible_variants(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:get_possible_variants", kwlist, 0};
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
    PyObject *retval = CPyDef_meet___get_possible_variants(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "get_possible_variants", 188, CPyStatic_meet___globals);
    return NULL;
}

char CPyDef_meet___is_enum_overlapping_union(PyObject *cpy_r_x, PyObject *cpy_r_y) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_z;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    cpy_r_r0 = (PyObject *)CPyType_types___Instance;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_x)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL33;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_x) == CPyType_types___Instance))
        cpy_r_r5 = cpy_r_x;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_enum_overlapping_union", 236, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_x);
        goto CPyL34;
    }
    cpy_r_r6 = ((mypy___types___InstanceObject *)cpy_r_r5)->_type;
    cpy_r_r7 = ((mypy___nodes___TypeInfoObject *)cpy_r_r6)->_is_enum;
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AttributeError("mypy/meet.py", "is_enum_overlapping_union", "TypeInfo", "is_enum", 236, CPyStatic_meet___globals);
        goto CPyL34;
    }
CPyL4: ;
    if (cpy_r_r7) goto CPyL6;
CPyL5: ;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL32;
CPyL6: ;
    cpy_r_r9 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_y)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (cpy_r_r12) goto CPyL8;
    cpy_r_r13 = cpy_r_r12;
    goto CPyL31;
CPyL8: ;
    cpy_r_r14 = 0;
    CPy_INCREF(cpy_r_y);
    if (likely(Py_TYPE(cpy_r_y) == CPyType_types___UnionType))
        cpy_r_r15 = cpy_r_y;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_enum_overlapping_union", 240, CPyStatic_meet___globals, "mypy.types.UnionType", cpy_r_y);
        goto CPyL34;
    }
    cpy_r_r16 = CPyDef_types___UnionType___relevant_items(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_enum_overlapping_union", 240, CPyStatic_meet___globals);
        goto CPyL34;
    }
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = PyList_New(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_enum_overlapping_union", 240, CPyStatic_meet___globals);
        goto CPyL35;
    }
    cpy_r_r20 = 0;
CPyL12: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r23;
    if (!cpy_r_r24) goto CPyL36;
    cpy_r_r25 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r20);
    if (likely(PyObject_TypeCheck(cpy_r_r25, CPyType_types___Type)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_enum_overlapping_union", 240, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r25);
        goto CPyL37;
    }
    cpy_r_z = cpy_r_r26;
    cpy_r_r27 = CPyDef_types___get_proper_type(cpy_r_z);
    CPy_DECREF(cpy_r_z);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_enum_overlapping_union", 240, CPyStatic_meet___globals);
        goto CPyL37;
    }
    if (likely(cpy_r_r27 != Py_None))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_enum_overlapping_union", 240, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r27);
        goto CPyL37;
    }
    cpy_r_r29 = CPyList_SetItemUnsafe(cpy_r_r19, cpy_r_r20, cpy_r_r28);
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/meet.py", "is_enum_overlapping_union", 240, CPyStatic_meet___globals);
        goto CPyL37;
    }
    cpy_r_r30 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r30;
    goto CPyL12;
CPyL18: ;
    cpy_r_r31 = PyObject_GetIter(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_enum_overlapping_union", 240, CPyStatic_meet___globals);
        goto CPyL34;
    }
    cpy_r_r32 = PyObject_GetIter(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_enum_overlapping_union", 238, CPyStatic_meet___globals);
        goto CPyL34;
    }
CPyL20: ;
    cpy_r_r33 = PyIter_Next(cpy_r_r32);
    if (cpy_r_r33 == NULL) goto CPyL38;
    if (likely(PyObject_TypeCheck(cpy_r_r33, CPyType_types___ProperType)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_enum_overlapping_union", 238, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r33);
        goto CPyL39;
    }
    cpy_r_p = cpy_r_r34;
    cpy_r_r35 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r36 = (CPyPtr)&((PyObject *)cpy_r_p)->ob_type;
    cpy_r_r37 = *(PyObject * *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 == cpy_r_r35;
    if (cpy_r_r38) {
        goto CPyL24;
    } else
        goto CPyL40;
CPyL23: ;
    cpy_r_r39 = cpy_r_r38;
    goto CPyL27;
CPyL24: ;
    if (likely(Py_TYPE(cpy_r_x) == CPyType_types___Instance))
        cpy_r_r40 = cpy_r_x;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_enum_overlapping_union", 239, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_x);
        goto CPyL41;
    }
    cpy_r_r41 = ((mypy___types___InstanceObject *)cpy_r_r40)->_type;
    CPy_INCREF(cpy_r_r41);
    if (likely(Py_TYPE(cpy_r_p) == CPyType_types___LiteralType))
        cpy_r_r42 = cpy_r_p;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_enum_overlapping_union", 239, CPyStatic_meet___globals, "mypy.types.LiteralType", cpy_r_p);
        goto CPyL42;
    }
    cpy_r_r43 = ((mypy___types___LiteralTypeObject *)cpy_r_r42)->_fallback;
    cpy_r_r44 = ((mypy___types___InstanceObject *)cpy_r_r43)->_type;
    CPy_INCREF(cpy_r_r44);
    CPy_DECREF(cpy_r_p);
    cpy_r_r45 = cpy_r_r41 == cpy_r_r44;
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r39 = cpy_r_r45;
CPyL27: ;
    if (cpy_r_r39) {
        goto CPyL43;
    } else
        goto CPyL20;
CPyL28: ;
    cpy_r_r14 = 1;
    goto CPyL30;
CPyL29: ;
    cpy_r_r46 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/meet.py", "is_enum_overlapping_union", 238, CPyStatic_meet___globals);
        goto CPyL34;
    }
CPyL30: ;
    cpy_r_r13 = cpy_r_r14;
CPyL31: ;
    cpy_r_r8 = cpy_r_r13;
CPyL32: ;
    cpy_r_r4 = cpy_r_r8;
CPyL33: ;
    return cpy_r_r4;
CPyL34: ;
    cpy_r_r47 = 2;
    return cpy_r_r47;
CPyL35: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL34;
CPyL36: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL18;
CPyL37: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    goto CPyL34;
CPyL38: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL29;
CPyL39: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL34;
CPyL40: ;
    CPy_DECREF(cpy_r_p);
    goto CPyL23;
CPyL41: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_p);
    goto CPyL34;
CPyL42: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_p);
    CPy_DecRef(cpy_r_r41);
    goto CPyL34;
CPyL43: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL28;
}

PyObject *CPyPy_meet___is_enum_overlapping_union(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"x", "y", 0};
    static CPyArg_Parser parser = {"OO:is_enum_overlapping_union", kwlist, 0};
    PyObject *obj_x;
    PyObject *obj_y;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_x, &obj_y)) {
        return NULL;
    }
    PyObject *arg_x;
    if (likely(PyObject_TypeCheck(obj_x, CPyType_types___ProperType)))
        arg_x = obj_x;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_x); 
        goto fail;
    }
    PyObject *arg_y;
    if (likely(PyObject_TypeCheck(obj_y, CPyType_types___ProperType)))
        arg_y = obj_y;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_y); 
        goto fail;
    }
    char retval = CPyDef_meet___is_enum_overlapping_union(arg_x, arg_y);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "is_enum_overlapping_union", 232, CPyStatic_meet___globals);
    return NULL;
}

char CPyDef_meet___is_literal_in_union(PyObject *cpy_r_x, PyObject *cpy_r_y) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_z;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_x)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL18;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_y)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    if (cpy_r_r8) goto CPyL4;
    cpy_r_r9 = cpy_r_r8;
    goto CPyL17;
CPyL4: ;
    cpy_r_r10 = 0;
    if (likely(Py_TYPE(cpy_r_y) == CPyType_types___UnionType))
        cpy_r_r11 = cpy_r_y;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_literal_in_union", 250, CPyStatic_meet___globals, "mypy.types.UnionType", cpy_r_y);
        goto CPyL19;
    }
    cpy_r_r12 = ((mypy___types___UnionTypeObject *)cpy_r_r11)->_items;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = 0;
CPyL6: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL20;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_r12, cpy_r_r13);
    if (likely(PyObject_TypeCheck(cpy_r_r18, CPyType_types___Type)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_literal_in_union", 250, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r18);
        goto CPyL21;
    }
    cpy_r_z = cpy_r_r19;
    CPy_INCREF(cpy_r_x);
    if (likely(Py_TYPE(cpy_r_x) == CPyType_types___LiteralType))
        cpy_r_r20 = cpy_r_x;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_literal_in_union", 250, CPyStatic_meet___globals, "mypy.types.LiteralType", cpy_r_x);
        goto CPyL22;
    }
    cpy_r_r21 = CPyDef_types___get_proper_type(cpy_r_z);
    CPy_DECREF(cpy_r_z);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_literal_in_union", 250, CPyStatic_meet___globals);
        goto CPyL23;
    }
    if (likely(cpy_r_r21 != Py_None))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_literal_in_union", 250, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r21);
        goto CPyL23;
    }
    cpy_r_r23 = PyObject_RichCompare(cpy_r_r20, cpy_r_r22, 2);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_literal_in_union", 250, CPyStatic_meet___globals);
        goto CPyL21;
    }
    if (unlikely(!PyBool_Check(cpy_r_r23))) {
        CPy_TypeError("bool", cpy_r_r23); cpy_r_r24 = 2;
    } else
        cpy_r_r24 = cpy_r_r23 == Py_True;
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_literal_in_union", 250, CPyStatic_meet___globals);
        goto CPyL21;
    }
    if (cpy_r_r24) {
        goto CPyL24;
    } else
        goto CPyL15;
CPyL14: ;
    cpy_r_r10 = 1;
    goto CPyL16;
CPyL15: ;
    cpy_r_r25 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r25;
    goto CPyL6;
CPyL16: ;
    cpy_r_r9 = cpy_r_r10;
CPyL17: ;
    cpy_r_r4 = cpy_r_r9;
CPyL18: ;
    return cpy_r_r4;
CPyL19: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL20: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL19;
CPyL22: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_z);
    goto CPyL19;
CPyL23: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r20);
    goto CPyL19;
CPyL24: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL14;
}

PyObject *CPyPy_meet___is_literal_in_union(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"x", "y", 0};
    static CPyArg_Parser parser = {"OO:is_literal_in_union", kwlist, 0};
    PyObject *obj_x;
    PyObject *obj_y;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_x, &obj_y)) {
        return NULL;
    }
    PyObject *arg_x;
    if (likely(PyObject_TypeCheck(obj_x, CPyType_types___ProperType)))
        arg_x = obj_x;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_x); 
        goto fail;
    }
    PyObject *arg_y;
    if (likely(PyObject_TypeCheck(obj_y, CPyType_types___ProperType)))
        arg_y = obj_y;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_y); 
        goto fail;
    }
    char retval = CPyDef_meet___is_literal_in_union(arg_x, arg_y);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "is_literal_in_union", 245, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet____is_overlapping_types_is_overlapping_types_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_meet____is_overlapping_types_is_overlapping_types_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_meet____is_overlapping_types_is_overlapping_types_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "__get__", -1, CPyStatic_meet___globals);
    return NULL;
}

char CPyDef_meet____is_overlapping_types_is_overlapping_types_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_left, PyObject *cpy_r_right) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r__is_overlapping_types;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = ((mypy___meet____is_overlapping_types_is_overlapping_types_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "_is_overlapping_types", "_is_overlapping_types_is_overlapping_types_obj", "__mypyc_env__", 275, CPyStatic_meet___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__is_overlapping_types;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "_is_overlapping_types", "is_overlapping_types_env", "_is_overlapping_types", -1, CPyStatic_meet___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r__is_overlapping_types = cpy_r_r1;
    CPy_DECREF(cpy_r__is_overlapping_types);
    cpy_r_r2 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_ignore_promotions;
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AttributeError("mypy/meet.py", "_is_overlapping_types", "is_overlapping_types_env", "ignore_promotions", 282, CPyStatic_meet___globals);
        goto CPyL8;
    }
CPyL3: ;
    cpy_r_r3 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_prohibit_none_typevar_overlap;
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AttributeError("mypy/meet.py", "_is_overlapping_types", "is_overlapping_types_env", "prohibit_none_typevar_overlap", 283, CPyStatic_meet___globals);
        goto CPyL8;
    }
CPyL4: ;
    cpy_r_r4 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_ignore_uninhabited;
    if (unlikely(cpy_r_r4 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'ignore_uninhabited' of 'is_overlapping_types_env' undefined");
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "_is_overlapping_types", 284, CPyStatic_meet___globals);
        goto CPyL7;
    }
CPyL5: ;
    cpy_r_r5 = CPyDef_meet___is_overlapping_types(cpy_r_left, cpy_r_right, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "_is_overlapping_types", 279, CPyStatic_meet___globals);
        goto CPyL7;
    }
    return cpy_r_r5;
CPyL7: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
}

PyObject *CPyPy_meet____is_overlapping_types_is_overlapping_types_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"left", "right", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_left;
    PyObject *obj_right;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_left, &obj_right)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
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
    char retval = CPyDef_meet____is_overlapping_types_is_overlapping_types_obj_____call__(arg___mypyc_self__, arg_left, arg_right);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "_is_overlapping_types", 275, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "__get__", -1, CPyStatic_meet___globals);
    return NULL;
}

char CPyDef_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_t1, PyObject *cpy_r_t2) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_is_none_typevarlike_overlap;
    tuple_T2OO cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "is_none_typevarlike_overlap", "is_none_typevarlike_overlap_is_overlapping_types_obj", "__mypyc_env__", 370, CPyStatic_meet___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_is_none_typevarlike_overlap;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'is_none_typevarlike_overlap' of 'is_overlapping_types_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_none_typevarlike_overlap", -1, CPyStatic_meet___globals);
        goto CPyL10;
    }
CPyL2: ;
    cpy_r_is_none_typevarlike_overlap = cpy_r_r1;
    CPy_DECREF(cpy_r_is_none_typevarlike_overlap);
    cpy_r_r2.f0 = cpy_r_t1;
    cpy_r_r2.f1 = cpy_r_t2;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3204 = cpy_r_r2.f0;
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp3204);
    PyObject *__tmp3205 = cpy_r_r2.f1;
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp3205);
    cpy_r_r4 = CPyDef_types___get_proper_types(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_none_typevarlike_overlap", 371, CPyStatic_meet___globals);
        goto CPyL10;
    }
    cpy_r_r5 = CPySequence_CheckUnpackCount(cpy_r_r4, 2);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/meet.py", "is_none_typevarlike_overlap", 371, CPyStatic_meet___globals);
        goto CPyL11;
    }
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r4, 0);
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r4, 2);
    CPy_DECREF(cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_types___Type)))
        cpy_r_r9 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_none_typevarlike_overlap", 371, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r7);
        goto CPyL12;
    }
    cpy_r_t1 = cpy_r_r9;
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_types___Type)))
        cpy_r_r10 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_none_typevarlike_overlap", 371, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r8);
        goto CPyL13;
    }
    cpy_r_t2 = cpy_r_r10;
    cpy_r_r11 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_t1)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    CPy_DECREF(cpy_r_t1);
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (cpy_r_r14) {
        goto CPyL8;
    } else
        goto CPyL14;
CPyL7: ;
    cpy_r_r15 = cpy_r_r14;
    goto CPyL9;
CPyL8: ;
    cpy_r_r16 = (PyObject *)CPyType_types___TypeVarLikeType;
    cpy_r_r17 = CPy_TypeCheck(cpy_r_t2, cpy_r_r16);
    CPy_DECREF(cpy_r_t2);
    cpy_r_r15 = cpy_r_r17;
CPyL9: ;
    return cpy_r_r15;
CPyL10: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL11: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_t1);
    goto CPyL10;
CPyL14: ;
    CPy_DECREF(cpy_r_t2);
    goto CPyL7;
}

PyObject *CPyPy_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"t1", "t2", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_t1;
    PyObject *obj_t2;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_t1, &obj_t2)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_t1;
    if (likely(PyObject_TypeCheck(obj_t1, CPyType_types___Type)))
        arg_t1 = obj_t1;
    else {
        CPy_TypeError("mypy.types.Type", obj_t1); 
        goto fail;
    }
    PyObject *arg_t2;
    if (likely(PyObject_TypeCheck(obj_t2, CPyType_types___Type)))
        arg_t2 = obj_t2;
    else {
        CPy_TypeError("mypy.types.Type", obj_t2); 
        goto fail;
    }
    char retval = CPyDef_meet___is_none_typevarlike_overlap_is_overlapping_types_obj_____call__(arg___mypyc_self__, arg_t1, arg_t2);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "is_none_typevarlike_overlap", 370, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet____type_object_overlap_is_overlapping_types_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_meet____type_object_overlap_is_overlapping_types_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_meet____type_object_overlap_is_overlapping_types_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "__get__", -1, CPyStatic_meet___globals);
    return NULL;
}

char CPyDef_meet____type_object_overlap_is_overlapping_types_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_left, PyObject *cpy_r_right) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r__type_object_overlap;
    tuple_T2OO cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
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
    PyObject *cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_left_meta;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyPtr cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    cpy_r_r0 = ((mypy___meet____type_object_overlap_is_overlapping_types_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "_type_object_overlap", "_type_object_overlap_is_overlapping_types_obj", "__mypyc_env__", 433, CPyStatic_meet___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__type_object_overlap;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "_type_object_overlap", "is_overlapping_types_env", "_type_object_overlap", -1, CPyStatic_meet___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r__type_object_overlap = cpy_r_r1;
    CPy_DECREF(cpy_r__type_object_overlap);
    cpy_r_r2.f0 = cpy_r_left;
    cpy_r_r2.f1 = cpy_r_right;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3206 = cpy_r_r2.f0;
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp3206);
    PyObject *__tmp3207 = cpy_r_r2.f1;
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp3207);
    cpy_r_r4 = CPyDef_types___get_proper_types(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "_type_object_overlap", 436, CPyStatic_meet___globals);
        goto CPyL38;
    }
    cpy_r_r5 = CPySequence_CheckUnpackCount(cpy_r_r4, 2);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/meet.py", "_type_object_overlap", 436, CPyStatic_meet___globals);
        goto CPyL39;
    }
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r4, 0);
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r4, 2);
    CPy_DECREF(cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_types___Type)))
        cpy_r_r9 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "_type_object_overlap", 436, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r7);
        goto CPyL40;
    }
    cpy_r_left = cpy_r_r9;
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_types___Type)))
        cpy_r_r10 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "_type_object_overlap", 436, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r8);
        goto CPyL41;
    }
    cpy_r_right = cpy_r_r10;
    cpy_r_r11 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL14;
    cpy_r_r15 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (!cpy_r_r18) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___TypeType))
        cpy_r_r19 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "_type_object_overlap", 439, CPyStatic_meet___globals, "mypy.types.TypeType", cpy_r_left);
        goto CPyL42;
    }
    cpy_r_r20 = ((mypy___types___TypeTypeObject *)cpy_r_r19)->_item;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_left);
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___CallableType))
        cpy_r_r21 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "_type_object_overlap", 439, CPyStatic_meet___globals, "mypy.types.CallableType", cpy_r_right);
        goto CPyL43;
    }
    cpy_r_r22 = ((mypy___types___CallableTypeObject *)cpy_r_r21)->_ret_type;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_right);
    cpy_r_r23 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__is_overlapping_types;
    if (unlikely(cpy_r_r23 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '_is_overlapping_types' of 'is_overlapping_types_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r23);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "_type_object_overlap", 439, CPyStatic_meet___globals);
        goto CPyL44;
    }
CPyL11: ;
    PyObject *cpy_r_r24[2] = {cpy_r_r20, cpy_r_r22};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 2, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "_type_object_overlap", 439, CPyStatic_meet___globals);
        goto CPyL44;
    }
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(!PyBool_Check(cpy_r_r26))) {
        CPy_TypeError("bool", cpy_r_r26); cpy_r_r27 = 2;
    } else
        cpy_r_r27 = cpy_r_r26 == Py_True;
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "_type_object_overlap", 439, CPyStatic_meet___globals);
        goto CPyL37;
    }
    return cpy_r_r27;
CPyL14: ;
    cpy_r_r28 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    if (!cpy_r_r31) goto CPyL45;
    cpy_r_r32 = (PyObject *)CPyType_types___Instance;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (!cpy_r_r35) goto CPyL45;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___TypeType))
        cpy_r_r36 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "_type_object_overlap", 442, CPyStatic_meet___globals, "mypy.types.TypeType", cpy_r_left);
        goto CPyL42;
    }
    cpy_r_r37 = ((mypy___types___TypeTypeObject *)cpy_r_r36)->_item;
    cpy_r_r38 = (PyObject *)CPyType_types___Instance;
    cpy_r_r39 = (CPyPtr)&((PyObject *)cpy_r_r37)->ob_type;
    cpy_r_r40 = *(PyObject * *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 == cpy_r_r38;
    if (!cpy_r_r41) goto CPyL46;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___TypeType))
        cpy_r_r42 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "_type_object_overlap", 443, CPyStatic_meet___globals, "mypy.types.TypeType", cpy_r_left);
        goto CPyL42;
    }
    cpy_r_r43 = ((mypy___types___TypeTypeObject *)cpy_r_r42)->_item;
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_types___Instance))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "_type_object_overlap", 443, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r43);
        goto CPyL42;
    }
    cpy_r_r45 = ((mypy___types___InstanceObject *)cpy_r_r44)->_type;
    cpy_r_r46 = ((mypy___nodes___TypeInfoObject *)cpy_r_r45)->_metaclass_type;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "_type_object_overlap", "TypeInfo", "metaclass_type", 443, CPyStatic_meet___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r46);
CPyL21: ;
    CPy_DECREF(cpy_r_left);
    cpy_r_left_meta = cpy_r_r46;
    cpy_r_r47 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r48 = cpy_r_left_meta != cpy_r_r47;
    if (!cpy_r_r48) goto CPyL47;
    if (likely(cpy_r_left_meta != Py_None))
        cpy_r_r49 = cpy_r_left_meta;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "_type_object_overlap", 445, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_left_meta);
        goto CPyL48;
    }
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___Instance))
        cpy_r_r50 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "_type_object_overlap", 445, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_right);
        goto CPyL49;
    }
    cpy_r_r51 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__is_overlapping_types;
    if (unlikely(cpy_r_r51 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '_is_overlapping_types' of 'is_overlapping_types_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r51);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "_type_object_overlap", 445, CPyStatic_meet___globals);
        goto CPyL50;
    }
CPyL25: ;
    PyObject *cpy_r_r52[2] = {cpy_r_r49, cpy_r_r50};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = _PyObject_Vectorcall(cpy_r_r51, cpy_r_r53, 2, 0);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "_type_object_overlap", 445, CPyStatic_meet___globals);
        goto CPyL50;
    }
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(!PyBool_Check(cpy_r_r54))) {
        CPy_TypeError("bool", cpy_r_r54); cpy_r_r55 = 2;
    } else
        cpy_r_r55 = cpy_r_r54 == Py_True;
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "_type_object_overlap", 445, CPyStatic_meet___globals);
        goto CPyL37;
    }
    return cpy_r_r55;
CPyL28: ;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___Instance))
        cpy_r_r56 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "_type_object_overlap", 447, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_right);
        goto CPyL51;
    }
    cpy_r_r57 = ((mypy___types___InstanceObject *)cpy_r_r56)->_type;
    CPy_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_right);
    cpy_r_r58 = CPyStatics[771]; /* 'builtins.type' */
    cpy_r_r59 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "_type_object_overlap", 447, CPyStatic_meet___globals);
        goto CPyL37;
    }
    return cpy_r_r59;
CPyL31: ;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___TypeType))
        cpy_r_r60 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "_type_object_overlap", 448, CPyStatic_meet___globals, "mypy.types.TypeType", cpy_r_left);
        goto CPyL52;
    }
    cpy_r_r61 = ((mypy___types___TypeTypeObject *)cpy_r_r60)->_item;
    cpy_r_r62 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r63 = (CPyPtr)&((PyObject *)cpy_r_r61)->ob_type;
    cpy_r_r64 = *(PyObject * *)cpy_r_r63;
    cpy_r_r65 = cpy_r_r64 == cpy_r_r62;
    CPy_DECREF(cpy_r_left);
    if (!cpy_r_r65) goto CPyL53;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___Instance))
        cpy_r_r66 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "_type_object_overlap", 449, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_right);
        goto CPyL51;
    }
    cpy_r_r67 = ((mypy___types___InstanceObject *)cpy_r_r66)->_type;
    CPy_INCREF(cpy_r_r67);
    CPy_DECREF(cpy_r_right);
    cpy_r_r68 = CPyStatics[771]; /* 'builtins.type' */
    cpy_r_r69 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r67, cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "_type_object_overlap", 449, CPyStatic_meet___globals);
        goto CPyL37;
    }
    return cpy_r_r69;
CPyL36: ;
    return 0;
CPyL37: ;
    cpy_r_r70 = 2;
    return cpy_r_r70;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL37;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL37;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r8);
    goto CPyL37;
CPyL41: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_r0);
    goto CPyL37;
CPyL42: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    goto CPyL37;
CPyL43: ;
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r20);
    goto CPyL37;
CPyL44: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r22);
    goto CPyL37;
CPyL45: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    goto CPyL36;
CPyL46: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL31;
CPyL47: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_left_meta);
    goto CPyL28;
CPyL48: ;
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    goto CPyL37;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r49);
    goto CPyL37;
CPyL50: ;
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r50);
    goto CPyL37;
CPyL51: ;
    CPy_DecRef(cpy_r_right);
    goto CPyL37;
CPyL52: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    goto CPyL37;
CPyL53: ;
    CPy_DECREF(cpy_r_right);
    goto CPyL36;
}

PyObject *CPyPy_meet____type_object_overlap_is_overlapping_types_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"left", "right", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_left;
    PyObject *obj_right;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_left, &obj_right)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
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
    char retval = CPyDef_meet____type_object_overlap_is_overlapping_types_obj_____call__(arg___mypyc_self__, arg_left, arg_right);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "_type_object_overlap", 433, CPyStatic_meet___globals);
    return NULL;
}

char CPyDef_meet___is_overlapping_types(PyObject *cpy_r_left, PyObject *cpy_r_right, char cpy_r_ignore_promotions, char cpy_r_prohibit_none_typevar_overlap, char cpy_r_ignore_uninhabited) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    tuple_T2OO cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    tuple_T3OOO cpy_r_r36;
    tuple_T3OOO cpy_r_illegal_types;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyTagged cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    tuple_T2OO cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyPtr cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyPtr cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
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
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_left_possible;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_right_possible;
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
    CPyPtr cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    CPyPtr cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    CPyPtr cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    CPyPtr cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject **cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject **cpy_r_r156;
    PyObject *cpy_r_r157;
    char cpy_r_r158;
    CPyPtr cpy_r_r159;
    int64_t cpy_r_r160;
    CPyTagged cpy_r_r161;
    char cpy_r_r162;
    CPyPtr cpy_r_r163;
    int64_t cpy_r_r164;
    CPyTagged cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    char cpy_r_r170;
    CPyTagged cpy_r_r171;
    CPyPtr cpy_r_r172;
    int64_t cpy_r_r173;
    CPyTagged cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_l;
    CPyTagged cpy_r_r178;
    CPyPtr cpy_r_r179;
    int64_t cpy_r_r180;
    CPyTagged cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r;
    PyObject *cpy_r_r185;
    PyObject **cpy_r_r187;
    PyObject *cpy_r_r188;
    char cpy_r_r189;
    CPyTagged cpy_r_r190;
    CPyTagged cpy_r_r191;
    PyObject *cpy_r_r192;
    char cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    CPyPtr cpy_r_r196;
    PyObject *cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    CPyPtr cpy_r_r200;
    PyObject *cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    char cpy_r_r206;
    PyObject *cpy_r_r207;
    CPyPtr cpy_r_r208;
    PyObject *cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    CPyPtr cpy_r_r212;
    PyObject *cpy_r_r213;
    char cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    char cpy_r_r217;
    char cpy_r_r218;
    char cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    char cpy_r_r226;
    PyObject *cpy_r_r227;
    CPyPtr cpy_r_r228;
    PyObject *cpy_r_r229;
    char cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    CPyPtr cpy_r_r234;
    PyObject *cpy_r_r235;
    char cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    char cpy_r_r240;
    PyObject *cpy_r_r241;
    char cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    char cpy_r_r245;
    char cpy_r_r246;
    char cpy_r_r247;
    PyObject *cpy_r_r248;
    CPyPtr cpy_r_r249;
    PyObject *cpy_r_r250;
    char cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    CPyPtr cpy_r_r255;
    PyObject *cpy_r_r256;
    char cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    CPyPtr cpy_r_r261;
    PyObject *cpy_r_r262;
    char cpy_r_r263;
    PyObject *cpy_r_r264;
    CPyPtr cpy_r_r265;
    PyObject *cpy_r_r266;
    char cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject **cpy_r_r274;
    PyObject *cpy_r_r275;
    char cpy_r_r276;
    PyObject *cpy_r_r277;
    char cpy_r_r278;
    char cpy_r_r279;
    PyObject *cpy_r_r280;
    CPyPtr cpy_r_r281;
    PyObject *cpy_r_r282;
    char cpy_r_r283;
    PyObject *cpy_r_r284;
    CPyPtr cpy_r_r285;
    PyObject *cpy_r_r286;
    char cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject **cpy_r_r292;
    PyObject *cpy_r_r293;
    char cpy_r_r294;
    char cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject **cpy_r_r300;
    PyObject *cpy_r_r301;
    char cpy_r_r302;
    PyObject *cpy_r_r303;
    CPyPtr cpy_r_r304;
    PyObject *cpy_r_r305;
    char cpy_r_r306;
    PyObject *cpy_r_r307;
    CPyPtr cpy_r_r308;
    PyObject *cpy_r_r309;
    char cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    char cpy_r_r315;
    char cpy_r_r316;
    char cpy_r_r317;
    char cpy_r_r318;
    PyObject *cpy_r_r319;
    CPyPtr cpy_r_r320;
    PyObject *cpy_r_r321;
    char cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    CPyPtr cpy_r_r326;
    PyObject *cpy_r_r327;
    char cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    CPyPtr cpy_r_r332;
    PyObject *cpy_r_r333;
    char cpy_r_r334;
    PyObject *cpy_r_r335;
    CPyPtr cpy_r_r336;
    PyObject *cpy_r_r337;
    char cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    char cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    CPyPtr cpy_r_r350;
    PyObject *cpy_r_r351;
    char cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    CPyPtr cpy_r_r356;
    PyObject *cpy_r_r357;
    char cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    CPyPtr cpy_r_r362;
    PyObject *cpy_r_r363;
    char cpy_r_r364;
    PyObject *cpy_r_r365;
    CPyPtr cpy_r_r366;
    PyObject *cpy_r_r367;
    char cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    char cpy_r_r371;
    char cpy_r_r372;
    PyObject *cpy_r_r373;
    char cpy_r_r374;
    char cpy_r_r375;
    char cpy_r_r376;
    PyObject *cpy_r_r377;
    char cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    char cpy_r_r381;
    char cpy_r_r382;
    PyObject *cpy_r_r383;
    char cpy_r_r384;
    char cpy_r_r385;
    char cpy_r_r386;
    PyObject *cpy_r_r387;
    char cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    int32_t cpy_r_r393;
    char cpy_r_r394;
    PyObject *cpy_r_r395;
    char cpy_r_r396;
    char cpy_r_r397;
    char cpy_r_r398;
    PyObject *cpy_r_r399;
    PyObject *cpy_r_r400;
    PyObject *cpy_r_r401;
    tuple_T4OOOO cpy_r_r402;
    char cpy_r_r403;
    PyObject *cpy_r_r404;
    int32_t cpy_r_r405;
    char cpy_r_r406;
    char cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    char cpy_r_r413;
    PyObject *cpy_r_r414;
    PyObject *cpy_r_r415;
    PyObject *cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    char cpy_r_r423;
    PyObject *cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject *cpy_r_r427;
    PyObject *cpy_r_r428;
    PyObject *cpy_r_r429;
    CPyPtr cpy_r_r430;
    int64_t cpy_r_r431;
    CPyTagged cpy_r_r432;
    PyObject *cpy_r_r433;
    PyObject *cpy_r_r434;
    CPyPtr cpy_r_r435;
    int64_t cpy_r_r436;
    CPyTagged cpy_r_r437;
    char cpy_r_r438;
    char cpy_r_r439;
    PyObject *cpy_r_r440;
    PyObject *cpy_r_r441;
    CPyTagged cpy_r_r442;
    PyObject *cpy_r_r443;
    PyObject *cpy_r_r444;
    CPyTagged cpy_r_r445;
    CPyPtr cpy_r_r446;
    int64_t cpy_r_r447;
    CPyTagged cpy_r_r448;
    char cpy_r_r449;
    CPyPtr cpy_r_r450;
    int64_t cpy_r_r451;
    CPyTagged cpy_r_r452;
    char cpy_r_r453;
    PyObject *cpy_r_r454;
    PyObject *cpy_r_r455;
    PyObject *cpy_r_left_arg;
    PyObject *cpy_r_r456;
    PyObject *cpy_r_r457;
    PyObject *cpy_r_right_arg;
    PyObject *cpy_r_r458;
    PyObject **cpy_r_r460;
    PyObject *cpy_r_r461;
    char cpy_r_r462;
    char cpy_r_r463;
    CPyTagged cpy_r_r464;
    CPyTagged cpy_r_r465;
    PyObject *cpy_r_r466;
    PyObject *cpy_r_r467;
    PyObject *cpy_r_r468;
    PyObject *cpy_r_r469;
    PyObject *cpy_r_r470;
    char cpy_r_r471;
    PyObject *cpy_r_r472;
    PyObject *cpy_r_r473;
    PyObject *cpy_r_r474;
    PyObject *cpy_r_r475;
    PyObject *cpy_r_r476;
    PyObject *cpy_r_r477;
    PyObject *cpy_r_r478;
    PyObject *cpy_r_r479;
    PyObject *cpy_r_r480;
    PyObject *cpy_r_r481;
    PyObject *cpy_r_r482;
    PyObject **cpy_r_r484;
    PyObject *cpy_r_r485;
    char cpy_r_r486;
    if (cpy_r_ignore_promotions != 2) goto CPyL2;
    cpy_r_ignore_promotions = 0;
CPyL2: ;
    if (cpy_r_prohibit_none_typevar_overlap != 2) goto CPyL4;
    cpy_r_prohibit_none_typevar_overlap = 0;
CPyL4: ;
    if (cpy_r_ignore_uninhabited != 2) goto CPyL6;
    cpy_r_ignore_uninhabited = 0;
CPyL6: ;
    cpy_r_r0 = CPyDef_meet___is_overlapping_types_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 254, CPyStatic_meet___globals);
        goto CPyL324;
    }
    ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_ignore_promotions = cpy_r_ignore_promotions;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 254, CPyStatic_meet___globals);
        goto CPyL325;
    }
    ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_prohibit_none_typevar_overlap = cpy_r_prohibit_none_typevar_overlap;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 254, CPyStatic_meet___globals);
        goto CPyL325;
    }
    ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_ignore_uninhabited = cpy_r_ignore_uninhabited;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 254, CPyStatic_meet___globals);
        goto CPyL325;
    }
    cpy_r_r4 = (PyObject *)CPyType_types___TypeGuardedType;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (cpy_r_r7) goto CPyL326;
    cpy_r_r8 = (PyObject *)CPyType_types___TypeGuardedType;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (cpy_r_r11) {
        goto CPyL326;
    } else
        goto CPyL13;
CPyL12: ;
    return 1;
CPyL13: ;
    cpy_r_r12.f0 = cpy_r_left;
    cpy_r_r12.f1 = cpy_r_right;
    CPy_INCREF(cpy_r_r12.f0);
    CPy_INCREF(cpy_r_r12.f1);
    cpy_r_r13 = PyTuple_New(2);
    if (unlikely(cpy_r_r13 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3208 = cpy_r_r12.f0;
    PyTuple_SET_ITEM(cpy_r_r13, 0, __tmp3208);
    PyObject *__tmp3209 = cpy_r_r12.f1;
    PyTuple_SET_ITEM(cpy_r_r13, 1, __tmp3209);
    cpy_r_r14 = CPyDef_types___get_proper_types(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 273, CPyStatic_meet___globals);
        goto CPyL325;
    }
    cpy_r_r15 = CPySequence_CheckUnpackCount(cpy_r_r14, 2);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 273, CPyStatic_meet___globals);
        goto CPyL327;
    }
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_r14, 0);
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_r14, 2);
    CPy_DECREF(cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_types___Type)))
        cpy_r_r19 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 273, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r17);
        goto CPyL328;
    }
    cpy_r_left = cpy_r_r19;
    if (likely(PyObject_TypeCheck(cpy_r_r18, CPyType_types___Type)))
        cpy_r_r20 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 273, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r18);
        goto CPyL329;
    }
    cpy_r_right = cpy_r_r20;
    cpy_r_r21 = CPyDef_meet____is_overlapping_types_is_overlapping_types_obj();
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 275, CPyStatic_meet___globals);
        goto CPyL330;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___meet____is_overlapping_types_is_overlapping_types_objObject *)cpy_r_r21)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___meet____is_overlapping_types_is_overlapping_types_objObject *)cpy_r_r21)->___mypyc_env__);
    }
    ((mypy___meet____is_overlapping_types_is_overlapping_types_objObject *)cpy_r_r21)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r22 = 1;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 275, CPyStatic_meet___globals);
        goto CPyL331;
    }
    if (((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__is_overlapping_types != NULL) {
        CPy_DECREF(((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__is_overlapping_types);
    }
    ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__is_overlapping_types = cpy_r_r21;
    cpy_r_r23 = 1;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 275, CPyStatic_meet___globals);
        goto CPyL330;
    }
    cpy_r_r24 = (PyObject *)CPyType_types___PartialType;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (cpy_r_r27) goto CPyL22;
    cpy_r_r28 = (PyObject *)CPyType_types___PartialType;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    if (!cpy_r_r31) goto CPyL25;
CPyL22: ;
    if (0) {
        goto CPyL25;
    } else
        goto CPyL332;
CPyL23: ;
    PyErr_SetString(PyExc_AssertionError, "Unexpectedly encountered partial type");
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 289, CPyStatic_meet___globals);
        goto CPyL324;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r33 = (PyObject *)CPyType_types___UnboundType;
    cpy_r_r34 = (PyObject *)CPyType_types___ErasedType;
    cpy_r_r35 = (PyObject *)CPyType_types___DeletedType;
    cpy_r_r36.f0 = cpy_r_r33;
    cpy_r_r36.f1 = cpy_r_r34;
    cpy_r_r36.f2 = cpy_r_r35;
    CPy_INCREF(cpy_r_r36.f0);
    CPy_INCREF(cpy_r_r36.f1);
    CPy_INCREF(cpy_r_r36.f2);
    cpy_r_illegal_types = cpy_r_r36;
    CPy_INCREF(cpy_r_illegal_types.f0);
    CPy_INCREF(cpy_r_illegal_types.f1);
    CPy_INCREF(cpy_r_illegal_types.f2);
    cpy_r_r37 = PyTuple_New(3);
    if (unlikely(cpy_r_r37 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3210 = cpy_r_illegal_types.f0;
    PyTuple_SET_ITEM(cpy_r_r37, 0, __tmp3210);
    PyObject *__tmp3211 = cpy_r_illegal_types.f1;
    PyTuple_SET_ITEM(cpy_r_r37, 1, __tmp3211);
    PyObject *__tmp3212 = cpy_r_illegal_types.f2;
    PyTuple_SET_ITEM(cpy_r_r37, 2, __tmp3212);
    cpy_r_r38 = PyObject_IsInstance(cpy_r_left, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 297, CPyStatic_meet___globals);
        goto CPyL333;
    }
    cpy_r_r40 = cpy_r_r38;
    if (cpy_r_r40) goto CPyL334;
    cpy_r_r41 = PyTuple_New(3);
    if (unlikely(cpy_r_r41 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3213 = cpy_r_illegal_types.f0;
    PyTuple_SET_ITEM(cpy_r_r41, 0, __tmp3213);
    PyObject *__tmp3214 = cpy_r_illegal_types.f1;
    PyTuple_SET_ITEM(cpy_r_r41, 1, __tmp3214);
    PyObject *__tmp3215 = cpy_r_illegal_types.f2;
    PyTuple_SET_ITEM(cpy_r_r41, 2, __tmp3215);
    cpy_r_r42 = PyObject_IsInstance(cpy_r_right, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 297, CPyStatic_meet___globals);
        goto CPyL330;
    }
    cpy_r_r44 = cpy_r_r42;
    if (cpy_r_r44) {
        goto CPyL335;
    } else
        goto CPyL30;
CPyL29: ;
    return 1;
CPyL30: ;
    cpy_r_r45 = CPyStatic_state___state;
    if (unlikely(cpy_r_r45 == NULL)) {
        goto CPyL336;
    } else
        goto CPyL33;
CPyL31: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 303, CPyStatic_meet___globals);
        goto CPyL324;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r47 = ((mypy___state___StrictOptionalStateObject *)cpy_r_r45)->_strict_optional;
    if (cpy_r_r47) goto CPyL49;
CPyL34: ;
    cpy_r_r48 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r49 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r50 = *(PyObject * *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 == cpy_r_r48;
    if (!cpy_r_r51) goto CPyL39;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___UnionType))
        cpy_r_r52 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 305, CPyStatic_meet___globals, "mypy.types.UnionType", cpy_r_left);
        goto CPyL337;
    }
    cpy_r_r53 = CPyDef_types___UnionType___relevant_items(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 305, CPyStatic_meet___globals);
        goto CPyL337;
    }
    cpy_r_r54 = CPY_INT_TAG;
    cpy_r_r55 = CPY_INT_TAG;
    cpy_r_r56 = CPyDef_types___UnionType___make_union(cpy_r_r53, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 305, CPyStatic_meet___globals);
        goto CPyL337;
    }
    cpy_r_left = cpy_r_r56;
CPyL39: ;
    cpy_r_r57 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r58 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r59 = *(PyObject * *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 == cpy_r_r57;
    if (!cpy_r_r60) goto CPyL44;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___UnionType))
        cpy_r_r61 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 307, CPyStatic_meet___globals, "mypy.types.UnionType", cpy_r_right);
        goto CPyL329;
    }
    cpy_r_r62 = CPyDef_types___UnionType___relevant_items(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 307, CPyStatic_meet___globals);
        goto CPyL329;
    }
    cpy_r_r63 = CPY_INT_TAG;
    cpy_r_r64 = CPY_INT_TAG;
    cpy_r_r65 = CPyDef_types___UnionType___make_union(cpy_r_r62, cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 307, CPyStatic_meet___globals);
        goto CPyL329;
    }
    cpy_r_right = cpy_r_r65;
CPyL44: ;
    cpy_r_r66.f0 = cpy_r_left;
    cpy_r_r66.f1 = cpy_r_right;
    CPy_INCREF(cpy_r_r66.f0);
    CPy_INCREF(cpy_r_r66.f1);
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    cpy_r_r67 = PyTuple_New(2);
    if (unlikely(cpy_r_r67 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3216 = cpy_r_r66.f0;
    PyTuple_SET_ITEM(cpy_r_r67, 0, __tmp3216);
    PyObject *__tmp3217 = cpy_r_r66.f1;
    PyTuple_SET_ITEM(cpy_r_r67, 1, __tmp3217);
    cpy_r_r68 = CPyDef_types___get_proper_types(cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 308, CPyStatic_meet___globals);
        goto CPyL325;
    }
    cpy_r_r69 = CPySequence_CheckUnpackCount(cpy_r_r68, 2);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 308, CPyStatic_meet___globals);
        goto CPyL338;
    }
    cpy_r_r71 = CPyList_GetItemUnsafe(cpy_r_r68, 0);
    cpy_r_r72 = CPyList_GetItemUnsafe(cpy_r_r68, 2);
    CPy_DECREF(cpy_r_r68);
    if (likely(PyObject_TypeCheck(cpy_r_r71, CPyType_types___Type)))
        cpy_r_r73 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 308, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r71);
        goto CPyL339;
    }
    cpy_r_left = cpy_r_r73;
    if (likely(PyObject_TypeCheck(cpy_r_r72, CPyType_types___Type)))
        cpy_r_r74 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 308, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r72);
        goto CPyL329;
    }
    cpy_r_right = cpy_r_r74;
CPyL49: ;
    cpy_r_r75 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r76 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r77 = *(PyObject * *)cpy_r_r76;
    cpy_r_r78 = cpy_r_r77 == cpy_r_r75;
    if (cpy_r_r78) goto CPyL340;
    cpy_r_r79 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r80 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r81 = *(PyObject * *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 == cpy_r_r79;
    if (cpy_r_r82) {
        goto CPyL340;
    } else
        goto CPyL52;
CPyL51: ;
    return 1;
CPyL52: ;
    CPy_INCREF(cpy_r_left);
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r83 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 325, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL330;
    }
    CPy_INCREF(cpy_r_right);
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r84 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 325, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL341;
    }
    cpy_r_r85 = CPyDef_meet___is_enum_overlapping_union(cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 325, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (cpy_r_r85) goto CPyL342;
    CPy_INCREF(cpy_r_right);
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r86 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 326, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL330;
    }
    CPy_INCREF(cpy_r_left);
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r87 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 326, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL343;
    }
    cpy_r_r88 = CPyDef_meet___is_enum_overlapping_union(cpy_r_r86, cpy_r_r87);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r88 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 326, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (cpy_r_r88) goto CPyL342;
    CPy_INCREF(cpy_r_left);
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r89 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 327, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL330;
    }
    CPy_INCREF(cpy_r_right);
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r90 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 327, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL344;
    }
    cpy_r_r91 = CPyDef_meet___is_literal_in_union(cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 327, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (cpy_r_r91) goto CPyL342;
    CPy_INCREF(cpy_r_right);
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r92 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 328, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL330;
    }
    CPy_INCREF(cpy_r_left);
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r93 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 328, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL345;
    }
    cpy_r_r94 = CPyDef_meet___is_literal_in_union(cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 328, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (cpy_r_r94) {
        goto CPyL342;
    } else
        goto CPyL69;
CPyL68: ;
    return 1;
CPyL69: ;
    CPy_INCREF(cpy_r_left);
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r95 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 333, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL330;
    }
    CPy_INCREF(cpy_r_right);
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r96 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 333, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL346;
    }
    cpy_r_r97 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_ignore_promotions;
    if (unlikely(cpy_r_r97 == 2)) {
        CPy_AttributeError("mypy/meet.py", "is_overlapping_types", "is_overlapping_types_env", "ignore_promotions", 333, CPyStatic_meet___globals);
        goto CPyL347;
    }
CPyL72: ;
    cpy_r_r98 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_ignore_uninhabited;
    if (unlikely(cpy_r_r98 == 2)) {
        CPy_AttributeError("mypy/meet.py", "is_overlapping_types", "is_overlapping_types_env", "ignore_uninhabited", 333, CPyStatic_meet___globals);
        goto CPyL347;
    }
CPyL73: ;
    cpy_r_r99 = NULL;
    cpy_r_r100 = 2;
    cpy_r_r101 = 2;
    cpy_r_r102 = CPyDef_subtypes___is_proper_subtype(cpy_r_r95, cpy_r_r96, cpy_r_r99, cpy_r_r97, cpy_r_r98, cpy_r_r100, cpy_r_r101);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r102 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 332, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (cpy_r_r102) goto CPyL348;
    CPy_INCREF(cpy_r_right);
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r103 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 335, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL330;
    }
    CPy_INCREF(cpy_r_left);
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r104 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 335, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL349;
    }
    cpy_r_r105 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_ignore_promotions;
    if (unlikely(cpy_r_r105 == 2)) {
        CPy_AttributeError("mypy/meet.py", "is_overlapping_types", "is_overlapping_types_env", "ignore_promotions", 335, CPyStatic_meet___globals);
        goto CPyL350;
    }
CPyL78: ;
    cpy_r_r106 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_ignore_uninhabited;
    if (unlikely(cpy_r_r106 == 2)) {
        CPy_AttributeError("mypy/meet.py", "is_overlapping_types", "is_overlapping_types_env", "ignore_uninhabited", 335, CPyStatic_meet___globals);
        goto CPyL350;
    }
CPyL79: ;
    cpy_r_r107 = NULL;
    cpy_r_r108 = 2;
    cpy_r_r109 = 2;
    cpy_r_r110 = CPyDef_subtypes___is_proper_subtype(cpy_r_r103, cpy_r_r104, cpy_r_r107, cpy_r_r105, cpy_r_r106, cpy_r_r108, cpy_r_r109);
    CPy_DECREF(cpy_r_r103);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r110 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 334, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (cpy_r_r110) {
        goto CPyL348;
    } else
        goto CPyL82;
CPyL81: ;
    return 1;
CPyL82: ;
    CPy_INCREF(cpy_r_left);
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r111 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 342, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL330;
    }
    cpy_r_r112 = CPyDef_meet___get_possible_variants(cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 342, CPyStatic_meet___globals);
        goto CPyL330;
    }
    cpy_r_left_possible = cpy_r_r112;
    CPy_INCREF(cpy_r_right);
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r113 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 343, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL351;
    }
    cpy_r_r114 = CPyDef_meet___get_possible_variants(cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 343, CPyStatic_meet___globals);
        goto CPyL351;
    }
    cpy_r_right_possible = cpy_r_r114;
    cpy_r_r115 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r116 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r117 = *(PyObject * *)cpy_r_r116;
    cpy_r_r118 = cpy_r_r117 == cpy_r_r115;
    if (!cpy_r_r118) goto CPyL88;
    cpy_r_r119 = cpy_r_r118;
    goto CPyL89;
CPyL88: ;
    cpy_r_r120 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r121 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r122 = *(PyObject * *)cpy_r_r121;
    cpy_r_r123 = cpy_r_r122 == cpy_r_r120;
    cpy_r_r119 = cpy_r_r123;
CPyL89: ;
    if (!cpy_r_r119) goto CPyL95;
    cpy_r_r124 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r125 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r126 = *(PyObject * *)cpy_r_r125;
    cpy_r_r127 = cpy_r_r126 == cpy_r_r124;
    if (!cpy_r_r127) goto CPyL92;
    cpy_r_r128 = cpy_r_r127;
    goto CPyL93;
CPyL92: ;
    cpy_r_r129 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r130 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r131 = *(PyObject * *)cpy_r_r130;
    cpy_r_r132 = cpy_r_r131 == cpy_r_r129;
    cpy_r_r128 = cpy_r_r132;
CPyL93: ;
    if (cpy_r_r128) {
        goto CPyL352;
    } else
        goto CPyL95;
CPyL94: ;
    return 1;
CPyL95: ;
    cpy_r_r133 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r134 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r135 = *(PyObject * *)cpy_r_r134;
    cpy_r_r136 = cpy_r_r135 == cpy_r_r133;
    if (cpy_r_r136) goto CPyL353;
    cpy_r_r137 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r138 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r139 = *(PyObject * *)cpy_r_r138;
    cpy_r_r140 = cpy_r_r139 == cpy_r_r137;
    if (cpy_r_r140) {
        goto CPyL353;
    } else
        goto CPyL98;
CPyL97: ;
    return 0;
CPyL98: ;
    cpy_r_r141 = CPyDef_meet___is_none_typevarlike_overlap_is_overlapping_types_obj();
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 370, CPyStatic_meet___globals);
        goto CPyL354;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject *)cpy_r_r141)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject *)cpy_r_r141)->___mypyc_env__);
    }
    ((mypy___meet___is_none_typevarlike_overlap_is_overlapping_types_objObject *)cpy_r_r141)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r142 = 1;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 370, CPyStatic_meet___globals);
        goto CPyL355;
    }
    if (((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_is_none_typevarlike_overlap != NULL) {
        CPy_DECREF(((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_is_none_typevarlike_overlap);
    }
    ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_is_none_typevarlike_overlap = cpy_r_r141;
    cpy_r_r143 = 1;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 370, CPyStatic_meet___globals);
        goto CPyL354;
    }
    cpy_r_r144 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_prohibit_none_typevar_overlap;
    if (unlikely(cpy_r_r144 == 2)) {
        CPy_AttributeError("mypy/meet.py", "is_overlapping_types", "is_overlapping_types_env", "prohibit_none_typevar_overlap", 374, CPyStatic_meet___globals);
        goto CPyL354;
    }
CPyL102: ;
    if (!cpy_r_r144) goto CPyL116;
CPyL103: ;
    CPy_INCREF(cpy_r_left);
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r145 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 375, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL354;
    }
    CPy_INCREF(cpy_r_right);
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r146 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 375, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL356;
    }
    cpy_r_r147 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_is_none_typevarlike_overlap;
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "is_overlapping_types", "is_overlapping_types_env", "is_none_typevarlike_overlap", 375, CPyStatic_meet___globals);
        goto CPyL357;
    }
    CPy_INCREF(cpy_r_r147);
CPyL106: ;
    PyObject *cpy_r_r148[2] = {cpy_r_r145, cpy_r_r146};
    cpy_r_r149 = (PyObject **)&cpy_r_r148;
    cpy_r_r150 = _PyObject_Vectorcall(cpy_r_r147, cpy_r_r149, 2, 0);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 375, CPyStatic_meet___globals);
        goto CPyL357;
    }
    CPy_DECREF(cpy_r_r145);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(!PyBool_Check(cpy_r_r150))) {
        CPy_TypeError("bool", cpy_r_r150); cpy_r_r151 = 2;
    } else
        cpy_r_r151 = cpy_r_r150 == Py_True;
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 375, CPyStatic_meet___globals);
        goto CPyL354;
    }
    if (cpy_r_r151) goto CPyL358;
    CPy_INCREF(cpy_r_right);
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r152 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 375, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL354;
    }
    CPy_INCREF(cpy_r_left);
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r153 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 375, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL359;
    }
    cpy_r_r154 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_is_none_typevarlike_overlap;
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "is_overlapping_types", "is_overlapping_types_env", "is_none_typevarlike_overlap", 375, CPyStatic_meet___globals);
        goto CPyL360;
    }
    CPy_INCREF(cpy_r_r154);
CPyL112: ;
    PyObject *cpy_r_r155[2] = {cpy_r_r152, cpy_r_r153};
    cpy_r_r156 = (PyObject **)&cpy_r_r155;
    cpy_r_r157 = _PyObject_Vectorcall(cpy_r_r154, cpy_r_r156, 2, 0);
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 375, CPyStatic_meet___globals);
        goto CPyL360;
    }
    CPy_DECREF(cpy_r_r152);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(!PyBool_Check(cpy_r_r157))) {
        CPy_TypeError("bool", cpy_r_r157); cpy_r_r158 = 2;
    } else
        cpy_r_r158 = cpy_r_r157 == Py_True;
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r158 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 375, CPyStatic_meet___globals);
        goto CPyL354;
    }
    if (cpy_r_r158) {
        goto CPyL358;
    } else
        goto CPyL116;
CPyL115: ;
    return 0;
CPyL116: ;
    cpy_r_r159 = (CPyPtr)&((PyVarObject *)cpy_r_left_possible)->ob_size;
    cpy_r_r160 = *(int64_t *)cpy_r_r159;
    cpy_r_r161 = cpy_r_r160 << 1;
    cpy_r_r162 = (Py_ssize_t)cpy_r_r161 > (Py_ssize_t)2;
    if (cpy_r_r162) goto CPyL361;
    cpy_r_r163 = (CPyPtr)&((PyVarObject *)cpy_r_right_possible)->ob_size;
    cpy_r_r164 = *(int64_t *)cpy_r_r163;
    cpy_r_r165 = cpy_r_r164 << 1;
    cpy_r_r166 = (Py_ssize_t)cpy_r_r165 > (Py_ssize_t)2;
    if (cpy_r_r166) goto CPyL361;
    cpy_r_r167 = (PyObject *)CPyType_types___TypeVarLikeType;
    cpy_r_r168 = CPy_TypeCheck(cpy_r_left, cpy_r_r167);
    if (cpy_r_r168) goto CPyL361;
    cpy_r_r169 = (PyObject *)CPyType_types___TypeVarLikeType;
    cpy_r_r170 = CPy_TypeCheck(cpy_r_right, cpy_r_r169);
    if (cpy_r_r170) {
        goto CPyL361;
    } else
        goto CPyL362;
CPyL120: ;
    cpy_r_r171 = 0;
CPyL121: ;
    cpy_r_r172 = (CPyPtr)&((PyVarObject *)cpy_r_left_possible)->ob_size;
    cpy_r_r173 = *(int64_t *)cpy_r_r172;
    cpy_r_r174 = cpy_r_r173 << 1;
    cpy_r_r175 = (Py_ssize_t)cpy_r_r171 < (Py_ssize_t)cpy_r_r174;
    if (!cpy_r_r175) goto CPyL363;
    cpy_r_r176 = CPyList_GetItemUnsafe(cpy_r_left_possible, cpy_r_r171);
    if (likely(PyObject_TypeCheck(cpy_r_r176, CPyType_types___Type)))
        cpy_r_r177 = cpy_r_r176;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 384, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r176);
        goto CPyL364;
    }
    cpy_r_l = cpy_r_r177;
    cpy_r_r178 = 0;
CPyL124: ;
    cpy_r_r179 = (CPyPtr)&((PyVarObject *)cpy_r_right_possible)->ob_size;
    cpy_r_r180 = *(int64_t *)cpy_r_r179;
    cpy_r_r181 = cpy_r_r180 << 1;
    cpy_r_r182 = (Py_ssize_t)cpy_r_r178 < (Py_ssize_t)cpy_r_r181;
    if (!cpy_r_r182) goto CPyL365;
    cpy_r_r183 = CPyList_GetItemUnsafe(cpy_r_right_possible, cpy_r_r178);
    if (likely(PyObject_TypeCheck(cpy_r_r183, CPyType_types___Type)))
        cpy_r_r184 = cpy_r_r183;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 385, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r183);
        goto CPyL366;
    }
    cpy_r_r = cpy_r_r184;
    cpy_r_r185 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__is_overlapping_types;
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "is_overlapping_types", "is_overlapping_types_env", "_is_overlapping_types", 386, CPyStatic_meet___globals);
        goto CPyL367;
    }
    CPy_INCREF(cpy_r_r185);
CPyL127: ;
    PyObject *cpy_r_r186[2] = {cpy_r_l, cpy_r_r};
    cpy_r_r187 = (PyObject **)&cpy_r_r186;
    cpy_r_r188 = _PyObject_Vectorcall(cpy_r_r185, cpy_r_r187, 2, 0);
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 386, CPyStatic_meet___globals);
        goto CPyL367;
    }
    CPy_DECREF(cpy_r_r);
    if (unlikely(!PyBool_Check(cpy_r_r188))) {
        CPy_TypeError("bool", cpy_r_r188); cpy_r_r189 = 2;
    } else
        cpy_r_r189 = cpy_r_r188 == Py_True;
    CPy_DECREF(cpy_r_r188);
    if (unlikely(cpy_r_r189 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 386, CPyStatic_meet___globals);
        goto CPyL366;
    }
    if (cpy_r_r189) {
        goto CPyL368;
    } else
        goto CPyL131;
CPyL130: ;
    return 1;
CPyL131: ;
    cpy_r_r190 = cpy_r_r178 + 2;
    cpy_r_r178 = cpy_r_r190;
    goto CPyL124;
CPyL132: ;
    cpy_r_r191 = cpy_r_r171 + 2;
    cpy_r_r171 = cpy_r_r191;
    goto CPyL121;
CPyL133: ;
    return 0;
CPyL134: ;
    cpy_r_r192 = CPyStatic_state___state;
    if (unlikely(cpy_r_r192 == NULL)) {
        goto CPyL369;
    } else
        goto CPyL137;
CPyL135: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r193 = 0;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 397, CPyStatic_meet___globals);
        goto CPyL324;
    }
    CPy_Unreachable();
CPyL137: ;
    cpy_r_r194 = ((mypy___state___StrictOptionalStateObject *)cpy_r_r192)->_strict_optional;
    if (!cpy_r_r194) goto CPyL142;
CPyL138: ;
    cpy_r_r195 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r196 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r197 = *(PyObject * *)cpy_r_r196;
    cpy_r_r198 = cpy_r_r197 == cpy_r_r195;
    cpy_r_r199 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r200 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r201 = *(PyObject * *)cpy_r_r200;
    cpy_r_r202 = cpy_r_r201 == cpy_r_r199;
    cpy_r_r203 = cpy_r_r198 ? Py_True : Py_False;
    cpy_r_r204 = cpy_r_r202 ? Py_True : Py_False;
    cpy_r_r205 = PyObject_RichCompare(cpy_r_r203, cpy_r_r204, 3);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 397, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (unlikely(!PyBool_Check(cpy_r_r205))) {
        CPy_TypeError("bool", cpy_r_r205); cpy_r_r206 = 2;
    } else
        cpy_r_r206 = cpy_r_r205 == Py_True;
    CPy_DECREF(cpy_r_r205);
    if (unlikely(cpy_r_r206 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 397, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (cpy_r_r206) {
        goto CPyL370;
    } else
        goto CPyL142;
CPyL141: ;
    return 0;
CPyL142: ;
    cpy_r_r207 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r208 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r209 = *(PyObject * *)cpy_r_r208;
    cpy_r_r210 = cpy_r_r209 == cpy_r_r207;
    if (!cpy_r_r210) goto CPyL149;
    cpy_r_r211 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r212 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r213 = *(PyObject * *)cpy_r_r212;
    cpy_r_r214 = cpy_r_r213 == cpy_r_r211;
    if (!cpy_r_r214) goto CPyL149;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___TypedDictType))
        cpy_r_r215 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 409, CPyStatic_meet___globals, "mypy.types.TypedDictType", cpy_r_left);
        goto CPyL337;
    }
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___TypedDictType))
        cpy_r_r216 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 409, CPyStatic_meet___globals, "mypy.types.TypedDictType", cpy_r_right);
        goto CPyL371;
    }
    cpy_r_r217 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_ignore_promotions;
    if (unlikely(cpy_r_r217 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'ignore_promotions' of 'is_overlapping_types_env' undefined");
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r217 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 409, CPyStatic_meet___globals);
        goto CPyL372;
    }
CPyL147: ;
    cpy_r_r218 = 2;
    cpy_r_r219 = CPyDef_meet___are_typed_dicts_overlapping(cpy_r_r215, cpy_r_r216, cpy_r_r217, cpy_r_r218);
    CPy_DECREF(cpy_r_r215);
    CPy_DECREF(cpy_r_r216);
    if (unlikely(cpy_r_r219 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 409, CPyStatic_meet___globals);
        goto CPyL324;
    }
    return cpy_r_r219;
CPyL149: ;
    CPy_INCREF(cpy_r_left);
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r220 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 410, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL330;
    }
    CPy_INCREF(cpy_r_right);
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r221 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 410, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL373;
    }
    cpy_r_r222 = CPyDef_meet___typed_dict_mapping_pair(cpy_r_r220, cpy_r_r221);
    CPy_DECREF(cpy_r_r220);
    CPy_DECREF(cpy_r_r221);
    if (unlikely(cpy_r_r222 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 410, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (!cpy_r_r222) goto CPyL158;
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r223 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 412, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL337;
    }
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r224 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 412, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL374;
    }
    cpy_r_r225 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__is_overlapping_types;
    if (unlikely(cpy_r_r225 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '_is_overlapping_types' of 'is_overlapping_types_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r225);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 412, CPyStatic_meet___globals);
        goto CPyL375;
    }
CPyL156: ;
    cpy_r_r226 = CPyDef_meet___typed_dict_mapping_overlap(cpy_r_r223, cpy_r_r224, cpy_r_r225);
    CPy_DECREF(cpy_r_r223);
    CPy_DECREF(cpy_r_r224);
    CPy_DECREF(cpy_r_r225);
    if (unlikely(cpy_r_r226 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 412, CPyStatic_meet___globals);
        goto CPyL324;
    }
    return cpy_r_r226;
CPyL158: ;
    cpy_r_r227 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r228 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r229 = *(PyObject * *)cpy_r_r228;
    cpy_r_r230 = cpy_r_r229 == cpy_r_r227;
    if (!cpy_r_r230) goto CPyL161;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___TypedDictType))
        cpy_r_r231 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 414, CPyStatic_meet___globals, "mypy.types.TypedDictType", cpy_r_left);
        goto CPyL330;
    }
    cpy_r_r232 = ((mypy___types___TypedDictTypeObject *)cpy_r_r231)->_fallback;
    CPy_INCREF(cpy_r_r232);
    CPy_DECREF(cpy_r_left);
    cpy_r_left = cpy_r_r232;
    goto CPyL164;
CPyL161: ;
    cpy_r_r233 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r234 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r235 = *(PyObject * *)cpy_r_r234;
    cpy_r_r236 = cpy_r_r235 == cpy_r_r233;
    if (!cpy_r_r236) goto CPyL164;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___TypedDictType))
        cpy_r_r237 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 416, CPyStatic_meet___globals, "mypy.types.TypedDictType", cpy_r_right);
        goto CPyL330;
    }
    cpy_r_r238 = ((mypy___types___TypedDictTypeObject *)cpy_r_r237)->_fallback;
    CPy_INCREF(cpy_r_r238);
    CPy_DECREF(cpy_r_right);
    cpy_r_right = cpy_r_r238;
CPyL164: ;
    CPy_INCREF(cpy_r_left);
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r239 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 418, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL330;
    }
    cpy_r_r240 = CPyDef_meet___is_tuple(cpy_r_r239);
    CPy_DECREF(cpy_r_r239);
    if (unlikely(cpy_r_r240 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 418, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (!cpy_r_r240) goto CPyL175;
    CPy_INCREF(cpy_r_right);
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r241 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 418, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL330;
    }
    cpy_r_r242 = CPyDef_meet___is_tuple(cpy_r_r241);
    CPy_DECREF(cpy_r_r241);
    if (unlikely(cpy_r_r242 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 418, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (!cpy_r_r242) goto CPyL175;
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r243 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 419, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL337;
    }
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r244 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 419, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL376;
    }
    cpy_r_r245 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_ignore_promotions;
    if (unlikely(cpy_r_r245 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'ignore_promotions' of 'is_overlapping_types_env' undefined");
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r245 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 419, CPyStatic_meet___globals);
        goto CPyL377;
    }
CPyL173: ;
    cpy_r_r246 = 2;
    cpy_r_r247 = CPyDef_meet___are_tuples_overlapping(cpy_r_r243, cpy_r_r244, cpy_r_r245, cpy_r_r246);
    CPy_DECREF(cpy_r_r243);
    CPy_DECREF(cpy_r_r244);
    if (unlikely(cpy_r_r247 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 419, CPyStatic_meet___globals);
        goto CPyL324;
    }
    return cpy_r_r247;
CPyL175: ;
    cpy_r_r248 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r249 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r250 = *(PyObject * *)cpy_r_r249;
    cpy_r_r251 = cpy_r_r250 == cpy_r_r248;
    if (!cpy_r_r251) goto CPyL179;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___TupleType))
        cpy_r_r252 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 421, CPyStatic_meet___globals, "mypy.types.TupleType", cpy_r_left);
        goto CPyL337;
    }
    cpy_r_r253 = CPyDef_typeops___tuple_fallback(cpy_r_r252);
    CPy_DECREF(cpy_r_r252);
    if (unlikely(cpy_r_r253 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 421, CPyStatic_meet___globals);
        goto CPyL337;
    }
    cpy_r_left = cpy_r_r253;
    goto CPyL183;
CPyL179: ;
    cpy_r_r254 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r255 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r256 = *(PyObject * *)cpy_r_r255;
    cpy_r_r257 = cpy_r_r256 == cpy_r_r254;
    if (!cpy_r_r257) goto CPyL183;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___TupleType))
        cpy_r_r258 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 423, CPyStatic_meet___globals, "mypy.types.TupleType", cpy_r_right);
        goto CPyL329;
    }
    cpy_r_r259 = CPyDef_typeops___tuple_fallback(cpy_r_r258);
    CPy_DECREF(cpy_r_r258);
    if (unlikely(cpy_r_r259 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 423, CPyStatic_meet___globals);
        goto CPyL329;
    }
    cpy_r_right = cpy_r_r259;
CPyL183: ;
    cpy_r_r260 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r261 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r262 = *(PyObject * *)cpy_r_r261;
    cpy_r_r263 = cpy_r_r262 == cpy_r_r260;
    if (!cpy_r_r263) goto CPyL191;
    cpy_r_r264 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r265 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r266 = *(PyObject * *)cpy_r_r265;
    cpy_r_r267 = cpy_r_r266 == cpy_r_r264;
    if (!cpy_r_r267) goto CPyL191;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___TypeType))
        cpy_r_r268 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 431, CPyStatic_meet___globals, "mypy.types.TypeType", cpy_r_left);
        goto CPyL330;
    }
    cpy_r_r269 = ((mypy___types___TypeTypeObject *)cpy_r_r268)->_item;
    CPy_INCREF(cpy_r_r269);
    CPy_DECREF(cpy_r_left);
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___TypeType))
        cpy_r_r270 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 431, CPyStatic_meet___globals, "mypy.types.TypeType", cpy_r_right);
        goto CPyL378;
    }
    cpy_r_r271 = ((mypy___types___TypeTypeObject *)cpy_r_r270)->_item;
    CPy_INCREF(cpy_r_r271);
    CPy_DECREF(cpy_r_right);
    cpy_r_r272 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__is_overlapping_types;
    if (unlikely(cpy_r_r272 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '_is_overlapping_types' of 'is_overlapping_types_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r272);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 431, CPyStatic_meet___globals);
        goto CPyL379;
    }
CPyL188: ;
    PyObject *cpy_r_r273[2] = {cpy_r_r269, cpy_r_r271};
    cpy_r_r274 = (PyObject **)&cpy_r_r273;
    cpy_r_r275 = _PyObject_Vectorcall(cpy_r_r272, cpy_r_r274, 2, 0);
    CPy_DECREF(cpy_r_r272);
    if (unlikely(cpy_r_r275 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 431, CPyStatic_meet___globals);
        goto CPyL379;
    }
    CPy_DECREF(cpy_r_r269);
    CPy_DECREF(cpy_r_r271);
    if (unlikely(!PyBool_Check(cpy_r_r275))) {
        CPy_TypeError("bool", cpy_r_r275); cpy_r_r276 = 2;
    } else
        cpy_r_r276 = cpy_r_r275 == Py_True;
    CPy_DECREF(cpy_r_r275);
    if (unlikely(cpy_r_r276 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 431, CPyStatic_meet___globals);
        goto CPyL324;
    }
    return cpy_r_r276;
CPyL191: ;
    cpy_r_r277 = CPyDef_meet____type_object_overlap_is_overlapping_types_obj();
    if (unlikely(cpy_r_r277 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 433, CPyStatic_meet___globals);
        goto CPyL330;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___meet____type_object_overlap_is_overlapping_types_objObject *)cpy_r_r277)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___meet____type_object_overlap_is_overlapping_types_objObject *)cpy_r_r277)->___mypyc_env__);
    }
    ((mypy___meet____type_object_overlap_is_overlapping_types_objObject *)cpy_r_r277)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r278 = 1;
    if (unlikely(!cpy_r_r278)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 433, CPyStatic_meet___globals);
        goto CPyL380;
    }
    if (((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__type_object_overlap != NULL) {
        CPy_DECREF(((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__type_object_overlap);
    }
    ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__type_object_overlap = cpy_r_r277;
    cpy_r_r279 = 1;
    if (unlikely(!cpy_r_r279)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 433, CPyStatic_meet___globals);
        goto CPyL330;
    }
    cpy_r_r280 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r281 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r282 = *(PyObject * *)cpy_r_r281;
    cpy_r_r283 = cpy_r_r282 == cpy_r_r280;
    if (cpy_r_r283) goto CPyL196;
    cpy_r_r284 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r285 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r286 = *(PyObject * *)cpy_r_r285;
    cpy_r_r287 = cpy_r_r286 == cpy_r_r284;
    if (!cpy_r_r287) goto CPyL210;
CPyL196: ;
    CPy_INCREF(cpy_r_left);
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r288 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 454, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL330;
    }
    CPy_INCREF(cpy_r_right);
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r289 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 454, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL381;
    }
    cpy_r_r290 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__type_object_overlap;
    if (unlikely(cpy_r_r290 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "is_overlapping_types", "is_overlapping_types_env", "_type_object_overlap", 454, CPyStatic_meet___globals);
        goto CPyL382;
    }
    CPy_INCREF(cpy_r_r290);
CPyL199: ;
    PyObject *cpy_r_r291[2] = {cpy_r_r288, cpy_r_r289};
    cpy_r_r292 = (PyObject **)&cpy_r_r291;
    cpy_r_r293 = _PyObject_Vectorcall(cpy_r_r290, cpy_r_r292, 2, 0);
    CPy_DECREF(cpy_r_r290);
    if (unlikely(cpy_r_r293 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 454, CPyStatic_meet___globals);
        goto CPyL382;
    }
    CPy_DECREF(cpy_r_r288);
    CPy_DECREF(cpy_r_r289);
    if (unlikely(!PyBool_Check(cpy_r_r293))) {
        CPy_TypeError("bool", cpy_r_r293); cpy_r_r294 = 2;
    } else
        cpy_r_r294 = cpy_r_r293 == Py_True;
    CPy_DECREF(cpy_r_r293);
    if (unlikely(cpy_r_r294 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 454, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (cpy_r_r294) {
        goto CPyL383;
    } else
        goto CPyL203;
CPyL202: ;
    cpy_r_r295 = cpy_r_r294;
    goto CPyL209;
CPyL203: ;
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r296 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 454, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL329;
    }
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r297 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 454, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL384;
    }
    cpy_r_r298 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__type_object_overlap;
    if (unlikely(cpy_r_r298 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '_type_object_overlap' of 'is_overlapping_types_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r298);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r298 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 454, CPyStatic_meet___globals);
        goto CPyL385;
    }
CPyL206: ;
    PyObject *cpy_r_r299[2] = {cpy_r_r296, cpy_r_r297};
    cpy_r_r300 = (PyObject **)&cpy_r_r299;
    cpy_r_r301 = _PyObject_Vectorcall(cpy_r_r298, cpy_r_r300, 2, 0);
    CPy_DECREF(cpy_r_r298);
    if (unlikely(cpy_r_r301 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 454, CPyStatic_meet___globals);
        goto CPyL385;
    }
    CPy_DECREF(cpy_r_r296);
    CPy_DECREF(cpy_r_r297);
    if (unlikely(!PyBool_Check(cpy_r_r301))) {
        CPy_TypeError("bool", cpy_r_r301); cpy_r_r302 = 2;
    } else
        cpy_r_r302 = cpy_r_r301 == Py_True;
    CPy_DECREF(cpy_r_r301);
    if (unlikely(cpy_r_r302 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 454, CPyStatic_meet___globals);
        goto CPyL324;
    }
    cpy_r_r295 = cpy_r_r302;
CPyL209: ;
    return cpy_r_r295;
CPyL210: ;
    cpy_r_r303 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r304 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r305 = *(PyObject * *)cpy_r_r304;
    cpy_r_r306 = cpy_r_r305 == cpy_r_r303;
    if (!cpy_r_r306) goto CPyL217;
    cpy_r_r307 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r308 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r309 = *(PyObject * *)cpy_r_r308;
    cpy_r_r310 = cpy_r_r309 == cpy_r_r307;
    if (!cpy_r_r310) goto CPyL217;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___CallableType))
        cpy_r_r311 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 458, CPyStatic_meet___globals, "mypy.types.CallableType", cpy_r_left);
        goto CPyL337;
    }
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___CallableType))
        cpy_r_r312 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 459, CPyStatic_meet___globals, "mypy.types.CallableType", cpy_r_right);
        goto CPyL386;
    }
    cpy_r_r313 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__is_overlapping_types;
    if (unlikely(cpy_r_r313 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '_is_overlapping_types' of 'is_overlapping_types_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r313);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r313 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 460, CPyStatic_meet___globals);
        goto CPyL387;
    }
CPyL215: ;
    cpy_r_r314 = NULL;
    cpy_r_r315 = 2;
    cpy_r_r316 = 2;
    cpy_r_r317 = 2;
    cpy_r_r318 = CPyDef_subtypes___is_callable_compatible(cpy_r_r311, cpy_r_r312, cpy_r_r313, cpy_r_r314, cpy_r_r315, 1, cpy_r_r316, 1, cpy_r_r317);
    CPy_DECREF(cpy_r_r311);
    CPy_DECREF(cpy_r_r312);
    CPy_DECREF(cpy_r_r313);
    if (unlikely(cpy_r_r318 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 457, CPyStatic_meet___globals);
        goto CPyL324;
    }
    return cpy_r_r318;
CPyL217: ;
    cpy_r_r319 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r320 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r321 = *(PyObject * *)cpy_r_r320;
    cpy_r_r322 = cpy_r_r321 == cpy_r_r319;
    if (!cpy_r_r322) goto CPyL220;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___CallableType))
        cpy_r_r323 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 465, CPyStatic_meet___globals, "mypy.types.CallableType", cpy_r_left);
        goto CPyL330;
    }
    cpy_r_r324 = ((mypy___types___CallableTypeObject *)cpy_r_r323)->_fallback;
    CPy_INCREF(cpy_r_r324);
    CPy_DECREF(cpy_r_left);
    cpy_r_left = cpy_r_r324;
    goto CPyL223;
CPyL220: ;
    cpy_r_r325 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r326 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r327 = *(PyObject * *)cpy_r_r326;
    cpy_r_r328 = cpy_r_r327 == cpy_r_r325;
    if (!cpy_r_r328) goto CPyL223;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___CallableType))
        cpy_r_r329 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 467, CPyStatic_meet___globals, "mypy.types.CallableType", cpy_r_right);
        goto CPyL330;
    }
    cpy_r_r330 = ((mypy___types___CallableTypeObject *)cpy_r_r329)->_fallback;
    CPy_INCREF(cpy_r_r330);
    CPy_DECREF(cpy_r_right);
    cpy_r_right = cpy_r_r330;
CPyL223: ;
    cpy_r_r331 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r332 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r333 = *(PyObject * *)cpy_r_r332;
    cpy_r_r334 = cpy_r_r333 == cpy_r_r331;
    if (!cpy_r_r334) goto CPyL234;
    cpy_r_r335 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r336 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r337 = *(PyObject * *)cpy_r_r336;
    cpy_r_r338 = cpy_r_r337 == cpy_r_r335;
    if (!cpy_r_r338) goto CPyL234;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___LiteralType))
        cpy_r_r339 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 470, CPyStatic_meet___globals, "mypy.types.LiteralType", cpy_r_left);
        goto CPyL330;
    }
    cpy_r_r340 = ((mypy___types___LiteralTypeObject *)cpy_r_r339)->_value;
    CPy_INCREF(cpy_r_r340);
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___LiteralType))
        cpy_r_r341 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 470, CPyStatic_meet___globals, "mypy.types.LiteralType", cpy_r_right);
        goto CPyL388;
    }
    cpy_r_r342 = ((mypy___types___LiteralTypeObject *)cpy_r_r341)->_value;
    CPy_INCREF(cpy_r_r342);
    cpy_r_r343 = PyObject_RichCompare(cpy_r_r340, cpy_r_r342, 2);
    CPy_DECREF(cpy_r_r340);
    CPy_DECREF(cpy_r_r342);
    if (unlikely(cpy_r_r343 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 470, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (unlikely(!PyBool_Check(cpy_r_r343))) {
        CPy_TypeError("bool", cpy_r_r343); cpy_r_r344 = 2;
    } else
        cpy_r_r344 = cpy_r_r343 == Py_True;
    CPy_DECREF(cpy_r_r343);
    if (unlikely(cpy_r_r344 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 470, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (!cpy_r_r344) goto CPyL389;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___LiteralType))
        cpy_r_r345 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 473, CPyStatic_meet___globals, "mypy.types.LiteralType", cpy_r_left);
        goto CPyL330;
    }
    cpy_r_r346 = ((mypy___types___LiteralTypeObject *)cpy_r_r345)->_fallback;
    CPy_INCREF(cpy_r_r346);
    CPy_DECREF(cpy_r_left);
    cpy_r_left = cpy_r_r346;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___LiteralType))
        cpy_r_r347 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 474, CPyStatic_meet___globals, "mypy.types.LiteralType", cpy_r_right);
        goto CPyL330;
    }
    cpy_r_r348 = ((mypy___types___LiteralTypeObject *)cpy_r_r347)->_fallback;
    CPy_INCREF(cpy_r_r348);
    CPy_DECREF(cpy_r_right);
    cpy_r_right = cpy_r_r348;
    goto CPyL240;
CPyL233: ;
    return 0;
CPyL234: ;
    cpy_r_r349 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r350 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r351 = *(PyObject * *)cpy_r_r350;
    cpy_r_r352 = cpy_r_r351 == cpy_r_r349;
    if (!cpy_r_r352) goto CPyL237;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___LiteralType))
        cpy_r_r353 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 478, CPyStatic_meet___globals, "mypy.types.LiteralType", cpy_r_left);
        goto CPyL330;
    }
    cpy_r_r354 = ((mypy___types___LiteralTypeObject *)cpy_r_r353)->_fallback;
    CPy_INCREF(cpy_r_r354);
    CPy_DECREF(cpy_r_left);
    cpy_r_left = cpy_r_r354;
    goto CPyL240;
CPyL237: ;
    cpy_r_r355 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r356 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r357 = *(PyObject * *)cpy_r_r356;
    cpy_r_r358 = cpy_r_r357 == cpy_r_r355;
    if (!cpy_r_r358) goto CPyL240;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___LiteralType))
        cpy_r_r359 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 480, CPyStatic_meet___globals, "mypy.types.LiteralType", cpy_r_right);
        goto CPyL330;
    }
    cpy_r_r360 = ((mypy___types___LiteralTypeObject *)cpy_r_r359)->_fallback;
    CPy_INCREF(cpy_r_r360);
    CPy_DECREF(cpy_r_right);
    cpy_r_right = cpy_r_r360;
CPyL240: ;
    cpy_r_r361 = (PyObject *)CPyType_types___Instance;
    cpy_r_r362 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r363 = *(PyObject * *)cpy_r_r362;
    cpy_r_r364 = cpy_r_r363 == cpy_r_r361;
    if (!cpy_r_r364) goto CPyL390;
    cpy_r_r365 = (PyObject *)CPyType_types___Instance;
    cpy_r_r366 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r367 = *(PyObject * *)cpy_r_r366;
    cpy_r_r368 = cpy_r_r367 == cpy_r_r365;
    if (!cpy_r_r368) goto CPyL390;
    CPy_INCREF(cpy_r_left);
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___Instance))
        cpy_r_r369 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 488, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_left);
        goto CPyL330;
    }
    CPy_INCREF(cpy_r_right);
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___Instance))
        cpy_r_r370 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 488, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_right);
        goto CPyL391;
    }
    cpy_r_r371 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_ignore_promotions;
    if (unlikely(cpy_r_r371 == 2)) {
        CPy_AttributeError("mypy/meet.py", "is_overlapping_types", "is_overlapping_types_env", "ignore_promotions", 488, CPyStatic_meet___globals);
        goto CPyL392;
    }
CPyL245: ;
    cpy_r_r372 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_ignore_uninhabited;
    if (unlikely(cpy_r_r372 == 2)) {
        CPy_AttributeError("mypy/meet.py", "is_overlapping_types", "is_overlapping_types_env", "ignore_uninhabited", 488, CPyStatic_meet___globals);
        goto CPyL392;
    }
CPyL246: ;
    cpy_r_r373 = NULL;
    cpy_r_r374 = 2;
    cpy_r_r375 = 2;
    cpy_r_r376 = 2;
    cpy_r_r377 = NULL;
    cpy_r_r378 = CPyDef_subtypes___is_subtype(cpy_r_r369, cpy_r_r370, cpy_r_r373, cpy_r_r374, cpy_r_r375, cpy_r_r376, cpy_r_r371, cpy_r_r372, cpy_r_r377);
    CPy_DECREF(cpy_r_r369);
    CPy_DECREF(cpy_r_r370);
    if (unlikely(cpy_r_r378 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 487, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (cpy_r_r378) goto CPyL393;
    CPy_INCREF(cpy_r_right);
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___Instance))
        cpy_r_r379 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 490, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_right);
        goto CPyL330;
    }
    CPy_INCREF(cpy_r_left);
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___Instance))
        cpy_r_r380 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 490, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_left);
        goto CPyL394;
    }
    cpy_r_r381 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_ignore_promotions;
    if (unlikely(cpy_r_r381 == 2)) {
        CPy_AttributeError("mypy/meet.py", "is_overlapping_types", "is_overlapping_types_env", "ignore_promotions", 490, CPyStatic_meet___globals);
        goto CPyL395;
    }
CPyL251: ;
    cpy_r_r382 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->_ignore_uninhabited;
    if (unlikely(cpy_r_r382 == 2)) {
        CPy_AttributeError("mypy/meet.py", "is_overlapping_types", "is_overlapping_types_env", "ignore_uninhabited", 490, CPyStatic_meet___globals);
        goto CPyL395;
    }
CPyL252: ;
    cpy_r_r383 = NULL;
    cpy_r_r384 = 2;
    cpy_r_r385 = 2;
    cpy_r_r386 = 2;
    cpy_r_r387 = NULL;
    cpy_r_r388 = CPyDef_subtypes___is_subtype(cpy_r_r379, cpy_r_r380, cpy_r_r383, cpy_r_r384, cpy_r_r385, cpy_r_r386, cpy_r_r381, cpy_r_r382, cpy_r_r387);
    CPy_DECREF(cpy_r_r379);
    CPy_DECREF(cpy_r_r380);
    if (unlikely(cpy_r_r388 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 489, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (cpy_r_r388) {
        goto CPyL393;
    } else
        goto CPyL255;
CPyL254: ;
    return 1;
CPyL255: ;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___Instance))
        cpy_r_r389 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 494, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_right);
        goto CPyL330;
    }
    cpy_r_r390 = ((mypy___types___InstanceObject *)cpy_r_r389)->_type;
    CPy_INCREF(cpy_r_r390);
    cpy_r_r391 = CPY_GET_ATTR(cpy_r_r390, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r390);
    if (unlikely(cpy_r_r391 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 494, CPyStatic_meet___globals);
        goto CPyL330;
    }
CPyL257: ;
    cpy_r_r392 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r393 = PyUnicode_Compare(cpy_r_r391, cpy_r_r392);
    CPy_DECREF(cpy_r_r391);
    cpy_r_r394 = cpy_r_r393 == -1;
    if (!cpy_r_r394) goto CPyL260;
    cpy_r_r395 = PyErr_Occurred();
    cpy_r_r396 = cpy_r_r395 != NULL;
    if (!cpy_r_r396) goto CPyL260;
    cpy_r_r397 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r397)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 494, CPyStatic_meet___globals);
        goto CPyL330;
    }
CPyL260: ;
    cpy_r_r398 = cpy_r_r393 == 0;
    if (!cpy_r_r398) goto CPyL269;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___Instance))
        cpy_r_r399 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 494, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_left);
        goto CPyL330;
    }
    cpy_r_r400 = ((mypy___types___InstanceObject *)cpy_r_r399)->_type;
    CPy_INCREF(cpy_r_r400);
    cpy_r_r401 = CPY_GET_ATTR(cpy_r_r400, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r400);
    if (unlikely(cpy_r_r401 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 494, CPyStatic_meet___globals);
        goto CPyL330;
    }
CPyL263: ;
    cpy_r_r402 = CPyStatic_types___MYPYC_NATIVE_INT_NAMES;
    if (unlikely(cpy_r_r402.f0 == NULL)) {
        goto CPyL396;
    } else
        goto CPyL266;
CPyL264: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"MYPYC_NATIVE_INT_NAMES\" was not set");
    cpy_r_r403 = 0;
    if (unlikely(!cpy_r_r403)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 494, CPyStatic_meet___globals);
        goto CPyL324;
    }
    CPy_Unreachable();
CPyL266: ;
    CPy_INCREF(cpy_r_r402.f0);
    CPy_INCREF(cpy_r_r402.f1);
    CPy_INCREF(cpy_r_r402.f2);
    CPy_INCREF(cpy_r_r402.f3);
    cpy_r_r404 = PyTuple_New(4);
    if (unlikely(cpy_r_r404 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3218 = cpy_r_r402.f0;
    PyTuple_SET_ITEM(cpy_r_r404, 0, __tmp3218);
    PyObject *__tmp3219 = cpy_r_r402.f1;
    PyTuple_SET_ITEM(cpy_r_r404, 1, __tmp3219);
    PyObject *__tmp3220 = cpy_r_r402.f2;
    PyTuple_SET_ITEM(cpy_r_r404, 2, __tmp3220);
    PyObject *__tmp3221 = cpy_r_r402.f3;
    PyTuple_SET_ITEM(cpy_r_r404, 3, __tmp3221);
    cpy_r_r405 = PySequence_Contains(cpy_r_r404, cpy_r_r401);
    CPy_DECREF(cpy_r_r404);
    CPy_DECREF(cpy_r_r401);
    cpy_r_r406 = cpy_r_r405 >= 0;
    if (unlikely(!cpy_r_r406)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 494, CPyStatic_meet___globals);
        goto CPyL330;
    }
    cpy_r_r407 = cpy_r_r405;
    if (cpy_r_r407) {
        goto CPyL397;
    } else
        goto CPyL269;
CPyL268: ;
    return 1;
CPyL269: ;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___Instance))
        cpy_r_r408 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 498, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_left);
        goto CPyL330;
    }
    cpy_r_r409 = ((mypy___types___InstanceObject *)cpy_r_r408)->_type;
    CPy_INCREF(cpy_r_r409);
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___Instance))
        cpy_r_r410 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 498, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_right);
        goto CPyL398;
    }
    cpy_r_r411 = ((mypy___types___InstanceObject *)cpy_r_r410)->_type;
    CPy_INCREF(cpy_r_r411);
    cpy_r_r412 = CPY_GET_ATTR(cpy_r_r411, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r411);
    if (unlikely(cpy_r_r412 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 498, CPyStatic_meet___globals);
        goto CPyL398;
    }
CPyL272: ;
    cpy_r_r413 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r409, cpy_r_r412);
    CPy_DECREF(cpy_r_r412);
    CPy_DECREF(cpy_r_r409);
    if (unlikely(cpy_r_r413 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 498, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (!cpy_r_r413) goto CPyL278;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___Instance))
        cpy_r_r414 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 499, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_left);
        goto CPyL337;
    }
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___Instance))
        cpy_r_r415 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 499, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_right);
        goto CPyL399;
    }
    cpy_r_r416 = ((mypy___types___InstanceObject *)cpy_r_r415)->_type;
    CPy_INCREF(cpy_r_r416);
    cpy_r_r417 = CPyDef_maptype___map_instance_to_supertype(cpy_r_r414, cpy_r_r416);
    CPy_DECREF(cpy_r_r414);
    CPy_DECREF(cpy_r_r416);
    if (unlikely(cpy_r_r417 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 499, CPyStatic_meet___globals);
        goto CPyL337;
    }
    cpy_r_left = cpy_r_r417;
    goto CPyL288;
CPyL278: ;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___Instance))
        cpy_r_r418 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 500, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_right);
        goto CPyL330;
    }
    cpy_r_r419 = ((mypy___types___InstanceObject *)cpy_r_r418)->_type;
    CPy_INCREF(cpy_r_r419);
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___Instance))
        cpy_r_r420 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 500, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_left);
        goto CPyL400;
    }
    cpy_r_r421 = ((mypy___types___InstanceObject *)cpy_r_r420)->_type;
    CPy_INCREF(cpy_r_r421);
    cpy_r_r422 = CPY_GET_ATTR(cpy_r_r421, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r421);
    if (unlikely(cpy_r_r422 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 500, CPyStatic_meet___globals);
        goto CPyL400;
    }
CPyL281: ;
    cpy_r_r423 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r419, cpy_r_r422);
    CPy_DECREF(cpy_r_r422);
    CPy_DECREF(cpy_r_r419);
    if (unlikely(cpy_r_r423 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 500, CPyStatic_meet___globals);
        goto CPyL330;
    }
    if (!cpy_r_r423) goto CPyL401;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___Instance))
        cpy_r_r424 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 501, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_right);
        goto CPyL329;
    }
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___Instance))
        cpy_r_r425 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 501, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_left);
        goto CPyL402;
    }
    cpy_r_r426 = ((mypy___types___InstanceObject *)cpy_r_r425)->_type;
    CPy_INCREF(cpy_r_r426);
    cpy_r_r427 = CPyDef_maptype___map_instance_to_supertype(cpy_r_r424, cpy_r_r426);
    CPy_DECREF(cpy_r_r424);
    CPy_DECREF(cpy_r_r426);
    if (unlikely(cpy_r_r427 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 501, CPyStatic_meet___globals);
        goto CPyL329;
    }
    cpy_r_right = cpy_r_r427;
    goto CPyL288;
CPyL287: ;
    return 0;
CPyL288: ;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___Instance))
        cpy_r_r428 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 505, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_left);
        goto CPyL330;
    }
    cpy_r_r429 = ((mypy___types___InstanceObject *)cpy_r_r428)->_args;
    CPy_INCREF(cpy_r_r429);
    cpy_r_r430 = (CPyPtr)&((PyVarObject *)cpy_r_r429)->ob_size;
    cpy_r_r431 = *(int64_t *)cpy_r_r430;
    CPy_DECREF(cpy_r_r429);
    cpy_r_r432 = cpy_r_r431 << 1;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___Instance))
        cpy_r_r433 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 505, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_right);
        goto CPyL330;
    }
    cpy_r_r434 = ((mypy___types___InstanceObject *)cpy_r_r433)->_args;
    CPy_INCREF(cpy_r_r434);
    cpy_r_r435 = (CPyPtr)&((PyVarObject *)cpy_r_r434)->ob_size;
    cpy_r_r436 = *(int64_t *)cpy_r_r435;
    CPy_DECREF(cpy_r_r434);
    cpy_r_r437 = cpy_r_r436 << 1;
    cpy_r_r438 = cpy_r_r432 == cpy_r_r437;
    if (!cpy_r_r438) goto CPyL403;
    cpy_r_r439 = 1;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___Instance))
        cpy_r_r440 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 522, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_left);
        goto CPyL330;
    }
    cpy_r_r441 = ((mypy___types___InstanceObject *)cpy_r_r440)->_args;
    CPy_INCREF(cpy_r_r441);
    CPy_DECREF(cpy_r_left);
    cpy_r_r442 = 0;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___Instance))
        cpy_r_r443 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 522, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_right);
        goto CPyL404;
    }
    cpy_r_r444 = ((mypy___types___InstanceObject *)cpy_r_r443)->_args;
    CPy_INCREF(cpy_r_r444);
    CPy_DECREF(cpy_r_right);
    cpy_r_r445 = 0;
CPyL294: ;
    cpy_r_r446 = (CPyPtr)&((PyVarObject *)cpy_r_r441)->ob_size;
    cpy_r_r447 = *(int64_t *)cpy_r_r446;
    cpy_r_r448 = cpy_r_r447 << 1;
    cpy_r_r449 = (Py_ssize_t)cpy_r_r442 < (Py_ssize_t)cpy_r_r448;
    if (!cpy_r_r449) goto CPyL405;
    cpy_r_r450 = (CPyPtr)&((PyVarObject *)cpy_r_r444)->ob_size;
    cpy_r_r451 = *(int64_t *)cpy_r_r450;
    cpy_r_r452 = cpy_r_r451 << 1;
    cpy_r_r453 = (Py_ssize_t)cpy_r_r445 < (Py_ssize_t)cpy_r_r452;
    if (!cpy_r_r453) goto CPyL405;
    cpy_r_r454 = CPySequenceTuple_GetItem(cpy_r_r441, cpy_r_r442);
    if (unlikely(cpy_r_r454 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 520, CPyStatic_meet___globals);
        goto CPyL406;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r454, CPyType_types___Type)))
        cpy_r_r455 = cpy_r_r454;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 520, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r454);
        goto CPyL406;
    }
    cpy_r_left_arg = cpy_r_r455;
    cpy_r_r456 = CPySequenceTuple_GetItem(cpy_r_r444, cpy_r_r445);
    if (unlikely(cpy_r_r456 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 520, CPyStatic_meet___globals);
        goto CPyL407;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r456, CPyType_types___Type)))
        cpy_r_r457 = cpy_r_r456;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 520, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r456);
        goto CPyL407;
    }
    cpy_r_right_arg = cpy_r_r457;
    cpy_r_r458 = ((mypy___meet___is_overlapping_types_envObject *)cpy_r_r0)->__is_overlapping_types;
    if (unlikely(cpy_r_r458 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "is_overlapping_types", "is_overlapping_types_env", "_is_overlapping_types", 521, CPyStatic_meet___globals);
        goto CPyL408;
    }
    CPy_INCREF(cpy_r_r458);
CPyL301: ;
    PyObject *cpy_r_r459[2] = {cpy_r_left_arg, cpy_r_right_arg};
    cpy_r_r460 = (PyObject **)&cpy_r_r459;
    cpy_r_r461 = _PyObject_Vectorcall(cpy_r_r458, cpy_r_r460, 2, 0);
    CPy_DECREF(cpy_r_r458);
    if (unlikely(cpy_r_r461 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 521, CPyStatic_meet___globals);
        goto CPyL408;
    }
    CPy_DECREF(cpy_r_left_arg);
    CPy_DECREF(cpy_r_right_arg);
    if (unlikely(!PyBool_Check(cpy_r_r461))) {
        CPy_TypeError("bool", cpy_r_r461); cpy_r_r462 = 2;
    } else
        cpy_r_r462 = cpy_r_r461 == Py_True;
    CPy_DECREF(cpy_r_r461);
    if (unlikely(cpy_r_r462 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 521, CPyStatic_meet___globals);
        goto CPyL406;
    }
    cpy_r_r463 = cpy_r_r462 ^ 1;
    if (cpy_r_r463) {
        goto CPyL409;
    } else
        goto CPyL305;
CPyL304: ;
    cpy_r_r439 = 0;
    goto CPyL306;
CPyL305: ;
    cpy_r_r464 = cpy_r_r442 + 2;
    cpy_r_r442 = cpy_r_r464;
    cpy_r_r465 = cpy_r_r445 + 2;
    cpy_r_r445 = cpy_r_r465;
    goto CPyL294;
CPyL306: ;
    if (!cpy_r_r439) goto CPyL308;
    return 1;
CPyL308: ;
    return 0;
CPyL309: ;
    CPy_INCREF(cpy_r_left);
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r466 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 534, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL410;
    }
    cpy_r_r467 = PyObject_Type(cpy_r_r466);
    CPy_DECREF(cpy_r_r466);
    CPy_INCREF(cpy_r_right);
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r468 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 534, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL411;
    }
    cpy_r_r469 = PyObject_Type(cpy_r_r468);
    CPy_DECREF(cpy_r_r468);
    cpy_r_r470 = PyObject_RichCompare(cpy_r_r467, cpy_r_r469, 3);
    CPy_DECREF(cpy_r_r467);
    CPy_DECREF(cpy_r_r469);
    if (unlikely(cpy_r_r470 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 534, CPyStatic_meet___globals);
        goto CPyL410;
    }
    if (unlikely(!PyBool_Check(cpy_r_r470))) {
        CPy_TypeError("bool", cpy_r_r470); cpy_r_r471 = 2;
    } else
        cpy_r_r471 = cpy_r_r470 == Py_True;
    CPy_DECREF(cpy_r_r470);
    if (unlikely(cpy_r_r471 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 534, CPyStatic_meet___globals);
        goto CPyL410;
    }
    if (cpy_r_r471) goto CPyL412;
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r472 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 534, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL413;
    }
    cpy_r_r473 = PyObject_Type(cpy_r_r472);
    CPy_DECREF(cpy_r_r472);
    cpy_r_r474 = PyObject_Str(cpy_r_r473);
    CPy_DECREF(cpy_r_r473);
    if (unlikely(cpy_r_r474 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 534, CPyStatic_meet___globals);
        goto CPyL413;
    }
    cpy_r_r475 = CPyStatics[3090]; /* ' vs ' */
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r476 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_overlapping_types", 534, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL414;
    }
    cpy_r_r477 = PyObject_Type(cpy_r_r476);
    CPy_DECREF(cpy_r_r476);
    cpy_r_r478 = PyObject_Str(cpy_r_r477);
    CPy_DECREF(cpy_r_r477);
    if (unlikely(cpy_r_r478 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 534, CPyStatic_meet___globals);
        goto CPyL414;
    }
    cpy_r_r479 = CPyStr_Build(3, cpy_r_r474, cpy_r_r475, cpy_r_r478);
    CPy_DECREF(cpy_r_r474);
    CPy_DECREF(cpy_r_r478);
    if (unlikely(cpy_r_r479 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 534, CPyStatic_meet___globals);
        goto CPyL324;
    }
    cpy_r_r480 = CPyModule_builtins;
    cpy_r_r481 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r482 = CPyObject_GetAttr(cpy_r_r480, cpy_r_r481);
    if (unlikely(cpy_r_r482 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 534, CPyStatic_meet___globals);
        goto CPyL415;
    }
    PyObject *cpy_r_r483[1] = {cpy_r_r479};
    cpy_r_r484 = (PyObject **)&cpy_r_r483;
    cpy_r_r485 = _PyObject_Vectorcall(cpy_r_r482, cpy_r_r484, 1, 0);
    CPy_DECREF(cpy_r_r482);
    if (unlikely(cpy_r_r485 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 534, CPyStatic_meet___globals);
        goto CPyL415;
    }
    CPy_DECREF(cpy_r_r479);
    CPy_Raise(cpy_r_r485);
    CPy_DECREF(cpy_r_r485);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 534, CPyStatic_meet___globals);
        goto CPyL324;
    }
    CPy_Unreachable();
CPyL323: ;
    return 0;
CPyL324: ;
    cpy_r_r486 = 2;
    return cpy_r_r486;
CPyL325: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL324;
CPyL326: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL12;
CPyL327: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r14);
    goto CPyL324;
CPyL328: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r18);
    goto CPyL324;
CPyL329: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_r0);
    goto CPyL324;
CPyL330: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    goto CPyL324;
CPyL331: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    goto CPyL324;
CPyL332: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    goto CPyL23;
CPyL333: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_illegal_types.f0);
    CPy_DecRef(cpy_r_illegal_types.f1);
    CPy_DecRef(cpy_r_illegal_types.f2);
    goto CPyL324;
CPyL334: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_illegal_types.f0);
    CPy_DECREF(cpy_r_illegal_types.f1);
    CPy_DECREF(cpy_r_illegal_types.f2);
    goto CPyL29;
CPyL335: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    goto CPyL29;
CPyL336: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    goto CPyL31;
CPyL337: ;
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    goto CPyL324;
CPyL338: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r68);
    goto CPyL324;
CPyL339: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r72);
    goto CPyL324;
CPyL340: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    goto CPyL51;
CPyL341: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r83);
    goto CPyL324;
CPyL342: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    goto CPyL68;
CPyL343: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r86);
    goto CPyL324;
CPyL344: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r89);
    goto CPyL324;
CPyL345: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r92);
    goto CPyL324;
CPyL346: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r95);
    goto CPyL324;
CPyL347: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r96);
    goto CPyL324;
CPyL348: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    goto CPyL81;
CPyL349: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r103);
    goto CPyL324;
CPyL350: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r104);
    goto CPyL324;
CPyL351: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_left_possible);
    goto CPyL324;
CPyL352: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_left_possible);
    CPy_DECREF(cpy_r_right_possible);
    goto CPyL94;
CPyL353: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_left_possible);
    CPy_DECREF(cpy_r_right_possible);
    goto CPyL97;
CPyL354: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_left_possible);
    CPy_DecRef(cpy_r_right_possible);
    goto CPyL324;
CPyL355: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_left_possible);
    CPy_DecRef(cpy_r_right_possible);
    CPy_DecRef(cpy_r_r141);
    goto CPyL324;
CPyL356: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_left_possible);
    CPy_DecRef(cpy_r_right_possible);
    CPy_DecRef(cpy_r_r145);
    goto CPyL324;
CPyL357: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_left_possible);
    CPy_DecRef(cpy_r_right_possible);
    CPy_DecRef(cpy_r_r145);
    CPy_DecRef(cpy_r_r146);
    goto CPyL324;
CPyL358: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_left_possible);
    CPy_DECREF(cpy_r_right_possible);
    goto CPyL115;
CPyL359: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_left_possible);
    CPy_DecRef(cpy_r_right_possible);
    CPy_DecRef(cpy_r_r152);
    goto CPyL324;
CPyL360: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_left_possible);
    CPy_DecRef(cpy_r_right_possible);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r153);
    goto CPyL324;
CPyL361: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    goto CPyL120;
CPyL362: ;
    CPy_DECREF(cpy_r_left_possible);
    CPy_DECREF(cpy_r_right_possible);
    goto CPyL134;
CPyL363: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_left_possible);
    CPy_DECREF(cpy_r_right_possible);
    goto CPyL133;
CPyL364: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_left_possible);
    CPy_DecRef(cpy_r_right_possible);
    goto CPyL324;
CPyL365: ;
    CPy_DECREF(cpy_r_l);
    goto CPyL132;
CPyL366: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_left_possible);
    CPy_DecRef(cpy_r_right_possible);
    CPy_DecRef(cpy_r_l);
    goto CPyL324;
CPyL367: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_left_possible);
    CPy_DecRef(cpy_r_right_possible);
    CPy_DecRef(cpy_r_l);
    CPy_DecRef(cpy_r_r);
    goto CPyL324;
CPyL368: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_left_possible);
    CPy_DECREF(cpy_r_right_possible);
    CPy_DECREF(cpy_r_l);
    goto CPyL130;
CPyL369: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    goto CPyL135;
CPyL370: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    goto CPyL141;
CPyL371: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r215);
    goto CPyL324;
CPyL372: ;
    CPy_DecRef(cpy_r_r215);
    CPy_DecRef(cpy_r_r216);
    goto CPyL324;
CPyL373: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r220);
    goto CPyL324;
CPyL374: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r223);
    goto CPyL324;
CPyL375: ;
    CPy_DecRef(cpy_r_r223);
    CPy_DecRef(cpy_r_r224);
    goto CPyL324;
CPyL376: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r243);
    goto CPyL324;
CPyL377: ;
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r244);
    goto CPyL324;
CPyL378: ;
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r269);
    goto CPyL324;
CPyL379: ;
    CPy_DecRef(cpy_r_r269);
    CPy_DecRef(cpy_r_r271);
    goto CPyL324;
CPyL380: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r277);
    goto CPyL324;
CPyL381: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r288);
    goto CPyL324;
CPyL382: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r288);
    CPy_DecRef(cpy_r_r289);
    goto CPyL324;
CPyL383: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    goto CPyL202;
CPyL384: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r296);
    goto CPyL324;
CPyL385: ;
    CPy_DecRef(cpy_r_r296);
    CPy_DecRef(cpy_r_r297);
    goto CPyL324;
CPyL386: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r311);
    goto CPyL324;
CPyL387: ;
    CPy_DecRef(cpy_r_r311);
    CPy_DecRef(cpy_r_r312);
    goto CPyL324;
CPyL388: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r340);
    goto CPyL324;
CPyL389: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    goto CPyL233;
CPyL390: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL309;
CPyL391: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r369);
    goto CPyL324;
CPyL392: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r369);
    CPy_DecRef(cpy_r_r370);
    goto CPyL324;
CPyL393: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    goto CPyL254;
CPyL394: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r379);
    goto CPyL324;
CPyL395: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r380);
    goto CPyL324;
CPyL396: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r401);
    goto CPyL264;
CPyL397: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    goto CPyL268;
CPyL398: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r409);
    goto CPyL324;
CPyL399: ;
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r414);
    goto CPyL324;
CPyL400: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r419);
    goto CPyL324;
CPyL401: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    goto CPyL287;
CPyL402: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r424);
    goto CPyL324;
CPyL403: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r0);
    goto CPyL308;
CPyL404: ;
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r441);
    goto CPyL324;
CPyL405: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r441);
    CPy_DECREF(cpy_r_r444);
    goto CPyL306;
CPyL406: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r444);
    goto CPyL324;
CPyL407: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r444);
    CPy_DecRef(cpy_r_left_arg);
    goto CPyL324;
CPyL408: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r444);
    CPy_DecRef(cpy_r_left_arg);
    CPy_DecRef(cpy_r_right_arg);
    goto CPyL324;
CPyL409: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r441);
    CPy_DECREF(cpy_r_r444);
    goto CPyL304;
CPyL410: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    goto CPyL324;
CPyL411: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r467);
    goto CPyL324;
CPyL412: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    goto CPyL323;
CPyL413: ;
    CPy_DecRef(cpy_r_right);
    goto CPyL324;
CPyL414: ;
    CPy_DecRef(cpy_r_r474);
    goto CPyL324;
CPyL415: ;
    CPy_DecRef(cpy_r_r479);
    goto CPyL324;
}

PyObject *CPyPy_meet___is_overlapping_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"left", "right", "ignore_promotions", "prohibit_none_typevar_overlap", "ignore_uninhabited", 0};
    static CPyArg_Parser parser = {"OO|OOO:is_overlapping_types", kwlist, 0};
    PyObject *obj_left;
    PyObject *obj_right;
    PyObject *obj_ignore_promotions = NULL;
    PyObject *obj_prohibit_none_typevar_overlap = NULL;
    PyObject *obj_ignore_uninhabited = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_left, &obj_right, &obj_ignore_promotions, &obj_prohibit_none_typevar_overlap, &obj_ignore_uninhabited)) {
        return NULL;
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
    char arg_ignore_promotions;
    if (obj_ignore_promotions == NULL) {
        arg_ignore_promotions = 2;
    } else if (unlikely(!PyBool_Check(obj_ignore_promotions))) {
        CPy_TypeError("bool", obj_ignore_promotions); goto fail;
    } else
        arg_ignore_promotions = obj_ignore_promotions == Py_True;
    char arg_prohibit_none_typevar_overlap;
    if (obj_prohibit_none_typevar_overlap == NULL) {
        arg_prohibit_none_typevar_overlap = 2;
    } else if (unlikely(!PyBool_Check(obj_prohibit_none_typevar_overlap))) {
        CPy_TypeError("bool", obj_prohibit_none_typevar_overlap); goto fail;
    } else
        arg_prohibit_none_typevar_overlap = obj_prohibit_none_typevar_overlap == Py_True;
    char arg_ignore_uninhabited;
    if (obj_ignore_uninhabited == NULL) {
        arg_ignore_uninhabited = 2;
    } else if (unlikely(!PyBool_Check(obj_ignore_uninhabited))) {
        CPy_TypeError("bool", obj_ignore_uninhabited); goto fail;
    } else
        arg_ignore_uninhabited = obj_ignore_uninhabited == Py_True;
    char retval = CPyDef_meet___is_overlapping_types(arg_left, arg_right, arg_ignore_promotions, arg_prohibit_none_typevar_overlap, arg_ignore_uninhabited);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "is_overlapping_types", 254, CPyStatic_meet___globals);
    return NULL;
}

char CPyDef_meet___is_overlapping_erased_types(PyObject *cpy_r_left, PyObject *cpy_r_right, char cpy_r_ignore_promotions) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    if (cpy_r_ignore_promotions != 2) goto CPyL2;
    cpy_r_ignore_promotions = 0;
CPyL2: ;
    cpy_r_r0 = CPyDef_erasetype___erase_type(cpy_r_left);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_erased_types", 543, CPyStatic_meet___globals);
        goto CPyL6;
    }
    cpy_r_r1 = CPyDef_erasetype___erase_type(cpy_r_right);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_erased_types", 544, CPyStatic_meet___globals);
        goto CPyL7;
    }
    cpy_r_r2 = 2;
    cpy_r_r3 = CPyDef_meet___is_overlapping_types(cpy_r_r0, cpy_r_r1, cpy_r_ignore_promotions, 1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "is_overlapping_erased_types", 542, CPyStatic_meet___globals);
        goto CPyL6;
    }
    return cpy_r_r3;
CPyL6: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
}

PyObject *CPyPy_meet___is_overlapping_erased_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"left", "right", "ignore_promotions", 0};
    static CPyArg_Parser parser = {"OO|$O:is_overlapping_erased_types", kwlist, 0};
    PyObject *obj_left;
    PyObject *obj_right;
    PyObject *obj_ignore_promotions = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_left, &obj_right, &obj_ignore_promotions)) {
        return NULL;
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
    char arg_ignore_promotions;
    if (obj_ignore_promotions == NULL) {
        arg_ignore_promotions = 2;
    } else if (unlikely(!PyBool_Check(obj_ignore_promotions))) {
        CPy_TypeError("bool", obj_ignore_promotions); goto fail;
    } else
        arg_ignore_promotions = obj_ignore_promotions == Py_True;
    char retval = CPyDef_meet___is_overlapping_erased_types(arg_left, arg_right, arg_ignore_promotions);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "is_overlapping_erased_types", 538, CPyStatic_meet___globals);
    return NULL;
}

char CPyDef_meet___are_typed_dicts_overlapping(PyObject *cpy_r_left, PyObject *cpy_r_right, char cpy_r_ignore_promotions, char cpy_r_prohibit_none_typevar_overlap) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    if (cpy_r_ignore_promotions != 2) goto CPyL2;
    cpy_r_ignore_promotions = 0;
CPyL2: ;
    if (cpy_r_prohibit_none_typevar_overlap != 2) goto CPyL4;
    cpy_r_prohibit_none_typevar_overlap = 0;
CPyL4: ;
    cpy_r_r0 = ((mypy___types___TypedDictTypeObject *)cpy_r_left)->_required_keys;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_GetIter(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 559, CPyStatic_meet___globals);
        goto CPyL33;
    }
CPyL5: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL34;
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 559, CPyStatic_meet___globals, "str", cpy_r_r2);
        goto CPyL35;
    }
    cpy_r_key = cpy_r_r3;
    cpy_r_r4 = ((mypy___types___TypedDictTypeObject *)cpy_r_right)->_items;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = PyDict_Contains(cpy_r_r4, cpy_r_key);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 560, CPyStatic_meet___globals);
        goto CPyL36;
    }
    cpy_r_r7 = cpy_r_r5;
    cpy_r_r8 = cpy_r_r7 ^ 1;
    if (cpy_r_r8) {
        goto CPyL37;
    } else
        goto CPyL10;
CPyL9: ;
    return 0;
CPyL10: ;
    cpy_r_r9 = ((mypy___types___TypedDictTypeObject *)cpy_r_left)->_items;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r9, cpy_r_key);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 563, CPyStatic_meet___globals);
        goto CPyL36;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_types___Type)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 563, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r10);
        goto CPyL36;
    }
    cpy_r_r12 = ((mypy___types___TypedDictTypeObject *)cpy_r_right)->_items;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r12, cpy_r_key);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 564, CPyStatic_meet___globals);
        goto CPyL38;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_types___Type)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 564, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r13);
        goto CPyL38;
    }
    cpy_r_r15 = 2;
    cpy_r_r16 = CPyDef_meet___is_overlapping_types(cpy_r_r11, cpy_r_r14, cpy_r_ignore_promotions, cpy_r_prohibit_none_typevar_overlap, cpy_r_r15);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 562, CPyStatic_meet___globals);
        goto CPyL35;
    }
    if (cpy_r_r16) {
        goto CPyL5;
    } else
        goto CPyL39;
CPyL16: ;
    return 0;
CPyL17: ;
    cpy_r_r17 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 559, CPyStatic_meet___globals);
        goto CPyL33;
    }
    cpy_r_r18 = ((mypy___types___TypedDictTypeObject *)cpy_r_right)->_required_keys;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = PyObject_GetIter(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 571, CPyStatic_meet___globals);
        goto CPyL33;
    }
CPyL19: ;
    cpy_r_r20 = PyIter_Next(cpy_r_r19);
    if (cpy_r_r20 == NULL) goto CPyL40;
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 571, CPyStatic_meet___globals, "str", cpy_r_r20);
        goto CPyL41;
    }
    cpy_r_key = cpy_r_r21;
    cpy_r_r22 = ((mypy___types___TypedDictTypeObject *)cpy_r_left)->_items;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = PyDict_Contains(cpy_r_r22, cpy_r_key);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 572, CPyStatic_meet___globals);
        goto CPyL42;
    }
    cpy_r_r25 = cpy_r_r23;
    cpy_r_r26 = cpy_r_r25 ^ 1;
    if (cpy_r_r26) {
        goto CPyL43;
    } else
        goto CPyL24;
CPyL23: ;
    return 0;
CPyL24: ;
    cpy_r_r27 = ((mypy___types___TypedDictTypeObject *)cpy_r_left)->_items;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r27, cpy_r_key);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 575, CPyStatic_meet___globals);
        goto CPyL42;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r28, CPyType_types___Type)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 575, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r28);
        goto CPyL42;
    }
    cpy_r_r30 = ((mypy___types___TypedDictTypeObject *)cpy_r_right)->_items;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r30, cpy_r_key);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 575, CPyStatic_meet___globals);
        goto CPyL44;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r31, CPyType_types___Type)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 575, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r31);
        goto CPyL44;
    }
    cpy_r_r33 = 2;
    cpy_r_r34 = 2;
    cpy_r_r35 = CPyDef_meet___is_overlapping_types(cpy_r_r29, cpy_r_r32, cpy_r_ignore_promotions, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 574, CPyStatic_meet___globals);
        goto CPyL41;
    }
    if (cpy_r_r35) {
        goto CPyL19;
    } else
        goto CPyL45;
CPyL30: ;
    return 0;
CPyL31: ;
    cpy_r_r36 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 571, CPyStatic_meet___globals);
        goto CPyL33;
    }
    return 1;
CPyL33: ;
    cpy_r_r37 = 2;
    return cpy_r_r37;
CPyL34: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL17;
CPyL35: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL33;
CPyL36: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_key);
    goto CPyL33;
CPyL37: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_key);
    goto CPyL9;
CPyL38: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r11);
    goto CPyL33;
CPyL39: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL16;
CPyL40: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL31;
CPyL41: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL33;
CPyL42: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r19);
    goto CPyL33;
CPyL43: ;
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r19);
    goto CPyL23;
CPyL44: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r29);
    goto CPyL33;
CPyL45: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL30;
}

PyObject *CPyPy_meet___are_typed_dicts_overlapping(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"left", "right", "ignore_promotions", "prohibit_none_typevar_overlap", 0};
    static CPyArg_Parser parser = {"OO|$OO:are_typed_dicts_overlapping", kwlist, 0};
    PyObject *obj_left;
    PyObject *obj_right;
    PyObject *obj_ignore_promotions = NULL;
    PyObject *obj_prohibit_none_typevar_overlap = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_left, &obj_right, &obj_ignore_promotions, &obj_prohibit_none_typevar_overlap)) {
        return NULL;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_types___TypedDictType))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_left); 
        goto fail;
    }
    PyObject *arg_right;
    if (likely(Py_TYPE(obj_right) == CPyType_types___TypedDictType))
        arg_right = obj_right;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_right); 
        goto fail;
    }
    char arg_ignore_promotions;
    if (obj_ignore_promotions == NULL) {
        arg_ignore_promotions = 2;
    } else if (unlikely(!PyBool_Check(obj_ignore_promotions))) {
        CPy_TypeError("bool", obj_ignore_promotions); goto fail;
    } else
        arg_ignore_promotions = obj_ignore_promotions == Py_True;
    char arg_prohibit_none_typevar_overlap;
    if (obj_prohibit_none_typevar_overlap == NULL) {
        arg_prohibit_none_typevar_overlap = 2;
    } else if (unlikely(!PyBool_Check(obj_prohibit_none_typevar_overlap))) {
        CPy_TypeError("bool", obj_prohibit_none_typevar_overlap); goto fail;
    } else
        arg_prohibit_none_typevar_overlap = obj_prohibit_none_typevar_overlap == Py_True;
    char retval = CPyDef_meet___are_typed_dicts_overlapping(arg_left, arg_right, arg_ignore_promotions, arg_prohibit_none_typevar_overlap);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "are_typed_dicts_overlapping", 550, CPyStatic_meet___globals);
    return NULL;
}

char CPyDef_meet___are_tuples_overlapping(PyObject *cpy_r_left, PyObject *cpy_r_right, char cpy_r_ignore_promotions, char cpy_r_prohibit_none_typevar_overlap) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
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
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    int64_t cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyPtr cpy_r_r62;
    int64_t cpy_r_r63;
    CPyTagged cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyTagged cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyTagged cpy_r_r72;
    CPyPtr cpy_r_r73;
    int64_t cpy_r_r74;
    CPyTagged cpy_r_r75;
    char cpy_r_r76;
    CPyPtr cpy_r_r77;
    int64_t cpy_r_r78;
    CPyTagged cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_l;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r;
    char cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    CPyTagged cpy_r_r88;
    CPyTagged cpy_r_r89;
    char cpy_r_r90;
    if (cpy_r_ignore_promotions != 2) goto CPyL2;
    cpy_r_ignore_promotions = 0;
CPyL2: ;
    if (cpy_r_prohibit_none_typevar_overlap != 2) goto CPyL4;
    cpy_r_prohibit_none_typevar_overlap = 0;
CPyL4: ;
    cpy_r_r0.f0 = cpy_r_left;
    cpy_r_r0.f1 = cpy_r_right;
    CPy_INCREF(cpy_r_r0.f0);
    CPy_INCREF(cpy_r_r0.f1);
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3222 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp3222);
    PyObject *__tmp3223 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp3223);
    cpy_r_r2 = CPyDef_types___get_proper_types(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_tuples_overlapping", 593, CPyStatic_meet___globals);
        goto CPyL56;
    }
    cpy_r_r3 = CPySequence_CheckUnpackCount(cpy_r_r2, 2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/meet.py", "are_tuples_overlapping", 593, CPyStatic_meet___globals);
        goto CPyL57;
    }
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_r2, 0);
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r2, 2);
    CPy_DECREF(cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r5, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 593, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r5);
        goto CPyL58;
    }
    cpy_r_left = cpy_r_r7;
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r8 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 593, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r6);
        goto CPyL59;
    }
    cpy_r_right = cpy_r_r8;
    CPy_INCREF(cpy_r_left);
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r9 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 594, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_right);
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r10 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 594, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL61;
    }
    cpy_r_r11 = CPyDef_meet___adjust_tuple(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_tuples_overlapping", 594, CPyStatic_meet___globals);
        goto CPyL60;
    }
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_r11 != cpy_r_r12;
    if (cpy_r_r13) {
        goto CPyL62;
    } else
        goto CPyL63;
CPyL12: ;
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___ProperType)))
        cpy_r_r14 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 594, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r11);
        goto CPyL64;
    }
    cpy_r_r15 = cpy_r_r14;
    goto CPyL16;
CPyL14: ;
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r16 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 594, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL64;
    }
    cpy_r_r15 = cpy_r_r16;
CPyL16: ;
    cpy_r_left = cpy_r_r15;
    CPy_INCREF(cpy_r_right);
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r17 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 595, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_left);
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r18 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 595, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL65;
    }
    cpy_r_r19 = CPyDef_meet___adjust_tuple(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_tuples_overlapping", 595, CPyStatic_meet___globals);
        goto CPyL60;
    }
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_r19 != cpy_r_r20;
    if (cpy_r_r21) {
        goto CPyL66;
    } else
        goto CPyL67;
CPyL20: ;
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_types___ProperType)))
        cpy_r_r22 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 595, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r19);
        goto CPyL59;
    }
    cpy_r_r23 = cpy_r_r22;
    goto CPyL24;
CPyL22: ;
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r24 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 595, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL59;
    }
    cpy_r_r23 = cpy_r_r24;
CPyL24: ;
    cpy_r_right = cpy_r_r23;
    cpy_r_r25 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    if (cpy_r_r28) {
        goto CPyL32;
    } else
        goto CPyL68;
CPyL25: ;
    cpy_r_r29 = CPyStatics[3091]; /* 'Type ' */
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r30 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 596, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL56;
    }
    cpy_r_r31 = PyObject_Str(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_tuples_overlapping", 596, CPyStatic_meet___globals);
        goto CPyL56;
    }
    cpy_r_r32 = CPyStatics[3092]; /* ' is not a tuple' */
    cpy_r_r33 = CPyStr_Build(3, cpy_r_r29, cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_tuples_overlapping", 596, CPyStatic_meet___globals);
        goto CPyL56;
    }
    cpy_r_r34 = CPyModule_builtins;
    cpy_r_r35 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_tuples_overlapping", 596, CPyStatic_meet___globals);
        goto CPyL69;
    }
    PyObject *cpy_r_r37[1] = {cpy_r_r33};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = _PyObject_Vectorcall(cpy_r_r36, cpy_r_r38, 1, 0);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_tuples_overlapping", 596, CPyStatic_meet___globals);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_r33);
    CPy_Raise(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/meet.py", "are_tuples_overlapping", 596, CPyStatic_meet___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r40 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r41 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 == cpy_r_r40;
    if (cpy_r_r43) {
        goto CPyL40;
    } else
        goto CPyL70;
CPyL33: ;
    cpy_r_r44 = CPyStatics[3091]; /* 'Type ' */
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r45 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 597, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL56;
    }
    cpy_r_r46 = PyObject_Str(cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_tuples_overlapping", 597, CPyStatic_meet___globals);
        goto CPyL56;
    }
    cpy_r_r47 = CPyStatics[3092]; /* ' is not a tuple' */
    cpy_r_r48 = CPyStr_Build(3, cpy_r_r44, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_tuples_overlapping", 597, CPyStatic_meet___globals);
        goto CPyL56;
    }
    cpy_r_r49 = CPyModule_builtins;
    cpy_r_r50 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r51 = CPyObject_GetAttr(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_tuples_overlapping", 597, CPyStatic_meet___globals);
        goto CPyL71;
    }
    PyObject *cpy_r_r52[1] = {cpy_r_r48};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = _PyObject_Vectorcall(cpy_r_r51, cpy_r_r53, 1, 0);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "are_tuples_overlapping", 597, CPyStatic_meet___globals);
        goto CPyL71;
    }
    CPy_DECREF(cpy_r_r48);
    CPy_Raise(cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/meet.py", "are_tuples_overlapping", 597, CPyStatic_meet___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL40: ;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___TupleType))
        cpy_r_r55 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 598, CPyStatic_meet___globals, "mypy.types.TupleType", cpy_r_left);
        goto CPyL60;
    }
    cpy_r_r56 = ((mypy___types___TupleTypeObject *)cpy_r_r55)->_items;
    cpy_r_r57 = (CPyPtr)&((PyVarObject *)cpy_r_r56)->ob_size;
    cpy_r_r58 = *(int64_t *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 << 1;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___TupleType))
        cpy_r_r60 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 598, CPyStatic_meet___globals, "mypy.types.TupleType", cpy_r_right);
        goto CPyL60;
    }
    cpy_r_r61 = ((mypy___types___TupleTypeObject *)cpy_r_r60)->_items;
    cpy_r_r62 = (CPyPtr)&((PyVarObject *)cpy_r_r61)->ob_size;
    cpy_r_r63 = *(int64_t *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 << 1;
    cpy_r_r65 = cpy_r_r59 != cpy_r_r64;
    if (cpy_r_r65) {
        goto CPyL72;
    } else
        goto CPyL44;
CPyL43: ;
    return 0;
CPyL44: ;
    cpy_r_r66 = 1;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___TupleType))
        cpy_r_r67 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 607, CPyStatic_meet___globals, "mypy.types.TupleType", cpy_r_left);
        goto CPyL60;
    }
    cpy_r_r68 = ((mypy___types___TupleTypeObject *)cpy_r_r67)->_items;
    CPy_INCREF(cpy_r_r68);
    CPy_DECREF(cpy_r_left);
    cpy_r_r69 = 0;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___TupleType))
        cpy_r_r70 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 607, CPyStatic_meet___globals, "mypy.types.TupleType", cpy_r_right);
        goto CPyL73;
    }
    cpy_r_r71 = ((mypy___types___TupleTypeObject *)cpy_r_r70)->_items;
    CPy_INCREF(cpy_r_r71);
    CPy_DECREF(cpy_r_right);
    cpy_r_r72 = 0;
CPyL47: ;
    cpy_r_r73 = (CPyPtr)&((PyVarObject *)cpy_r_r68)->ob_size;
    cpy_r_r74 = *(int64_t *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r74 << 1;
    cpy_r_r76 = (Py_ssize_t)cpy_r_r69 < (Py_ssize_t)cpy_r_r75;
    if (!cpy_r_r76) goto CPyL74;
    cpy_r_r77 = (CPyPtr)&((PyVarObject *)cpy_r_r71)->ob_size;
    cpy_r_r78 = *(int64_t *)cpy_r_r77;
    cpy_r_r79 = cpy_r_r78 << 1;
    cpy_r_r80 = (Py_ssize_t)cpy_r_r72 < (Py_ssize_t)cpy_r_r79;
    if (!cpy_r_r80) goto CPyL74;
    cpy_r_r81 = CPyList_GetItemUnsafe(cpy_r_r68, cpy_r_r69);
    if (likely(PyObject_TypeCheck(cpy_r_r81, CPyType_types___Type)))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 600, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r81);
        goto CPyL75;
    }
    cpy_r_l = cpy_r_r82;
    cpy_r_r83 = CPyList_GetItemUnsafe(cpy_r_r71, cpy_r_r72);
    if (likely(PyObject_TypeCheck(cpy_r_r83, CPyType_types___Type)))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "are_tuples_overlapping", 600, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r83);
        goto CPyL76;
    }
    cpy_r_r = cpy_r_r84;
    cpy_r_r85 = 2;
    cpy_r_r86 = CPyDef_meet___is_overlapping_types(cpy_r_l, cpy_r_r, cpy_r_ignore_promotions, cpy_r_prohibit_none_typevar_overlap, cpy_r_r85);
    CPy_DECREF(cpy_r_l);
    CPy_DECREF(cpy_r_r);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "are_tuples_overlapping", 601, CPyStatic_meet___globals);
        goto CPyL75;
    }
    cpy_r_r87 = cpy_r_r86 ^ 1;
    if (cpy_r_r87) {
        goto CPyL77;
    } else
        goto CPyL54;
CPyL53: ;
    cpy_r_r66 = 0;
    goto CPyL55;
CPyL54: ;
    cpy_r_r88 = cpy_r_r69 + 2;
    cpy_r_r69 = cpy_r_r88;
    cpy_r_r89 = cpy_r_r72 + 2;
    cpy_r_r72 = cpy_r_r89;
    goto CPyL47;
CPyL55: ;
    return cpy_r_r66;
CPyL56: ;
    cpy_r_r90 = 2;
    return cpy_r_r90;
CPyL57: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL56;
CPyL58: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL56;
CPyL59: ;
    CPy_DecRef(cpy_r_left);
    goto CPyL56;
CPyL60: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    goto CPyL56;
CPyL61: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r9);
    goto CPyL56;
CPyL62: ;
    CPy_DECREF(cpy_r_left);
    goto CPyL12;
CPyL63: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL14;
CPyL64: ;
    CPy_DecRef(cpy_r_right);
    goto CPyL56;
CPyL65: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r17);
    goto CPyL56;
CPyL66: ;
    CPy_DECREF(cpy_r_right);
    goto CPyL20;
CPyL67: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL22;
CPyL68: ;
    CPy_DECREF(cpy_r_right);
    goto CPyL25;
CPyL69: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL56;
CPyL70: ;
    CPy_DECREF(cpy_r_left);
    goto CPyL33;
CPyL71: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL56;
CPyL72: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    goto CPyL43;
CPyL73: ;
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r68);
    goto CPyL56;
CPyL74: ;
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r71);
    goto CPyL55;
CPyL75: ;
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r71);
    goto CPyL56;
CPyL76: ;
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_l);
    goto CPyL56;
CPyL77: ;
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r71);
    goto CPyL53;
}

PyObject *CPyPy_meet___are_tuples_overlapping(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"left", "right", "ignore_promotions", "prohibit_none_typevar_overlap", 0};
    static CPyArg_Parser parser = {"OO|$OO:are_tuples_overlapping", kwlist, 0};
    PyObject *obj_left;
    PyObject *obj_right;
    PyObject *obj_ignore_promotions = NULL;
    PyObject *obj_prohibit_none_typevar_overlap = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_left, &obj_right, &obj_ignore_promotions, &obj_prohibit_none_typevar_overlap)) {
        return NULL;
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
    char arg_ignore_promotions;
    if (obj_ignore_promotions == NULL) {
        arg_ignore_promotions = 2;
    } else if (unlikely(!PyBool_Check(obj_ignore_promotions))) {
        CPy_TypeError("bool", obj_ignore_promotions); goto fail;
    } else
        arg_ignore_promotions = obj_ignore_promotions == Py_True;
    char arg_prohibit_none_typevar_overlap;
    if (obj_prohibit_none_typevar_overlap == NULL) {
        arg_prohibit_none_typevar_overlap = 2;
    } else if (unlikely(!PyBool_Check(obj_prohibit_none_typevar_overlap))) {
        CPy_TypeError("bool", obj_prohibit_none_typevar_overlap); goto fail;
    } else
        arg_prohibit_none_typevar_overlap = obj_prohibit_none_typevar_overlap == Py_True;
    char retval = CPyDef_meet___are_tuples_overlapping(arg_left, arg_right, arg_ignore_promotions, arg_prohibit_none_typevar_overlap);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "are_tuples_overlapping", 585, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___adjust_tuple(PyObject *cpy_r_left, PyObject *cpy_r_r) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_n;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    cpy_r_r0 = (PyObject *)CPyType_types___Instance;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL20;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___Instance))
        cpy_r_r4 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "adjust_tuple", 613, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_left);
        goto CPyL21;
    }
    cpy_r_r5 = ((mypy___types___InstanceObject *)cpy_r_r4)->_type;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPY_GET_ATTR(cpy_r_r5, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "adjust_tuple", 613, CPyStatic_meet___globals);
        goto CPyL21;
    }
CPyL3: ;
    cpy_r_r7 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL6;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL6;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/meet.py", "adjust_tuple", 613, CPyStatic_meet___globals);
        goto CPyL21;
    }
CPyL6: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    if (!cpy_r_r13) goto CPyL20;
    cpy_r_r14 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_r)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL11;
    CPy_INCREF(cpy_r_r);
    if (likely(Py_TYPE(cpy_r_r) == CPyType_types___TupleType))
        cpy_r_r18 = cpy_r_r;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "adjust_tuple", 614, CPyStatic_meet___globals, "mypy.types.TupleType", cpy_r_r);
        goto CPyL21;
    }
    cpy_r_r19 = CPyDef_types___TupleType___length(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/meet.py", "adjust_tuple", 614, CPyStatic_meet___globals);
        goto CPyL21;
    }
    cpy_r_r20 = cpy_r_r19;
    goto CPyL12;
CPyL11: ;
    cpy_r_r20 = 2;
CPyL12: ;
    cpy_r_n = cpy_r_r20;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___Instance))
        cpy_r_r21 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "adjust_tuple", 615, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_left);
        goto CPyL22;
    }
    cpy_r_r22 = ((mypy___types___InstanceObject *)cpy_r_r21)->_args;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = CPySequenceTuple_GetItem(cpy_r_r22, 0);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "adjust_tuple", 615, CPyStatic_meet___globals);
        goto CPyL22;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_types___Type)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "adjust_tuple", 615, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r23);
        goto CPyL22;
    }
    cpy_r_r25 = PyList_New(1);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "adjust_tuple", 615, CPyStatic_meet___globals);
        goto CPyL23;
    }
    cpy_r_r26 = (CPyPtr)&((PyListObject *)cpy_r_r25)->ob_item;
    cpy_r_r27 = *(CPyPtr *)cpy_r_r26;
    *(PyObject * *)cpy_r_r27 = cpy_r_r24;
    cpy_r_r28 = CPySequence_Multiply(cpy_r_r25, cpy_r_n);
    CPy_DECREF(cpy_r_r25);
    CPyTagged_DECREF(cpy_r_n);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "adjust_tuple", 615, CPyStatic_meet___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_left);
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___Instance))
        cpy_r_r29 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "adjust_tuple", 615, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_left);
        goto CPyL24;
    }
    cpy_r_r30 = CPY_INT_TAG;
    cpy_r_r31 = CPY_INT_TAG;
    cpy_r_r32 = 2;
    cpy_r_r33 = CPyDef_types___TupleType(cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "adjust_tuple", 615, CPyStatic_meet___globals);
        goto CPyL21;
    }
    return cpy_r_r33;
CPyL20: ;
    cpy_r_r34 = Py_None;
    CPy_INCREF(cpy_r_r34);
    return cpy_r_r34;
CPyL21: ;
    cpy_r_r35 = NULL;
    return cpy_r_r35;
CPyL22: ;
    CPyTagged_DecRef(cpy_r_n);
    goto CPyL21;
CPyL23: ;
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r24);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL21;
}

PyObject *CPyPy_meet___adjust_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"left", "r", 0};
    static CPyArg_Parser parser = {"OO:adjust_tuple", kwlist, 0};
    PyObject *obj_left;
    PyObject *obj_r;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_left, &obj_r)) {
        return NULL;
    }
    PyObject *arg_left;
    if (likely(PyObject_TypeCheck(obj_left, CPyType_types___ProperType)))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_left); 
        goto fail;
    }
    PyObject *arg_r;
    if (likely(PyObject_TypeCheck(obj_r, CPyType_types___ProperType)))
        arg_r = obj_r;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_r); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___adjust_tuple(arg_left, arg_r);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "adjust_tuple", 611, CPyStatic_meet___globals);
    return NULL;
}

char CPyDef_meet___is_tuple(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_tuple", 620, CPyStatic_meet___globals);
        goto CPyL14;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_tuple", 620, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL14;
    }
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL15;
    } else
        goto CPyL4;
CPyL3: ;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL13;
CPyL4: ;
    cpy_r_r7 = (PyObject *)CPyType_types___Instance;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (cpy_r_r10) {
        goto CPyL6;
    } else
        goto CPyL16;
CPyL5: ;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL12;
CPyL6: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r12 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "is_tuple", 622, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL17;
    }
    cpy_r_r13 = ((mypy___types___InstanceObject *)cpy_r_r12)->_type;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r14 = CPY_GET_ATTR(cpy_r_r13, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "is_tuple", 622, CPyStatic_meet___globals);
        goto CPyL14;
    }
CPyL8: ;
    cpy_r_r15 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r16 = PyUnicode_Compare(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r17 = cpy_r_r16 == -1;
    if (!cpy_r_r17) goto CPyL11;
    cpy_r_r18 = PyErr_Occurred();
    cpy_r_r19 = cpy_r_r18 != NULL;
    if (!cpy_r_r19) goto CPyL11;
    cpy_r_r20 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/meet.py", "is_tuple", 622, CPyStatic_meet___globals);
        goto CPyL14;
    }
CPyL11: ;
    cpy_r_r21 = cpy_r_r16 == 0;
    cpy_r_r11 = cpy_r_r21;
CPyL12: ;
    cpy_r_r6 = cpy_r_r11;
CPyL13: ;
    return cpy_r_r6;
CPyL14: ;
    cpy_r_r22 = 2;
    return cpy_r_r22;
CPyL15: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL3;
CPyL16: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL5;
CPyL17: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL14;
}

PyObject *CPyPy_meet___is_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:is_tuple", kwlist, 0};
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
    char retval = CPyDef_meet___is_tuple(arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "is_tuple", 619, CPyStatic_meet___globals);
    return NULL;
}

char CPyDef_meet___TypeMeetVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_s) {
    char cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_s);
    if (((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s != NULL) {
        CPy_DECREF(((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s);
    }
    ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s = cpy_r_s;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/meet.py", "__init__", 628, CPyStatic_meet___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", 0};
    PyObject *obj_s;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(PyObject_TypeCheck(obj_s, CPyType_types___ProperType)))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_s); 
        goto fail;
    }
    char retval = CPyDef_meet___TypeMeetVisitor_____init__(arg_self, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "__init__", 627, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_unbound_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_unbound_type", "TypeMeetVisitor", "s", 631, CPyStatic_meet___globals);
        goto CPyL18;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL11;
    cpy_r_r5 = CPyStatic_state___state;
    if (likely(cpy_r_r5 != NULL)) goto CPyL5;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/meet.py", "visit_unbound_type", 632, CPyStatic_meet___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r7 = ((mypy___state___StrictOptionalStateObject *)cpy_r_r5)->_strict_optional;
    if (!cpy_r_r7) goto CPyL8;
CPyL6: ;
    cpy_r_r8 = NULL;
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPY_INT_TAG;
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = CPyDef_types___AnyType(12, cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_unbound_type", 633, CPyStatic_meet___globals);
        goto CPyL18;
    }
    return cpy_r_r12;
CPyL8: ;
    cpy_r_r13 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_unbound_type", "TypeMeetVisitor", "s", 635, CPyStatic_meet___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r13);
CPyL9: ;
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_types___NoneType))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_unbound_type", 635, CPyStatic_meet___globals, "mypy.types.NoneType", cpy_r_r13);
        goto CPyL18;
    }
    return cpy_r_r14;
CPyL11: ;
    cpy_r_r15 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_unbound_type", "TypeMeetVisitor", "s", 636, CPyStatic_meet___globals);
        goto CPyL18;
    }
CPyL12: ;
    cpy_r_r16 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL16;
    cpy_r_r20 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_unbound_type", "TypeMeetVisitor", "s", 637, CPyStatic_meet___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r20);
CPyL14: ;
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_types___UninhabitedType))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_unbound_type", 637, CPyStatic_meet___globals, "mypy.types.UninhabitedType", cpy_r_r20);
        goto CPyL18;
    }
    return cpy_r_r21;
CPyL16: ;
    cpy_r_r22 = NULL;
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPY_INT_TAG;
    cpy_r_r25 = CPY_INT_TAG;
    cpy_r_r26 = CPyDef_types___AnyType(12, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_unbound_type", 639, CPyStatic_meet___globals);
        goto CPyL18;
    }
    return cpy_r_r26;
CPyL18: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_unbound_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_unbound_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_unbound_type", 630, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_unbound_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_unbound_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_unbound_type__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_any", "TypeMeetVisitor", "s", 642, CPyStatic_meet___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_any(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_any", 641, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_meets;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_y;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_x_2;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    cpy_r_r0 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_union_type", "TypeMeetVisitor", "s", 645, CPyStatic_meet___globals);
        goto CPyL26;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL15;
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_union_type", 646, CPyStatic_meet___globals);
        goto CPyL26;
    }
    cpy_r_meets = cpy_r_r5;
    cpy_r_r6 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = 0;
CPyL4: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL27;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r6, cpy_r_r7);
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_types___Type)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_union_type", 647, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r12);
        goto CPyL28;
    }
    cpy_r_x = cpy_r_r13;
    cpy_r_r14 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_union_type", "TypeMeetVisitor", "s", 648, CPyStatic_meet___globals);
        goto CPyL29;
    }
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_types___UnionType))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_union_type", 648, CPyStatic_meet___globals, "mypy.types.UnionType", cpy_r_r14);
        goto CPyL29;
    }
    cpy_r_r16 = ((mypy___types___UnionTypeObject *)cpy_r_r15)->_items;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = 0;
CPyL9: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL30;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r17);
    if (likely(PyObject_TypeCheck(cpy_r_r22, CPyType_types___Type)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_union_type", 648, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r22);
        goto CPyL31;
    }
    cpy_r_y = cpy_r_r23;
    cpy_r_r24 = CPyDef_meet___meet_types(cpy_r_x, cpy_r_y);
    CPy_DECREF(cpy_r_y);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_union_type", 649, CPyStatic_meet___globals);
        goto CPyL31;
    }
    cpy_r_r25 = PyList_Append(cpy_r_meets, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/meet.py", "visit_union_type", 649, CPyStatic_meet___globals);
        goto CPyL31;
    }
    cpy_r_r27 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r27;
    goto CPyL9;
CPyL14: ;
    cpy_r_r28 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r28;
    goto CPyL4;
CPyL15: ;
    cpy_r_r29 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r29)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = PyList_New(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_union_type", 651, CPyStatic_meet___globals);
        goto CPyL32;
    }
    cpy_r_r33 = 0;
CPyL17: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r29)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r33 < (Py_ssize_t)cpy_r_r36;
    if (!cpy_r_r37) goto CPyL33;
    cpy_r_r38 = CPyList_GetItemUnsafe(cpy_r_r29, cpy_r_r33);
    if (likely(PyObject_TypeCheck(cpy_r_r38, CPyType_types___Type)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_union_type", 651, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r38);
        goto CPyL34;
    }
    cpy_r_x_2 = cpy_r_r39;
    cpy_r_r40 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_union_type", "TypeMeetVisitor", "s", 651, CPyStatic_meet___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r40);
CPyL20: ;
    cpy_r_r41 = CPyDef_meet___meet_types(cpy_r_x_2, cpy_r_r40);
    CPy_DECREF(cpy_r_x_2);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_union_type", 651, CPyStatic_meet___globals);
        goto CPyL34;
    }
    cpy_r_r42 = CPyList_SetItemUnsafe(cpy_r_r32, cpy_r_r33, cpy_r_r41);
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/meet.py", "visit_union_type", 651, CPyStatic_meet___globals);
        goto CPyL34;
    }
    cpy_r_r43 = cpy_r_r33 + 2;
    cpy_r_r33 = cpy_r_r43;
    goto CPyL17;
CPyL23: ;
    cpy_r_meets = cpy_r_r32;
CPyL24: ;
    cpy_r_r44 = CPY_INT_TAG;
    cpy_r_r45 = CPY_INT_TAG;
    cpy_r_r46 = 2;
    cpy_r_r47 = 2;
    cpy_r_r48 = CPyDef_typeops___make_simplified_union(cpy_r_meets, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_meets);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_union_type", 652, CPyStatic_meet___globals);
        goto CPyL26;
    }
    return cpy_r_r48;
CPyL26: ;
    cpy_r_r49 = NULL;
    return cpy_r_r49;
CPyL27: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_meets);
    CPy_DecRef(cpy_r_r6);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_meets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_x);
    goto CPyL26;
CPyL30: ;
    CPy_DECREF(cpy_r_x);
    CPy_DECREF(cpy_r_r16);
    goto CPyL14;
CPyL31: ;
    CPy_DecRef(cpy_r_meets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_r16);
    goto CPyL26;
CPyL32: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL26;
CPyL33: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL23;
CPyL34: ;
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    goto CPyL26;
CPyL35: ;
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_x_2);
    goto CPyL26;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_union_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_union_type", 644, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_union_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_none_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    cpy_r_r0 = CPyStatic_state___state;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/meet.py", "visit_none_type", 655, CPyStatic_meet___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = ((mypy___state___StrictOptionalStateObject *)cpy_r_r0)->_strict_optional;
    if (!cpy_r_r2) goto CPyL18;
CPyL4: ;
    cpy_r_r3 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_none_type", "TypeMeetVisitor", "s", 656, CPyStatic_meet___globals);
        goto CPyL19;
    }
CPyL5: ;
    cpy_r_r4 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (cpy_r_r7) goto CPyL15;
    cpy_r_r8 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_none_type", "TypeMeetVisitor", "s", 657, CPyStatic_meet___globals);
        goto CPyL19;
    }
CPyL7: ;
    cpy_r_r9 = (PyObject *)CPyType_types___Instance;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_r8)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (!cpy_r_r12) goto CPyL16;
    cpy_r_r13 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_none_type", "TypeMeetVisitor", "s", 657, CPyStatic_meet___globals);
        goto CPyL19;
    }
CPyL9: ;
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_types___Instance))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_none_type", 657, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r13);
        goto CPyL19;
    }
    cpy_r_r15 = ((mypy___types___InstanceObject *)cpy_r_r14)->_type;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_r15, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_none_type", 657, CPyStatic_meet___globals);
        goto CPyL19;
    }
CPyL11: ;
    cpy_r_r17 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r18 = PyUnicode_Compare(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r19 = cpy_r_r18 == -1;
    if (!cpy_r_r19) goto CPyL14;
    cpy_r_r20 = PyErr_Occurred();
    cpy_r_r21 = cpy_r_r20 != NULL;
    if (!cpy_r_r21) goto CPyL14;
    cpy_r_r22 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/meet.py", "visit_none_type", 657, CPyStatic_meet___globals);
        goto CPyL19;
    }
CPyL14: ;
    cpy_r_r23 = cpy_r_r18 == 0;
    if (!cpy_r_r23) goto CPyL16;
CPyL15: ;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL16: ;
    cpy_r_r24 = 2;
    cpy_r_r25 = CPY_INT_TAG;
    cpy_r_r26 = CPY_INT_TAG;
    cpy_r_r27 = CPyDef_types___UninhabitedType(cpy_r_r24, cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_none_type", 661, CPyStatic_meet___globals);
        goto CPyL19;
    }
    return cpy_r_r27;
CPyL18: ;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL19: ;
    cpy_r_r28 = NULL;
    return cpy_r_r28;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_none_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_none_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_none_type", 654, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_none_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_none_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_none_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_none_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_none_type__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_uninhabited_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_uninhabited_type", 665, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_deleted_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
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
    cpy_r_r0 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_deleted_type", "TypeMeetVisitor", "s", 669, CPyStatic_meet___globals);
        goto CPyL16;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL10;
    cpy_r_r5 = CPyStatic_state___state;
    if (likely(cpy_r_r5 != NULL)) goto CPyL5;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/meet.py", "visit_deleted_type", 670, CPyStatic_meet___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r7 = ((mypy___state___StrictOptionalStateObject *)cpy_r_r5)->_strict_optional;
    if (!cpy_r_r7) goto CPyL7;
CPyL6: ;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL7: ;
    cpy_r_r8 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_deleted_type", "TypeMeetVisitor", "s", 673, CPyStatic_meet___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r8);
CPyL8: ;
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_types___NoneType))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_deleted_type", 673, CPyStatic_meet___globals, "mypy.types.NoneType", cpy_r_r8);
        goto CPyL16;
    }
    return cpy_r_r9;
CPyL10: ;
    cpy_r_r10 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_deleted_type", "TypeMeetVisitor", "s", 674, CPyStatic_meet___globals);
        goto CPyL16;
    }
CPyL11: ;
    cpy_r_r11 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_r10)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL15;
    cpy_r_r15 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_deleted_type", "TypeMeetVisitor", "s", 675, CPyStatic_meet___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r15);
CPyL13: ;
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_types___UninhabitedType))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_deleted_type", 675, CPyStatic_meet___globals, "mypy.types.UninhabitedType", cpy_r_r15);
        goto CPyL16;
    }
    return cpy_r_r16;
CPyL15: ;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL16: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_deleted_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_deleted_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_deleted_type", 668, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_deleted_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_deleted_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_deleted_type__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_erased_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_erased_type", "TypeMeetVisitor", "s", 680, CPyStatic_meet___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_erased_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_erased_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_erased_type", 679, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_erased_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_erased_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_erased_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_erased_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_erased_type__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_type_var", "TypeMeetVisitor", "s", 683, CPyStatic_meet___globals);
        goto CPyL13;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL10;
    cpy_r_r5 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_type_var", "TypeMeetVisitor", "s", 683, CPyStatic_meet___globals);
        goto CPyL13;
    }
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___TypeVarType))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_type_var", 683, CPyStatic_meet___globals, "mypy.types.TypeVarType", cpy_r_r5);
        goto CPyL13;
    }
    cpy_r_r7 = ((mypy___types___TypeVarTypeObject *)cpy_r_r6)->_id;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = ((mypy___types___TypeVarTypeObject *)cpy_r_t)->_id;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_types___TypeVarId_____eq__(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_var", 683, CPyStatic_meet___globals);
        goto CPyL13;
    }
    if (unlikely(!PyBool_Check(cpy_r_r9))) {
        CPy_TypeError("bool", cpy_r_r9); cpy_r_r10 = 2;
    } else
        cpy_r_r10 = cpy_r_r9 == Py_True;
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_var", 683, CPyStatic_meet___globals);
        goto CPyL13;
    }
    if (!cpy_r_r10) goto CPyL10;
    cpy_r_r11 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_type_var", "TypeMeetVisitor", "s", 684, CPyStatic_meet___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r11);
CPyL8: ;
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_types___TypeVarType))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_type_var", 684, CPyStatic_meet___globals, "mypy.types.TypeVarType", cpy_r_r11);
        goto CPyL13;
    }
    return cpy_r_r12;
CPyL10: ;
    cpy_r_r13 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_type_var", "TypeMeetVisitor", "s", 686, CPyStatic_meet___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r13);
CPyL11: ;
    cpy_r_r14 = CPyDef_meet___TypeMeetVisitor___default(cpy_r_self, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_var", 686, CPyStatic_meet___globals);
        goto CPyL13;
    }
    return cpy_r_r14;
CPyL13: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_type_var(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_type_var", 682, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_param_spec", "TypeMeetVisitor", "s", 689, CPyStatic_meet___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyObject_RichCompare(cpy_r_r0, cpy_r_t, 2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_param_spec", 689, CPyStatic_meet___globals);
        goto CPyL9;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_param_spec", 689, CPyStatic_meet___globals);
        goto CPyL9;
    }
    if (!cpy_r_r2) goto CPyL6;
    cpy_r_r3 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_param_spec", "TypeMeetVisitor", "s", 690, CPyStatic_meet___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r3);
CPyL5: ;
    return cpy_r_r3;
CPyL6: ;
    cpy_r_r4 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_param_spec", "TypeMeetVisitor", "s", 692, CPyStatic_meet___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r4);
CPyL7: ;
    cpy_r_r5 = CPyDef_meet___TypeMeetVisitor___default(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_param_spec", 692, CPyStatic_meet___globals);
        goto CPyL9;
    }
    return cpy_r_r5;
CPyL9: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_param_spec(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_param_spec", 688, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_param_spec__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_param_spec(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_param_spec__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_param_spec__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_param_spec__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_type_var_tuple", "TypeMeetVisitor", "s", 695, CPyStatic_meet___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyObject_RichCompare(cpy_r_r0, cpy_r_t, 2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_var_tuple", 695, CPyStatic_meet___globals);
        goto CPyL9;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_var_tuple", 695, CPyStatic_meet___globals);
        goto CPyL9;
    }
    if (!cpy_r_r2) goto CPyL6;
    cpy_r_r3 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_type_var_tuple", "TypeMeetVisitor", "s", 696, CPyStatic_meet___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r3);
CPyL5: ;
    return cpy_r_r3;
CPyL6: ;
    cpy_r_r4 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_type_var_tuple", "TypeMeetVisitor", "s", 698, CPyStatic_meet___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r4);
CPyL7: ;
    cpy_r_r5 = CPyDef_meet___TypeMeetVisitor___default(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_var_tuple", 698, CPyStatic_meet___globals);
        goto CPyL9;
    }
    return cpy_r_r5;
CPyL9: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_type_var_tuple(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_type_var_tuple", 694, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_type_var_tuple(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_type_var_tuple__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_type_var_tuple__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_unpack_type", 701, CPyStatic_meet___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/meet.py", "visit_unpack_type", 701, CPyStatic_meet___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_unpack_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_unpack_type", 700, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_unpack_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_unpack_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_unpack_type__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_parameters(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
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
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyPtr cpy_r_r47;
    int64_t cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    CPyPtr cpy_r_r51;
    int64_t cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_s_a;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_t_a;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    CPyTagged cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    cpy_r_r0 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_parameters", "TypeMeetVisitor", "s", 705, CPyStatic_meet___globals);
        goto CPyL38;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL4;
CPyL3: ;
    cpy_r_r6 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    cpy_r_r5 = cpy_r_r9;
CPyL4: ;
    if (!cpy_r_r5) goto CPyL35;
    cpy_r_r10 = ((mypy___types___ParametersObject *)cpy_r_t)->_arg_types;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_parameters", "TypeMeetVisitor", "s", 706, CPyStatic_meet___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r14);
CPyL6: ;
    if (Py_TYPE(cpy_r_r14) == CPyType_types___Parameters)
        cpy_r_r15 = cpy_r_r14;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL3224;
    if (Py_TYPE(cpy_r_r14) == CPyType_types___CallableType)
        cpy_r_r15 = cpy_r_r14;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL3224;
    CPy_TypeErrorTraceback("mypy/meet.py", "visit_parameters", 706, CPyStatic_meet___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_r14);
    goto CPyL38;
__LL3224: ;
    cpy_r_r16 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL10;
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_types___Parameters))
        cpy_r_r20 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_parameters", 706, CPyStatic_meet___globals, "mypy.types.Parameters", cpy_r_r15);
        goto CPyL38;
    }
    cpy_r_r21 = ((mypy___types___ParametersObject *)cpy_r_r20)->_arg_types;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21;
    goto CPyL12;
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_types___CallableType))
        cpy_r_r23 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_parameters", 706, CPyStatic_meet___globals, "mypy.types.CallableType", cpy_r_r15);
        goto CPyL38;
    }
    cpy_r_r24 = ((mypy___types___CallableTypeObject *)cpy_r_r23)->_arg_types;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r22 = cpy_r_r24;
CPyL12: ;
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_r22)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    CPy_DECREF(cpy_r_r22);
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = cpy_r_r13 != cpy_r_r27;
    if (!cpy_r_r28) goto CPyL17;
    cpy_r_r29 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_parameters", "TypeMeetVisitor", "s", 707, CPyStatic_meet___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r29);
CPyL14: ;
    if (Py_TYPE(cpy_r_r29) == CPyType_types___Parameters)
        cpy_r_r30 = cpy_r_r29;
    else {
        cpy_r_r30 = NULL;
    }
    if (cpy_r_r30 != NULL) goto __LL3225;
    if (Py_TYPE(cpy_r_r29) == CPyType_types___CallableType)
        cpy_r_r30 = cpy_r_r29;
    else {
        cpy_r_r30 = NULL;
    }
    if (cpy_r_r30 != NULL) goto __LL3225;
    CPy_TypeErrorTraceback("mypy/meet.py", "visit_parameters", 707, CPyStatic_meet___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_r29);
    goto CPyL38;
__LL3225: ;
    cpy_r_r31 = CPyDef_meet___TypeMeetVisitor___default(cpy_r_self, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_parameters", 707, CPyStatic_meet___globals);
        goto CPyL38;
    }
    return cpy_r_r31;
CPyL17: ;
    cpy_r_r32 = PyList_New(0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_parameters", 709, CPyStatic_meet___globals);
        goto CPyL38;
    }
    cpy_r_r33 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_parameters", "TypeMeetVisitor", "s", 709, CPyStatic_meet___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r33);
CPyL19: ;
    if (Py_TYPE(cpy_r_r33) == CPyType_types___Parameters)
        cpy_r_r34 = cpy_r_r33;
    else {
        cpy_r_r34 = NULL;
    }
    if (cpy_r_r34 != NULL) goto __LL3226;
    if (Py_TYPE(cpy_r_r33) == CPyType_types___CallableType)
        cpy_r_r34 = cpy_r_r33;
    else {
        cpy_r_r34 = NULL;
    }
    if (cpy_r_r34 != NULL) goto __LL3226;
    CPy_TypeErrorTraceback("mypy/meet.py", "visit_parameters", 709, CPyStatic_meet___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_r33);
    goto CPyL39;
__LL3226: ;
    cpy_r_r35 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r36 = (CPyPtr)&((PyObject *)cpy_r_r34)->ob_type;
    cpy_r_r37 = *(PyObject * *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 == cpy_r_r35;
    if (!cpy_r_r38) goto CPyL23;
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_types___Parameters))
        cpy_r_r39 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_parameters", 709, CPyStatic_meet___globals, "mypy.types.Parameters", cpy_r_r34);
        goto CPyL39;
    }
    cpy_r_r40 = ((mypy___types___ParametersObject *)cpy_r_r39)->_arg_types;
    CPy_INCREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40;
    goto CPyL25;
CPyL23: ;
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_types___CallableType))
        cpy_r_r42 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_parameters", 709, CPyStatic_meet___globals, "mypy.types.CallableType", cpy_r_r34);
        goto CPyL39;
    }
    cpy_r_r43 = ((mypy___types___CallableTypeObject *)cpy_r_r42)->_arg_types;
    CPy_INCREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r41 = cpy_r_r43;
CPyL25: ;
    cpy_r_r44 = 0;
    cpy_r_r45 = ((mypy___types___ParametersObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = 0;
CPyL26: ;
    cpy_r_r47 = (CPyPtr)&((PyVarObject *)cpy_r_r41)->ob_size;
    cpy_r_r48 = *(int64_t *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 << 1;
    cpy_r_r50 = (Py_ssize_t)cpy_r_r44 < (Py_ssize_t)cpy_r_r49;
    if (!cpy_r_r50) goto CPyL40;
    cpy_r_r51 = (CPyPtr)&((PyVarObject *)cpy_r_r45)->ob_size;
    cpy_r_r52 = *(int64_t *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 << 1;
    cpy_r_r54 = (Py_ssize_t)cpy_r_r46 < (Py_ssize_t)cpy_r_r53;
    if (!cpy_r_r54) goto CPyL40;
    cpy_r_r55 = CPyList_GetItemUnsafe(cpy_r_r41, cpy_r_r44);
    if (likely(PyObject_TypeCheck(cpy_r_r55, CPyType_types___Type)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_parameters", 709, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r55);
        goto CPyL41;
    }
    cpy_r_s_a = cpy_r_r56;
    cpy_r_r57 = CPyList_GetItemUnsafe(cpy_r_r45, cpy_r_r46);
    if (likely(PyObject_TypeCheck(cpy_r_r57, CPyType_types___Type)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_parameters", 709, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r57);
        goto CPyL42;
    }
    cpy_r_t_a = cpy_r_r58;
    cpy_r_r59 = CPyDef_meet___meet_types(cpy_r_s_a, cpy_r_t_a);
    CPy_DECREF(cpy_r_s_a);
    CPy_DECREF(cpy_r_t_a);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_parameters", 709, CPyStatic_meet___globals);
        goto CPyL41;
    }
    cpy_r_r60 = PyList_Append(cpy_r_r32, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/meet.py", "visit_parameters", 709, CPyStatic_meet___globals);
        goto CPyL41;
    }
    cpy_r_r62 = cpy_r_r44 + 2;
    cpy_r_r44 = cpy_r_r62;
    cpy_r_r63 = cpy_r_r46 + 2;
    cpy_r_r46 = cpy_r_r63;
    goto CPyL26;
CPyL33: ;
    cpy_r_r64 = NULL;
    cpy_r_r65 = NULL;
    cpy_r_r66 = NULL;
    cpy_r_r67 = NULL;
    cpy_r_r68 = CPyDef_types___Parameters___copy_modified(cpy_r_t, cpy_r_r32, cpy_r_r64, cpy_r_r65, cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_parameters", 708, CPyStatic_meet___globals);
        goto CPyL38;
    }
    return cpy_r_r68;
CPyL35: ;
    cpy_r_r69 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_parameters", "TypeMeetVisitor", "s", 712, CPyStatic_meet___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r69);
CPyL36: ;
    cpy_r_r70 = CPyDef_meet___TypeMeetVisitor___default(cpy_r_self, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_parameters", 712, CPyStatic_meet___globals);
        goto CPyL38;
    }
    return cpy_r_r70;
CPyL38: ;
    cpy_r_r71 = NULL;
    return cpy_r_r71;
CPyL39: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL38;
CPyL40: ;
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r45);
    goto CPyL33;
CPyL41: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r45);
    goto CPyL38;
CPyL42: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_s_a);
    goto CPyL38;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_parameters(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_parameters", 703, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_parameters__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_parameters(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_parameters__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_parameters__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_parameters__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_ta;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_sia;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyTagged cpy_r_r55;
    CPyTagged cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyTagged cpy_r_r67;
    CPyTagged cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_alt_promote;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    CPyTagged cpy_r_r118;
    CPyTagged cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyTagged cpy_r_r121;
    CPyTagged cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    CPyPtr cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    CPyPtr cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_call;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    CPyPtr cpy_r_r145;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    CPyPtr cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    char cpy_r_r163;
    char cpy_r_r164;
    char cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    CPyPtr cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    CPyPtr cpy_r_r184;
    PyObject *cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    CPyPtr cpy_r_r192;
    PyObject *cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    CPyPtr cpy_r_r200;
    PyObject *cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    cpy_r_r0 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 715, CPyStatic_meet___globals);
        goto CPyL136;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___Instance;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL72;
    cpy_r_r5 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 716, CPyStatic_meet___globals);
        goto CPyL137;
    }
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_types___Instance))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 716, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r6);
        goto CPyL137;
    }
    cpy_r_r8 = ((mypy___types___InstanceObject *)cpy_r_r7)->_type;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = cpy_r_r5 == cpy_r_r8;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    if (!cpy_r_r9) goto CPyL36;
    cpy_r_r10 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 717, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r10);
CPyL6: ;
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_types___Instance))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 717, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r10);
        goto CPyL136;
    }
    cpy_r_r12 = NULL;
    cpy_r_r13 = 2;
    cpy_r_r14 = 2;
    cpy_r_r15 = 2;
    cpy_r_r16 = 2;
    cpy_r_r17 = 2;
    cpy_r_r18 = NULL;
    cpy_r_r19 = CPyDef_subtypes___is_subtype(cpy_r_t, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 717, CPyStatic_meet___globals);
        goto CPyL136;
    }
    if (cpy_r_r19) goto CPyL13;
    cpy_r_r20 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 717, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r20);
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_types___Instance))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 717, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r20);
        goto CPyL136;
    }
    cpy_r_r22 = NULL;
    cpy_r_r23 = 2;
    cpy_r_r24 = 2;
    cpy_r_r25 = 2;
    cpy_r_r26 = 2;
    cpy_r_r27 = 2;
    cpy_r_r28 = NULL;
    cpy_r_r29 = CPyDef_subtypes___is_subtype(cpy_r_r21, cpy_r_t, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 717, CPyStatic_meet___globals);
        goto CPyL136;
    }
    if (!cpy_r_r29) goto CPyL28;
CPyL13: ;
    cpy_r_r30 = PyList_New(0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 720, CPyStatic_meet___globals);
        goto CPyL136;
    }
    cpy_r_args = cpy_r_r30;
    cpy_r_r31 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = 0;
    cpy_r_r33 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 723, CPyStatic_meet___globals);
        goto CPyL138;
    }
CPyL15: ;
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_types___Instance))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 723, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r33);
        goto CPyL138;
    }
    cpy_r_r35 = ((mypy___types___InstanceObject *)cpy_r_r34)->_args;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = 0;
CPyL17: ;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r31)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = (Py_ssize_t)cpy_r_r32 < (Py_ssize_t)cpy_r_r39;
    if (!cpy_r_r40) goto CPyL139;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_r35)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 << 1;
    cpy_r_r44 = (Py_ssize_t)cpy_r_r36 < (Py_ssize_t)cpy_r_r43;
    if (!cpy_r_r44) goto CPyL139;
    cpy_r_r45 = CPySequenceTuple_GetItem(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 723, CPyStatic_meet___globals);
        goto CPyL140;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r45, CPyType_types___Type)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 723, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r45);
        goto CPyL140;
    }
    cpy_r_ta = cpy_r_r46;
    cpy_r_r47 = CPySequenceTuple_GetItem(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 723, CPyStatic_meet___globals);
        goto CPyL141;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r47, CPyType_types___Type)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 723, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r47);
        goto CPyL141;
    }
    cpy_r_sia = cpy_r_r48;
    cpy_r_r49 = CPyDef_meet___TypeMeetVisitor___meet(cpy_r_self, cpy_r_ta, cpy_r_sia);
    CPy_DECREF(cpy_r_ta);
    CPy_DECREF(cpy_r_sia);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 724, CPyStatic_meet___globals);
        goto CPyL140;
    }
    cpy_r_r50 = PyList_Append(cpy_r_args, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 724, CPyStatic_meet___globals);
        goto CPyL140;
    }
    cpy_r_r52 = cpy_r_r32 + 2;
    cpy_r_r32 = cpy_r_r52;
    cpy_r_r53 = cpy_r_r36 + 2;
    cpy_r_r36 = cpy_r_r53;
    goto CPyL17;
CPyL26: ;
    cpy_r_r54 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = CPY_INT_TAG;
    cpy_r_r56 = CPY_INT_TAG;
    cpy_r_r57 = NULL;
    cpy_r_r58 = NULL;
    cpy_r_r59 = CPyDef_types___Instance(cpy_r_r54, cpy_r_args, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 725, CPyStatic_meet___globals);
        goto CPyL136;
    }
    return cpy_r_r59;
CPyL28: ;
    cpy_r_r60 = CPyStatic_state___state;
    if (likely(cpy_r_r60 != NULL)) goto CPyL31;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r61 = 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 727, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r62 = ((mypy___state___StrictOptionalStateObject *)cpy_r_r60)->_strict_optional;
    if (!cpy_r_r62) goto CPyL34;
CPyL32: ;
    cpy_r_r63 = 2;
    cpy_r_r64 = CPY_INT_TAG;
    cpy_r_r65 = CPY_INT_TAG;
    cpy_r_r66 = CPyDef_types___UninhabitedType(cpy_r_r63, cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 728, CPyStatic_meet___globals);
        goto CPyL136;
    }
    return cpy_r_r66;
CPyL34: ;
    cpy_r_r67 = CPY_INT_TAG;
    cpy_r_r68 = CPY_INT_TAG;
    cpy_r_r69 = CPyDef_types___NoneType(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 730, CPyStatic_meet___globals);
        goto CPyL136;
    }
    return cpy_r_r69;
CPyL36: ;
    cpy_r_r70 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    cpy_r_r71 = ((mypy___nodes___TypeInfoObject *)cpy_r_r70)->_alt_promote;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeInfo", "alt_promote", 732, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r71);
CPyL37: ;
    cpy_r_alt_promote = cpy_r_r71;
    cpy_r_r72 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r73 = cpy_r_alt_promote != cpy_r_r72;
    if (!cpy_r_r73) goto CPyL142;
    if (likely(cpy_r_alt_promote != Py_None))
        cpy_r_r74 = cpy_r_alt_promote;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 733, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_alt_promote);
        goto CPyL143;
    }
    cpy_r_r75 = ((mypy___types___InstanceObject *)cpy_r_r74)->_type;
    CPy_INCREF(cpy_r_r75);
    CPy_DECREF(cpy_r_alt_promote);
    cpy_r_r76 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 733, CPyStatic_meet___globals);
        goto CPyL144;
    }
CPyL40: ;
    if (likely(Py_TYPE(cpy_r_r76) == CPyType_types___Instance))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 733, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r76);
        goto CPyL144;
    }
    cpy_r_r78 = ((mypy___types___InstanceObject *)cpy_r_r77)->_type;
    CPy_INCREF(cpy_r_r78);
    cpy_r_r79 = cpy_r_r75 == cpy_r_r78;
    CPy_DECREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r78);
    if (!cpy_r_r79) goto CPyL43;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL43: ;
    cpy_r_r80 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 735, CPyStatic_meet___globals);
        goto CPyL136;
    }
CPyL44: ;
    if (likely(Py_TYPE(cpy_r_r80) == CPyType_types___Instance))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 735, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r80);
        goto CPyL136;
    }
    cpy_r_r82 = ((mypy___types___InstanceObject *)cpy_r_r81)->_type;
    cpy_r_r83 = ((mypy___nodes___TypeInfoObject *)cpy_r_r82)->_alt_promote;
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeInfo", "alt_promote", 735, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r83);
CPyL46: ;
    cpy_r_alt_promote = cpy_r_r83;
    cpy_r_r84 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r85 = cpy_r_alt_promote != cpy_r_r84;
    if (!cpy_r_r85) goto CPyL145;
    if (likely(cpy_r_alt_promote != Py_None))
        cpy_r_r86 = cpy_r_alt_promote;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 736, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_alt_promote);
        goto CPyL143;
    }
    cpy_r_r87 = ((mypy___types___InstanceObject *)cpy_r_r86)->_type;
    CPy_INCREF(cpy_r_r87);
    CPy_DECREF(cpy_r_alt_promote);
    cpy_r_r88 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r88);
    cpy_r_r89 = cpy_r_r87 == cpy_r_r88;
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r88);
    if (!cpy_r_r89) goto CPyL52;
    cpy_r_r90 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 737, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r90);
CPyL50: ;
    if (likely(Py_TYPE(cpy_r_r90) == CPyType_types___Instance))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 737, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r90);
        goto CPyL136;
    }
    return cpy_r_r91;
CPyL52: ;
    cpy_r_r92 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 738, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r92);
CPyL53: ;
    if (likely(Py_TYPE(cpy_r_r92) == CPyType_types___Instance))
        cpy_r_r93 = cpy_r_r92;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 738, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r92);
        goto CPyL136;
    }
    cpy_r_r94 = NULL;
    cpy_r_r95 = 2;
    cpy_r_r96 = 2;
    cpy_r_r97 = 2;
    cpy_r_r98 = 2;
    cpy_r_r99 = 2;
    cpy_r_r100 = NULL;
    cpy_r_r101 = CPyDef_subtypes___is_subtype(cpy_r_t, cpy_r_r93, cpy_r_r94, cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98, cpy_r_r99, cpy_r_r100);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r101 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 738, CPyStatic_meet___globals);
        goto CPyL136;
    }
    if (!cpy_r_r101) goto CPyL57;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL57: ;
    cpy_r_r102 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 740, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r102);
CPyL58: ;
    if (likely(Py_TYPE(cpy_r_r102) == CPyType_types___Instance))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 740, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r102);
        goto CPyL136;
    }
    cpy_r_r104 = NULL;
    cpy_r_r105 = 2;
    cpy_r_r106 = 2;
    cpy_r_r107 = 2;
    cpy_r_r108 = 2;
    cpy_r_r109 = 2;
    cpy_r_r110 = NULL;
    cpy_r_r111 = CPyDef_subtypes___is_subtype(cpy_r_r103, cpy_r_t, cpy_r_r104, cpy_r_r105, cpy_r_r106, cpy_r_r107, cpy_r_r108, cpy_r_r109, cpy_r_r110);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r111 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 740, CPyStatic_meet___globals);
        goto CPyL136;
    }
    if (!cpy_r_r111) goto CPyL64;
    cpy_r_r112 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 742, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r112);
CPyL62: ;
    if (likely(Py_TYPE(cpy_r_r112) == CPyType_types___Instance))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 742, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r112);
        goto CPyL136;
    }
    return cpy_r_r113;
CPyL64: ;
    cpy_r_r114 = CPyStatic_state___state;
    if (likely(cpy_r_r114 != NULL)) goto CPyL67;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r115 = 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 744, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_Unreachable();
CPyL67: ;
    cpy_r_r116 = ((mypy___state___StrictOptionalStateObject *)cpy_r_r114)->_strict_optional;
    if (!cpy_r_r116) goto CPyL70;
CPyL68: ;
    cpy_r_r117 = 2;
    cpy_r_r118 = CPY_INT_TAG;
    cpy_r_r119 = CPY_INT_TAG;
    cpy_r_r120 = CPyDef_types___UninhabitedType(cpy_r_r117, cpy_r_r118, cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 745, CPyStatic_meet___globals);
        goto CPyL136;
    }
    return cpy_r_r120;
CPyL70: ;
    cpy_r_r121 = CPY_INT_TAG;
    cpy_r_r122 = CPY_INT_TAG;
    cpy_r_r123 = CPyDef_types___NoneType(cpy_r_r121, cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 747, CPyStatic_meet___globals);
        goto CPyL136;
    }
    return cpy_r_r123;
CPyL72: ;
    cpy_r_r124 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 748, CPyStatic_meet___globals);
        goto CPyL136;
    }
CPyL73: ;
    cpy_r_r125 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r126 = (CPyPtr)&((PyObject *)cpy_r_r124)->ob_type;
    cpy_r_r127 = *(PyObject * *)cpy_r_r126;
    cpy_r_r128 = cpy_r_r127 == cpy_r_r125;
    if (!cpy_r_r128) goto CPyL75;
    cpy_r_r129 = cpy_r_r128;
    goto CPyL76;
CPyL75: ;
    cpy_r_r130 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r131 = (CPyPtr)&((PyObject *)cpy_r_r124)->ob_type;
    cpy_r_r132 = *(PyObject * *)cpy_r_r131;
    cpy_r_r133 = cpy_r_r132 == cpy_r_r130;
    cpy_r_r129 = cpy_r_r133;
CPyL76: ;
    if (!cpy_r_r129) goto CPyL86;
    cpy_r_r134 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    cpy_r_r135 = ((mypy___nodes___TypeInfoObject *)cpy_r_r134)->_is_protocol;
    if (unlikely(cpy_r_r135 == 2)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeInfo", "is_protocol", 748, CPyStatic_meet___globals);
        goto CPyL136;
    }
CPyL78: ;
    if (!cpy_r_r135) goto CPyL86;
CPyL79: ;
    cpy_r_r136 = CPyDef_join___unpack_callback_protocol(cpy_r_t);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 749, CPyStatic_meet___globals);
        goto CPyL136;
    }
    cpy_r_call = cpy_r_r136;
    cpy_r_r137 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r138 = cpy_r_call != cpy_r_r137;
    if (!cpy_r_r138) goto CPyL146;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r139 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 751, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_call);
        goto CPyL136;
    }
    cpy_r_r140 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 751, CPyStatic_meet___globals);
        goto CPyL147;
    }
    CPy_INCREF(cpy_r_r140);
CPyL83: ;
    if (likely((Py_TYPE(cpy_r_r140) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r140) == CPyType_types___Overloaded)))
        cpy_r_r141 = cpy_r_r140;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 751, CPyStatic_meet___globals, "mypy.types.FunctionLike", cpy_r_r140);
        goto CPyL147;
    }
    cpy_r_r142 = CPyDef_meet___meet_types(cpy_r_r139, cpy_r_r141);
    CPy_DECREF(cpy_r_r139);
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 751, CPyStatic_meet___globals);
        goto CPyL136;
    }
    return cpy_r_r142;
CPyL86: ;
    cpy_r_r143 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 752, CPyStatic_meet___globals);
        goto CPyL136;
    }
CPyL87: ;
    cpy_r_r144 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r145 = (CPyPtr)&((PyObject *)cpy_r_r143)->ob_type;
    cpy_r_r146 = *(PyObject * *)cpy_r_r145;
    cpy_r_r147 = cpy_r_r146 == cpy_r_r144;
    if (!cpy_r_r147) goto CPyL89;
    cpy_r_r148 = cpy_r_r147;
    goto CPyL90;
CPyL89: ;
    cpy_r_r149 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r150 = (CPyPtr)&((PyObject *)cpy_r_r143)->ob_type;
    cpy_r_r151 = *(PyObject * *)cpy_r_r150;
    cpy_r_r152 = cpy_r_r151 == cpy_r_r149;
    cpy_r_r148 = cpy_r_r152;
CPyL90: ;
    if (!cpy_r_r148) goto CPyL109;
    cpy_r_r153 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 752, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r153);
CPyL92: ;
    if (likely((Py_TYPE(cpy_r_r153) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r153) == CPyType_types___Overloaded)))
        cpy_r_r154 = cpy_r_r153;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 752, CPyStatic_meet___globals, "mypy.types.FunctionLike", cpy_r_r153);
        goto CPyL136;
    }
    cpy_r_r155 = CPY_GET_METHOD(cpy_r_r154, CPyType_types___FunctionLike, 16, mypy___types___FunctionLikeObject, char (*)(PyObject *))(cpy_r_r154); /* is_type_obj */
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r155 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 752, CPyStatic_meet___globals);
        goto CPyL136;
    }
    if (!cpy_r_r155) goto CPyL109;
    cpy_r_r156 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r156);
    cpy_r_r157 = CPyDef_nodes___TypeInfo___is_metaclass(cpy_r_r156);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r157 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 752, CPyStatic_meet___globals);
        goto CPyL136;
    }
    if (!cpy_r_r157) goto CPyL109;
    cpy_r_r158 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 753, CPyStatic_meet___globals);
        goto CPyL136;
    }
CPyL98: ;
    if (likely((Py_TYPE(cpy_r_r158) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r158) == CPyType_types___Overloaded)))
        cpy_r_r159 = cpy_r_r158;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 753, CPyStatic_meet___globals, "mypy.types.FunctionLike", cpy_r_r158);
        goto CPyL136;
    }
    cpy_r_r160 = ((mypy___types___FunctionLikeObject *)cpy_r_r159)->_fallback;
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "FunctionLike", "fallback", 753, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r160);
CPyL100: ;
    cpy_r_r161 = NULL;
    cpy_r_r162 = 2;
    cpy_r_r163 = 2;
    cpy_r_r164 = 2;
    cpy_r_r165 = 2;
    cpy_r_r166 = 2;
    cpy_r_r167 = NULL;
    cpy_r_r168 = CPyDef_subtypes___is_subtype(cpy_r_r160, cpy_r_t, cpy_r_r161, cpy_r_r162, cpy_r_r163, cpy_r_r164, cpy_r_r165, cpy_r_r166, cpy_r_r167);
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r168 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 753, CPyStatic_meet___globals);
        goto CPyL136;
    }
    if (!cpy_r_r168) goto CPyL105;
    cpy_r_r169 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 754, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r169);
CPyL103: ;
    if (likely((Py_TYPE(cpy_r_r169) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r169) == CPyType_types___Overloaded)))
        cpy_r_r170 = cpy_r_r169;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 754, CPyStatic_meet___globals, "mypy.types.FunctionLike", cpy_r_r169);
        goto CPyL136;
    }
    return cpy_r_r170;
CPyL105: ;
    cpy_r_r171 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 755, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r171);
CPyL106: ;
    if (likely((Py_TYPE(cpy_r_r171) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r171) == CPyType_types___Overloaded)))
        cpy_r_r172 = cpy_r_r171;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 755, CPyStatic_meet___globals, "mypy.types.FunctionLike", cpy_r_r171);
        goto CPyL136;
    }
    cpy_r_r173 = CPyDef_meet___TypeMeetVisitor___default(cpy_r_self, cpy_r_r172);
    CPy_DECREF(cpy_r_r172);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 755, CPyStatic_meet___globals);
        goto CPyL136;
    }
    return cpy_r_r173;
CPyL109: ;
    cpy_r_r174 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 756, CPyStatic_meet___globals);
        goto CPyL136;
    }
CPyL110: ;
    cpy_r_r175 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r176 = (CPyPtr)&((PyObject *)cpy_r_r174)->ob_type;
    cpy_r_r177 = *(PyObject * *)cpy_r_r176;
    cpy_r_r178 = cpy_r_r177 == cpy_r_r175;
    if (!cpy_r_r178) goto CPyL115;
    cpy_r_r179 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 757, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r179);
CPyL112: ;
    if (likely(Py_TYPE(cpy_r_r179) == CPyType_types___TypeType))
        cpy_r_r180 = cpy_r_r179;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 757, CPyStatic_meet___globals, "mypy.types.TypeType", cpy_r_r179);
        goto CPyL136;
    }
    cpy_r_r181 = CPyDef_meet___meet_types(cpy_r_t, cpy_r_r180);
    CPy_DECREF(cpy_r_r180);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 757, CPyStatic_meet___globals);
        goto CPyL136;
    }
    return cpy_r_r181;
CPyL115: ;
    cpy_r_r182 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 758, CPyStatic_meet___globals);
        goto CPyL136;
    }
CPyL116: ;
    cpy_r_r183 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r184 = (CPyPtr)&((PyObject *)cpy_r_r182)->ob_type;
    cpy_r_r185 = *(PyObject * *)cpy_r_r184;
    cpy_r_r186 = cpy_r_r185 == cpy_r_r183;
    if (!cpy_r_r186) goto CPyL121;
    cpy_r_r187 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 759, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r187);
CPyL118: ;
    if (likely(Py_TYPE(cpy_r_r187) == CPyType_types___TupleType))
        cpy_r_r188 = cpy_r_r187;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 759, CPyStatic_meet___globals, "mypy.types.TupleType", cpy_r_r187);
        goto CPyL136;
    }
    cpy_r_r189 = CPyDef_meet___meet_types(cpy_r_t, cpy_r_r188);
    CPy_DECREF(cpy_r_r188);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 759, CPyStatic_meet___globals);
        goto CPyL136;
    }
    return cpy_r_r189;
CPyL121: ;
    cpy_r_r190 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 760, CPyStatic_meet___globals);
        goto CPyL136;
    }
CPyL122: ;
    cpy_r_r191 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r192 = (CPyPtr)&((PyObject *)cpy_r_r190)->ob_type;
    cpy_r_r193 = *(PyObject * *)cpy_r_r192;
    cpy_r_r194 = cpy_r_r193 == cpy_r_r191;
    if (!cpy_r_r194) goto CPyL127;
    cpy_r_r195 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 761, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r195);
CPyL124: ;
    if (likely(Py_TYPE(cpy_r_r195) == CPyType_types___LiteralType))
        cpy_r_r196 = cpy_r_r195;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 761, CPyStatic_meet___globals, "mypy.types.LiteralType", cpy_r_r195);
        goto CPyL136;
    }
    cpy_r_r197 = CPyDef_meet___meet_types(cpy_r_t, cpy_r_r196);
    CPy_DECREF(cpy_r_r196);
    if (unlikely(cpy_r_r197 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 761, CPyStatic_meet___globals);
        goto CPyL136;
    }
    return cpy_r_r197;
CPyL127: ;
    cpy_r_r198 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 762, CPyStatic_meet___globals);
        goto CPyL136;
    }
CPyL128: ;
    cpy_r_r199 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r200 = (CPyPtr)&((PyObject *)cpy_r_r198)->ob_type;
    cpy_r_r201 = *(PyObject * *)cpy_r_r200;
    cpy_r_r202 = cpy_r_r201 == cpy_r_r199;
    if (!cpy_r_r202) goto CPyL133;
    cpy_r_r203 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 763, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r203);
CPyL130: ;
    if (likely(Py_TYPE(cpy_r_r203) == CPyType_types___TypedDictType))
        cpy_r_r204 = cpy_r_r203;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_instance", 763, CPyStatic_meet___globals, "mypy.types.TypedDictType", cpy_r_r203);
        goto CPyL136;
    }
    cpy_r_r205 = CPyDef_meet___meet_types(cpy_r_t, cpy_r_r204);
    CPy_DECREF(cpy_r_r204);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 763, CPyStatic_meet___globals);
        goto CPyL136;
    }
    return cpy_r_r205;
CPyL133: ;
    cpy_r_r206 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_instance", "TypeMeetVisitor", "s", 764, CPyStatic_meet___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r206);
CPyL134: ;
    cpy_r_r207 = CPyDef_meet___TypeMeetVisitor___default(cpy_r_self, cpy_r_r206);
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_instance", 764, CPyStatic_meet___globals);
        goto CPyL136;
    }
    return cpy_r_r207;
CPyL136: ;
    cpy_r_r208 = NULL;
    return cpy_r_r208;
CPyL137: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL136;
CPyL138: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r31);
    goto CPyL136;
CPyL139: ;
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r35);
    goto CPyL26;
CPyL140: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r35);
    goto CPyL136;
CPyL141: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_ta);
    goto CPyL136;
CPyL142: ;
    CPy_DECREF(cpy_r_alt_promote);
    goto CPyL43;
CPyL143: ;
    CPy_DecRef(cpy_r_alt_promote);
    goto CPyL136;
CPyL144: ;
    CPy_DecRef(cpy_r_r75);
    goto CPyL136;
CPyL145: ;
    CPy_DECREF(cpy_r_alt_promote);
    goto CPyL52;
CPyL146: ;
    CPy_DECREF(cpy_r_call);
    goto CPyL133;
CPyL147: ;
    CPy_DecRef(cpy_r_r139);
    goto CPyL136;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_instance(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_instance", 714, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_result;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    CPyTagged cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyPtr cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_call;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    cpy_r_r0 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_callable_type", "TypeMeetVisitor", "s", 767, CPyStatic_meet___globals);
        goto CPyL74;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL39;
    cpy_r_r5 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_callable_type", "TypeMeetVisitor", "s", 767, CPyStatic_meet___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___CallableType))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_callable_type", 767, CPyStatic_meet___globals, "mypy.types.CallableType", cpy_r_r5);
        goto CPyL74;
    }
    cpy_r_r7 = CPyDef_join___is_similar_callables(cpy_r_t, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 767, CPyStatic_meet___globals);
        goto CPyL74;
    }
    if (!cpy_r_r7) goto CPyL39;
    cpy_r_r8 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_callable_type", "TypeMeetVisitor", "s", 768, CPyStatic_meet___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_types___CallableType))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_callable_type", 768, CPyStatic_meet___globals, "mypy.types.CallableType", cpy_r_r8);
        goto CPyL74;
    }
    cpy_r_r10 = 2;
    cpy_r_r11 = 2;
    cpy_r_r12 = NULL;
    cpy_r_r13 = NULL;
    cpy_r_r14 = CPyDef_subtypes___is_equivalent(cpy_r_t, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 768, CPyStatic_meet___globals);
        goto CPyL74;
    }
    if (!cpy_r_r14) goto CPyL14;
    cpy_r_r15 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_callable_type", "TypeMeetVisitor", "s", 769, CPyStatic_meet___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r15);
CPyL11: ;
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_types___CallableType))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_callable_type", 769, CPyStatic_meet___globals, "mypy.types.CallableType", cpy_r_r15);
        goto CPyL74;
    }
    cpy_r_r17 = CPyDef_join___combine_similar_callables(cpy_r_t, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 769, CPyStatic_meet___globals);
        goto CPyL74;
    }
    return cpy_r_r17;
CPyL14: ;
    cpy_r_r18 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_callable_type", "TypeMeetVisitor", "s", 770, CPyStatic_meet___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r18);
CPyL15: ;
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_types___CallableType))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_callable_type", 770, CPyStatic_meet___globals, "mypy.types.CallableType", cpy_r_r18);
        goto CPyL74;
    }
    cpy_r_r20 = CPyDef_meet___meet_similar_callables(cpy_r_t, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 770, CPyStatic_meet___globals);
        goto CPyL74;
    }
    cpy_r_result = cpy_r_r20;
    cpy_r_r21 = CPyDef_types___CallableType___is_type_obj(cpy_r_t);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 774, CPyStatic_meet___globals);
        goto CPyL75;
    }
    if (!cpy_r_r21) goto CPyL22;
    cpy_r_r22 = CPyDef_types___CallableType___type_object(cpy_r_t);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 774, CPyStatic_meet___globals);
        goto CPyL75;
    }
    cpy_r_r23 = ((mypy___nodes___TypeInfoObject *)cpy_r_r22)->_is_abstract;
    if (unlikely(cpy_r_r23 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'is_abstract' of 'TypeInfo' undefined");
    }
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 774, CPyStatic_meet___globals);
        goto CPyL75;
    }
CPyL21: ;
    if (cpy_r_r23) goto CPyL32;
CPyL22: ;
    cpy_r_r24 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_callable_type", "TypeMeetVisitor", "s", 775, CPyStatic_meet___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r24);
CPyL23: ;
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_types___CallableType))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_callable_type", 775, CPyStatic_meet___globals, "mypy.types.CallableType", cpy_r_r24);
        goto CPyL75;
    }
    cpy_r_r26 = CPyDef_types___CallableType___is_type_obj(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 775, CPyStatic_meet___globals);
        goto CPyL75;
    }
    if (!cpy_r_r26) goto CPyL31;
    cpy_r_r27 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_callable_type", "TypeMeetVisitor", "s", 775, CPyStatic_meet___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r27);
CPyL27: ;
    if (likely(Py_TYPE(cpy_r_r27) == CPyType_types___CallableType))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_callable_type", 775, CPyStatic_meet___globals, "mypy.types.CallableType", cpy_r_r27);
        goto CPyL75;
    }
    cpy_r_r29 = CPyDef_types___CallableType___type_object(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 775, CPyStatic_meet___globals);
        goto CPyL75;
    }
    cpy_r_r30 = ((mypy___nodes___TypeInfoObject *)cpy_r_r29)->_is_abstract;
    if (unlikely(cpy_r_r30 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'is_abstract' of 'TypeInfo' undefined");
    }
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 775, CPyStatic_meet___globals);
        goto CPyL75;
    }
CPyL30: ;
    if (cpy_r_r30) goto CPyL32;
CPyL31: ;
    ((mypy___types___CallableTypeObject *)cpy_r_result)->_from_type_type = 1;
CPyL32: ;
    cpy_r_r32 = ((mypy___types___CallableTypeObject *)cpy_r_result)->_ret_type;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyDef_types___get_proper_type(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 778, CPyStatic_meet___globals);
        goto CPyL75;
    }
    cpy_r_r34 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_r33)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    CPy_DECREF(cpy_r_r33);
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    if (cpy_r_r37) {
        goto CPyL76;
    } else
        goto CPyL38;
CPyL34: ;
    cpy_r_r38 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_callable_type", "TypeMeetVisitor", "s", 780, CPyStatic_meet___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r38);
CPyL35: ;
    if (likely(Py_TYPE(cpy_r_r38) == CPyType_types___CallableType))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_callable_type", 780, CPyStatic_meet___globals, "mypy.types.CallableType", cpy_r_r38);
        goto CPyL74;
    }
    cpy_r_r40 = CPyDef_meet___TypeMeetVisitor___default(cpy_r_self, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 780, CPyStatic_meet___globals);
        goto CPyL74;
    }
    return cpy_r_r40;
CPyL38: ;
    return cpy_r_result;
CPyL39: ;
    cpy_r_r41 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_callable_type", "TypeMeetVisitor", "s", 782, CPyStatic_meet___globals);
        goto CPyL74;
    }
CPyL40: ;
    cpy_r_r42 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_r41)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    if (!cpy_r_r45) goto CPyL58;
    cpy_r_r46 = CPyDef_types___CallableType___is_type_obj(cpy_r_t);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 782, CPyStatic_meet___globals);
        goto CPyL74;
    }
    if (!cpy_r_r46) goto CPyL58;
    cpy_r_r47 = CPyDef_types___CallableType___is_generic(cpy_r_t);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 782, CPyStatic_meet___globals);
        goto CPyL74;
    }
    if (cpy_r_r47) goto CPyL58;
    cpy_r_r48 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_callable_type", "TypeMeetVisitor", "s", 784, CPyStatic_meet___globals);
        goto CPyL74;
    }
CPyL46: ;
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_types___TypeType))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_callable_type", 784, CPyStatic_meet___globals, "mypy.types.TypeType", cpy_r_r48);
        goto CPyL74;
    }
    cpy_r_r50 = ((mypy___types___TypeTypeObject *)cpy_r_r49)->_item;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = CPyDef_meet___meet_types(cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 784, CPyStatic_meet___globals);
        goto CPyL74;
    }
    cpy_r_res = cpy_r_r52;
    cpy_r_r53 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_res)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    if (!cpy_r_r56) goto CPyL50;
    cpy_r_r57 = cpy_r_r56;
    goto CPyL51;
CPyL50: ;
    cpy_r_r58 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r59 = (CPyPtr)&((PyObject *)cpy_r_res)->ob_type;
    cpy_r_r60 = *(PyObject * *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 == cpy_r_r58;
    cpy_r_r57 = cpy_r_r61;
CPyL51: ;
    if (cpy_r_r57) goto CPyL77;
    cpy_r_r62 = CPY_INT_TAG;
    cpy_r_r63 = CPY_INT_TAG;
    cpy_r_r64 = CPyDef_types___TypeType___make_normalized(cpy_r_res, cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_res);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 786, CPyStatic_meet___globals);
        goto CPyL74;
    }
    return cpy_r_r64;
CPyL54: ;
    cpy_r_r65 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_callable_type", "TypeMeetVisitor", "s", 787, CPyStatic_meet___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r65);
CPyL55: ;
    if (likely(Py_TYPE(cpy_r_r65) == CPyType_types___TypeType))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_callable_type", 787, CPyStatic_meet___globals, "mypy.types.TypeType", cpy_r_r65);
        goto CPyL74;
    }
    cpy_r_r67 = CPyDef_meet___TypeMeetVisitor___default(cpy_r_self, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 787, CPyStatic_meet___globals);
        goto CPyL74;
    }
    return cpy_r_r67;
CPyL58: ;
    cpy_r_r68 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_callable_type", "TypeMeetVisitor", "s", 788, CPyStatic_meet___globals);
        goto CPyL74;
    }
CPyL59: ;
    cpy_r_r69 = (PyObject *)CPyType_types___Instance;
    cpy_r_r70 = (CPyPtr)&((PyObject *)cpy_r_r68)->ob_type;
    cpy_r_r71 = *(PyObject * *)cpy_r_r70;
    cpy_r_r72 = cpy_r_r71 == cpy_r_r69;
    if (!cpy_r_r72) goto CPyL71;
    cpy_r_r73 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_callable_type", "TypeMeetVisitor", "s", 788, CPyStatic_meet___globals);
        goto CPyL74;
    }
CPyL61: ;
    if (likely(Py_TYPE(cpy_r_r73) == CPyType_types___Instance))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_callable_type", 788, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r73);
        goto CPyL74;
    }
    cpy_r_r75 = ((mypy___types___InstanceObject *)cpy_r_r74)->_type;
    cpy_r_r76 = ((mypy___nodes___TypeInfoObject *)cpy_r_r75)->_is_protocol;
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AttributeError("mypy/meet.py", "visit_callable_type", "TypeInfo", "is_protocol", 788, CPyStatic_meet___globals);
        goto CPyL74;
    }
CPyL63: ;
    if (!cpy_r_r76) goto CPyL71;
CPyL64: ;
    cpy_r_r77 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_callable_type", "TypeMeetVisitor", "s", 789, CPyStatic_meet___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r77);
CPyL65: ;
    if (likely(Py_TYPE(cpy_r_r77) == CPyType_types___Instance))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_callable_type", 789, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r77);
        goto CPyL74;
    }
    cpy_r_r79 = CPyDef_join___unpack_callback_protocol(cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 789, CPyStatic_meet___globals);
        goto CPyL74;
    }
    cpy_r_call = cpy_r_r79;
    cpy_r_r80 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r81 = cpy_r_call != cpy_r_r80;
    if (!cpy_r_r81) goto CPyL78;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r82 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_callable_type", 791, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_call);
        goto CPyL74;
    }
    cpy_r_r83 = CPyDef_meet___meet_types(cpy_r_t, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 791, CPyStatic_meet___globals);
        goto CPyL74;
    }
    return cpy_r_r83;
CPyL71: ;
    cpy_r_r84 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_callable_type", "TypeMeetVisitor", "s", 792, CPyStatic_meet___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r84);
CPyL72: ;
    cpy_r_r85 = CPyDef_meet___TypeMeetVisitor___default(cpy_r_self, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 792, CPyStatic_meet___globals);
        goto CPyL74;
    }
    return cpy_r_r85;
CPyL74: ;
    cpy_r_r86 = NULL;
    return cpy_r_r86;
CPyL75: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL74;
CPyL76: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL34;
CPyL77: ;
    CPy_DECREF(cpy_r_res);
    goto CPyL54;
CPyL78: ;
    CPy_DECREF(cpy_r_call);
    goto CPyL71;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_callable_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_callable_type", 766, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_call;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    cpy_r_r0 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_overloaded", "TypeMeetVisitor", "s", 797, CPyStatic_meet___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_s = cpy_r_r0;
    cpy_r_r1 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL4;
CPyL3: ;
    cpy_r_r6 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    cpy_r_r5 = cpy_r_r9;
CPyL4: ;
    if (!cpy_r_r5) goto CPyL27;
    CPy_INCREF(cpy_r_s);
    if (likely((Py_TYPE(cpy_r_s) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_s) == CPyType_types___Overloaded)))
        cpy_r_r10 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_overloaded", 799, CPyStatic_meet___globals, "mypy.types.FunctionLike", cpy_r_s);
        goto CPyL43;
    }
    cpy_r_r11 = CPY_GET_ATTR(cpy_r_r10, CPyType_types___FunctionLike, 18, mypy___types___FunctionLikeObject, PyObject *); /* items */
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_overloaded", 799, CPyStatic_meet___globals);
        goto CPyL43;
    }
CPyL7: ;
    cpy_r_r12 = CPY_GET_ATTR(cpy_r_t, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_overloaded", 799, CPyStatic_meet___globals);
        goto CPyL44;
    }
CPyL8: ;
    cpy_r_r13 = PyObject_RichCompare(cpy_r_r11, cpy_r_r12, 2);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_overloaded", 799, CPyStatic_meet___globals);
        goto CPyL43;
    }
    if (unlikely(!PyBool_Check(cpy_r_r13))) {
        CPy_TypeError("bool", cpy_r_r13); cpy_r_r14 = 2;
    } else
        cpy_r_r14 = cpy_r_r13 == Py_True;
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_overloaded", 799, CPyStatic_meet___globals);
        goto CPyL43;
    }
    if (cpy_r_r14) {
        goto CPyL45;
    } else
        goto CPyL14;
CPyL11: ;
    cpy_r_r15 = CPY_GET_ATTR(cpy_r_t, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_overloaded", 800, CPyStatic_meet___globals);
        goto CPyL42;
    }
CPyL12: ;
    cpy_r_r16 = CPyDef_types___Overloaded(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_overloaded", 800, CPyStatic_meet___globals);
        goto CPyL42;
    }
    return cpy_r_r16;
CPyL14: ;
    CPy_INCREF(cpy_r_s);
    if (likely((Py_TYPE(cpy_r_s) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_s) == CPyType_types___Overloaded)))
        cpy_r_r17 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_overloaded", 801, CPyStatic_meet___globals, "mypy.types.FunctionLike", cpy_r_s);
        goto CPyL43;
    }
    cpy_r_r18 = NULL;
    cpy_r_r19 = 2;
    cpy_r_r20 = 2;
    cpy_r_r21 = 2;
    cpy_r_r22 = 2;
    cpy_r_r23 = 2;
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyDef_subtypes___is_subtype(cpy_r_r17, cpy_r_t, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r22, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_overloaded", 801, CPyStatic_meet___globals);
        goto CPyL43;
    }
    if (!cpy_r_r25) goto CPyL19;
    if (likely((Py_TYPE(cpy_r_s) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_s) == CPyType_types___Overloaded)))
        cpy_r_r26 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_overloaded", 802, CPyStatic_meet___globals, "mypy.types.FunctionLike", cpy_r_s);
        goto CPyL42;
    }
    return cpy_r_r26;
CPyL19: ;
    CPy_INCREF(cpy_r_s);
    if (likely((Py_TYPE(cpy_r_s) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_s) == CPyType_types___Overloaded)))
        cpy_r_r27 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_overloaded", 803, CPyStatic_meet___globals, "mypy.types.FunctionLike", cpy_r_s);
        goto CPyL43;
    }
    cpy_r_r28 = NULL;
    cpy_r_r29 = 2;
    cpy_r_r30 = 2;
    cpy_r_r31 = 2;
    cpy_r_r32 = 2;
    cpy_r_r33 = 2;
    cpy_r_r34 = NULL;
    cpy_r_r35 = CPyDef_subtypes___is_subtype(cpy_r_t, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_overloaded", 803, CPyStatic_meet___globals);
        goto CPyL43;
    }
    if (cpy_r_r35) {
        goto CPyL46;
    } else
        goto CPyL23;
CPyL22: ;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL23: ;
    cpy_r_r36 = ((mypy___types___OverloadedObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r36);
    if (likely((Py_TYPE(cpy_r_s) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_s) == CPyType_types___Overloaded)))
        cpy_r_r37 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_overloaded", 806, CPyStatic_meet___globals, "mypy.types.FunctionLike", cpy_r_s);
        goto CPyL47;
    }
    cpy_r_r38 = ((mypy___types___FunctionLikeObject *)cpy_r_r37)->_fallback;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_overloaded", "FunctionLike", "fallback", 806, CPyStatic_meet___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r38);
CPyL25: ;
    CPy_DECREF(cpy_r_s);
    cpy_r_r39 = CPyDef_meet___meet_types(cpy_r_r36, cpy_r_r38);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_overloaded", 806, CPyStatic_meet___globals);
        goto CPyL42;
    }
    return cpy_r_r39;
CPyL27: ;
    cpy_r_r40 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_overloaded", "TypeMeetVisitor", "s", 807, CPyStatic_meet___globals);
        goto CPyL43;
    }
CPyL28: ;
    cpy_r_r41 = (PyObject *)CPyType_types___Instance;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_r40)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (!cpy_r_r44) goto CPyL40;
    cpy_r_r45 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_overloaded", "TypeMeetVisitor", "s", 807, CPyStatic_meet___globals);
        goto CPyL43;
    }
CPyL30: ;
    if (likely(Py_TYPE(cpy_r_r45) == CPyType_types___Instance))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_overloaded", 807, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r45);
        goto CPyL43;
    }
    cpy_r_r47 = ((mypy___types___InstanceObject *)cpy_r_r46)->_type;
    cpy_r_r48 = ((mypy___nodes___TypeInfoObject *)cpy_r_r47)->_is_protocol;
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AttributeError("mypy/meet.py", "visit_overloaded", "TypeInfo", "is_protocol", 807, CPyStatic_meet___globals);
        goto CPyL43;
    }
CPyL32: ;
    if (!cpy_r_r48) goto CPyL40;
CPyL33: ;
    cpy_r_r49 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_overloaded", "TypeMeetVisitor", "s", 808, CPyStatic_meet___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r49);
CPyL34: ;
    if (likely(Py_TYPE(cpy_r_r49) == CPyType_types___Instance))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_overloaded", 808, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r49);
        goto CPyL43;
    }
    cpy_r_r51 = CPyDef_join___unpack_callback_protocol(cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_overloaded", 808, CPyStatic_meet___globals);
        goto CPyL43;
    }
    cpy_r_call = cpy_r_r51;
    cpy_r_r52 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r53 = cpy_r_call != cpy_r_r52;
    if (cpy_r_r53) {
        goto CPyL48;
    } else
        goto CPyL49;
CPyL37: ;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r54 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_overloaded", 810, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_call);
        goto CPyL42;
    }
    cpy_r_r55 = CPyDef_meet___meet_types(cpy_r_t, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_overloaded", 810, CPyStatic_meet___globals);
        goto CPyL42;
    }
    return cpy_r_r55;
CPyL40: ;
    cpy_r_r56 = ((mypy___types___OverloadedObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = CPyDef_meet___meet_types(cpy_r_r56, cpy_r_s);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_overloaded", 811, CPyStatic_meet___globals);
        goto CPyL42;
    }
    return cpy_r_r57;
CPyL42: ;
    cpy_r_r58 = NULL;
    return cpy_r_r58;
CPyL43: ;
    CPy_DecRef(cpy_r_s);
    goto CPyL42;
CPyL44: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r11);
    goto CPyL42;
CPyL45: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL11;
CPyL46: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL22;
CPyL47: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r36);
    goto CPyL42;
CPyL48: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL37;
CPyL49: ;
    CPy_DECREF(cpy_r_call);
    goto CPyL40;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_overloaded(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_overloaded", 794, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_overloaded__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_overloaded(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_overloaded__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_overloaded__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_overloaded__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    int64_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_items;
    CPyTagged cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r16;
    char cpy_r_r17;
    int64_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
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
    int32_t cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyTagged cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyPtr cpy_r_r64;
    int64_t cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyTagged cpy_r_r67;
    CPyPtr cpy_r_r68;
    int64_t cpy_r_r69;
    CPyTagged cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_it;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    CPyTagged cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    cpy_r_r0 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_tuple_type", "TypeMeetVisitor", "s", 814, CPyStatic_meet___globals);
        goto CPyL62;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL28;
    cpy_r_r5 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_tuple_type", "TypeMeetVisitor", "s", 814, CPyStatic_meet___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___TupleType))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_tuple_type", 814, CPyStatic_meet___globals, "mypy.types.TupleType", cpy_r_r5);
        goto CPyL62;
    }
    cpy_r_r7 = CPyDef_types___TupleType___length(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 814, CPyStatic_meet___globals);
        goto CPyL62;
    }
    cpy_r_r8 = CPyDef_types___TupleType___length(cpy_r_t);
    if (unlikely(cpy_r_r8 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 814, CPyStatic_meet___globals);
        goto CPyL63;
    }
    cpy_r_r9 = cpy_r_r7 & 1;
    cpy_r_r10 = cpy_r_r9 != 0;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r11 = CPyTagged_IsEq_(cpy_r_r7, cpy_r_r8);
    CPyTagged_DECREF(cpy_r_r7);
    CPyTagged_DECREF(cpy_r_r8);
    if (cpy_r_r11) {
        goto CPyL9;
    } else
        goto CPyL28;
CPyL8: ;
    cpy_r_r12 = cpy_r_r7 == cpy_r_r8;
    CPyTagged_DECREF(cpy_r_r7);
    CPyTagged_DECREF(cpy_r_r8);
    if (!cpy_r_r12) goto CPyL28;
CPyL9: ;
    cpy_r_r13 = PyList_New(0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 815, CPyStatic_meet___globals);
        goto CPyL62;
    }
    cpy_r_items = cpy_r_r13;
    cpy_r_r14 = CPyDef_types___TupleType___length(cpy_r_t);
    if (unlikely(cpy_r_r14 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 816, CPyStatic_meet___globals);
        goto CPyL64;
    }
    cpy_r_r15 = 0;
    CPyTagged_INCREF(cpy_r_r15);
    cpy_r_i = cpy_r_r15;
CPyL12: ;
    cpy_r_r16 = cpy_r_r15 & 1;
    cpy_r_r17 = cpy_r_r16 == 0;
    cpy_r_r18 = cpy_r_r14 & 1;
    cpy_r_r19 = cpy_r_r18 == 0;
    cpy_r_r20 = cpy_r_r17 & cpy_r_r19;
    if (!cpy_r_r20) goto CPyL14;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r14;
    cpy_r_r22 = cpy_r_r21;
    goto CPyL15;
CPyL14: ;
    cpy_r_r23 = CPyTagged_IsLt_(cpy_r_r15, cpy_r_r14);
    cpy_r_r22 = cpy_r_r23;
CPyL15: ;
    if (!cpy_r_r22) goto CPyL65;
    cpy_r_r24 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_items;
    cpy_r_r25 = CPyList_GetItem(cpy_r_r24, cpy_r_i);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 817, CPyStatic_meet___globals);
        goto CPyL66;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r25, CPyType_types___Type)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_tuple_type", 817, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r25);
        goto CPyL66;
    }
    cpy_r_r27 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_tuple_type", "TypeMeetVisitor", "s", 817, CPyStatic_meet___globals);
        goto CPyL67;
    }
CPyL19: ;
    if (likely(Py_TYPE(cpy_r_r27) == CPyType_types___TupleType))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_tuple_type", 817, CPyStatic_meet___globals, "mypy.types.TupleType", cpy_r_r27);
        goto CPyL67;
    }
    cpy_r_r29 = ((mypy___types___TupleTypeObject *)cpy_r_r28)->_items;
    cpy_r_r30 = CPyList_GetItem(cpy_r_r29, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 817, CPyStatic_meet___globals);
        goto CPyL68;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r30, CPyType_types___Type)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_tuple_type", 817, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r30);
        goto CPyL68;
    }
    cpy_r_r32 = CPyDef_meet___TypeMeetVisitor___meet(cpy_r_self, cpy_r_r26, cpy_r_r31);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 817, CPyStatic_meet___globals);
        goto CPyL69;
    }
    cpy_r_r33 = PyList_Append(cpy_r_items, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 817, CPyStatic_meet___globals);
        goto CPyL69;
    }
    cpy_r_r35 = CPyTagged_Add(cpy_r_r15, 2);
    CPyTagged_DECREF(cpy_r_r15);
    CPyTagged_INCREF(cpy_r_r35);
    cpy_r_r15 = cpy_r_r35;
    cpy_r_i = cpy_r_r35;
    goto CPyL12;
CPyL25: ;
    cpy_r_r36 = CPyDef_typeops___tuple_fallback(cpy_r_t);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 819, CPyStatic_meet___globals);
        goto CPyL64;
    }
    cpy_r_r37 = CPY_INT_TAG;
    cpy_r_r38 = CPY_INT_TAG;
    cpy_r_r39 = 2;
    cpy_r_r40 = CPyDef_types___TupleType(cpy_r_items, cpy_r_r36, cpy_r_r37, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 819, CPyStatic_meet___globals);
        goto CPyL62;
    }
    return cpy_r_r40;
CPyL28: ;
    cpy_r_r41 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_tuple_type", "TypeMeetVisitor", "s", 820, CPyStatic_meet___globals);
        goto CPyL62;
    }
CPyL29: ;
    cpy_r_r42 = (PyObject *)CPyType_types___Instance;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_r41)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    if (!cpy_r_r45) goto CPyL59;
    cpy_r_r46 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_tuple_type", "TypeMeetVisitor", "s", 822, CPyStatic_meet___globals);
        goto CPyL62;
    }
CPyL31: ;
    if (likely(Py_TYPE(cpy_r_r46) == CPyType_types___Instance))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_tuple_type", 822, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r46);
        goto CPyL62;
    }
    cpy_r_r48 = ((mypy___types___InstanceObject *)cpy_r_r47)->_type;
    CPy_INCREF(cpy_r_r48);
    cpy_r_r49 = CPY_GET_ATTR(cpy_r_r48, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 822, CPyStatic_meet___globals);
        goto CPyL62;
    }
CPyL33: ;
    cpy_r_r50 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r51 = PyUnicode_Compare(cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r52 = cpy_r_r51 == -1;
    if (!cpy_r_r52) goto CPyL36;
    cpy_r_r53 = PyErr_Occurred();
    cpy_r_r54 = cpy_r_r53 != NULL;
    if (!cpy_r_r54) goto CPyL36;
    cpy_r_r55 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 822, CPyStatic_meet___globals);
        goto CPyL62;
    }
CPyL36: ;
    cpy_r_r56 = cpy_r_r51 == 0;
    if (!cpy_r_r56) goto CPyL54;
    cpy_r_r57 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_tuple_type", "TypeMeetVisitor", "s", 822, CPyStatic_meet___globals);
        goto CPyL62;
    }
CPyL38: ;
    if (likely(Py_TYPE(cpy_r_r57) == CPyType_types___Instance))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_tuple_type", 822, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r57);
        goto CPyL62;
    }
    cpy_r_r59 = ((mypy___types___InstanceObject *)cpy_r_r58)->_args;
    CPy_INCREF(cpy_r_r59);
    cpy_r_r60 = PyObject_IsTrue(cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 822, CPyStatic_meet___globals);
        goto CPyL62;
    }
    cpy_r_r62 = cpy_r_r60;
    if (!cpy_r_r62) goto CPyL54;
    cpy_r_r63 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = (CPyPtr)&((PyVarObject *)cpy_r_r63)->ob_size;
    cpy_r_r65 = *(int64_t *)cpy_r_r64;
    cpy_r_r66 = PyList_New(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 823, CPyStatic_meet___globals);
        goto CPyL70;
    }
    cpy_r_r67 = 0;
CPyL43: ;
    cpy_r_r68 = (CPyPtr)&((PyVarObject *)cpy_r_r63)->ob_size;
    cpy_r_r69 = *(int64_t *)cpy_r_r68;
    cpy_r_r70 = cpy_r_r69 << 1;
    cpy_r_r71 = (Py_ssize_t)cpy_r_r67 < (Py_ssize_t)cpy_r_r70;
    if (!cpy_r_r71) goto CPyL71;
    cpy_r_r72 = CPyList_GetItemUnsafe(cpy_r_r63, cpy_r_r67);
    if (likely(PyObject_TypeCheck(cpy_r_r72, CPyType_types___Type)))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_tuple_type", 823, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r72);
        goto CPyL72;
    }
    cpy_r_it = cpy_r_r73;
    cpy_r_r74 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_tuple_type", "TypeMeetVisitor", "s", 823, CPyStatic_meet___globals);
        goto CPyL73;
    }
CPyL46: ;
    if (likely(Py_TYPE(cpy_r_r74) == CPyType_types___Instance))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_tuple_type", 823, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r74);
        goto CPyL73;
    }
    cpy_r_r76 = ((mypy___types___InstanceObject *)cpy_r_r75)->_args;
    CPy_INCREF(cpy_r_r76);
    cpy_r_r77 = CPySequenceTuple_GetItem(cpy_r_r76, 0);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 823, CPyStatic_meet___globals);
        goto CPyL73;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r77, CPyType_types___Type)))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_tuple_type", 823, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r77);
        goto CPyL73;
    }
    cpy_r_r79 = CPyDef_meet___meet_types(cpy_r_it, cpy_r_r78);
    CPy_DECREF(cpy_r_it);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 823, CPyStatic_meet___globals);
        goto CPyL72;
    }
    cpy_r_r80 = CPyList_SetItemUnsafe(cpy_r_r66, cpy_r_r67, cpy_r_r79);
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 823, CPyStatic_meet___globals);
        goto CPyL72;
    }
    cpy_r_r81 = cpy_r_r67 + 2;
    cpy_r_r67 = cpy_r_r81;
    goto CPyL43;
CPyL52: ;
    cpy_r_r82 = NULL;
    cpy_r_r83 = CPyDef_types___TupleType___copy_modified(cpy_r_t, cpy_r_r82, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 823, CPyStatic_meet___globals);
        goto CPyL62;
    }
    return cpy_r_r83;
CPyL54: ;
    cpy_r_r84 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_tuple_type", "TypeMeetVisitor", "s", 824, CPyStatic_meet___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r84);
CPyL55: ;
    if (likely(Py_TYPE(cpy_r_r84) == CPyType_types___Instance))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_tuple_type", 824, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r84);
        goto CPyL62;
    }
    cpy_r_r86 = NULL;
    cpy_r_r87 = 2;
    cpy_r_r88 = 2;
    cpy_r_r89 = 2;
    cpy_r_r90 = 2;
    cpy_r_r91 = CPyDef_subtypes___is_proper_subtype(cpy_r_t, cpy_r_r85, cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 824, CPyStatic_meet___globals);
        goto CPyL62;
    }
    if (!cpy_r_r91) goto CPyL59;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL59: ;
    cpy_r_r92 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_tuple_type", "TypeMeetVisitor", "s", 827, CPyStatic_meet___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r92);
CPyL60: ;
    cpy_r_r93 = CPyDef_meet___TypeMeetVisitor___default(cpy_r_self, cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 827, CPyStatic_meet___globals);
        goto CPyL62;
    }
    return cpy_r_r93;
CPyL62: ;
    cpy_r_r94 = NULL;
    return cpy_r_r94;
CPyL63: ;
    CPyTagged_DecRef(cpy_r_r7);
    goto CPyL62;
CPyL64: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL62;
CPyL65: ;
    CPyTagged_DECREF(cpy_r_r14);
    CPyTagged_DECREF(cpy_r_r15);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL25;
CPyL66: ;
    CPy_DecRef(cpy_r_items);
    CPyTagged_DecRef(cpy_r_r14);
    CPyTagged_DecRef(cpy_r_r15);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL62;
CPyL67: ;
    CPy_DecRef(cpy_r_items);
    CPyTagged_DecRef(cpy_r_r14);
    CPyTagged_DecRef(cpy_r_r15);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r26);
    goto CPyL62;
CPyL68: ;
    CPy_DecRef(cpy_r_items);
    CPyTagged_DecRef(cpy_r_r14);
    CPyTagged_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r26);
    goto CPyL62;
CPyL69: ;
    CPy_DecRef(cpy_r_items);
    CPyTagged_DecRef(cpy_r_r14);
    CPyTagged_DecRef(cpy_r_r15);
    goto CPyL62;
CPyL70: ;
    CPy_DecRef(cpy_r_r63);
    goto CPyL62;
CPyL71: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL52;
CPyL72: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r66);
    goto CPyL62;
CPyL73: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_it);
    goto CPyL62;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_tuple_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_tuple_type", 813, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_tuple_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_tuple_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_tuple_type__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T3OOO cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_l;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_item_list;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    tuple_T3OOO cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_item_name;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_s_item_type;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_t_item_type;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    tuple_T2OO cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    tuple_T2OO cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_fallback;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_required_keys;
    CPyTagged cpy_r_r70;
    CPyTagged cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    cpy_r_r0 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_typeddict_type", "TypeMeetVisitor", "s", 830, CPyStatic_meet___globals);
        goto CPyL56;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL46;
    cpy_r_r5 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_typeddict_type", "TypeMeetVisitor", "s", 831, CPyStatic_meet___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___TypedDictType))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_typeddict_type", 831, CPyStatic_meet___globals, "mypy.types.TypedDictType", cpy_r_r5);
        goto CPyL56;
    }
    cpy_r_r7 = CPyDef_types___TypedDictType___zip(cpy_r_r6, cpy_r_t);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 831, CPyStatic_meet___globals);
        goto CPyL56;
    }
    cpy_r_r8 = PyObject_GetIter(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 831, CPyStatic_meet___globals);
        goto CPyL56;
    }
CPyL6: ;
    cpy_r_r9 = PyIter_Next(cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL57;
    PyObject *__tmp3227;
    if (unlikely(!(PyTuple_Check(cpy_r_r9) && PyTuple_GET_SIZE(cpy_r_r9) == 3))) {
        __tmp3227 = NULL;
        goto __LL3228;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r9, 0))))
        __tmp3227 = PyTuple_GET_ITEM(cpy_r_r9, 0);
    else {
        __tmp3227 = NULL;
    }
    if (__tmp3227 == NULL) goto __LL3228;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r9, 1), CPyType_types___Type)))
        __tmp3227 = PyTuple_GET_ITEM(cpy_r_r9, 1);
    else {
        __tmp3227 = NULL;
    }
    if (__tmp3227 == NULL) goto __LL3228;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r9, 2), CPyType_types___Type)))
        __tmp3227 = PyTuple_GET_ITEM(cpy_r_r9, 2);
    else {
        __tmp3227 = NULL;
    }
    if (__tmp3227 == NULL) goto __LL3228;
    __tmp3227 = cpy_r_r9;
__LL3228: ;
    if (unlikely(__tmp3227 == NULL)) {
        CPy_TypeError("tuple[str, mypy.types.Type, mypy.types.Type]", cpy_r_r9); cpy_r_r10 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp3229 = PyTuple_GET_ITEM(cpy_r_r9, 0);
        CPy_INCREF(__tmp3229);
        PyObject *__tmp3230;
        if (likely(PyUnicode_Check(__tmp3229)))
            __tmp3230 = __tmp3229;
        else {
            CPy_TypeError("str", __tmp3229); 
            __tmp3230 = NULL;
        }
        cpy_r_r10.f0 = __tmp3230;
        PyObject *__tmp3231 = PyTuple_GET_ITEM(cpy_r_r9, 1);
        CPy_INCREF(__tmp3231);
        PyObject *__tmp3232;
        if (likely(PyObject_TypeCheck(__tmp3231, CPyType_types___Type)))
            __tmp3232 = __tmp3231;
        else {
            CPy_TypeError("mypy.types.Type", __tmp3231); 
            __tmp3232 = NULL;
        }
        cpy_r_r10.f1 = __tmp3232;
        PyObject *__tmp3233 = PyTuple_GET_ITEM(cpy_r_r9, 2);
        CPy_INCREF(__tmp3233);
        PyObject *__tmp3234;
        if (likely(PyObject_TypeCheck(__tmp3233, CPyType_types___Type)))
            __tmp3234 = __tmp3233;
        else {
            CPy_TypeError("mypy.types.Type", __tmp3233); 
            __tmp3234 = NULL;
        }
        cpy_r_r10.f2 = __tmp3234;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10.f0 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 831, CPyStatic_meet___globals);
        goto CPyL58;
    }
    cpy_r_r11 = cpy_r_r10.f0;
    CPy_INCREF(cpy_r_r11);
    cpy_r_name = cpy_r_r11;
    cpy_r_r12 = cpy_r_r10.f1;
    CPy_INCREF(cpy_r_r12);
    cpy_r_l = cpy_r_r12;
    cpy_r_r13 = cpy_r_r10.f2;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r10.f0);
    CPy_DECREF(cpy_r_r10.f1);
    CPy_DECREF(cpy_r_r10.f2);
    cpy_r_r = cpy_r_r13;
    cpy_r_r14 = 2;
    cpy_r_r15 = 2;
    cpy_r_r16 = NULL;
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPyDef_subtypes___is_equivalent(cpy_r_l, cpy_r_r, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_l);
    CPy_DECREF(cpy_r_r);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 832, CPyStatic_meet___globals);
        goto CPyL59;
    }
    if (!cpy_r_r18) goto CPyL60;
    cpy_r_r19 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_required_keys;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = PySet_Contains(cpy_r_r19, cpy_r_name);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 832, CPyStatic_meet___globals);
        goto CPyL59;
    }
    cpy_r_r22 = cpy_r_r20;
    cpy_r_r23 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_typeddict_type", "TypeMeetVisitor", "s", 833, CPyStatic_meet___globals);
        goto CPyL59;
    }
CPyL12: ;
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_types___TypedDictType))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_typeddict_type", 833, CPyStatic_meet___globals, "mypy.types.TypedDictType", cpy_r_r23);
        goto CPyL59;
    }
    cpy_r_r25 = ((mypy___types___TypedDictTypeObject *)cpy_r_r24)->_required_keys;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = PySet_Contains(cpy_r_r25, cpy_r_name);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_name);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 833, CPyStatic_meet___globals);
        goto CPyL58;
    }
    cpy_r_r28 = cpy_r_r26;
    cpy_r_r29 = cpy_r_r22 != cpy_r_r28;
    if (cpy_r_r29) {
        goto CPyL61;
    } else
        goto CPyL6;
CPyL15: ;
    cpy_r_r30 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_typeddict_type", "TypeMeetVisitor", "s", 835, CPyStatic_meet___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r30);
CPyL16: ;
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_types___TypedDictType))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_typeddict_type", 835, CPyStatic_meet___globals, "mypy.types.TypedDictType", cpy_r_r30);
        goto CPyL56;
    }
    cpy_r_r32 = CPyDef_meet___TypeMeetVisitor___default(cpy_r_self, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 835, CPyStatic_meet___globals);
        goto CPyL56;
    }
    return cpy_r_r32;
CPyL19: ;
    cpy_r_r33 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 831, CPyStatic_meet___globals);
        goto CPyL56;
    }
    cpy_r_r34 = PyList_New(0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 836, CPyStatic_meet___globals);
        goto CPyL56;
    }
    cpy_r_item_list = cpy_r_r34;
    cpy_r_r35 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_typeddict_type", "TypeMeetVisitor", "s", 837, CPyStatic_meet___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r35);
CPyL22: ;
    if (likely(Py_TYPE(cpy_r_r35) == CPyType_types___TypedDictType))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_typeddict_type", 837, CPyStatic_meet___globals, "mypy.types.TypedDictType", cpy_r_r35);
        goto CPyL62;
    }
    cpy_r_r37 = CPyDef_types___TypedDictType___zipall(cpy_r_r36, cpy_r_t);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 837, CPyStatic_meet___globals);
        goto CPyL62;
    }
    cpy_r_r38 = PyObject_GetIter(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 837, CPyStatic_meet___globals);
        goto CPyL62;
    }
CPyL25: ;
    cpy_r_r39 = PyIter_Next(cpy_r_r38);
    if (cpy_r_r39 == NULL) goto CPyL63;
    PyObject *__tmp3235;
    if (unlikely(!(PyTuple_Check(cpy_r_r39) && PyTuple_GET_SIZE(cpy_r_r39) == 3))) {
        __tmp3235 = NULL;
        goto __LL3236;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r39, 0))))
        __tmp3235 = PyTuple_GET_ITEM(cpy_r_r39, 0);
    else {
        __tmp3235 = NULL;
    }
    if (__tmp3235 == NULL) goto __LL3236;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r39, 1), CPyType_types___Type))
        __tmp3235 = PyTuple_GET_ITEM(cpy_r_r39, 1);
    else {
        __tmp3235 = NULL;
    }
    if (__tmp3235 != NULL) goto __LL3237;
    if (PyTuple_GET_ITEM(cpy_r_r39, 1) == Py_None)
        __tmp3235 = PyTuple_GET_ITEM(cpy_r_r39, 1);
    else {
        __tmp3235 = NULL;
    }
    if (__tmp3235 != NULL) goto __LL3237;
    __tmp3235 = NULL;
__LL3237: ;
    if (__tmp3235 == NULL) goto __LL3236;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r39, 2), CPyType_types___Type))
        __tmp3235 = PyTuple_GET_ITEM(cpy_r_r39, 2);
    else {
        __tmp3235 = NULL;
    }
    if (__tmp3235 != NULL) goto __LL3238;
    if (PyTuple_GET_ITEM(cpy_r_r39, 2) == Py_None)
        __tmp3235 = PyTuple_GET_ITEM(cpy_r_r39, 2);
    else {
        __tmp3235 = NULL;
    }
    if (__tmp3235 != NULL) goto __LL3238;
    __tmp3235 = NULL;
__LL3238: ;
    if (__tmp3235 == NULL) goto __LL3236;
    __tmp3235 = cpy_r_r39;
__LL3236: ;
    if (unlikely(__tmp3235 == NULL)) {
        CPy_TypeError("tuple[str, union[mypy.types.Type, None], union[mypy.types.Type, None]]", cpy_r_r39); cpy_r_r40 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp3239 = PyTuple_GET_ITEM(cpy_r_r39, 0);
        CPy_INCREF(__tmp3239);
        PyObject *__tmp3240;
        if (likely(PyUnicode_Check(__tmp3239)))
            __tmp3240 = __tmp3239;
        else {
            CPy_TypeError("str", __tmp3239); 
            __tmp3240 = NULL;
        }
        cpy_r_r40.f0 = __tmp3240;
        PyObject *__tmp3241 = PyTuple_GET_ITEM(cpy_r_r39, 1);
        CPy_INCREF(__tmp3241);
        PyObject *__tmp3242;
        if (PyObject_TypeCheck(__tmp3241, CPyType_types___Type))
            __tmp3242 = __tmp3241;
        else {
            __tmp3242 = NULL;
        }
        if (__tmp3242 != NULL) goto __LL3243;
        if (__tmp3241 == Py_None)
            __tmp3242 = __tmp3241;
        else {
            __tmp3242 = NULL;
        }
        if (__tmp3242 != NULL) goto __LL3243;
        CPy_TypeError("mypy.types.Type or None", __tmp3241); 
        __tmp3242 = NULL;
__LL3243: ;
        cpy_r_r40.f1 = __tmp3242;
        PyObject *__tmp3244 = PyTuple_GET_ITEM(cpy_r_r39, 2);
        CPy_INCREF(__tmp3244);
        PyObject *__tmp3245;
        if (PyObject_TypeCheck(__tmp3244, CPyType_types___Type))
            __tmp3245 = __tmp3244;
        else {
            __tmp3245 = NULL;
        }
        if (__tmp3245 != NULL) goto __LL3246;
        if (__tmp3244 == Py_None)
            __tmp3245 = __tmp3244;
        else {
            __tmp3245 = NULL;
        }
        if (__tmp3245 != NULL) goto __LL3246;
        CPy_TypeError("mypy.types.Type or None", __tmp3244); 
        __tmp3245 = NULL;
__LL3246: ;
        cpy_r_r40.f2 = __tmp3245;
    }
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40.f0 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 837, CPyStatic_meet___globals);
        goto CPyL64;
    }
    cpy_r_r41 = cpy_r_r40.f0;
    CPy_INCREF(cpy_r_r41);
    cpy_r_item_name = cpy_r_r41;
    cpy_r_r42 = cpy_r_r40.f1;
    CPy_INCREF(cpy_r_r42);
    cpy_r_s_item_type = cpy_r_r42;
    cpy_r_r43 = cpy_r_r40.f2;
    CPy_INCREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r40.f0);
    CPy_DECREF(cpy_r_r40.f1);
    CPy_DECREF(cpy_r_r40.f2);
    cpy_r_t_item_type = cpy_r_r43;
    cpy_r_r44 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r45 = cpy_r_s_item_type != cpy_r_r44;
    if (cpy_r_r45) {
        goto CPyL65;
    } else
        goto CPyL66;
CPyL28: ;
    if (likely(cpy_r_s_item_type != Py_None))
        cpy_r_r46 = cpy_r_s_item_type;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_typeddict_type", 839, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_s_item_type);
        goto CPyL67;
    }
    cpy_r_r47.f0 = cpy_r_item_name;
    cpy_r_r47.f1 = cpy_r_r46;
    CPy_INCREF(cpy_r_r47.f0);
    CPy_INCREF(cpy_r_r47.f1);
    CPy_DECREF(cpy_r_item_name);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = PyTuple_New(2);
    if (unlikely(cpy_r_r48 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3247 = cpy_r_r47.f0;
    PyTuple_SET_ITEM(cpy_r_r48, 0, __tmp3247);
    PyObject *__tmp3248 = cpy_r_r47.f1;
    PyTuple_SET_ITEM(cpy_r_r48, 1, __tmp3248);
    cpy_r_r49 = PyList_Append(cpy_r_item_list, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 839, CPyStatic_meet___globals);
        goto CPyL64;
    } else
        goto CPyL25;
CPyL30: ;
    cpy_r_r51 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r52 = cpy_r_t_item_type != cpy_r_r51;
    if (cpy_r_r52) {
        goto CPyL33;
    } else
        goto CPyL68;
CPyL31: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r53 = 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 842, CPyStatic_meet___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL33: ;
    if (likely(cpy_r_t_item_type != Py_None))
        cpy_r_r54 = cpy_r_t_item_type;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_typeddict_type", 843, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_t_item_type);
        goto CPyL67;
    }
    cpy_r_r55.f0 = cpy_r_item_name;
    cpy_r_r55.f1 = cpy_r_r54;
    CPy_INCREF(cpy_r_r55.f0);
    CPy_INCREF(cpy_r_r55.f1);
    CPy_DECREF(cpy_r_item_name);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r56 = PyTuple_New(2);
    if (unlikely(cpy_r_r56 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3249 = cpy_r_r55.f0;
    PyTuple_SET_ITEM(cpy_r_r56, 0, __tmp3249);
    PyObject *__tmp3250 = cpy_r_r55.f1;
    PyTuple_SET_ITEM(cpy_r_r56, 1, __tmp3250);
    cpy_r_r57 = PyList_Append(cpy_r_item_list, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 843, CPyStatic_meet___globals);
        goto CPyL64;
    } else
        goto CPyL25;
CPyL35: ;
    cpy_r_r59 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 837, CPyStatic_meet___globals);
        goto CPyL62;
    }
    cpy_r_r60 = CPyDict_FromAny(cpy_r_item_list);
    CPy_DECREF(cpy_r_item_list);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 844, CPyStatic_meet___globals);
        goto CPyL56;
    }
    cpy_r_items = cpy_r_r60;
    cpy_r_r61 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_typeddict_type", "TypeMeetVisitor", "s", 845, CPyStatic_meet___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r61);
CPyL38: ;
    if (likely(Py_TYPE(cpy_r_r61) == CPyType_types___TypedDictType))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_typeddict_type", 845, CPyStatic_meet___globals, "mypy.types.TypedDictType", cpy_r_r61);
        goto CPyL69;
    }
    cpy_r_r63 = CPyDef_types___TypedDictType___create_anonymous_fallback(cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 845, CPyStatic_meet___globals);
        goto CPyL69;
    }
    cpy_r_fallback = cpy_r_r63;
    cpy_r_r64 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_required_keys;
    CPy_INCREF(cpy_r_r64);
    cpy_r_r65 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_typeddict_type", "TypeMeetVisitor", "s", 846, CPyStatic_meet___globals);
        goto CPyL70;
    }
CPyL41: ;
    if (likely(Py_TYPE(cpy_r_r65) == CPyType_types___TypedDictType))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_typeddict_type", 846, CPyStatic_meet___globals, "mypy.types.TypedDictType", cpy_r_r65);
        goto CPyL70;
    }
    cpy_r_r67 = ((mypy___types___TypedDictTypeObject *)cpy_r_r66)->_required_keys;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = PyNumber_Or(cpy_r_r64, cpy_r_r67);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 846, CPyStatic_meet___globals);
        goto CPyL71;
    }
    if (likely(PySet_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_typeddict_type", 846, CPyStatic_meet___globals, "set", cpy_r_r68);
        goto CPyL71;
    }
    cpy_r_required_keys = cpy_r_r69;
    cpy_r_r70 = CPY_INT_TAG;
    cpy_r_r71 = CPY_INT_TAG;
    cpy_r_r72 = CPyDef_types___TypedDictType(cpy_r_items, cpy_r_required_keys, cpy_r_fallback, cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_required_keys);
    CPy_DECREF(cpy_r_fallback);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 847, CPyStatic_meet___globals);
        goto CPyL56;
    }
    return cpy_r_r72;
CPyL46: ;
    cpy_r_r73 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_typeddict_type", "TypeMeetVisitor", "s", 848, CPyStatic_meet___globals);
        goto CPyL56;
    }
CPyL47: ;
    cpy_r_r74 = (PyObject *)CPyType_types___Instance;
    cpy_r_r75 = (CPyPtr)&((PyObject *)cpy_r_r73)->ob_type;
    cpy_r_r76 = *(PyObject * *)cpy_r_r75;
    cpy_r_r77 = cpy_r_r76 == cpy_r_r74;
    if (!cpy_r_r77) goto CPyL53;
    cpy_r_r78 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_typeddict_type", "TypeMeetVisitor", "s", 848, CPyStatic_meet___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r78);
CPyL49: ;
    if (likely(Py_TYPE(cpy_r_r78) == CPyType_types___Instance))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_typeddict_type", 848, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r78);
        goto CPyL56;
    }
    cpy_r_r80 = NULL;
    cpy_r_r81 = 2;
    cpy_r_r82 = 2;
    cpy_r_r83 = 2;
    cpy_r_r84 = 2;
    cpy_r_r85 = 2;
    cpy_r_r86 = NULL;
    cpy_r_r87 = CPyDef_subtypes___is_subtype(cpy_r_t, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r82, cpy_r_r83, cpy_r_r84, cpy_r_r85, cpy_r_r86);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r87 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 848, CPyStatic_meet___globals);
        goto CPyL56;
    }
    if (!cpy_r_r87) goto CPyL53;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL53: ;
    cpy_r_r88 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_typeddict_type", "TypeMeetVisitor", "s", 851, CPyStatic_meet___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r88);
CPyL54: ;
    cpy_r_r89 = CPyDef_meet___TypeMeetVisitor___default(cpy_r_self, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 851, CPyStatic_meet___globals);
        goto CPyL56;
    }
    return cpy_r_r89;
CPyL56: ;
    cpy_r_r90 = NULL;
    return cpy_r_r90;
CPyL57: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL19;
CPyL58: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL56;
CPyL59: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_name);
    goto CPyL56;
CPyL60: ;
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_name);
    goto CPyL15;
CPyL61: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL15;
CPyL62: ;
    CPy_DecRef(cpy_r_item_list);
    goto CPyL56;
CPyL63: ;
    CPy_DECREF(cpy_r_r38);
    goto CPyL35;
CPyL64: ;
    CPy_DecRef(cpy_r_item_list);
    CPy_DecRef(cpy_r_r38);
    goto CPyL56;
CPyL65: ;
    CPy_DECREF(cpy_r_t_item_type);
    goto CPyL28;
CPyL66: ;
    CPy_DECREF(cpy_r_s_item_type);
    goto CPyL30;
CPyL67: ;
    CPy_DecRef(cpy_r_item_list);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_item_name);
    goto CPyL56;
CPyL68: ;
    CPy_DECREF(cpy_r_item_list);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_item_name);
    CPy_DECREF(cpy_r_t_item_type);
    goto CPyL31;
CPyL69: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL56;
CPyL70: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_r64);
    goto CPyL56;
CPyL71: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_fallback);
    goto CPyL56;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_typeddict_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type", 829, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_typeddict_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_typeddict_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_typeddict_type__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_literal_type", "TypeMeetVisitor", "s", 854, CPyStatic_meet___globals);
        goto CPyL18;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL8;
    cpy_r_r5 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_literal_type", "TypeMeetVisitor", "s", 854, CPyStatic_meet___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___LiteralType))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_literal_type", 854, CPyStatic_meet___globals, "mypy.types.LiteralType", cpy_r_r5);
        goto CPyL18;
    }
    cpy_r_r7 = CPyDef_types___LiteralType_____eq__(cpy_r_r6, cpy_r_t);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_literal_type", 854, CPyStatic_meet___globals);
        goto CPyL18;
    }
    if (unlikely(!PyBool_Check(cpy_r_r7))) {
        CPy_TypeError("bool", cpy_r_r7); cpy_r_r8 = 2;
    } else
        cpy_r_r8 = cpy_r_r7 == Py_True;
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_literal_type", 854, CPyStatic_meet___globals);
        goto CPyL18;
    }
    if (!cpy_r_r8) goto CPyL8;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL8: ;
    cpy_r_r9 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_literal_type", "TypeMeetVisitor", "s", 856, CPyStatic_meet___globals);
        goto CPyL18;
    }
CPyL9: ;
    cpy_r_r10 = (PyObject *)CPyType_types___Instance;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_r9)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL15;
    cpy_r_r14 = ((mypy___types___LiteralTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_literal_type", "TypeMeetVisitor", "s", 856, CPyStatic_meet___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r15);
CPyL11: ;
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_types___Instance))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_literal_type", 856, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r15);
        goto CPyL19;
    }
    cpy_r_r17 = NULL;
    cpy_r_r18 = 2;
    cpy_r_r19 = 2;
    cpy_r_r20 = 2;
    cpy_r_r21 = 2;
    cpy_r_r22 = 2;
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_subtypes___is_subtype(cpy_r_r14, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "visit_literal_type", 856, CPyStatic_meet___globals);
        goto CPyL18;
    }
    if (!cpy_r_r24) goto CPyL15;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL15: ;
    cpy_r_r25 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_literal_type", "TypeMeetVisitor", "s", 859, CPyStatic_meet___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r25);
CPyL16: ;
    cpy_r_r26 = CPyDef_meet___TypeMeetVisitor___default(cpy_r_self, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_literal_type", 859, CPyStatic_meet___globals);
        goto CPyL18;
    }
    return cpy_r_r26;
CPyL18: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL19: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL18;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_literal_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_literal_type", 853, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_literal_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_literal_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_literal_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_literal_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_literal_type__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_partial_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "Internal error");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/meet.py", "visit_partial_type", 863, CPyStatic_meet___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_partial_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_partial_type", 861, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_partial_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_partial_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_partial_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_partial_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_partial_type__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_type_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    cpy_r_r0 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_type_type", "TypeMeetVisitor", "s", 866, CPyStatic_meet___globals);
        goto CPyL28;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL9;
    cpy_r_r5 = ((mypy___types___TypeTypeObject *)cpy_r_t)->_item;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_type_type", "TypeMeetVisitor", "s", 867, CPyStatic_meet___globals);
        goto CPyL29;
    }
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_types___TypeType))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_type_type", 867, CPyStatic_meet___globals, "mypy.types.TypeType", cpy_r_r6);
        goto CPyL29;
    }
    cpy_r_r8 = ((mypy___types___TypeTypeObject *)cpy_r_r7)->_item;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_meet___TypeMeetVisitor___meet(cpy_r_self, cpy_r_r5, cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_type", 867, CPyStatic_meet___globals);
        goto CPyL28;
    }
    cpy_r_typ = cpy_r_r9;
    cpy_r_r10 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (cpy_r_r13) goto CPyL8;
    cpy_r_r14 = ((mypy___types___TypeTypeObject *)cpy_r_t)->_line;
    CPyTagged_INCREF(cpy_r_r14);
    cpy_r_r15 = CPY_INT_TAG;
    cpy_r_r16 = CPyDef_types___TypeType___make_normalized(cpy_r_typ, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_typ);
    CPyTagged_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_type", 869, CPyStatic_meet___globals);
        goto CPyL28;
    }
    cpy_r_typ = cpy_r_r16;
CPyL8: ;
    return cpy_r_typ;
CPyL9: ;
    cpy_r_r17 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_type_type", "TypeMeetVisitor", "s", 871, CPyStatic_meet___globals);
        goto CPyL28;
    }
CPyL10: ;
    cpy_r_r18 = (PyObject *)CPyType_types___Instance;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_r17)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL19;
    cpy_r_r22 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_type_type", "TypeMeetVisitor", "s", 871, CPyStatic_meet___globals);
        goto CPyL28;
    }
CPyL12: ;
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_types___Instance))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_type_type", 871, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r22);
        goto CPyL28;
    }
    cpy_r_r24 = ((mypy___types___InstanceObject *)cpy_r_r23)->_type;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPY_GET_ATTR(cpy_r_r24, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_type", 871, CPyStatic_meet___globals);
        goto CPyL28;
    }
CPyL14: ;
    cpy_r_r26 = CPyStatics[771]; /* 'builtins.type' */
    cpy_r_r27 = PyUnicode_Compare(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r28 = cpy_r_r27 == -1;
    if (!cpy_r_r28) goto CPyL17;
    cpy_r_r29 = PyErr_Occurred();
    cpy_r_r30 = cpy_r_r29 != NULL;
    if (!cpy_r_r30) goto CPyL17;
    cpy_r_r31 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_type", 871, CPyStatic_meet___globals);
        goto CPyL28;
    }
CPyL17: ;
    cpy_r_r32 = cpy_r_r27 == 0;
    if (!cpy_r_r32) goto CPyL19;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL19: ;
    cpy_r_r33 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_type_type", "TypeMeetVisitor", "s", 873, CPyStatic_meet___globals);
        goto CPyL28;
    }
CPyL20: ;
    cpy_r_r34 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_r33)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    if (!cpy_r_r37) goto CPyL25;
    cpy_r_r38 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_type_type", "TypeMeetVisitor", "s", 874, CPyStatic_meet___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r38);
CPyL22: ;
    if (likely(Py_TYPE(cpy_r_r38) == CPyType_types___CallableType))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "visit_type_type", 874, CPyStatic_meet___globals, "mypy.types.CallableType", cpy_r_r38);
        goto CPyL28;
    }
    cpy_r_r40 = CPyDef_meet___TypeMeetVisitor___meet(cpy_r_self, cpy_r_t, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_type", 874, CPyStatic_meet___globals);
        goto CPyL28;
    }
    return cpy_r_r40;
CPyL25: ;
    cpy_r_r41 = ((mypy___meet___TypeMeetVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "visit_type_type", "TypeMeetVisitor", "s", 876, CPyStatic_meet___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r41);
CPyL26: ;
    cpy_r_r42 = CPyDef_meet___TypeMeetVisitor___default(cpy_r_self, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_type", 876, CPyStatic_meet___globals);
        goto CPyL28;
    }
    return cpy_r_r42;
CPyL28: ;
    cpy_r_r43 = NULL;
    return cpy_r_r43;
CPyL29: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL28;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_type_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_type_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_type_type", 865, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_type_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_type_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_type_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_type_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_type_type__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    if (0) goto CPyL7;
    cpy_r_r0 = CPyStatics[1615]; /* 'This should be never called, got ' */
    cpy_r_r1 = PyObject_Str(cpy_r_t);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_alias_type", 879, CPyStatic_meet___globals);
        goto CPyL8;
    }
    cpy_r_r2 = CPyStr_Build(2, cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_alias_type", 879, CPyStatic_meet___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyModule_builtins;
    cpy_r_r4 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_alias_type", 879, CPyStatic_meet___globals);
        goto CPyL9;
    }
    PyObject *cpy_r_r6[1] = {cpy_r_r2};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 1, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_alias_type", 879, CPyStatic_meet___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r2);
    CPy_Raise(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/meet.py", "visit_type_alias_type", 879, CPyStatic_meet___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL7: ;
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_type_alias_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_type_alias_type", 878, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___TypeMeetVisitor___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___meet(PyObject *cpy_r_self, PyObject *cpy_r_s, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_meet___meet_types(cpy_r_s, cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet", 882, CPyStatic_meet___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_meet___TypeMeetVisitor___meet(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", "t", 0};
    static CPyArg_Parser parser = {"OO:meet", kwlist, 0};
    PyObject *obj_s;
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_s, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
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
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___meet(arg_self, arg_s, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "meet", 881, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___TypeMeetVisitor___default(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
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
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = (PyObject *)CPyType_types___UnboundType;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL3;
    cpy_r_r4 = NULL;
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = CPyDef_types___AnyType(12, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "default", 886, CPyStatic_meet___globals);
        goto CPyL11;
    }
    return cpy_r_r8;
CPyL3: ;
    cpy_r_r9 = CPyStatic_state___state;
    if (likely(cpy_r_r9 != NULL)) goto CPyL6;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/meet.py", "default", 888, CPyStatic_meet___globals);
        goto CPyL11;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r11 = ((mypy___state___StrictOptionalStateObject *)cpy_r_r9)->_strict_optional;
    if (!cpy_r_r11) goto CPyL9;
CPyL7: ;
    cpy_r_r12 = 2;
    cpy_r_r13 = CPY_INT_TAG;
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = CPyDef_types___UninhabitedType(cpy_r_r12, cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "default", 889, CPyStatic_meet___globals);
        goto CPyL11;
    }
    return cpy_r_r15;
CPyL9: ;
    cpy_r_r16 = CPY_INT_TAG;
    cpy_r_r17 = CPY_INT_TAG;
    cpy_r_r18 = CPyDef_types___NoneType(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "default", 891, CPyStatic_meet___globals);
        goto CPyL11;
    }
    return cpy_r_r18;
CPyL11: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
}

PyObject *CPyPy_meet___TypeMeetVisitor___default(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:default", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_meet___TypeMeetVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.meet.TypeMeetVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___TypeMeetVisitor___default(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "default", 884, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___meet_similar_callables(PyObject *cpy_r_t, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_arg_types;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_i;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_fallback;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    CPyTagged cpy_r_r43;
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
    cpy_r_r0 = CPyStatics[9186]; /* ('join_types',) */
    cpy_r_r1 = CPyStatics[92]; /* 'mypy.join' */
    cpy_r_r2 = CPyStatic_meet___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_similar_callables", 895, CPyStatic_meet___globals);
        goto CPyL21;
    }
    CPyModule_mypy___join = cpy_r_r3;
    CPy_INCREF(CPyModule_mypy___join);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_similar_callables", 897, CPyStatic_meet___globals);
        goto CPyL21;
    }
    cpy_r_arg_types = cpy_r_r4;
    cpy_r_r5 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = 0;
    cpy_r_i = cpy_r_r9;
CPyL3: ;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r10) goto CPyL22;
    cpy_r_r11 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    cpy_r_r12 = CPyList_GetItem(cpy_r_r11, cpy_r_i);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_similar_callables", 899, CPyStatic_meet___globals);
        goto CPyL23;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_types___Type)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_similar_callables", 899, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r12);
        goto CPyL23;
    }
    cpy_r_r14 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_arg_types;
    cpy_r_r15 = CPyList_GetItem(cpy_r_r14, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_similar_callables", 899, CPyStatic_meet___globals);
        goto CPyL24;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_types___Type)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_similar_callables", 899, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r15);
        goto CPyL24;
    }
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPyDef_join___join_types(cpy_r_r13, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_similar_callables", 899, CPyStatic_meet___globals);
        goto CPyL25;
    }
    cpy_r_r19 = PyList_Append(cpy_r_arg_types, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/meet.py", "meet_similar_callables", 899, CPyStatic_meet___globals);
        goto CPyL25;
    }
    cpy_r_r21 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r21;
    cpy_r_i = cpy_r_r21;
    goto CPyL3;
CPyL11: ;
    cpy_r_r22 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_fallback;
    cpy_r_r23 = ((mypy___types___InstanceObject *)cpy_r_r22)->_type;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPY_GET_ATTR(cpy_r_r23, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_similar_callables", 903, CPyStatic_meet___globals);
        goto CPyL25;
    }
CPyL12: ;
    cpy_r_r25 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r26 = PyUnicode_Compare(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r27 = cpy_r_r26 == -1;
    if (!cpy_r_r27) goto CPyL15;
    cpy_r_r28 = PyErr_Occurred();
    cpy_r_r29 = cpy_r_r28 != NULL;
    if (!cpy_r_r29) goto CPyL15;
    cpy_r_r30 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/meet.py", "meet_similar_callables", 903, CPyStatic_meet___globals);
        goto CPyL25;
    }
CPyL15: ;
    cpy_r_r31 = cpy_r_r26 != 0;
    if (!cpy_r_r31) goto CPyL17;
    cpy_r_r32 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r32);
    cpy_r_fallback = cpy_r_r32;
    goto CPyL18;
CPyL17: ;
    cpy_r_r33 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_fallback;
    CPy_INCREF(cpy_r_r33);
    cpy_r_fallback = cpy_r_r33;
CPyL18: ;
    cpy_r_r34 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_ret_type;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyDef_meet___meet_types(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_similar_callables", 909, CPyStatic_meet___globals);
        goto CPyL26;
    }
    cpy_r_r37 = NULL;
    cpy_r_r38 = NULL;
    cpy_r_r39 = Py_None;
    cpy_r_r40 = NULL;
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPY_INT_TAG;
    cpy_r_r43 = CPY_INT_TAG;
    cpy_r_r44 = NULL;
    cpy_r_r45 = NULL;
    cpy_r_r46 = NULL;
    cpy_r_r47 = NULL;
    cpy_r_r48 = NULL;
    cpy_r_r49 = NULL;
    cpy_r_r50 = NULL;
    cpy_r_r51 = NULL;
    cpy_r_r52 = NULL;
    cpy_r_r53 = CPyDef_types___CallableType___copy_modified(cpy_r_t, cpy_r_arg_types, cpy_r_r37, cpy_r_r38, cpy_r_r36, cpy_r_fallback, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_arg_types);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_fallback);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_similar_callables", 907, CPyStatic_meet___globals);
        goto CPyL21;
    }
    return cpy_r_r53;
CPyL21: ;
    cpy_r_r54 = NULL;
    return cpy_r_r54;
CPyL22: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL11;
CPyL23: ;
    CPy_DecRef(cpy_r_arg_types);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_r13);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_arg_types);
    goto CPyL21;
CPyL26: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_fallback);
    goto CPyL21;
}

PyObject *CPyPy_meet___meet_similar_callables(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", "s", 0};
    static CPyArg_Parser parser = {"OO:meet_similar_callables", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_t, &obj_s)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_types___CallableType))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_s); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___meet_similar_callables(arg_t, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "meet_similar_callables", 894, CPyStatic_meet___globals);
    return NULL;
}

PyObject *CPyDef_meet___meet_type_list(PyObject *cpy_r_types) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_met;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = cpy_r_r2 != 0;
    if (cpy_r_r3) goto CPyL3;
    cpy_r_r4 = NULL;
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = CPyDef_types___AnyType(16, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_type_list", 919, CPyStatic_meet___globals);
        goto CPyL14;
    }
    return cpy_r_r8;
CPyL3: ;
    cpy_r_r9 = CPyList_GetItemShort(cpy_r_types, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_type_list", 920, CPyStatic_meet___globals);
        goto CPyL14;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_types___Type)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_type_list", 920, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r9);
        goto CPyL14;
    }
    cpy_r_met = cpy_r_r10;
    cpy_r_r11 = CPyList_GetSlice(cpy_r_types, 2, 9223372036854775806LL);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_type_list", 921, CPyStatic_meet___globals);
        goto CPyL15;
    }
    if (likely(PyList_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_type_list", 921, CPyStatic_meet___globals, "list", cpy_r_r11);
        goto CPyL15;
    }
    cpy_r_r13 = 0;
CPyL8: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL16;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_r12, cpy_r_r13);
    if (likely(PyObject_TypeCheck(cpy_r_r18, CPyType_types___Type)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "meet_type_list", 921, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r18);
        goto CPyL17;
    }
    cpy_r_t = cpy_r_r19;
    cpy_r_r20 = CPyDef_meet___meet_types(cpy_r_met, cpy_r_t);
    CPy_DECREF(cpy_r_met);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "meet_type_list", 922, CPyStatic_meet___globals);
        goto CPyL18;
    }
    cpy_r_met = cpy_r_r20;
    cpy_r_r21 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r21;
    goto CPyL8;
CPyL13: ;
    return cpy_r_met;
CPyL14: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL15: ;
    CPy_DecRef(cpy_r_met);
    goto CPyL14;
CPyL16: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_met);
    CPy_DecRef(cpy_r_r12);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL14;
}

PyObject *CPyPy_meet___meet_type_list(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:meet_type_list", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_types;
    if (likely(PyList_Check(obj_types)))
        arg_types = obj_types;
    else {
        CPy_TypeError("list", obj_types); 
        goto fail;
    }
    PyObject *retval = CPyDef_meet___meet_type_list(arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "meet_type_list", 915, CPyStatic_meet___globals);
    return NULL;
}

char CPyDef_meet___typed_dict_mapping_pair(PyObject *cpy_r_left, PyObject *cpy_r_right) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
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
    PyObject *cpy_r__;
    PyObject *cpy_r_other;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    cpy_r_r0.f0 = cpy_r_left;
    cpy_r_r0.f1 = cpy_r_right;
    CPy_INCREF(cpy_r_r0.f0);
    CPy_INCREF(cpy_r_r0.f1);
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3251 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp3251);
    PyObject *__tmp3252 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp3252);
    cpy_r_r2 = CPyDef_types___get_proper_types(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_pair", 934, CPyStatic_meet___globals);
        goto CPyL25;
    }
    cpy_r_r3 = CPySequence_CheckUnpackCount(cpy_r_r2, 2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_pair", 934, CPyStatic_meet___globals);
        goto CPyL26;
    }
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_r2, 0);
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r2, 2);
    CPy_DECREF(cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r5, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_pair", 934, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r5);
        goto CPyL27;
    }
    cpy_r_left = cpy_r_r7;
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r8 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_pair", 934, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r6);
        goto CPyL28;
    }
    cpy_r_right = cpy_r_r8;
    cpy_r_r9 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    cpy_r_r13 = cpy_r_r12 ^ 1;
    if (!cpy_r_r13) goto CPyL6;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL7;
CPyL6: ;
    cpy_r_r15 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    cpy_r_r19 = cpy_r_r18 ^ 1;
    cpy_r_r14 = cpy_r_r19;
CPyL7: ;
    if (cpy_r_r14) {
        goto CPyL10;
    } else
        goto CPyL29;
CPyL8: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_pair", 935, CPyStatic_meet___globals);
        goto CPyL25;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r21 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___TypedDictType))
        cpy_r_r25 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_pair", 938, CPyStatic_meet___globals, "mypy.types.TypedDictType", cpy_r_left);
        goto CPyL30;
    }
    cpy_r_r26 = cpy_r_r25;
    if (likely(PyObject_TypeCheck(cpy_r_right, CPyType_types___ProperType)))
        cpy_r_r27 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_pair", 938, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_right);
        goto CPyL31;
    }
    cpy_r_r28 = cpy_r_r27;
    cpy_r__ = cpy_r_r26;
    CPy_DECREF(cpy_r__);
    cpy_r_other = cpy_r_r28;
    goto CPyL19;
CPyL14: ;
    cpy_r_r29 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL32;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___TypedDictType))
        cpy_r_r33 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_pair", 940, CPyStatic_meet___globals, "mypy.types.TypedDictType", cpy_r_right);
        goto CPyL28;
    }
    cpy_r_r34 = cpy_r_r33;
    if (likely(PyObject_TypeCheck(cpy_r_left, CPyType_types___ProperType)))
        cpy_r_r35 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_pair", 940, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_left);
        goto CPyL33;
    }
    cpy_r_r36 = cpy_r_r35;
    cpy_r__ = cpy_r_r34;
    CPy_DECREF(cpy_r__);
    cpy_r_other = cpy_r_r36;
    goto CPyL19;
CPyL18: ;
    return 0;
CPyL19: ;
    cpy_r_r37 = (PyObject *)CPyType_types___Instance;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_other)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    if (cpy_r_r40) {
        goto CPyL21;
    } else
        goto CPyL34;
CPyL20: ;
    cpy_r_r41 = cpy_r_r40;
    goto CPyL24;
CPyL21: ;
    if (likely(Py_TYPE(cpy_r_other) == CPyType_types___Instance))
        cpy_r_r42 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_pair", 943, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_other);
        goto CPyL35;
    }
    cpy_r_r43 = ((mypy___types___InstanceObject *)cpy_r_r42)->_type;
    CPy_INCREF(cpy_r_r43);
    CPy_DECREF(cpy_r_other);
    cpy_r_r44 = CPyStatics[892]; /* 'typing.Mapping' */
    cpy_r_r45 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_pair", 943, CPyStatic_meet___globals);
        goto CPyL25;
    }
    cpy_r_r41 = cpy_r_r45;
CPyL24: ;
    return cpy_r_r41;
CPyL25: ;
    cpy_r_r46 = 2;
    return cpy_r_r46;
CPyL26: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL25;
CPyL27: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_left);
    goto CPyL25;
CPyL29: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    goto CPyL8;
CPyL30: ;
    CPy_DecRef(cpy_r_right);
    goto CPyL25;
CPyL31: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL25;
CPyL32: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    goto CPyL18;
CPyL33: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL25;
CPyL34: ;
    CPy_DECREF(cpy_r_other);
    goto CPyL20;
CPyL35: ;
    CPy_DecRef(cpy_r_other);
    goto CPyL25;
}

PyObject *CPyPy_meet___typed_dict_mapping_pair(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"left", "right", 0};
    static CPyArg_Parser parser = {"OO:typed_dict_mapping_pair", kwlist, 0};
    PyObject *obj_left;
    PyObject *obj_right;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_left, &obj_right)) {
        return NULL;
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
    char retval = CPyDef_meet___typed_dict_mapping_pair(arg_left, arg_right);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_pair", 926, CPyStatic_meet___globals);
    return NULL;
}

char CPyDef_meet___typed_dict_mapping_overlap(PyObject *cpy_r_left, PyObject *cpy_r_right, PyObject *cpy_r_overlapping) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_typed;
    PyObject *cpy_r_other;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    CPyPtr cpy_r_r51;
    int64_t cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_mapping;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_key_type;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_value_type;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_fallback;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_str_type;
    PyObject *cpy_r_r86;
    CPyPtr cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    CPyPtr cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_k;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject **cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    PyObject **cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_non_required;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_k_2;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject **cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    char cpy_r_r141;
    char cpy_r_r142;
    cpy_r_r0.f0 = cpy_r_left;
    cpy_r_r0.f1 = cpy_r_right;
    CPy_INCREF(cpy_r_r0.f0);
    CPy_INCREF(cpy_r_r0.f1);
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3253 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp3253);
    PyObject *__tmp3254 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp3254);
    cpy_r_r2 = CPyDef_types___get_proper_types(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 977, CPyStatic_meet___globals);
        goto CPyL90;
    }
    cpy_r_r3 = CPySequence_CheckUnpackCount(cpy_r_r2, 2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 977, CPyStatic_meet___globals);
        goto CPyL91;
    }
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_r2, 0);
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r2, 2);
    CPy_DECREF(cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r5, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 977, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r5);
        goto CPyL92;
    }
    cpy_r_left = cpy_r_r7;
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r8 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 977, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r6);
        goto CPyL93;
    }
    cpy_r_right = cpy_r_r8;
    cpy_r_r9 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    cpy_r_r13 = cpy_r_r12 ^ 1;
    if (!cpy_r_r13) goto CPyL6;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL7;
CPyL6: ;
    cpy_r_r15 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    cpy_r_r19 = cpy_r_r18 ^ 1;
    cpy_r_r14 = cpy_r_r19;
CPyL7: ;
    if (cpy_r_r14) {
        goto CPyL10;
    } else
        goto CPyL94;
CPyL8: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 978, CPyStatic_meet___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r21 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL17;
    cpy_r_r25 = (PyObject *)CPyType_types___Instance;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    if (cpy_r_r28) {
        goto CPyL14;
    } else
        goto CPyL95;
CPyL12: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 981, CPyStatic_meet___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL14: ;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___TypedDictType))
        cpy_r_r30 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 982, CPyStatic_meet___globals, "mypy.types.TypedDictType", cpy_r_left);
        goto CPyL96;
    }
    cpy_r_r31 = cpy_r_r30;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___Instance))
        cpy_r_r32 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 982, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_right);
        goto CPyL97;
    }
    cpy_r_r33 = cpy_r_r32;
    cpy_r_typed = cpy_r_r31;
    cpy_r_other = cpy_r_r33;
    goto CPyL26;
CPyL17: ;
    cpy_r_r34 = (PyObject *)CPyType_types___Instance;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    if (cpy_r_r37) {
        goto CPyL20;
    } else
        goto CPyL98;
CPyL18: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 984, CPyStatic_meet___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r39 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    if (cpy_r_r42) {
        goto CPyL23;
    } else
        goto CPyL99;
CPyL21: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 985, CPyStatic_meet___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL23: ;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_types___TypedDictType))
        cpy_r_r44 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 986, CPyStatic_meet___globals, "mypy.types.TypedDictType", cpy_r_right);
        goto CPyL93;
    }
    cpy_r_r45 = cpy_r_r44;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_types___Instance))
        cpy_r_r46 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 986, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_left);
        goto CPyL100;
    }
    cpy_r_r47 = cpy_r_r46;
    cpy_r_typed = cpy_r_r45;
    cpy_r_other = cpy_r_r47;
CPyL26: ;
    cpy_r_r48 = ((mypy___types___InstanceObject *)cpy_r_other)->_type;
    cpy_r_r49 = ((mypy___nodes___TypeInfoObject *)cpy_r_r48)->_mro;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "typed_dict_mapping_overlap", "TypeInfo", "mro", 988, CPyStatic_meet___globals);
        goto CPyL101;
    }
    CPy_INCREF(cpy_r_r49);
CPyL27: ;
    cpy_r_r50 = 0;
CPyL28: ;
    cpy_r_r51 = (CPyPtr)&((PyVarObject *)cpy_r_r49)->ob_size;
    cpy_r_r52 = *(int64_t *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 << 1;
    cpy_r_r54 = (Py_ssize_t)cpy_r_r50 < (Py_ssize_t)cpy_r_r53;
    if (!cpy_r_r54) goto CPyL102;
    cpy_r_r55 = CPyList_GetItemUnsafe(cpy_r_r49, cpy_r_r50);
    if (likely((Py_TYPE(cpy_r_r55) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r55) == CPyType_nodes___TypeInfo)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 988, CPyStatic_meet___globals, "mypy.nodes.TypeInfo", cpy_r_r55);
        goto CPyL103;
    }
    cpy_r_base = cpy_r_r56;
    cpy_r_r57 = CPY_GET_ATTR(cpy_r_base, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 988, CPyStatic_meet___globals);
        goto CPyL104;
    }
CPyL31: ;
    cpy_r_r58 = CPyStatics[892]; /* 'typing.Mapping' */
    cpy_r_r59 = PyUnicode_Compare(cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r60 = cpy_r_r59 == -1;
    if (!cpy_r_r60) goto CPyL34;
    cpy_r_r61 = PyErr_Occurred();
    cpy_r_r62 = cpy_r_r61 != NULL;
    if (!cpy_r_r62) goto CPyL34;
    cpy_r_r63 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 988, CPyStatic_meet___globals);
        goto CPyL104;
    }
CPyL34: ;
    cpy_r_r64 = cpy_r_r59 == 0;
    if (cpy_r_r64) {
        goto CPyL105;
    } else
        goto CPyL106;
CPyL35: ;
    cpy_r_r65 = cpy_r_base;
    goto CPyL39;
CPyL36: ;
    cpy_r_r66 = cpy_r_r50 + 2;
    cpy_r_r50 = cpy_r_r66;
    goto CPyL28;
CPyL37: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r67 = 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 988, CPyStatic_meet___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL39: ;
    cpy_r_mapping = cpy_r_r65;
    cpy_r_r68 = CPyDef_maptype___map_instance_to_supertype(cpy_r_other, cpy_r_mapping);
    CPy_DECREF(cpy_r_other);
    CPy_DECREF(cpy_r_mapping);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 989, CPyStatic_meet___globals);
        goto CPyL107;
    }
    cpy_r_other = cpy_r_r68;
    cpy_r_r69 = ((mypy___types___InstanceObject *)cpy_r_other)->_args;
    CPy_INCREF(cpy_r_r69);
    CPy_DECREF(cpy_r_other);
    cpy_r_r70 = CPyDef_types___get_proper_types(cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 990, CPyStatic_meet___globals);
        goto CPyL107;
    }
    cpy_r_r71 = CPySequence_CheckUnpackCount(cpy_r_r70, 2);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 990, CPyStatic_meet___globals);
        goto CPyL108;
    }
    cpy_r_r73 = CPyList_GetItemUnsafe(cpy_r_r70, 0);
    cpy_r_r74 = CPyList_GetItemUnsafe(cpy_r_r70, 2);
    CPy_DECREF(cpy_r_r70);
    if (likely(PyObject_TypeCheck(cpy_r_r73, CPyType_types___ProperType)))
        cpy_r_r75 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 990, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r73);
        goto CPyL109;
    }
    cpy_r_key_type = cpy_r_r75;
    if (likely(PyObject_TypeCheck(cpy_r_r74, CPyType_types___ProperType)))
        cpy_r_r76 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 990, CPyStatic_meet___globals, "mypy.types.ProperType", cpy_r_r74);
        goto CPyL110;
    }
    cpy_r_value_type = cpy_r_r76;
    cpy_r_r77 = CPyDef_types___TypedDictType___as_anonymous(cpy_r_typed);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 993, CPyStatic_meet___globals);
        goto CPyL111;
    }
    cpy_r_r78 = ((mypy___types___TypedDictTypeObject *)cpy_r_r77)->_fallback;
    CPy_INCREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    cpy_r_fallback = cpy_r_r78;
    cpy_r_r79 = ((mypy___types___InstanceObject *)cpy_r_fallback)->_type;
    cpy_r_r80 = ((mypy___nodes___TypeInfoObject *)cpy_r_r79)->_bases;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("mypy/meet.py", "typed_dict_mapping_overlap", "TypeInfo", "bases", 994, CPyStatic_meet___globals);
        goto CPyL112;
    }
CPyL46: ;
    cpy_r_r81 = CPyList_GetItemShortBorrow(cpy_r_r80, 0);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 994, CPyStatic_meet___globals);
        goto CPyL112;
    }
    if (likely(Py_TYPE(cpy_r_r81) == CPyType_types___Instance))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 994, CPyStatic_meet___globals, "mypy.types.Instance", cpy_r_r81);
        goto CPyL112;
    }
    cpy_r_r83 = ((mypy___types___InstanceObject *)cpy_r_r82)->_args;
    CPy_INCREF(cpy_r_r83);
    CPy_DECREF(cpy_r_fallback);
    cpy_r_r84 = CPySequenceTuple_GetItem(cpy_r_r83, 0);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 994, CPyStatic_meet___globals);
        goto CPyL111;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r84, CPyType_types___Type)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 994, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r84);
        goto CPyL111;
    }
    cpy_r_str_type = cpy_r_r85;
    cpy_r_r86 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r87 = (CPyPtr)&((PyObject *)cpy_r_key_type)->ob_type;
    cpy_r_r88 = *(PyObject * *)cpy_r_r87;
    cpy_r_r89 = cpy_r_r88 == cpy_r_r86;
    if (!cpy_r_r89) goto CPyL54;
    cpy_r_r90 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r91 = (CPyPtr)&((PyObject *)cpy_r_value_type)->ob_type;
    cpy_r_r92 = *(PyObject * *)cpy_r_r91;
    cpy_r_r93 = cpy_r_r92 == cpy_r_r90;
    if (cpy_r_r93) {
        goto CPyL113;
    } else
        goto CPyL54;
CPyL52: ;
    cpy_r_r94 = ((mypy___types___TypedDictTypeObject *)cpy_r_typed)->_required_keys;
    CPy_INCREF(cpy_r_r94);
    CPy_DECREF(cpy_r_typed);
    cpy_r_r95 = PyObject_Not(cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 998, CPyStatic_meet___globals);
        goto CPyL90;
    }
    cpy_r_r97 = cpy_r_r95;
    return cpy_r_r97;
CPyL54: ;
    cpy_r_r98 = ((mypy___types___TypedDictTypeObject *)cpy_r_typed)->_required_keys;
    CPy_INCREF(cpy_r_r98);
    cpy_r_r99 = PyObject_IsTrue(cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1000, CPyStatic_meet___globals);
        goto CPyL114;
    }
    cpy_r_r101 = cpy_r_r99;
    if (!cpy_r_r101) goto CPyL71;
    PyObject *cpy_r_r102[2] = {cpy_r_key_type, cpy_r_str_type};
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = _PyObject_Vectorcall(cpy_r_overlapping, cpy_r_r103, 2, 0);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1001, CPyStatic_meet___globals);
        goto CPyL114;
    }
    CPy_DECREF(cpy_r_key_type);
    CPy_DECREF(cpy_r_str_type);
    if (unlikely(!PyBool_Check(cpy_r_r104))) {
        CPy_TypeError("bool", cpy_r_r104); cpy_r_r105 = 2;
    } else
        cpy_r_r105 = cpy_r_r104 == Py_True;
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r105 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1001, CPyStatic_meet___globals);
        goto CPyL115;
    }
    if (cpy_r_r105) {
        goto CPyL60;
    } else
        goto CPyL116;
CPyL59: ;
    return 0;
CPyL60: ;
    cpy_r_r106 = 1;
    cpy_r_r107 = ((mypy___types___TypedDictTypeObject *)cpy_r_typed)->_required_keys;
    CPy_INCREF(cpy_r_r107);
    cpy_r_r108 = PyObject_GetIter(cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1003, CPyStatic_meet___globals);
        goto CPyL115;
    }
CPyL61: ;
    cpy_r_r109 = PyIter_Next(cpy_r_r108);
    if (cpy_r_r109 == NULL) goto CPyL117;
    if (likely(PyUnicode_Check(cpy_r_r109)))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1003, CPyStatic_meet___globals, "str", cpy_r_r109);
        goto CPyL118;
    }
    cpy_r_k = cpy_r_r110;
    cpy_r_r111 = ((mypy___types___TypedDictTypeObject *)cpy_r_typed)->_items;
    CPy_INCREF(cpy_r_r111);
    cpy_r_r112 = CPyDict_GetItem(cpy_r_r111, cpy_r_k);
    CPy_DECREF(cpy_r_r111);
    CPy_DECREF(cpy_r_k);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1003, CPyStatic_meet___globals);
        goto CPyL118;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r112, CPyType_types___Type)))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1003, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r112);
        goto CPyL118;
    }
    PyObject *cpy_r_r114[2] = {cpy_r_r113, cpy_r_value_type};
    cpy_r_r115 = (PyObject **)&cpy_r_r114;
    cpy_r_r116 = _PyObject_Vectorcall(cpy_r_overlapping, cpy_r_r115, 2, 0);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1003, CPyStatic_meet___globals);
        goto CPyL119;
    }
    CPy_DECREF(cpy_r_r113);
    if (unlikely(!PyBool_Check(cpy_r_r116))) {
        CPy_TypeError("bool", cpy_r_r116); cpy_r_r117 = 2;
    } else
        cpy_r_r117 = cpy_r_r116 == Py_True;
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1003, CPyStatic_meet___globals);
        goto CPyL118;
    }
    cpy_r_r118 = cpy_r_r117 ^ 1;
    if (cpy_r_r118) {
        goto CPyL120;
    } else
        goto CPyL61;
CPyL68: ;
    cpy_r_r106 = 0;
    goto CPyL70;
CPyL69: ;
    cpy_r_r119 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1003, CPyStatic_meet___globals);
        goto CPyL90;
    }
CPyL70: ;
    return cpy_r_r106;
CPyL71: ;
    PyObject *cpy_r_r120[2] = {cpy_r_key_type, cpy_r_str_type};
    cpy_r_r121 = (PyObject **)&cpy_r_r120;
    cpy_r_r122 = _PyObject_Vectorcall(cpy_r_overlapping, cpy_r_r121, 2, 0);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1005, CPyStatic_meet___globals);
        goto CPyL114;
    }
    CPy_DECREF(cpy_r_key_type);
    CPy_DECREF(cpy_r_str_type);
    if (unlikely(!PyBool_Check(cpy_r_r122))) {
        CPy_TypeError("bool", cpy_r_r122); cpy_r_r123 = 2;
    } else
        cpy_r_r123 = cpy_r_r122 == Py_True;
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r123 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1005, CPyStatic_meet___globals);
        goto CPyL115;
    }
    if (cpy_r_r123) {
        goto CPyL75;
    } else
        goto CPyL121;
CPyL74: ;
    return 0;
CPyL75: ;
    cpy_r_r124 = ((mypy___types___TypedDictTypeObject *)cpy_r_typed)->_items;
    CPy_INCREF(cpy_r_r124);
    cpy_r_r125 = CPyDict_KeysView(cpy_r_r124);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1007, CPyStatic_meet___globals);
        goto CPyL115;
    }
    cpy_r_r126 = PySet_New(cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1007, CPyStatic_meet___globals);
        goto CPyL115;
    }
    cpy_r_r127 = ((mypy___types___TypedDictTypeObject *)cpy_r_typed)->_required_keys;
    CPy_INCREF(cpy_r_r127);
    cpy_r_r128 = PyNumber_Subtract(cpy_r_r126, cpy_r_r127);
    CPy_DECREF(cpy_r_r126);
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1007, CPyStatic_meet___globals);
        goto CPyL115;
    }
    if (likely(PySet_Check(cpy_r_r128)))
        cpy_r_r129 = cpy_r_r128;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1007, CPyStatic_meet___globals, "set", cpy_r_r128);
        goto CPyL115;
    }
    cpy_r_non_required = cpy_r_r129;
    cpy_r_r130 = 0;
    cpy_r_r131 = PyObject_GetIter(cpy_r_non_required);
    CPy_DECREF(cpy_r_non_required);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1008, CPyStatic_meet___globals);
        goto CPyL115;
    }
CPyL80: ;
    cpy_r_r132 = PyIter_Next(cpy_r_r131);
    if (cpy_r_r132 == NULL) goto CPyL122;
    if (likely(PyUnicode_Check(cpy_r_r132)))
        cpy_r_r133 = cpy_r_r132;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1008, CPyStatic_meet___globals, "str", cpy_r_r132);
        goto CPyL123;
    }
    cpy_r_k_2 = cpy_r_r133;
    cpy_r_r134 = ((mypy___types___TypedDictTypeObject *)cpy_r_typed)->_items;
    CPy_INCREF(cpy_r_r134);
    cpy_r_r135 = CPyDict_GetItem(cpy_r_r134, cpy_r_k_2);
    CPy_DECREF(cpy_r_r134);
    CPy_DECREF(cpy_r_k_2);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1008, CPyStatic_meet___globals);
        goto CPyL123;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r135, CPyType_types___Type)))
        cpy_r_r136 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1008, CPyStatic_meet___globals, "mypy.types.Type", cpy_r_r135);
        goto CPyL123;
    }
    PyObject *cpy_r_r137[2] = {cpy_r_r136, cpy_r_value_type};
    cpy_r_r138 = (PyObject **)&cpy_r_r137;
    cpy_r_r139 = _PyObject_Vectorcall(cpy_r_overlapping, cpy_r_r138, 2, 0);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1008, CPyStatic_meet___globals);
        goto CPyL124;
    }
    CPy_DECREF(cpy_r_r136);
    if (unlikely(!PyBool_Check(cpy_r_r139))) {
        CPy_TypeError("bool", cpy_r_r139); cpy_r_r140 = 2;
    } else
        cpy_r_r140 = cpy_r_r139 == Py_True;
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r140 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1008, CPyStatic_meet___globals);
        goto CPyL123;
    }
    if (cpy_r_r140) {
        goto CPyL125;
    } else
        goto CPyL80;
CPyL87: ;
    cpy_r_r130 = 1;
    goto CPyL89;
CPyL88: ;
    cpy_r_r141 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 1008, CPyStatic_meet___globals);
        goto CPyL90;
    }
CPyL89: ;
    return cpy_r_r130;
CPyL90: ;
    cpy_r_r142 = 2;
    return cpy_r_r142;
CPyL91: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL90;
CPyL92: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL90;
CPyL93: ;
    CPy_DecRef(cpy_r_left);
    goto CPyL90;
CPyL94: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    goto CPyL8;
CPyL95: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    goto CPyL12;
CPyL96: ;
    CPy_DecRef(cpy_r_right);
    goto CPyL90;
CPyL97: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL90;
CPyL98: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    goto CPyL18;
CPyL99: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    goto CPyL21;
CPyL100: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL90;
CPyL101: ;
    CPy_DecRef(cpy_r_typed);
    CPy_DecRef(cpy_r_other);
    goto CPyL90;
CPyL102: ;
    CPy_DECREF(cpy_r_typed);
    CPy_DECREF(cpy_r_other);
    CPy_DECREF(cpy_r_r49);
    goto CPyL37;
CPyL103: ;
    CPy_DecRef(cpy_r_typed);
    CPy_DecRef(cpy_r_other);
    CPy_DecRef(cpy_r_r49);
    goto CPyL90;
CPyL104: ;
    CPy_DecRef(cpy_r_typed);
    CPy_DecRef(cpy_r_other);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_base);
    goto CPyL90;
CPyL105: ;
    CPy_DECREF(cpy_r_r49);
    goto CPyL35;
CPyL106: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL36;
CPyL107: ;
    CPy_DecRef(cpy_r_typed);
    goto CPyL90;
CPyL108: ;
    CPy_DecRef(cpy_r_typed);
    CPy_DecRef(cpy_r_r70);
    goto CPyL90;
CPyL109: ;
    CPy_DecRef(cpy_r_typed);
    CPy_DecRef(cpy_r_r74);
    goto CPyL90;
CPyL110: ;
    CPy_DecRef(cpy_r_typed);
    CPy_DecRef(cpy_r_key_type);
    goto CPyL90;
CPyL111: ;
    CPy_DecRef(cpy_r_typed);
    CPy_DecRef(cpy_r_key_type);
    CPy_DecRef(cpy_r_value_type);
    goto CPyL90;
CPyL112: ;
    CPy_DecRef(cpy_r_typed);
    CPy_DecRef(cpy_r_key_type);
    CPy_DecRef(cpy_r_value_type);
    CPy_DecRef(cpy_r_fallback);
    goto CPyL90;
CPyL113: ;
    CPy_DECREF(cpy_r_key_type);
    CPy_DECREF(cpy_r_value_type);
    CPy_DECREF(cpy_r_str_type);
    goto CPyL52;
CPyL114: ;
    CPy_DecRef(cpy_r_typed);
    CPy_DecRef(cpy_r_key_type);
    CPy_DecRef(cpy_r_value_type);
    CPy_DecRef(cpy_r_str_type);
    goto CPyL90;
CPyL115: ;
    CPy_DecRef(cpy_r_typed);
    CPy_DecRef(cpy_r_value_type);
    goto CPyL90;
CPyL116: ;
    CPy_DECREF(cpy_r_typed);
    CPy_DECREF(cpy_r_value_type);
    goto CPyL59;
CPyL117: ;
    CPy_DECREF(cpy_r_typed);
    CPy_DECREF(cpy_r_value_type);
    CPy_DECREF(cpy_r_r108);
    goto CPyL69;
CPyL118: ;
    CPy_DecRef(cpy_r_typed);
    CPy_DecRef(cpy_r_value_type);
    CPy_DecRef(cpy_r_r108);
    goto CPyL90;
CPyL119: ;
    CPy_DecRef(cpy_r_typed);
    CPy_DecRef(cpy_r_value_type);
    CPy_DecRef(cpy_r_r108);
    CPy_DecRef(cpy_r_r113);
    goto CPyL90;
CPyL120: ;
    CPy_DECREF(cpy_r_typed);
    CPy_DECREF(cpy_r_value_type);
    CPy_DECREF(cpy_r_r108);
    goto CPyL68;
CPyL121: ;
    CPy_DECREF(cpy_r_typed);
    CPy_DECREF(cpy_r_value_type);
    goto CPyL74;
CPyL122: ;
    CPy_DECREF(cpy_r_typed);
    CPy_DECREF(cpy_r_value_type);
    CPy_DECREF(cpy_r_r131);
    goto CPyL88;
CPyL123: ;
    CPy_DecRef(cpy_r_typed);
    CPy_DecRef(cpy_r_value_type);
    CPy_DecRef(cpy_r_r131);
    goto CPyL90;
CPyL124: ;
    CPy_DecRef(cpy_r_typed);
    CPy_DecRef(cpy_r_value_type);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r136);
    goto CPyL90;
CPyL125: ;
    CPy_DECREF(cpy_r_typed);
    CPy_DECREF(cpy_r_value_type);
    CPy_DECREF(cpy_r_r131);
    goto CPyL87;
}

PyObject *CPyPy_meet___typed_dict_mapping_overlap(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"left", "right", "overlapping", 0};
    static CPyArg_Parser parser = {"OOO:typed_dict_mapping_overlap", kwlist, 0};
    PyObject *obj_left;
    PyObject *obj_right;
    PyObject *obj_overlapping;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_left, &obj_right, &obj_overlapping)) {
        return NULL;
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
    PyObject *arg_overlapping = obj_overlapping;
    char retval = CPyDef_meet___typed_dict_mapping_overlap(arg_left, arg_right, arg_overlapping);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/meet.py", "typed_dict_mapping_overlap", 946, CPyStatic_meet___globals);
    return NULL;
}

char CPyDef_meet_____top_level__(void) {
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
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", -1, CPyStatic_meet___globals);
        goto CPyL20;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_meet___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", 1, CPyStatic_meet___globals);
        goto CPyL20;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9429]; /* ('Callable',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_meet___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", 3, CPyStatic_meet___globals);
        goto CPyL20;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9497]; /* ('join',) */
    cpy_r_r14 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r15 = CPyStatic_meet___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", 5, CPyStatic_meet___globals);
        goto CPyL20;
    }
    CPyModule_mypy = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9498]; /* ('erase_type',) */
    cpy_r_r18 = CPyStatics[90]; /* 'mypy.erasetype' */
    cpy_r_r19 = CPyStatic_meet___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", 6, CPyStatic_meet___globals);
        goto CPyL20;
    }
    CPyModule_mypy___erasetype = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___erasetype);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9081]; /* ('map_instance_to_supertype',) */
    cpy_r_r22 = CPyStatics[61]; /* 'mypy.maptype' */
    cpy_r_r23 = CPyStatic_meet___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", 7, CPyStatic_meet___globals);
        goto CPyL20;
    }
    CPyModule_mypy___maptype = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___maptype);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9201]; /* ('state',) */
    cpy_r_r26 = CPyStatics[1020]; /* 'mypy.state' */
    cpy_r_r27 = CPyStatic_meet___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", 8, CPyStatic_meet___globals);
        goto CPyL20;
    }
    CPyModule_mypy___state = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___state);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9499]; /* ('is_callable_compatible', 'is_equivalent',
                                     'is_proper_subtype', 'is_same_type', 'is_subtype') */
    cpy_r_r30 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r31 = CPyStatic_meet___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", 9, CPyStatic_meet___globals);
        goto CPyL20;
    }
    CPyModule_mypy___subtypes = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9500]; /* ('is_recursive_pair', 'make_simplified_union',
                                     'tuple_fallback') */
    cpy_r_r34 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r35 = CPyStatic_meet___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", 16, CPyStatic_meet___globals);
        goto CPyL20;
    }
    CPyModule_mypy___typeops = cpy_r_r36;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9501]; /* ('MYPYC_NATIVE_INT_NAMES', 'AnyType', 'CallableType',
                                     'DeletedType', 'ErasedType', 'FunctionLike', 'Instance',
                                     'LiteralType', 'NoneType', 'Overloaded', 'Parameters',
                                     'ParamSpecType', 'PartialType', 'ProperType',
                                     'TupleType', 'Type', 'TypeAliasType', 'TypedDictType',
                                     'TypeGuardedType', 'TypeOfAny', 'TypeType',
                                     'TypeVarLikeType', 'TypeVarTupleType', 'TypeVarType',
                                     'TypeVisitor', 'UnboundType', 'UninhabitedType',
                                     'UnionType', 'UnpackType', 'get_proper_type',
                                     'get_proper_types') */
    cpy_r_r38 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r39 = CPyStatic_meet___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", 17, CPyStatic_meet___globals);
        goto CPyL20;
    }
    CPyModule_mypy___types = cpy_r_r40;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = (PyObject *)CPyType_type_visitor___TypeVisitor;
    cpy_r_r42 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r43 = PyObject_GetItem(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", 626, CPyStatic_meet___globals);
        goto CPyL20;
    }
    cpy_r_r44 = PyTuple_Pack(1, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", 626, CPyStatic_meet___globals);
        goto CPyL20;
    }
    cpy_r_r45 = CPyStatics[932]; /* 'mypy.meet' */
    cpy_r_r46 = (PyObject *)CPyType_meet___TypeMeetVisitor_template;
    cpy_r_r47 = CPyType_FromTemplate(cpy_r_r46, cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", 626, CPyStatic_meet___globals);
        goto CPyL20;
    }
    cpy_r_r48 = CPyDef_meet___TypeMeetVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", -1, CPyStatic_meet___globals);
        goto CPyL21;
    }
    cpy_r_r49 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r50 = CPyStatics[1417]; /* 's' */
    cpy_r_r51 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r52 = PyTuple_Pack(2, cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", 626, CPyStatic_meet___globals);
        goto CPyL21;
    }
    cpy_r_r53 = PyObject_SetAttr(cpy_r_r47, cpy_r_r49, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", 626, CPyStatic_meet___globals);
        goto CPyL21;
    }
    CPyType_meet___TypeMeetVisitor = (PyTypeObject *)cpy_r_r47;
    CPy_INCREF(CPyType_meet___TypeMeetVisitor);
    cpy_r_r55 = CPyStatic_meet___globals;
    cpy_r_r56 = CPyStatics[3094]; /* 'TypeMeetVisitor' */
    cpy_r_r57 = CPyDict_SetItem(cpy_r_r55, cpy_r_r56, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/meet.py", "<module>", 626, CPyStatic_meet___globals);
        goto CPyL20;
    }
    return 1;
CPyL20: ;
    cpy_r_r59 = 2;
    return cpy_r_r59;
CPyL21: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL20;
}
