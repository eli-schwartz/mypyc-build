#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
join___InstanceJoiner_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *join___InstanceJoiner_setup(PyTypeObject *type);
PyObject *CPyDef_join___InstanceJoiner(void);

static PyObject *
join___InstanceJoiner_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_join___InstanceJoiner) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = join___InstanceJoiner_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_join___InstanceJoiner_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
join___InstanceJoiner_traverse(mypy___join___InstanceJoinerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_seen_instances);
    return 0;
}

static int
join___InstanceJoiner_clear(mypy___join___InstanceJoinerObject *self)
{
    Py_CLEAR(self->_seen_instances);
    return 0;
}

static void
join___InstanceJoiner_dealloc(mypy___join___InstanceJoinerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, join___InstanceJoiner_dealloc)
    join___InstanceJoiner_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem join___InstanceJoiner_vtable[3];
static bool
CPyDef_join___InstanceJoiner_trait_vtable_setup(void)
{
    CPyVTableItem join___InstanceJoiner_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_join___InstanceJoiner_____init__,
        (CPyVTableItem)CPyDef_join___InstanceJoiner___join_instances,
        (CPyVTableItem)CPyDef_join___InstanceJoiner___join_instances_via_supertype,
    };
    memcpy(join___InstanceJoiner_vtable, join___InstanceJoiner_vtable_scratch, sizeof(join___InstanceJoiner_vtable));
    return 1;
}

static PyObject *
join___InstanceJoiner_get_seen_instances(mypy___join___InstanceJoinerObject *self, void *closure);
static int
join___InstanceJoiner_set_seen_instances(mypy___join___InstanceJoinerObject *self, PyObject *value, void *closure);

static PyGetSetDef join___InstanceJoiner_getseters[] = {
    {"seen_instances",
     (getter)join___InstanceJoiner_get_seen_instances, (setter)join___InstanceJoiner_set_seen_instances,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef join___InstanceJoiner_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_join___InstanceJoiner_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"join_instances",
     (PyCFunction)CPyPy_join___InstanceJoiner___join_instances,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"join_instances_via_supertype",
     (PyCFunction)CPyPy_join___InstanceJoiner___join_instances_via_supertype,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_join___InstanceJoiner_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "InstanceJoiner",
    .tp_new = join___InstanceJoiner_new,
    .tp_dealloc = (destructor)join___InstanceJoiner_dealloc,
    .tp_traverse = (traverseproc)join___InstanceJoiner_traverse,
    .tp_clear = (inquiry)join___InstanceJoiner_clear,
    .tp_getset = join___InstanceJoiner_getseters,
    .tp_methods = join___InstanceJoiner_methods,
    .tp_init = join___InstanceJoiner_init,
    .tp_basicsize = sizeof(mypy___join___InstanceJoinerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_join___InstanceJoiner_template = &CPyType_join___InstanceJoiner_template_;

static PyObject *
join___InstanceJoiner_setup(PyTypeObject *type)
{
    mypy___join___InstanceJoinerObject *self;
    self = (mypy___join___InstanceJoinerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = join___InstanceJoiner_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_join___InstanceJoiner(void)
{
    PyObject *self = join___InstanceJoiner_setup(CPyType_join___InstanceJoiner);
    if (self == NULL)
        return NULL;
    char res = CPyDef_join___InstanceJoiner_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
join___InstanceJoiner_get_seen_instances(mypy___join___InstanceJoinerObject *self, void *closure)
{
    if (unlikely(self->_seen_instances == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'seen_instances' of 'InstanceJoiner' undefined");
        return NULL;
    }
    CPy_INCREF(self->_seen_instances);
    PyObject *retval = self->_seen_instances;
    return retval;
}

static int
join___InstanceJoiner_set_seen_instances(mypy___join___InstanceJoinerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'InstanceJoiner' object attribute 'seen_instances' cannot be deleted");
        return -1;
    }
    if (self->_seen_instances != NULL) {
        CPy_DECREF(self->_seen_instances);
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
    self->_seen_instances = tmp;
    return 0;
}

static int
join___TypeJoinVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef join___TypeJoinVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___join___TypeJoinVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___join___TypeJoinVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *join___TypeJoinVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_join___TypeJoinVisitor(PyObject *cpy_r_s, PyObject *cpy_r_instance_joiner);

static PyObject *
join___TypeJoinVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_join___TypeJoinVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = join___TypeJoinVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_join___TypeJoinVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
join___TypeJoinVisitor_traverse(mypy___join___TypeJoinVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_s);
    Py_VISIT(self->_instance_joiner);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___join___TypeJoinVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___join___TypeJoinVisitorObject))));
    return 0;
}

static int
join___TypeJoinVisitor_clear(mypy___join___TypeJoinVisitorObject *self)
{
    Py_CLEAR(self->_s);
    Py_CLEAR(self->_instance_joiner);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___join___TypeJoinVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___join___TypeJoinVisitorObject))));
    return 0;
}

static void
join___TypeJoinVisitor_dealloc(mypy___join___TypeJoinVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, join___TypeJoinVisitor_dealloc)
    join___TypeJoinVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem join___TypeJoinVisitor_vtable[26];
static CPyVTableItem join___TypeJoinVisitor_type_visitor___TypeVisitor_trait_vtable[21];
static size_t join___TypeJoinVisitor_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_join___TypeJoinVisitor_trait_vtable_setup(void)
{
    CPyVTableItem join___TypeJoinVisitor_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(join___TypeJoinVisitor_type_visitor___TypeVisitor_trait_vtable, join___TypeJoinVisitor_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(join___TypeJoinVisitor_type_visitor___TypeVisitor_trait_vtable));
    size_t join___TypeJoinVisitor_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(join___TypeJoinVisitor_type_visitor___TypeVisitor_offset_table, join___TypeJoinVisitor_type_visitor___TypeVisitor_offset_table_scratch, sizeof(join___TypeJoinVisitor_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem join___TypeJoinVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)join___TypeJoinVisitor_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)join___TypeJoinVisitor_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor_____init__,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_unbound_type,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_union_type,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_any,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_none_type,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_deleted_type,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_erased_type,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_type_var,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_param_spec,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_unpack_type,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_parameters,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_instance,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_callable_type,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_overloaded,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_tuple_type,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_typeddict_type,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_literal_type,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_partial_type,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_type_type,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___visit_type_alias_type,
        (CPyVTableItem)CPyDef_join___TypeJoinVisitor___default,
    };
    memcpy(join___TypeJoinVisitor_vtable, join___TypeJoinVisitor_vtable_scratch, sizeof(join___TypeJoinVisitor_vtable));
    return 1;
}

static PyObject *
join___TypeJoinVisitor_get_s(mypy___join___TypeJoinVisitorObject *self, void *closure);
static int
join___TypeJoinVisitor_set_s(mypy___join___TypeJoinVisitorObject *self, PyObject *value, void *closure);
static PyObject *
join___TypeJoinVisitor_get_instance_joiner(mypy___join___TypeJoinVisitorObject *self, void *closure);
static int
join___TypeJoinVisitor_set_instance_joiner(mypy___join___TypeJoinVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef join___TypeJoinVisitor_getseters[] = {
    {"s",
     (getter)join___TypeJoinVisitor_get_s, (setter)join___TypeJoinVisitor_set_s,
     NULL, NULL},
    {"instance_joiner",
     (getter)join___TypeJoinVisitor_get_instance_joiner, (setter)join___TypeJoinVisitor_set_instance_joiner,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef join___TypeJoinVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_join___TypeJoinVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unbound_type",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_unbound_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_none_type",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_none_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_deleted_type",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_deleted_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_erased_type",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_erased_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_parameters",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_parameters,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_literal_type",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_partial_type",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_partial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_type",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_type_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"default",
     (PyCFunction)CPyPy_join___TypeJoinVisitor___default,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_join___TypeJoinVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeJoinVisitor",
    .tp_new = join___TypeJoinVisitor_new,
    .tp_dealloc = (destructor)join___TypeJoinVisitor_dealloc,
    .tp_traverse = (traverseproc)join___TypeJoinVisitor_traverse,
    .tp_clear = (inquiry)join___TypeJoinVisitor_clear,
    .tp_getset = join___TypeJoinVisitor_getseters,
    .tp_methods = join___TypeJoinVisitor_methods,
    .tp_init = join___TypeJoinVisitor_init,
    .tp_members = join___TypeJoinVisitor_members,
    .tp_basicsize = sizeof(mypy___join___TypeJoinVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___join___TypeJoinVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___join___TypeJoinVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_join___TypeJoinVisitor_template = &CPyType_join___TypeJoinVisitor_template_;

static PyObject *
join___TypeJoinVisitor_setup(PyTypeObject *type)
{
    mypy___join___TypeJoinVisitorObject *self;
    self = (mypy___join___TypeJoinVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = join___TypeJoinVisitor_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_join___TypeJoinVisitor(PyObject *cpy_r_s, PyObject *cpy_r_instance_joiner)
{
    PyObject *self = join___TypeJoinVisitor_setup(CPyType_join___TypeJoinVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_join___TypeJoinVisitor_____init__(self, cpy_r_s, cpy_r_instance_joiner);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
join___TypeJoinVisitor_get_s(mypy___join___TypeJoinVisitorObject *self, void *closure)
{
    if (unlikely(self->_s == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 's' of 'TypeJoinVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_s);
    PyObject *retval = self->_s;
    return retval;
}

static int
join___TypeJoinVisitor_set_s(mypy___join___TypeJoinVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeJoinVisitor' object attribute 's' cannot be deleted");
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

static PyObject *
join___TypeJoinVisitor_get_instance_joiner(mypy___join___TypeJoinVisitorObject *self, void *closure)
{
    if (unlikely(self->_instance_joiner == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'instance_joiner' of 'TypeJoinVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_instance_joiner);
    PyObject *retval = self->_instance_joiner;
    return retval;
}

static int
join___TypeJoinVisitor_set_instance_joiner(mypy___join___TypeJoinVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeJoinVisitor' object attribute 'instance_joiner' cannot be deleted");
        return -1;
    }
    if (self->_instance_joiner != NULL) {
        CPy_DECREF(self->_instance_joiner);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_join___InstanceJoiner)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2998;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2998;
    CPy_TypeError("mypy.join.InstanceJoiner or None", value); 
    tmp = NULL;
__LL2998: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_instance_joiner = tmp;
    return 0;
}
static PyMethodDef joinmodule_methods[] = {
    {"join_simple", (PyCFunction)CPyPy_join___join_simple, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"trivial_join", (PyCFunction)CPyPy_join___trivial_join, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"join_types", (PyCFunction)CPyPy_join___join_types, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_better", (PyCFunction)CPyPy_join___is_better, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"normalize_callables", (PyCFunction)CPyPy_join___normalize_callables, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_similar_callables", (PyCFunction)CPyPy_join___is_similar_callables, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"join_similar_callables", (PyCFunction)CPyPy_join___join_similar_callables, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"combine_similar_callables", (PyCFunction)CPyPy_join___combine_similar_callables, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"combine_arg_names", (PyCFunction)CPyPy_join___combine_arg_names, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"object_from_instance", (PyCFunction)CPyPy_join___object_from_instance, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"object_or_any_from_type", (PyCFunction)CPyPy_join___object_or_any_from_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"join_type_list", (PyCFunction)CPyPy_join___join_type_list, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"unpack_callback_protocol", (PyCFunction)CPyPy_join___unpack_callback_protocol, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef joinmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.join",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    joinmodule_methods
};

PyObject *CPyInit_mypy___join(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___join_internal) {
        Py_INCREF(CPyModule_mypy___join_internal);
        return CPyModule_mypy___join_internal;
    }
    CPyModule_mypy___join_internal = PyModule_Create(&joinmodule);
    if (unlikely(CPyModule_mypy___join_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___join_internal, "__name__");
    CPyStatic_join___globals = PyModule_GetDict(CPyModule_mypy___join_internal);
    if (unlikely(CPyStatic_join___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_join_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___join_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___join_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_join___InstanceJoiner);
    Py_CLEAR(CPyType_join___TypeJoinVisitor);
    return NULL;
}

char CPyDef_join___InstanceJoiner_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "__init__", 53, CPyStatic_join___globals);
        goto CPyL2;
    }
    ((mypy___join___InstanceJoinerObject *)cpy_r_self)->_seen_instances = cpy_r_r0;
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_join___InstanceJoiner_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___InstanceJoiner))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.InstanceJoiner", obj_self); 
        goto fail;
    }
    char retval = CPyDef_join___InstanceJoiner_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/join.py", "__init__", 52, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___InstanceJoiner___join_instances(PyObject *cpy_r_self, PyObject *cpy_r_t, PyObject *cpy_r_s) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    tuple_T2OO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    tuple_T2OO cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_ta;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_sa;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_type_var;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_ta_proper;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_sa_proper;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_new_type;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyPtr cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyTagged cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyPtr cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyPtr cpy_r_r81;
    int64_t cpy_r_r82;
    CPyTagged cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    tuple_T2OO cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    tuple_T2OO cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    CPyTagged cpy_r_r112;
    int64_t cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    CPyTagged cpy_r_r120;
    int64_t cpy_r_r121;
    char cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    tuple_T2OO cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    int32_t cpy_r_r149;
    char cpy_r_r150;
    CPyTagged cpy_r_r151;
    CPyTagged cpy_r_r152;
    CPyTagged cpy_r_r153;
    PyObject *cpy_r_r154;
    CPyTagged cpy_r_r155;
    CPyTagged cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    CPyPtr cpy_r_r162;
    int64_t cpy_r_r163;
    CPyTagged cpy_r_r164;
    char cpy_r_r165;
    char cpy_r_r166;
    char cpy_r_r167;
    char cpy_r_r168;
    char cpy_r_r169;
    char cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    char cpy_r_r174;
    char cpy_r_r175;
    char cpy_r_r176;
    char cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    tuple_T2OO cpy_r_r183;
    PyObject *cpy_r_r184;
    cpy_r_r0.f0 = cpy_r_t;
    cpy_r_r0.f1 = cpy_r_s;
    CPy_INCREF(cpy_r_r0.f0);
    CPy_INCREF(cpy_r_r0.f1);
    cpy_r_r1 = ((mypy___join___InstanceJoinerObject *)cpy_r_self)->_seen_instances;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2999 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp2999);
    PyObject *__tmp3000 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp3000);
    cpy_r_r3 = PySequence_Contains(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 56, CPyStatic_join___globals);
        goto CPyL100;
    }
    cpy_r_r5 = cpy_r_r3;
    if (cpy_r_r5) goto CPyL4;
    cpy_r_r6.f0 = cpy_r_s;
    cpy_r_r6.f1 = cpy_r_t;
    CPy_INCREF(cpy_r_r6.f0);
    CPy_INCREF(cpy_r_r6.f1);
    cpy_r_r7 = ((mypy___join___InstanceJoinerObject *)cpy_r_self)->_seen_instances;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyTuple_New(2);
    if (unlikely(cpy_r_r8 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3001 = cpy_r_r6.f0;
    PyTuple_SET_ITEM(cpy_r_r8, 0, __tmp3001);
    PyObject *__tmp3002 = cpy_r_r6.f1;
    PyTuple_SET_ITEM(cpy_r_r8, 1, __tmp3002);
    cpy_r_r9 = PySequence_Contains(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 56, CPyStatic_join___globals);
        goto CPyL100;
    }
    cpy_r_r11 = cpy_r_r9;
    if (!cpy_r_r11) goto CPyL6;
CPyL4: ;
    cpy_r_r12 = CPyDef_join___object_from_instance(cpy_r_t);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 57, CPyStatic_join___globals);
        goto CPyL100;
    }
    return cpy_r_r12;
CPyL6: ;
    cpy_r_r13 = ((mypy___join___InstanceJoinerObject *)cpy_r_self)->_seen_instances;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14.f0 = cpy_r_t;
    cpy_r_r14.f1 = cpy_r_s;
    CPy_INCREF(cpy_r_r14.f0);
    CPy_INCREF(cpy_r_r14.f1);
    cpy_r_r15 = PyTuple_New(2);
    if (unlikely(cpy_r_r15 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3003 = cpy_r_r14.f0;
    PyTuple_SET_ITEM(cpy_r_r15, 0, __tmp3003);
    PyObject *__tmp3004 = cpy_r_r14.f1;
    PyTuple_SET_ITEM(cpy_r_r15, 1, __tmp3004);
    cpy_r_r16 = PyList_Append(cpy_r_r13, cpy_r_r15);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 59, CPyStatic_join___globals);
        goto CPyL100;
    }
    cpy_r_r18 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = ((mypy___types___InstanceObject *)cpy_r_s)->_type;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = cpy_r_r18 == cpy_r_r19;
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    if (!cpy_r_r20) goto CPyL88;
    cpy_r_r21 = PyList_New(0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 67, CPyStatic_join___globals);
        goto CPyL100;
    }
    cpy_r_args = cpy_r_r21;
    cpy_r_r22 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = 0;
    cpy_r_r24 = ((mypy___types___InstanceObject *)cpy_r_s)->_args;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = 0;
    cpy_r_r26 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    cpy_r_r27 = ((mypy___nodes___TypeInfoObject *)cpy_r_r26)->_defn;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/join.py", "join_instances", "TypeInfo", "defn", 70, CPyStatic_join___globals);
        goto CPyL101;
    }
CPyL10: ;
    cpy_r_r28 = ((mypy___nodes___ClassDefObject *)cpy_r_r27)->_type_vars;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = 0;
CPyL11: ;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r22)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r23 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL102;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r24)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r25 < (Py_ssize_t)cpy_r_r36;
    if (!cpy_r_r37) goto CPyL102;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_r28)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r29 < (Py_ssize_t)cpy_r_r40;
    if (!cpy_r_r41) goto CPyL102;
    cpy_r_r42 = CPySequenceTuple_GetItem(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 70, CPyStatic_join___globals);
        goto CPyL103;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r42, CPyType_types___Type)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 70, CPyStatic_join___globals, "mypy.types.Type", cpy_r_r42);
        goto CPyL103;
    }
    cpy_r_ta = cpy_r_r43;
    cpy_r_r44 = CPySequenceTuple_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 70, CPyStatic_join___globals);
        goto CPyL104;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r44, CPyType_types___Type)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 70, CPyStatic_join___globals, "mypy.types.Type", cpy_r_r44);
        goto CPyL104;
    }
    cpy_r_sa = cpy_r_r45;
    cpy_r_r46 = CPyList_GetItemUnsafe(cpy_r_r28, cpy_r_r29);
    if (likely(PyObject_TypeCheck(cpy_r_r46, CPyType_types___TypeVarLikeType)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 70, CPyStatic_join___globals, "mypy.types.TypeVarLikeType", cpy_r_r46);
        goto CPyL105;
    }
    cpy_r_type_var = cpy_r_r47;
    cpy_r_r48 = CPyDef_types___get_proper_type(cpy_r_ta);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 71, CPyStatic_join___globals);
        goto CPyL106;
    }
    if (likely(cpy_r_r48 != Py_None))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 71, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r48);
        goto CPyL106;
    }
    cpy_r_ta_proper = cpy_r_r49;
    cpy_r_r50 = CPyDef_types___get_proper_type(cpy_r_sa);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 72, CPyStatic_join___globals);
        goto CPyL107;
    }
    if (likely(cpy_r_r50 != Py_None))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 72, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r50);
        goto CPyL107;
    }
    cpy_r_sa_proper = cpy_r_r51;
    cpy_r_r52 = Py_None;
    CPy_INCREF(cpy_r_r52);
    cpy_r_new_type = cpy_r_r52;
    cpy_r_r53 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_ta_proper)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    if (cpy_r_r56) {
        goto CPyL108;
    } else
        goto CPyL109;
CPyL24: ;
    if (likely(Py_TYPE(cpy_r_ta_proper) == CPyType_types___AnyType))
        cpy_r_r57 = cpy_r_ta_proper;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 75, CPyStatic_join___globals, "mypy.types.AnyType", cpy_r_ta_proper);
        goto CPyL103;
    }
    cpy_r_r58 = NULL;
    cpy_r_r59 = CPY_INT_TAG;
    cpy_r_r60 = CPY_INT_TAG;
    cpy_r_r61 = CPyDef_types___AnyType(14, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 75, CPyStatic_join___globals);
        goto CPyL103;
    }
    cpy_r_new_type = cpy_r_r61;
    goto CPyL80;
CPyL27: ;
    cpy_r_r62 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r63 = (CPyPtr)&((PyObject *)cpy_r_sa_proper)->ob_type;
    cpy_r_r64 = *(PyObject * *)cpy_r_r63;
    cpy_r_r65 = cpy_r_r64 == cpy_r_r62;
    if (cpy_r_r65) {
        goto CPyL110;
    } else
        goto CPyL111;
CPyL28: ;
    if (likely(Py_TYPE(cpy_r_sa_proper) == CPyType_types___AnyType))
        cpy_r_r66 = cpy_r_sa_proper;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 77, CPyStatic_join___globals, "mypy.types.AnyType", cpy_r_sa_proper);
        goto CPyL103;
    }
    cpy_r_r67 = NULL;
    cpy_r_r68 = CPY_INT_TAG;
    cpy_r_r69 = CPY_INT_TAG;
    cpy_r_r70 = CPyDef_types___AnyType(14, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 77, CPyStatic_join___globals);
        goto CPyL103;
    }
    cpy_r_new_type = cpy_r_r70;
    goto CPyL80;
CPyL31: ;
    cpy_r_r71 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r72 = (CPyPtr)&((PyObject *)cpy_r_type_var)->ob_type;
    cpy_r_r73 = *(PyObject * *)cpy_r_r72;
    cpy_r_r74 = cpy_r_r73 == cpy_r_r71;
    if (!cpy_r_r74) goto CPyL112;
    if (likely(Py_TYPE(cpy_r_type_var) == CPyType_types___TypeVarType))
        cpy_r_r75 = cpy_r_type_var;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 79, CPyStatic_join___globals, "mypy.types.TypeVarType", cpy_r_type_var);
        goto CPyL113;
    }
    cpy_r_r76 = ((mypy___types___TypeVarTypeObject *)cpy_r_r75)->_variance;
    cpy_r_r77 = cpy_r_r76 == 2;
    if (cpy_r_r77) {
        goto CPyL114;
    } else
        goto CPyL53;
CPyL34: ;
    cpy_r_r78 = CPyDef_join___join_types(cpy_r_ta, cpy_r_sa, cpy_r_self);
    CPy_DECREF(cpy_r_ta);
    CPy_DECREF(cpy_r_sa);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 80, CPyStatic_join___globals);
        goto CPyL115;
    }
    cpy_r_new_type = cpy_r_r78;
    if (likely(Py_TYPE(cpy_r_type_var) == CPyType_types___TypeVarType))
        cpy_r_r79 = cpy_r_type_var;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 81, CPyStatic_join___globals, "mypy.types.TypeVarType", cpy_r_type_var);
        goto CPyL116;
    }
    cpy_r_r80 = ((mypy___types___TypeVarTypeObject *)cpy_r_r79)->_values;
    cpy_r_r81 = (CPyPtr)&((PyVarObject *)cpy_r_r80)->ob_size;
    cpy_r_r82 = *(int64_t *)cpy_r_r81;
    cpy_r_r83 = cpy_r_r82 << 1;
    cpy_r_r84 = cpy_r_r83 != 0;
    if (!cpy_r_r84) goto CPyL45;
    CPy_INCREF(cpy_r_new_type);
    if (likely(cpy_r_new_type != Py_None))
        cpy_r_r85 = cpy_r_new_type;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 81, CPyStatic_join___globals, "mypy.types.Type", cpy_r_new_type);
        goto CPyL116;
    }
    if (likely(Py_TYPE(cpy_r_type_var) == CPyType_types___TypeVarType))
        cpy_r_r86 = cpy_r_type_var;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 81, CPyStatic_join___globals, "mypy.types.TypeVarType", cpy_r_type_var);
        goto CPyL117;
    }
    cpy_r_r87 = ((mypy___types___TypeVarTypeObject *)cpy_r_r86)->_values;
    CPy_INCREF(cpy_r_r87);
    cpy_r_r88 = PySequence_Contains(cpy_r_r87, cpy_r_r85);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 81, CPyStatic_join___globals);
        goto CPyL116;
    }
    cpy_r_r90 = cpy_r_r88;
    cpy_r_r91 = cpy_r_r90 ^ 1;
    if (cpy_r_r91) {
        goto CPyL118;
    } else
        goto CPyL45;
CPyL41: ;
    cpy_r_r92 = ((mypy___join___InstanceJoinerObject *)cpy_r_self)->_seen_instances;
    CPy_INCREF(cpy_r_r92);
    cpy_r_r93 = CPyList_PopLast(cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 82, CPyStatic_join___globals);
        goto CPyL100;
    }
    PyObject *__tmp3005;
    if (unlikely(!(PyTuple_Check(cpy_r_r93) && PyTuple_GET_SIZE(cpy_r_r93) == 2))) {
        __tmp3005 = NULL;
        goto __LL3006;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r93, 0)) == CPyType_types___Instance))
        __tmp3005 = PyTuple_GET_ITEM(cpy_r_r93, 0);
    else {
        __tmp3005 = NULL;
    }
    if (__tmp3005 == NULL) goto __LL3006;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r93, 1)) == CPyType_types___Instance))
        __tmp3005 = PyTuple_GET_ITEM(cpy_r_r93, 1);
    else {
        __tmp3005 = NULL;
    }
    if (__tmp3005 == NULL) goto __LL3006;
    __tmp3005 = cpy_r_r93;
__LL3006: ;
    if (unlikely(__tmp3005 == NULL)) {
        CPy_TypeError("tuple[mypy.types.Instance, mypy.types.Instance]", cpy_r_r93); cpy_r_r94 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3007 = PyTuple_GET_ITEM(cpy_r_r93, 0);
        CPy_INCREF(__tmp3007);
        PyObject *__tmp3008;
        if (likely(Py_TYPE(__tmp3007) == CPyType_types___Instance))
            __tmp3008 = __tmp3007;
        else {
            CPy_TypeError("mypy.types.Instance", __tmp3007); 
            __tmp3008 = NULL;
        }
        cpy_r_r94.f0 = __tmp3008;
        PyObject *__tmp3009 = PyTuple_GET_ITEM(cpy_r_r93, 1);
        CPy_INCREF(__tmp3009);
        PyObject *__tmp3010;
        if (likely(Py_TYPE(__tmp3009) == CPyType_types___Instance))
            __tmp3010 = __tmp3009;
        else {
            CPy_TypeError("mypy.types.Instance", __tmp3009); 
            __tmp3010 = NULL;
        }
        cpy_r_r94.f1 = __tmp3010;
    }
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94.f0 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 82, CPyStatic_join___globals);
        goto CPyL100;
    } else
        goto CPyL119;
CPyL43: ;
    cpy_r_r95 = CPyDef_join___object_from_instance(cpy_r_t);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 83, CPyStatic_join___globals);
        goto CPyL100;
    }
    return cpy_r_r95;
CPyL45: ;
    CPy_INCREF(cpy_r_new_type);
    if (likely(cpy_r_new_type != Py_None))
        cpy_r_r96 = cpy_r_new_type;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 84, CPyStatic_join___globals, "mypy.types.Type", cpy_r_new_type);
        goto CPyL116;
    }
    if (likely(Py_TYPE(cpy_r_type_var) == CPyType_types___TypeVarType))
        cpy_r_r97 = cpy_r_type_var;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 84, CPyStatic_join___globals, "mypy.types.TypeVarType", cpy_r_type_var);
        goto CPyL120;
    }
    cpy_r_r98 = ((mypy___types___TypeVarTypeObject *)cpy_r_r97)->_upper_bound;
    CPy_INCREF(cpy_r_r98);
    CPy_DECREF(cpy_r_type_var);
    cpy_r_r99 = NULL;
    cpy_r_r100 = 2;
    cpy_r_r101 = 2;
    cpy_r_r102 = 2;
    cpy_r_r103 = 2;
    cpy_r_r104 = 2;
    cpy_r_r105 = NULL;
    cpy_r_r106 = CPyDef_subtypes___is_subtype(cpy_r_r96, cpy_r_r98, cpy_r_r99, cpy_r_r100, cpy_r_r101, cpy_r_r102, cpy_r_r103, cpy_r_r104, cpy_r_r105);
    CPy_DECREF(cpy_r_r96);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r106 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 84, CPyStatic_join___globals);
        goto CPyL121;
    }
    if (cpy_r_r106) {
        goto CPyL80;
    } else
        goto CPyL122;
CPyL49: ;
    cpy_r_r107 = ((mypy___join___InstanceJoinerObject *)cpy_r_self)->_seen_instances;
    CPy_INCREF(cpy_r_r107);
    cpy_r_r108 = CPyList_PopLast(cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 85, CPyStatic_join___globals);
        goto CPyL100;
    }
    PyObject *__tmp3011;
    if (unlikely(!(PyTuple_Check(cpy_r_r108) && PyTuple_GET_SIZE(cpy_r_r108) == 2))) {
        __tmp3011 = NULL;
        goto __LL3012;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r108, 0)) == CPyType_types___Instance))
        __tmp3011 = PyTuple_GET_ITEM(cpy_r_r108, 0);
    else {
        __tmp3011 = NULL;
    }
    if (__tmp3011 == NULL) goto __LL3012;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r108, 1)) == CPyType_types___Instance))
        __tmp3011 = PyTuple_GET_ITEM(cpy_r_r108, 1);
    else {
        __tmp3011 = NULL;
    }
    if (__tmp3011 == NULL) goto __LL3012;
    __tmp3011 = cpy_r_r108;
__LL3012: ;
    if (unlikely(__tmp3011 == NULL)) {
        CPy_TypeError("tuple[mypy.types.Instance, mypy.types.Instance]", cpy_r_r108); cpy_r_r109 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3013 = PyTuple_GET_ITEM(cpy_r_r108, 0);
        CPy_INCREF(__tmp3013);
        PyObject *__tmp3014;
        if (likely(Py_TYPE(__tmp3013) == CPyType_types___Instance))
            __tmp3014 = __tmp3013;
        else {
            CPy_TypeError("mypy.types.Instance", __tmp3013); 
            __tmp3014 = NULL;
        }
        cpy_r_r109.f0 = __tmp3014;
        PyObject *__tmp3015 = PyTuple_GET_ITEM(cpy_r_r108, 1);
        CPy_INCREF(__tmp3015);
        PyObject *__tmp3016;
        if (likely(Py_TYPE(__tmp3015) == CPyType_types___Instance))
            __tmp3016 = __tmp3015;
        else {
            CPy_TypeError("mypy.types.Instance", __tmp3015); 
            __tmp3016 = NULL;
        }
        cpy_r_r109.f1 = __tmp3016;
    }
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109.f0 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 85, CPyStatic_join___globals);
        goto CPyL100;
    } else
        goto CPyL123;
CPyL51: ;
    cpy_r_r110 = CPyDef_join___object_from_instance(cpy_r_t);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 86, CPyStatic_join___globals);
        goto CPyL100;
    }
    return cpy_r_r110;
CPyL53: ;
    if (likely(Py_TYPE(cpy_r_type_var) == CPyType_types___TypeVarType))
        cpy_r_r111 = cpy_r_type_var;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 89, CPyStatic_join___globals, "mypy.types.TypeVarType", cpy_r_type_var);
        goto CPyL113;
    }
    cpy_r_r112 = ((mypy___types___TypeVarTypeObject *)cpy_r_r111)->_variance;
    cpy_r_r113 = cpy_r_r112 & 1;
    cpy_r_r114 = cpy_r_r113 == 0;
    if (!cpy_r_r114) goto CPyL56;
    cpy_r_r115 = cpy_r_r112 == 0;
    cpy_r_r116 = cpy_r_r115;
    goto CPyL57;
CPyL56: ;
    cpy_r_r117 = CPyTagged_IsEq_(cpy_r_r112, 0);
    cpy_r_r116 = cpy_r_r117;
CPyL57: ;
    if (cpy_r_r116) {
        goto CPyL124;
    } else
        goto CPyL59;
CPyL58: ;
    cpy_r_r118 = cpy_r_r116;
    goto CPyL64;
CPyL59: ;
    if (likely(Py_TYPE(cpy_r_type_var) == CPyType_types___TypeVarType))
        cpy_r_r119 = cpy_r_type_var;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 89, CPyStatic_join___globals, "mypy.types.TypeVarType", cpy_r_type_var);
        goto CPyL113;
    }
    cpy_r_r120 = ((mypy___types___TypeVarTypeObject *)cpy_r_r119)->_variance;
    cpy_r_r121 = cpy_r_r120 & 1;
    cpy_r_r122 = cpy_r_r121 == 0;
    if (!cpy_r_r122) goto CPyL62;
    cpy_r_r123 = cpy_r_r120 == 4;
    cpy_r_r124 = cpy_r_r123;
    goto CPyL63;
CPyL62: ;
    cpy_r_r125 = CPyTagged_IsEq_(cpy_r_r120, 4);
    cpy_r_r124 = cpy_r_r125;
CPyL63: ;
    CPy_DECREF(cpy_r_type_var);
    cpy_r_r118 = cpy_r_r124;
CPyL64: ;
    if (cpy_r_r118) {
        goto CPyL125;
    } else
        goto CPyL126;
CPyL65: ;
    cpy_r_r126 = 2;
    cpy_r_r127 = 2;
    cpy_r_r128 = NULL;
    cpy_r_r129 = NULL;
    cpy_r_r130 = CPyDef_subtypes___is_equivalent(cpy_r_ta, cpy_r_sa, cpy_r_r126, cpy_r_r127, cpy_r_r128, cpy_r_r129);
    if (unlikely(cpy_r_r130 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 90, CPyStatic_join___globals);
        goto CPyL105;
    }
    if (cpy_r_r130) {
        goto CPyL71;
    } else
        goto CPyL127;
CPyL67: ;
    cpy_r_r131 = ((mypy___join___InstanceJoinerObject *)cpy_r_self)->_seen_instances;
    CPy_INCREF(cpy_r_r131);
    cpy_r_r132 = CPyList_PopLast(cpy_r_r131);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 91, CPyStatic_join___globals);
        goto CPyL100;
    }
    PyObject *__tmp3017;
    if (unlikely(!(PyTuple_Check(cpy_r_r132) && PyTuple_GET_SIZE(cpy_r_r132) == 2))) {
        __tmp3017 = NULL;
        goto __LL3018;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r132, 0)) == CPyType_types___Instance))
        __tmp3017 = PyTuple_GET_ITEM(cpy_r_r132, 0);
    else {
        __tmp3017 = NULL;
    }
    if (__tmp3017 == NULL) goto __LL3018;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r132, 1)) == CPyType_types___Instance))
        __tmp3017 = PyTuple_GET_ITEM(cpy_r_r132, 1);
    else {
        __tmp3017 = NULL;
    }
    if (__tmp3017 == NULL) goto __LL3018;
    __tmp3017 = cpy_r_r132;
__LL3018: ;
    if (unlikely(__tmp3017 == NULL)) {
        CPy_TypeError("tuple[mypy.types.Instance, mypy.types.Instance]", cpy_r_r132); cpy_r_r133 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3019 = PyTuple_GET_ITEM(cpy_r_r132, 0);
        CPy_INCREF(__tmp3019);
        PyObject *__tmp3020;
        if (likely(Py_TYPE(__tmp3019) == CPyType_types___Instance))
            __tmp3020 = __tmp3019;
        else {
            CPy_TypeError("mypy.types.Instance", __tmp3019); 
            __tmp3020 = NULL;
        }
        cpy_r_r133.f0 = __tmp3020;
        PyObject *__tmp3021 = PyTuple_GET_ITEM(cpy_r_r132, 1);
        CPy_INCREF(__tmp3021);
        PyObject *__tmp3022;
        if (likely(Py_TYPE(__tmp3021) == CPyType_types___Instance))
            __tmp3022 = __tmp3021;
        else {
            CPy_TypeError("mypy.types.Instance", __tmp3021); 
            __tmp3022 = NULL;
        }
        cpy_r_r133.f1 = __tmp3022;
    }
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r133.f0 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 91, CPyStatic_join___globals);
        goto CPyL100;
    } else
        goto CPyL128;
CPyL69: ;
    cpy_r_r134 = CPyDef_join___object_from_instance(cpy_r_t);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 92, CPyStatic_join___globals);
        goto CPyL100;
    }
    return cpy_r_r134;
CPyL71: ;
    cpy_r_r135 = CPyDef_join___join_types(cpy_r_ta, cpy_r_sa, cpy_r_self);
    CPy_DECREF(cpy_r_ta);
    CPy_DECREF(cpy_r_sa);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 95, CPyStatic_join___globals);
        goto CPyL103;
    }
    cpy_r_new_type = cpy_r_r135;
    goto CPyL80;
CPyL73: ;
    cpy_r_r136 = 2;
    cpy_r_r137 = 2;
    cpy_r_r138 = NULL;
    cpy_r_r139 = NULL;
    cpy_r_r140 = CPyDef_subtypes___is_equivalent(cpy_r_ta, cpy_r_sa, cpy_r_r136, cpy_r_r137, cpy_r_r138, cpy_r_r139);
    if (unlikely(cpy_r_r140 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 98, CPyStatic_join___globals);
        goto CPyL106;
    }
    if (cpy_r_r140) {
        goto CPyL129;
    } else
        goto CPyL130;
CPyL75: ;
    cpy_r_r141 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_type_var)->_upper_bound;
    CPy_INCREF(cpy_r_r141);
    CPy_DECREF(cpy_r_type_var);
    cpy_r_r142 = CPyDef_types___get_proper_type(cpy_r_r141);
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 99, CPyStatic_join___globals);
        goto CPyL100;
    }
    if (likely(cpy_r_r142 != Py_None))
        cpy_r_r143 = cpy_r_r142;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 99, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r142);
        goto CPyL100;
    }
    return cpy_r_r143;
CPyL78: ;
    cpy_r_r144 = CPyDef_join___join_types(cpy_r_ta, cpy_r_sa, cpy_r_self);
    CPy_DECREF(cpy_r_ta);
    CPy_DECREF(cpy_r_sa);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 100, CPyStatic_join___globals);
        goto CPyL103;
    }
    cpy_r_new_type = cpy_r_r144;
CPyL80: ;
    cpy_r_r145 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r146 = cpy_r_new_type != cpy_r_r145;
    if (cpy_r_r146) {
        goto CPyL83;
    } else
        goto CPyL131;
CPyL81: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r147 = 0;
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 101, CPyStatic_join___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL83: ;
    if (likely(cpy_r_new_type != Py_None))
        cpy_r_r148 = cpy_r_new_type;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances", 102, CPyStatic_join___globals, "mypy.types.Type", cpy_r_new_type);
        goto CPyL103;
    }
    cpy_r_r149 = PyList_Append(cpy_r_args, cpy_r_r148);
    CPy_DECREF(cpy_r_r148);
    cpy_r_r150 = cpy_r_r149 >= 0;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 102, CPyStatic_join___globals);
        goto CPyL103;
    }
    cpy_r_r151 = cpy_r_r23 + 2;
    cpy_r_r23 = cpy_r_r151;
    cpy_r_r152 = cpy_r_r25 + 2;
    cpy_r_r25 = cpy_r_r152;
    cpy_r_r153 = cpy_r_r29 + 2;
    cpy_r_r29 = cpy_r_r153;
    goto CPyL11;
CPyL86: ;
    cpy_r_r154 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r154);
    cpy_r_r155 = CPY_INT_TAG;
    cpy_r_r156 = CPY_INT_TAG;
    cpy_r_r157 = NULL;
    cpy_r_r158 = NULL;
    cpy_r_r159 = CPyDef_types___Instance(cpy_r_r154, cpy_r_args, cpy_r_r155, cpy_r_r156, cpy_r_r157, cpy_r_r158);
    CPy_DECREF(cpy_r_r154);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 103, CPyStatic_join___globals);
        goto CPyL100;
    }
    cpy_r_result = cpy_r_r159;
    goto CPyL97;
CPyL88: ;
    cpy_r_r160 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    cpy_r_r161 = ((mypy___nodes___TypeInfoObject *)cpy_r_r160)->_bases;
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AttributeError("mypy/join.py", "join_instances", "TypeInfo", "bases", 104, CPyStatic_join___globals);
        goto CPyL100;
    }
    CPy_INCREF(cpy_r_r161);
CPyL89: ;
    cpy_r_r162 = (CPyPtr)&((PyVarObject *)cpy_r_r161)->ob_size;
    cpy_r_r163 = *(int64_t *)cpy_r_r162;
    CPy_DECREF(cpy_r_r161);
    cpy_r_r164 = cpy_r_r163 << 1;
    cpy_r_r165 = cpy_r_r164 != 0;
    if (!cpy_r_r165) goto CPyL95;
    cpy_r_r166 = 2;
    cpy_r_r167 = 2;
    cpy_r_r168 = 2;
    cpy_r_r169 = 2;
    cpy_r_r170 = 2;
    cpy_r_r171 = 2;
    cpy_r_r172 = NULL;
    cpy_r_r173 = CPyDef_subtypes___SubtypeContext(1, cpy_r_r166, cpy_r_r167, cpy_r_r168, cpy_r_r169, cpy_r_r170, cpy_r_r171, cpy_r_r172);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 105, CPyStatic_join___globals);
        goto CPyL100;
    }
    cpy_r_r174 = 2;
    cpy_r_r175 = 2;
    cpy_r_r176 = 2;
    cpy_r_r177 = 2;
    cpy_r_r178 = CPyDef_subtypes___is_proper_subtype(cpy_r_t, cpy_r_s, cpy_r_r173, cpy_r_r174, cpy_r_r175, cpy_r_r176, cpy_r_r177);
    CPy_DECREF(cpy_r_r173);
    if (unlikely(cpy_r_r178 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 104, CPyStatic_join___globals);
        goto CPyL100;
    }
    if (!cpy_r_r178) goto CPyL95;
    cpy_r_r179 = CPyDef_join___InstanceJoiner___join_instances_via_supertype(cpy_r_self, cpy_r_t, cpy_r_s);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 107, CPyStatic_join___globals);
        goto CPyL100;
    }
    cpy_r_result = cpy_r_r179;
    goto CPyL97;
CPyL95: ;
    cpy_r_r180 = CPyDef_join___InstanceJoiner___join_instances_via_supertype(cpy_r_self, cpy_r_s, cpy_r_t);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 112, CPyStatic_join___globals);
        goto CPyL100;
    }
    cpy_r_result = cpy_r_r180;
CPyL97: ;
    cpy_r_r181 = ((mypy___join___InstanceJoinerObject *)cpy_r_self)->_seen_instances;
    CPy_INCREF(cpy_r_r181);
    cpy_r_r182 = CPyList_PopLast(cpy_r_r181);
    CPy_DECREF(cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 114, CPyStatic_join___globals);
        goto CPyL132;
    }
    PyObject *__tmp3023;
    if (unlikely(!(PyTuple_Check(cpy_r_r182) && PyTuple_GET_SIZE(cpy_r_r182) == 2))) {
        __tmp3023 = NULL;
        goto __LL3024;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r182, 0)) == CPyType_types___Instance))
        __tmp3023 = PyTuple_GET_ITEM(cpy_r_r182, 0);
    else {
        __tmp3023 = NULL;
    }
    if (__tmp3023 == NULL) goto __LL3024;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r182, 1)) == CPyType_types___Instance))
        __tmp3023 = PyTuple_GET_ITEM(cpy_r_r182, 1);
    else {
        __tmp3023 = NULL;
    }
    if (__tmp3023 == NULL) goto __LL3024;
    __tmp3023 = cpy_r_r182;
__LL3024: ;
    if (unlikely(__tmp3023 == NULL)) {
        CPy_TypeError("tuple[mypy.types.Instance, mypy.types.Instance]", cpy_r_r182); cpy_r_r183 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3025 = PyTuple_GET_ITEM(cpy_r_r182, 0);
        CPy_INCREF(__tmp3025);
        PyObject *__tmp3026;
        if (likely(Py_TYPE(__tmp3025) == CPyType_types___Instance))
            __tmp3026 = __tmp3025;
        else {
            CPy_TypeError("mypy.types.Instance", __tmp3025); 
            __tmp3026 = NULL;
        }
        cpy_r_r183.f0 = __tmp3026;
        PyObject *__tmp3027 = PyTuple_GET_ITEM(cpy_r_r182, 1);
        CPy_INCREF(__tmp3027);
        PyObject *__tmp3028;
        if (likely(Py_TYPE(__tmp3027) == CPyType_types___Instance))
            __tmp3028 = __tmp3027;
        else {
            CPy_TypeError("mypy.types.Instance", __tmp3027); 
            __tmp3028 = NULL;
        }
        cpy_r_r183.f1 = __tmp3028;
    }
    CPy_DECREF(cpy_r_r182);
    if (unlikely(cpy_r_r183.f0 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances", 114, CPyStatic_join___globals);
        goto CPyL132;
    } else
        goto CPyL133;
CPyL99: ;
    return cpy_r_result;
CPyL100: ;
    cpy_r_r184 = NULL;
    return cpy_r_r184;
CPyL101: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    goto CPyL100;
CPyL102: ;
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r28);
    goto CPyL86;
CPyL103: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    goto CPyL100;
CPyL104: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_ta);
    goto CPyL100;
CPyL105: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_ta);
    CPy_DecRef(cpy_r_sa);
    goto CPyL100;
CPyL106: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_ta);
    CPy_DecRef(cpy_r_sa);
    CPy_DecRef(cpy_r_type_var);
    goto CPyL100;
CPyL107: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_ta);
    CPy_DecRef(cpy_r_sa);
    CPy_DecRef(cpy_r_type_var);
    CPy_DecRef(cpy_r_ta_proper);
    goto CPyL100;
CPyL108: ;
    CPy_DECREF(cpy_r_ta);
    CPy_DECREF(cpy_r_sa);
    CPy_DECREF(cpy_r_type_var);
    CPy_DECREF(cpy_r_sa_proper);
    CPy_DECREF(cpy_r_new_type);
    goto CPyL24;
CPyL109: ;
    CPy_DECREF(cpy_r_ta_proper);
    goto CPyL27;
CPyL110: ;
    CPy_DECREF(cpy_r_ta);
    CPy_DECREF(cpy_r_sa);
    CPy_DECREF(cpy_r_type_var);
    CPy_DECREF(cpy_r_new_type);
    goto CPyL28;
CPyL111: ;
    CPy_DECREF(cpy_r_sa_proper);
    goto CPyL31;
CPyL112: ;
    CPy_DECREF(cpy_r_new_type);
    goto CPyL73;
CPyL113: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_ta);
    CPy_DecRef(cpy_r_sa);
    CPy_DecRef(cpy_r_type_var);
    CPy_DecRef(cpy_r_new_type);
    goto CPyL100;
CPyL114: ;
    CPy_DECREF(cpy_r_new_type);
    goto CPyL34;
CPyL115: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_type_var);
    goto CPyL100;
CPyL116: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_type_var);
    CPy_DecRef(cpy_r_new_type);
    goto CPyL100;
CPyL117: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_type_var);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_r85);
    goto CPyL100;
CPyL118: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_type_var);
    CPy_DECREF(cpy_r_new_type);
    goto CPyL41;
CPyL119: ;
    CPy_DECREF(cpy_r_r94.f0);
    CPy_DECREF(cpy_r_r94.f1);
    goto CPyL43;
CPyL120: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_type_var);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_r96);
    goto CPyL100;
CPyL121: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_new_type);
    goto CPyL100;
CPyL122: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_new_type);
    goto CPyL49;
CPyL123: ;
    CPy_DECREF(cpy_r_r109.f0);
    CPy_DECREF(cpy_r_r109.f1);
    goto CPyL51;
CPyL124: ;
    CPy_DECREF(cpy_r_type_var);
    goto CPyL58;
CPyL125: ;
    CPy_DECREF(cpy_r_new_type);
    goto CPyL65;
CPyL126: ;
    CPy_DECREF(cpy_r_ta);
    CPy_DECREF(cpy_r_sa);
    goto CPyL80;
CPyL127: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_ta);
    CPy_DECREF(cpy_r_sa);
    goto CPyL67;
CPyL128: ;
    CPy_DECREF(cpy_r_r133.f0);
    CPy_DECREF(cpy_r_r133.f1);
    goto CPyL69;
CPyL129: ;
    CPy_DECREF(cpy_r_type_var);
    goto CPyL78;
CPyL130: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_ta);
    CPy_DECREF(cpy_r_sa);
    goto CPyL75;
CPyL131: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_new_type);
    goto CPyL81;
CPyL132: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL100;
CPyL133: ;
    CPy_DECREF(cpy_r_r183.f0);
    CPy_DECREF(cpy_r_r183.f1);
    goto CPyL99;
}

PyObject *CPyPy_join___InstanceJoiner___join_instances(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", "s", 0};
    static CPyArg_Parser parser = {"OO:join_instances", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_t, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___InstanceJoiner))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.InstanceJoiner", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_types___Instance))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.types.Instance", obj_s); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___InstanceJoiner___join_instances(arg_self, arg_t, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "join_instances", 55, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___InstanceJoiner___join_instances_via_supertype(PyObject *cpy_r_self, PyObject *cpy_r_t, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_best;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyPtr cpy_r_r44;
    int64_t cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_mapped;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyTagged cpy_r_r63;
    CPyPtr cpy_r_r64;
    int64_t cpy_r_r65;
    CPyTagged cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_promote;
    PyObject *cpy_r_r70;
    CPyPtr cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    CPyTagged cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_r0)->__promote;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/join.py", "join_instances_via_supertype", "TypeInfo", "_promote", 120, CPyStatic_join___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL50;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_types___ProperType)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances_via_supertype", 120, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r7);
        goto CPyL51;
    }
    cpy_r_p = cpy_r_r8;
    cpy_r_r9 = NULL;
    cpy_r_r10 = 2;
    cpy_r_r11 = 2;
    cpy_r_r12 = 2;
    cpy_r_r13 = 2;
    cpy_r_r14 = 2;
    cpy_r_r15 = NULL;
    cpy_r_r16 = CPyDef_subtypes___is_subtype(cpy_r_p, cpy_r_s, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_instances_via_supertype", 121, CPyStatic_join___globals);
        goto CPyL52;
    }
    if (cpy_r_r16) {
        goto CPyL53;
    } else
        goto CPyL54;
CPyL6: ;
    cpy_r_r17 = CPyDef_join___join_types(cpy_r_p, cpy_r_s, cpy_r_self);
    CPy_DECREF(cpy_r_p);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances_via_supertype", 122, CPyStatic_join___globals);
        goto CPyL49;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_types___ProperType)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances_via_supertype", 122, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r17);
        goto CPyL49;
    }
    return cpy_r_r18;
CPyL9: ;
    cpy_r_r19 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r19;
    goto CPyL2;
CPyL10: ;
    cpy_r_r20 = ((mypy___types___InstanceObject *)cpy_r_s)->_type;
    cpy_r_r21 = ((mypy___nodes___TypeInfoObject *)cpy_r_r20)->__promote;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypy/join.py", "join_instances_via_supertype", "TypeInfo", "_promote", 123, CPyStatic_join___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r21);
CPyL11: ;
    cpy_r_r22 = 0;
CPyL12: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r21)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL55;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_r21, cpy_r_r22);
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_types___ProperType)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances_via_supertype", 123, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r27);
        goto CPyL56;
    }
    cpy_r_p = cpy_r_r28;
    cpy_r_r29 = NULL;
    cpy_r_r30 = 2;
    cpy_r_r31 = 2;
    cpy_r_r32 = 2;
    cpy_r_r33 = 2;
    cpy_r_r34 = 2;
    cpy_r_r35 = NULL;
    cpy_r_r36 = CPyDef_subtypes___is_subtype(cpy_r_p, cpy_r_t, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_instances_via_supertype", 124, CPyStatic_join___globals);
        goto CPyL57;
    }
    if (cpy_r_r36) {
        goto CPyL58;
    } else
        goto CPyL59;
CPyL16: ;
    cpy_r_r37 = CPyDef_join___join_types(cpy_r_t, cpy_r_p, cpy_r_self);
    CPy_DECREF(cpy_r_p);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances_via_supertype", 125, CPyStatic_join___globals);
        goto CPyL49;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r37, CPyType_types___ProperType)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances_via_supertype", 125, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r37);
        goto CPyL49;
    }
    return cpy_r_r38;
CPyL19: ;
    cpy_r_r39 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r39;
    goto CPyL12;
CPyL20: ;
    cpy_r_r40 = Py_None;
    CPy_INCREF(cpy_r_r40);
    cpy_r_best = cpy_r_r40;
    cpy_r_r41 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    cpy_r_r42 = ((mypy___nodes___TypeInfoObject *)cpy_r_r41)->_bases;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypy/join.py", "join_instances_via_supertype", "TypeInfo", "bases", 131, CPyStatic_join___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r42);
CPyL21: ;
    cpy_r_r43 = 0;
CPyL22: ;
    cpy_r_r44 = (CPyPtr)&((PyVarObject *)cpy_r_r42)->ob_size;
    cpy_r_r45 = *(int64_t *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 << 1;
    cpy_r_r47 = (Py_ssize_t)cpy_r_r43 < (Py_ssize_t)cpy_r_r46;
    if (!cpy_r_r47) goto CPyL61;
    cpy_r_r48 = CPyList_GetItemUnsafe(cpy_r_r42, cpy_r_r43);
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_types___Instance))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances_via_supertype", 131, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_r48);
        goto CPyL62;
    }
    cpy_r_base = cpy_r_r49;
    cpy_r_r50 = ((mypy___types___InstanceObject *)cpy_r_base)->_type;
    CPy_INCREF(cpy_r_r50);
    CPy_DECREF(cpy_r_base);
    cpy_r_r51 = CPyDef_maptype___map_instance_to_supertype(cpy_r_t, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances_via_supertype", 132, CPyStatic_join___globals);
        goto CPyL62;
    }
    cpy_r_mapped = cpy_r_r51;
    cpy_r_r52 = CPyDef_join___InstanceJoiner___join_instances(cpy_r_self, cpy_r_mapped, cpy_r_s);
    CPy_DECREF(cpy_r_mapped);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances_via_supertype", 133, CPyStatic_join___globals);
        goto CPyL62;
    }
    cpy_r_res = cpy_r_r52;
    cpy_r_r53 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r54 = cpy_r_best == cpy_r_r53;
    if (cpy_r_r54) goto CPyL63;
    CPy_INCREF(cpy_r_best);
    if (likely(cpy_r_best != Py_None))
        cpy_r_r55 = cpy_r_best;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances_via_supertype", 134, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_best);
        goto CPyL64;
    }
    cpy_r_r56 = CPyDef_join___is_better(cpy_r_res, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_instances_via_supertype", 134, CPyStatic_join___globals);
        goto CPyL64;
    }
    if (cpy_r_r56) {
        goto CPyL63;
    } else
        goto CPyL65;
CPyL30: ;
    cpy_r_best = cpy_r_res;
CPyL31: ;
    cpy_r_r57 = cpy_r_r43 + 2;
    cpy_r_r43 = cpy_r_r57;
    goto CPyL22;
CPyL32: ;
    cpy_r_r58 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r59 = cpy_r_best != cpy_r_r58;
    if (cpy_r_r59) {
        goto CPyL35;
    } else
        goto CPyL66;
CPyL33: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r60 = 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/join.py", "join_instances_via_supertype", 136, CPyStatic_join___globals);
        goto CPyL49;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r61 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    cpy_r_r62 = ((mypy___nodes___TypeInfoObject *)cpy_r_r61)->__promote;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypy/join.py", "join_instances_via_supertype", "TypeInfo", "_promote", 137, CPyStatic_join___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r62);
CPyL36: ;
    cpy_r_r63 = 0;
CPyL37: ;
    cpy_r_r64 = (CPyPtr)&((PyVarObject *)cpy_r_r62)->ob_size;
    cpy_r_r65 = *(int64_t *)cpy_r_r64;
    cpy_r_r66 = cpy_r_r65 << 1;
    cpy_r_r67 = (Py_ssize_t)cpy_r_r63 < (Py_ssize_t)cpy_r_r66;
    if (!cpy_r_r67) goto CPyL67;
    cpy_r_r68 = CPyList_GetItemUnsafe(cpy_r_r62, cpy_r_r63);
    if (likely(PyObject_TypeCheck(cpy_r_r68, CPyType_types___ProperType)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances_via_supertype", 137, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r68);
        goto CPyL68;
    }
    cpy_r_promote = cpy_r_r69;
    cpy_r_r70 = (PyObject *)CPyType_types___Instance;
    cpy_r_r71 = (CPyPtr)&((PyObject *)cpy_r_promote)->ob_type;
    cpy_r_r72 = *(PyObject * *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 == cpy_r_r70;
    if (!cpy_r_r73) goto CPyL69;
    if (likely(Py_TYPE(cpy_r_promote) == CPyType_types___Instance))
        cpy_r_r74 = cpy_r_promote;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances_via_supertype", 139, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_promote);
        goto CPyL68;
    }
    cpy_r_r75 = CPyDef_join___InstanceJoiner___join_instances(cpy_r_self, cpy_r_r74, cpy_r_s);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_instances_via_supertype", 139, CPyStatic_join___globals);
        goto CPyL68;
    }
    cpy_r_res = cpy_r_r75;
    CPy_INCREF(cpy_r_best);
    if (likely(cpy_r_best != Py_None))
        cpy_r_r76 = cpy_r_best;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances_via_supertype", 140, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_best);
        goto CPyL70;
    }
    cpy_r_r77 = CPyDef_join___is_better(cpy_r_res, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_instances_via_supertype", 140, CPyStatic_join___globals);
        goto CPyL70;
    }
    if (cpy_r_r77) {
        goto CPyL71;
    } else
        goto CPyL72;
CPyL45: ;
    cpy_r_best = cpy_r_res;
CPyL46: ;
    cpy_r_r78 = cpy_r_r63 + 2;
    cpy_r_r63 = cpy_r_r78;
    goto CPyL37;
CPyL47: ;
    if (likely(cpy_r_best != Py_None))
        cpy_r_r79 = cpy_r_best;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_instances_via_supertype", 142, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_best);
        goto CPyL49;
    }
    return cpy_r_r79;
CPyL49: ;
    cpy_r_r80 = NULL;
    return cpy_r_r80;
CPyL50: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL10;
CPyL51: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL49;
CPyL52: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_p);
    goto CPyL49;
CPyL53: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
CPyL54: ;
    CPy_DECREF(cpy_r_p);
    goto CPyL9;
CPyL55: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL20;
CPyL56: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL49;
CPyL57: ;
    CPy_DecRef(cpy_r_p);
    CPy_DecRef(cpy_r_r21);
    goto CPyL49;
CPyL58: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL16;
CPyL59: ;
    CPy_DECREF(cpy_r_p);
    goto CPyL19;
CPyL60: ;
    CPy_DecRef(cpy_r_best);
    goto CPyL49;
CPyL61: ;
    CPy_DECREF(cpy_r_r42);
    goto CPyL32;
CPyL62: ;
    CPy_DecRef(cpy_r_best);
    CPy_DecRef(cpy_r_r42);
    goto CPyL49;
CPyL63: ;
    CPy_DECREF(cpy_r_best);
    goto CPyL30;
CPyL64: ;
    CPy_DecRef(cpy_r_best);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_res);
    goto CPyL49;
CPyL65: ;
    CPy_DECREF(cpy_r_res);
    goto CPyL31;
CPyL66: ;
    CPy_DECREF(cpy_r_best);
    goto CPyL33;
CPyL67: ;
    CPy_DECREF(cpy_r_r62);
    goto CPyL47;
CPyL68: ;
    CPy_DecRef(cpy_r_best);
    CPy_DecRef(cpy_r_r62);
    goto CPyL49;
CPyL69: ;
    CPy_DECREF(cpy_r_promote);
    goto CPyL46;
CPyL70: ;
    CPy_DecRef(cpy_r_best);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r62);
    goto CPyL49;
CPyL71: ;
    CPy_DECREF(cpy_r_best);
    goto CPyL45;
CPyL72: ;
    CPy_DECREF(cpy_r_res);
    goto CPyL46;
}

PyObject *CPyPy_join___InstanceJoiner___join_instances_via_supertype(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", "s", 0};
    static CPyArg_Parser parser = {"OO:join_instances_via_supertype", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_t, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___InstanceJoiner))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.InstanceJoiner", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_types___Instance))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.types.Instance", obj_s); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___InstanceJoiner___join_instances_via_supertype(arg_self, arg_t, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "join_instances_via_supertype", 117, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___join_simple(PyObject *cpy_r_declaration, PyObject *cpy_r_s, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    tuple_T2CC cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    tuple_T2CC cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyPtr cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    CPyPtr cpy_r_r68;
    CPyPtr cpy_r_r69;
    CPyTagged cpy_r_r70;
    CPyTagged cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
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
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyPtr cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyPtr cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    tuple_T2OO cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyPtr cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyPtr cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_declaration);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 151, CPyStatic_join___globals);
        goto CPyL80;
    }
    cpy_r_declaration = cpy_r_r0;
    cpy_r_r1 = CPyDef_types___get_proper_type(cpy_r_s);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 152, CPyStatic_join___globals);
        goto CPyL81;
    }
    if (likely(cpy_r_r1 != Py_None))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 152, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r1);
        goto CPyL81;
    }
    cpy_r_s = cpy_r_r2;
    cpy_r_r3 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 153, CPyStatic_join___globals);
        goto CPyL82;
    }
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 153, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r3);
        goto CPyL82;
    }
    cpy_r_t = cpy_r_r4;
    CPy_INCREF(cpy_r_s);
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r5 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 155, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL83;
    }
    cpy_r_r6 = CPY_GET_ATTR(cpy_r_r5, CPyType_types___ProperType, 3, mypy___types___ProperTypeObject, char); /* can_be_true */
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 155, CPyStatic_join___globals);
        goto CPyL83;
    }
CPyL7: ;
    CPy_INCREF(cpy_r_s);
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r7 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 155, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL83;
    }
    cpy_r_r8 = CPY_GET_ATTR(cpy_r_r7, CPyType_types___ProperType, 5, mypy___types___ProperTypeObject, char); /* can_be_false */
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 155, CPyStatic_join___globals);
        goto CPyL83;
    }
CPyL9: ;
    cpy_r_r9.f0 = cpy_r_r6;
    cpy_r_r9.f1 = cpy_r_r8;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r10 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 155, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL83;
    }
    cpy_r_r11 = CPY_GET_ATTR(cpy_r_r10, CPyType_types___ProperType, 3, mypy___types___ProperTypeObject, char); /* can_be_true */
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 155, CPyStatic_join___globals);
        goto CPyL83;
    }
CPyL11: ;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r12 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 155, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL83;
    }
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_r12, CPyType_types___ProperType, 5, mypy___types___ProperTypeObject, char); /* can_be_false */
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 155, CPyStatic_join___globals);
        goto CPyL83;
    }
CPyL13: ;
    cpy_r_r14.f0 = cpy_r_r11;
    cpy_r_r14.f1 = cpy_r_r13;
    cpy_r_r15 = cpy_r_r9.f0;
    cpy_r_r16 = cpy_r_r9.f1;
    cpy_r_r17 = cpy_r_r14.f0;
    cpy_r_r18 = cpy_r_r14.f1;
    cpy_r_r19 = cpy_r_r15 != cpy_r_r17;
    cpy_r_r20 = cpy_r_r19 ? Py_True : Py_False;
    cpy_r_r21 = PyObject_IsTrue(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 155, CPyStatic_join___globals);
        goto CPyL83;
    }
    cpy_r_r23 = cpy_r_r21;
    if (cpy_r_r23) goto CPyL18;
    cpy_r_r24 = cpy_r_r16 != cpy_r_r18;
    cpy_r_r25 = cpy_r_r24 ? Py_True : Py_False;
    cpy_r_r26 = PyObject_IsTrue(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 155, CPyStatic_join___globals);
        goto CPyL83;
    }
    cpy_r_r28 = cpy_r_r26;
    if (cpy_r_r28) goto CPyL18;
    cpy_r_r29 = 0;
    goto CPyL19;
CPyL18: ;
    cpy_r_r29 = 1;
CPyL19: ;
    if (!cpy_r_r29) goto CPyL25;
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r30 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 157, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL84;
    }
    cpy_r_r31 = CPyDef_typeops___true_or_false(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 157, CPyStatic_join___globals);
        goto CPyL84;
    }
    cpy_r_s = cpy_r_r31;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r32 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 158, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL82;
    }
    cpy_r_r33 = CPyDef_typeops___true_or_false(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 158, CPyStatic_join___globals);
        goto CPyL82;
    }
    cpy_r_t = cpy_r_r33;
CPyL25: ;
    cpy_r_r34 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    if (cpy_r_r37) {
        goto CPyL85;
    } else
        goto CPyL28;
CPyL26: ;
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___AnyType))
        cpy_r_r38 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 161, CPyStatic_join___globals, "mypy.types.AnyType", cpy_r_s);
        goto CPyL80;
    }
    return cpy_r_r38;
CPyL28: ;
    cpy_r_r39 = (PyObject *)CPyType_types___ErasedType;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    if (cpy_r_r42) {
        goto CPyL86;
    } else
        goto CPyL31;
CPyL29: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r43 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 164, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL80;
    }
    return cpy_r_r43;
CPyL31: ;
    CPy_INCREF(cpy_r_s);
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r44 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 166, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r45 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 166, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL87;
    }
    cpy_r_r46 = NULL;
    cpy_r_r47 = 2;
    cpy_r_r48 = 2;
    cpy_r_r49 = 2;
    cpy_r_r50 = CPyDef_subtypes___is_proper_subtype(cpy_r_r44, cpy_r_r45, cpy_r_r46, 1, cpy_r_r47, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 166, CPyStatic_join___globals);
        goto CPyL83;
    }
    if (cpy_r_r50) {
        goto CPyL88;
    } else
        goto CPyL37;
CPyL35: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r51 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 167, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL80;
    }
    return cpy_r_r51;
CPyL37: ;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r52 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 169, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_s);
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r53 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 169, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL89;
    }
    cpy_r_r54 = NULL;
    cpy_r_r55 = 2;
    cpy_r_r56 = 2;
    cpy_r_r57 = 2;
    cpy_r_r58 = CPyDef_subtypes___is_proper_subtype(cpy_r_r52, cpy_r_r53, cpy_r_r54, 1, cpy_r_r55, cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 169, CPyStatic_join___globals);
        goto CPyL83;
    }
    if (cpy_r_r58) {
        goto CPyL90;
    } else
        goto CPyL43;
CPyL41: ;
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r59 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 170, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL80;
    }
    return cpy_r_r59;
CPyL43: ;
    cpy_r_r60 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r61 = (CPyPtr)&((PyObject *)cpy_r_declaration)->ob_type;
    cpy_r_r62 = *(PyObject * *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 == cpy_r_r60;
    if (cpy_r_r63) {
        goto CPyL91;
    } else
        goto CPyL49;
CPyL44: ;
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r64 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 173, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL92;
    }
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r65 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 173, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL93;
    }
    cpy_r_r66 = PyList_New(2);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 173, CPyStatic_join___globals);
        goto CPyL94;
    }
    cpy_r_r67 = (CPyPtr)&((PyListObject *)cpy_r_r66)->ob_item;
    cpy_r_r68 = *(CPyPtr *)cpy_r_r67;
    *(PyObject * *)cpy_r_r68 = cpy_r_r64;
    cpy_r_r69 = cpy_r_r68 + 8;
    *(PyObject * *)cpy_r_r69 = cpy_r_r65;
    cpy_r_r70 = CPY_INT_TAG;
    cpy_r_r71 = CPY_INT_TAG;
    cpy_r_r72 = 2;
    cpy_r_r73 = 2;
    cpy_r_r74 = CPyDef_typeops___make_simplified_union(cpy_r_r66, cpy_r_r70, cpy_r_r71, cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 173, CPyStatic_join___globals);
        goto CPyL80;
    }
    return cpy_r_r74;
CPyL49: ;
    cpy_r_r75 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r76 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r77 = *(PyObject * *)cpy_r_r76;
    cpy_r_r78 = cpy_r_r77 == cpy_r_r75;
    if (!cpy_r_r78) goto CPyL54;
    cpy_r_r79 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r80 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r81 = *(PyObject * *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 == cpy_r_r79;
    if (cpy_r_r82) goto CPyL54;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r83 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 176, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL82;
    }
    cpy_r_r84 = cpy_r_r83;
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r85 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 176, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL95;
    }
    cpy_r_r86 = cpy_r_r85;
    cpy_r_s = cpy_r_r84;
    cpy_r_t = cpy_r_r86;
CPyL54: ;
    cpy_r_r87 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r88 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r89 = *(PyObject * *)cpy_r_r88;
    cpy_r_r90 = cpy_r_r89 == cpy_r_r87;
    if (!cpy_r_r90) goto CPyL59;
    cpy_r_r91 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r92 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r93 = *(PyObject * *)cpy_r_r92;
    cpy_r_r94 = cpy_r_r93 == cpy_r_r91;
    if (cpy_r_r94) goto CPyL59;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r95 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 179, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL82;
    }
    cpy_r_r96 = cpy_r_r95;
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r97 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 179, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL96;
    }
    cpy_r_r98 = cpy_r_r97;
    cpy_r_s = cpy_r_r96;
    cpy_r_t = cpy_r_r98;
CPyL59: ;
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r99 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 182, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL84;
    }
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r100 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 182, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL97;
    }
    cpy_r_r101 = CPyDef_join___normalize_callables(cpy_r_r99, cpy_r_r100);
    CPy_DECREF(cpy_r_r99);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r101.f0 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 182, CPyStatic_join___globals);
        goto CPyL81;
    }
    cpy_r_r102 = cpy_r_r101.f0;
    CPy_INCREF(cpy_r_r102);
    cpy_r_s = cpy_r_r102;
    cpy_r_r103 = cpy_r_r101.f1;
    CPy_INCREF(cpy_r_r103);
    CPy_DECREF(cpy_r_r101.f0);
    CPy_DECREF(cpy_r_r101.f1);
    cpy_r_t = cpy_r_r103;
    cpy_r_r104 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r105 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r106 = *(PyObject * *)cpy_r_r105;
    cpy_r_r107 = cpy_r_r106 == cpy_r_r104;
    if (!cpy_r_r107) goto CPyL67;
    cpy_r_r108 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r109 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r110 = *(PyObject * *)cpy_r_r109;
    cpy_r_r111 = cpy_r_r110 == cpy_r_r108;
    if (cpy_r_r111) goto CPyL67;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r112 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 185, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL82;
    }
    cpy_r_r113 = cpy_r_r112;
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r114 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 185, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL98;
    }
    cpy_r_r115 = cpy_r_r114;
    cpy_r_s = cpy_r_r113;
    cpy_r_t = cpy_r_r115;
CPyL67: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r116 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 187, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL82;
    }
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r117 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 187, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL99;
    }
    cpy_r_r118 = NULL;
    cpy_r_r119 = CPyDef_join___TypeJoinVisitor(cpy_r_r117, cpy_r_r118);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 187, CPyStatic_join___globals);
        goto CPyL99;
    }
    cpy_r_r120 = CPY_GET_METHOD(cpy_r_r116, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r116, cpy_r_r119); /* accept */
    CPy_DECREF(cpy_r_r119);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 187, CPyStatic_join___globals);
        goto CPyL81;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r120, CPyType_types___ProperType)))
        cpy_r_r121 = cpy_r_r120;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 187, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r120);
        goto CPyL81;
    }
    cpy_r_value = cpy_r_r121;
    if (PyObject_TypeCheck(cpy_r_declaration, CPyType_types___ProperType))
        cpy_r_r122 = cpy_r_declaration;
    else {
        cpy_r_r122 = NULL;
    }
    if (cpy_r_r122 != NULL) goto __LL3029;
    if (cpy_r_declaration == Py_None)
        cpy_r_r122 = cpy_r_declaration;
    else {
        cpy_r_r122 = NULL;
    }
    if (cpy_r_r122 != NULL) goto __LL3029;
    CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 188, CPyStatic_join___globals, "mypy.types.ProperType or None", cpy_r_declaration);
    goto CPyL100;
__LL3029: ;
    cpy_r_r123 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r124 = cpy_r_r122 == cpy_r_r123;
    if (cpy_r_r124) goto CPyL101;
    CPy_INCREF(cpy_r_declaration);
    if (likely(PyObject_TypeCheck(cpy_r_declaration, CPyType_types___ProperType)))
        cpy_r_r125 = cpy_r_declaration;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 188, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_declaration);
        goto CPyL100;
    }
    cpy_r_r126 = NULL;
    cpy_r_r127 = 2;
    cpy_r_r128 = 2;
    cpy_r_r129 = 2;
    cpy_r_r130 = 2;
    cpy_r_r131 = 2;
    cpy_r_r132 = NULL;
    cpy_r_r133 = CPyDef_subtypes___is_subtype(cpy_r_value, cpy_r_r125, cpy_r_r126, cpy_r_r127, cpy_r_r128, cpy_r_r129, cpy_r_r130, cpy_r_r131, cpy_r_r132);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r133 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_simple", 188, CPyStatic_join___globals);
        goto CPyL100;
    }
    if (cpy_r_r133) {
        goto CPyL101;
    } else
        goto CPyL102;
CPyL77: ;
    return cpy_r_value;
CPyL78: ;
    if (likely(PyObject_TypeCheck(cpy_r_declaration, CPyType_types___ProperType)))
        cpy_r_r134 = cpy_r_declaration;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_simple", 191, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_declaration);
        goto CPyL80;
    }
    return cpy_r_r134;
CPyL80: ;
    cpy_r_r135 = NULL;
    return cpy_r_r135;
CPyL81: ;
    CPy_DecRef(cpy_r_declaration);
    goto CPyL80;
CPyL82: ;
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_s);
    goto CPyL80;
CPyL83: ;
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_t);
    goto CPyL80;
CPyL84: ;
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_t);
    goto CPyL80;
CPyL85: ;
    CPy_DECREF(cpy_r_declaration);
    CPy_DECREF(cpy_r_t);
    goto CPyL26;
CPyL86: ;
    CPy_DECREF(cpy_r_declaration);
    CPy_DECREF(cpy_r_s);
    goto CPyL29;
CPyL87: ;
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r44);
    goto CPyL80;
CPyL88: ;
    CPy_DECREF(cpy_r_declaration);
    CPy_DECREF(cpy_r_s);
    goto CPyL35;
CPyL89: ;
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r52);
    goto CPyL80;
CPyL90: ;
    CPy_DECREF(cpy_r_declaration);
    CPy_DECREF(cpy_r_t);
    goto CPyL41;
CPyL91: ;
    CPy_DECREF(cpy_r_declaration);
    goto CPyL44;
CPyL92: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL80;
CPyL93: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL80;
CPyL94: ;
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r65);
    goto CPyL80;
CPyL95: ;
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_r84);
    goto CPyL80;
CPyL96: ;
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_r96);
    goto CPyL80;
CPyL97: ;
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_r99);
    goto CPyL80;
CPyL98: ;
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_r113);
    goto CPyL80;
CPyL99: ;
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_r116);
    goto CPyL80;
CPyL100: ;
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_value);
    goto CPyL80;
CPyL101: ;
    CPy_DECREF(cpy_r_declaration);
    goto CPyL77;
CPyL102: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL78;
}

PyObject *CPyPy_join___join_simple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"declaration", "s", "t", 0};
    static CPyArg_Parser parser = {"OOO:join_simple", kwlist, 0};
    PyObject *obj_declaration;
    PyObject *obj_s;
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_declaration, &obj_s, &obj_t)) {
        return NULL;
    }
    PyObject *arg_declaration;
    if (PyObject_TypeCheck(obj_declaration, CPyType_types___Type))
        arg_declaration = obj_declaration;
    else {
        arg_declaration = NULL;
    }
    if (arg_declaration != NULL) goto __LL3030;
    if (obj_declaration == Py_None)
        arg_declaration = obj_declaration;
    else {
        arg_declaration = NULL;
    }
    if (arg_declaration != NULL) goto __LL3030;
    CPy_TypeError("mypy.types.Type or None", obj_declaration); 
    goto fail;
__LL3030: ;
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
    PyObject *retval = CPyDef_join___join_simple(arg_declaration, arg_s, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "join_simple", 145, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___trivial_join(PyObject *cpy_r_s, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = NULL;
    cpy_r_r1 = 2;
    cpy_r_r2 = 2;
    cpy_r_r3 = 2;
    cpy_r_r4 = 2;
    cpy_r_r5 = 2;
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_subtypes___is_subtype(cpy_r_s, cpy_r_t, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/join.py", "trivial_join", 196, CPyStatic_join___globals);
        goto CPyL10;
    }
    if (!cpy_r_r7) goto CPyL3;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL3: ;
    cpy_r_r8 = NULL;
    cpy_r_r9 = 2;
    cpy_r_r10 = 2;
    cpy_r_r11 = 2;
    cpy_r_r12 = 2;
    cpy_r_r13 = 2;
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPyDef_subtypes___is_subtype(cpy_r_t, cpy_r_s, cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/join.py", "trivial_join", 198, CPyStatic_join___globals);
        goto CPyL10;
    }
    if (!cpy_r_r15) goto CPyL6;
    CPy_INCREF(cpy_r_s);
    return cpy_r_s;
CPyL6: ;
    cpy_r_r16 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "trivial_join", 201, CPyStatic_join___globals);
        goto CPyL10;
    }
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "trivial_join", 201, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r16);
        goto CPyL10;
    }
    cpy_r_r18 = CPyDef_join___object_or_any_from_type(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "trivial_join", 201, CPyStatic_join___globals);
        goto CPyL10;
    }
    return cpy_r_r18;
CPyL10: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
}

PyObject *CPyPy_join___trivial_join(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"s", "t", 0};
    static CPyArg_Parser parser = {"OO:trivial_join", kwlist, 0};
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
    PyObject *retval = CPyDef_join___trivial_join(arg_s, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "trivial_join", 194, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___join_types(PyObject *cpy_r_s, PyObject *cpy_r_t, PyObject *cpy_r_instance_joiner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    tuple_T2CC cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    tuple_T2CC cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyPtr cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
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
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    tuple_T2OO cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    if (cpy_r_instance_joiner != NULL) goto CPyL61;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_instance_joiner = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyDef_typeops___is_recursive_pair(cpy_r_s, cpy_r_t);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_types", 221, CPyStatic_join___globals);
        goto CPyL62;
    }
    if (cpy_r_r1) {
        goto CPyL63;
    } else
        goto CPyL6;
CPyL4: ;
    cpy_r_r2 = CPyDef_join___trivial_join(cpy_r_s, cpy_r_t);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_types", 224, CPyStatic_join___globals);
        goto CPyL60;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r3 = CPyDef_types___get_proper_type(cpy_r_s);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_types", 225, CPyStatic_join___globals);
        goto CPyL62;
    }
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 225, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r3);
        goto CPyL62;
    }
    cpy_r_s = cpy_r_r4;
    cpy_r_r5 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_types", 226, CPyStatic_join___globals);
        goto CPyL64;
    }
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 226, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r5);
        goto CPyL64;
    }
    cpy_r_t = cpy_r_r6;
    CPy_INCREF(cpy_r_s);
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r7 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 228, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL65;
    }
    cpy_r_r8 = CPY_GET_ATTR(cpy_r_r7, CPyType_types___ProperType, 3, mypy___types___ProperTypeObject, char); /* can_be_true */
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_types", 228, CPyStatic_join___globals);
        goto CPyL65;
    }
CPyL12: ;
    CPy_INCREF(cpy_r_s);
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r9 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 228, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL65;
    }
    cpy_r_r10 = CPY_GET_ATTR(cpy_r_r9, CPyType_types___ProperType, 5, mypy___types___ProperTypeObject, char); /* can_be_false */
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_types", 228, CPyStatic_join___globals);
        goto CPyL65;
    }
CPyL14: ;
    cpy_r_r11.f0 = cpy_r_r8;
    cpy_r_r11.f1 = cpy_r_r10;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r12 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 228, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL65;
    }
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_r12, CPyType_types___ProperType, 3, mypy___types___ProperTypeObject, char); /* can_be_true */
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_types", 228, CPyStatic_join___globals);
        goto CPyL65;
    }
CPyL16: ;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r14 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 228, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL65;
    }
    cpy_r_r15 = CPY_GET_ATTR(cpy_r_r14, CPyType_types___ProperType, 5, mypy___types___ProperTypeObject, char); /* can_be_false */
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/join.py", "join_types", 228, CPyStatic_join___globals);
        goto CPyL65;
    }
CPyL18: ;
    cpy_r_r16.f0 = cpy_r_r13;
    cpy_r_r16.f1 = cpy_r_r15;
    cpy_r_r17 = cpy_r_r11.f0;
    cpy_r_r18 = cpy_r_r11.f1;
    cpy_r_r19 = cpy_r_r16.f0;
    cpy_r_r20 = cpy_r_r16.f1;
    cpy_r_r21 = cpy_r_r17 != cpy_r_r19;
    cpy_r_r22 = cpy_r_r21 ? Py_True : Py_False;
    cpy_r_r23 = PyObject_IsTrue(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/join.py", "join_types", 228, CPyStatic_join___globals);
        goto CPyL65;
    }
    cpy_r_r25 = cpy_r_r23;
    if (cpy_r_r25) goto CPyL23;
    cpy_r_r26 = cpy_r_r18 != cpy_r_r20;
    cpy_r_r27 = cpy_r_r26 ? Py_True : Py_False;
    cpy_r_r28 = PyObject_IsTrue(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/join.py", "join_types", 228, CPyStatic_join___globals);
        goto CPyL65;
    }
    cpy_r_r30 = cpy_r_r28;
    if (cpy_r_r30) goto CPyL23;
    cpy_r_r31 = 0;
    goto CPyL24;
CPyL23: ;
    cpy_r_r31 = 1;
CPyL24: ;
    if (!cpy_r_r31) goto CPyL30;
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r32 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 230, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL66;
    }
    cpy_r_r33 = CPyDef_typeops___true_or_false(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_types", 230, CPyStatic_join___globals);
        goto CPyL66;
    }
    cpy_r_s = cpy_r_r33;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r34 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 231, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL64;
    }
    cpy_r_r35 = CPyDef_typeops___true_or_false(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_types", 231, CPyStatic_join___globals);
        goto CPyL64;
    }
    cpy_r_t = cpy_r_r35;
CPyL30: ;
    cpy_r_r36 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    if (!cpy_r_r39) goto CPyL35;
    cpy_r_r40 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r41 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 == cpy_r_r40;
    if (cpy_r_r43) goto CPyL35;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r44 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 234, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL64;
    }
    cpy_r_r45 = cpy_r_r44;
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r46 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 234, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL67;
    }
    cpy_r_r47 = cpy_r_r46;
    cpy_r_s = cpy_r_r45;
    cpy_r_t = cpy_r_r47;
CPyL35: ;
    cpy_r_r48 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r49 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r50 = *(PyObject * *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 == cpy_r_r48;
    if (cpy_r_r51) {
        goto CPyL68;
    } else
        goto CPyL38;
CPyL36: ;
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___AnyType))
        cpy_r_r52 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 237, CPyStatic_join___globals, "mypy.types.AnyType", cpy_r_s);
        goto CPyL60;
    }
    return cpy_r_r52;
CPyL38: ;
    cpy_r_r53 = (PyObject *)CPyType_types___ErasedType;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    if (cpy_r_r56) {
        goto CPyL69;
    } else
        goto CPyL41;
CPyL39: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r57 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 240, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL60;
    }
    return cpy_r_r57;
CPyL41: ;
    cpy_r_r58 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r59 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r60 = *(PyObject * *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 == cpy_r_r58;
    if (!cpy_r_r61) goto CPyL46;
    cpy_r_r62 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r63 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r64 = *(PyObject * *)cpy_r_r63;
    cpy_r_r65 = cpy_r_r64 == cpy_r_r62;
    if (cpy_r_r65) goto CPyL46;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r66 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 243, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL64;
    }
    cpy_r_r67 = cpy_r_r66;
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r68 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 243, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL70;
    }
    cpy_r_r69 = cpy_r_r68;
    cpy_r_s = cpy_r_r67;
    cpy_r_t = cpy_r_r69;
CPyL46: ;
    cpy_r_r70 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r71 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r72 = *(PyObject * *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 == cpy_r_r70;
    if (!cpy_r_r73) goto CPyL51;
    cpy_r_r74 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r75 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r76 = *(PyObject * *)cpy_r_r75;
    cpy_r_r77 = cpy_r_r76 == cpy_r_r74;
    if (cpy_r_r77) goto CPyL51;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r78 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 246, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL64;
    }
    cpy_r_r79 = cpy_r_r78;
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r80 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 246, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL71;
    }
    cpy_r_r81 = cpy_r_r80;
    cpy_r_s = cpy_r_r79;
    cpy_r_t = cpy_r_r81;
CPyL51: ;
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r82 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 249, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL66;
    }
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r83 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 249, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL72;
    }
    cpy_r_r84 = CPyDef_join___normalize_callables(cpy_r_r82, cpy_r_r83);
    CPy_DECREF(cpy_r_r82);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84.f0 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_types", 249, CPyStatic_join___globals);
        goto CPyL62;
    }
    cpy_r_r85 = cpy_r_r84.f0;
    CPy_INCREF(cpy_r_r85);
    cpy_r_s = cpy_r_r85;
    cpy_r_r86 = cpy_r_r84.f1;
    CPy_INCREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r84.f0);
    CPy_DECREF(cpy_r_r84.f1);
    cpy_r_t = cpy_r_r86;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r87 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 252, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL64;
    }
    if (likely(PyObject_TypeCheck(cpy_r_s, CPyType_types___ProperType)))
        cpy_r_r88 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 252, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_s);
        goto CPyL73;
    }
    cpy_r_r89 = CPyDef_join___TypeJoinVisitor(cpy_r_r88, cpy_r_instance_joiner);
    CPy_DECREF(cpy_r_r88);
    CPy_DECREF(cpy_r_instance_joiner);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_types", 252, CPyStatic_join___globals);
        goto CPyL74;
    }
    cpy_r_r90 = CPY_GET_METHOD(cpy_r_r87, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r87, cpy_r_r89); /* accept */
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_types", 252, CPyStatic_join___globals);
        goto CPyL60;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r90, CPyType_types___ProperType)))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_types", 252, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r90);
        goto CPyL60;
    }
    return cpy_r_r91;
CPyL60: ;
    cpy_r_r92 = NULL;
    return cpy_r_r92;
CPyL61: ;
    CPy_INCREF(cpy_r_instance_joiner);
    goto CPyL2;
CPyL62: ;
    CPy_DecRef(cpy_r_instance_joiner);
    goto CPyL60;
CPyL63: ;
    CPy_DECREF(cpy_r_instance_joiner);
    goto CPyL4;
CPyL64: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_instance_joiner);
    goto CPyL60;
CPyL65: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_instance_joiner);
    goto CPyL60;
CPyL66: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_instance_joiner);
    goto CPyL60;
CPyL67: ;
    CPy_DecRef(cpy_r_instance_joiner);
    CPy_DecRef(cpy_r_r45);
    goto CPyL60;
CPyL68: ;
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_instance_joiner);
    goto CPyL36;
CPyL69: ;
    CPy_DECREF(cpy_r_s);
    CPy_DECREF(cpy_r_instance_joiner);
    goto CPyL39;
CPyL70: ;
    CPy_DecRef(cpy_r_instance_joiner);
    CPy_DecRef(cpy_r_r67);
    goto CPyL60;
CPyL71: ;
    CPy_DecRef(cpy_r_instance_joiner);
    CPy_DecRef(cpy_r_r79);
    goto CPyL60;
CPyL72: ;
    CPy_DecRef(cpy_r_instance_joiner);
    CPy_DecRef(cpy_r_r82);
    goto CPyL60;
CPyL73: ;
    CPy_DecRef(cpy_r_instance_joiner);
    CPy_DecRef(cpy_r_r87);
    goto CPyL60;
CPyL74: ;
    CPy_DecRef(cpy_r_r87);
    goto CPyL60;
}

PyObject *CPyPy_join___join_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"s", "t", "instance_joiner", 0};
    static CPyArg_Parser parser = {"OO|O:join_types", kwlist, 0};
    PyObject *obj_s;
    PyObject *obj_t;
    PyObject *obj_instance_joiner = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_s, &obj_t, &obj_instance_joiner)) {
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
    PyObject *arg_instance_joiner;
    if (obj_instance_joiner == NULL) {
        arg_instance_joiner = NULL;
        goto __LL3031;
    }
    if (Py_TYPE(obj_instance_joiner) == CPyType_join___InstanceJoiner)
        arg_instance_joiner = obj_instance_joiner;
    else {
        arg_instance_joiner = NULL;
    }
    if (arg_instance_joiner != NULL) goto __LL3031;
    if (obj_instance_joiner == Py_None)
        arg_instance_joiner = obj_instance_joiner;
    else {
        arg_instance_joiner = NULL;
    }
    if (arg_instance_joiner != NULL) goto __LL3031;
    CPy_TypeError("mypy.join.InstanceJoiner or None", obj_instance_joiner); 
    goto fail;
__LL3031: ;
    PyObject *retval = CPyDef_join___join_types(arg_s, arg_t, arg_instance_joiner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "join_types", 216, CPyStatic_join___globals);
    return NULL;
}

char CPyDef_join___TypeJoinVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_s, PyObject *cpy_r_instance_joiner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    if (cpy_r_instance_joiner != NULL) goto CPyL6;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_instance_joiner = cpy_r_r0;
CPyL2: ;
    CPy_INCREF(cpy_r_s);
    if (((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s != NULL) {
        CPy_DECREF(((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s);
    }
    ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s = cpy_r_s;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/join.py", "__init__", 263, CPyStatic_join___globals);
        goto CPyL7;
    }
    if (((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_instance_joiner != NULL) {
        CPy_DECREF(((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_instance_joiner);
    }
    ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_instance_joiner = cpy_r_instance_joiner;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/join.py", "__init__", 264, CPyStatic_join___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
CPyL6: ;
    CPy_INCREF(cpy_r_instance_joiner);
    goto CPyL2;
CPyL7: ;
    CPy_DecRef(cpy_r_instance_joiner);
    goto CPyL5;
}

PyObject *CPyPy_join___TypeJoinVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", "instance_joiner", 0};
    PyObject *obj_s;
    PyObject *obj_instance_joiner = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|O", "__init__", kwlist, &obj_s, &obj_instance_joiner)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(PyObject_TypeCheck(obj_s, CPyType_types___ProperType)))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_s); 
        goto fail;
    }
    PyObject *arg_instance_joiner;
    if (obj_instance_joiner == NULL) {
        arg_instance_joiner = NULL;
        goto __LL3032;
    }
    if (Py_TYPE(obj_instance_joiner) == CPyType_join___InstanceJoiner)
        arg_instance_joiner = obj_instance_joiner;
    else {
        arg_instance_joiner = NULL;
    }
    if (arg_instance_joiner != NULL) goto __LL3032;
    if (obj_instance_joiner == Py_None)
        arg_instance_joiner = obj_instance_joiner;
    else {
        arg_instance_joiner = NULL;
    }
    if (arg_instance_joiner != NULL) goto __LL3032;
    CPy_TypeError("mypy.join.InstanceJoiner or None", obj_instance_joiner); 
    goto fail;
__LL3032: ;
    char retval = CPyDef_join___TypeJoinVisitor_____init__(arg_self, arg_s, arg_instance_joiner);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/join.py", "__init__", 262, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_unbound_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = NULL;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_types___AnyType(12, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_unbound_type", 267, CPyStatic_join___globals);
        goto CPyL2;
    }
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_unbound_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_unbound_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_unbound_type", 266, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_unbound_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_unbound_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_unbound_type__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_union_type", "TypeJoinVisitor", "s", 270, CPyStatic_join___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = NULL;
    cpy_r_r2 = 2;
    cpy_r_r3 = 2;
    cpy_r_r4 = 2;
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_subtypes___is_proper_subtype(cpy_r_r0, cpy_r_t, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_union_type", 270, CPyStatic_join___globals);
        goto CPyL8;
    }
    if (!cpy_r_r6) goto CPyL4;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL4: ;
    cpy_r_r7 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_union_type", "TypeJoinVisitor", "s", 273, CPyStatic_join___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r7);
CPyL5: ;
    cpy_r_r8 = PyList_New(2);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_union_type", 273, CPyStatic_join___globals);
        goto CPyL9;
    }
    cpy_r_r9 = (CPyPtr)&((PyListObject *)cpy_r_r8)->ob_item;
    cpy_r_r10 = *(CPyPtr *)cpy_r_r9;
    *(PyObject * *)cpy_r_r10 = cpy_r_r7;
    cpy_r_r11 = cpy_r_r10 + 8;
    CPy_INCREF(cpy_r_t);
    *(PyObject * *)cpy_r_r11 = cpy_r_t;
    cpy_r_r12 = CPY_INT_TAG;
    cpy_r_r13 = CPY_INT_TAG;
    cpy_r_r14 = 2;
    cpy_r_r15 = 2;
    cpy_r_r16 = CPyDef_typeops___make_simplified_union(cpy_r_r8, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_union_type", 273, CPyStatic_join___globals);
        goto CPyL8;
    }
    return cpy_r_r16;
CPyL8: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL9: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL8;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_union_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_union_type", 269, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_union_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_any(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_any", 275, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_none_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
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
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    cpy_r_r0 = CPyStatic_state___state;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/join.py", "visit_none_type", 279, CPyStatic_join___globals);
        goto CPyL20;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = ((mypy___state___StrictOptionalStateObject *)cpy_r_r0)->_strict_optional;
    if (!cpy_r_r2) goto CPyL18;
CPyL4: ;
    cpy_r_r3 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_none_type", "TypeJoinVisitor", "s", 280, CPyStatic_join___globals);
        goto CPyL20;
    }
CPyL5: ;
    cpy_r_r4 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL7;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL8;
CPyL7: ;
    cpy_r_r9 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    cpy_r_r8 = cpy_r_r12;
CPyL8: ;
    if (!cpy_r_r8) goto CPyL10;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL10: ;
    cpy_r_r13 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_none_type", "TypeJoinVisitor", "s", 282, CPyStatic_join___globals);
        goto CPyL20;
    }
CPyL11: ;
    cpy_r_r14 = (PyObject *)CPyType_types___UnboundType;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_r13)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL14;
    cpy_r_r18 = NULL;
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPY_INT_TAG;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPyDef_types___AnyType(12, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_none_type", 283, CPyStatic_join___globals);
        goto CPyL20;
    }
    return cpy_r_r22;
CPyL14: ;
    cpy_r_r23 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_none_type", "TypeJoinVisitor", "s", 285, CPyStatic_join___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r23);
CPyL15: ;
    cpy_r_r24 = PyList_New(2);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_none_type", 285, CPyStatic_join___globals);
        goto CPyL21;
    }
    cpy_r_r25 = (CPyPtr)&((PyListObject *)cpy_r_r24)->ob_item;
    cpy_r_r26 = *(CPyPtr *)cpy_r_r25;
    *(PyObject * *)cpy_r_r26 = cpy_r_r23;
    cpy_r_r27 = cpy_r_r26 + 8;
    CPy_INCREF(cpy_r_t);
    *(PyObject * *)cpy_r_r27 = cpy_r_t;
    cpy_r_r28 = CPY_INT_TAG;
    cpy_r_r29 = CPY_INT_TAG;
    cpy_r_r30 = 2;
    cpy_r_r31 = 2;
    cpy_r_r32 = CPyDef_typeops___make_simplified_union(cpy_r_r24, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_none_type", 285, CPyStatic_join___globals);
        goto CPyL20;
    }
    return cpy_r_r32;
CPyL18: ;
    cpy_r_r33 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_none_type", "TypeJoinVisitor", "s", 287, CPyStatic_join___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r33);
CPyL19: ;
    return cpy_r_r33;
CPyL20: ;
    cpy_r_r34 = NULL;
    return cpy_r_r34;
CPyL21: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL20;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_none_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_none_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_none_type", 278, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_none_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_none_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_none_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_none_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_none_type__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_uninhabited_type", "TypeJoinVisitor", "s", 290, CPyStatic_join___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_uninhabited_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_uninhabited_type", 289, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_deleted_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_deleted_type", "TypeJoinVisitor", "s", 293, CPyStatic_join___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_deleted_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_deleted_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_deleted_type", 292, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_deleted_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_deleted_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_deleted_type__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_erased_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_erased_type", "TypeJoinVisitor", "s", 296, CPyStatic_join___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_erased_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_erased_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_erased_type", 295, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_erased_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_erased_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_erased_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_erased_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_erased_type__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
    cpy_r_r0 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_type_var", "TypeJoinVisitor", "s", 299, CPyStatic_join___globals);
        goto CPyL13;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL10;
    cpy_r_r5 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_type_var", "TypeJoinVisitor", "s", 299, CPyStatic_join___globals);
        goto CPyL13;
    }
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___TypeVarType))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_type_var", 299, CPyStatic_join___globals, "mypy.types.TypeVarType", cpy_r_r5);
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
        CPy_AddTraceback("mypy/join.py", "visit_type_var", 299, CPyStatic_join___globals);
        goto CPyL13;
    }
    if (unlikely(!PyBool_Check(cpy_r_r9))) {
        CPy_TypeError("bool", cpy_r_r9); cpy_r_r10 = 2;
    } else
        cpy_r_r10 = cpy_r_r9 == Py_True;
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_type_var", 299, CPyStatic_join___globals);
        goto CPyL13;
    }
    if (!cpy_r_r10) goto CPyL10;
    cpy_r_r11 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_type_var", "TypeJoinVisitor", "s", 300, CPyStatic_join___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r11);
CPyL8: ;
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_types___TypeVarType))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_type_var", 300, CPyStatic_join___globals, "mypy.types.TypeVarType", cpy_r_r11);
        goto CPyL13;
    }
    return cpy_r_r12;
CPyL10: ;
    cpy_r_r13 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_type_var", "TypeJoinVisitor", "s", 302, CPyStatic_join___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r13);
CPyL11: ;
    cpy_r_r14 = CPyDef_join___TypeJoinVisitor___default(cpy_r_self, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_type_var", 302, CPyStatic_join___globals);
        goto CPyL13;
    }
    return cpy_r_r14;
CPyL13: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_type_var(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_type_var", 298, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_param_spec", "TypeJoinVisitor", "s", 305, CPyStatic_join___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyObject_RichCompare(cpy_r_r0, cpy_r_t, 2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_param_spec", 305, CPyStatic_join___globals);
        goto CPyL8;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_param_spec", 305, CPyStatic_join___globals);
        goto CPyL8;
    }
    if (!cpy_r_r2) goto CPyL5;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL5: ;
    cpy_r_r3 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_param_spec", "TypeJoinVisitor", "s", 307, CPyStatic_join___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r3);
CPyL6: ;
    cpy_r_r4 = CPyDef_join___TypeJoinVisitor___default(cpy_r_self, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_param_spec", 307, CPyStatic_join___globals);
        goto CPyL8;
    }
    return cpy_r_r4;
CPyL8: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_param_spec(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_param_spec", 304, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_param_spec__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_param_spec(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_param_spec__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_param_spec__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_param_spec__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_type_var_tuple", "TypeJoinVisitor", "s", 310, CPyStatic_join___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyObject_RichCompare(cpy_r_r0, cpy_r_t, 2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_type_var_tuple", 310, CPyStatic_join___globals);
        goto CPyL8;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_type_var_tuple", 310, CPyStatic_join___globals);
        goto CPyL8;
    }
    if (!cpy_r_r2) goto CPyL5;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL5: ;
    cpy_r_r3 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_type_var_tuple", "TypeJoinVisitor", "s", 312, CPyStatic_join___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r3);
CPyL6: ;
    cpy_r_r4 = CPyDef_join___TypeJoinVisitor___default(cpy_r_self, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_type_var_tuple", 312, CPyStatic_join___globals);
        goto CPyL8;
    }
    return cpy_r_r4;
CPyL8: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_type_var_tuple(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_type_var_tuple", 309, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_type_var_tuple(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_type_var_tuple__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_type_var_tuple__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_unpack_type", 315, CPyStatic_join___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/join.py", "visit_unpack_type", 315, CPyStatic_join___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_unpack_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_unpack_type", 314, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_unpack_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_unpack_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_unpack_type__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_parameters(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_parameters", "TypeJoinVisitor", "s", 318, CPyStatic_join___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyObject_RichCompare(cpy_r_r0, cpy_r_t, 2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_parameters", 318, CPyStatic_join___globals);
        goto CPyL8;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_parameters", 318, CPyStatic_join___globals);
        goto CPyL8;
    }
    if (!cpy_r_r2) goto CPyL5;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL5: ;
    cpy_r_r3 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_parameters", "TypeJoinVisitor", "s", 321, CPyStatic_join___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r3);
CPyL6: ;
    cpy_r_r4 = CPyDef_join___TypeJoinVisitor___default(cpy_r_self, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_parameters", 321, CPyStatic_join___globals);
        goto CPyL8;
    }
    return cpy_r_r4;
CPyL8: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_parameters(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_parameters", 317, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_parameters__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_parameters(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_parameters__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_parameters__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_parameters__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_nominal;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_structural;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_call;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
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
    CPyPtr cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyPtr cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyPtr cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
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
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    cpy_r_r0 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 324, CPyStatic_join___globals);
        goto CPyL88;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___Instance;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL36;
    cpy_r_r5 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_instance_joiner;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "instance_joiner", 325, CPyStatic_join___globals);
        goto CPyL88;
    }
CPyL3: ;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 == cpy_r_r6;
    if (!cpy_r_r7) goto CPyL6;
    cpy_r_r8 = CPyDef_join___InstanceJoiner();
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_instance", 326, CPyStatic_join___globals);
        goto CPyL88;
    }
    if (((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_instance_joiner != NULL) {
        CPy_DECREF(((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_instance_joiner);
    }
    ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_instance_joiner = cpy_r_r8;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/join.py", "visit_instance", 326, CPyStatic_join___globals);
        goto CPyL88;
    }
CPyL6: ;
    cpy_r_r10 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_instance_joiner;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "instance_joiner", 327, CPyStatic_join___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r10);
CPyL7: ;
    if (likely(cpy_r_r10 != Py_None))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 327, CPyStatic_join___globals, "mypy.join.InstanceJoiner", cpy_r_r10);
        goto CPyL88;
    }
    cpy_r_r12 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 327, CPyStatic_join___globals);
        goto CPyL89;
    }
    CPy_INCREF(cpy_r_r12);
CPyL9: ;
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_types___Instance))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 327, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_r12);
        goto CPyL89;
    }
    cpy_r_r14 = CPyDef_join___InstanceJoiner___join_instances(cpy_r_r11, cpy_r_t, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_instance", 327, CPyStatic_join___globals);
        goto CPyL88;
    }
    cpy_r_nominal = cpy_r_r14;
    cpy_r_r15 = Py_None;
    CPy_INCREF(cpy_r_r15);
    cpy_r_structural = cpy_r_r15;
    cpy_r_r16 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    cpy_r_r17 = ((mypy___nodes___TypeInfoObject *)cpy_r_r16)->_is_protocol;
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeInfo", "is_protocol", 329, CPyStatic_join___globals);
        goto CPyL90;
    }
CPyL12: ;
    if (!cpy_r_r17) goto CPyL18;
CPyL13: ;
    cpy_r_r18 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 329, CPyStatic_join___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r18);
CPyL14: ;
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_types___Instance))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 329, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_r18);
        goto CPyL90;
    }
    cpy_r_r20 = 2;
    cpy_r_r21 = 2;
    cpy_r_r22 = NULL;
    cpy_r_r23 = CPyDef_subtypes___is_protocol_implementation(cpy_r_r19, cpy_r_t, cpy_r_r20, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_instance", 329, CPyStatic_join___globals);
        goto CPyL90;
    }
    if (cpy_r_r23) {
        goto CPyL91;
    } else
        goto CPyL18;
CPyL17: ;
    CPy_INCREF(cpy_r_t);
    cpy_r_structural = cpy_r_t;
    goto CPyL29;
CPyL18: ;
    cpy_r_r24 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 331, CPyStatic_join___globals);
        goto CPyL90;
    }
CPyL19: ;
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_types___Instance))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 331, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_r24);
        goto CPyL90;
    }
    cpy_r_r26 = ((mypy___types___InstanceObject *)cpy_r_r25)->_type;
    cpy_r_r27 = ((mypy___nodes___TypeInfoObject *)cpy_r_r26)->_is_protocol;
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeInfo", "is_protocol", 331, CPyStatic_join___globals);
        goto CPyL90;
    }
CPyL21: ;
    if (!cpy_r_r27) goto CPyL29;
CPyL22: ;
    cpy_r_r28 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 331, CPyStatic_join___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r28);
CPyL23: ;
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_types___Instance))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 331, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_r28);
        goto CPyL90;
    }
    cpy_r_r30 = 2;
    cpy_r_r31 = 2;
    cpy_r_r32 = NULL;
    cpy_r_r33 = CPyDef_subtypes___is_protocol_implementation(cpy_r_t, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_instance", 331, CPyStatic_join___globals);
        goto CPyL90;
    }
    if (cpy_r_r33) {
        goto CPyL92;
    } else
        goto CPyL29;
CPyL26: ;
    cpy_r_r34 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 332, CPyStatic_join___globals);
        goto CPyL93;
    }
    CPy_INCREF(cpy_r_r34);
CPyL27: ;
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_types___Instance))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 332, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_r34);
        goto CPyL93;
    }
    cpy_r_structural = cpy_r_r35;
CPyL29: ;
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_structural != cpy_r_r36;
    if (!cpy_r_r37) goto CPyL94;
    CPy_INCREF(cpy_r_structural);
    if (likely(cpy_r_structural != Py_None))
        cpy_r_r38 = cpy_r_structural;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 336, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_structural);
        goto CPyL90;
    }
    cpy_r_r39 = CPyDef_join___is_better(cpy_r_nominal, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_instance", 336, CPyStatic_join___globals);
        goto CPyL90;
    }
    if (cpy_r_r39) {
        goto CPyL94;
    } else
        goto CPyL95;
CPyL33: ;
    return cpy_r_nominal;
CPyL34: ;
    if (likely(cpy_r_structural != Py_None))
        cpy_r_r40 = cpy_r_structural;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 338, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_structural);
        goto CPyL88;
    }
    return cpy_r_r40;
CPyL36: ;
    cpy_r_r41 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 339, CPyStatic_join___globals);
        goto CPyL88;
    }
CPyL37: ;
    cpy_r_r42 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_r41)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    if (!cpy_r_r45) goto CPyL39;
    cpy_r_r46 = cpy_r_r45;
    goto CPyL40;
CPyL39: ;
    cpy_r_r47 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r48 = (CPyPtr)&((PyObject *)cpy_r_r41)->ob_type;
    cpy_r_r49 = *(PyObject * *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 == cpy_r_r47;
    cpy_r_r46 = cpy_r_r50;
CPyL40: ;
    if (!cpy_r_r46) goto CPyL57;
    cpy_r_r51 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    cpy_r_r52 = ((mypy___nodes___TypeInfoObject *)cpy_r_r51)->_is_protocol;
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeInfo", "is_protocol", 340, CPyStatic_join___globals);
        goto CPyL88;
    }
CPyL42: ;
    if (!cpy_r_r52) goto CPyL51;
CPyL43: ;
    cpy_r_r53 = CPyDef_join___unpack_callback_protocol(cpy_r_t);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_instance", 341, CPyStatic_join___globals);
        goto CPyL88;
    }
    cpy_r_call = cpy_r_r53;
    cpy_r_r54 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r55 = cpy_r_call != cpy_r_r54;
    if (!cpy_r_r55) goto CPyL96;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r56 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 343, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_call);
        goto CPyL88;
    }
    cpy_r_r57 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 343, CPyStatic_join___globals);
        goto CPyL97;
    }
    CPy_INCREF(cpy_r_r57);
CPyL47: ;
    if (likely((Py_TYPE(cpy_r_r57) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r57) == CPyType_types___Overloaded)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 343, CPyStatic_join___globals, "mypy.types.FunctionLike", cpy_r_r57);
        goto CPyL97;
    }
    cpy_r_r59 = NULL;
    cpy_r_r60 = CPyDef_join___join_types(cpy_r_r56, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_instance", 343, CPyStatic_join___globals);
        goto CPyL88;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r60, CPyType_types___ProperType)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 343, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r60);
        goto CPyL88;
    }
    return cpy_r_r61;
CPyL51: ;
    cpy_r_r62 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 344, CPyStatic_join___globals);
        goto CPyL88;
    }
CPyL52: ;
    if (likely((Py_TYPE(cpy_r_r62) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r62) == CPyType_types___Overloaded)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 344, CPyStatic_join___globals, "mypy.types.FunctionLike", cpy_r_r62);
        goto CPyL88;
    }
    cpy_r_r64 = ((mypy___types___FunctionLikeObject *)cpy_r_r63)->_fallback;
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "FunctionLike", "fallback", 344, CPyStatic_join___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r64);
CPyL54: ;
    cpy_r_r65 = NULL;
    cpy_r_r66 = CPyDef_join___join_types(cpy_r_t, cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_instance", 344, CPyStatic_join___globals);
        goto CPyL88;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r66, CPyType_types___ProperType)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 344, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r66);
        goto CPyL88;
    }
    return cpy_r_r67;
CPyL57: ;
    cpy_r_r68 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 345, CPyStatic_join___globals);
        goto CPyL88;
    }
CPyL58: ;
    cpy_r_r69 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r70 = (CPyPtr)&((PyObject *)cpy_r_r68)->ob_type;
    cpy_r_r71 = *(PyObject * *)cpy_r_r70;
    cpy_r_r72 = cpy_r_r71 == cpy_r_r69;
    if (!cpy_r_r72) goto CPyL64;
    cpy_r_r73 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 346, CPyStatic_join___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r73);
CPyL60: ;
    if (likely(Py_TYPE(cpy_r_r73) == CPyType_types___TypeType))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 346, CPyStatic_join___globals, "mypy.types.TypeType", cpy_r_r73);
        goto CPyL88;
    }
    cpy_r_r75 = NULL;
    cpy_r_r76 = CPyDef_join___join_types(cpy_r_t, cpy_r_r74, cpy_r_r75);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_instance", 346, CPyStatic_join___globals);
        goto CPyL88;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r76, CPyType_types___ProperType)))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 346, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r76);
        goto CPyL88;
    }
    return cpy_r_r77;
CPyL64: ;
    cpy_r_r78 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 347, CPyStatic_join___globals);
        goto CPyL88;
    }
CPyL65: ;
    cpy_r_r79 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r80 = (CPyPtr)&((PyObject *)cpy_r_r78)->ob_type;
    cpy_r_r81 = *(PyObject * *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 == cpy_r_r79;
    if (!cpy_r_r82) goto CPyL71;
    cpy_r_r83 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 348, CPyStatic_join___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r83);
CPyL67: ;
    if (likely(Py_TYPE(cpy_r_r83) == CPyType_types___TypedDictType))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 348, CPyStatic_join___globals, "mypy.types.TypedDictType", cpy_r_r83);
        goto CPyL88;
    }
    cpy_r_r85 = NULL;
    cpy_r_r86 = CPyDef_join___join_types(cpy_r_t, cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_instance", 348, CPyStatic_join___globals);
        goto CPyL88;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r86, CPyType_types___ProperType)))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 348, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r86);
        goto CPyL88;
    }
    return cpy_r_r87;
CPyL71: ;
    cpy_r_r88 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 349, CPyStatic_join___globals);
        goto CPyL88;
    }
CPyL72: ;
    cpy_r_r89 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r90 = (CPyPtr)&((PyObject *)cpy_r_r88)->ob_type;
    cpy_r_r91 = *(PyObject * *)cpy_r_r90;
    cpy_r_r92 = cpy_r_r91 == cpy_r_r89;
    if (!cpy_r_r92) goto CPyL78;
    cpy_r_r93 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 350, CPyStatic_join___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r93);
CPyL74: ;
    if (likely(Py_TYPE(cpy_r_r93) == CPyType_types___TupleType))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 350, CPyStatic_join___globals, "mypy.types.TupleType", cpy_r_r93);
        goto CPyL88;
    }
    cpy_r_r95 = NULL;
    cpy_r_r96 = CPyDef_join___join_types(cpy_r_t, cpy_r_r94, cpy_r_r95);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_instance", 350, CPyStatic_join___globals);
        goto CPyL88;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r96, CPyType_types___ProperType)))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 350, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r96);
        goto CPyL88;
    }
    return cpy_r_r97;
CPyL78: ;
    cpy_r_r98 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 351, CPyStatic_join___globals);
        goto CPyL88;
    }
CPyL79: ;
    cpy_r_r99 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r100 = (CPyPtr)&((PyObject *)cpy_r_r98)->ob_type;
    cpy_r_r101 = *(PyObject * *)cpy_r_r100;
    cpy_r_r102 = cpy_r_r101 == cpy_r_r99;
    if (!cpy_r_r102) goto CPyL85;
    cpy_r_r103 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 352, CPyStatic_join___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r103);
CPyL81: ;
    if (likely(Py_TYPE(cpy_r_r103) == CPyType_types___LiteralType))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 352, CPyStatic_join___globals, "mypy.types.LiteralType", cpy_r_r103);
        goto CPyL88;
    }
    cpy_r_r105 = NULL;
    cpy_r_r106 = CPyDef_join___join_types(cpy_r_t, cpy_r_r104, cpy_r_r105);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_instance", 352, CPyStatic_join___globals);
        goto CPyL88;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r106, CPyType_types___ProperType)))
        cpy_r_r107 = cpy_r_r106;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_instance", 352, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r106);
        goto CPyL88;
    }
    return cpy_r_r107;
CPyL85: ;
    cpy_r_r108 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_instance", "TypeJoinVisitor", "s", 354, CPyStatic_join___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r108);
CPyL86: ;
    cpy_r_r109 = CPyDef_join___TypeJoinVisitor___default(cpy_r_self, cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_instance", 354, CPyStatic_join___globals);
        goto CPyL88;
    }
    return cpy_r_r109;
CPyL88: ;
    cpy_r_r110 = NULL;
    return cpy_r_r110;
CPyL89: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL88;
CPyL90: ;
    CPy_DecRef(cpy_r_nominal);
    CPy_DecRef(cpy_r_structural);
    goto CPyL88;
CPyL91: ;
    CPy_DECREF(cpy_r_structural);
    goto CPyL17;
CPyL92: ;
    CPy_DECREF(cpy_r_structural);
    goto CPyL26;
CPyL93: ;
    CPy_DecRef(cpy_r_nominal);
    goto CPyL88;
CPyL94: ;
    CPy_DECREF(cpy_r_structural);
    goto CPyL33;
CPyL95: ;
    CPy_DECREF(cpy_r_nominal);
    goto CPyL34;
CPyL96: ;
    CPy_DECREF(cpy_r_call);
    goto CPyL51;
CPyL97: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL88;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_instance(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_instance", 323, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
    PyObject *cpy_r_tp;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
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
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    cpy_r_r0 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_callable_type", "TypeJoinVisitor", "s", 357, CPyStatic_join___globals);
        goto CPyL74;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL49;
    cpy_r_r5 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_callable_type", "TypeJoinVisitor", "s", 357, CPyStatic_join___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___CallableType))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_callable_type", 357, CPyStatic_join___globals, "mypy.types.CallableType", cpy_r_r5);
        goto CPyL74;
    }
    cpy_r_r7 = CPyDef_join___is_similar_callables(cpy_r_t, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_callable_type", 357, CPyStatic_join___globals);
        goto CPyL74;
    }
    if (!cpy_r_r7) goto CPyL49;
    cpy_r_r8 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_callable_type", "TypeJoinVisitor", "s", 358, CPyStatic_join___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_types___CallableType))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_callable_type", 358, CPyStatic_join___globals, "mypy.types.CallableType", cpy_r_r8);
        goto CPyL74;
    }
    cpy_r_r10 = 2;
    cpy_r_r11 = 2;
    cpy_r_r12 = NULL;
    cpy_r_r13 = NULL;
    cpy_r_r14 = CPyDef_subtypes___is_equivalent(cpy_r_t, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_callable_type", 358, CPyStatic_join___globals);
        goto CPyL74;
    }
    if (!cpy_r_r14) goto CPyL14;
    cpy_r_r15 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_callable_type", "TypeJoinVisitor", "s", 359, CPyStatic_join___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r15);
CPyL11: ;
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_types___CallableType))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_callable_type", 359, CPyStatic_join___globals, "mypy.types.CallableType", cpy_r_r15);
        goto CPyL74;
    }
    cpy_r_r17 = CPyDef_join___combine_similar_callables(cpy_r_t, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_callable_type", 359, CPyStatic_join___globals);
        goto CPyL74;
    }
    return cpy_r_r17;
CPyL14: ;
    cpy_r_r18 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_callable_type", "TypeJoinVisitor", "s", 360, CPyStatic_join___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r18);
CPyL15: ;
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_types___CallableType))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_callable_type", 360, CPyStatic_join___globals, "mypy.types.CallableType", cpy_r_r18);
        goto CPyL74;
    }
    cpy_r_r20 = CPyDef_join___join_similar_callables(cpy_r_t, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_callable_type", 360, CPyStatic_join___globals);
        goto CPyL74;
    }
    cpy_r_result = cpy_r_r20;
    cpy_r_r21 = CPyDef_types___CallableType___is_type_obj(cpy_r_t);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_callable_type", 364, CPyStatic_join___globals);
        goto CPyL75;
    }
    if (!cpy_r_r21) goto CPyL22;
    cpy_r_r22 = CPyDef_types___CallableType___type_object(cpy_r_t);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_callable_type", 364, CPyStatic_join___globals);
        goto CPyL75;
    }
    cpy_r_r23 = ((mypy___nodes___TypeInfoObject *)cpy_r_r22)->_is_abstract;
    if (unlikely(cpy_r_r23 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'is_abstract' of 'TypeInfo' undefined");
    }
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_callable_type", 364, CPyStatic_join___globals);
        goto CPyL75;
    }
CPyL21: ;
    if (cpy_r_r23) goto CPyL32;
CPyL22: ;
    cpy_r_r24 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_callable_type", "TypeJoinVisitor", "s", 365, CPyStatic_join___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r24);
CPyL23: ;
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_types___CallableType))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_callable_type", 365, CPyStatic_join___globals, "mypy.types.CallableType", cpy_r_r24);
        goto CPyL75;
    }
    cpy_r_r26 = CPyDef_types___CallableType___is_type_obj(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_callable_type", 365, CPyStatic_join___globals);
        goto CPyL75;
    }
    if (!cpy_r_r26) goto CPyL31;
    cpy_r_r27 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_callable_type", "TypeJoinVisitor", "s", 365, CPyStatic_join___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r27);
CPyL27: ;
    if (likely(Py_TYPE(cpy_r_r27) == CPyType_types___CallableType))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_callable_type", 365, CPyStatic_join___globals, "mypy.types.CallableType", cpy_r_r27);
        goto CPyL75;
    }
    cpy_r_r29 = CPyDef_types___CallableType___type_object(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_callable_type", 365, CPyStatic_join___globals);
        goto CPyL75;
    }
    cpy_r_r30 = ((mypy___nodes___TypeInfoObject *)cpy_r_r29)->_is_abstract;
    if (unlikely(cpy_r_r30 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'is_abstract' of 'TypeInfo' undefined");
    }
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_callable_type", 365, CPyStatic_join___globals);
        goto CPyL75;
    }
CPyL30: ;
    if (cpy_r_r30) goto CPyL32;
CPyL31: ;
    ((mypy___types___CallableTypeObject *)cpy_r_result)->_from_type_type = 1;
CPyL32: ;
    cpy_r_r32 = 0;
    cpy_r_r33 = ((mypy___types___CallableTypeObject *)cpy_r_result)->_arg_types;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = CPyDef_types___get_proper_types(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_callable_type", 370, CPyStatic_join___globals);
        goto CPyL75;
    }
    cpy_r_r35 = 0;
CPyL34: ;
    cpy_r_r36 = (CPyPtr)&((PyVarObject *)cpy_r_r34)->ob_size;
    cpy_r_r37 = *(int64_t *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 << 1;
    cpy_r_r39 = (Py_ssize_t)cpy_r_r35 < (Py_ssize_t)cpy_r_r38;
    if (!cpy_r_r39) goto CPyL76;
    cpy_r_r40 = CPyList_GetItemUnsafe(cpy_r_r34, cpy_r_r35);
    if (likely(PyObject_TypeCheck(cpy_r_r40, CPyType_types___ProperType)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_callable_type", 368, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r40);
        goto CPyL77;
    }
    cpy_r_tp = cpy_r_r41;
    cpy_r_r42 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_tp)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    if (cpy_r_r45) {
        goto CPyL78;
    } else
        goto CPyL38;
CPyL37: ;
    cpy_r_r46 = cpy_r_r45;
    goto CPyL39;
CPyL38: ;
    cpy_r_r47 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r48 = (CPyPtr)&((PyObject *)cpy_r_tp)->ob_type;
    cpy_r_r49 = *(PyObject * *)cpy_r_r48;
    CPy_DECREF(cpy_r_tp);
    cpy_r_r50 = cpy_r_r49 == cpy_r_r47;
    cpy_r_r46 = cpy_r_r50;
CPyL39: ;
    if (cpy_r_r46) {
        goto CPyL79;
    } else
        goto CPyL41;
CPyL40: ;
    cpy_r_r32 = 1;
    goto CPyL42;
CPyL41: ;
    cpy_r_r51 = cpy_r_r35 + 2;
    cpy_r_r35 = cpy_r_r51;
    goto CPyL34;
CPyL42: ;
    if (cpy_r_r32) {
        goto CPyL80;
    } else
        goto CPyL48;
CPyL43: ;
    cpy_r_r52 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_callable_type", "TypeJoinVisitor", "s", 373, CPyStatic_join___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r53);
CPyL44: ;
    if (likely(Py_TYPE(cpy_r_r53) == CPyType_types___CallableType))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_callable_type", 373, CPyStatic_join___globals, "mypy.types.CallableType", cpy_r_r53);
        goto CPyL81;
    }
    cpy_r_r55 = NULL;
    cpy_r_r56 = CPyDef_join___join_types(cpy_r_r52, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_callable_type", 373, CPyStatic_join___globals);
        goto CPyL74;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r56, CPyType_types___ProperType)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_callable_type", 373, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r56);
        goto CPyL74;
    }
    return cpy_r_r57;
CPyL48: ;
    return cpy_r_result;
CPyL49: ;
    cpy_r_r58 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_callable_type", "TypeJoinVisitor", "s", 375, CPyStatic_join___globals);
        goto CPyL74;
    }
CPyL50: ;
    cpy_r_r59 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r60 = (CPyPtr)&((PyObject *)cpy_r_r58)->ob_type;
    cpy_r_r61 = *(PyObject * *)cpy_r_r60;
    cpy_r_r62 = cpy_r_r61 == cpy_r_r59;
    if (!cpy_r_r62) goto CPyL56;
    cpy_r_r63 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_callable_type", "TypeJoinVisitor", "s", 377, CPyStatic_join___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r63);
CPyL52: ;
    if (likely(Py_TYPE(cpy_r_r63) == CPyType_types___Overloaded))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_callable_type", 377, CPyStatic_join___globals, "mypy.types.Overloaded", cpy_r_r63);
        goto CPyL74;
    }
    cpy_r_r65 = NULL;
    cpy_r_r66 = CPyDef_join___join_types(cpy_r_t, cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_callable_type", 377, CPyStatic_join___globals);
        goto CPyL74;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r66, CPyType_types___ProperType)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_callable_type", 377, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r66);
        goto CPyL74;
    }
    return cpy_r_r67;
CPyL56: ;
    cpy_r_r68 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_callable_type", "TypeJoinVisitor", "s", 378, CPyStatic_join___globals);
        goto CPyL74;
    }
CPyL57: ;
    cpy_r_r69 = (PyObject *)CPyType_types___Instance;
    cpy_r_r70 = (CPyPtr)&((PyObject *)cpy_r_r68)->ob_type;
    cpy_r_r71 = *(PyObject * *)cpy_r_r70;
    cpy_r_r72 = cpy_r_r71 == cpy_r_r69;
    if (!cpy_r_r72) goto CPyL70;
    cpy_r_r73 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_callable_type", "TypeJoinVisitor", "s", 378, CPyStatic_join___globals);
        goto CPyL74;
    }
CPyL59: ;
    if (likely(Py_TYPE(cpy_r_r73) == CPyType_types___Instance))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_callable_type", 378, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_r73);
        goto CPyL74;
    }
    cpy_r_r75 = ((mypy___types___InstanceObject *)cpy_r_r74)->_type;
    cpy_r_r76 = ((mypy___nodes___TypeInfoObject *)cpy_r_r75)->_is_protocol;
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AttributeError("mypy/join.py", "visit_callable_type", "TypeInfo", "is_protocol", 378, CPyStatic_join___globals);
        goto CPyL74;
    }
CPyL61: ;
    if (!cpy_r_r76) goto CPyL70;
CPyL62: ;
    cpy_r_r77 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_callable_type", "TypeJoinVisitor", "s", 379, CPyStatic_join___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r77);
CPyL63: ;
    if (likely(Py_TYPE(cpy_r_r77) == CPyType_types___Instance))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_callable_type", 379, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_r77);
        goto CPyL74;
    }
    cpy_r_r79 = CPyDef_join___unpack_callback_protocol(cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_callable_type", 379, CPyStatic_join___globals);
        goto CPyL74;
    }
    cpy_r_call = cpy_r_r79;
    cpy_r_r80 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r81 = cpy_r_call != cpy_r_r80;
    if (!cpy_r_r81) goto CPyL82;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r82 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_callable_type", 381, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_call);
        goto CPyL74;
    }
    cpy_r_r83 = NULL;
    cpy_r_r84 = CPyDef_join___join_types(cpy_r_t, cpy_r_r82, cpy_r_r83);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_callable_type", 381, CPyStatic_join___globals);
        goto CPyL74;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r84, CPyType_types___ProperType)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_callable_type", 381, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r84);
        goto CPyL74;
    }
    return cpy_r_r85;
CPyL70: ;
    cpy_r_r86 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r87 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_callable_type", "TypeJoinVisitor", "s", 382, CPyStatic_join___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r87);
CPyL71: ;
    cpy_r_r88 = NULL;
    cpy_r_r89 = CPyDef_join___join_types(cpy_r_r86, cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_callable_type", 382, CPyStatic_join___globals);
        goto CPyL74;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r89, CPyType_types___ProperType)))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_callable_type", 382, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r89);
        goto CPyL74;
    }
    return cpy_r_r90;
CPyL74: ;
    cpy_r_r91 = NULL;
    return cpy_r_r91;
CPyL75: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL74;
CPyL76: ;
    CPy_DECREF(cpy_r_r34);
    goto CPyL42;
CPyL77: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r34);
    goto CPyL74;
CPyL78: ;
    CPy_DECREF(cpy_r_tp);
    goto CPyL37;
CPyL79: ;
    CPy_DECREF(cpy_r_r34);
    goto CPyL40;
CPyL80: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL43;
CPyL81: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL74;
CPyL82: ;
    CPy_DECREF(cpy_r_call);
    goto CPyL70;
CPyL83: ;
    CPy_DecRef(cpy_r_r86);
    goto CPyL74;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_callable_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_callable_type", 356, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_t_item;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_s_item;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyPtr cpy_r_r49;
    int64_t cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    CPyPtr cpy_r_r53;
    int64_t cpy_r_r54;
    CPyTagged cpy_r_r55;
    char cpy_r_r56;
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
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_call;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_overloaded", 413, CPyStatic_join___globals);
        goto CPyL52;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_overloaded", "TypeJoinVisitor", "s", 414, CPyStatic_join___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_s = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL5;
CPyL4: ;
    cpy_r_r7 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    cpy_r_r6 = cpy_r_r10;
CPyL5: ;
    if (!cpy_r_r6) goto CPyL54;
    cpy_r_r11 = CPY_GET_ATTR(cpy_r_t, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_overloaded", 417, CPyStatic_join___globals);
        goto CPyL55;
    }
CPyL7: ;
    cpy_r_r12 = 0;
CPyL8: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL56;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_r11, cpy_r_r12);
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_types___CallableType))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_overloaded", 417, CPyStatic_join___globals, "mypy.types.CallableType", cpy_r_r17);
        goto CPyL57;
    }
    cpy_r_t_item = cpy_r_r18;
    CPy_INCREF(cpy_r_s);
    if (likely((Py_TYPE(cpy_r_s) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_s) == CPyType_types___Overloaded)))
        cpy_r_r19 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_overloaded", 418, CPyStatic_join___globals, "mypy.types.FunctionLike", cpy_r_s);
        goto CPyL58;
    }
    cpy_r_r20 = CPY_GET_ATTR(cpy_r_r19, CPyType_types___FunctionLike, 18, mypy___types___FunctionLikeObject, PyObject *); /* items */
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_overloaded", 418, CPyStatic_join___globals);
        goto CPyL58;
    }
CPyL12: ;
    cpy_r_r21 = 0;
CPyL13: ;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r24;
    if (!cpy_r_r25) goto CPyL59;
    cpy_r_r26 = CPyList_GetItemUnsafe(cpy_r_r20, cpy_r_r21);
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_types___CallableType))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_overloaded", 418, CPyStatic_join___globals, "mypy.types.CallableType", cpy_r_r26);
        goto CPyL60;
    }
    cpy_r_s_item = cpy_r_r27;
    cpy_r_r28 = CPyDef_join___is_similar_callables(cpy_r_t_item, cpy_r_s_item);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_overloaded", 419, CPyStatic_join___globals);
        goto CPyL61;
    }
    if (!cpy_r_r28) goto CPyL62;
    cpy_r_r29 = 2;
    cpy_r_r30 = 2;
    cpy_r_r31 = NULL;
    cpy_r_r32 = NULL;
    cpy_r_r33 = CPyDef_subtypes___is_equivalent(cpy_r_t_item, cpy_r_s_item, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_overloaded", 420, CPyStatic_join___globals);
        goto CPyL61;
    }
    if (!cpy_r_r33) goto CPyL21;
    cpy_r_r34 = CPyDef_join___combine_similar_callables(cpy_r_t_item, cpy_r_s_item);
    CPy_DECREF(cpy_r_s_item);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_overloaded", 421, CPyStatic_join___globals);
        goto CPyL60;
    }
    cpy_r_r35 = PyList_Append(cpy_r_result, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/join.py", "visit_overloaded", 421, CPyStatic_join___globals);
        goto CPyL60;
    } else
        goto CPyL24;
CPyL21: ;
    cpy_r_r37 = NULL;
    cpy_r_r38 = 2;
    cpy_r_r39 = 2;
    cpy_r_r40 = 2;
    cpy_r_r41 = 2;
    cpy_r_r42 = 2;
    cpy_r_r43 = NULL;
    cpy_r_r44 = CPyDef_subtypes___is_subtype(cpy_r_t_item, cpy_r_s_item, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_overloaded", 422, CPyStatic_join___globals);
        goto CPyL61;
    }
    if (!cpy_r_r44) goto CPyL62;
    cpy_r_r45 = PyList_Append(cpy_r_result, cpy_r_s_item);
    CPy_DECREF(cpy_r_s_item);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/join.py", "visit_overloaded", 423, CPyStatic_join___globals);
        goto CPyL60;
    }
CPyL24: ;
    cpy_r_r47 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r47;
    goto CPyL13;
CPyL25: ;
    cpy_r_r48 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r48;
    goto CPyL8;
CPyL26: ;
    cpy_r_r49 = (CPyPtr)&((PyVarObject *)cpy_r_result)->ob_size;
    cpy_r_r50 = *(int64_t *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 << 1;
    cpy_r_r52 = cpy_r_r51 != 0;
    if (cpy_r_r52) {
        goto CPyL63;
    } else
        goto CPyL64;
CPyL27: ;
    cpy_r_r53 = (CPyPtr)&((PyVarObject *)cpy_r_result)->ob_size;
    cpy_r_r54 = *(int64_t *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 << 1;
    cpy_r_r56 = cpy_r_r55 == 2;
    if (!cpy_r_r56) goto CPyL31;
    cpy_r_r57 = CPyList_GetItemShort(cpy_r_result, 0);
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_overloaded", 427, CPyStatic_join___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r57) == CPyType_types___CallableType))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_overloaded", 427, CPyStatic_join___globals, "mypy.types.CallableType", cpy_r_r57);
        goto CPyL52;
    }
    return cpy_r_r58;
CPyL31: ;
    cpy_r_r59 = CPyDef_types___Overloaded(cpy_r_result);
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_overloaded", 429, CPyStatic_join___globals);
        goto CPyL52;
    }
    return cpy_r_r59;
CPyL33: ;
    cpy_r_r60 = ((mypy___types___OverloadedObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r60);
    if (likely((Py_TYPE(cpy_r_s) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_s) == CPyType_types___Overloaded)))
        cpy_r_r61 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_overloaded", 430, CPyStatic_join___globals, "mypy.types.FunctionLike", cpy_r_s);
        goto CPyL65;
    }
    cpy_r_r62 = ((mypy___types___FunctionLikeObject *)cpy_r_r61)->_fallback;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_overloaded", "FunctionLike", "fallback", 430, CPyStatic_join___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r62);
CPyL35: ;
    CPy_DECREF(cpy_r_s);
    cpy_r_r63 = NULL;
    cpy_r_r64 = CPyDef_join___join_types(cpy_r_r60, cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_overloaded", 430, CPyStatic_join___globals);
        goto CPyL52;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r64, CPyType_types___ProperType)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_overloaded", 430, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r64);
        goto CPyL52;
    }
    return cpy_r_r65;
CPyL38: ;
    cpy_r_r66 = (PyObject *)CPyType_types___Instance;
    cpy_r_r67 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r68 = *(PyObject * *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 == cpy_r_r66;
    if (!cpy_r_r69) goto CPyL49;
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___Instance))
        cpy_r_r70 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_overloaded", 431, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_s);
        goto CPyL66;
    }
    cpy_r_r71 = ((mypy___types___InstanceObject *)cpy_r_r70)->_type;
    cpy_r_r72 = ((mypy___nodes___TypeInfoObject *)cpy_r_r71)->_is_protocol;
    if (unlikely(cpy_r_r72 == 2)) {
        CPy_AttributeError("mypy/join.py", "visit_overloaded", "TypeInfo", "is_protocol", 431, CPyStatic_join___globals);
        goto CPyL66;
    }
CPyL41: ;
    if (!cpy_r_r72) goto CPyL49;
CPyL42: ;
    CPy_INCREF(cpy_r_s);
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___Instance))
        cpy_r_r73 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_overloaded", 432, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_s);
        goto CPyL66;
    }
    cpy_r_r74 = CPyDef_join___unpack_callback_protocol(cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_overloaded", 432, CPyStatic_join___globals);
        goto CPyL66;
    }
    cpy_r_call = cpy_r_r74;
    cpy_r_r75 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r76 = cpy_r_call != cpy_r_r75;
    if (cpy_r_r76) {
        goto CPyL67;
    } else
        goto CPyL68;
CPyL45: ;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r77 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_overloaded", 434, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_call);
        goto CPyL52;
    }
    cpy_r_r78 = NULL;
    cpy_r_r79 = CPyDef_join___join_types(cpy_r_t, cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_overloaded", 434, CPyStatic_join___globals);
        goto CPyL52;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r79, CPyType_types___ProperType)))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_overloaded", 434, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r79);
        goto CPyL52;
    }
    return cpy_r_r80;
CPyL49: ;
    cpy_r_r81 = ((mypy___types___OverloadedObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r81);
    cpy_r_r82 = NULL;
    cpy_r_r83 = CPyDef_join___join_types(cpy_r_r81, cpy_r_s, cpy_r_r82);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_overloaded", 435, CPyStatic_join___globals);
        goto CPyL52;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r83, CPyType_types___ProperType)))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_overloaded", 435, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r83);
        goto CPyL52;
    }
    return cpy_r_r84;
CPyL52: ;
    cpy_r_r85 = NULL;
    return cpy_r_r85;
CPyL53: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL52;
CPyL54: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL38;
CPyL55: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_s);
    goto CPyL52;
CPyL56: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL26;
CPyL57: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r11);
    goto CPyL52;
CPyL58: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_t_item);
    goto CPyL52;
CPyL59: ;
    CPy_DECREF(cpy_r_t_item);
    CPy_DECREF(cpy_r_r20);
    goto CPyL25;
CPyL60: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_t_item);
    CPy_DecRef(cpy_r_r20);
    goto CPyL52;
CPyL61: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_t_item);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_s_item);
    goto CPyL52;
CPyL62: ;
    CPy_DECREF(cpy_r_s_item);
    goto CPyL24;
CPyL63: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL27;
CPyL64: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL33;
CPyL65: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r60);
    goto CPyL52;
CPyL66: ;
    CPy_DecRef(cpy_r_s);
    goto CPyL52;
CPyL67: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL45;
CPyL68: ;
    CPy_DECREF(cpy_r_call);
    goto CPyL49;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_overloaded(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_overloaded", 384, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_overloaded__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_overloaded(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_overloaded__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_overloaded__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_overloaded__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_fallback;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyTagged cpy_r_r33;
    int64_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_items;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r41;
    char cpy_r_r42;
    int64_t cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
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
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    CPyTagged cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyTagged cpy_r_r63;
    CPyTagged cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    cpy_r_r0 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_tuple_type", "TypeJoinVisitor", "s", 449, CPyStatic_join___globals);
        goto CPyL56;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL51;
    cpy_r_r5 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_tuple_type", "TypeJoinVisitor", "s", 449, CPyStatic_join___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___TupleType))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_tuple_type", 449, CPyStatic_join___globals, "mypy.types.TupleType", cpy_r_r5);
        goto CPyL56;
    }
    cpy_r_r7 = CPyDef_types___TupleType___length(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 449, CPyStatic_join___globals);
        goto CPyL56;
    }
    cpy_r_r8 = CPyDef_types___TupleType___length(cpy_r_t);
    if (unlikely(cpy_r_r8 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 449, CPyStatic_join___globals);
        goto CPyL57;
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
        goto CPyL51;
CPyL8: ;
    cpy_r_r12 = cpy_r_r7 == cpy_r_r8;
    CPyTagged_DECREF(cpy_r_r7);
    CPyTagged_DECREF(cpy_r_r8);
    if (!cpy_r_r12) goto CPyL51;
CPyL9: ;
    cpy_r_r13 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_instance_joiner;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_tuple_type", "TypeJoinVisitor", "instance_joiner", 450, CPyStatic_join___globals);
        goto CPyL56;
    }
CPyL10: ;
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_r13 == cpy_r_r14;
    if (!cpy_r_r15) goto CPyL13;
    cpy_r_r16 = CPyDef_join___InstanceJoiner();
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 451, CPyStatic_join___globals);
        goto CPyL56;
    }
    if (((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_instance_joiner != NULL) {
        CPy_DECREF(((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_instance_joiner);
    }
    ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_instance_joiner = cpy_r_r16;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 451, CPyStatic_join___globals);
        goto CPyL56;
    }
CPyL13: ;
    cpy_r_r18 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_instance_joiner;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_tuple_type", "TypeJoinVisitor", "instance_joiner", 452, CPyStatic_join___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r18);
CPyL14: ;
    if (likely(cpy_r_r18 != Py_None))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_tuple_type", 452, CPyStatic_join___globals, "mypy.join.InstanceJoiner", cpy_r_r18);
        goto CPyL56;
    }
    cpy_r_r20 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_tuple_type", "TypeJoinVisitor", "s", 453, CPyStatic_join___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r20);
CPyL16: ;
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_types___TupleType))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_tuple_type", 453, CPyStatic_join___globals, "mypy.types.TupleType", cpy_r_r20);
        goto CPyL58;
    }
    cpy_r_r22 = CPyDef_typeops___tuple_fallback(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 453, CPyStatic_join___globals);
        goto CPyL58;
    }
    cpy_r_r23 = CPyDef_typeops___tuple_fallback(cpy_r_t);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 453, CPyStatic_join___globals);
        goto CPyL59;
    }
    cpy_r_r24 = CPyDef_join___InstanceJoiner___join_instances(cpy_r_r19, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 452, CPyStatic_join___globals);
        goto CPyL56;
    }
    cpy_r_fallback = cpy_r_r24;
    cpy_r_r25 = (PyObject *)CPyType_types___Instance;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_fallback)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    if (cpy_r_r28) {
        goto CPyL23;
    } else
        goto CPyL60;
CPyL21: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 455, CPyStatic_join___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r30 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_tuple_type", "TypeJoinVisitor", "s", 456, CPyStatic_join___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r30);
CPyL24: ;
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_types___TupleType))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_tuple_type", 456, CPyStatic_join___globals, "mypy.types.TupleType", cpy_r_r30);
        goto CPyL61;
    }
    cpy_r_r32 = CPyDef_types___TupleType___length(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 456, CPyStatic_join___globals);
        goto CPyL61;
    }
    cpy_r_r33 = CPyDef_types___TupleType___length(cpy_r_t);
    if (unlikely(cpy_r_r33 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 456, CPyStatic_join___globals);
        goto CPyL62;
    }
    cpy_r_r34 = cpy_r_r32 & 1;
    cpy_r_r35 = cpy_r_r34 != 0;
    if (!cpy_r_r35) goto CPyL29;
    cpy_r_r36 = CPyTagged_IsEq_(cpy_r_r32, cpy_r_r33);
    CPyTagged_DECREF(cpy_r_r32);
    CPyTagged_DECREF(cpy_r_r33);
    if (cpy_r_r36) {
        goto CPyL30;
    } else
        goto CPyL49;
CPyL29: ;
    cpy_r_r37 = cpy_r_r32 == cpy_r_r33;
    CPyTagged_DECREF(cpy_r_r32);
    CPyTagged_DECREF(cpy_r_r33);
    if (!cpy_r_r37) goto CPyL49;
CPyL30: ;
    cpy_r_r38 = PyList_New(0);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 457, CPyStatic_join___globals);
        goto CPyL61;
    }
    cpy_r_items = cpy_r_r38;
    cpy_r_r39 = CPyDef_types___TupleType___length(cpy_r_t);
    if (unlikely(cpy_r_r39 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 458, CPyStatic_join___globals);
        goto CPyL63;
    }
    cpy_r_r40 = 0;
    CPyTagged_INCREF(cpy_r_r40);
    cpy_r_i = cpy_r_r40;
CPyL33: ;
    cpy_r_r41 = cpy_r_r40 & 1;
    cpy_r_r42 = cpy_r_r41 == 0;
    cpy_r_r43 = cpy_r_r39 & 1;
    cpy_r_r44 = cpy_r_r43 == 0;
    cpy_r_r45 = cpy_r_r42 & cpy_r_r44;
    if (!cpy_r_r45) goto CPyL35;
    cpy_r_r46 = (Py_ssize_t)cpy_r_r40 < (Py_ssize_t)cpy_r_r39;
    cpy_r_r47 = cpy_r_r46;
    goto CPyL36;
CPyL35: ;
    cpy_r_r48 = CPyTagged_IsLt_(cpy_r_r40, cpy_r_r39);
    cpy_r_r47 = cpy_r_r48;
CPyL36: ;
    if (!cpy_r_r47) goto CPyL64;
    cpy_r_r49 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_items;
    cpy_r_r50 = CPyList_GetItem(cpy_r_r49, cpy_r_i);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 459, CPyStatic_join___globals);
        goto CPyL65;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r50, CPyType_types___Type)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_tuple_type", 459, CPyStatic_join___globals, "mypy.types.Type", cpy_r_r50);
        goto CPyL65;
    }
    cpy_r_r52 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_tuple_type", "TypeJoinVisitor", "s", 459, CPyStatic_join___globals);
        goto CPyL66;
    }
CPyL40: ;
    if (likely(Py_TYPE(cpy_r_r52) == CPyType_types___TupleType))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_tuple_type", 459, CPyStatic_join___globals, "mypy.types.TupleType", cpy_r_r52);
        goto CPyL66;
    }
    cpy_r_r54 = ((mypy___types___TupleTypeObject *)cpy_r_r53)->_items;
    cpy_r_r55 = CPyList_GetItem(cpy_r_r54, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 459, CPyStatic_join___globals);
        goto CPyL67;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r55, CPyType_types___Type)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_tuple_type", 459, CPyStatic_join___globals, "mypy.types.Type", cpy_r_r55);
        goto CPyL67;
    }
    cpy_r_r57 = NULL;
    cpy_r_r58 = CPyDef_join___join_types(cpy_r_r51, cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 459, CPyStatic_join___globals);
        goto CPyL68;
    }
    cpy_r_r59 = PyList_Append(cpy_r_items, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 459, CPyStatic_join___globals);
        goto CPyL68;
    }
    cpy_r_r61 = CPyTagged_Add(cpy_r_r40, 2);
    CPyTagged_DECREF(cpy_r_r40);
    CPyTagged_INCREF(cpy_r_r61);
    cpy_r_r40 = cpy_r_r61;
    cpy_r_i = cpy_r_r61;
    goto CPyL33;
CPyL46: ;
    if (likely(Py_TYPE(cpy_r_fallback) == CPyType_types___Instance))
        cpy_r_r62 = cpy_r_fallback;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_tuple_type", 460, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_fallback);
        goto CPyL69;
    }
    cpy_r_r63 = CPY_INT_TAG;
    cpy_r_r64 = CPY_INT_TAG;
    cpy_r_r65 = 2;
    cpy_r_r66 = CPyDef_types___TupleType(cpy_r_items, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 460, CPyStatic_join___globals);
        goto CPyL56;
    }
    return cpy_r_r66;
CPyL49: ;
    if (likely(Py_TYPE(cpy_r_fallback) == CPyType_types___Instance))
        cpy_r_r67 = cpy_r_fallback;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_tuple_type", 462, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_fallback);
        goto CPyL56;
    }
    return cpy_r_r67;
CPyL51: ;
    cpy_r_r68 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_tuple_type", "TypeJoinVisitor", "s", 464, CPyStatic_join___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r68);
CPyL52: ;
    cpy_r_r69 = CPyDef_typeops___tuple_fallback(cpy_r_t);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 464, CPyStatic_join___globals);
        goto CPyL70;
    }
    cpy_r_r70 = NULL;
    cpy_r_r71 = CPyDef_join___join_types(cpy_r_r68, cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 464, CPyStatic_join___globals);
        goto CPyL56;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r71, CPyType_types___ProperType)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_tuple_type", 464, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r71);
        goto CPyL56;
    }
    return cpy_r_r72;
CPyL56: ;
    cpy_r_r73 = NULL;
    return cpy_r_r73;
CPyL57: ;
    CPyTagged_DecRef(cpy_r_r7);
    goto CPyL56;
CPyL58: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL56;
CPyL59: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r22);
    goto CPyL56;
CPyL60: ;
    CPy_DECREF(cpy_r_fallback);
    goto CPyL21;
CPyL61: ;
    CPy_DecRef(cpy_r_fallback);
    goto CPyL56;
CPyL62: ;
    CPy_DecRef(cpy_r_fallback);
    CPyTagged_DecRef(cpy_r_r32);
    goto CPyL56;
CPyL63: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_items);
    goto CPyL56;
CPyL64: ;
    CPyTagged_DECREF(cpy_r_r39);
    CPyTagged_DECREF(cpy_r_r40);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL46;
CPyL65: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_items);
    CPyTagged_DecRef(cpy_r_r39);
    CPyTagged_DecRef(cpy_r_r40);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL56;
CPyL66: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_items);
    CPyTagged_DecRef(cpy_r_r39);
    CPyTagged_DecRef(cpy_r_r40);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r51);
    goto CPyL56;
CPyL67: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_items);
    CPyTagged_DecRef(cpy_r_r39);
    CPyTagged_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r51);
    goto CPyL56;
CPyL68: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_items);
    CPyTagged_DecRef(cpy_r_r39);
    CPyTagged_DecRef(cpy_r_r40);
    goto CPyL56;
CPyL69: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL56;
CPyL70: ;
    CPy_DecRef(cpy_r_r68);
    goto CPyL56;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_tuple_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_tuple_type", 437, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_tuple_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_tuple_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_tuple_type__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
    PyObject *cpy_r_r10;
    tuple_T3OOO cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_item_name;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_s_item_type;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_t_item_type;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_fallback;
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
    PyObject *cpy_r_required_keys;
    CPyTagged cpy_r_r48;
    CPyTagged cpy_r_r49;
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
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    cpy_r_r0 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_typeddict_type", "TypeJoinVisitor", "s", 467, CPyStatic_join___globals);
        goto CPyL43;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL33;
    cpy_r_r5 = PyDict_New();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 468, CPyStatic_join___globals);
        goto CPyL43;
    }
    cpy_r_r6 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_typeddict_type", "TypeJoinVisitor", "s", 470, CPyStatic_join___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_types___TypedDictType))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_typeddict_type", 470, CPyStatic_join___globals, "mypy.types.TypedDictType", cpy_r_r6);
        goto CPyL44;
    }
    cpy_r_r8 = CPyDef_types___TypedDictType___zip(cpy_r_r7, cpy_r_t);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 470, CPyStatic_join___globals);
        goto CPyL44;
    }
    cpy_r_r9 = PyObject_GetIter(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 468, CPyStatic_join___globals);
        goto CPyL44;
    }
CPyL7: ;
    cpy_r_r10 = PyIter_Next(cpy_r_r9);
    if (cpy_r_r10 == NULL) goto CPyL45;
    PyObject *__tmp3033;
    if (unlikely(!(PyTuple_Check(cpy_r_r10) && PyTuple_GET_SIZE(cpy_r_r10) == 3))) {
        __tmp3033 = NULL;
        goto __LL3034;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r10, 0))))
        __tmp3033 = PyTuple_GET_ITEM(cpy_r_r10, 0);
    else {
        __tmp3033 = NULL;
    }
    if (__tmp3033 == NULL) goto __LL3034;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r10, 1), CPyType_types___Type)))
        __tmp3033 = PyTuple_GET_ITEM(cpy_r_r10, 1);
    else {
        __tmp3033 = NULL;
    }
    if (__tmp3033 == NULL) goto __LL3034;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r10, 2), CPyType_types___Type)))
        __tmp3033 = PyTuple_GET_ITEM(cpy_r_r10, 2);
    else {
        __tmp3033 = NULL;
    }
    if (__tmp3033 == NULL) goto __LL3034;
    __tmp3033 = cpy_r_r10;
__LL3034: ;
    if (unlikely(__tmp3033 == NULL)) {
        CPy_TypeError("tuple[str, mypy.types.Type, mypy.types.Type]", cpy_r_r10); cpy_r_r11 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp3035 = PyTuple_GET_ITEM(cpy_r_r10, 0);
        CPy_INCREF(__tmp3035);
        PyObject *__tmp3036;
        if (likely(PyUnicode_Check(__tmp3035)))
            __tmp3036 = __tmp3035;
        else {
            CPy_TypeError("str", __tmp3035); 
            __tmp3036 = NULL;
        }
        cpy_r_r11.f0 = __tmp3036;
        PyObject *__tmp3037 = PyTuple_GET_ITEM(cpy_r_r10, 1);
        CPy_INCREF(__tmp3037);
        PyObject *__tmp3038;
        if (likely(PyObject_TypeCheck(__tmp3037, CPyType_types___Type)))
            __tmp3038 = __tmp3037;
        else {
            CPy_TypeError("mypy.types.Type", __tmp3037); 
            __tmp3038 = NULL;
        }
        cpy_r_r11.f1 = __tmp3038;
        PyObject *__tmp3039 = PyTuple_GET_ITEM(cpy_r_r10, 2);
        CPy_INCREF(__tmp3039);
        PyObject *__tmp3040;
        if (likely(PyObject_TypeCheck(__tmp3039, CPyType_types___Type)))
            __tmp3040 = __tmp3039;
        else {
            CPy_TypeError("mypy.types.Type", __tmp3039); 
            __tmp3040 = NULL;
        }
        cpy_r_r11.f2 = __tmp3040;
    }
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11.f0 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 468, CPyStatic_join___globals);
        goto CPyL46;
    }
    cpy_r_r12 = cpy_r_r11.f0;
    CPy_INCREF(cpy_r_r12);
    cpy_r_item_name = cpy_r_r12;
    cpy_r_r13 = cpy_r_r11.f1;
    CPy_INCREF(cpy_r_r13);
    cpy_r_s_item_type = cpy_r_r13;
    cpy_r_r14 = cpy_r_r11.f2;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r11.f0);
    CPy_DECREF(cpy_r_r11.f1);
    CPy_DECREF(cpy_r_r11.f2);
    cpy_r_t_item_type = cpy_r_r14;
    cpy_r_r15 = 2;
    cpy_r_r16 = 2;
    cpy_r_r17 = NULL;
    cpy_r_r18 = NULL;
    cpy_r_r19 = CPyDef_subtypes___is_equivalent(cpy_r_s_item_type, cpy_r_t_item_type, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_t_item_type);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 472, CPyStatic_join___globals);
        goto CPyL47;
    }
    if (cpy_r_r19) goto CPyL12;
    cpy_r_r20 = cpy_r_r19;
    goto CPyL17;
CPyL12: ;
    cpy_r_r21 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_required_keys;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = PySet_Contains(cpy_r_r21, cpy_r_item_name);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 473, CPyStatic_join___globals);
        goto CPyL47;
    }
    cpy_r_r24 = cpy_r_r22;
    cpy_r_r25 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_typeddict_type", "TypeJoinVisitor", "s", 473, CPyStatic_join___globals);
        goto CPyL47;
    }
CPyL14: ;
    if (likely(Py_TYPE(cpy_r_r25) == CPyType_types___TypedDictType))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_typeddict_type", 473, CPyStatic_join___globals, "mypy.types.TypedDictType", cpy_r_r25);
        goto CPyL47;
    }
    cpy_r_r27 = ((mypy___types___TypedDictTypeObject *)cpy_r_r26)->_required_keys;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = PySet_Contains(cpy_r_r27, cpy_r_item_name);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 473, CPyStatic_join___globals);
        goto CPyL47;
    }
    cpy_r_r30 = cpy_r_r28;
    cpy_r_r31 = cpy_r_r24 == cpy_r_r30;
    cpy_r_r20 = cpy_r_r31;
CPyL17: ;
    if (!cpy_r_r20) goto CPyL48;
    cpy_r_r32 = CPyDict_SetItem(cpy_r_r5, cpy_r_item_name, cpy_r_s_item_type);
    CPy_DECREF(cpy_r_item_name);
    CPy_DECREF(cpy_r_s_item_type);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 468, CPyStatic_join___globals);
        goto CPyL46;
    } else
        goto CPyL7;
CPyL19: ;
    cpy_r_r34 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 468, CPyStatic_join___globals);
        goto CPyL44;
    }
    cpy_r_items = cpy_r_r5;
    cpy_r_r35 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_typeddict_type", "TypeJoinVisitor", "s", 476, CPyStatic_join___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r35);
CPyL21: ;
    if (likely(Py_TYPE(cpy_r_r35) == CPyType_types___TypedDictType))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_typeddict_type", 476, CPyStatic_join___globals, "mypy.types.TypedDictType", cpy_r_r35);
        goto CPyL49;
    }
    cpy_r_r37 = CPyDef_types___TypedDictType___create_anonymous_fallback(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 476, CPyStatic_join___globals);
        goto CPyL49;
    }
    cpy_r_fallback = cpy_r_r37;
    cpy_r_r38 = CPyDict_KeysView(cpy_r_items);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 479, CPyStatic_join___globals);
        goto CPyL50;
    }
    cpy_r_r39 = PySet_New(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 479, CPyStatic_join___globals);
        goto CPyL50;
    }
    cpy_r_r40 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_required_keys;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = PyNumber_And(cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 479, CPyStatic_join___globals);
        goto CPyL50;
    }
    if (likely(PySet_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_typeddict_type", 479, CPyStatic_join___globals, "set", cpy_r_r41);
        goto CPyL50;
    }
    cpy_r_r43 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_typeddict_type", "TypeJoinVisitor", "s", 479, CPyStatic_join___globals);
        goto CPyL51;
    }
CPyL28: ;
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_types___TypedDictType))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_typeddict_type", 479, CPyStatic_join___globals, "mypy.types.TypedDictType", cpy_r_r43);
        goto CPyL51;
    }
    cpy_r_r45 = ((mypy___types___TypedDictTypeObject *)cpy_r_r44)->_required_keys;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = PyNumber_And(cpy_r_r42, cpy_r_r45);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 479, CPyStatic_join___globals);
        goto CPyL50;
    }
    if (likely(PySet_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_typeddict_type", 479, CPyStatic_join___globals, "set", cpy_r_r46);
        goto CPyL50;
    }
    cpy_r_required_keys = cpy_r_r47;
    cpy_r_r48 = CPY_INT_TAG;
    cpy_r_r49 = CPY_INT_TAG;
    cpy_r_r50 = CPyDef_types___TypedDictType(cpy_r_items, cpy_r_required_keys, cpy_r_fallback, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_required_keys);
    CPy_DECREF(cpy_r_fallback);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 480, CPyStatic_join___globals);
        goto CPyL43;
    }
    return cpy_r_r50;
CPyL33: ;
    cpy_r_r51 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_typeddict_type", "TypeJoinVisitor", "s", 481, CPyStatic_join___globals);
        goto CPyL43;
    }
CPyL34: ;
    cpy_r_r52 = (PyObject *)CPyType_types___Instance;
    cpy_r_r53 = (CPyPtr)&((PyObject *)cpy_r_r51)->ob_type;
    cpy_r_r54 = *(PyObject * *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 == cpy_r_r52;
    if (!cpy_r_r55) goto CPyL40;
    cpy_r_r56 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_typeddict_type", "TypeJoinVisitor", "s", 482, CPyStatic_join___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r56);
CPyL36: ;
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_types___Instance))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_typeddict_type", 482, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_r56);
        goto CPyL43;
    }
    cpy_r_r58 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = NULL;
    cpy_r_r60 = CPyDef_join___join_types(cpy_r_r57, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 482, CPyStatic_join___globals);
        goto CPyL43;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r60, CPyType_types___ProperType)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_typeddict_type", 482, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r60);
        goto CPyL43;
    }
    return cpy_r_r61;
CPyL40: ;
    cpy_r_r62 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_typeddict_type", "TypeJoinVisitor", "s", 484, CPyStatic_join___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r62);
CPyL41: ;
    cpy_r_r63 = CPyDef_join___TypeJoinVisitor___default(cpy_r_self, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 484, CPyStatic_join___globals);
        goto CPyL43;
    }
    return cpy_r_r63;
CPyL43: ;
    cpy_r_r64 = NULL;
    return cpy_r_r64;
CPyL44: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL43;
CPyL45: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL19;
CPyL46: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    goto CPyL43;
CPyL47: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_item_name);
    CPy_DecRef(cpy_r_s_item_type);
    goto CPyL43;
CPyL48: ;
    CPy_DECREF(cpy_r_item_name);
    CPy_DECREF(cpy_r_s_item_type);
    goto CPyL7;
CPyL49: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL43;
CPyL50: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_fallback);
    goto CPyL43;
CPyL51: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_r42);
    goto CPyL43;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_typeddict_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_typeddict_type", 466, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_typeddict_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_typeddict_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_typeddict_type__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
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
    cpy_r_r0 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_literal_type", "TypeJoinVisitor", "s", 487, CPyStatic_join___globals);
        goto CPyL28;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL24;
    cpy_r_r5 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_literal_type", "TypeJoinVisitor", "s", 488, CPyStatic_join___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___LiteralType))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_literal_type", 488, CPyStatic_join___globals, "mypy.types.LiteralType", cpy_r_r5);
        goto CPyL28;
    }
    cpy_r_r7 = CPyDef_types___LiteralType_____eq__(cpy_r_t, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_literal_type", 488, CPyStatic_join___globals);
        goto CPyL28;
    }
    if (unlikely(!PyBool_Check(cpy_r_r7))) {
        CPy_TypeError("bool", cpy_r_r7); cpy_r_r8 = 2;
    } else
        cpy_r_r8 = cpy_r_r7 == Py_True;
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/join.py", "visit_literal_type", 488, CPyStatic_join___globals);
        goto CPyL28;
    }
    if (!cpy_r_r8) goto CPyL8;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL8: ;
    cpy_r_r9 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_literal_type", "TypeJoinVisitor", "s", 490, CPyStatic_join___globals);
        goto CPyL28;
    }
CPyL9: ;
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_types___LiteralType))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_literal_type", 490, CPyStatic_join___globals, "mypy.types.LiteralType", cpy_r_r9);
        goto CPyL28;
    }
    cpy_r_r11 = ((mypy___types___LiteralTypeObject *)cpy_r_r10)->_fallback;
    cpy_r_r12 = ((mypy___types___InstanceObject *)cpy_r_r11)->_type;
    cpy_r_r13 = ((mypy___nodes___TypeInfoObject *)cpy_r_r12)->_is_enum;
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AttributeError("mypy/join.py", "visit_literal_type", "TypeInfo", "is_enum", 490, CPyStatic_join___globals);
        goto CPyL28;
    }
CPyL11: ;
    if (!cpy_r_r13) goto CPyL19;
CPyL12: ;
    cpy_r_r14 = ((mypy___types___LiteralTypeObject *)cpy_r_t)->_fallback;
    cpy_r_r15 = ((mypy___types___InstanceObject *)cpy_r_r14)->_type;
    cpy_r_r16 = ((mypy___nodes___TypeInfoObject *)cpy_r_r15)->_is_enum;
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AttributeError("mypy/join.py", "visit_literal_type", "TypeInfo", "is_enum", 490, CPyStatic_join___globals);
        goto CPyL28;
    }
CPyL13: ;
    if (!cpy_r_r16) goto CPyL19;
CPyL14: ;
    cpy_r_r17 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_literal_type", "TypeJoinVisitor", "s", 491, CPyStatic_join___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r17);
CPyL15: ;
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_types___LiteralType))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_literal_type", 491, CPyStatic_join___globals, "mypy.types.LiteralType", cpy_r_r17);
        goto CPyL28;
    }
    cpy_r_r19 = PyList_New(2);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_literal_type", 491, CPyStatic_join___globals);
        goto CPyL29;
    }
    cpy_r_r20 = (CPyPtr)&((PyListObject *)cpy_r_r19)->ob_item;
    cpy_r_r21 = *(CPyPtr *)cpy_r_r20;
    *(PyObject * *)cpy_r_r21 = cpy_r_r18;
    cpy_r_r22 = cpy_r_r21 + 8;
    CPy_INCREF(cpy_r_t);
    *(PyObject * *)cpy_r_r22 = cpy_r_t;
    cpy_r_r23 = CPY_INT_TAG;
    cpy_r_r24 = CPY_INT_TAG;
    cpy_r_r25 = 2;
    cpy_r_r26 = 2;
    cpy_r_r27 = CPyDef_typeops___make_simplified_union(cpy_r_r19, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_literal_type", 491, CPyStatic_join___globals);
        goto CPyL28;
    }
    return cpy_r_r27;
CPyL19: ;
    cpy_r_r28 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_literal_type", "TypeJoinVisitor", "s", 492, CPyStatic_join___globals);
        goto CPyL28;
    }
CPyL20: ;
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_types___LiteralType))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_literal_type", 492, CPyStatic_join___globals, "mypy.types.LiteralType", cpy_r_r28);
        goto CPyL28;
    }
    cpy_r_r30 = ((mypy___types___LiteralTypeObject *)cpy_r_r29)->_fallback;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = ((mypy___types___LiteralTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = NULL;
    cpy_r_r33 = CPyDef_join___join_types(cpy_r_r30, cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_literal_type", 492, CPyStatic_join___globals);
        goto CPyL28;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r33, CPyType_types___ProperType)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_literal_type", 492, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r33);
        goto CPyL28;
    }
    return cpy_r_r34;
CPyL24: ;
    cpy_r_r35 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_literal_type", "TypeJoinVisitor", "s", 494, CPyStatic_join___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r35);
CPyL25: ;
    cpy_r_r36 = ((mypy___types___LiteralTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = NULL;
    cpy_r_r38 = CPyDef_join___join_types(cpy_r_r35, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_literal_type", 494, CPyStatic_join___globals);
        goto CPyL28;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r38, CPyType_types___ProperType)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_literal_type", 494, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r38);
        goto CPyL28;
    }
    return cpy_r_r39;
CPyL28: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
CPyL29: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL28;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_literal_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_literal_type", 486, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_literal_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_literal_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_literal_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_literal_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_literal_type__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_partial_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "Internal error");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/join.py", "visit_partial_type", 499, CPyStatic_join___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_partial_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_partial_type", 496, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_partial_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_partial_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_partial_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_partial_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_partial_type__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_type_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
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
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    cpy_r_r0 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_type_type", "TypeJoinVisitor", "s", 502, CPyStatic_join___globals);
        goto CPyL23;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL8;
    cpy_r_r5 = ((mypy___types___TypeTypeObject *)cpy_r_t)->_item;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_type_type", "TypeJoinVisitor", "s", 503, CPyStatic_join___globals);
        goto CPyL24;
    }
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_types___TypeType))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_type_type", 503, CPyStatic_join___globals, "mypy.types.TypeType", cpy_r_r6);
        goto CPyL24;
    }
    cpy_r_r8 = ((mypy___types___TypeTypeObject *)cpy_r_r7)->_item;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPyDef_join___join_types(cpy_r_r5, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_type_type", 503, CPyStatic_join___globals);
        goto CPyL23;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_types___ProperType)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_type_type", 503, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r10);
        goto CPyL23;
    }
    cpy_r_r12 = ((mypy___types___TypeTypeObject *)cpy_r_t)->_line;
    CPyTagged_INCREF(cpy_r_r12);
    cpy_r_r13 = CPY_INT_TAG;
    cpy_r_r14 = CPyDef_types___TypeType___make_normalized(cpy_r_r11, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_type_type", 503, CPyStatic_join___globals);
        goto CPyL23;
    }
    return cpy_r_r14;
CPyL8: ;
    cpy_r_r15 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_type_type", "TypeJoinVisitor", "s", 504, CPyStatic_join___globals);
        goto CPyL23;
    }
CPyL9: ;
    cpy_r_r16 = (PyObject *)CPyType_types___Instance;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL20;
    cpy_r_r20 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_type_type", "TypeJoinVisitor", "s", 504, CPyStatic_join___globals);
        goto CPyL23;
    }
CPyL11: ;
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_types___Instance))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_type_type", 504, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_r20);
        goto CPyL23;
    }
    cpy_r_r22 = ((mypy___types___InstanceObject *)cpy_r_r21)->_type;
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_r22, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_type_type", 504, CPyStatic_join___globals);
        goto CPyL23;
    }
CPyL13: ;
    cpy_r_r24 = CPyStatics[771]; /* 'builtins.type' */
    cpy_r_r25 = PyUnicode_Compare(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r26 = cpy_r_r25 == -1;
    if (!cpy_r_r26) goto CPyL16;
    cpy_r_r27 = PyErr_Occurred();
    cpy_r_r28 = cpy_r_r27 != NULL;
    if (!cpy_r_r28) goto CPyL16;
    cpy_r_r29 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/join.py", "visit_type_type", 504, CPyStatic_join___globals);
        goto CPyL23;
    }
CPyL16: ;
    cpy_r_r30 = cpy_r_r25 == 0;
    if (!cpy_r_r30) goto CPyL20;
    cpy_r_r31 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_type_type", "TypeJoinVisitor", "s", 505, CPyStatic_join___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r31);
CPyL18: ;
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_types___Instance))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "visit_type_type", 505, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_r31);
        goto CPyL23;
    }
    return cpy_r_r32;
CPyL20: ;
    cpy_r_r33 = ((mypy___join___TypeJoinVisitorObject *)cpy_r_self)->_s;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypy/join.py", "visit_type_type", "TypeJoinVisitor", "s", 507, CPyStatic_join___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r33);
CPyL21: ;
    cpy_r_r34 = CPyDef_join___TypeJoinVisitor___default(cpy_r_self, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_type_type", 507, CPyStatic_join___globals);
        goto CPyL23;
    }
    return cpy_r_r34;
CPyL23: ;
    cpy_r_r35 = NULL;
    return cpy_r_r35;
CPyL24: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL23;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_type_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_type_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_type_type", 501, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_type_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_type_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_type_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_type_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_type_type__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
        CPy_AddTraceback("mypy/join.py", "visit_type_alias_type", 510, CPyStatic_join___globals);
        goto CPyL8;
    }
    cpy_r_r2 = CPyStr_Build(2, cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_type_alias_type", 510, CPyStatic_join___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyModule_builtins;
    cpy_r_r4 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_type_alias_type", 510, CPyStatic_join___globals);
        goto CPyL9;
    }
    PyObject *cpy_r_r6[1] = {cpy_r_r2};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 1, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "visit_type_alias_type", 510, CPyStatic_join___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r2);
    CPy_Raise(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/join.py", "visit_type_alias_type", 510, CPyStatic_join___globals);
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

PyObject *CPyPy_join___TypeJoinVisitor___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_type_alias_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_type_alias_type", 509, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_join___TypeJoinVisitor___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_join___TypeJoinVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___TypeJoinVisitor___default(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
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
    CPyTagged cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
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
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "default", 513, CPyStatic_join___globals);
        goto CPyL36;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "default", 513, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL36;
    }
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___Instance;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL6;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r6 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "default", 515, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL36;
    }
    cpy_r_r7 = CPyDef_join___object_from_instance(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "default", 515, CPyStatic_join___globals);
        goto CPyL36;
    }
    return cpy_r_r7;
CPyL6: ;
    cpy_r_r8 = (PyObject *)CPyType_types___UnboundType;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (cpy_r_r11) {
        goto CPyL37;
    } else
        goto CPyL9;
CPyL7: ;
    cpy_r_r12 = NULL;
    cpy_r_r13 = NULL;
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = CPY_INT_TAG;
    cpy_r_r16 = CPyDef_types___AnyType(12, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "default", 517, CPyStatic_join___globals);
        goto CPyL36;
    }
    return cpy_r_r16;
CPyL9: ;
    cpy_r_r17 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (!cpy_r_r20) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TupleType))
        cpy_r_r21 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "default", 519, CPyStatic_join___globals, "mypy.types.TupleType", cpy_r_typ);
        goto CPyL36;
    }
    cpy_r_r22 = CPyDef_typeops___tuple_fallback(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "default", 519, CPyStatic_join___globals);
        goto CPyL36;
    }
    cpy_r_r23 = CPyDef_join___TypeJoinVisitor___default(cpy_r_self, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "default", 519, CPyStatic_join___globals);
        goto CPyL36;
    }
    return cpy_r_r23;
CPyL14: ;
    cpy_r_r24 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL18;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypedDictType))
        cpy_r_r28 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "default", 521, CPyStatic_join___globals, "mypy.types.TypedDictType", cpy_r_typ);
        goto CPyL38;
    }
    cpy_r_r29 = ((mypy___types___TypedDictTypeObject *)cpy_r_r28)->_fallback;
    CPy_INCREF(cpy_r_r29);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r30 = CPyDef_join___TypeJoinVisitor___default(cpy_r_self, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "default", 521, CPyStatic_join___globals);
        goto CPyL36;
    }
    return cpy_r_r30;
CPyL18: ;
    cpy_r_r31 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL20;
    cpy_r_r35 = cpy_r_r34;
    goto CPyL21;
CPyL20: ;
    cpy_r_r36 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    cpy_r_r35 = cpy_r_r39;
CPyL21: ;
    if (!cpy_r_r35) goto CPyL26;
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r40 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "default", 523, CPyStatic_join___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL38;
    }
    cpy_r_r41 = ((mypy___types___FunctionLikeObject *)cpy_r_r40)->_fallback;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/join.py", "default", "FunctionLike", "fallback", 523, CPyStatic_join___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r41);
CPyL24: ;
    CPy_DECREF(cpy_r_typ);
    cpy_r_r42 = CPyDef_join___TypeJoinVisitor___default(cpy_r_self, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "default", 523, CPyStatic_join___globals);
        goto CPyL36;
    }
    return cpy_r_r42;
CPyL26: ;
    cpy_r_r43 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r44 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r45 = *(PyObject * *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 == cpy_r_r43;
    if (!cpy_r_r46) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r47 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "default", 525, CPyStatic_join___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL38;
    }
    cpy_r_r48 = ((mypy___types___TypeVarTypeObject *)cpy_r_r47)->_upper_bound;
    CPy_INCREF(cpy_r_r48);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r49 = CPyDef_join___TypeJoinVisitor___default(cpy_r_self, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "default", 525, CPyStatic_join___globals);
        goto CPyL36;
    }
    return cpy_r_r49;
CPyL30: ;
    cpy_r_r50 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r51 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r52 = *(PyObject * *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 == cpy_r_r50;
    if (!cpy_r_r53) goto CPyL39;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___ParamSpecType))
        cpy_r_r54 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "default", 527, CPyStatic_join___globals, "mypy.types.ParamSpecType", cpy_r_typ);
        goto CPyL38;
    }
    cpy_r_r55 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r54)->_upper_bound;
    CPy_INCREF(cpy_r_r55);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r56 = CPyDef_join___TypeJoinVisitor___default(cpy_r_self, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "default", 527, CPyStatic_join___globals);
        goto CPyL36;
    }
    return cpy_r_r56;
CPyL34: ;
    cpy_r_r57 = NULL;
    cpy_r_r58 = NULL;
    cpy_r_r59 = CPY_INT_TAG;
    cpy_r_r60 = CPY_INT_TAG;
    cpy_r_r61 = CPyDef_types___AnyType(12, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "default", 529, CPyStatic_join___globals);
        goto CPyL36;
    }
    return cpy_r_r61;
CPyL36: ;
    cpy_r_r62 = NULL;
    return cpy_r_r62;
CPyL37: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL7;
CPyL38: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL36;
CPyL39: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL34;
}

PyObject *CPyPy_join___TypeJoinVisitor___default(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:default", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_join___TypeJoinVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.join.TypeJoinVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___TypeJoinVisitor___default(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "default", 512, CPyStatic_join___globals);
    return NULL;
}

char CPyDef_join___is_better(PyObject *cpy_r_t, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "is_better", 535, CPyStatic_join___globals);
        goto CPyL14;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "is_better", 535, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL14;
    }
    cpy_r_t = cpy_r_r1;
    cpy_r_r2 = CPyDef_types___get_proper_type(cpy_r_s);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "is_better", 536, CPyStatic_join___globals);
        goto CPyL15;
    }
    if (likely(cpy_r_r2 != Py_None))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "is_better", 536, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r2);
        goto CPyL15;
    }
    cpy_r_s = cpy_r_r3;
    cpy_r_r4 = (PyObject *)CPyType_types___Instance;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL16;
    cpy_r_r8 = (PyObject *)CPyType_types___Instance;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (cpy_r_r11) {
        goto CPyL7;
    } else
        goto CPyL17;
CPyL6: ;
    return 1;
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r12 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "is_better", 542, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL18;
    }
    cpy_r_r13 = ((mypy___types___InstanceObject *)cpy_r_r12)->_type;
    cpy_r_r14 = ((mypy___nodes___TypeInfoObject *)cpy_r_r13)->_mro;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/join.py", "is_better", "TypeInfo", "mro", 542, CPyStatic_join___globals);
        goto CPyL18;
    }
CPyL9: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    CPy_DECREF(cpy_r_t);
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___Instance))
        cpy_r_r18 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "is_better", 542, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_s);
        goto CPyL19;
    }
    cpy_r_r19 = ((mypy___types___InstanceObject *)cpy_r_r18)->_type;
    cpy_r_r20 = ((mypy___nodes___TypeInfoObject *)cpy_r_r19)->_mro;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/join.py", "is_better", "TypeInfo", "mro", 542, CPyStatic_join___globals);
        goto CPyL19;
    }
CPyL11: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r17 > (Py_ssize_t)cpy_r_r23;
    CPy_DECREF(cpy_r_s);
    if (!cpy_r_r24) goto CPyL13;
    return 1;
CPyL13: ;
    return 0;
CPyL14: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL15: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL14;
CPyL16: ;
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_s);
    goto CPyL13;
CPyL17: ;
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_s);
    goto CPyL6;
CPyL18: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_s);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_s);
    goto CPyL14;
}

PyObject *CPyPy_join___is_better(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", "s", 0};
    static CPyArg_Parser parser = {"OO:is_better", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_t, &obj_s)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___Type)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_t); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(PyObject_TypeCheck(obj_s, CPyType_types___Type)))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.types.Type", obj_s); 
        goto fail;
    }
    char retval = CPyDef_join___is_better(arg_t, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/join.py", "is_better", 532, CPyStatic_join___globals);
    return NULL;
}

tuple_T2OO CPyDef_join___normalize_callables(PyObject *cpy_r_s, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
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
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    tuple_T2OO cpy_r_r40;
    tuple_T2OO cpy_r_r41;
    cpy_r_r0 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL30;
    CPy_INCREF(cpy_r_s);
    if (Py_TYPE(cpy_r_s) == CPyType_types___CallableType)
        cpy_r_r9 = cpy_r_s;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL3041;
    if (Py_TYPE(cpy_r_s) == CPyType_types___Overloaded)
        cpy_r_r9 = cpy_r_s;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL3041;
    CPy_TypeErrorTraceback("mypy/join.py", "normalize_callables", 549, CPyStatic_join___globals, "union[mypy.types.CallableType, mypy.types.Overloaded]", cpy_r_s);
    goto CPyL29;
__LL3041: ;
    cpy_r_r10 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_r9)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL9;
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_types___CallableType))
        cpy_r_r14 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "normalize_callables", 549, CPyStatic_join___globals, "mypy.types.CallableType", cpy_r_r9);
        goto CPyL29;
    }
    cpy_r_r15 = CPyDef_types___CallableType___with_unpacked_kwargs(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "normalize_callables", 549, CPyStatic_join___globals);
        goto CPyL29;
    }
    cpy_r_r16 = cpy_r_r15;
    goto CPyL12;
CPyL9: ;
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_types___Overloaded))
        cpy_r_r17 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "normalize_callables", 549, CPyStatic_join___globals, "mypy.types.Overloaded", cpy_r_r9);
        goto CPyL29;
    }
    cpy_r_r18 = CPyDef_types___Overloaded___with_unpacked_kwargs(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "normalize_callables", 549, CPyStatic_join___globals);
        goto CPyL29;
    }
    cpy_r_r16 = cpy_r_r18;
CPyL12: ;
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_types___ProperType)))
        cpy_r_r19 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "normalize_callables", 549, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r16);
        goto CPyL29;
    }
    cpy_r_s = cpy_r_r19;
CPyL14: ;
    cpy_r_r20 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    if (!cpy_r_r23) goto CPyL16;
    cpy_r_r24 = cpy_r_r23;
    goto CPyL17;
CPyL16: ;
    cpy_r_r25 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    cpy_r_r24 = cpy_r_r28;
CPyL17: ;
    if (!cpy_r_r24) goto CPyL31;
    CPy_INCREF(cpy_r_t);
    if (Py_TYPE(cpy_r_t) == CPyType_types___CallableType)
        cpy_r_r29 = cpy_r_t;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL3042;
    if (Py_TYPE(cpy_r_t) == CPyType_types___Overloaded)
        cpy_r_r29 = cpy_r_t;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL3042;
    CPy_TypeErrorTraceback("mypy/join.py", "normalize_callables", 551, CPyStatic_join___globals, "union[mypy.types.CallableType, mypy.types.Overloaded]", cpy_r_t);
    goto CPyL32;
__LL3042: ;
    cpy_r_r30 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r31 = (CPyPtr)&((PyObject *)cpy_r_r29)->ob_type;
    cpy_r_r32 = *(PyObject * *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 == cpy_r_r30;
    if (!cpy_r_r33) goto CPyL23;
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_types___CallableType))
        cpy_r_r34 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "normalize_callables", 551, CPyStatic_join___globals, "mypy.types.CallableType", cpy_r_r29);
        goto CPyL32;
    }
    cpy_r_r35 = CPyDef_types___CallableType___with_unpacked_kwargs(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "normalize_callables", 551, CPyStatic_join___globals);
        goto CPyL32;
    }
    cpy_r_r36 = cpy_r_r35;
    goto CPyL26;
CPyL23: ;
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_types___Overloaded))
        cpy_r_r37 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "normalize_callables", 551, CPyStatic_join___globals, "mypy.types.Overloaded", cpy_r_r29);
        goto CPyL32;
    }
    cpy_r_r38 = CPyDef_types___Overloaded___with_unpacked_kwargs(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "normalize_callables", 551, CPyStatic_join___globals);
        goto CPyL32;
    }
    cpy_r_r36 = cpy_r_r38;
CPyL26: ;
    if (likely(PyObject_TypeCheck(cpy_r_r36, CPyType_types___ProperType)))
        cpy_r_r39 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "normalize_callables", 551, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r36);
        goto CPyL32;
    }
    cpy_r_t = cpy_r_r39;
CPyL28: ;
    cpy_r_r40.f0 = cpy_r_s;
    cpy_r_r40.f1 = cpy_r_t;
    CPy_INCREF(cpy_r_r40.f0);
    CPy_INCREF(cpy_r_r40.f1);
    CPy_DECREF(cpy_r_s);
    CPy_DECREF(cpy_r_t);
    return cpy_r_r40;
CPyL29: ;
    tuple_T2OO __tmp3043 = { NULL, NULL };
    cpy_r_r41 = __tmp3043;
    return cpy_r_r41;
CPyL30: ;
    CPy_INCREF(cpy_r_s);
    goto CPyL14;
CPyL31: ;
    CPy_INCREF(cpy_r_t);
    goto CPyL28;
CPyL32: ;
    CPy_DecRef(cpy_r_s);
    goto CPyL29;
}

PyObject *CPyPy_join___normalize_callables(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"s", "t", 0};
    static CPyArg_Parser parser = {"OO:normalize_callables", kwlist, 0};
    PyObject *obj_s;
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_s, &obj_t)) {
        return NULL;
    }
    PyObject *arg_s;
    if (likely(PyObject_TypeCheck(obj_s, CPyType_types___ProperType)))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_s); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___ProperType)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_t); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_join___normalize_callables(arg_s, arg_t);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3044 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp3044);
    PyObject *__tmp3045 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp3045);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/join.py", "normalize_callables", 547, CPyStatic_join___globals);
    return NULL;
}

char CPyDef_join___is_similar_callables(PyObject *cpy_r_t, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    int64_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_arg_types;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = cpy_r_r3 == cpy_r_r7;
    if (cpy_r_r8) goto CPyL2;
    cpy_r_r9 = cpy_r_r8;
    goto CPyL11;
CPyL2: ;
    cpy_r_r10 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_min_args;
    cpy_r_r11 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_min_args;
    cpy_r_r12 = cpy_r_r10 & 1;
    cpy_r_r13 = cpy_r_r12 == 0;
    if (!cpy_r_r13) goto CPyL4;
    cpy_r_r14 = cpy_r_r10 == cpy_r_r11;
    cpy_r_r15 = cpy_r_r14;
    goto CPyL5;
CPyL4: ;
    cpy_r_r16 = CPyTagged_IsEq_(cpy_r_r10, cpy_r_r11);
    cpy_r_r15 = cpy_r_r16;
CPyL5: ;
    if (cpy_r_r15) goto CPyL7;
    cpy_r_r17 = cpy_r_r15;
    goto CPyL10;
CPyL7: ;
    cpy_r_r18 = CPY_GET_ATTR(cpy_r_t, CPyType_types___CallableType, 25, mypy___types___CallableTypeObject, char); /* is_var_arg */
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/join.py", "is_similar_callables", 562, CPyStatic_join___globals);
        goto CPyL12;
    }
CPyL8: ;
    cpy_r_r19 = CPY_GET_ATTR(cpy_r_s, CPyType_types___CallableType, 25, mypy___types___CallableTypeObject, char); /* is_var_arg */
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/join.py", "is_similar_callables", 562, CPyStatic_join___globals);
        goto CPyL12;
    }
CPyL9: ;
    cpy_r_r20 = cpy_r_r18 == cpy_r_r19;
    cpy_r_r17 = cpy_r_r20;
CPyL10: ;
    cpy_r_r9 = cpy_r_r17;
CPyL11: ;
    return cpy_r_r9;
CPyL12: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
}

PyObject *CPyPy_join___is_similar_callables(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", "s", 0};
    static CPyArg_Parser parser = {"OO:is_similar_callables", kwlist, 0};
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
    char retval = CPyDef_join___is_similar_callables(arg_t, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/join.py", "is_similar_callables", 555, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___join_similar_callables(PyObject *cpy_r_t, PyObject *cpy_r_s) {
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
    int32_t cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_fallback;
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
    cpy_r_r0 = CPyStatics[9446]; /* ('meet_types',) */
    cpy_r_r1 = CPyStatics[932]; /* 'mypy.meet' */
    cpy_r_r2 = CPyStatic_join___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_similar_callables", 567, CPyStatic_join___globals);
        goto CPyL22;
    }
    CPyModule_mypy___meet = cpy_r_r3;
    CPy_INCREF(CPyModule_mypy___meet);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_similar_callables", 569, CPyStatic_join___globals);
        goto CPyL22;
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
    if (!cpy_r_r10) goto CPyL23;
    cpy_r_r11 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    cpy_r_r12 = CPyList_GetItem(cpy_r_r11, cpy_r_i);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_similar_callables", 571, CPyStatic_join___globals);
        goto CPyL24;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_types___Type)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_similar_callables", 571, CPyStatic_join___globals, "mypy.types.Type", cpy_r_r12);
        goto CPyL24;
    }
    cpy_r_r14 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_arg_types;
    cpy_r_r15 = CPyList_GetItem(cpy_r_r14, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_similar_callables", 571, CPyStatic_join___globals);
        goto CPyL25;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_types___Type)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_similar_callables", 571, CPyStatic_join___globals, "mypy.types.Type", cpy_r_r15);
        goto CPyL25;
    }
    cpy_r_r17 = CPyDef_meet___meet_types(cpy_r_r13, cpy_r_r16);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_similar_callables", 571, CPyStatic_join___globals);
        goto CPyL26;
    }
    cpy_r_r18 = PyList_Append(cpy_r_arg_types, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/join.py", "join_similar_callables", 571, CPyStatic_join___globals);
        goto CPyL26;
    }
    cpy_r_r20 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r20;
    cpy_r_i = cpy_r_r20;
    goto CPyL3;
CPyL11: ;
    cpy_r_r21 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_fallback;
    cpy_r_r22 = ((mypy___types___InstanceObject *)cpy_r_r21)->_type;
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_r22, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_similar_callables", 575, CPyStatic_join___globals);
        goto CPyL26;
    }
CPyL12: ;
    cpy_r_r24 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r25 = PyUnicode_Compare(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r26 = cpy_r_r25 == -1;
    if (!cpy_r_r26) goto CPyL15;
    cpy_r_r27 = PyErr_Occurred();
    cpy_r_r28 = cpy_r_r27 != NULL;
    if (!cpy_r_r28) goto CPyL15;
    cpy_r_r29 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/join.py", "join_similar_callables", 575, CPyStatic_join___globals);
        goto CPyL26;
    }
CPyL15: ;
    cpy_r_r30 = cpy_r_r25 == 0;
    if (!cpy_r_r30) goto CPyL17;
    cpy_r_r31 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r31);
    cpy_r_fallback = cpy_r_r31;
    goto CPyL18;
CPyL17: ;
    cpy_r_r32 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_fallback;
    CPy_INCREF(cpy_r_r32);
    cpy_r_fallback = cpy_r_r32;
CPyL18: ;
    cpy_r_r33 = CPyDef_join___combine_arg_names(cpy_r_t, cpy_r_s);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_similar_callables", 581, CPyStatic_join___globals);
        goto CPyL27;
    }
    cpy_r_r34 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_ret_type;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = NULL;
    cpy_r_r37 = CPyDef_join___join_types(cpy_r_r34, cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_similar_callables", 582, CPyStatic_join___globals);
        goto CPyL28;
    }
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
    cpy_r_r53 = CPyDef_types___CallableType___copy_modified(cpy_r_t, cpy_r_arg_types, cpy_r_r38, cpy_r_r33, cpy_r_r37, cpy_r_fallback, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_arg_types);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_fallback);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_similar_callables", 579, CPyStatic_join___globals);
        goto CPyL22;
    }
    return cpy_r_r53;
CPyL22: ;
    cpy_r_r54 = NULL;
    return cpy_r_r54;
CPyL23: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL11;
CPyL24: ;
    CPy_DecRef(cpy_r_arg_types);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL22;
CPyL25: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_r13);
    goto CPyL22;
CPyL26: ;
    CPy_DecRef(cpy_r_arg_types);
    goto CPyL22;
CPyL27: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_fallback);
    goto CPyL22;
CPyL28: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_r33);
    goto CPyL22;
}

PyObject *CPyPy_join___join_similar_callables(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", "s", 0};
    static CPyArg_Parser parser = {"OO:join_similar_callables", kwlist, 0};
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
    PyObject *retval = CPyDef_join___join_similar_callables(arg_t, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "join_similar_callables", 566, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___combine_similar_callables(PyObject *cpy_r_t, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_arg_types;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_i;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_fallback;
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
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
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
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "combine_similar_callables", 589, CPyStatic_join___globals);
        goto CPyL21;
    }
    cpy_r_arg_types = cpy_r_r0;
    cpy_r_r1 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = 0;
    cpy_r_i = cpy_r_r5;
CPyL2: ;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r6) goto CPyL22;
    cpy_r_r7 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    cpy_r_r8 = CPyList_GetItem(cpy_r_r7, cpy_r_i);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "combine_similar_callables", 591, CPyStatic_join___globals);
        goto CPyL23;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_types___Type)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "combine_similar_callables", 591, CPyStatic_join___globals, "mypy.types.Type", cpy_r_r8);
        goto CPyL23;
    }
    cpy_r_r10 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_arg_types;
    cpy_r_r11 = CPyList_GetItem(cpy_r_r10, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "combine_similar_callables", 591, CPyStatic_join___globals);
        goto CPyL24;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "combine_similar_callables", 591, CPyStatic_join___globals, "mypy.types.Type", cpy_r_r11);
        goto CPyL24;
    }
    cpy_r_r13 = NULL;
    cpy_r_r14 = CPyDef_join___join_types(cpy_r_r9, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "combine_similar_callables", 591, CPyStatic_join___globals);
        goto CPyL25;
    }
    cpy_r_r15 = PyList_Append(cpy_r_arg_types, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/join.py", "combine_similar_callables", 591, CPyStatic_join___globals);
        goto CPyL25;
    }
    cpy_r_r17 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r17;
    cpy_r_i = cpy_r_r17;
    goto CPyL2;
CPyL10: ;
    cpy_r_r18 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_fallback;
    cpy_r_r19 = ((mypy___types___InstanceObject *)cpy_r_r18)->_type;
    cpy_r_r20 = CPY_GET_ATTR(cpy_r_r19, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "combine_similar_callables", 596, CPyStatic_join___globals);
        goto CPyL25;
    }
CPyL11: ;
    cpy_r_r21 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r22 = PyUnicode_Compare(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r23 = cpy_r_r22 == -1;
    if (!cpy_r_r23) goto CPyL14;
    cpy_r_r24 = PyErr_Occurred();
    cpy_r_r25 = cpy_r_r24 != NULL;
    if (!cpy_r_r25) goto CPyL14;
    cpy_r_r26 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/join.py", "combine_similar_callables", 596, CPyStatic_join___globals);
        goto CPyL25;
    }
CPyL14: ;
    cpy_r_r27 = cpy_r_r22 == 0;
    if (!cpy_r_r27) goto CPyL16;
    cpy_r_r28 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r28);
    cpy_r_fallback = cpy_r_r28;
    goto CPyL17;
CPyL16: ;
    cpy_r_r29 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_fallback;
    CPy_INCREF(cpy_r_r29);
    cpy_r_fallback = cpy_r_r29;
CPyL17: ;
    cpy_r_r30 = CPyDef_join___combine_arg_names(cpy_r_t, cpy_r_s);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "combine_similar_callables", 602, CPyStatic_join___globals);
        goto CPyL26;
    }
    cpy_r_r31 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_ret_type;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = NULL;
    cpy_r_r34 = CPyDef_join___join_types(cpy_r_r31, cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "combine_similar_callables", 603, CPyStatic_join___globals);
        goto CPyL27;
    }
    cpy_r_r35 = NULL;
    cpy_r_r36 = Py_None;
    cpy_r_r37 = NULL;
    cpy_r_r38 = NULL;
    cpy_r_r39 = CPY_INT_TAG;
    cpy_r_r40 = CPY_INT_TAG;
    cpy_r_r41 = NULL;
    cpy_r_r42 = NULL;
    cpy_r_r43 = NULL;
    cpy_r_r44 = NULL;
    cpy_r_r45 = NULL;
    cpy_r_r46 = NULL;
    cpy_r_r47 = NULL;
    cpy_r_r48 = NULL;
    cpy_r_r49 = NULL;
    cpy_r_r50 = CPyDef_types___CallableType___copy_modified(cpy_r_t, cpy_r_arg_types, cpy_r_r35, cpy_r_r30, cpy_r_r34, cpy_r_fallback, cpy_r_r36, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_arg_types);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_fallback);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "combine_similar_callables", 600, CPyStatic_join___globals);
        goto CPyL21;
    }
    return cpy_r_r50;
CPyL21: ;
    cpy_r_r51 = NULL;
    return cpy_r_r51;
CPyL22: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL10;
CPyL23: ;
    CPy_DecRef(cpy_r_arg_types);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_r9);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_arg_types);
    goto CPyL21;
CPyL26: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_fallback);
    goto CPyL21;
CPyL27: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_r30);
    goto CPyL21;
}

PyObject *CPyPy_join___combine_similar_callables(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", "s", 0};
    static CPyArg_Parser parser = {"OO:combine_similar_callables", kwlist, 0};
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
    PyObject *retval = CPyDef_join___combine_similar_callables(arg_t, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "combine_similar_callables", 588, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___combine_arg_names(PyObject *cpy_r_t, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_num_args;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_new_names;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r6;
    char cpy_r_r7;
    int64_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_t_name;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_s_name;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_num_args = cpy_r_r3;
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "combine_arg_names", 627, CPyStatic_join___globals);
        goto CPyL28;
    }
    cpy_r_new_names = cpy_r_r4;
    cpy_r_r5 = 0;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_i = cpy_r_r5;
CPyL2: ;
    cpy_r_r6 = cpy_r_r5 & 1;
    cpy_r_r7 = cpy_r_r6 == 0;
    cpy_r_r8 = cpy_r_num_args & 1;
    cpy_r_r9 = cpy_r_r8 == 0;
    cpy_r_r10 = cpy_r_r7 & cpy_r_r9;
    if (!cpy_r_r10) goto CPyL4;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_num_args;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL5;
CPyL4: ;
    cpy_r_r13 = CPyTagged_IsLt_(cpy_r_r5, cpy_r_num_args);
    cpy_r_r12 = cpy_r_r13;
CPyL5: ;
    if (!cpy_r_r12) goto CPyL29;
    cpy_r_r14 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_names;
    cpy_r_r15 = CPyList_GetItem(cpy_r_r14, cpy_r_i);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "combine_arg_names", 629, CPyStatic_join___globals);
        goto CPyL30;
    }
    if (PyUnicode_Check(cpy_r_r15))
        cpy_r_r16 = cpy_r_r15;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL3046;
    if (cpy_r_r15 == Py_None)
        cpy_r_r16 = cpy_r_r15;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL3046;
    CPy_TypeErrorTraceback("mypy/join.py", "combine_arg_names", 629, CPyStatic_join___globals, "str or None", cpy_r_r15);
    goto CPyL30;
__LL3046: ;
    cpy_r_t_name = cpy_r_r16;
    cpy_r_r17 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_arg_names;
    cpy_r_r18 = CPyList_GetItem(cpy_r_r17, cpy_r_i);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "combine_arg_names", 630, CPyStatic_join___globals);
        goto CPyL31;
    }
    if (PyUnicode_Check(cpy_r_r18))
        cpy_r_r19 = cpy_r_r18;
    else {
        cpy_r_r19 = NULL;
    }
    if (cpy_r_r19 != NULL) goto __LL3047;
    if (cpy_r_r18 == Py_None)
        cpy_r_r19 = cpy_r_r18;
    else {
        cpy_r_r19 = NULL;
    }
    if (cpy_r_r19 != NULL) goto __LL3047;
    CPy_TypeErrorTraceback("mypy/join.py", "combine_arg_names", 630, CPyStatic_join___globals, "str or None", cpy_r_r18);
    goto CPyL31;
__LL3047: ;
    cpy_r_s_name = cpy_r_r19;
    cpy_r_r20 = PyObject_RichCompare(cpy_r_t_name, cpy_r_s_name, 2);
    CPy_DECREF(cpy_r_s_name);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "combine_arg_names", 631, CPyStatic_join___globals);
        goto CPyL31;
    }
    if (unlikely(!PyBool_Check(cpy_r_r20))) {
        CPy_TypeError("bool", cpy_r_r20); cpy_r_r21 = 2;
    } else
        cpy_r_r21 = cpy_r_r20 == Py_True;
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/join.py", "combine_arg_names", 631, CPyStatic_join___globals);
        goto CPyL31;
    }
    if (cpy_r_r21) goto CPyL32;
    cpy_r_r22 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_kinds;
    cpy_r_r23 = CPyList_GetItem(cpy_r_r22, cpy_r_i);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "combine_arg_names", 631, CPyStatic_join___globals);
        goto CPyL31;
    }
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_nodes___ArgKind))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "combine_arg_names", 631, CPyStatic_join___globals, "mypy.nodes.ArgKind", cpy_r_r23);
        goto CPyL31;
    }
    cpy_r_r25 = CPyStatics[54]; /* 'is_named' */
    PyObject *cpy_r_r26[1] = {cpy_r_r24};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_VectorcallMethod(cpy_r_r25, cpy_r_r27, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "combine_arg_names", 631, CPyStatic_join___globals);
        goto CPyL33;
    }
    CPy_DECREF(cpy_r_r24);
    if (unlikely(!PyBool_Check(cpy_r_r28))) {
        CPy_TypeError("bool", cpy_r_r28); cpy_r_r29 = 2;
    } else
        cpy_r_r29 = cpy_r_r28 == Py_True;
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypy/join.py", "combine_arg_names", 631, CPyStatic_join___globals);
        goto CPyL31;
    }
    if (cpy_r_r29) goto CPyL32;
    cpy_r_r30 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_arg_kinds;
    cpy_r_r31 = CPyList_GetItem(cpy_r_r30, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "combine_arg_names", 631, CPyStatic_join___globals);
        goto CPyL34;
    }
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_nodes___ArgKind))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "combine_arg_names", 631, CPyStatic_join___globals, "mypy.nodes.ArgKind", cpy_r_r31);
        goto CPyL34;
    }
    cpy_r_r33 = CPyStatics[54]; /* 'is_named' */
    PyObject *cpy_r_r34[1] = {cpy_r_r32};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = PyObject_VectorcallMethod(cpy_r_r33, cpy_r_r35, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "combine_arg_names", 631, CPyStatic_join___globals);
        goto CPyL35;
    }
    CPy_DECREF(cpy_r_r32);
    if (unlikely(!PyBool_Check(cpy_r_r36))) {
        CPy_TypeError("bool", cpy_r_r36); cpy_r_r37 = 2;
    } else
        cpy_r_r37 = cpy_r_r36 == Py_True;
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypy/join.py", "combine_arg_names", 631, CPyStatic_join___globals);
        goto CPyL34;
    }
    if (!cpy_r_r37) goto CPyL36;
CPyL23: ;
    cpy_r_r38 = PyList_Append(cpy_r_new_names, cpy_r_t_name);
    CPy_DECREF(cpy_r_t_name);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/join.py", "combine_arg_names", 632, CPyStatic_join___globals);
        goto CPyL37;
    } else
        goto CPyL25;
CPyL24: ;
    cpy_r_r40 = Py_None;
    cpy_r_r41 = PyList_Append(cpy_r_new_names, cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/join.py", "combine_arg_names", 634, CPyStatic_join___globals);
        goto CPyL37;
    }
CPyL25: ;
    cpy_r_r43 = CPyTagged_Add(cpy_r_r5, 2);
    CPyTagged_DECREF(cpy_r_r5);
    CPyTagged_INCREF(cpy_r_r43);
    cpy_r_r5 = cpy_r_r43;
    cpy_r_i = cpy_r_r43;
    goto CPyL2;
CPyL26: ;
    return cpy_r_new_names;
CPyL27: ;
    cpy_r_r44 = NULL;
    return cpy_r_r44;
CPyL28: ;
    CPyTagged_DecRef(cpy_r_num_args);
    goto CPyL27;
CPyL29: ;
    CPyTagged_DECREF(cpy_r_num_args);
    CPyTagged_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL26;
CPyL30: ;
    CPyTagged_DecRef(cpy_r_num_args);
    CPy_DecRef(cpy_r_new_names);
    CPyTagged_DecRef(cpy_r_r5);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL27;
CPyL31: ;
    CPyTagged_DecRef(cpy_r_num_args);
    CPy_DecRef(cpy_r_new_names);
    CPyTagged_DecRef(cpy_r_r5);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_t_name);
    goto CPyL27;
CPyL32: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL23;
CPyL33: ;
    CPyTagged_DecRef(cpy_r_num_args);
    CPy_DecRef(cpy_r_new_names);
    CPyTagged_DecRef(cpy_r_r5);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_t_name);
    CPy_DecRef(cpy_r_r24);
    goto CPyL27;
CPyL34: ;
    CPyTagged_DecRef(cpy_r_num_args);
    CPy_DecRef(cpy_r_new_names);
    CPyTagged_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_t_name);
    goto CPyL27;
CPyL35: ;
    CPyTagged_DecRef(cpy_r_num_args);
    CPy_DecRef(cpy_r_new_names);
    CPyTagged_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_t_name);
    CPy_DecRef(cpy_r_r32);
    goto CPyL27;
CPyL36: ;
    CPy_DECREF(cpy_r_t_name);
    goto CPyL24;
CPyL37: ;
    CPyTagged_DecRef(cpy_r_num_args);
    CPy_DecRef(cpy_r_new_names);
    CPyTagged_DecRef(cpy_r_r5);
    goto CPyL27;
}

PyObject *CPyPy_join___combine_arg_names(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", "s", 0};
    static CPyArg_Parser parser = {"OO:combine_arg_names", kwlist, 0};
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
    PyObject *retval = CPyDef_join___combine_arg_names(arg_t, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "combine_arg_names", 609, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___object_from_instance(PyObject *cpy_r_instance) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r10;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_r0)->_mro;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/join.py", "object_from_instance", "TypeInfo", "mro", 641, CPyStatic_join___globals);
        goto CPyL6;
    }
CPyL1: ;
    cpy_r_r2 = CPyList_GetItemShort(cpy_r_r1, -2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "object_from_instance", 641, CPyStatic_join___globals);
        goto CPyL6;
    }
    if (likely((Py_TYPE(cpy_r_r2) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r2) == CPyType_nodes___TypeInfo)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "object_from_instance", 641, CPyStatic_join___globals, "mypy.nodes.TypeInfo", cpy_r_r2);
        goto CPyL6;
    }
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "object_from_instance", 641, CPyStatic_join___globals);
        goto CPyL7;
    }
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = NULL;
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_types___Instance(cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "object_from_instance", 641, CPyStatic_join___globals);
        goto CPyL6;
    }
    cpy_r_res = cpy_r_r9;
    return cpy_r_res;
CPyL6: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL7: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL6;
}

PyObject *CPyPy_join___object_from_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"instance", 0};
    static CPyArg_Parser parser = {"O:object_from_instance", kwlist, 0};
    PyObject *obj_instance;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_instance)) {
        return NULL;
    }
    PyObject *arg_instance;
    if (likely(Py_TYPE(obj_instance) == CPyType_types___Instance))
        arg_instance = obj_instance;
    else {
        CPy_TypeError("mypy.types.Instance", obj_instance); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___object_from_instance(arg_instance);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "object_from_instance", 638, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___object_or_any_from_type(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
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
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyPtr cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyTagged cpy_r_r69;
    CPyPtr cpy_r_r70;
    int64_t cpy_r_r71;
    CPyTagged cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_candidate;
    PyObject *cpy_r_r80;
    CPyPtr cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    CPyTagged cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyTagged cpy_r_r88;
    CPyTagged cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    cpy_r_r0 = (PyObject *)CPyType_types___Instance;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL4;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r4 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "object_or_any_from_type", 649, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL51;
    }
    cpy_r_r5 = CPyDef_join___object_from_instance(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "object_or_any_from_type", 649, CPyStatic_join___globals);
        goto CPyL51;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL6;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL7;
CPyL6: ;
    cpy_r_r11 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    cpy_r_r10 = cpy_r_r14;
CPyL7: ;
    if (!cpy_r_r10) goto CPyL9;
    cpy_r_r15 = cpy_r_r10;
    goto CPyL10;
CPyL9: ;
    cpy_r_r16 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    cpy_r_r15 = cpy_r_r19;
CPyL10: ;
    if (!cpy_r_r15) goto CPyL22;
    CPy_INCREF(cpy_r_typ);
    if (Py_TYPE(cpy_r_typ) == CPyType_types___CallableType)
        cpy_r_r20 = cpy_r_typ;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL3048;
    if (Py_TYPE(cpy_r_typ) == CPyType_types___TypedDictType)
        cpy_r_r20 = cpy_r_typ;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL3048;
    if (Py_TYPE(cpy_r_typ) == CPyType_types___LiteralType)
        cpy_r_r20 = cpy_r_typ;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL3048;
    CPy_TypeErrorTraceback("mypy/join.py", "object_or_any_from_type", 651, CPyStatic_join___globals, "union[mypy.types.CallableType, mypy.types.TypedDictType, mypy.types.LiteralType]", cpy_r_typ);
    goto CPyL51;
__LL3048: ;
    cpy_r_r21 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_r20)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL15;
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_types___CallableType))
        cpy_r_r25 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "object_or_any_from_type", 651, CPyStatic_join___globals, "mypy.types.CallableType", cpy_r_r20);
        goto CPyL51;
    }
    cpy_r_r26 = ((mypy___types___CallableTypeObject *)cpy_r_r25)->_fallback;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26;
    goto CPyL20;
CPyL15: ;
    cpy_r_r28 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_r20)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    if (!cpy_r_r31) goto CPyL18;
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_types___TypedDictType))
        cpy_r_r32 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "object_or_any_from_type", 651, CPyStatic_join___globals, "mypy.types.TypedDictType", cpy_r_r20);
        goto CPyL51;
    }
    cpy_r_r33 = ((mypy___types___TypedDictTypeObject *)cpy_r_r32)->_fallback;
    CPy_INCREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r27 = cpy_r_r33;
    goto CPyL20;
CPyL18: ;
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_types___LiteralType))
        cpy_r_r34 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "object_or_any_from_type", 651, CPyStatic_join___globals, "mypy.types.LiteralType", cpy_r_r20);
        goto CPyL51;
    }
    cpy_r_r35 = ((mypy___types___LiteralTypeObject *)cpy_r_r34)->_fallback;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r27 = cpy_r_r35;
CPyL20: ;
    cpy_r_r36 = CPyDef_join___object_from_instance(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "object_or_any_from_type", 651, CPyStatic_join___globals);
        goto CPyL51;
    }
    return cpy_r_r36;
CPyL22: ;
    cpy_r_r37 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    if (!cpy_r_r40) goto CPyL26;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TupleType))
        cpy_r_r41 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "object_or_any_from_type", 653, CPyStatic_join___globals, "mypy.types.TupleType", cpy_r_typ);
        goto CPyL51;
    }
    cpy_r_r42 = ((mypy___types___TupleTypeObject *)cpy_r_r41)->_partial_fallback;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = CPyDef_join___object_from_instance(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "object_or_any_from_type", 653, CPyStatic_join___globals);
        goto CPyL51;
    }
    return cpy_r_r43;
CPyL26: ;
    cpy_r_r44 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r45 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r46 = *(PyObject * *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 == cpy_r_r44;
    if (!cpy_r_r47) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeType))
        cpy_r_r48 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "object_or_any_from_type", 655, CPyStatic_join___globals, "mypy.types.TypeType", cpy_r_typ);
        goto CPyL51;
    }
    cpy_r_r49 = ((mypy___types___TypeTypeObject *)cpy_r_r48)->_item;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r50 = CPyDef_join___object_or_any_from_type(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "object_or_any_from_type", 655, CPyStatic_join___globals);
        goto CPyL51;
    }
    return cpy_r_r50;
CPyL30: ;
    cpy_r_r51 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    if (!cpy_r_r54) goto CPyL37;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r55 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "object_or_any_from_type", 656, CPyStatic_join___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL51;
    }
    cpy_r_r56 = ((mypy___types___TypeVarTypeObject *)cpy_r_r55)->_upper_bound;
    cpy_r_r57 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r58 = CPy_TypeCheck(cpy_r_r56, cpy_r_r57);
    if (!cpy_r_r58) goto CPyL37;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r59 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "object_or_any_from_type", 657, CPyStatic_join___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL51;
    }
    cpy_r_r60 = ((mypy___types___TypeVarTypeObject *)cpy_r_r59)->_upper_bound;
    CPy_INCREF(cpy_r_r60);
    if (likely(PyObject_TypeCheck(cpy_r_r60, CPyType_types___ProperType)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "object_or_any_from_type", 657, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_r60);
        goto CPyL51;
    }
    cpy_r_r62 = CPyDef_join___object_or_any_from_type(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "object_or_any_from_type", 657, CPyStatic_join___globals);
        goto CPyL51;
    }
    return cpy_r_r62;
CPyL37: ;
    cpy_r_r63 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r64 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r65 = *(PyObject * *)cpy_r_r64;
    cpy_r_r66 = cpy_r_r65 == cpy_r_r63;
    if (!cpy_r_r66) goto CPyL49;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r67 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "object_or_any_from_type", 659, CPyStatic_join___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL51;
    }
    cpy_r_r68 = ((mypy___types___UnionTypeObject *)cpy_r_r67)->_items;
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69 = 0;
CPyL40: ;
    cpy_r_r70 = (CPyPtr)&((PyVarObject *)cpy_r_r68)->ob_size;
    cpy_r_r71 = *(int64_t *)cpy_r_r70;
    cpy_r_r72 = cpy_r_r71 << 1;
    cpy_r_r73 = (Py_ssize_t)cpy_r_r69 < (Py_ssize_t)cpy_r_r72;
    if (!cpy_r_r73) goto CPyL52;
    cpy_r_r74 = CPyList_GetItemUnsafe(cpy_r_r68, cpy_r_r69);
    if (likely(PyObject_TypeCheck(cpy_r_r74, CPyType_types___Type)))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "object_or_any_from_type", 659, CPyStatic_join___globals, "mypy.types.Type", cpy_r_r74);
        goto CPyL53;
    }
    cpy_r_item = cpy_r_r75;
    cpy_r_r76 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r77 = CPy_TypeCheck(cpy_r_item, cpy_r_r76);
    if (!cpy_r_r77) goto CPyL54;
    if (likely(PyObject_TypeCheck(cpy_r_item, CPyType_types___ProperType)))
        cpy_r_r78 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "object_or_any_from_type", 661, CPyStatic_join___globals, "mypy.types.ProperType", cpy_r_item);
        goto CPyL53;
    }
    cpy_r_r79 = CPyDef_join___object_or_any_from_type(cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "object_or_any_from_type", 661, CPyStatic_join___globals);
        goto CPyL53;
    }
    cpy_r_candidate = cpy_r_r79;
    cpy_r_r80 = (PyObject *)CPyType_types___Instance;
    cpy_r_r81 = (CPyPtr)&((PyObject *)cpy_r_candidate)->ob_type;
    cpy_r_r82 = *(PyObject * *)cpy_r_r81;
    cpy_r_r83 = cpy_r_r82 == cpy_r_r80;
    if (cpy_r_r83) {
        goto CPyL55;
    } else
        goto CPyL56;
CPyL46: ;
    if (likely(Py_TYPE(cpy_r_candidate) == CPyType_types___Instance))
        cpy_r_r84 = cpy_r_candidate;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "object_or_any_from_type", 663, CPyStatic_join___globals, "mypy.types.Instance", cpy_r_candidate);
        goto CPyL51;
    }
    return cpy_r_r84;
CPyL48: ;
    cpy_r_r85 = cpy_r_r69 + 2;
    cpy_r_r69 = cpy_r_r85;
    goto CPyL40;
CPyL49: ;
    cpy_r_r86 = NULL;
    cpy_r_r87 = NULL;
    cpy_r_r88 = CPY_INT_TAG;
    cpy_r_r89 = CPY_INT_TAG;
    cpy_r_r90 = CPyDef_types___AnyType(16, cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "object_or_any_from_type", 664, CPyStatic_join___globals);
        goto CPyL51;
    }
    return cpy_r_r90;
CPyL51: ;
    cpy_r_r91 = NULL;
    return cpy_r_r91;
CPyL52: ;
    CPy_DECREF(cpy_r_r68);
    goto CPyL49;
CPyL53: ;
    CPy_DecRef(cpy_r_r68);
    goto CPyL51;
CPyL54: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL48;
CPyL55: ;
    CPy_DECREF(cpy_r_r68);
    goto CPyL46;
CPyL56: ;
    CPy_DECREF(cpy_r_candidate);
    goto CPyL48;
}

PyObject *CPyPy_join___object_or_any_from_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:object_or_any_from_type", kwlist, 0};
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
    PyObject *retval = CPyDef_join___object_or_any_from_type(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "object_or_any_from_type", 645, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___join_type_list(PyObject *cpy_r_types) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_joined;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = cpy_r_r2 != 0;
    if (cpy_r_r3) goto CPyL3;
    cpy_r_r4 = 2;
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPyDef_types___UninhabitedType(cpy_r_r4, cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_type_list", 671, CPyStatic_join___globals);
        goto CPyL14;
    }
    return cpy_r_r7;
CPyL3: ;
    cpy_r_r8 = CPyList_GetItemShort(cpy_r_types, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_type_list", 672, CPyStatic_join___globals);
        goto CPyL14;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_types___Type)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_type_list", 672, CPyStatic_join___globals, "mypy.types.Type", cpy_r_r8);
        goto CPyL14;
    }
    cpy_r_joined = cpy_r_r9;
    cpy_r_r10 = CPyList_GetSlice(cpy_r_types, 2, 9223372036854775806LL);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_type_list", 673, CPyStatic_join___globals);
        goto CPyL15;
    }
    if (likely(PyList_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_type_list", 673, CPyStatic_join___globals, "list", cpy_r_r10);
        goto CPyL15;
    }
    cpy_r_r12 = 0;
CPyL8: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL16;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_r11, cpy_r_r12);
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_types___Type)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/join.py", "join_type_list", 673, CPyStatic_join___globals, "mypy.types.Type", cpy_r_r17);
        goto CPyL17;
    }
    cpy_r_t = cpy_r_r18;
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyDef_join___join_types(cpy_r_joined, cpy_r_t, cpy_r_r19);
    CPy_DECREF(cpy_r_joined);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "join_type_list", 674, CPyStatic_join___globals);
        goto CPyL18;
    }
    cpy_r_joined = cpy_r_r20;
    cpy_r_r21 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r21;
    goto CPyL8;
CPyL13: ;
    return cpy_r_joined;
CPyL14: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL15: ;
    CPy_DecRef(cpy_r_joined);
    goto CPyL14;
CPyL16: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_joined);
    CPy_DecRef(cpy_r_r11);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL14;
}

PyObject *CPyPy_join___join_type_list(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:join_type_list", kwlist, 0};
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
    PyObject *retval = CPyDef_join___join_type_list(arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "join_type_list", 667, CPyStatic_join___globals);
    return NULL;
}

PyObject *CPyDef_join___unpack_callback_protocol(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_r0)->_is_protocol;
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AttributeError("mypy/join.py", "unpack_callback_protocol", "TypeInfo", "is_protocol", 679, CPyStatic_join___globals);
        goto CPyL13;
    }
CPyL1: ;
    if (cpy_r_r1) goto CPyL4;
CPyL2: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/join.py", "unpack_callback_protocol", 679, CPyStatic_join___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    cpy_r_r4 = CPY_GET_ATTR(cpy_r_r3, CPyType_nodes___TypeInfo, 12, mypy___nodes___TypeInfoObject, PyObject *); /* protocol_members */
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "unpack_callback_protocol", 680, CPyStatic_join___globals);
        goto CPyL13;
    }
CPyL5: ;
    cpy_r_r5 = CPyStatics[706]; /* '__call__' */
    cpy_r_r6 = PyList_New(1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "unpack_callback_protocol", 680, CPyStatic_join___globals);
        goto CPyL14;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    CPy_INCREF(cpy_r_r5);
    *(PyObject * *)cpy_r_r8 = cpy_r_r5;
    cpy_r_r9 = PyObject_RichCompare(cpy_r_r4, cpy_r_r6, 2);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "unpack_callback_protocol", 680, CPyStatic_join___globals);
        goto CPyL13;
    }
    if (unlikely(!PyBool_Check(cpy_r_r9))) {
        CPy_TypeError("bool", cpy_r_r9); cpy_r_r10 = 2;
    } else
        cpy_r_r10 = cpy_r_r9 == Py_True;
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/join.py", "unpack_callback_protocol", 680, CPyStatic_join___globals);
        goto CPyL13;
    }
    if (!cpy_r_r10) goto CPyL12;
    cpy_r_r11 = CPyStatics[706]; /* '__call__' */
    cpy_r_r12 = 2;
    cpy_r_r13 = CPyDef_subtypes___find_member(cpy_r_r11, cpy_r_t, cpy_r_t, 1, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "unpack_callback_protocol", 681, CPyStatic_join___globals);
        goto CPyL13;
    }
    cpy_r_r14 = CPyDef_types___get_proper_type(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "unpack_callback_protocol", 681, CPyStatic_join___globals);
        goto CPyL13;
    }
    return cpy_r_r14;
CPyL12: ;
    cpy_r_r15 = Py_None;
    CPy_INCREF(cpy_r_r15);
    return cpy_r_r15;
CPyL13: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL14: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL13;
}

PyObject *CPyPy_join___unpack_callback_protocol(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:unpack_callback_protocol", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_join___unpack_callback_protocol(arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/join.py", "unpack_callback_protocol", 678, CPyStatic_join___globals);
    return NULL;
}

char CPyDef_join_____top_level__(void) {
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
    PyObject **cpy_r_r13;
    void *cpy_r_r15;
    void *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
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
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "<module>", -1, CPyStatic_join___globals);
        goto CPyL24;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_join___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 3, CPyStatic_join___globals);
        goto CPyL24;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9447]; /* ('overload',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_join___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 5, CPyStatic_join___globals);
        goto CPyL24;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = (PyObject **)&CPyModule_mypy___typeops;
    PyObject **cpy_r_r14[1] = {cpy_r_r13};
    cpy_r_r15 = (void *)&cpy_r_r14;
    int64_t cpy_r_r16[1] = {7};
    cpy_r_r17 = (void *)&cpy_r_r16;
    cpy_r_r18 = CPyStatics[9448]; /* (('mypy.typeops', 'mypy', 'mypy'),) */
    cpy_r_r19 = CPyStatic_join___globals;
    cpy_r_r20 = CPyStatics[2698]; /* 'mypy/join.py' */
    cpy_r_r21 = CPyStatics[17]; /* '<module>' */
    cpy_r_r22 = CPyImport_ImportMany(cpy_r_r18, cpy_r_r15, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r17);
    if (!cpy_r_r22) goto CPyL24;
    cpy_r_r23 = CPyStatics[9081]; /* ('map_instance_to_supertype',) */
    cpy_r_r24 = CPyStatics[61]; /* 'mypy.maptype' */
    cpy_r_r25 = CPyStatic_join___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 8, CPyStatic_join___globals);
        goto CPyL24;
    }
    CPyModule_mypy___maptype = cpy_r_r26;
    CPy_INCREF(CPyModule_mypy___maptype);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[9449]; /* ('CONTRAVARIANT', 'COVARIANT', 'INVARIANT') */
    cpy_r_r28 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r29 = CPyStatic_join___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 9, CPyStatic_join___globals);
        goto CPyL24;
    }
    CPyModule_mypy___nodes = cpy_r_r30;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[9201]; /* ('state',) */
    cpy_r_r32 = CPyStatics[1020]; /* 'mypy.state' */
    cpy_r_r33 = CPyStatic_join___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 10, CPyStatic_join___globals);
        goto CPyL24;
    }
    CPyModule_mypy___state = cpy_r_r34;
    CPy_INCREF(CPyModule_mypy___state);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[9450]; /* ('SubtypeContext', 'find_member', 'is_equivalent',
                                     'is_proper_subtype', 'is_protocol_implementation',
                                     'is_subtype') */
    cpy_r_r36 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r37 = CPyStatic_join___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 11, CPyStatic_join___globals);
        goto CPyL24;
    }
    CPyModule_mypy___subtypes = cpy_r_r38;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[9451]; /* ('AnyType', 'CallableType', 'DeletedType', 'ErasedType',
                                     'FunctionLike', 'Instance', 'LiteralType', 'NoneType',
                                     'Overloaded', 'Parameters', 'ParamSpecType',
                                     'PartialType', 'ProperType', 'TupleType', 'Type',
                                     'TypeAliasType', 'TypedDictType', 'TypeOfAny',
                                     'TypeType', 'TypeVarTupleType', 'TypeVarType',
                                     'TypeVisitor', 'UnboundType', 'UninhabitedType',
                                     'UnionType', 'UnpackType', 'get_proper_type',
                                     'get_proper_types') */
    cpy_r_r40 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r41 = CPyStatic_join___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 19, CPyStatic_join___globals);
        goto CPyL24;
    }
    CPyModule_mypy___types = cpy_r_r42;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = NULL;
    cpy_r_r44 = CPyStatics[92]; /* 'mypy.join' */
    cpy_r_r45 = (PyObject *)CPyType_join___InstanceJoiner_template;
    cpy_r_r46 = CPyType_FromTemplate(cpy_r_r45, cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 51, CPyStatic_join___globals);
        goto CPyL24;
    }
    cpy_r_r47 = CPyDef_join___InstanceJoiner_trait_vtable_setup();
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/join.py", "<module>", -1, CPyStatic_join___globals);
        goto CPyL25;
    }
    cpy_r_r48 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r49 = CPyStatics[2701]; /* 'seen_instances' */
    cpy_r_r50 = PyTuple_Pack(1, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 51, CPyStatic_join___globals);
        goto CPyL25;
    }
    cpy_r_r51 = PyObject_SetAttr(cpy_r_r46, cpy_r_r48, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 51, CPyStatic_join___globals);
        goto CPyL25;
    }
    CPyType_join___InstanceJoiner = (PyTypeObject *)cpy_r_r46;
    CPy_INCREF(CPyType_join___InstanceJoiner);
    cpy_r_r53 = CPyStatic_join___globals;
    cpy_r_r54 = CPyStatics[2702]; /* 'InstanceJoiner' */
    cpy_r_r55 = CPyDict_SetItem(cpy_r_r53, cpy_r_r54, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 51, CPyStatic_join___globals);
        goto CPyL24;
    }
    cpy_r_r57 = (PyObject *)CPyType_type_visitor___TypeVisitor;
    cpy_r_r58 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r59 = PyObject_GetItem(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 255, CPyStatic_join___globals);
        goto CPyL24;
    }
    cpy_r_r60 = PyTuple_Pack(1, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 255, CPyStatic_join___globals);
        goto CPyL24;
    }
    cpy_r_r61 = CPyStatics[92]; /* 'mypy.join' */
    cpy_r_r62 = (PyObject *)CPyType_join___TypeJoinVisitor_template;
    cpy_r_r63 = CPyType_FromTemplate(cpy_r_r62, cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 255, CPyStatic_join___globals);
        goto CPyL24;
    }
    cpy_r_r64 = CPyDef_join___TypeJoinVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypy/join.py", "<module>", -1, CPyStatic_join___globals);
        goto CPyL26;
    }
    cpy_r_r65 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r66 = CPyStatics[1417]; /* 's' */
    cpy_r_r67 = CPyStatics[2703]; /* 'instance_joiner' */
    cpy_r_r68 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r69 = PyTuple_Pack(3, cpy_r_r66, cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 255, CPyStatic_join___globals);
        goto CPyL26;
    }
    cpy_r_r70 = PyObject_SetAttr(cpy_r_r63, cpy_r_r65, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 255, CPyStatic_join___globals);
        goto CPyL26;
    }
    CPyType_join___TypeJoinVisitor = (PyTypeObject *)cpy_r_r63;
    CPy_INCREF(CPyType_join___TypeJoinVisitor);
    cpy_r_r72 = CPyStatic_join___globals;
    cpy_r_r73 = CPyStatics[2704]; /* 'TypeJoinVisitor' */
    cpy_r_r74 = CPyDict_SetItem(cpy_r_r72, cpy_r_r73, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/join.py", "<module>", 255, CPyStatic_join___globals);
        goto CPyL24;
    }
    return 1;
CPyL24: ;
    cpy_r_r76 = 2;
    return cpy_r_r76;
CPyL25: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL24;
CPyL26: ;
    CPy_DecRef(cpy_r_r63);
    goto CPyL24;
}
