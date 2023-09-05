#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static Py_ssize_t CPyDunder___hash__constraints___Constraint(PyObject *self) {
    CPyTagged retval = CPyDef_constraints___Constraint_____hash__(self);
    if (retval == CPY_INT_TAG) {
        return -1;
    }
    Py_ssize_t val = CPyTagged_AsSsize_t(retval);
    CPyTagged_DECREF(retval);
    if (PyErr_Occurred()) return -1;
    if (val == -1) return -2;
    return val;
}
static int
constraints___Constraint_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *CPyDunder__RichCompare_constraints___Constraint(PyObject *obj_lhs, PyObject *obj_rhs, int op) {
    switch (op) {
        case Py_EQ: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_constraints___Constraint))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypy.constraints.Constraint", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_constraints___Constraint_____eq__(arg_lhs, arg_rhs);
        }
        case Py_NE: {
            PyObject *arg_lhs;
            if (likely(Py_TYPE(obj_lhs) == CPyType_constraints___Constraint))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypy.constraints.Constraint", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_constraints___Constraint_____ne__(arg_lhs, arg_rhs);
        }
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject *constraints___Constraint_setup(PyTypeObject *type);
PyObject *CPyDef_constraints___Constraint(PyObject *cpy_r_type_var, CPyTagged cpy_r_op, PyObject *cpy_r_target);

static PyObject *
constraints___Constraint_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_constraints___Constraint) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = constraints___Constraint_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_constraints___Constraint_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
constraints___Constraint_traverse(mypy___constraints___ConstraintObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_type_var);
    if (CPyTagged_CheckLong(self->_op)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_op));
    }
    Py_VISIT(self->_target);
    Py_VISIT(self->_origin_type_var);
    return 0;
}

static int
constraints___Constraint_clear(mypy___constraints___ConstraintObject *self)
{
    Py_CLEAR(self->_type_var);
    if (CPyTagged_CheckLong(self->_op)) {
        CPyTagged __tmp = self->_op;
        self->_op = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_target);
    Py_CLEAR(self->_origin_type_var);
    return 0;
}

static void
constraints___Constraint_dealloc(mypy___constraints___ConstraintObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, constraints___Constraint_dealloc)
    constraints___Constraint_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem constraints___Constraint_vtable[6];
static bool
CPyDef_constraints___Constraint_trait_vtable_setup(void)
{
    CPyVTableItem constraints___Constraint_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_constraints___Constraint_____init__,
        (CPyVTableItem)CPyDef_constraints___Constraint_____repr__,
        (CPyVTableItem)CPyDef_constraints___Constraint_____hash__,
        (CPyVTableItem)CPyDef_constraints___Constraint_____eq__,
        (CPyVTableItem)CPyDef_constraints___Constraint_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_constraints___Constraint_____ne__,
    };
    memcpy(constraints___Constraint_vtable, constraints___Constraint_vtable_scratch, sizeof(constraints___Constraint_vtable));
    return 1;
}

static PyObject *
constraints___Constraint_get_type_var(mypy___constraints___ConstraintObject *self, void *closure);
static int
constraints___Constraint_set_type_var(mypy___constraints___ConstraintObject *self, PyObject *value, void *closure);
static PyObject *
constraints___Constraint_get_op(mypy___constraints___ConstraintObject *self, void *closure);
static int
constraints___Constraint_set_op(mypy___constraints___ConstraintObject *self, PyObject *value, void *closure);
static PyObject *
constraints___Constraint_get_target(mypy___constraints___ConstraintObject *self, void *closure);
static int
constraints___Constraint_set_target(mypy___constraints___ConstraintObject *self, PyObject *value, void *closure);
static PyObject *
constraints___Constraint_get_origin_type_var(mypy___constraints___ConstraintObject *self, void *closure);
static int
constraints___Constraint_set_origin_type_var(mypy___constraints___ConstraintObject *self, PyObject *value, void *closure);

static PyGetSetDef constraints___Constraint_getseters[] = {
    {"type_var",
     (getter)constraints___Constraint_get_type_var, (setter)constraints___Constraint_set_type_var,
     NULL, NULL},
    {"op",
     (getter)constraints___Constraint_get_op, (setter)constraints___Constraint_set_op,
     NULL, NULL},
    {"target",
     (getter)constraints___Constraint_get_target, (setter)constraints___Constraint_set_target,
     NULL, NULL},
    {"origin_type_var",
     (getter)constraints___Constraint_get_origin_type_var, (setter)constraints___Constraint_set_origin_type_var,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef constraints___Constraint_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_constraints___Constraint_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_constraints___Constraint_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__hash__",
     (PyCFunction)CPyPy_constraints___Constraint_____hash__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__eq__",
     (PyCFunction)CPyPy_constraints___Constraint_____eq__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_constraints___Constraint_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__ne__",
     (PyCFunction)CPyPy_constraints___Constraint_____ne__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_constraints___Constraint_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Constraint",
    .tp_new = constraints___Constraint_new,
    .tp_dealloc = (destructor)constraints___Constraint_dealloc,
    .tp_traverse = (traverseproc)constraints___Constraint_traverse,
    .tp_clear = (inquiry)constraints___Constraint_clear,
    .tp_getset = constraints___Constraint_getseters,
    .tp_methods = constraints___Constraint_methods,
    .tp_hash = CPyDunder___hash__constraints___Constraint,
    .tp_init = constraints___Constraint_init,
    .tp_repr = CPyDef_constraints___Constraint_____repr__,
    .tp_richcompare = CPyDunder__RichCompare_constraints___Constraint,
    .tp_basicsize = sizeof(mypy___constraints___ConstraintObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_constraints___Constraint_template = &CPyType_constraints___Constraint_template_;

static PyObject *
constraints___Constraint_setup(PyTypeObject *type)
{
    mypy___constraints___ConstraintObject *self;
    self = (mypy___constraints___ConstraintObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = constraints___Constraint_vtable;
    self->_op = CPY_INT_TAG;
    if (CPyDef_constraints___Constraint_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_constraints___Constraint(PyObject *cpy_r_type_var, CPyTagged cpy_r_op, PyObject *cpy_r_target)
{
    PyObject *self = constraints___Constraint_setup(CPyType_constraints___Constraint);
    if (self == NULL)
        return NULL;
    char res = CPyDef_constraints___Constraint_____init__(self, cpy_r_type_var, cpy_r_op, cpy_r_target);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
constraints___Constraint_get_type_var(mypy___constraints___ConstraintObject *self, void *closure)
{
    if (unlikely(self->_type_var == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'type_var' of 'Constraint' undefined");
        return NULL;
    }
    CPy_INCREF(self->_type_var);
    PyObject *retval = self->_type_var;
    return retval;
}

static int
constraints___Constraint_set_type_var(mypy___constraints___ConstraintObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Constraint' object attribute 'type_var' cannot be deleted");
        return -1;
    }
    if (self->_type_var != NULL) {
        CPy_DECREF(self->_type_var);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_types___TypeVarId))
        tmp = value;
    else {
        CPy_TypeError("mypy.types.TypeVarId", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_type_var = tmp;
    return 0;
}

static PyObject *
constraints___Constraint_get_op(mypy___constraints___ConstraintObject *self, void *closure)
{
    if (unlikely(self->_op == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'op' of 'Constraint' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_op);
    PyObject *retval = CPyTagged_StealAsObject(self->_op);
    return retval;
}

static int
constraints___Constraint_set_op(mypy___constraints___ConstraintObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Constraint' object attribute 'op' cannot be deleted");
        return -1;
    }
    if (self->_op != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_op);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_op = tmp;
    return 0;
}

static PyObject *
constraints___Constraint_get_target(mypy___constraints___ConstraintObject *self, void *closure)
{
    if (unlikely(self->_target == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'target' of 'Constraint' undefined");
        return NULL;
    }
    CPy_INCREF(self->_target);
    PyObject *retval = self->_target;
    return retval;
}

static int
constraints___Constraint_set_target(mypy___constraints___ConstraintObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Constraint' object attribute 'target' cannot be deleted");
        return -1;
    }
    if (self->_target != NULL) {
        CPy_DECREF(self->_target);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_types___Type)))
        tmp = value;
    else {
        CPy_TypeError("mypy.types.Type", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_target = tmp;
    return 0;
}

static PyObject *
constraints___Constraint_get_origin_type_var(mypy___constraints___ConstraintObject *self, void *closure)
{
    if (unlikely(self->_origin_type_var == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'origin_type_var' of 'Constraint' undefined");
        return NULL;
    }
    CPy_INCREF(self->_origin_type_var);
    PyObject *retval = self->_origin_type_var;
    return retval;
}

static int
constraints___Constraint_set_origin_type_var(mypy___constraints___ConstraintObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Constraint' object attribute 'origin_type_var' cannot be deleted");
        return -1;
    }
    if (self->_origin_type_var != NULL) {
        CPy_DECREF(self->_origin_type_var);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_types___TypeVarLikeType)))
        tmp = value;
    else {
        CPy_TypeError("mypy.types.TypeVarLikeType", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_origin_type_var = tmp;
    return 0;
}

static int
constraints___CompleteTypeVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef constraints___CompleteTypeVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___constraints___CompleteTypeVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___constraints___CompleteTypeVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *constraints___CompleteTypeVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_constraints___CompleteTypeVisitor(void);

static PyObject *
constraints___CompleteTypeVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_constraints___CompleteTypeVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = constraints___CompleteTypeVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_constraints___CompleteTypeVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
constraints___CompleteTypeVisitor_traverse(mypy___constraints___CompleteTypeVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_strategy);
    Py_VISIT(self->_seen_aliases);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___constraints___CompleteTypeVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___constraints___CompleteTypeVisitorObject))));
    return 0;
}

static int
constraints___CompleteTypeVisitor_clear(mypy___constraints___CompleteTypeVisitorObject *self)
{
    Py_CLEAR(self->_strategy);
    Py_CLEAR(self->_seen_aliases);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___constraints___CompleteTypeVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___constraints___CompleteTypeVisitorObject))));
    return 0;
}

static void
constraints___CompleteTypeVisitor_dealloc(mypy___constraints___CompleteTypeVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, constraints___CompleteTypeVisitor_dealloc)
    constraints___CompleteTypeVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem constraints___CompleteTypeVisitor_vtable[36];
static CPyVTableItem constraints___CompleteTypeVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable[26];
static size_t constraints___CompleteTypeVisitor_type_visitor___SyntheticTypeVisitor_offset_table[1];
static CPyVTableItem constraints___CompleteTypeVisitor_type_visitor___TypeVisitor_trait_vtable[21];
static size_t constraints___CompleteTypeVisitor_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_constraints___CompleteTypeVisitor_trait_vtable_setup(void)
{
    CPyVTableItem constraints___CompleteTypeVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_list,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_argument,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_placeholder_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_any,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_constraints___CompleteTypeVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var,
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
    memcpy(constraints___CompleteTypeVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable, constraints___CompleteTypeVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch, sizeof(constraints___CompleteTypeVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable));
    size_t constraints___CompleteTypeVisitor_type_visitor___SyntheticTypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(constraints___CompleteTypeVisitor_type_visitor___SyntheticTypeVisitor_offset_table, constraints___CompleteTypeVisitor_type_visitor___SyntheticTypeVisitor_offset_table_scratch, sizeof(constraints___CompleteTypeVisitor_type_visitor___SyntheticTypeVisitor_offset_table));
    CPyVTableItem constraints___CompleteTypeVisitor_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_any,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_constraints___CompleteTypeVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var,
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
    memcpy(constraints___CompleteTypeVisitor_type_visitor___TypeVisitor_trait_vtable, constraints___CompleteTypeVisitor_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(constraints___CompleteTypeVisitor_type_visitor___TypeVisitor_trait_vtable));
    size_t constraints___CompleteTypeVisitor_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(constraints___CompleteTypeVisitor_type_visitor___TypeVisitor_offset_table, constraints___CompleteTypeVisitor_type_visitor___TypeVisitor_offset_table_scratch, sizeof(constraints___CompleteTypeVisitor_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem constraints___CompleteTypeVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___SyntheticTypeVisitor, (CPyVTableItem)constraints___CompleteTypeVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable, (CPyVTableItem)constraints___CompleteTypeVisitor_type_visitor___SyntheticTypeVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)constraints___CompleteTypeVisitor_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)constraints___CompleteTypeVisitor_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_constraints___CompleteTypeVisitor_____init__,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_list,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_argument,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_any,
        (CPyVTableItem)CPyDef_constraints___CompleteTypeVisitor___visit_uninhabited_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var,
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
        (CPyVTableItem)CPyDef_constraints___CompleteTypeVisitor_____init__,
        (CPyVTableItem)CPyDef_constraints___CompleteTypeVisitor___visit_uninhabited_type,
    };
    memcpy(constraints___CompleteTypeVisitor_vtable, constraints___CompleteTypeVisitor_vtable_scratch, sizeof(constraints___CompleteTypeVisitor_vtable));
    return 1;
}


static PyGetSetDef constraints___CompleteTypeVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef constraints___CompleteTypeVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_constraints___CompleteTypeVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_constraints___CompleteTypeVisitor___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_constraints___CompleteTypeVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "CompleteTypeVisitor",
    .tp_new = constraints___CompleteTypeVisitor_new,
    .tp_dealloc = (destructor)constraints___CompleteTypeVisitor_dealloc,
    .tp_traverse = (traverseproc)constraints___CompleteTypeVisitor_traverse,
    .tp_clear = (inquiry)constraints___CompleteTypeVisitor_clear,
    .tp_getset = constraints___CompleteTypeVisitor_getseters,
    .tp_methods = constraints___CompleteTypeVisitor_methods,
    .tp_init = constraints___CompleteTypeVisitor_init,
    .tp_members = constraints___CompleteTypeVisitor_members,
    .tp_basicsize = sizeof(mypy___constraints___CompleteTypeVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___constraints___CompleteTypeVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___constraints___CompleteTypeVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_constraints___CompleteTypeVisitor_template = &CPyType_constraints___CompleteTypeVisitor_template_;

static PyObject *
constraints___CompleteTypeVisitor_setup(PyTypeObject *type)
{
    mypy___constraints___CompleteTypeVisitorObject *self;
    self = (mypy___constraints___CompleteTypeVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = constraints___CompleteTypeVisitor_vtable + 6;
    self->_skip_alias_target = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_constraints___CompleteTypeVisitor(void)
{
    PyObject *self = constraints___CompleteTypeVisitor_setup(CPyType_constraints___CompleteTypeVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_constraints___CompleteTypeVisitor_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


static int
constraints___ConstraintBuilderVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef constraints___ConstraintBuilderVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___constraints___ConstraintBuilderVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___constraints___ConstraintBuilderVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *constraints___ConstraintBuilderVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_constraints___ConstraintBuilderVisitor(PyObject *cpy_r_actual, CPyTagged cpy_r_direction);

static PyObject *
constraints___ConstraintBuilderVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_constraints___ConstraintBuilderVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = constraints___ConstraintBuilderVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_constraints___ConstraintBuilderVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
constraints___ConstraintBuilderVisitor_traverse(mypy___constraints___ConstraintBuilderVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_actual);
    if (CPyTagged_CheckLong(self->_direction)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_direction));
    }
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___constraints___ConstraintBuilderVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___constraints___ConstraintBuilderVisitorObject))));
    return 0;
}

static int
constraints___ConstraintBuilderVisitor_clear(mypy___constraints___ConstraintBuilderVisitorObject *self)
{
    Py_CLEAR(self->_actual);
    if (CPyTagged_CheckLong(self->_direction)) {
        CPyTagged __tmp = self->_direction;
        self->_direction = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___constraints___ConstraintBuilderVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___constraints___ConstraintBuilderVisitorObject))));
    return 0;
}

static void
constraints___ConstraintBuilderVisitor_dealloc(mypy___constraints___ConstraintBuilderVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, constraints___ConstraintBuilderVisitor_dealloc)
    constraints___ConstraintBuilderVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem constraints___ConstraintBuilderVisitor_vtable[28];
static CPyVTableItem constraints___ConstraintBuilderVisitor_type_visitor___TypeVisitor_trait_vtable[21];
static size_t constraints___ConstraintBuilderVisitor_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_constraints___ConstraintBuilderVisitor_trait_vtable_setup(void)
{
    CPyVTableItem constraints___ConstraintBuilderVisitor_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(constraints___ConstraintBuilderVisitor_type_visitor___TypeVisitor_trait_vtable, constraints___ConstraintBuilderVisitor_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(constraints___ConstraintBuilderVisitor_type_visitor___TypeVisitor_trait_vtable));
    size_t constraints___ConstraintBuilderVisitor_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(constraints___ConstraintBuilderVisitor_type_visitor___TypeVisitor_offset_table, constraints___ConstraintBuilderVisitor_type_visitor___TypeVisitor_offset_table_scratch, sizeof(constraints___ConstraintBuilderVisitor_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem constraints___ConstraintBuilderVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)constraints___ConstraintBuilderVisitor_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)constraints___ConstraintBuilderVisitor_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor_____init__,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_unbound_type,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_any,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_none_type,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_erased_type,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_deleted_type,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_literal_type,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_partial_type,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_type_var,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_param_spec,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_unpack_type,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_parameters,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_instance,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___infer_constraints_from_protocol_members,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_callable_type,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___infer_against_overloaded,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_tuple_type,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_typeddict_type,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_union_type,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_type_alias_type,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___infer_against_any,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_overloaded,
        (CPyVTableItem)CPyDef_constraints___ConstraintBuilderVisitor___visit_type_type,
    };
    memcpy(constraints___ConstraintBuilderVisitor_vtable, constraints___ConstraintBuilderVisitor_vtable_scratch, sizeof(constraints___ConstraintBuilderVisitor_vtable));
    return 1;
}

static PyObject *
constraints___ConstraintBuilderVisitor_get_actual(mypy___constraints___ConstraintBuilderVisitorObject *self, void *closure);
static int
constraints___ConstraintBuilderVisitor_set_actual(mypy___constraints___ConstraintBuilderVisitorObject *self, PyObject *value, void *closure);
static PyObject *
constraints___ConstraintBuilderVisitor_get_direction(mypy___constraints___ConstraintBuilderVisitorObject *self, void *closure);
static int
constraints___ConstraintBuilderVisitor_set_direction(mypy___constraints___ConstraintBuilderVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef constraints___ConstraintBuilderVisitor_getseters[] = {
    {"actual",
     (getter)constraints___ConstraintBuilderVisitor_get_actual, (setter)constraints___ConstraintBuilderVisitor_set_actual,
     NULL, NULL},
    {"direction",
     (getter)constraints___ConstraintBuilderVisitor_get_direction, (setter)constraints___ConstraintBuilderVisitor_set_direction,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef constraints___ConstraintBuilderVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unbound_type",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_unbound_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_none_type",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_none_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_erased_type",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_erased_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_deleted_type",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_deleted_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_literal_type",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_partial_type",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_partial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_parameters",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_parameters,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"infer_constraints_from_protocol_members",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___infer_constraints_from_protocol_members,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"infer_against_overloaded",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___infer_against_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"infer_against_any",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___infer_against_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_type",
     (PyCFunction)CPyPy_constraints___ConstraintBuilderVisitor___visit_type_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_constraints___ConstraintBuilderVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ConstraintBuilderVisitor",
    .tp_new = constraints___ConstraintBuilderVisitor_new,
    .tp_dealloc = (destructor)constraints___ConstraintBuilderVisitor_dealloc,
    .tp_traverse = (traverseproc)constraints___ConstraintBuilderVisitor_traverse,
    .tp_clear = (inquiry)constraints___ConstraintBuilderVisitor_clear,
    .tp_getset = constraints___ConstraintBuilderVisitor_getseters,
    .tp_methods = constraints___ConstraintBuilderVisitor_methods,
    .tp_init = constraints___ConstraintBuilderVisitor_init,
    .tp_members = constraints___ConstraintBuilderVisitor_members,
    .tp_basicsize = sizeof(mypy___constraints___ConstraintBuilderVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___constraints___ConstraintBuilderVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___constraints___ConstraintBuilderVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_constraints___ConstraintBuilderVisitor_template = &CPyType_constraints___ConstraintBuilderVisitor_template_;

static PyObject *
constraints___ConstraintBuilderVisitor_setup(PyTypeObject *type)
{
    mypy___constraints___ConstraintBuilderVisitorObject *self;
    self = (mypy___constraints___ConstraintBuilderVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = constraints___ConstraintBuilderVisitor_vtable + 3;
    self->_direction = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor(PyObject *cpy_r_actual, CPyTagged cpy_r_direction)
{
    PyObject *self = constraints___ConstraintBuilderVisitor_setup(CPyType_constraints___ConstraintBuilderVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_constraints___ConstraintBuilderVisitor_____init__(self, cpy_r_actual, cpy_r_direction);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
constraints___ConstraintBuilderVisitor_get_actual(mypy___constraints___ConstraintBuilderVisitorObject *self, void *closure)
{
    if (unlikely(self->_actual == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'actual' of 'ConstraintBuilderVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_actual);
    PyObject *retval = self->_actual;
    return retval;
}

static int
constraints___ConstraintBuilderVisitor_set_actual(mypy___constraints___ConstraintBuilderVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConstraintBuilderVisitor' object attribute 'actual' cannot be deleted");
        return -1;
    }
    if (self->_actual != NULL) {
        CPy_DECREF(self->_actual);
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
    self->_actual = tmp;
    return 0;
}

static PyObject *
constraints___ConstraintBuilderVisitor_get_direction(mypy___constraints___ConstraintBuilderVisitorObject *self, void *closure)
{
    if (unlikely(self->_direction == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'direction' of 'ConstraintBuilderVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_direction);
    PyObject *retval = CPyTagged_StealAsObject(self->_direction);
    return retval;
}

static int
constraints___ConstraintBuilderVisitor_set_direction(mypy___constraints___ConstraintBuilderVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConstraintBuilderVisitor' object attribute 'direction' cannot be deleted");
        return -1;
    }
    if (self->_direction != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_direction);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_direction = tmp;
    return 0;
}
static PyMethodDef constraintsmodule_methods[] = {
    {"infer_constraints_for_callable", (PyCFunction)CPyPy_constraints___infer_constraints_for_callable, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"infer_constraints", (PyCFunction)CPyPy_constraints___infer_constraints, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_infer_constraints", (PyCFunction)CPyPy_constraints____infer_constraints, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"infer_constraints_if_possible", (PyCFunction)CPyPy_constraints___infer_constraints_if_possible, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"select_trivial", (PyCFunction)CPyPy_constraints___select_trivial, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"merge_with_any", (PyCFunction)CPyPy_constraints___merge_with_any, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"handle_recursive_union", (PyCFunction)CPyPy_constraints___handle_recursive_union, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"any_constraints", (PyCFunction)CPyPy_constraints___any_constraints, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"filter_satisfiable", (PyCFunction)CPyPy_constraints___filter_satisfiable, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_same_constraints", (PyCFunction)CPyPy_constraints___is_same_constraints, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_same_constraint", (PyCFunction)CPyPy_constraints___is_same_constraint, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_similar_constraints", (PyCFunction)CPyPy_constraints___is_similar_constraints, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_is_similar_constraints", (PyCFunction)CPyPy_constraints____is_similar_constraints, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"simplify_away_incomplete_types", (PyCFunction)CPyPy_constraints___simplify_away_incomplete_types, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_complete_type", (PyCFunction)CPyPy_constraints___is_complete_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"neg_op", (PyCFunction)CPyPy_constraints___neg_op, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_matching_overload_item", (PyCFunction)CPyPy_constraints___find_matching_overload_item, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_matching_overload_items", (PyCFunction)CPyPy_constraints___find_matching_overload_items, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_and_build_constraints_for_unpack", (PyCFunction)CPyPy_constraints___find_and_build_constraints_for_unpack, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"build_constraints_for_unpack", (PyCFunction)CPyPy_constraints___build_constraints_for_unpack, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef constraintsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.constraints",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    constraintsmodule_methods
};

PyObject *CPyInit_mypy___constraints(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___constraints_internal) {
        Py_INCREF(CPyModule_mypy___constraints_internal);
        return CPyModule_mypy___constraints_internal;
    }
    CPyModule_mypy___constraints_internal = PyModule_Create(&constraintsmodule);
    if (unlikely(CPyModule_mypy___constraints_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___constraints_internal, "__name__");
    CPyStatic_constraints___globals = PyModule_GetDict(CPyModule_mypy___constraints_internal);
    if (unlikely(CPyStatic_constraints___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_constraints_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___constraints_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___constraints_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_constraints___Constraint);
    Py_CLEAR(CPyType_constraints___CompleteTypeVisitor);
    Py_CLEAR(CPyType_constraints___ConstraintBuilderVisitor);
    return NULL;
}

char CPyDef_constraints___Constraint_____init__(PyObject *cpy_r_self, PyObject *cpy_r_type_var, CPyTagged cpy_r_op, PyObject *cpy_r_target) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_type_var)->_id;
    CPy_INCREF(cpy_r_r0);
    ((mypy___constraints___ConstraintObject *)cpy_r_self)->_type_var = cpy_r_r0;
    CPyTagged_INCREF(cpy_r_op);
    CPyTagged_DECREF(((mypy___constraints___ConstraintObject *)cpy_r_self)->_op);
    ((mypy___constraints___ConstraintObject *)cpy_r_self)->_op = cpy_r_op;
    CPy_INCREF(cpy_r_target);
    ((mypy___constraints___ConstraintObject *)cpy_r_self)->_target = cpy_r_target;
    CPy_INCREF(cpy_r_type_var);
    ((mypy___constraints___ConstraintObject *)cpy_r_self)->_origin_type_var = cpy_r_type_var;
    return 1;
}

PyObject *CPyPy_constraints___Constraint_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"type_var", "op", "target", 0};
    PyObject *obj_type_var;
    PyObject *obj_op;
    PyObject *obj_target;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO", "__init__", kwlist, &obj_type_var, &obj_op, &obj_target)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___Constraint))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.Constraint", obj_self); 
        goto fail;
    }
    PyObject *arg_type_var;
    if (likely(PyObject_TypeCheck(obj_type_var, CPyType_types___TypeVarLikeType)))
        arg_type_var = obj_type_var;
    else {
        CPy_TypeError("mypy.types.TypeVarLikeType", obj_type_var); 
        goto fail;
    }
    CPyTagged arg_op;
    if (likely(PyLong_Check(obj_op)))
        arg_op = CPyTagged_BorrowFromObject(obj_op);
    else {
        CPy_TypeError("int", obj_op); goto fail;
    }
    PyObject *arg_target;
    if (likely(PyObject_TypeCheck(obj_target, CPyType_types___Type)))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypy.types.Type", obj_target); 
        goto fail;
    }
    char retval = CPyDef_constraints___Constraint_____init__(arg_self, arg_type_var, arg_op, arg_target);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "__init__", 71, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___Constraint_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_op_str;
    CPyTagged cpy_r_r1;
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
    cpy_r_r0 = CPyStatics[1605]; /* '<:' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_op_str = cpy_r_r0;
    cpy_r_r1 = ((mypy___constraints___ConstraintObject *)cpy_r_self)->_op;
    cpy_r_r2 = cpy_r_r1 == 2;
    if (cpy_r_r2) {
        goto CPyL7;
    } else
        goto CPyL2;
CPyL1: ;
    cpy_r_r3 = CPyStatics[1606]; /* ':>' */
    CPy_INCREF(cpy_r_r3);
    cpy_r_op_str = cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = ((mypy___constraints___ConstraintObject *)cpy_r_self)->_type_var;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = PyObject_Str(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "__repr__", 81, CPyStatic_constraints___globals);
        goto CPyL8;
    }
    cpy_r_r6 = CPyStatics[295]; /* ' ' */
    cpy_r_r7 = CPyStatics[295]; /* ' ' */
    cpy_r_r8 = ((mypy___constraints___ConstraintObject *)cpy_r_self)->_target;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = PyObject_Str(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "__repr__", 81, CPyStatic_constraints___globals);
        goto CPyL9;
    }
    cpy_r_r10 = CPyStr_Build(5, cpy_r_r5, cpy_r_r6, cpy_r_op_str, cpy_r_r7, cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_op_str);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "__repr__", 81, CPyStatic_constraints___globals);
        goto CPyL6;
    }
    return cpy_r_r10;
CPyL6: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL7: ;
    CPy_DECREF(cpy_r_op_str);
    goto CPyL1;
CPyL8: ;
    CPy_DecRef(cpy_r_op_str);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_op_str);
    CPy_DecRef(cpy_r_r5);
    goto CPyL6;
}

PyObject *CPyPy_constraints___Constraint_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___Constraint))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.Constraint", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___Constraint_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "__repr__", 77, CPyStatic_constraints___globals);
    return NULL;
}

CPyTagged CPyDef_constraints___Constraint_____hash__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T3OIO cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    cpy_r_r0 = ((mypy___constraints___ConstraintObject *)cpy_r_self)->_type_var;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___constraints___ConstraintObject *)cpy_r_self)->_op;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___constraints___ConstraintObject *)cpy_r_self)->_target;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3.f0 = cpy_r_r0;
    cpy_r_r3.f1 = cpy_r_r1;
    cpy_r_r3.f2 = cpy_r_r2;
    CPy_INCREF(cpy_r_r3.f0);
    CPyTagged_INCREF(cpy_r_r3.f1);
    CPy_INCREF(cpy_r_r3.f2);
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = PyTuple_New(3);
    if (unlikely(cpy_r_r4 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1780 = cpy_r_r3.f0;
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp1780);
    PyObject *__tmp1781 = CPyTagged_StealAsObject(cpy_r_r3.f1);
    PyTuple_SET_ITEM(cpy_r_r4, 1, __tmp1781);
    PyObject *__tmp1782 = cpy_r_r3.f2;
    PyTuple_SET_ITEM(cpy_r_r4, 2, __tmp1782);
    cpy_r_r5 = CPyObject_Hash(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "__hash__", 84, CPyStatic_constraints___globals);
        goto CPyL2;
    }
    return cpy_r_r5;
CPyL2: ;
    cpy_r_r6 = CPY_INT_TAG;
    return cpy_r_r6;
}

PyObject *CPyPy_constraints___Constraint_____hash__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__hash__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___Constraint))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.Constraint", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_constraints___Constraint_____hash__(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "__hash__", 83, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___Constraint_____eq__(PyObject *cpy_r_self, PyObject *cpy_r_other) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T3OIO cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T3OIO cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    int64_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    cpy_r_r0 = (PyObject *)CPyType_constraints___Constraint;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_other)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r4);
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = ((mypy___constraints___ConstraintObject *)cpy_r_self)->_type_var;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypy___constraints___ConstraintObject *)cpy_r_self)->_op;
    CPyTagged_INCREF(cpy_r_r6);
    cpy_r_r7 = ((mypy___constraints___ConstraintObject *)cpy_r_self)->_target;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8.f0 = cpy_r_r5;
    cpy_r_r8.f1 = cpy_r_r6;
    cpy_r_r8.f2 = cpy_r_r7;
    CPy_INCREF(cpy_r_r8.f0);
    CPyTagged_INCREF(cpy_r_r8.f1);
    CPy_INCREF(cpy_r_r8.f2);
    CPy_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    if (likely(Py_TYPE(cpy_r_other) == CPyType_constraints___Constraint))
        cpy_r_r9 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "__eq__", 89, CPyStatic_constraints___globals, "mypy.constraints.Constraint", cpy_r_other);
        goto CPyL19;
    }
    cpy_r_r10 = ((mypy___constraints___ConstraintObject *)cpy_r_r9)->_type_var;
    CPy_INCREF(cpy_r_r10);
    if (likely(Py_TYPE(cpy_r_other) == CPyType_constraints___Constraint))
        cpy_r_r11 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "__eq__", 89, CPyStatic_constraints___globals, "mypy.constraints.Constraint", cpy_r_other);
        goto CPyL20;
    }
    cpy_r_r12 = ((mypy___constraints___ConstraintObject *)cpy_r_r11)->_op;
    CPyTagged_INCREF(cpy_r_r12);
    if (likely(Py_TYPE(cpy_r_other) == CPyType_constraints___Constraint))
        cpy_r_r13 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "__eq__", 89, CPyStatic_constraints___globals, "mypy.constraints.Constraint", cpy_r_other);
        goto CPyL21;
    }
    cpy_r_r14 = ((mypy___constraints___ConstraintObject *)cpy_r_r13)->_target;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15.f0 = cpy_r_r10;
    cpy_r_r15.f1 = cpy_r_r12;
    cpy_r_r15.f2 = cpy_r_r14;
    CPy_INCREF(cpy_r_r15.f0);
    CPyTagged_INCREF(cpy_r_r15.f1);
    CPy_INCREF(cpy_r_r15.f2);
    CPy_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r8.f0;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = cpy_r_r8.f1;
    CPyTagged_INCREF(cpy_r_r17);
    cpy_r_r18 = cpy_r_r8.f2;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r8.f0);
    CPyTagged_DECREF(cpy_r_r8.f1);
    CPy_DECREF(cpy_r_r8.f2);
    cpy_r_r19 = cpy_r_r15.f0;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = cpy_r_r15.f1;
    CPyTagged_INCREF(cpy_r_r20);
    cpy_r_r21 = cpy_r_r15.f2;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r15.f0);
    CPyTagged_DECREF(cpy_r_r15.f1);
    CPy_DECREF(cpy_r_r15.f2);
    cpy_r_r22 = CPyDef_types___TypeVarId_____eq__(cpy_r_r16, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "__eq__", 89, CPyStatic_constraints___globals);
        goto CPyL22;
    }
    cpy_r_r23 = PyObject_IsTrue(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/constraints.py", "__eq__", 89, CPyStatic_constraints___globals);
        goto CPyL22;
    }
    cpy_r_r25 = cpy_r_r23;
    if (!cpy_r_r25) goto CPyL23;
    cpy_r_r26 = cpy_r_r17 & 1;
    cpy_r_r27 = cpy_r_r26 == 0;
    if (!cpy_r_r27) goto CPyL10;
    cpy_r_r28 = cpy_r_r17 == cpy_r_r20;
    CPyTagged_DECREF(cpy_r_r17);
    CPyTagged_DECREF(cpy_r_r20);
    cpy_r_r29 = cpy_r_r28;
    goto CPyL11;
CPyL10: ;
    cpy_r_r30 = CPyTagged_IsEq_(cpy_r_r17, cpy_r_r20);
    CPyTagged_DECREF(cpy_r_r17);
    CPyTagged_DECREF(cpy_r_r20);
    cpy_r_r29 = cpy_r_r30;
CPyL11: ;
    if (!cpy_r_r29) goto CPyL24;
    cpy_r_r31 = PyObject_RichCompare(cpy_r_r18, cpy_r_r21, 2);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "__eq__", 89, CPyStatic_constraints___globals);
        goto CPyL18;
    }
    cpy_r_r32 = PyObject_IsTrue(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/constraints.py", "__eq__", 89, CPyStatic_constraints___globals);
        goto CPyL18;
    }
    cpy_r_r34 = cpy_r_r32;
    if (cpy_r_r34) goto CPyL16;
CPyL15: ;
    cpy_r_r35 = 0;
    goto CPyL17;
CPyL16: ;
    cpy_r_r35 = 1;
CPyL17: ;
    cpy_r_r36 = cpy_r_r35 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r36);
    return cpy_r_r36;
CPyL18: ;
    cpy_r_r37 = NULL;
    return cpy_r_r37;
CPyL19: ;
    CPy_DecRef(cpy_r_r8.f0);
    CPyTagged_DecRef(cpy_r_r8.f1);
    CPy_DecRef(cpy_r_r8.f2);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_r8.f0);
    CPyTagged_DecRef(cpy_r_r8.f1);
    CPy_DecRef(cpy_r_r8.f2);
    CPy_DecRef(cpy_r_r10);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_r8.f0);
    CPyTagged_DecRef(cpy_r_r8.f1);
    CPy_DecRef(cpy_r_r8.f2);
    CPy_DecRef(cpy_r_r10);
    CPyTagged_DecRef(cpy_r_r12);
    goto CPyL18;
CPyL22: ;
    CPyTagged_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    CPyTagged_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r21);
    goto CPyL18;
CPyL23: ;
    CPyTagged_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    CPyTagged_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r21);
    goto CPyL15;
CPyL24: ;
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r21);
    goto CPyL15;
}

PyObject *CPyPy_constraints___Constraint_____eq__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"other", 0};
    static CPyArg_Parser parser = {"O:__eq__", kwlist, 0};
    PyObject *obj_other;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_other)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___Constraint))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.Constraint", obj_self); 
        goto fail;
    }
    PyObject *arg_other = obj_other;
    PyObject *retval = CPyDef_constraints___Constraint_____eq__(arg_self, arg_other);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "__eq__", 86, CPyStatic_constraints___globals);
    return NULL;
}

char CPyDef_constraints___Constraint_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    ((mypy___constraints___ConstraintObject *)cpy_r___mypyc_self__)->_op = 0;
    return 1;
}

PyObject *CPyPy_constraints___Constraint_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_constraints___Constraint))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.constraints.Constraint", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_constraints___Constraint_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "__mypyc_defaults_setup", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___Constraint_____ne__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_rhs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyDef_constraints___Constraint_____eq__(cpy_r___mypyc_self__, cpy_r_rhs);
    if (cpy_r_r0 == NULL) goto CPyL5;
    cpy_r_r1 = (PyObject *)&_Py_NotImplementedStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (cpy_r_r2) goto CPyL6;
    cpy_r_r3 = PyObject_Not(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = cpy_r_r3;
    cpy_r_r6 = cpy_r_r5 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r6);
    return cpy_r_r6;
CPyL4: ;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_constraints___Constraint_____ne__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"rhs", 0};
    static CPyArg_Parser parser = {"O:__ne__", kwlist, 0};
    PyObject *obj_rhs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rhs)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_constraints___Constraint))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.constraints.Constraint", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_rhs = obj_rhs;
    PyObject *retval = CPyDef_constraints___Constraint_____ne__(arg___mypyc_self__, arg_rhs);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "__ne__", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___infer_constraints_for_callable(PyObject *cpy_r_callee, PyObject *cpy_r_arg_types, PyObject *cpy_r_arg_kinds, PyObject *cpy_r_formal_to_actual, PyObject *cpy_r_context) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_constraints;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_mapper;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_actuals;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_unpack_type;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_actual_types;
    CPyTagged cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    CPyTagged cpy_r_actual;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_actual_arg_type;
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
    int32_t cpy_r_r47;
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_unpacked_type;
    PyObject *cpy_r_r54;
    CPyPtr cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyTagged cpy_r_r61;
    CPyTagged cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_inner_unpack;
    PyObject *cpy_r_r76;
    CPyPtr cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_inner_unpacked_type;
    PyObject *cpy_r_r83;
    CPyPtr cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyPtr cpy_r_r90;
    int64_t cpy_r_r91;
    CPyTagged cpy_r_r92;
    CPyTagged cpy_r_r93;
    CPyTagged cpy_r_suffix_len;
    PyObject *cpy_r_r94;
    CPyTagged cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    CPyTagged cpy_r_r100;
    CPyTagged cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    int32_t cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    CPyTagged cpy_r_r108;
    CPyPtr cpy_r_r109;
    int64_t cpy_r_r110;
    CPyTagged cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    CPyTagged cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_actual_type;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r134;
    CPyTagged cpy_r_r135;
    CPyTagged cpy_r_r136;
    CPyTagged cpy_r_r137;
    PyObject *cpy_r_r138;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 103, CPyStatic_constraints___globals);
        goto CPyL81;
    }
    cpy_r_constraints = cpy_r_r0;
    cpy_r_r1 = CPyDef_argmap___ArgTypeExpander(cpy_r_context);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 104, CPyStatic_constraints___globals);
        goto CPyL82;
    }
    cpy_r_mapper = cpy_r_r1;
    cpy_r_r2 = 0;
    cpy_r_i = 0;
    cpy_r_r3 = 0;
CPyL3: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_formal_to_actual)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL83;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_formal_to_actual, cpy_r_r3);
    if (likely(PyList_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 106, CPyStatic_constraints___globals, "list", cpy_r_r8);
        goto CPyL84;
    }
    cpy_r_actuals = cpy_r_r9;
    cpy_r_r10 = ((mypy___types___CallableTypeObject *)cpy_r_callee)->_arg_types;
    cpy_r_r11 = CPyList_GetItemBorrow(cpy_r_r10, cpy_r_i);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 107, CPyStatic_constraints___globals);
        goto CPyL85;
    }
    cpy_r_r12 = (PyObject *)CPyType_types___UnpackType;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_r11)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (!cpy_r_r15) goto CPyL60;
    cpy_r_r16 = ((mypy___types___CallableTypeObject *)cpy_r_callee)->_arg_types;
    cpy_r_r17 = CPyList_GetItem(cpy_r_r16, cpy_r_i);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 108, CPyStatic_constraints___globals);
        goto CPyL85;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_types___Type)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 108, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r17);
        goto CPyL85;
    }
    cpy_r_unpack_type = cpy_r_r18;
    cpy_r_r19 = (PyObject *)CPyType_types___UnpackType;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_unpack_type)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    if (cpy_r_r22) {
        goto CPyL12;
    } else
        goto CPyL86;
CPyL10: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 109, CPyStatic_constraints___globals);
        goto CPyL81;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r24 = PyList_New(0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 114, CPyStatic_constraints___globals);
        goto CPyL87;
    }
    cpy_r_actual_types = cpy_r_r24;
    cpy_r_r25 = 0;
CPyL14: ;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_actuals)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = (Py_ssize_t)cpy_r_r25 < (Py_ssize_t)cpy_r_r28;
    if (!cpy_r_r29) goto CPyL88;
    cpy_r_r30 = CPyList_GetItemUnsafe(cpy_r_actuals, cpy_r_r25);
    if (likely(PyLong_Check(cpy_r_r30)))
        cpy_r_r31 = CPyTagged_FromObject(cpy_r_r30);
    else {
        CPy_TypeError("int", cpy_r_r30); cpy_r_r31 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 115, CPyStatic_constraints___globals);
        goto CPyL89;
    }
    cpy_r_actual = cpy_r_r31;
    CPyTagged_INCREF(cpy_r_actual);
    cpy_r_r32 = CPyTagged_StealAsObject(cpy_r_actual);
    cpy_r_r33 = PyObject_GetItem(cpy_r_arg_types, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 116, CPyStatic_constraints___globals);
        goto CPyL90;
    }
    if (PyObject_TypeCheck(cpy_r_r33, CPyType_types___Type))
        cpy_r_r34 = cpy_r_r33;
    else {
        cpy_r_r34 = NULL;
    }
    if (cpy_r_r34 != NULL) goto __LL1783;
    if (cpy_r_r33 == Py_None)
        cpy_r_r34 = cpy_r_r33;
    else {
        cpy_r_r34 = NULL;
    }
    if (cpy_r_r34 != NULL) goto __LL1783;
    CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 116, CPyStatic_constraints___globals, "mypy.types.Type or None", cpy_r_r33);
    goto CPyL90;
__LL1783: ;
    cpy_r_actual_arg_type = cpy_r_r34;
    cpy_r_r35 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r36 = cpy_r_actual_arg_type == cpy_r_r35;
    if (cpy_r_r36) goto CPyL91;
    if (likely(cpy_r_actual_arg_type != Py_None))
        cpy_r_r37 = cpy_r_actual_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 122, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_actual_arg_type);
        goto CPyL90;
    }
    cpy_r_r38 = CPyList_GetItem(cpy_r_arg_kinds, cpy_r_actual);
    CPyTagged_DECREF(cpy_r_actual);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 123, CPyStatic_constraints___globals);
        goto CPyL92;
    }
    if (likely(Py_TYPE(cpy_r_r38) == CPyType_nodes___ArgKind))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 123, CPyStatic_constraints___globals, "mypy.nodes.ArgKind", cpy_r_r38);
        goto CPyL92;
    }
    cpy_r_r40 = ((mypy___types___CallableTypeObject *)cpy_r_callee)->_arg_names;
    cpy_r_r41 = CPyList_GetItem(cpy_r_r40, cpy_r_i);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 124, CPyStatic_constraints___globals);
        goto CPyL93;
    }
    if (PyUnicode_Check(cpy_r_r41))
        cpy_r_r42 = cpy_r_r41;
    else {
        cpy_r_r42 = NULL;
    }
    if (cpy_r_r42 != NULL) goto __LL1784;
    if (cpy_r_r41 == Py_None)
        cpy_r_r42 = cpy_r_r41;
    else {
        cpy_r_r42 = NULL;
    }
    if (cpy_r_r42 != NULL) goto __LL1784;
    CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 124, CPyStatic_constraints___globals, "str or None", cpy_r_r41);
    goto CPyL93;
__LL1784: ;
    cpy_r_r43 = ((mypy___types___CallableTypeObject *)cpy_r_callee)->_arg_kinds;
    cpy_r_r44 = CPyList_GetItem(cpy_r_r43, cpy_r_i);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 125, CPyStatic_constraints___globals);
        goto CPyL94;
    }
    if (likely(Py_TYPE(cpy_r_r44) == CPyType_nodes___ArgKind))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 125, CPyStatic_constraints___globals, "mypy.nodes.ArgKind", cpy_r_r44);
        goto CPyL94;
    }
    cpy_r_r46 = CPyDef_argmap___ArgTypeExpander___expand_actual_type(cpy_r_mapper, cpy_r_r37, cpy_r_r39, cpy_r_r42, cpy_r_r45);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 121, CPyStatic_constraints___globals);
        goto CPyL89;
    }
    cpy_r_r47 = PyList_Append(cpy_r_actual_types, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 120, CPyStatic_constraints___globals);
        goto CPyL89;
    }
CPyL28: ;
    cpy_r_r49 = cpy_r_r25 + 2;
    cpy_r_r25 = cpy_r_r49;
    goto CPyL14;
CPyL29: ;
    if (likely(Py_TYPE(cpy_r_unpack_type) == CPyType_types___UnpackType))
        cpy_r_r50 = cpy_r_unpack_type;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 129, CPyStatic_constraints___globals, "mypy.types.UnpackType", cpy_r_unpack_type);
        goto CPyL95;
    }
    cpy_r_r51 = ((mypy___types___UnpackTypeObject *)cpy_r_r50)->_type;
    CPy_INCREF(cpy_r_r51);
    CPy_DECREF(cpy_r_unpack_type);
    cpy_r_r52 = CPyDef_types___get_proper_type(cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 129, CPyStatic_constraints___globals);
        goto CPyL96;
    }
    if (likely(cpy_r_r52 != Py_None))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 129, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_r52);
        goto CPyL96;
    }
    cpy_r_unpacked_type = cpy_r_r53;
    cpy_r_r54 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r55 = (CPyPtr)&((PyObject *)cpy_r_unpacked_type)->ob_type;
    cpy_r_r56 = *(PyObject * *)cpy_r_r55;
    cpy_r_r57 = cpy_r_r56 == cpy_r_r54;
    if (!cpy_r_r57) goto CPyL38;
    CPy_INCREF(cpy_r_unpacked_type);
    if (likely(Py_TYPE(cpy_r_unpacked_type) == CPyType_types___TypeVarTupleType))
        cpy_r_r58 = cpy_r_unpacked_type;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 133, CPyStatic_constraints___globals, "mypy.types.TypeVarTupleType", cpy_r_unpacked_type);
        goto CPyL97;
    }
    if (likely(Py_TYPE(cpy_r_unpacked_type) == CPyType_types___TypeVarTupleType))
        cpy_r_r59 = cpy_r_unpacked_type;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 135, CPyStatic_constraints___globals, "mypy.types.TypeVarTupleType", cpy_r_unpacked_type);
        goto CPyL98;
    }
    cpy_r_r60 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_r59)->_tuple_fallback;
    CPy_INCREF(cpy_r_r60);
    CPy_DECREF(cpy_r_unpacked_type);
    cpy_r_r61 = CPY_INT_TAG;
    cpy_r_r62 = CPY_INT_TAG;
    cpy_r_r63 = 2;
    cpy_r_r64 = CPyDef_types___TupleType(cpy_r_actual_types, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_actual_types);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 135, CPyStatic_constraints___globals);
        goto CPyL99;
    }
    cpy_r_r65 = CPyDef_constraints___Constraint(cpy_r_r58, 2, cpy_r_r64);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 132, CPyStatic_constraints___globals);
        goto CPyL100;
    }
    cpy_r_r66 = PyList_Append(cpy_r_constraints, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 131, CPyStatic_constraints___globals);
        goto CPyL100;
    } else
        goto CPyL79;
CPyL38: ;
    cpy_r_r68 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r69 = (CPyPtr)&((PyObject *)cpy_r_unpacked_type)->ob_type;
    cpy_r_r70 = *(PyObject * *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 == cpy_r_r68;
    if (!cpy_r_r71) goto CPyL101;
    if (likely(Py_TYPE(cpy_r_unpacked_type) == CPyType_types___TupleType))
        cpy_r_r72 = cpy_r_unpacked_type;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 142, CPyStatic_constraints___globals, "mypy.types.TupleType", cpy_r_unpacked_type);
        goto CPyL97;
    }
    cpy_r_r73 = ((mypy___types___TupleTypeObject *)cpy_r_r72)->_items;
    cpy_r_r74 = CPyList_GetItemShort(cpy_r_r73, 0);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 142, CPyStatic_constraints___globals);
        goto CPyL97;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r74, CPyType_types___Type)))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 142, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r74);
        goto CPyL97;
    }
    cpy_r_inner_unpack = cpy_r_r75;
    cpy_r_r76 = (PyObject *)CPyType_types___UnpackType;
    cpy_r_r77 = (CPyPtr)&((PyObject *)cpy_r_inner_unpack)->ob_type;
    cpy_r_r78 = *(PyObject * *)cpy_r_r77;
    cpy_r_r79 = cpy_r_r78 == cpy_r_r76;
    if (cpy_r_r79) {
        goto CPyL45;
    } else
        goto CPyL102;
CPyL43: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r80 = 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 143, CPyStatic_constraints___globals);
        goto CPyL81;
    }
    CPy_Unreachable();
CPyL45: ;
    if (likely(Py_TYPE(cpy_r_inner_unpack) == CPyType_types___UnpackType))
        cpy_r_r81 = cpy_r_inner_unpack;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 144, CPyStatic_constraints___globals, "mypy.types.UnpackType", cpy_r_inner_unpack);
        goto CPyL103;
    }
    cpy_r_r82 = ((mypy___types___UnpackTypeObject *)cpy_r_r81)->_type;
    CPy_INCREF(cpy_r_r82);
    CPy_DECREF(cpy_r_inner_unpack);
    cpy_r_inner_unpacked_type = cpy_r_r82;
    cpy_r_r83 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r84 = (CPyPtr)&((PyObject *)cpy_r_inner_unpacked_type)->ob_type;
    cpy_r_r85 = *(PyObject * *)cpy_r_r84;
    cpy_r_r86 = cpy_r_r85 == cpy_r_r83;
    if (cpy_r_r86) {
        goto CPyL49;
    } else
        goto CPyL104;
CPyL47: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r87 = 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 145, CPyStatic_constraints___globals);
        goto CPyL81;
    }
    CPy_Unreachable();
CPyL49: ;
    if (likely(Py_TYPE(cpy_r_unpacked_type) == CPyType_types___TupleType))
        cpy_r_r88 = cpy_r_unpacked_type;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 146, CPyStatic_constraints___globals, "mypy.types.TupleType", cpy_r_unpacked_type);
        goto CPyL105;
    }
    cpy_r_r89 = ((mypy___types___TupleTypeObject *)cpy_r_r88)->_items;
    cpy_r_r90 = (CPyPtr)&((PyVarObject *)cpy_r_r89)->ob_size;
    cpy_r_r91 = *(int64_t *)cpy_r_r90;
    cpy_r_r92 = cpy_r_r91 << 1;
    cpy_r_r93 = CPyTagged_Subtract(cpy_r_r92, 2);
    CPy_DECREF(cpy_r_unpacked_type);
    cpy_r_suffix_len = cpy_r_r93;
    CPy_INCREF(cpy_r_inner_unpacked_type);
    if (likely(Py_TYPE(cpy_r_inner_unpacked_type) == CPyType_types___TypeVarTupleType))
        cpy_r_r94 = cpy_r_inner_unpacked_type;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 149, CPyStatic_constraints___globals, "mypy.types.TypeVarTupleType", cpy_r_inner_unpacked_type);
        goto CPyL106;
    }
    cpy_r_r95 = CPyTagged_Negate(cpy_r_suffix_len);
    CPyTagged_DECREF(cpy_r_suffix_len);
    cpy_r_r96 = CPyList_GetSlice(cpy_r_actual_types, 0, cpy_r_r95);
    CPy_DECREF(cpy_r_actual_types);
    CPyTagged_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 151, CPyStatic_constraints___globals);
        goto CPyL107;
    }
    if (likely(PyList_Check(cpy_r_r96)))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 151, CPyStatic_constraints___globals, "list", cpy_r_r96);
        goto CPyL107;
    }
    if (likely(Py_TYPE(cpy_r_inner_unpacked_type) == CPyType_types___TypeVarTupleType))
        cpy_r_r98 = cpy_r_inner_unpacked_type;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 151, CPyStatic_constraints___globals, "mypy.types.TypeVarTupleType", cpy_r_inner_unpacked_type);
        goto CPyL108;
    }
    cpy_r_r99 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_r98)->_tuple_fallback;
    CPy_INCREF(cpy_r_r99);
    CPy_DECREF(cpy_r_inner_unpacked_type);
    cpy_r_r100 = CPY_INT_TAG;
    cpy_r_r101 = CPY_INT_TAG;
    cpy_r_r102 = 2;
    cpy_r_r103 = CPyDef_types___TupleType(cpy_r_r97, cpy_r_r99, cpy_r_r100, cpy_r_r101, cpy_r_r102);
    CPy_DECREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 151, CPyStatic_constraints___globals);
        goto CPyL109;
    }
    cpy_r_r104 = CPyDef_constraints___Constraint(cpy_r_r94, 2, cpy_r_r103);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 148, CPyStatic_constraints___globals);
        goto CPyL100;
    }
    cpy_r_r105 = PyList_Append(cpy_r_constraints, cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    cpy_r_r106 = cpy_r_r105 >= 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 147, CPyStatic_constraints___globals);
        goto CPyL100;
    } else
        goto CPyL79;
CPyL57: ;
    if (0) {
        goto CPyL79;
    } else
        goto CPyL110;
CPyL58: ;
    PyErr_SetString(PyExc_AssertionError, "mypy bug: unhandled constraint inference case");
    cpy_r_r107 = 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 155, CPyStatic_constraints___globals);
        goto CPyL81;
    }
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r108 = 0;
CPyL61: ;
    cpy_r_r109 = (CPyPtr)&((PyVarObject *)cpy_r_actuals)->ob_size;
    cpy_r_r110 = *(int64_t *)cpy_r_r109;
    cpy_r_r111 = cpy_r_r110 << 1;
    cpy_r_r112 = (Py_ssize_t)cpy_r_r108 < (Py_ssize_t)cpy_r_r111;
    if (!cpy_r_r112) goto CPyL111;
    cpy_r_r113 = CPyList_GetItemUnsafe(cpy_r_actuals, cpy_r_r108);
    if (likely(PyLong_Check(cpy_r_r113)))
        cpy_r_r114 = CPyTagged_FromObject(cpy_r_r113);
    else {
        CPy_TypeError("int", cpy_r_r113); cpy_r_r114 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r114 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 157, CPyStatic_constraints___globals);
        goto CPyL85;
    }
    cpy_r_actual = cpy_r_r114;
    CPyTagged_INCREF(cpy_r_actual);
    cpy_r_r115 = CPyTagged_StealAsObject(cpy_r_actual);
    cpy_r_r116 = PyObject_GetItem(cpy_r_arg_types, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 158, CPyStatic_constraints___globals);
        goto CPyL112;
    }
    if (PyObject_TypeCheck(cpy_r_r116, CPyType_types___Type))
        cpy_r_r117 = cpy_r_r116;
    else {
        cpy_r_r117 = NULL;
    }
    if (cpy_r_r117 != NULL) goto __LL1785;
    if (cpy_r_r116 == Py_None)
        cpy_r_r117 = cpy_r_r116;
    else {
        cpy_r_r117 = NULL;
    }
    if (cpy_r_r117 != NULL) goto __LL1785;
    CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 158, CPyStatic_constraints___globals, "mypy.types.Type or None", cpy_r_r116);
    goto CPyL112;
__LL1785: ;
    cpy_r_actual_arg_type = cpy_r_r117;
    cpy_r_r118 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r119 = cpy_r_actual_arg_type == cpy_r_r118;
    if (cpy_r_r119) goto CPyL113;
    if (likely(cpy_r_actual_arg_type != Py_None))
        cpy_r_r120 = cpy_r_actual_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 163, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_actual_arg_type);
        goto CPyL112;
    }
    cpy_r_r121 = CPyList_GetItem(cpy_r_arg_kinds, cpy_r_actual);
    CPyTagged_DECREF(cpy_r_actual);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 163, CPyStatic_constraints___globals);
        goto CPyL114;
    }
    if (likely(Py_TYPE(cpy_r_r121) == CPyType_nodes___ArgKind))
        cpy_r_r122 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 163, CPyStatic_constraints___globals, "mypy.nodes.ArgKind", cpy_r_r121);
        goto CPyL114;
    }
    cpy_r_r123 = ((mypy___types___CallableTypeObject *)cpy_r_callee)->_arg_names;
    cpy_r_r124 = CPyList_GetItem(cpy_r_r123, cpy_r_i);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 163, CPyStatic_constraints___globals);
        goto CPyL115;
    }
    if (PyUnicode_Check(cpy_r_r124))
        cpy_r_r125 = cpy_r_r124;
    else {
        cpy_r_r125 = NULL;
    }
    if (cpy_r_r125 != NULL) goto __LL1786;
    if (cpy_r_r124 == Py_None)
        cpy_r_r125 = cpy_r_r124;
    else {
        cpy_r_r125 = NULL;
    }
    if (cpy_r_r125 != NULL) goto __LL1786;
    CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 163, CPyStatic_constraints___globals, "str or None", cpy_r_r124);
    goto CPyL115;
__LL1786: ;
    cpy_r_r126 = ((mypy___types___CallableTypeObject *)cpy_r_callee)->_arg_kinds;
    cpy_r_r127 = CPyList_GetItem(cpy_r_r126, cpy_r_i);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 163, CPyStatic_constraints___globals);
        goto CPyL116;
    }
    if (likely(Py_TYPE(cpy_r_r127) == CPyType_nodes___ArgKind))
        cpy_r_r128 = cpy_r_r127;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 163, CPyStatic_constraints___globals, "mypy.nodes.ArgKind", cpy_r_r127);
        goto CPyL116;
    }
    cpy_r_r129 = CPyDef_argmap___ArgTypeExpander___expand_actual_type(cpy_r_mapper, cpy_r_r120, cpy_r_r122, cpy_r_r125, cpy_r_r128);
    CPy_DECREF(cpy_r_r120);
    CPy_DECREF(cpy_r_r122);
    CPy_DECREF(cpy_r_r125);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 162, CPyStatic_constraints___globals);
        goto CPyL85;
    }
    cpy_r_actual_type = cpy_r_r129;
    cpy_r_r130 = ((mypy___types___CallableTypeObject *)cpy_r_callee)->_arg_types;
    cpy_r_r131 = CPyList_GetItem(cpy_r_r130, cpy_r_i);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 165, CPyStatic_constraints___globals);
        goto CPyL117;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r131, CPyType_types___Type)))
        cpy_r_r132 = cpy_r_r131;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_for_callable", 165, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r131);
        goto CPyL117;
    }
    cpy_r_r133 = CPyDef_constraints___infer_constraints(cpy_r_r132, cpy_r_actual_type, 2);
    CPy_DECREF(cpy_r_r132);
    CPy_DECREF(cpy_r_actual_type);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 165, CPyStatic_constraints___globals);
        goto CPyL85;
    }
    cpy_r_c = cpy_r_r133;
    cpy_r_r134 = CPyList_Extend(cpy_r_constraints, cpy_r_c);
    CPy_DECREF(cpy_r_c);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 166, CPyStatic_constraints___globals);
        goto CPyL85;
    } else
        goto CPyL118;
CPyL78: ;
    cpy_r_r135 = cpy_r_r108 + 2;
    cpy_r_r108 = cpy_r_r135;
    goto CPyL61;
CPyL79: ;
    cpy_r_r136 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r136;
    cpy_r_i = cpy_r_r136;
    cpy_r_r137 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r137;
    goto CPyL3;
CPyL80: ;
    return cpy_r_constraints;
CPyL81: ;
    cpy_r_r138 = NULL;
    return cpy_r_r138;
CPyL82: ;
    CPy_DecRef(cpy_r_constraints);
    goto CPyL81;
CPyL83: ;
    CPy_DECREF(cpy_r_mapper);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL80;
CPyL84: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL81;
CPyL85: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_actuals);
    goto CPyL81;
CPyL86: ;
    CPy_DECREF(cpy_r_constraints);
    CPy_DECREF(cpy_r_mapper);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_actuals);
    CPy_DECREF(cpy_r_unpack_type);
    goto CPyL10;
CPyL87: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_actuals);
    CPy_DecRef(cpy_r_unpack_type);
    goto CPyL81;
CPyL88: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_actuals);
    goto CPyL29;
CPyL89: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_actuals);
    CPy_DecRef(cpy_r_unpack_type);
    CPy_DecRef(cpy_r_actual_types);
    goto CPyL81;
CPyL90: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_actuals);
    CPy_DecRef(cpy_r_unpack_type);
    CPy_DecRef(cpy_r_actual_types);
    CPyTagged_DecRef(cpy_r_actual);
    goto CPyL81;
CPyL91: ;
    CPyTagged_DECREF(cpy_r_actual);
    CPy_DECREF(cpy_r_actual_arg_type);
    goto CPyL28;
CPyL92: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_actuals);
    CPy_DecRef(cpy_r_unpack_type);
    CPy_DecRef(cpy_r_actual_types);
    CPy_DecRef(cpy_r_r37);
    goto CPyL81;
CPyL93: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_actuals);
    CPy_DecRef(cpy_r_unpack_type);
    CPy_DecRef(cpy_r_actual_types);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r39);
    goto CPyL81;
CPyL94: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_actuals);
    CPy_DecRef(cpy_r_unpack_type);
    CPy_DecRef(cpy_r_actual_types);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r42);
    goto CPyL81;
CPyL95: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPy_DecRef(cpy_r_unpack_type);
    CPy_DecRef(cpy_r_actual_types);
    goto CPyL81;
CPyL96: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPy_DecRef(cpy_r_actual_types);
    goto CPyL81;
CPyL97: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPy_DecRef(cpy_r_actual_types);
    CPy_DecRef(cpy_r_unpacked_type);
    goto CPyL81;
CPyL98: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPy_DecRef(cpy_r_actual_types);
    CPy_DecRef(cpy_r_unpacked_type);
    CPy_DecRef(cpy_r_r58);
    goto CPyL81;
CPyL99: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPy_DecRef(cpy_r_r58);
    goto CPyL81;
CPyL100: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    goto CPyL81;
CPyL101: ;
    CPy_DECREF(cpy_r_actual_types);
    CPy_DECREF(cpy_r_unpacked_type);
    goto CPyL57;
CPyL102: ;
    CPy_DECREF(cpy_r_constraints);
    CPy_DECREF(cpy_r_mapper);
    CPy_DECREF(cpy_r_actual_types);
    CPy_DECREF(cpy_r_unpacked_type);
    CPy_DECREF(cpy_r_inner_unpack);
    goto CPyL43;
CPyL103: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPy_DecRef(cpy_r_actual_types);
    CPy_DecRef(cpy_r_unpacked_type);
    CPy_DecRef(cpy_r_inner_unpack);
    goto CPyL81;
CPyL104: ;
    CPy_DECREF(cpy_r_constraints);
    CPy_DECREF(cpy_r_mapper);
    CPy_DECREF(cpy_r_actual_types);
    CPy_DECREF(cpy_r_unpacked_type);
    CPy_DECREF(cpy_r_inner_unpacked_type);
    goto CPyL47;
CPyL105: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPy_DecRef(cpy_r_actual_types);
    CPy_DecRef(cpy_r_unpacked_type);
    CPy_DecRef(cpy_r_inner_unpacked_type);
    goto CPyL81;
CPyL106: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPy_DecRef(cpy_r_actual_types);
    CPy_DecRef(cpy_r_inner_unpacked_type);
    CPyTagged_DecRef(cpy_r_suffix_len);
    goto CPyL81;
CPyL107: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPy_DecRef(cpy_r_inner_unpacked_type);
    CPy_DecRef(cpy_r_r94);
    goto CPyL81;
CPyL108: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPy_DecRef(cpy_r_inner_unpacked_type);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r97);
    goto CPyL81;
CPyL109: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPy_DecRef(cpy_r_r94);
    goto CPyL81;
CPyL110: ;
    CPy_DECREF(cpy_r_constraints);
    CPy_DECREF(cpy_r_mapper);
    goto CPyL58;
CPyL111: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_actuals);
    goto CPyL79;
CPyL112: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_actuals);
    CPyTagged_DecRef(cpy_r_actual);
    goto CPyL81;
CPyL113: ;
    CPyTagged_DECREF(cpy_r_actual);
    CPy_DECREF(cpy_r_actual_arg_type);
    goto CPyL78;
CPyL114: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_actuals);
    CPy_DecRef(cpy_r_r120);
    goto CPyL81;
CPyL115: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_actuals);
    CPy_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r122);
    goto CPyL81;
CPyL116: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_actuals);
    CPy_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r125);
    goto CPyL81;
CPyL117: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_mapper);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_actuals);
    CPy_DecRef(cpy_r_actual_type);
    goto CPyL81;
CPyL118: ;
    CPy_DECREF(cpy_r_r134);
    goto CPyL78;
}

PyObject *CPyPy_constraints___infer_constraints_for_callable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"callee", "arg_types", "arg_kinds", "formal_to_actual", "context", 0};
    static CPyArg_Parser parser = {"OOOOO:infer_constraints_for_callable", kwlist, 0};
    PyObject *obj_callee;
    PyObject *obj_arg_types;
    PyObject *obj_arg_kinds;
    PyObject *obj_formal_to_actual;
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_callee, &obj_arg_types, &obj_arg_kinds, &obj_formal_to_actual, &obj_context)) {
        return NULL;
    }
    PyObject *arg_callee;
    if (likely(Py_TYPE(obj_callee) == CPyType_types___CallableType))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_callee); 
        goto fail;
    }
    PyObject *arg_arg_types = obj_arg_types;
    PyObject *arg_arg_kinds;
    if (likely(PyList_Check(obj_arg_kinds)))
        arg_arg_kinds = obj_arg_kinds;
    else {
        CPy_TypeError("list", obj_arg_kinds); 
        goto fail;
    }
    PyObject *arg_formal_to_actual;
    if (likely(PyList_Check(obj_formal_to_actual)))
        arg_formal_to_actual = obj_formal_to_actual;
    else {
        CPy_TypeError("list", obj_formal_to_actual); 
        goto fail;
    }
    PyObject * arg_context;
    if (likely(PyTuple_Check(obj_context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("tuple", obj_context); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___infer_constraints_for_callable(arg_callee, arg_arg_types, arg_arg_kinds, arg_formal_to_actual, arg_context);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "infer_constraints_for_callable", 92, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___infer_constraints(PyObject *cpy_r_template, PyObject *cpy_r_actual, CPyTagged cpy_r_direction) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
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
    tuple_T2OO cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    tuple_T2OO cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    tuple_T2OO cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    cpy_r_r0 = 0;
    cpy_r_r1 = CPyStatic_typestate___type_state;
    if (likely(cpy_r_r1 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"type_state\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 195, CPyStatic_constraints___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = ((mypy___typestate___TypeStateObject *)cpy_r_r1)->_inferring;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = CPyTagged_Subtract(cpy_r_r6, 2);
    cpy_r_r8 = cpy_r_r7;
CPyL4: ;
    cpy_r_r9 = cpy_r_r8 & 1;
    cpy_r_r10 = cpy_r_r9 == 0;
    cpy_r_r11 = 0 & 1;
    cpy_r_r12 = cpy_r_r11 == 0;
    cpy_r_r13 = cpy_r_r10 & cpy_r_r12;
    if (!cpy_r_r13) goto CPyL6;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r8 >= (Py_ssize_t)0;
    cpy_r_r15 = cpy_r_r14;
    goto CPyL7;
CPyL6: ;
    cpy_r_r16 = CPyTagged_IsLt_(cpy_r_r8, 0);
    cpy_r_r17 = cpy_r_r16 ^ 1;
    cpy_r_r15 = cpy_r_r17;
CPyL7: ;
    if (!cpy_r_r15) goto CPyL57;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = cpy_r_r8 & 1;
    cpy_r_r22 = cpy_r_r21 == 0;
    cpy_r_r23 = cpy_r_r20 & 1;
    cpy_r_r24 = cpy_r_r23 == 0;
    cpy_r_r25 = cpy_r_r22 & cpy_r_r24;
    if (!cpy_r_r25) goto CPyL10;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r20;
    cpy_r_r27 = cpy_r_r26;
    goto CPyL11;
CPyL10: ;
    cpy_r_r28 = CPyTagged_IsLt_(cpy_r_r8, cpy_r_r20);
    cpy_r_r27 = cpy_r_r28;
CPyL11: ;
    if (!cpy_r_r27) goto CPyL57;
    CPyTagged_INCREF(cpy_r_r8);
    cpy_r_r29 = CPyTagged_StealAsObject(cpy_r_r8);
    if (likely(PyLong_Check(cpy_r_r29)))
        cpy_r_r30 = CPyTagged_FromObject(cpy_r_r29);
    else {
        CPy_TypeError("short_int", cpy_r_r29); cpy_r_r30 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 192, CPyStatic_constraints___globals);
        goto CPyL58;
    }
    cpy_r_r31 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r30);
    PyObject *__tmp1787;
    if (unlikely(!(PyTuple_Check(cpy_r_r31) && PyTuple_GET_SIZE(cpy_r_r31) == 2))) {
        __tmp1787 = NULL;
        goto __LL1788;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r31, 0), CPyType_types___Type)))
        __tmp1787 = PyTuple_GET_ITEM(cpy_r_r31, 0);
    else {
        __tmp1787 = NULL;
    }
    if (__tmp1787 == NULL) goto __LL1788;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r31, 1), CPyType_types___Type)))
        __tmp1787 = PyTuple_GET_ITEM(cpy_r_r31, 1);
    else {
        __tmp1787 = NULL;
    }
    if (__tmp1787 == NULL) goto __LL1788;
    __tmp1787 = cpy_r_r31;
__LL1788: ;
    if (unlikely(__tmp1787 == NULL)) {
        CPy_TypeError("tuple[mypy.types.Type, mypy.types.Type]", cpy_r_r31); cpy_r_r32 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1789 = PyTuple_GET_ITEM(cpy_r_r31, 0);
        CPy_INCREF(__tmp1789);
        PyObject *__tmp1790;
        if (likely(PyObject_TypeCheck(__tmp1789, CPyType_types___Type)))
            __tmp1790 = __tmp1789;
        else {
            CPy_TypeError("mypy.types.Type", __tmp1789); 
            __tmp1790 = NULL;
        }
        cpy_r_r32.f0 = __tmp1790;
        PyObject *__tmp1791 = PyTuple_GET_ITEM(cpy_r_r31, 1);
        CPy_INCREF(__tmp1791);
        PyObject *__tmp1792;
        if (likely(PyObject_TypeCheck(__tmp1791, CPyType_types___Type)))
            __tmp1792 = __tmp1791;
        else {
            CPy_TypeError("mypy.types.Type", __tmp1791); 
            __tmp1792 = NULL;
        }
        cpy_r_r32.f1 = __tmp1792;
    }
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32.f0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 192, CPyStatic_constraints___globals);
        goto CPyL58;
    }
    cpy_r_r33 = cpy_r_r32.f0;
    CPy_INCREF(cpy_r_r33);
    cpy_r_t = cpy_r_r33;
    cpy_r_r34 = cpy_r_r32.f1;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r32.f0);
    CPy_DECREF(cpy_r_r32.f1);
    cpy_r_a = cpy_r_r34;
    cpy_r_r35 = CPyDef_types___get_proper_type(cpy_r_template);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 193, CPyStatic_constraints___globals);
        goto CPyL59;
    }
    if (likely(cpy_r_r35 != Py_None))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints", 193, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_r35);
        goto CPyL59;
    }
    cpy_r_r37 = CPyDef_types___get_proper_type(cpy_r_t);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 193, CPyStatic_constraints___globals);
        goto CPyL60;
    }
    if (likely(cpy_r_r37 != Py_None))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints", 193, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_r37);
        goto CPyL60;
    }
    cpy_r_r39 = PyObject_RichCompare(cpy_r_r36, cpy_r_r38, 2);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 193, CPyStatic_constraints___globals);
        goto CPyL61;
    }
    if (unlikely(!PyBool_Check(cpy_r_r39))) {
        CPy_TypeError("bool", cpy_r_r39); cpy_r_r40 = 2;
    } else
        cpy_r_r40 = cpy_r_r39 == Py_True;
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 193, CPyStatic_constraints___globals);
        goto CPyL61;
    }
    if (cpy_r_r40) {
        goto CPyL22;
    } else
        goto CPyL62;
CPyL21: ;
    cpy_r_r41 = cpy_r_r40;
    goto CPyL29;
CPyL22: ;
    cpy_r_r42 = CPyDef_types___get_proper_type(cpy_r_actual);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 194, CPyStatic_constraints___globals);
        goto CPyL61;
    }
    if (likely(cpy_r_r42 != Py_None))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints", 194, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_r42);
        goto CPyL61;
    }
    cpy_r_r44 = CPyDef_types___get_proper_type(cpy_r_a);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 194, CPyStatic_constraints___globals);
        goto CPyL63;
    }
    if (likely(cpy_r_r44 != Py_None))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints", 194, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_r44);
        goto CPyL63;
    }
    cpy_r_r46 = PyObject_RichCompare(cpy_r_r43, cpy_r_r45, 2);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 194, CPyStatic_constraints___globals);
        goto CPyL58;
    }
    if (unlikely(!PyBool_Check(cpy_r_r46))) {
        CPy_TypeError("bool", cpy_r_r46); cpy_r_r47 = 2;
    } else
        cpy_r_r47 = cpy_r_r46 == Py_True;
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 194, CPyStatic_constraints___globals);
        goto CPyL58;
    }
    cpy_r_r41 = cpy_r_r47;
CPyL29: ;
    if (cpy_r_r41) {
        goto CPyL64;
    } else
        goto CPyL31;
CPyL30: ;
    cpy_r_r0 = 1;
    goto CPyL32;
CPyL31: ;
    cpy_r_r48 = cpy_r_r8 + -2;
    CPyTagged_DECREF(cpy_r_r8);
    cpy_r_r8 = cpy_r_r48;
    goto CPyL4;
CPyL32: ;
    if (!cpy_r_r0) goto CPyL35;
    cpy_r_r49 = PyList_New(0);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 197, CPyStatic_constraints___globals);
        goto CPyL56;
    }
    return cpy_r_r49;
CPyL35: ;
    cpy_r_r50 = CPyDef_types___has_recursive_types(cpy_r_template);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 198, CPyStatic_constraints___globals);
        goto CPyL56;
    }
    if (cpy_r_r50) goto CPyL39;
    cpy_r_r51 = CPyDef_types___get_proper_type(cpy_r_template);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 198, CPyStatic_constraints___globals);
        goto CPyL56;
    }
    cpy_r_r52 = (PyObject *)CPyType_types___Instance;
    cpy_r_r53 = (CPyPtr)&((PyObject *)cpy_r_r51)->ob_type;
    cpy_r_r54 = *(PyObject * *)cpy_r_r53;
    CPy_DECREF(cpy_r_r51);
    cpy_r_r55 = cpy_r_r54 == cpy_r_r52;
    if (!cpy_r_r55) goto CPyL54;
CPyL39: ;
    cpy_r_r56 = CPyDef_types___has_type_vars(cpy_r_template);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 201, CPyStatic_constraints___globals);
        goto CPyL56;
    }
    if (cpy_r_r56) goto CPyL43;
    cpy_r_r57 = PyList_New(0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 203, CPyStatic_constraints___globals);
        goto CPyL56;
    }
    return cpy_r_r57;
CPyL43: ;
    cpy_r_r58 = CPyStatic_typestate___type_state;
    if (likely(cpy_r_r58 != NULL)) goto CPyL46;
    PyErr_SetString(PyExc_NameError, "value for final name \"type_state\" was not set");
    cpy_r_r59 = 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 204, CPyStatic_constraints___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r60 = ((mypy___typestate___TypeStateObject *)cpy_r_r58)->_inferring;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61.f0 = cpy_r_template;
    cpy_r_r61.f1 = cpy_r_actual;
    CPy_INCREF(cpy_r_r61.f0);
    CPy_INCREF(cpy_r_r61.f1);
    cpy_r_r62 = PyTuple_New(2);
    if (unlikely(cpy_r_r62 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1793 = cpy_r_r61.f0;
    PyTuple_SET_ITEM(cpy_r_r62, 0, __tmp1793);
    PyObject *__tmp1794 = cpy_r_r61.f1;
    PyTuple_SET_ITEM(cpy_r_r62, 1, __tmp1794);
    cpy_r_r63 = PyList_Append(cpy_r_r60, cpy_r_r62);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 204, CPyStatic_constraints___globals);
        goto CPyL56;
    }
    cpy_r_r65 = CPyDef_constraints____infer_constraints(cpy_r_template, cpy_r_actual, cpy_r_direction);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 205, CPyStatic_constraints___globals);
        goto CPyL56;
    }
    cpy_r_res = cpy_r_r65;
    cpy_r_r66 = CPyStatic_typestate___type_state;
    if (unlikely(cpy_r_r66 == NULL)) {
        goto CPyL65;
    } else
        goto CPyL51;
CPyL49: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"type_state\" was not set");
    cpy_r_r67 = 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 206, CPyStatic_constraints___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r68 = ((mypy___typestate___TypeStateObject *)cpy_r_r66)->_inferring;
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69 = CPyList_PopLast(cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 206, CPyStatic_constraints___globals);
        goto CPyL66;
    }
    PyObject *__tmp1795;
    if (unlikely(!(PyTuple_Check(cpy_r_r69) && PyTuple_GET_SIZE(cpy_r_r69) == 2))) {
        __tmp1795 = NULL;
        goto __LL1796;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r69, 0), CPyType_types___Type)))
        __tmp1795 = PyTuple_GET_ITEM(cpy_r_r69, 0);
    else {
        __tmp1795 = NULL;
    }
    if (__tmp1795 == NULL) goto __LL1796;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r69, 1), CPyType_types___Type)))
        __tmp1795 = PyTuple_GET_ITEM(cpy_r_r69, 1);
    else {
        __tmp1795 = NULL;
    }
    if (__tmp1795 == NULL) goto __LL1796;
    __tmp1795 = cpy_r_r69;
__LL1796: ;
    if (unlikely(__tmp1795 == NULL)) {
        CPy_TypeError("tuple[mypy.types.Type, mypy.types.Type]", cpy_r_r69); cpy_r_r70 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1797 = PyTuple_GET_ITEM(cpy_r_r69, 0);
        CPy_INCREF(__tmp1797);
        PyObject *__tmp1798;
        if (likely(PyObject_TypeCheck(__tmp1797, CPyType_types___Type)))
            __tmp1798 = __tmp1797;
        else {
            CPy_TypeError("mypy.types.Type", __tmp1797); 
            __tmp1798 = NULL;
        }
        cpy_r_r70.f0 = __tmp1798;
        PyObject *__tmp1799 = PyTuple_GET_ITEM(cpy_r_r69, 1);
        CPy_INCREF(__tmp1799);
        PyObject *__tmp1800;
        if (likely(PyObject_TypeCheck(__tmp1799, CPyType_types___Type)))
            __tmp1800 = __tmp1799;
        else {
            CPy_TypeError("mypy.types.Type", __tmp1799); 
            __tmp1800 = NULL;
        }
        cpy_r_r70.f1 = __tmp1800;
    }
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70.f0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 206, CPyStatic_constraints___globals);
        goto CPyL66;
    } else
        goto CPyL67;
CPyL53: ;
    return cpy_r_res;
CPyL54: ;
    cpy_r_r71 = CPyDef_constraints____infer_constraints(cpy_r_template, cpy_r_actual, cpy_r_direction);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 208, CPyStatic_constraints___globals);
        goto CPyL56;
    }
    return cpy_r_r71;
CPyL56: ;
    cpy_r_r72 = NULL;
    return cpy_r_r72;
CPyL57: ;
    CPy_DECREF(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r8);
    goto CPyL32;
CPyL58: ;
    CPy_DecRef(cpy_r_r3);
    CPyTagged_DecRef(cpy_r_r8);
    goto CPyL56;
CPyL59: ;
    CPy_DecRef(cpy_r_r3);
    CPyTagged_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_a);
    goto CPyL56;
CPyL60: ;
    CPy_DecRef(cpy_r_r3);
    CPyTagged_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r36);
    goto CPyL56;
CPyL61: ;
    CPy_DecRef(cpy_r_r3);
    CPyTagged_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_a);
    goto CPyL56;
CPyL62: ;
    CPy_DECREF(cpy_r_a);
    goto CPyL21;
CPyL63: ;
    CPy_DecRef(cpy_r_r3);
    CPyTagged_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r43);
    goto CPyL56;
CPyL64: ;
    CPy_DECREF(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r8);
    goto CPyL30;
CPyL65: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL49;
CPyL66: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL56;
CPyL67: ;
    CPy_DECREF(cpy_r_r70.f0);
    CPy_DECREF(cpy_r_r70.f1);
    goto CPyL53;
}

PyObject *CPyPy_constraints___infer_constraints(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"template", "actual", "direction", 0};
    static CPyArg_Parser parser = {"OOO:infer_constraints", kwlist, 0};
    PyObject *obj_template;
    PyObject *obj_actual;
    PyObject *obj_direction;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_template, &obj_actual, &obj_direction)) {
        return NULL;
    }
    PyObject *arg_template;
    if (likely(PyObject_TypeCheck(obj_template, CPyType_types___Type)))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.Type", obj_template); 
        goto fail;
    }
    PyObject *arg_actual;
    if (likely(PyObject_TypeCheck(obj_actual, CPyType_types___Type)))
        arg_actual = obj_actual;
    else {
        CPy_TypeError("mypy.types.Type", obj_actual); 
        goto fail;
    }
    CPyTagged arg_direction;
    if (likely(PyLong_Check(obj_direction)))
        arg_direction = CPyTagged_BorrowFromObject(obj_direction);
    else {
        CPy_TypeError("int", obj_direction); goto fail;
    }
    PyObject *retval = CPyDef_constraints___infer_constraints(arg_template, arg_actual, arg_direction);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "infer_constraints", 171, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints____infer_constraints(PyObject *cpy_r_template, PyObject *cpy_r_actual, CPyTagged cpy_r_direction) {
    PyObject *cpy_r_orig_template;
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
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
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    CPyPtr cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    CPyPtr cpy_r_r51;
    int64_t cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_t_item;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyPtr cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyTagged cpy_r_r69;
    CPyPtr cpy_r_r70;
    int64_t cpy_r_r71;
    CPyTagged cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_a_item;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyPtr cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_items;
    CPyPtr cpy_r_r87;
    int64_t cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyTagged cpy_r_r90;
    CPyPtr cpy_r_r91;
    int64_t cpy_r_r92;
    CPyTagged cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_a_item_2;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    CPyTagged cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyPtr cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyPtr cpy_r_r109;
    int64_t cpy_r_r110;
    PyObject *cpy_r_r111;
    CPyTagged cpy_r_r112;
    CPyPtr cpy_r_r113;
    int64_t cpy_r_r114;
    CPyTagged cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_t_item_2;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    CPyTagged cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_result;
    CPyPtr cpy_r_r124;
    int64_t cpy_r_r125;
    CPyTagged cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    CPy_INCREF(cpy_r_template);
    cpy_r_orig_template = cpy_r_template;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_template);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 213, CPyStatic_constraints___globals);
        goto CPyL93;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 213, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL93;
    }
    cpy_r_template = cpy_r_r1;
    cpy_r_r2 = CPyDef_types___get_proper_type(cpy_r_actual);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 214, CPyStatic_constraints___globals);
        goto CPyL94;
    }
    if (likely(cpy_r_r2 != Py_None))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 214, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_r2);
        goto CPyL94;
    }
    cpy_r_actual = cpy_r_r3;
    cpy_r_r4 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_template)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL8;
    if (likely(Py_TYPE(cpy_r_template) == CPyType_types___UnionType))
        cpy_r_r8 = cpy_r_template;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 220, CPyStatic_constraints___globals, "mypy.types.UnionType", cpy_r_template);
        goto CPyL95;
    }
    cpy_r_r9 = ((mypy___types___UnionTypeObject *)cpy_r_r8)->_items;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_template);
    cpy_r_r10 = CPY_INT_TAG;
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = 2;
    cpy_r_r13 = CPyDef_typeops___make_simplified_union(cpy_r_r9, cpy_r_r10, cpy_r_r11, 1, cpy_r_r12);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 220, CPyStatic_constraints___globals);
        goto CPyL96;
    }
    cpy_r_template = cpy_r_r13;
CPyL8: ;
    cpy_r_r14 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL12;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___UnionType))
        cpy_r_r18 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 222, CPyStatic_constraints___globals, "mypy.types.UnionType", cpy_r_actual);
        goto CPyL95;
    }
    cpy_r_r19 = ((mypy___types___UnionTypeObject *)cpy_r_r18)->_items;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_actual);
    cpy_r_r20 = CPY_INT_TAG;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_typeops___make_simplified_union(cpy_r_r19, cpy_r_r20, cpy_r_r21, 1, cpy_r_r22);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 222, CPyStatic_constraints___globals);
        goto CPyL94;
    }
    cpy_r_actual = cpy_r_r23;
CPyL12: ;
    cpy_r_r24 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___AnyType))
        cpy_r_r28 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 228, CPyStatic_constraints___globals, "mypy.types.AnyType", cpy_r_actual);
        goto CPyL95;
    }
    cpy_r_r29 = ((mypy___types___AnyTypeObject *)cpy_r_r28)->_type_of_any;
    cpy_r_r30 = cpy_r_r29 == 18;
    if (cpy_r_r30) {
        goto CPyL97;
    } else
        goto CPyL17;
CPyL15: ;
    cpy_r_r31 = PyList_New(0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 229, CPyStatic_constraints___globals);
        goto CPyL92;
    }
    return cpy_r_r31;
CPyL17: ;
    cpy_r_r32 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_template)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (cpy_r_r35) {
        goto CPyL98;
    } else
        goto CPyL23;
CPyL18: ;
    if (likely(Py_TYPE(cpy_r_template) == CPyType_types___TypeVarType))
        cpy_r_r36 = cpy_r_template;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 239, CPyStatic_constraints___globals, "mypy.types.TypeVarType", cpy_r_template);
        goto CPyL99;
    }
    if (likely(PyObject_TypeCheck(cpy_r_actual, CPyType_types___ProperType)))
        cpy_r_r37 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 239, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_actual);
        goto CPyL100;
    }
    cpy_r_r38 = CPyDef_constraints___Constraint(cpy_r_r36, cpy_r_direction, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 239, CPyStatic_constraints___globals);
        goto CPyL92;
    }
    cpy_r_r39 = PyList_New(1);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 239, CPyStatic_constraints___globals);
        goto CPyL101;
    }
    cpy_r_r40 = (CPyPtr)&((PyListObject *)cpy_r_r39)->ob_item;
    cpy_r_r41 = *(CPyPtr *)cpy_r_r40;
    *(PyObject * *)cpy_r_r41 = cpy_r_r38;
    return cpy_r_r39;
CPyL23: ;
    cpy_r_r42 = cpy_r_direction == 0;
    if (!cpy_r_r42) goto CPyL35;
    cpy_r_r43 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r44 = (CPyPtr)&((PyObject *)cpy_r_template)->ob_type;
    cpy_r_r45 = *(PyObject * *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 == cpy_r_r43;
    if (cpy_r_r46) {
        goto CPyL102;
    } else
        goto CPyL35;
CPyL25: ;
    cpy_r_r47 = PyList_New(0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 245, CPyStatic_constraints___globals);
        goto CPyL103;
    }
    cpy_r_res = cpy_r_r47;
    if (likely(Py_TYPE(cpy_r_template) == CPyType_types___UnionType))
        cpy_r_r48 = cpy_r_template;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 246, CPyStatic_constraints___globals, "mypy.types.UnionType", cpy_r_template);
        goto CPyL104;
    }
    cpy_r_r49 = ((mypy___types___UnionTypeObject *)cpy_r_r48)->_items;
    CPy_INCREF(cpy_r_r49);
    CPy_DECREF(cpy_r_template);
    cpy_r_r50 = 0;
CPyL28: ;
    cpy_r_r51 = (CPyPtr)&((PyVarObject *)cpy_r_r49)->ob_size;
    cpy_r_r52 = *(int64_t *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 << 1;
    cpy_r_r54 = (Py_ssize_t)cpy_r_r50 < (Py_ssize_t)cpy_r_r53;
    if (!cpy_r_r54) goto CPyL105;
    cpy_r_r55 = CPyList_GetItemUnsafe(cpy_r_r49, cpy_r_r50);
    if (likely(PyObject_TypeCheck(cpy_r_r55, CPyType_types___Type)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 246, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r55);
        goto CPyL106;
    }
    cpy_r_t_item = cpy_r_r56;
    CPy_INCREF(cpy_r_actual);
    if (likely(PyObject_TypeCheck(cpy_r_actual, CPyType_types___ProperType)))
        cpy_r_r57 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 247, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_actual);
        goto CPyL107;
    }
    cpy_r_r58 = CPyDef_constraints___infer_constraints(cpy_r_t_item, cpy_r_r57, cpy_r_direction);
    CPy_DECREF(cpy_r_t_item);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 247, CPyStatic_constraints___globals);
        goto CPyL106;
    }
    cpy_r_r59 = CPyList_Extend(cpy_r_res, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 247, CPyStatic_constraints___globals);
        goto CPyL106;
    } else
        goto CPyL108;
CPyL33: ;
    cpy_r_r60 = cpy_r_r50 + 2;
    cpy_r_r50 = cpy_r_r60;
    goto CPyL28;
CPyL34: ;
    return cpy_r_res;
CPyL35: ;
    cpy_r_r61 = cpy_r_direction == 2;
    if (!cpy_r_r61) goto CPyL109;
    cpy_r_r62 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r63 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r64 = *(PyObject * *)cpy_r_r63;
    cpy_r_r65 = cpy_r_r64 == cpy_r_r62;
    if (cpy_r_r65) {
        goto CPyL110;
    } else
        goto CPyL109;
CPyL37: ;
    cpy_r_r66 = PyList_New(0);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 250, CPyStatic_constraints___globals);
        goto CPyL96;
    }
    cpy_r_res = cpy_r_r66;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___UnionType))
        cpy_r_r67 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 251, CPyStatic_constraints___globals, "mypy.types.UnionType", cpy_r_actual);
        goto CPyL111;
    }
    cpy_r_r68 = ((mypy___types___UnionTypeObject *)cpy_r_r67)->_items;
    CPy_INCREF(cpy_r_r68);
    CPy_DECREF(cpy_r_actual);
    cpy_r_r69 = 0;
CPyL40: ;
    cpy_r_r70 = (CPyPtr)&((PyVarObject *)cpy_r_r68)->ob_size;
    cpy_r_r71 = *(int64_t *)cpy_r_r70;
    cpy_r_r72 = cpy_r_r71 << 1;
    cpy_r_r73 = (Py_ssize_t)cpy_r_r69 < (Py_ssize_t)cpy_r_r72;
    if (!cpy_r_r73) goto CPyL112;
    cpy_r_r74 = CPyList_GetItemUnsafe(cpy_r_r68, cpy_r_r69);
    if (likely(PyObject_TypeCheck(cpy_r_r74, CPyType_types___Type)))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 251, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r74);
        goto CPyL113;
    }
    cpy_r_a_item = cpy_r_r75;
    cpy_r_r76 = CPyDef_constraints___infer_constraints(cpy_r_orig_template, cpy_r_a_item, cpy_r_direction);
    CPy_DECREF(cpy_r_a_item);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 252, CPyStatic_constraints___globals);
        goto CPyL113;
    }
    cpy_r_r77 = CPyList_Extend(cpy_r_res, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 252, CPyStatic_constraints___globals);
        goto CPyL113;
    } else
        goto CPyL114;
CPyL44: ;
    cpy_r_r78 = cpy_r_r69 + 2;
    cpy_r_r69 = cpy_r_r78;
    goto CPyL40;
CPyL45: ;
    return cpy_r_res;
CPyL46: ;
    cpy_r_r79 = cpy_r_direction == 0;
    if (!cpy_r_r79) goto CPyL60;
    cpy_r_r80 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r81 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r82 = *(PyObject * *)cpy_r_r81;
    cpy_r_r83 = cpy_r_r82 == cpy_r_r80;
    if (!cpy_r_r83) goto CPyL60;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___UnionType))
        cpy_r_r84 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 261, CPyStatic_constraints___globals, "mypy.types.UnionType", cpy_r_actual);
        goto CPyL103;
    }
    cpy_r_r85 = ((mypy___types___UnionTypeObject *)cpy_r_r84)->_items;
    CPy_INCREF(cpy_r_r85);
    CPy_DECREF(cpy_r_actual);
    cpy_r_r86 = CPyDef_constraints___simplify_away_incomplete_types(cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 261, CPyStatic_constraints___globals);
        goto CPyL115;
    }
    cpy_r_items = cpy_r_r86;
    cpy_r_r87 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r88 = *(int64_t *)cpy_r_r87;
    cpy_r_r89 = PyList_New(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 266, CPyStatic_constraints___globals);
        goto CPyL116;
    }
    cpy_r_r90 = 0;
CPyL52: ;
    cpy_r_r91 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r92 = *(int64_t *)cpy_r_r91;
    cpy_r_r93 = cpy_r_r92 << 1;
    cpy_r_r94 = (Py_ssize_t)cpy_r_r90 < (Py_ssize_t)cpy_r_r93;
    if (!cpy_r_r94) goto CPyL117;
    cpy_r_r95 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r90);
    if (likely(PyObject_TypeCheck(cpy_r_r95, CPyType_types___Type)))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 266, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r95);
        goto CPyL118;
    }
    cpy_r_a_item_2 = cpy_r_r96;
    CPy_INCREF(cpy_r_template);
    if (likely(PyObject_TypeCheck(cpy_r_template, CPyType_types___ProperType)))
        cpy_r_r97 = cpy_r_template;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 266, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_template);
        goto CPyL119;
    }
    cpy_r_r98 = CPyDef_constraints___infer_constraints_if_possible(cpy_r_r97, cpy_r_a_item_2, cpy_r_direction);
    CPy_DECREF(cpy_r_r97);
    CPy_DECREF(cpy_r_a_item_2);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 266, CPyStatic_constraints___globals);
        goto CPyL118;
    }
    cpy_r_r99 = CPyList_SetItemUnsafe(cpy_r_r89, cpy_r_r90, cpy_r_r98);
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 266, CPyStatic_constraints___globals);
        goto CPyL118;
    }
    cpy_r_r100 = cpy_r_r90 + 2;
    cpy_r_r90 = cpy_r_r100;
    goto CPyL52;
CPyL58: ;
    cpy_r_r101 = CPyDef_constraints___any_constraints(cpy_r_r89, 1);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 265, CPyStatic_constraints___globals);
        goto CPyL92;
    }
    return cpy_r_r101;
CPyL60: ;
    cpy_r_r102 = cpy_r_direction == 2;
    if (!cpy_r_r102) goto CPyL86;
    cpy_r_r103 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r104 = (CPyPtr)&((PyObject *)cpy_r_template)->ob_type;
    cpy_r_r105 = *(PyObject * *)cpy_r_r104;
    cpy_r_r106 = cpy_r_r105 == cpy_r_r103;
    if (!cpy_r_r106) goto CPyL86;
    if (likely(Py_TYPE(cpy_r_template) == CPyType_types___UnionType))
        cpy_r_r107 = cpy_r_template;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 276, CPyStatic_constraints___globals, "mypy.types.UnionType", cpy_r_template);
        goto CPyL103;
    }
    cpy_r_r108 = ((mypy___types___UnionTypeObject *)cpy_r_r107)->_items;
    CPy_INCREF(cpy_r_r108);
    cpy_r_r109 = (CPyPtr)&((PyVarObject *)cpy_r_r108)->ob_size;
    cpy_r_r110 = *(int64_t *)cpy_r_r109;
    cpy_r_r111 = PyList_New(cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 274, CPyStatic_constraints___globals);
        goto CPyL120;
    }
    cpy_r_r112 = 0;
CPyL65: ;
    cpy_r_r113 = (CPyPtr)&((PyVarObject *)cpy_r_r108)->ob_size;
    cpy_r_r114 = *(int64_t *)cpy_r_r113;
    cpy_r_r115 = cpy_r_r114 << 1;
    cpy_r_r116 = (Py_ssize_t)cpy_r_r112 < (Py_ssize_t)cpy_r_r115;
    if (!cpy_r_r116) goto CPyL121;
    cpy_r_r117 = CPyList_GetItemUnsafe(cpy_r_r108, cpy_r_r112);
    if (likely(PyObject_TypeCheck(cpy_r_r117, CPyType_types___Type)))
        cpy_r_r118 = cpy_r_r117;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 274, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r117);
        goto CPyL122;
    }
    cpy_r_t_item_2 = cpy_r_r118;
    CPy_INCREF(cpy_r_actual);
    if (likely(PyObject_TypeCheck(cpy_r_actual, CPyType_types___ProperType)))
        cpy_r_r119 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 275, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_actual);
        goto CPyL123;
    }
    cpy_r_r120 = CPyDef_constraints___infer_constraints_if_possible(cpy_r_t_item_2, cpy_r_r119, cpy_r_direction);
    CPy_DECREF(cpy_r_t_item_2);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 275, CPyStatic_constraints___globals);
        goto CPyL122;
    }
    cpy_r_r121 = CPyList_SetItemUnsafe(cpy_r_r111, cpy_r_r112, cpy_r_r120);
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 274, CPyStatic_constraints___globals);
        goto CPyL122;
    }
    cpy_r_r122 = cpy_r_r112 + 2;
    cpy_r_r112 = cpy_r_r122;
    goto CPyL65;
CPyL71: ;
    cpy_r_r123 = CPyDef_constraints___any_constraints(cpy_r_r111, 0);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 273, CPyStatic_constraints___globals);
        goto CPyL103;
    }
    cpy_r_result = cpy_r_r123;
    cpy_r_r124 = (CPyPtr)&((PyVarObject *)cpy_r_result)->ob_size;
    cpy_r_r125 = *(int64_t *)cpy_r_r124;
    cpy_r_r126 = cpy_r_r125 << 1;
    cpy_r_r127 = cpy_r_r126 != 0;
    if (cpy_r_r127) {
        goto CPyL124;
    } else
        goto CPyL125;
CPyL73: ;
    return cpy_r_result;
CPyL74: ;
    CPy_INCREF(cpy_r_template);
    if (likely(Py_TYPE(cpy_r_template) == CPyType_types___UnionType))
        cpy_r_r128 = cpy_r_template;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 282, CPyStatic_constraints___globals, "mypy.types.UnionType", cpy_r_template);
        goto CPyL103;
    }
    cpy_r_r129 = CPyDef_types___has_recursive_types(cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r129 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 282, CPyStatic_constraints___globals);
        goto CPyL103;
    }
    if (!cpy_r_r129) goto CPyL126;
    CPy_INCREF(cpy_r_actual);
    if (likely(PyObject_TypeCheck(cpy_r_actual, CPyType_types___ProperType)))
        cpy_r_r130 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 282, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_actual);
        goto CPyL103;
    }
    cpy_r_r131 = CPyDef_types___has_recursive_types(cpy_r_r130);
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r131 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 282, CPyStatic_constraints___globals);
        goto CPyL103;
    }
    if (cpy_r_r131) goto CPyL126;
    if (likely(Py_TYPE(cpy_r_template) == CPyType_types___UnionType))
        cpy_r_r132 = cpy_r_template;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 283, CPyStatic_constraints___globals, "mypy.types.UnionType", cpy_r_template);
        goto CPyL99;
    }
    if (likely(PyObject_TypeCheck(cpy_r_actual, CPyType_types___ProperType)))
        cpy_r_r133 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 283, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_actual);
        goto CPyL127;
    }
    cpy_r_r134 = CPyDef_constraints___handle_recursive_union(cpy_r_r132, cpy_r_r133, cpy_r_direction);
    CPy_DECREF(cpy_r_r132);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 283, CPyStatic_constraints___globals);
        goto CPyL92;
    }
    return cpy_r_r134;
CPyL84: ;
    cpy_r_r135 = PyList_New(0);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 284, CPyStatic_constraints___globals);
        goto CPyL92;
    }
    return cpy_r_r135;
CPyL86: ;
    if (likely(PyObject_TypeCheck(cpy_r_template, CPyType_types___ProperType)))
        cpy_r_r136 = cpy_r_template;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 287, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_template);
        goto CPyL99;
    }
    if (likely(PyObject_TypeCheck(cpy_r_actual, CPyType_types___ProperType)))
        cpy_r_r137 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 287, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_actual);
        goto CPyL128;
    }
    cpy_r_r138 = CPyDef_constraints___ConstraintBuilderVisitor(cpy_r_r137, cpy_r_direction);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 287, CPyStatic_constraints___globals);
        goto CPyL128;
    }
    cpy_r_r139 = CPY_GET_METHOD(cpy_r_r136, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r136, cpy_r_r138); /* accept */
    CPy_DECREF(cpy_r_r138);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 287, CPyStatic_constraints___globals);
        goto CPyL92;
    }
    if (likely(PyList_Check(cpy_r_r139)))
        cpy_r_r140 = cpy_r_r139;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_infer_constraints", 287, CPyStatic_constraints___globals, "list", cpy_r_r139);
        goto CPyL92;
    }
    return cpy_r_r140;
CPyL92: ;
    cpy_r_r141 = NULL;
    return cpy_r_r141;
CPyL93: ;
    CPy_DecRef(cpy_r_orig_template);
    goto CPyL92;
CPyL94: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_orig_template);
    goto CPyL92;
CPyL95: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_orig_template);
    goto CPyL92;
CPyL96: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_orig_template);
    goto CPyL92;
CPyL97: ;
    CPy_DECREF(cpy_r_template);
    CPy_DECREF(cpy_r_actual);
    CPy_DECREF(cpy_r_orig_template);
    goto CPyL15;
CPyL98: ;
    CPy_DECREF(cpy_r_orig_template);
    goto CPyL18;
CPyL99: ;
    CPy_DecRef(cpy_r_actual);
    goto CPyL92;
CPyL100: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL92;
CPyL101: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL92;
CPyL102: ;
    CPy_DECREF(cpy_r_orig_template);
    goto CPyL25;
CPyL103: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_actual);
    goto CPyL92;
CPyL104: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    goto CPyL92;
CPyL105: ;
    CPy_DECREF(cpy_r_actual);
    CPy_DECREF(cpy_r_r49);
    goto CPyL34;
CPyL106: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r49);
    goto CPyL92;
CPyL107: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_t_item);
    goto CPyL92;
CPyL108: ;
    CPy_DECREF(cpy_r_r59);
    goto CPyL33;
CPyL109: ;
    CPy_DECREF(cpy_r_orig_template);
    goto CPyL46;
CPyL110: ;
    CPy_DECREF(cpy_r_template);
    goto CPyL37;
CPyL111: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_orig_template);
    CPy_DecRef(cpy_r_res);
    goto CPyL92;
CPyL112: ;
    CPy_DECREF(cpy_r_orig_template);
    CPy_DECREF(cpy_r_r68);
    goto CPyL45;
CPyL113: ;
    CPy_DecRef(cpy_r_orig_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r68);
    goto CPyL92;
CPyL114: ;
    CPy_DECREF(cpy_r_r77);
    goto CPyL44;
CPyL115: ;
    CPy_DecRef(cpy_r_template);
    goto CPyL92;
CPyL116: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_items);
    goto CPyL92;
CPyL117: ;
    CPy_DECREF(cpy_r_template);
    CPy_DECREF(cpy_r_items);
    goto CPyL58;
CPyL118: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r89);
    goto CPyL92;
CPyL119: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_a_item_2);
    goto CPyL92;
CPyL120: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_r108);
    goto CPyL92;
CPyL121: ;
    CPy_DECREF(cpy_r_r108);
    goto CPyL71;
CPyL122: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_r108);
    CPy_DecRef(cpy_r_r111);
    goto CPyL92;
CPyL123: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_r108);
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_t_item_2);
    goto CPyL92;
CPyL124: ;
    CPy_DECREF(cpy_r_template);
    CPy_DECREF(cpy_r_actual);
    goto CPyL73;
CPyL125: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL74;
CPyL126: ;
    CPy_DECREF(cpy_r_template);
    CPy_DECREF(cpy_r_actual);
    goto CPyL84;
CPyL127: ;
    CPy_DecRef(cpy_r_r132);
    goto CPyL92;
CPyL128: ;
    CPy_DecRef(cpy_r_r136);
    goto CPyL92;
}

PyObject *CPyPy_constraints____infer_constraints(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"template", "actual", "direction", 0};
    static CPyArg_Parser parser = {"OOO:_infer_constraints", kwlist, 0};
    PyObject *obj_template;
    PyObject *obj_actual;
    PyObject *obj_direction;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_template, &obj_actual, &obj_direction)) {
        return NULL;
    }
    PyObject *arg_template;
    if (likely(PyObject_TypeCheck(obj_template, CPyType_types___Type)))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.Type", obj_template); 
        goto fail;
    }
    PyObject *arg_actual;
    if (likely(PyObject_TypeCheck(obj_actual, CPyType_types___Type)))
        arg_actual = obj_actual;
    else {
        CPy_TypeError("mypy.types.Type", obj_actual); 
        goto fail;
    }
    CPyTagged arg_direction;
    if (likely(PyLong_Check(obj_direction)))
        arg_direction = CPyTagged_BorrowFromObject(obj_direction);
    else {
        CPy_TypeError("int", obj_direction); goto fail;
    }
    PyObject *retval = CPyDef_constraints____infer_constraints(arg_template, arg_actual, arg_direction);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "_infer_constraints", 211, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___infer_constraints_if_possible(PyObject *cpy_r_template, PyObject *cpy_r_actual, CPyTagged cpy_r_direction) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    cpy_r_r0 = cpy_r_direction == 0;
    if (!cpy_r_r0) goto CPyL5;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_erasetype___erase_typevars(cpy_r_template, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_if_possible", 298, CPyStatic_constraints___globals);
        goto CPyL19;
    }
    cpy_r_r3 = NULL;
    cpy_r_r4 = 2;
    cpy_r_r5 = 2;
    cpy_r_r6 = 2;
    cpy_r_r7 = 2;
    cpy_r_r8 = 2;
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPyDef_subtypes___is_subtype(cpy_r_r2, cpy_r_actual, cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_if_possible", 298, CPyStatic_constraints___globals);
        goto CPyL19;
    }
    if (cpy_r_r10) goto CPyL5;
    cpy_r_r11 = Py_None;
    CPy_INCREF(cpy_r_r11);
    return cpy_r_r11;
CPyL5: ;
    cpy_r_r12 = cpy_r_direction == 2;
    if (!cpy_r_r12) goto CPyL10;
    cpy_r_r13 = NULL;
    cpy_r_r14 = CPyDef_erasetype___erase_typevars(cpy_r_template, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_if_possible", 301, CPyStatic_constraints___globals);
        goto CPyL19;
    }
    cpy_r_r15 = NULL;
    cpy_r_r16 = 2;
    cpy_r_r17 = 2;
    cpy_r_r18 = 2;
    cpy_r_r19 = 2;
    cpy_r_r20 = 2;
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPyDef_subtypes___is_subtype(cpy_r_actual, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_if_possible", 300, CPyStatic_constraints___globals);
        goto CPyL19;
    }
    if (cpy_r_r22) goto CPyL10;
    cpy_r_r23 = Py_None;
    CPy_INCREF(cpy_r_r23);
    return cpy_r_r23;
CPyL10: ;
    cpy_r_r24 = cpy_r_direction == 2;
    if (!cpy_r_r24) goto CPyL17;
    cpy_r_r25 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_template)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    if (!cpy_r_r28) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_template) == CPyType_types___TypeVarType))
        cpy_r_r29 = cpy_r_template;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_if_possible", 307, CPyStatic_constraints___globals, "mypy.types.TypeVarType", cpy_r_template);
        goto CPyL19;
    }
    cpy_r_r30 = ((mypy___types___TypeVarTypeObject *)cpy_r_r29)->_upper_bound;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = NULL;
    cpy_r_r32 = CPyDef_erasetype___erase_typevars(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_if_possible", 307, CPyStatic_constraints___globals);
        goto CPyL19;
    }
    cpy_r_r33 = NULL;
    cpy_r_r34 = 2;
    cpy_r_r35 = 2;
    cpy_r_r36 = 2;
    cpy_r_r37 = 2;
    cpy_r_r38 = 2;
    cpy_r_r39 = NULL;
    cpy_r_r40 = CPyDef_subtypes___is_subtype(cpy_r_actual, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_if_possible", 307, CPyStatic_constraints___globals);
        goto CPyL19;
    }
    if (cpy_r_r40) goto CPyL17;
    cpy_r_r41 = Py_None;
    CPy_INCREF(cpy_r_r41);
    return cpy_r_r41;
CPyL17: ;
    cpy_r_r42 = CPyDef_constraints___infer_constraints(cpy_r_template, cpy_r_actual, cpy_r_direction);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_if_possible", 312, CPyStatic_constraints___globals);
        goto CPyL19;
    }
    return cpy_r_r42;
CPyL19: ;
    cpy_r_r43 = NULL;
    return cpy_r_r43;
}

PyObject *CPyPy_constraints___infer_constraints_if_possible(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"template", "actual", "direction", 0};
    static CPyArg_Parser parser = {"OOO:infer_constraints_if_possible", kwlist, 0};
    PyObject *obj_template;
    PyObject *obj_actual;
    PyObject *obj_direction;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_template, &obj_actual, &obj_direction)) {
        return NULL;
    }
    PyObject *arg_template;
    if (likely(PyObject_TypeCheck(obj_template, CPyType_types___Type)))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.Type", obj_template); 
        goto fail;
    }
    PyObject *arg_actual;
    if (likely(PyObject_TypeCheck(obj_actual, CPyType_types___Type)))
        arg_actual = obj_actual;
    else {
        CPy_TypeError("mypy.types.Type", obj_actual); 
        goto fail;
    }
    CPyTagged arg_direction;
    if (likely(PyLong_Check(obj_direction)))
        arg_direction = CPyTagged_BorrowFromObject(obj_direction);
    else {
        CPy_TypeError("int", obj_direction); goto fail;
    }
    PyObject *retval = CPyDef_constraints___infer_constraints_if_possible(arg_template, arg_actual, arg_direction);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "infer_constraints_if_possible", 290, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___select_trivial(PyObject *cpy_r_options) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_option;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "select_trivial", 317, CPyStatic_constraints___globals);
        goto CPyL18;
    }
    cpy_r_res = cpy_r_r0;
    cpy_r_r1 = PyObject_GetIter(cpy_r_options);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "select_trivial", 318, CPyStatic_constraints___globals);
        goto CPyL19;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL20;
    if (PyList_Check(cpy_r_r2))
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL1801;
    if (cpy_r_r2 == Py_None)
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL1801;
    CPy_TypeErrorTraceback("mypy/constraints.py", "select_trivial", 318, CPyStatic_constraints___globals, "list or None", cpy_r_r2);
    goto CPyL21;
__LL1801: ;
    cpy_r_option = cpy_r_r3;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_option == cpy_r_r4;
    if (cpy_r_r5) goto CPyL22;
    cpy_r_r6 = 1;
    CPy_INCREF(cpy_r_option);
    if (likely(cpy_r_option != Py_None))
        cpy_r_r7 = cpy_r_option;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "select_trivial", 321, CPyStatic_constraints___globals, "list", cpy_r_option);
        goto CPyL23;
    }
    cpy_r_r8 = 0;
CPyL7: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r12) goto CPyL24;
    cpy_r_r13 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r8);
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_constraints___Constraint))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "select_trivial", 321, CPyStatic_constraints___globals, "mypy.constraints.Constraint", cpy_r_r13);
        goto CPyL25;
    }
    cpy_r_c = cpy_r_r14;
    cpy_r_r15 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_c);
    cpy_r_r16 = CPyDef_types___get_proper_type(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "select_trivial", 321, CPyStatic_constraints___globals);
        goto CPyL25;
    }
    cpy_r_r17 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_r16)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    CPy_DECREF(cpy_r_r16);
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    cpy_r_r21 = cpy_r_r20 ^ 1;
    if (cpy_r_r21) {
        goto CPyL26;
    } else
        goto CPyL12;
CPyL11: ;
    cpy_r_r6 = 0;
    goto CPyL13;
CPyL12: ;
    cpy_r_r22 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r22;
    goto CPyL7;
CPyL13: ;
    if (!cpy_r_r6) goto CPyL22;
    if (likely(cpy_r_option != Py_None))
        cpy_r_r23 = cpy_r_option;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "select_trivial", 322, CPyStatic_constraints___globals, "list", cpy_r_option);
        goto CPyL21;
    }
    cpy_r_r24 = PyList_Append(cpy_r_res, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/constraints.py", "select_trivial", 322, CPyStatic_constraints___globals);
        goto CPyL21;
    } else
        goto CPyL2;
CPyL16: ;
    cpy_r_r26 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/constraints.py", "select_trivial", 318, CPyStatic_constraints___globals);
        goto CPyL19;
    }
    return cpy_r_res;
CPyL18: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL19: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL18;
CPyL20: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r1);
    goto CPyL18;
CPyL22: ;
    CPy_DECREF(cpy_r_option);
    goto CPyL2;
CPyL23: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_option);
    goto CPyL18;
CPyL24: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL13;
CPyL25: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_option);
    CPy_DecRef(cpy_r_r7);
    goto CPyL18;
CPyL26: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL11;
}

PyObject *CPyPy_constraints___select_trivial(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"options", 0};
    static CPyArg_Parser parser = {"O:select_trivial", kwlist, 0};
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_options)) {
        return NULL;
    }
    PyObject *arg_options = obj_options;
    PyObject *retval = CPyDef_constraints___select_trivial(arg_options);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "select_trivial", 315, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___merge_with_any(PyObject *cpy_r_constraint) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_target;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_any_type;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = ((mypy___constraints___ConstraintObject *)cpy_r_constraint)->_target;
    CPy_INCREF(cpy_r_r0);
    cpy_r_target = cpy_r_r0;
    cpy_r_r1 = CPyDef_types_utils___is_union_with_any(cpy_r_target);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "merge_with_any", 329, CPyStatic_constraints___globals);
        goto CPyL9;
    }
    if (cpy_r_r1) {
        goto CPyL10;
    } else
        goto CPyL3;
CPyL2: ;
    CPy_INCREF(cpy_r_constraint);
    return cpy_r_constraint;
CPyL3: ;
    cpy_r_r2 = NULL;
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = CPyDef_types___AnyType(16, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "merge_with_any", 333, CPyStatic_constraints___globals);
        goto CPyL9;
    }
    cpy_r_any_type = cpy_r_r6;
    cpy_r_r7 = ((mypy___constraints___ConstraintObject *)cpy_r_constraint)->_origin_type_var;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = ((mypy___constraints___ConstraintObject *)cpy_r_constraint)->_op;
    CPyTagged_INCREF(cpy_r_r8);
    cpy_r_r9 = PyList_New(2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "merge_with_any", 337, CPyStatic_constraints___globals);
        goto CPyL11;
    }
    cpy_r_r10 = (CPyPtr)&((PyListObject *)cpy_r_r9)->ob_item;
    cpy_r_r11 = *(CPyPtr *)cpy_r_r10;
    CPy_INCREF(cpy_r_target);
    *(PyObject * *)cpy_r_r11 = cpy_r_target;
    cpy_r_r12 = cpy_r_r11 + 8;
    *(PyObject * *)cpy_r_r12 = cpy_r_any_type;
    cpy_r_r13 = ((mypy___types___TypeObject *)cpy_r_target)->_line;
    CPyTagged_INCREF(cpy_r_r13);
    cpy_r_r14 = ((mypy___types___TypeObject *)cpy_r_target)->_column;
    CPyTagged_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_target);
    cpy_r_r15 = CPyDef_types___UnionType___make_union(cpy_r_r9, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r9);
    CPyTagged_DECREF(cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "merge_with_any", 337, CPyStatic_constraints___globals);
        goto CPyL12;
    }
    cpy_r_r16 = CPyDef_constraints___Constraint(cpy_r_r7, cpy_r_r8, cpy_r_r15);
    CPy_DECREF(cpy_r_r7);
    CPyTagged_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "merge_with_any", 334, CPyStatic_constraints___globals);
        goto CPyL8;
    }
    return cpy_r_r16;
CPyL8: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL9: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL8;
CPyL10: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL2;
CPyL11: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_r8);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_r8);
    goto CPyL8;
}

PyObject *CPyPy_constraints___merge_with_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"constraint", 0};
    static CPyArg_Parser parser = {"O:merge_with_any", kwlist, 0};
    PyObject *obj_constraint;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_constraint)) {
        return NULL;
    }
    PyObject *arg_constraint;
    if (likely(Py_TYPE(obj_constraint) == CPyType_constraints___Constraint))
        arg_constraint = obj_constraint;
    else {
        CPy_TypeError("mypy.constraints.Constraint", obj_constraint); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___merge_with_any(arg_constraint);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "merge_with_any", 326, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___handle_recursive_union(PyObject *cpy_r_template, PyObject *cpy_r_actual, CPyTagged cpy_r_direction) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_non_type_var_items;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_t_2;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_type_var_items;
    CPyTagged cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "handle_recursive_union", 347, CPyStatic_constraints___globals);
        goto CPyL24;
    }
    cpy_r_r1 = ((mypy___types___UnionTypeObject *)cpy_r_template)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL25;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_types___Type)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "handle_recursive_union", 347, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r7);
        goto CPyL26;
    }
    cpy_r_t = cpy_r_r8;
    cpy_r_r9 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    cpy_r_r13 = cpy_r_r12 ^ 1;
    if (!cpy_r_r13) goto CPyL27;
    cpy_r_r14 = PyList_Append(cpy_r_r0, cpy_r_t);
    CPy_DECREF(cpy_r_t);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/constraints.py", "handle_recursive_union", 347, CPyStatic_constraints___globals);
        goto CPyL26;
    }
CPyL6: ;
    cpy_r_r16 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r16;
    goto CPyL2;
CPyL7: ;
    cpy_r_non_type_var_items = cpy_r_r0;
    cpy_r_r17 = PyList_New(0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "handle_recursive_union", 348, CPyStatic_constraints___globals);
        goto CPyL28;
    }
    cpy_r_r18 = ((mypy___types___UnionTypeObject *)cpy_r_template)->_items;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = 0;
CPyL9: ;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r22;
    if (!cpy_r_r23) goto CPyL29;
    cpy_r_r24 = CPyList_GetItemUnsafe(cpy_r_r18, cpy_r_r19);
    if (likely(PyObject_TypeCheck(cpy_r_r24, CPyType_types___Type)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "handle_recursive_union", 348, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r24);
        goto CPyL30;
    }
    cpy_r_t_2 = cpy_r_r25;
    cpy_r_r26 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_t_2)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    if (!cpy_r_r29) goto CPyL31;
    if (likely(Py_TYPE(cpy_r_t_2) == CPyType_types___TypeVarType))
        cpy_r_r30 = cpy_r_t_2;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "handle_recursive_union", 348, CPyStatic_constraints___globals, "mypy.types.TypeVarType", cpy_r_t_2);
        goto CPyL30;
    }
    cpy_r_r31 = PyList_Append(cpy_r_r17, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/constraints.py", "handle_recursive_union", 348, CPyStatic_constraints___globals);
        goto CPyL30;
    }
CPyL14: ;
    cpy_r_r33 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r33;
    goto CPyL9;
CPyL15: ;
    cpy_r_type_var_items = cpy_r_r17;
    cpy_r_r34 = CPY_INT_TAG;
    cpy_r_r35 = CPY_INT_TAG;
    cpy_r_r36 = CPyDef_types___UnionType___make_union(cpy_r_non_type_var_items, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_non_type_var_items);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "handle_recursive_union", 350, CPyStatic_constraints___globals);
        goto CPyL32;
    }
    cpy_r_r37 = CPyDef_constraints___infer_constraints(cpy_r_r36, cpy_r_actual, cpy_r_direction);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "handle_recursive_union", 349, CPyStatic_constraints___globals);
        goto CPyL32;
    }
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_r37)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = cpy_r_r40 != 0;
    if (cpy_r_r41) {
        goto CPyL33;
    } else
        goto CPyL34;
CPyL18: ;
    cpy_r_r42 = cpy_r_r37;
    goto CPyL23;
CPyL19: ;
    cpy_r_r43 = CPY_INT_TAG;
    cpy_r_r44 = CPY_INT_TAG;
    cpy_r_r45 = CPyDef_types___UnionType___make_union(cpy_r_type_var_items, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_type_var_items);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "handle_recursive_union", 351, CPyStatic_constraints___globals);
        goto CPyL24;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r45, CPyType_types___ProperType)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "handle_recursive_union", 351, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_r45);
        goto CPyL24;
    }
    cpy_r_r47 = CPyDef_constraints___infer_constraints(cpy_r_r46, cpy_r_actual, cpy_r_direction);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "handle_recursive_union", 351, CPyStatic_constraints___globals);
        goto CPyL24;
    }
    cpy_r_r42 = cpy_r_r47;
CPyL23: ;
    return cpy_r_r42;
CPyL24: ;
    cpy_r_r48 = NULL;
    return cpy_r_r48;
CPyL25: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL24;
CPyL27: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL6;
CPyL28: ;
    CPy_DecRef(cpy_r_non_type_var_items);
    goto CPyL24;
CPyL29: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL15;
CPyL30: ;
    CPy_DecRef(cpy_r_non_type_var_items);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    goto CPyL24;
CPyL31: ;
    CPy_DECREF(cpy_r_t_2);
    goto CPyL14;
CPyL32: ;
    CPy_DecRef(cpy_r_type_var_items);
    goto CPyL24;
CPyL33: ;
    CPy_DECREF(cpy_r_type_var_items);
    goto CPyL18;
CPyL34: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL19;
}

PyObject *CPyPy_constraints___handle_recursive_union(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"template", "actual", "direction", 0};
    static CPyArg_Parser parser = {"OOO:handle_recursive_union", kwlist, 0};
    PyObject *obj_template;
    PyObject *obj_actual;
    PyObject *obj_direction;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_template, &obj_actual, &obj_direction)) {
        return NULL;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___UnionType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_template); 
        goto fail;
    }
    PyObject *arg_actual;
    if (likely(PyObject_TypeCheck(obj_actual, CPyType_types___Type)))
        arg_actual = obj_actual;
    else {
        CPy_TypeError("mypy.types.Type", obj_actual); 
        goto fail;
    }
    CPyTagged arg_direction;
    if (likely(PyLong_Check(obj_direction)))
        arg_direction = CPyTagged_BorrowFromObject(obj_direction);
    else {
        CPy_TypeError("int", obj_direction); goto fail;
    }
    PyObject *retval = CPyDef_constraints___handle_recursive_union(arg_template, arg_actual, arg_direction);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "handle_recursive_union", 341, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___any_constraints(PyObject *cpy_r_options, char cpy_r_eager) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_option;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_valid_options;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_option_2;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyPtr cpy_r_r33;
    int64_t cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    CPyTagged cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyPtr cpy_r_r65;
    int64_t cpy_r_r66;
    CPyTagged cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_c_2;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_trivial_options;
    CPyPtr cpy_r_r77;
    int64_t cpy_r_r78;
    CPyTagged cpy_r_r79;
    char cpy_r_r80;
    CPyPtr cpy_r_r81;
    int64_t cpy_r_r82;
    CPyTagged cpy_r_r83;
    CPyPtr cpy_r_r84;
    int64_t cpy_r_r85;
    CPyTagged cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_merged_options;
    CPyTagged cpy_r_r89;
    CPyPtr cpy_r_r90;
    int64_t cpy_r_r91;
    CPyTagged cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_option_3;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    CPyPtr cpy_r_r101;
    int64_t cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyTagged cpy_r_r104;
    CPyPtr cpy_r_r105;
    int64_t cpy_r_r106;
    CPyTagged cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_c_3;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    CPyTagged cpy_r_r113;
    PyObject *cpy_r_merged_option;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    CPyTagged cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyPtr cpy_r_r121;
    int64_t cpy_r_r122;
    PyObject *cpy_r_r123;
    CPyTagged cpy_r_r124;
    CPyPtr cpy_r_r125;
    int64_t cpy_r_r126;
    CPyTagged cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_o;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    CPyTagged cpy_r_r133;
    PyObject *cpy_r_filtered_options;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    if (!cpy_r_eager) goto CPyL12;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 363, CPyStatic_constraints___globals);
        goto CPyL94;
    }
    cpy_r_r1 = 0;
CPyL3: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_options)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL11;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_options, cpy_r_r1);
    if (PyList_Check(cpy_r_r6))
        cpy_r_r7 = cpy_r_r6;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL1802;
    if (cpy_r_r6 == Py_None)
        cpy_r_r7 = cpy_r_r6;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL1802;
    CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 363, CPyStatic_constraints___globals, "list or None", cpy_r_r6);
    goto CPyL95;
__LL1802: ;
    cpy_r_option = cpy_r_r7;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_option != cpy_r_r8;
    if (!cpy_r_r9) goto CPyL96;
    CPy_INCREF(cpy_r_option);
    if (likely(cpy_r_option != Py_None))
        cpy_r_r10 = cpy_r_option;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 363, CPyStatic_constraints___globals, "list", cpy_r_option);
        goto CPyL97;
    }
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = cpy_r_r13 != 0;
    if (!cpy_r_r14) goto CPyL96;
    if (likely(cpy_r_option != Py_None))
        cpy_r_r15 = cpy_r_option;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 363, CPyStatic_constraints___globals, "list", cpy_r_option);
        goto CPyL95;
    }
    cpy_r_r16 = PyList_Append(cpy_r_r0, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 363, CPyStatic_constraints___globals);
        goto CPyL95;
    }
CPyL10: ;
    cpy_r_r18 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r18;
    goto CPyL3;
CPyL11: ;
    cpy_r_valid_options = cpy_r_r0;
    goto CPyL21;
CPyL12: ;
    cpy_r_r19 = PyList_New(0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 365, CPyStatic_constraints___globals);
        goto CPyL94;
    }
    cpy_r_r20 = 0;
CPyL14: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_options)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r23;
    if (!cpy_r_r24) goto CPyL20;
    cpy_r_r25 = CPyList_GetItemUnsafe(cpy_r_options, cpy_r_r20);
    if (PyList_Check(cpy_r_r25))
        cpy_r_r26 = cpy_r_r25;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL1803;
    if (cpy_r_r25 == Py_None)
        cpy_r_r26 = cpy_r_r25;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL1803;
    CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 365, CPyStatic_constraints___globals, "list or None", cpy_r_r25);
    goto CPyL98;
__LL1803: ;
    cpy_r_option_2 = cpy_r_r26;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_option_2 != cpy_r_r27;
    if (!cpy_r_r28) goto CPyL99;
    if (likely(cpy_r_option_2 != Py_None))
        cpy_r_r29 = cpy_r_option_2;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 365, CPyStatic_constraints___globals, "list", cpy_r_option_2);
        goto CPyL98;
    }
    cpy_r_r30 = PyList_Append(cpy_r_r19, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 365, CPyStatic_constraints___globals);
        goto CPyL98;
    }
CPyL19: ;
    cpy_r_r32 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r32;
    goto CPyL14;
CPyL20: ;
    cpy_r_valid_options = cpy_r_r19;
CPyL21: ;
    cpy_r_r33 = (CPyPtr)&((PyVarObject *)cpy_r_valid_options)->ob_size;
    cpy_r_r34 = *(int64_t *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 << 1;
    cpy_r_r36 = cpy_r_r35 != 0;
    if (cpy_r_r36) {
        goto CPyL24;
    } else
        goto CPyL100;
CPyL22: ;
    cpy_r_r37 = PyList_New(0);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 368, CPyStatic_constraints___globals);
        goto CPyL94;
    }
    return cpy_r_r37;
CPyL24: ;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_valid_options)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = cpy_r_r40 == 2;
    if (!cpy_r_r41) goto CPyL28;
    cpy_r_r42 = CPyList_GetItemShort(cpy_r_valid_options, 0);
    CPy_DECREF(cpy_r_valid_options);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 371, CPyStatic_constraints___globals);
        goto CPyL94;
    }
    if (likely(PyList_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 371, CPyStatic_constraints___globals, "list", cpy_r_r42);
        goto CPyL94;
    }
    return cpy_r_r43;
CPyL28: ;
    cpy_r_r44 = 1;
    cpy_r_r45 = CPyList_GetSlice(cpy_r_valid_options, 2, 9223372036854775806LL);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 373, CPyStatic_constraints___globals);
        goto CPyL101;
    }
    if (likely(PyList_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 373, CPyStatic_constraints___globals, "list", cpy_r_r45);
        goto CPyL101;
    }
    cpy_r_r47 = 0;
CPyL31: ;
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_r46)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = (Py_ssize_t)cpy_r_r47 < (Py_ssize_t)cpy_r_r50;
    if (!cpy_r_r51) goto CPyL102;
    cpy_r_r52 = CPyList_GetItemUnsafe(cpy_r_r46, cpy_r_r47);
    if (likely(PyList_Check(cpy_r_r52)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 373, CPyStatic_constraints___globals, "list", cpy_r_r52);
        goto CPyL103;
    }
    cpy_r_c = cpy_r_r53;
    cpy_r_r54 = CPyList_GetItemShort(cpy_r_valid_options, 0);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 373, CPyStatic_constraints___globals);
        goto CPyL104;
    }
    if (likely(PyList_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 373, CPyStatic_constraints___globals, "list", cpy_r_r54);
        goto CPyL104;
    }
    cpy_r_r56 = CPyDef_constraints___is_same_constraints(cpy_r_r55, cpy_r_c);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_c);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 373, CPyStatic_constraints___globals);
        goto CPyL103;
    }
    cpy_r_r57 = cpy_r_r56 ^ 1;
    if (cpy_r_r57) {
        goto CPyL105;
    } else
        goto CPyL38;
CPyL37: ;
    cpy_r_r44 = 0;
    goto CPyL39;
CPyL38: ;
    cpy_r_r58 = cpy_r_r47 + 2;
    cpy_r_r47 = cpy_r_r58;
    goto CPyL31;
CPyL39: ;
    if (!cpy_r_r44) goto CPyL43;
    cpy_r_r59 = CPyList_GetItemShort(cpy_r_valid_options, 0);
    CPy_DECREF(cpy_r_valid_options);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 375, CPyStatic_constraints___globals);
        goto CPyL94;
    }
    if (likely(PyList_Check(cpy_r_r59)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 375, CPyStatic_constraints___globals, "list", cpy_r_r59);
        goto CPyL94;
    }
    return cpy_r_r60;
CPyL43: ;
    cpy_r_r61 = 1;
    cpy_r_r62 = CPyList_GetSlice(cpy_r_valid_options, 2, 9223372036854775806LL);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 377, CPyStatic_constraints___globals);
        goto CPyL101;
    }
    if (likely(PyList_Check(cpy_r_r62)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 377, CPyStatic_constraints___globals, "list", cpy_r_r62);
        goto CPyL101;
    }
    cpy_r_r64 = 0;
CPyL46: ;
    cpy_r_r65 = (CPyPtr)&((PyVarObject *)cpy_r_r63)->ob_size;
    cpy_r_r66 = *(int64_t *)cpy_r_r65;
    cpy_r_r67 = cpy_r_r66 << 1;
    cpy_r_r68 = (Py_ssize_t)cpy_r_r64 < (Py_ssize_t)cpy_r_r67;
    if (!cpy_r_r68) goto CPyL106;
    cpy_r_r69 = CPyList_GetItemUnsafe(cpy_r_r63, cpy_r_r64);
    if (likely(PyList_Check(cpy_r_r69)))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 377, CPyStatic_constraints___globals, "list", cpy_r_r69);
        goto CPyL107;
    }
    cpy_r_c_2 = cpy_r_r70;
    cpy_r_r71 = CPyList_GetItemShort(cpy_r_valid_options, 0);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 377, CPyStatic_constraints___globals);
        goto CPyL108;
    }
    if (likely(PyList_Check(cpy_r_r71)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 377, CPyStatic_constraints___globals, "list", cpy_r_r71);
        goto CPyL108;
    }
    cpy_r_r73 = CPyDef_constraints___is_similar_constraints(cpy_r_r72, cpy_r_c_2);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_c_2);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 377, CPyStatic_constraints___globals);
        goto CPyL107;
    }
    cpy_r_r74 = cpy_r_r73 ^ 1;
    if (cpy_r_r74) {
        goto CPyL109;
    } else
        goto CPyL53;
CPyL52: ;
    cpy_r_r61 = 0;
    goto CPyL54;
CPyL53: ;
    cpy_r_r75 = cpy_r_r64 + 2;
    cpy_r_r64 = cpy_r_r75;
    goto CPyL46;
CPyL54: ;
    if (!cpy_r_r61) goto CPyL110;
    cpy_r_r76 = CPyDef_constraints___select_trivial(cpy_r_valid_options);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 382, CPyStatic_constraints___globals);
        goto CPyL101;
    }
    cpy_r_trivial_options = cpy_r_r76;
    cpy_r_r77 = (CPyPtr)&((PyVarObject *)cpy_r_trivial_options)->ob_size;
    cpy_r_r78 = *(int64_t *)cpy_r_r77;
    cpy_r_r79 = cpy_r_r78 << 1;
    cpy_r_r80 = cpy_r_r79 != 0;
    if (!cpy_r_r80) goto CPyL111;
    cpy_r_r81 = (CPyPtr)&((PyVarObject *)cpy_r_trivial_options)->ob_size;
    cpy_r_r82 = *(int64_t *)cpy_r_r81;
    cpy_r_r83 = cpy_r_r82 << 1;
    cpy_r_r84 = (CPyPtr)&((PyVarObject *)cpy_r_valid_options)->ob_size;
    cpy_r_r85 = *(int64_t *)cpy_r_r84;
    cpy_r_r86 = cpy_r_r85 << 1;
    cpy_r_r87 = (Py_ssize_t)cpy_r_r83 < (Py_ssize_t)cpy_r_r86;
    if (!cpy_r_r87) goto CPyL111;
    cpy_r_r88 = PyList_New(0);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 384, CPyStatic_constraints___globals);
        goto CPyL112;
    }
    cpy_r_merged_options = cpy_r_r88;
    cpy_r_r89 = 0;
CPyL60: ;
    cpy_r_r90 = (CPyPtr)&((PyVarObject *)cpy_r_valid_options)->ob_size;
    cpy_r_r91 = *(int64_t *)cpy_r_r90;
    cpy_r_r92 = cpy_r_r91 << 1;
    cpy_r_r93 = (Py_ssize_t)cpy_r_r89 < (Py_ssize_t)cpy_r_r92;
    if (!cpy_r_r93) goto CPyL113;
    cpy_r_r94 = CPyList_GetItemUnsafe(cpy_r_valid_options, cpy_r_r89);
    if (likely(PyList_Check(cpy_r_r94)))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 385, CPyStatic_constraints___globals, "list", cpy_r_r94);
        goto CPyL114;
    }
    cpy_r_option_3 = cpy_r_r95;
    cpy_r_r96 = PySequence_Contains(cpy_r_trivial_options, cpy_r_option_3);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 386, CPyStatic_constraints___globals);
        goto CPyL115;
    }
    cpy_r_r98 = cpy_r_r96;
    if (cpy_r_r98) goto CPyL116;
    cpy_r_r99 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r100 = cpy_r_option_3 != cpy_r_r99;
    if (!cpy_r_r100) goto CPyL117;
    cpy_r_r101 = (CPyPtr)&((PyVarObject *)cpy_r_option_3)->ob_size;
    cpy_r_r102 = *(int64_t *)cpy_r_r101;
    cpy_r_r103 = PyList_New(cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 389, CPyStatic_constraints___globals);
        goto CPyL115;
    }
    cpy_r_r104 = 0;
CPyL67: ;
    cpy_r_r105 = (CPyPtr)&((PyVarObject *)cpy_r_option_3)->ob_size;
    cpy_r_r106 = *(int64_t *)cpy_r_r105;
    cpy_r_r107 = cpy_r_r106 << 1;
    cpy_r_r108 = (Py_ssize_t)cpy_r_r104 < (Py_ssize_t)cpy_r_r107;
    if (!cpy_r_r108) goto CPyL118;
    cpy_r_r109 = CPyList_GetItemUnsafe(cpy_r_option_3, cpy_r_r104);
    if (likely(Py_TYPE(cpy_r_r109) == CPyType_constraints___Constraint))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 389, CPyStatic_constraints___globals, "mypy.constraints.Constraint", cpy_r_r109);
        goto CPyL119;
    }
    cpy_r_c_3 = cpy_r_r110;
    cpy_r_r111 = CPyDef_constraints___merge_with_any(cpy_r_c_3);
    CPy_DECREF(cpy_r_c_3);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 389, CPyStatic_constraints___globals);
        goto CPyL119;
    }
    cpy_r_r112 = CPyList_SetItemUnsafe(cpy_r_r103, cpy_r_r104, cpy_r_r111);
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 389, CPyStatic_constraints___globals);
        goto CPyL119;
    }
    cpy_r_r113 = cpy_r_r104 + 2;
    cpy_r_r104 = cpy_r_r113;
    goto CPyL67;
CPyL72: ;
    cpy_r_merged_option = cpy_r_r103;
    goto CPyL75;
CPyL73: ;
    cpy_r_r114 = Py_None;
    CPy_INCREF(cpy_r_r114);
    if (PyList_Check(cpy_r_r114))
        cpy_r_r115 = cpy_r_r114;
    else {
        cpy_r_r115 = NULL;
    }
    if (cpy_r_r115 != NULL) goto __LL1804;
    if (cpy_r_r114 == Py_None)
        cpy_r_r115 = cpy_r_r114;
    else {
        cpy_r_r115 = NULL;
    }
    if (cpy_r_r115 != NULL) goto __LL1804;
    CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 391, CPyStatic_constraints___globals, "list or None", cpy_r_r114);
    goto CPyL114;
__LL1804: ;
    cpy_r_merged_option = cpy_r_r115;
CPyL75: ;
    cpy_r_r116 = PyList_Append(cpy_r_merged_options, cpy_r_merged_option);
    CPy_DECREF(cpy_r_merged_option);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 392, CPyStatic_constraints___globals);
        goto CPyL114;
    }
CPyL76: ;
    cpy_r_r118 = cpy_r_r89 + 2;
    cpy_r_r89 = cpy_r_r118;
    goto CPyL60;
CPyL77: ;
    cpy_r_r119 = PySequence_List(cpy_r_merged_options);
    CPy_DECREF(cpy_r_merged_options);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 393, CPyStatic_constraints___globals);
        goto CPyL94;
    }
    cpy_r_r120 = CPyDef_constraints___any_constraints(cpy_r_r119, cpy_r_eager);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 393, CPyStatic_constraints___globals);
        goto CPyL94;
    }
    return cpy_r_r120;
CPyL80: ;
    cpy_r_r121 = (CPyPtr)&((PyVarObject *)cpy_r_options)->ob_size;
    cpy_r_r122 = *(int64_t *)cpy_r_r121;
    cpy_r_r123 = PyList_New(cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 397, CPyStatic_constraints___globals);
        goto CPyL94;
    }
    cpy_r_r124 = 0;
CPyL82: ;
    cpy_r_r125 = (CPyPtr)&((PyVarObject *)cpy_r_options)->ob_size;
    cpy_r_r126 = *(int64_t *)cpy_r_r125;
    cpy_r_r127 = cpy_r_r126 << 1;
    cpy_r_r128 = (Py_ssize_t)cpy_r_r124 < (Py_ssize_t)cpy_r_r127;
    if (!cpy_r_r128) goto CPyL87;
    cpy_r_r129 = CPyList_GetItemUnsafe(cpy_r_options, cpy_r_r124);
    if (PyList_Check(cpy_r_r129))
        cpy_r_r130 = cpy_r_r129;
    else {
        cpy_r_r130 = NULL;
    }
    if (cpy_r_r130 != NULL) goto __LL1805;
    if (cpy_r_r129 == Py_None)
        cpy_r_r130 = cpy_r_r129;
    else {
        cpy_r_r130 = NULL;
    }
    if (cpy_r_r130 != NULL) goto __LL1805;
    CPy_TypeErrorTraceback("mypy/constraints.py", "any_constraints", 397, CPyStatic_constraints___globals, "list or None", cpy_r_r129);
    goto CPyL120;
__LL1805: ;
    cpy_r_o = cpy_r_r130;
    cpy_r_r131 = CPyDef_constraints___filter_satisfiable(cpy_r_o);
    CPy_DECREF(cpy_r_o);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 397, CPyStatic_constraints___globals);
        goto CPyL120;
    }
    cpy_r_r132 = CPyList_SetItemUnsafe(cpy_r_r123, cpy_r_r124, cpy_r_r131);
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 397, CPyStatic_constraints___globals);
        goto CPyL120;
    }
    cpy_r_r133 = cpy_r_r124 + 2;
    cpy_r_r124 = cpy_r_r133;
    goto CPyL82;
CPyL87: ;
    cpy_r_filtered_options = cpy_r_r123;
    cpy_r_r134 = PyObject_RichCompare(cpy_r_filtered_options, cpy_r_options, 3);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 398, CPyStatic_constraints___globals);
        goto CPyL121;
    }
    if (unlikely(!PyBool_Check(cpy_r_r134))) {
        CPy_TypeError("bool", cpy_r_r134); cpy_r_r135 = 2;
    } else
        cpy_r_r135 = cpy_r_r134 == Py_True;
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r135 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 398, CPyStatic_constraints___globals);
        goto CPyL121;
    }
    if (!cpy_r_r135) goto CPyL122;
    cpy_r_r136 = CPyDef_constraints___any_constraints(cpy_r_filtered_options, cpy_r_eager);
    CPy_DECREF(cpy_r_filtered_options);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 399, CPyStatic_constraints___globals);
        goto CPyL94;
    }
    return cpy_r_r136;
CPyL92: ;
    cpy_r_r137 = PyList_New(0);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "any_constraints", 403, CPyStatic_constraints___globals);
        goto CPyL94;
    }
    return cpy_r_r137;
CPyL94: ;
    cpy_r_r138 = NULL;
    return cpy_r_r138;
CPyL95: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL94;
CPyL96: ;
    CPy_DECREF(cpy_r_option);
    goto CPyL10;
CPyL97: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_option);
    goto CPyL94;
CPyL98: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL94;
CPyL99: ;
    CPy_DECREF(cpy_r_option_2);
    goto CPyL19;
CPyL100: ;
    CPy_DECREF(cpy_r_valid_options);
    goto CPyL22;
CPyL101: ;
    CPy_DecRef(cpy_r_valid_options);
    goto CPyL94;
CPyL102: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL39;
CPyL103: ;
    CPy_DecRef(cpy_r_valid_options);
    CPy_DecRef(cpy_r_r46);
    goto CPyL94;
CPyL104: ;
    CPy_DecRef(cpy_r_valid_options);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_c);
    goto CPyL94;
CPyL105: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL37;
CPyL106: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL54;
CPyL107: ;
    CPy_DecRef(cpy_r_valid_options);
    CPy_DecRef(cpy_r_r63);
    goto CPyL94;
CPyL108: ;
    CPy_DecRef(cpy_r_valid_options);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_c_2);
    goto CPyL94;
CPyL109: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL52;
CPyL110: ;
    CPy_DECREF(cpy_r_valid_options);
    goto CPyL80;
CPyL111: ;
    CPy_DECREF(cpy_r_valid_options);
    CPy_DECREF(cpy_r_trivial_options);
    goto CPyL80;
CPyL112: ;
    CPy_DecRef(cpy_r_valid_options);
    CPy_DecRef(cpy_r_trivial_options);
    goto CPyL94;
CPyL113: ;
    CPy_DECREF(cpy_r_valid_options);
    CPy_DECREF(cpy_r_trivial_options);
    goto CPyL77;
CPyL114: ;
    CPy_DecRef(cpy_r_valid_options);
    CPy_DecRef(cpy_r_trivial_options);
    CPy_DecRef(cpy_r_merged_options);
    goto CPyL94;
CPyL115: ;
    CPy_DecRef(cpy_r_valid_options);
    CPy_DecRef(cpy_r_trivial_options);
    CPy_DecRef(cpy_r_merged_options);
    CPy_DecRef(cpy_r_option_3);
    goto CPyL94;
CPyL116: ;
    CPy_DECREF(cpy_r_option_3);
    goto CPyL76;
CPyL117: ;
    CPy_DECREF(cpy_r_option_3);
    goto CPyL73;
CPyL118: ;
    CPy_DECREF(cpy_r_option_3);
    goto CPyL72;
CPyL119: ;
    CPy_DecRef(cpy_r_valid_options);
    CPy_DecRef(cpy_r_trivial_options);
    CPy_DecRef(cpy_r_merged_options);
    CPy_DecRef(cpy_r_option_3);
    CPy_DecRef(cpy_r_r103);
    goto CPyL94;
CPyL120: ;
    CPy_DecRef(cpy_r_r123);
    goto CPyL94;
CPyL121: ;
    CPy_DecRef(cpy_r_filtered_options);
    goto CPyL94;
CPyL122: ;
    CPy_DECREF(cpy_r_filtered_options);
    goto CPyL92;
}

PyObject *CPyPy_constraints___any_constraints(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"options", "eager", 0};
    static CPyArg_Parser parser = {"OO:any_constraints", kwlist, 0};
    PyObject *obj_options;
    PyObject *obj_eager;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_options, &obj_eager)) {
        return NULL;
    }
    PyObject *arg_options;
    if (likely(PyList_Check(obj_options)))
        arg_options = obj_options;
    else {
        CPy_TypeError("list", obj_options); 
        goto fail;
    }
    char arg_eager;
    if (unlikely(!PyBool_Check(obj_eager))) {
        CPy_TypeError("bool", obj_eager); goto fail;
    } else
        arg_eager = obj_eager == Py_True;
    PyObject *retval = CPyDef_constraints___any_constraints(arg_options, arg_eager);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "any_constraints", 354, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___filter_satisfiable(PyObject *cpy_r_option) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_satisfiable;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyPtr cpy_r_r33;
    int64_t cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyPtr cpy_r_r65;
    int64_t cpy_r_r66;
    CPyTagged cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_option != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL3;
    CPy_INCREF(cpy_r_option);
    if (likely(cpy_r_option != Py_None))
        cpy_r_r2 = cpy_r_option;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "filter_satisfiable", 406, CPyStatic_constraints___globals, "list", cpy_r_option);
        goto CPyL29;
    }
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = cpy_r_r5 != 0;
    if (cpy_r_r6) goto CPyL4;
CPyL3: ;
    CPy_INCREF(cpy_r_option);
    return cpy_r_option;
CPyL4: ;
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "filter_satisfiable", 415, CPyStatic_constraints___globals);
        goto CPyL29;
    }
    cpy_r_satisfiable = cpy_r_r7;
    CPy_INCREF(cpy_r_option);
    if (likely(cpy_r_option != Py_None))
        cpy_r_r8 = cpy_r_option;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "filter_satisfiable", 416, CPyStatic_constraints___globals, "list", cpy_r_option);
        goto CPyL30;
    }
    cpy_r_r9 = 0;
CPyL7: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL31;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r8, cpy_r_r9);
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_constraints___Constraint))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "filter_satisfiable", 416, CPyStatic_constraints___globals, "mypy.constraints.Constraint", cpy_r_r14);
        goto CPyL32;
    }
    cpy_r_c = cpy_r_r15;
    cpy_r_r16 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_origin_type_var;
    cpy_r_r17 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_r16)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (!cpy_r_r20) goto CPyL22;
    cpy_r_r21 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_origin_type_var;
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_types___TypeVarType))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "filter_satisfiable", 417, CPyStatic_constraints___globals, "mypy.types.TypeVarType", cpy_r_r21);
        goto CPyL33;
    }
    cpy_r_r23 = ((mypy___types___TypeVarTypeObject *)cpy_r_r22)->_values;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_r23)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    CPy_DECREF(cpy_r_r23);
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = cpy_r_r26 != 0;
    if (!cpy_r_r27) goto CPyL22;
    cpy_r_r28 = 0;
    cpy_r_r29 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_origin_type_var;
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_types___TypeVarType))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "filter_satisfiable", 419, CPyStatic_constraints___globals, "mypy.types.TypeVarType", cpy_r_r29);
        goto CPyL33;
    }
    cpy_r_r31 = ((mypy___types___TypeVarTypeObject *)cpy_r_r30)->_values;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = 0;
CPyL14: ;
    cpy_r_r33 = (CPyPtr)&((PyVarObject *)cpy_r_r31)->ob_size;
    cpy_r_r34 = *(int64_t *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 << 1;
    cpy_r_r36 = (Py_ssize_t)cpy_r_r32 < (Py_ssize_t)cpy_r_r35;
    if (!cpy_r_r36) goto CPyL34;
    cpy_r_r37 = CPyList_GetItemUnsafe(cpy_r_r31, cpy_r_r32);
    if (likely(PyObject_TypeCheck(cpy_r_r37, CPyType_types___Type)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "filter_satisfiable", 418, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r37);
        goto CPyL35;
    }
    cpy_r_value = cpy_r_r38;
    cpy_r_r39 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = NULL;
    cpy_r_r41 = 2;
    cpy_r_r42 = 2;
    cpy_r_r43 = 2;
    cpy_r_r44 = 2;
    cpy_r_r45 = 2;
    cpy_r_r46 = NULL;
    cpy_r_r47 = CPyDef_subtypes___is_subtype(cpy_r_r39, cpy_r_value, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "filter_satisfiable", 419, CPyStatic_constraints___globals);
        goto CPyL35;
    }
    if (cpy_r_r47) {
        goto CPyL36;
    } else
        goto CPyL19;
CPyL18: ;
    cpy_r_r28 = 1;
    goto CPyL20;
CPyL19: ;
    cpy_r_r48 = cpy_r_r32 + 2;
    cpy_r_r32 = cpy_r_r48;
    goto CPyL14;
CPyL20: ;
    if (!cpy_r_r28) goto CPyL37;
    cpy_r_r49 = PyList_Append(cpy_r_satisfiable, cpy_r_c);
    CPy_DECREF(cpy_r_c);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/constraints.py", "filter_satisfiable", 421, CPyStatic_constraints___globals);
        goto CPyL32;
    } else
        goto CPyL25;
CPyL22: ;
    cpy_r_r51 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_origin_type_var;
    cpy_r_r53 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_r52)->_upper_bound;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = NULL;
    cpy_r_r55 = 2;
    cpy_r_r56 = 2;
    cpy_r_r57 = 2;
    cpy_r_r58 = 2;
    cpy_r_r59 = 2;
    cpy_r_r60 = NULL;
    cpy_r_r61 = CPyDef_subtypes___is_subtype(cpy_r_r51, cpy_r_r53, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "filter_satisfiable", 422, CPyStatic_constraints___globals);
        goto CPyL33;
    }
    if (!cpy_r_r61) goto CPyL37;
    cpy_r_r62 = PyList_Append(cpy_r_satisfiable, cpy_r_c);
    CPy_DECREF(cpy_r_c);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/constraints.py", "filter_satisfiable", 423, CPyStatic_constraints___globals);
        goto CPyL32;
    }
CPyL25: ;
    cpy_r_r64 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r64;
    goto CPyL7;
CPyL26: ;
    cpy_r_r65 = (CPyPtr)&((PyVarObject *)cpy_r_satisfiable)->ob_size;
    cpy_r_r66 = *(int64_t *)cpy_r_r65;
    cpy_r_r67 = cpy_r_r66 << 1;
    cpy_r_r68 = cpy_r_r67 != 0;
    if (cpy_r_r68) {
        goto CPyL28;
    } else
        goto CPyL38;
CPyL27: ;
    cpy_r_r69 = Py_None;
    CPy_INCREF(cpy_r_r69);
    return cpy_r_r69;
CPyL28: ;
    return cpy_r_satisfiable;
CPyL29: ;
    cpy_r_r70 = NULL;
    return cpy_r_r70;
CPyL30: ;
    CPy_DecRef(cpy_r_satisfiable);
    goto CPyL29;
CPyL31: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL26;
CPyL32: ;
    CPy_DecRef(cpy_r_satisfiable);
    CPy_DecRef(cpy_r_r8);
    goto CPyL29;
CPyL33: ;
    CPy_DecRef(cpy_r_satisfiable);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_c);
    goto CPyL29;
CPyL34: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL20;
CPyL35: ;
    CPy_DecRef(cpy_r_satisfiable);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_c);
    CPy_DecRef(cpy_r_r31);
    goto CPyL29;
CPyL36: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL18;
CPyL37: ;
    CPy_DECREF(cpy_r_c);
    goto CPyL25;
CPyL38: ;
    CPy_DECREF(cpy_r_satisfiable);
    goto CPyL27;
}

PyObject *CPyPy_constraints___filter_satisfiable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"option", 0};
    static CPyArg_Parser parser = {"O:filter_satisfiable", kwlist, 0};
    PyObject *obj_option;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_option)) {
        return NULL;
    }
    PyObject *arg_option;
    if (PyList_Check(obj_option))
        arg_option = obj_option;
    else {
        arg_option = NULL;
    }
    if (arg_option != NULL) goto __LL1806;
    if (obj_option == Py_None)
        arg_option = obj_option;
    else {
        arg_option = NULL;
    }
    if (arg_option != NULL) goto __LL1806;
    CPy_TypeError("list or None", obj_option); 
    goto fail;
__LL1806: ;
    PyObject *retval = CPyDef_constraints___filter_satisfiable(arg_option);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "filter_satisfiable", 406, CPyStatic_constraints___globals);
    return NULL;
}

char CPyDef_constraints___is_same_constraints(PyObject *cpy_r_x, PyObject *cpy_r_y) {
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_c1;
    char cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_c2;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_c2_2;
    char cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_x)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL13;
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_x, cpy_r_r0);
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_constraints___Constraint))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "is_same_constraints", 430, CPyStatic_constraints___globals, "mypy.constraints.Constraint", cpy_r_r5);
        goto CPyL27;
    }
    cpy_r_c1 = cpy_r_r6;
    cpy_r_r7 = 0;
    cpy_r_r8 = 0;
CPyL4: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_y)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r12) goto CPyL28;
    cpy_r_r13 = CPyList_GetItemUnsafe(cpy_r_y, cpy_r_r8);
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_constraints___Constraint))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "is_same_constraints", 431, CPyStatic_constraints___globals, "mypy.constraints.Constraint", cpy_r_r13);
        goto CPyL29;
    }
    cpy_r_c2 = cpy_r_r14;
    cpy_r_r15 = CPyDef_constraints___is_same_constraint(cpy_r_c1, cpy_r_c2);
    CPy_DECREF(cpy_r_c2);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "is_same_constraints", 431, CPyStatic_constraints___globals);
        goto CPyL29;
    }
    if (cpy_r_r15) {
        goto CPyL30;
    } else
        goto CPyL9;
CPyL8: ;
    cpy_r_r7 = 1;
    goto CPyL10;
CPyL9: ;
    cpy_r_r16 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r16;
    goto CPyL4;
CPyL10: ;
    if (cpy_r_r7) goto CPyL12;
    return 0;
CPyL12: ;
    cpy_r_r17 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r17;
    goto CPyL1;
CPyL13: ;
    cpy_r_r18 = 0;
CPyL14: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_y)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL26;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_y, cpy_r_r18);
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_constraints___Constraint))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "is_same_constraints", 433, CPyStatic_constraints___globals, "mypy.constraints.Constraint", cpy_r_r23);
        goto CPyL27;
    }
    cpy_r_c1 = cpy_r_r24;
    cpy_r_r25 = 0;
    cpy_r_r26 = 0;
CPyL17: ;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_x)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = (Py_ssize_t)cpy_r_r26 < (Py_ssize_t)cpy_r_r29;
    if (!cpy_r_r30) goto CPyL31;
    cpy_r_r31 = CPyList_GetItemUnsafe(cpy_r_x, cpy_r_r26);
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_constraints___Constraint))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "is_same_constraints", 434, CPyStatic_constraints___globals, "mypy.constraints.Constraint", cpy_r_r31);
        goto CPyL29;
    }
    cpy_r_c2_2 = cpy_r_r32;
    cpy_r_r33 = CPyDef_constraints___is_same_constraint(cpy_r_c1, cpy_r_c2_2);
    CPy_DECREF(cpy_r_c2_2);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "is_same_constraints", 434, CPyStatic_constraints___globals);
        goto CPyL29;
    }
    if (cpy_r_r33) {
        goto CPyL32;
    } else
        goto CPyL22;
CPyL21: ;
    cpy_r_r25 = 1;
    goto CPyL23;
CPyL22: ;
    cpy_r_r34 = cpy_r_r26 + 2;
    cpy_r_r26 = cpy_r_r34;
    goto CPyL17;
CPyL23: ;
    if (cpy_r_r25) goto CPyL25;
    return 0;
CPyL25: ;
    cpy_r_r35 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r35;
    goto CPyL14;
CPyL26: ;
    return 1;
CPyL27: ;
    cpy_r_r36 = 2;
    return cpy_r_r36;
CPyL28: ;
    CPy_DECREF(cpy_r_c1);
    goto CPyL10;
CPyL29: ;
    CPy_DecRef(cpy_r_c1);
    goto CPyL27;
CPyL30: ;
    CPy_DECREF(cpy_r_c1);
    goto CPyL8;
CPyL31: ;
    CPy_DECREF(cpy_r_c1);
    goto CPyL23;
CPyL32: ;
    CPy_DECREF(cpy_r_c1);
    goto CPyL21;
}

PyObject *CPyPy_constraints___is_same_constraints(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"x", "y", 0};
    static CPyArg_Parser parser = {"OO:is_same_constraints", kwlist, 0};
    PyObject *obj_x;
    PyObject *obj_y;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_x, &obj_y)) {
        return NULL;
    }
    PyObject *arg_x;
    if (likely(PyList_Check(obj_x)))
        arg_x = obj_x;
    else {
        CPy_TypeError("list", obj_x); 
        goto fail;
    }
    PyObject *arg_y;
    if (likely(PyList_Check(obj_y)))
        arg_y = obj_y;
    else {
        CPy_TypeError("list", obj_y); 
        goto fail;
    }
    char retval = CPyDef_constraints___is_same_constraints(arg_x, arg_y);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "is_same_constraints", 429, CPyStatic_constraints___globals);
    return NULL;
}

char CPyDef_constraints___is_same_constraint(PyObject *cpy_r_c1, PyObject *cpy_r_c2) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_skip_op_check;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    int64_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = ((mypy___constraints___ConstraintObject *)cpy_r_c1)->_target;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_types___get_proper_type(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "is_same_constraint", 441, CPyStatic_constraints___globals);
        goto CPyL21;
    }
    cpy_r_r2 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_r1)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    CPy_DECREF(cpy_r_r1);
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) goto CPyL3;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL5;
CPyL3: ;
    cpy_r_r7 = ((mypy___constraints___ConstraintObject *)cpy_r_c2)->_target;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_types___get_proper_type(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "is_same_constraint", 442, CPyStatic_constraints___globals);
        goto CPyL21;
    }
    cpy_r_r9 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_r8)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    CPy_DECREF(cpy_r_r8);
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    cpy_r_r6 = cpy_r_r12;
CPyL5: ;
    cpy_r_skip_op_check = cpy_r_r6;
    cpy_r_r13 = ((mypy___constraints___ConstraintObject *)cpy_r_c1)->_type_var;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = ((mypy___constraints___ConstraintObject *)cpy_r_c2)->_type_var;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyDef_types___TypeVarId_____eq__(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "is_same_constraint", 445, CPyStatic_constraints___globals);
        goto CPyL21;
    }
    if (unlikely(!PyBool_Check(cpy_r_r15))) {
        CPy_TypeError("bool", cpy_r_r15); cpy_r_r16 = 2;
    } else
        cpy_r_r16 = cpy_r_r15 == Py_True;
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "is_same_constraint", 445, CPyStatic_constraints___globals);
        goto CPyL21;
    }
    if (cpy_r_r16) goto CPyL9;
    cpy_r_r17 = cpy_r_r16;
    goto CPyL20;
CPyL9: ;
    cpy_r_r18 = ((mypy___constraints___ConstraintObject *)cpy_r_c1)->_op;
    cpy_r_r19 = ((mypy___constraints___ConstraintObject *)cpy_r_c2)->_op;
    cpy_r_r20 = cpy_r_r18 & 1;
    cpy_r_r21 = cpy_r_r20 == 0;
    if (!cpy_r_r21) goto CPyL11;
    cpy_r_r22 = cpy_r_r18 == cpy_r_r19;
    cpy_r_r23 = cpy_r_r22;
    goto CPyL12;
CPyL11: ;
    cpy_r_r24 = CPyTagged_IsEq_(cpy_r_r18, cpy_r_r19);
    cpy_r_r23 = cpy_r_r24;
CPyL12: ;
    if (!cpy_r_r23) goto CPyL14;
    cpy_r_r25 = cpy_r_r23;
    goto CPyL15;
CPyL14: ;
    cpy_r_r25 = cpy_r_skip_op_check;
CPyL15: ;
    if (cpy_r_r25) goto CPyL17;
    cpy_r_r26 = cpy_r_r25;
    goto CPyL19;
CPyL17: ;
    cpy_r_r27 = ((mypy___constraints___ConstraintObject *)cpy_r_c1)->_target;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = ((mypy___constraints___ConstraintObject *)cpy_r_c2)->_target;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = 2;
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPyDef_subtypes___is_same_type(cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "is_same_constraint", 447, CPyStatic_constraints___globals);
        goto CPyL21;
    }
    cpy_r_r26 = cpy_r_r31;
CPyL19: ;
    cpy_r_r17 = cpy_r_r26;
CPyL20: ;
    return cpy_r_r17;
CPyL21: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
}

PyObject *CPyPy_constraints___is_same_constraint(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"c1", "c2", 0};
    static CPyArg_Parser parser = {"OO:is_same_constraint", kwlist, 0};
    PyObject *obj_c1;
    PyObject *obj_c2;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_c1, &obj_c2)) {
        return NULL;
    }
    PyObject *arg_c1;
    if (likely(Py_TYPE(obj_c1) == CPyType_constraints___Constraint))
        arg_c1 = obj_c1;
    else {
        CPy_TypeError("mypy.constraints.Constraint", obj_c1); 
        goto fail;
    }
    PyObject *arg_c2;
    if (likely(Py_TYPE(obj_c2) == CPyType_constraints___Constraint))
        arg_c2 = obj_c2;
    else {
        CPy_TypeError("mypy.constraints.Constraint", obj_c2); 
        goto fail;
    }
    char retval = CPyDef_constraints___is_same_constraint(arg_c1, arg_c2);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "is_same_constraint", 439, CPyStatic_constraints___globals);
    return NULL;
}

char CPyDef_constraints___is_similar_constraints(PyObject *cpy_r_x, PyObject *cpy_r_y) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_constraints____is_similar_constraints(cpy_r_x, cpy_r_y);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "is_similar_constraints", 458, CPyStatic_constraints___globals);
        goto CPyL6;
    }
    if (cpy_r_r0) goto CPyL3;
    cpy_r_r1 = cpy_r_r0;
    goto CPyL5;
CPyL3: ;
    cpy_r_r2 = CPyDef_constraints____is_similar_constraints(cpy_r_y, cpy_r_x);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "is_similar_constraints", 458, CPyStatic_constraints___globals);
        goto CPyL6;
    }
    cpy_r_r1 = cpy_r_r2;
CPyL5: ;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_constraints___is_similar_constraints(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"x", "y", 0};
    static CPyArg_Parser parser = {"OO:is_similar_constraints", kwlist, 0};
    PyObject *obj_x;
    PyObject *obj_y;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_x, &obj_y)) {
        return NULL;
    }
    PyObject *arg_x;
    if (likely(PyList_Check(obj_x)))
        arg_x = obj_x;
    else {
        CPy_TypeError("list", obj_x); 
        goto fail;
    }
    PyObject *arg_y;
    if (likely(PyList_Check(obj_y)))
        arg_y = obj_y;
    else {
        CPy_TypeError("list", obj_y); 
        goto fail;
    }
    char retval = CPyDef_constraints___is_similar_constraints(arg_x, arg_y);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "is_similar_constraints", 451, CPyStatic_constraints___globals);
    return NULL;
}

char CPyDef_constraints____is_similar_constraints(PyObject *cpy_r_x, PyObject *cpy_r_y) {
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_c1;
    char cpy_r_has_similar;
    CPyTagged cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_c2;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_skip_op_check;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    CPyTagged cpy_r_r32;
    int64_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyTagged cpy_r_r38;
    char cpy_r_r39;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_x)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL23;
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_x, cpy_r_r0);
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_constraints___Constraint))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_is_similar_constraints", 466, CPyStatic_constraints___globals, "mypy.constraints.Constraint", cpy_r_r5);
        goto CPyL24;
    }
    cpy_r_c1 = cpy_r_r6;
    cpy_r_has_similar = 0;
    cpy_r_r7 = 0;
CPyL4: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_y)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL25;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_y, cpy_r_r7);
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_constraints___Constraint))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "_is_similar_constraints", 468, CPyStatic_constraints___globals, "mypy.constraints.Constraint", cpy_r_r12);
        goto CPyL26;
    }
    cpy_r_c2 = cpy_r_r13;
    cpy_r_r14 = ((mypy___constraints___ConstraintObject *)cpy_r_c1)->_target;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyDef_types___get_proper_type(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_is_similar_constraints", 470, CPyStatic_constraints___globals);
        goto CPyL27;
    }
    cpy_r_r16 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    CPy_DECREF(cpy_r_r15);
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL9;
    cpy_r_r20 = cpy_r_r19;
    goto CPyL11;
CPyL9: ;
    cpy_r_r21 = ((mypy___constraints___ConstraintObject *)cpy_r_c2)->_target;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyDef_types___get_proper_type(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_is_similar_constraints", 471, CPyStatic_constraints___globals);
        goto CPyL27;
    }
    cpy_r_r23 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r22)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    CPy_DECREF(cpy_r_r22);
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    cpy_r_r20 = cpy_r_r26;
CPyL11: ;
    cpy_r_skip_op_check = cpy_r_r20;
    cpy_r_r27 = ((mypy___constraints___ConstraintObject *)cpy_r_c1)->_type_var;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = ((mypy___constraints___ConstraintObject *)cpy_r_c2)->_type_var;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyDef_types___TypeVarId_____eq__(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "_is_similar_constraints", 473, CPyStatic_constraints___globals);
        goto CPyL27;
    }
    if (unlikely(!PyBool_Check(cpy_r_r29))) {
        CPy_TypeError("bool", cpy_r_r29); cpy_r_r30 = 2;
    } else
        cpy_r_r30 = cpy_r_r29 == Py_True;
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "_is_similar_constraints", 473, CPyStatic_constraints___globals);
        goto CPyL27;
    }
    if (!cpy_r_r30) goto CPyL28;
    cpy_r_r31 = ((mypy___constraints___ConstraintObject *)cpy_r_c1)->_op;
    cpy_r_r32 = ((mypy___constraints___ConstraintObject *)cpy_r_c2)->_op;
    cpy_r_r33 = cpy_r_r31 & 1;
    cpy_r_r34 = cpy_r_r33 != 0;
    CPy_DECREF(cpy_r_c2);
    if (!cpy_r_r34) goto CPyL16;
    cpy_r_r35 = CPyTagged_IsEq_(cpy_r_r31, cpy_r_r32);
    if (cpy_r_r35) {
        goto CPyL29;
    } else
        goto CPyL17;
CPyL16: ;
    cpy_r_r36 = cpy_r_r31 == cpy_r_r32;
    if (cpy_r_r36) goto CPyL29;
CPyL17: ;
    if (cpy_r_skip_op_check) {
        goto CPyL29;
    } else
        goto CPyL19;
CPyL18: ;
    cpy_r_has_similar = 1;
    goto CPyL20;
CPyL19: ;
    cpy_r_r37 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r37;
    goto CPyL4;
CPyL20: ;
    if (cpy_r_has_similar) goto CPyL22;
    return 0;
CPyL22: ;
    cpy_r_r38 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r38;
    goto CPyL1;
CPyL23: ;
    return 1;
CPyL24: ;
    cpy_r_r39 = 2;
    return cpy_r_r39;
CPyL25: ;
    CPy_DECREF(cpy_r_c1);
    goto CPyL20;
CPyL26: ;
    CPy_DecRef(cpy_r_c1);
    goto CPyL24;
CPyL27: ;
    CPy_DecRef(cpy_r_c1);
    CPy_DecRef(cpy_r_c2);
    goto CPyL24;
CPyL28: ;
    CPy_DECREF(cpy_r_c2);
    goto CPyL19;
CPyL29: ;
    CPy_DECREF(cpy_r_c1);
    goto CPyL18;
}

PyObject *CPyPy_constraints____is_similar_constraints(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"x", "y", 0};
    static CPyArg_Parser parser = {"OO:_is_similar_constraints", kwlist, 0};
    PyObject *obj_x;
    PyObject *obj_y;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_x, &obj_y)) {
        return NULL;
    }
    PyObject *arg_x;
    if (likely(PyList_Check(obj_x)))
        arg_x = obj_x;
    else {
        CPy_TypeError("list", obj_x); 
        goto fail;
    }
    PyObject *arg_y;
    if (likely(PyList_Check(obj_y)))
        arg_y = obj_y;
    else {
        CPy_TypeError("list", obj_y); 
        goto fail;
    }
    char retval = CPyDef_constraints____is_similar_constraints(arg_x, arg_y);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "_is_similar_constraints", 461, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___simplify_away_incomplete_types(PyObject *cpy_r_types) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_typ;
    char cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_complete;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "simplify_away_incomplete_types", 482, CPyStatic_constraints___globals);
        goto CPyL12;
    }
    cpy_r_r1 = PyObject_GetIter(cpy_r_types);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "simplify_away_incomplete_types", 482, CPyStatic_constraints___globals);
        goto CPyL13;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL14;
    if (likely(PyObject_TypeCheck(cpy_r_r2, CPyType_types___Type)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "simplify_away_incomplete_types", 482, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r2);
        goto CPyL15;
    }
    cpy_r_typ = cpy_r_r3;
    cpy_r_r4 = CPyDef_constraints___is_complete_type(cpy_r_typ);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "simplify_away_incomplete_types", 482, CPyStatic_constraints___globals);
        goto CPyL16;
    }
    if (!cpy_r_r4) goto CPyL17;
    cpy_r_r5 = PyList_Append(cpy_r_r0, cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/constraints.py", "simplify_away_incomplete_types", 482, CPyStatic_constraints___globals);
        goto CPyL15;
    } else
        goto CPyL2;
CPyL7: ;
    cpy_r_r7 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/constraints.py", "simplify_away_incomplete_types", 482, CPyStatic_constraints___globals);
        goto CPyL13;
    }
    cpy_r_complete = cpy_r_r0;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_complete)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = cpy_r_r10 != 0;
    if (!cpy_r_r11) goto CPyL18;
    return cpy_r_complete;
CPyL10: ;
    cpy_r_r12 = PySequence_List(cpy_r_types);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "simplify_away_incomplete_types", 486, CPyStatic_constraints___globals);
        goto CPyL12;
    }
    return cpy_r_r12;
CPyL12: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL12;
CPyL14: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_typ);
    goto CPyL12;
CPyL17: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL2;
CPyL18: ;
    CPy_DECREF(cpy_r_complete);
    goto CPyL10;
}

PyObject *CPyPy_constraints___simplify_away_incomplete_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:simplify_away_incomplete_types", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_types = obj_types;
    PyObject *retval = CPyDef_constraints___simplify_away_incomplete_types(arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "simplify_away_incomplete_types", 481, CPyStatic_constraints___globals);
    return NULL;
}

char CPyDef_constraints___is_complete_type(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_constraints___CompleteTypeVisitor();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "is_complete_type", 495, CPyStatic_constraints___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_typ, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_typ, cpy_r_r0); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "is_complete_type", 495, CPyStatic_constraints___globals);
        goto CPyL4;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "is_complete_type", 495, CPyStatic_constraints___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_constraints___is_complete_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:is_complete_type", kwlist, 0};
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
    char retval = CPyDef_constraints___is_complete_type(arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "is_complete_type", 489, CPyStatic_constraints___globals);
    return NULL;
}

char CPyDef_constraints___CompleteTypeVisitor_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[761]; /* 'all' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "__init__", 500, CPyStatic_constraints___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyDef_type_visitor___TypeQuery_____init__(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "__init__", 500, CPyStatic_constraints___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_constraints___CompleteTypeVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___CompleteTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.CompleteTypeVisitor", obj_self); 
        goto fail;
    }
    char retval = CPyDef_constraints___CompleteTypeVisitor_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "__init__", 499, CPyStatic_constraints___globals);
    return NULL;
}

char CPyDef_constraints___CompleteTypeVisitor___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    return 0;
}

PyObject *CPyPy_constraints___CompleteTypeVisitor___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___CompleteTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.CompleteTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_constraints___CompleteTypeVisitor___visit_uninhabited_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_uninhabited_type", 502, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___CompleteTypeVisitor___visit_uninhabited_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_constraints___CompleteTypeVisitor___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_constraints___CompleteTypeVisitor___visit_uninhabited_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___CompleteTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.CompleteTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___CompleteTypeVisitor___visit_uninhabited_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_uninhabited_type__TypeQuery_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___CompleteTypeVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_constraints___CompleteTypeVisitor___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_constraints___CompleteTypeVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___CompleteTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.CompleteTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___CompleteTypeVisitor___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

char CPyDef_constraints___ConstraintBuilderVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_actual, CPyTagged cpy_r_direction) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    CPy_INCREF(cpy_r_actual);
    if (((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual != NULL) {
        CPy_DECREF(((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual);
    }
    ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual = cpy_r_actual;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/constraints.py", "__init__", 515, CPyStatic_constraints___globals);
        goto CPyL3;
    }
    CPyTagged_INCREF(cpy_r_direction);
    if (((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction);
    }
    ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction = cpy_r_direction;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/constraints.py", "__init__", 516, CPyStatic_constraints___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"actual", "direction", 0};
    PyObject *obj_actual;
    PyObject *obj_direction;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_actual, &obj_direction)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_actual;
    if (likely(PyObject_TypeCheck(obj_actual, CPyType_types___ProperType)))
        arg_actual = obj_actual;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_actual); 
        goto fail;
    }
    CPyTagged arg_direction;
    if (likely(PyLong_Check(obj_direction)))
        arg_direction = CPyTagged_BorrowFromObject(obj_direction);
    else {
        CPy_TypeError("int", obj_direction); goto fail;
    }
    char retval = CPyDef_constraints___ConstraintBuilderVisitor_____init__(arg_self, arg_actual, arg_direction);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "__init__", 513, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_unbound_type(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_unbound_type", 521, CPyStatic_constraints___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_unbound_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___UnboundType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_unbound_type(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_unbound_type", 520, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_unbound_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_unbound_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_unbound_type__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_any", 524, CPyStatic_constraints___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___AnyType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_any(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_any", 523, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_none_type(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_none_type", 527, CPyStatic_constraints___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_none_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_none_type", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___NoneType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_none_type(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_none_type", 526, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_none_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_none_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_none_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_none_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_none_type__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_uninhabited_type", 530, CPyStatic_constraints___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___UninhabitedType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_uninhabited_type(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_uninhabited_type", 529, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_erased_type(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_erased_type", 533, CPyStatic_constraints___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_erased_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___ErasedType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_erased_type(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_erased_type", 532, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_erased_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_erased_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_erased_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_erased_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_erased_type__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_deleted_type(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_deleted_type", 536, CPyStatic_constraints___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_deleted_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___DeletedType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_deleted_type(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_deleted_type", 535, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_deleted_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_deleted_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_deleted_type__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_literal_type", 539, CPyStatic_constraints___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___LiteralType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_literal_type(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_literal_type", 538, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_literal_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_literal_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_literal_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_literal_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_literal_type__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_partial_type(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "Internal error");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_partial_type", 545, CPyStatic_constraints___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___PartialType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_partial_type(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_partial_type", 543, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_partial_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_partial_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_partial_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_partial_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_partial_type__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "Unexpected TypeVarType in ConstraintBuilderVisitor (should have been handled in infer_constraints)");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_type_var", 550, CPyStatic_constraints___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___TypeVarType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_type_var(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_type_var", 549, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_param_spec", 557, CPyStatic_constraints___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___ParamSpecType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_param_spec(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_param_spec", 555, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_param_spec__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_param_spec(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_param_spec__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_param_spec__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_param_spec__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_type_var_tuple", 560, CPyStatic_constraints___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_type_var_tuple", 560, CPyStatic_constraints___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___TypeVarTupleType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_type_var_tuple(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_type_var_tuple", 559, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_type_var_tuple(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_type_var_tuple__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_type_var_tuple__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyStatics[1607]; /* 'Mypy bug: unpack should be handled at a higher level.' */
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_unpack_type", 563, CPyStatic_constraints___globals);
        goto CPyL4;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_r0};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_unpack_type", 563, CPyStatic_constraints___globals);
        goto CPyL4;
    }
    CPy_Raise(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_unpack_type", 563, CPyStatic_constraints___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___UnpackType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_unpack_type(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_unpack_type", 562, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_unpack_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_unpack_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_unpack_type__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_parameters(PyObject *cpy_r_self, PyObject *cpy_r_template) {
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
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_parameters", "ConstraintBuilderVisitor", "actual", 568, CPyStatic_constraints___globals);
        goto CPyL10;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL6;
    cpy_r_r5 = ((mypy___types___ParametersObject *)cpy_r_template)->_arg_types;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_parameters", "ConstraintBuilderVisitor", "actual", 569, CPyStatic_constraints___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r6);
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_types___AnyType))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_parameters", 569, CPyStatic_constraints___globals, "mypy.types.AnyType", cpy_r_r6);
        goto CPyL11;
    }
    cpy_r_r8 = CPyDef_constraints___ConstraintBuilderVisitor___infer_against_any(cpy_r_self, cpy_r_r5, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_parameters", 569, CPyStatic_constraints___globals);
        goto CPyL10;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = CPyStatics[1608]; /* 'Parameters cannot be constrained to' */
    cpy_r_r10 = CPyModule_builtins;
    cpy_r_r11 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_parameters", 570, CPyStatic_constraints___globals);
        goto CPyL10;
    }
    PyObject *cpy_r_r13[1] = {cpy_r_r9};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_parameters", 570, CPyStatic_constraints___globals);
        goto CPyL10;
    }
    CPy_Raise(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_parameters", 570, CPyStatic_constraints___globals);
        goto CPyL10;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL11: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL10;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_parameters", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___Parameters))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_parameters(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_parameters", 565, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_parameters__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_parameters(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_parameters__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_parameters__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_parameters__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_original_actual;
    PyObject *cpy_r_actual;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_res;
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
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_call;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_subres;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyPtr cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_ret_type;
    PyObject *cpy_r_r80;
    CPyPtr cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyPtr cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    CPyTagged cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_subtype;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    CPyPtr cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    CPyPtr cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    CPyTagged cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    CPyTagged cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_a_item;
    PyObject *cpy_r_r124;
    CPyPtr cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    CPyPtr cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    CPyPtr cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    CPyPtr cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    CPyPtr cpy_r_r167;
    PyObject *cpy_r_r168;
    char cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    CPyPtr cpy_r_r173;
    PyObject *cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_instance;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_erased;
    PyObject *cpy_r_r179;
    CPyPtr cpy_r_r180;
    PyObject *cpy_r_r181;
    char cpy_r_r182;
    char cpy_r_r183;
    CPyTagged cpy_r_r184;
    char cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_mapped;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_tvars;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    char cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    char cpy_r_r205;
    char cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    char cpy_r_r210;
    char cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    char cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    CPyTagged cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    CPyTagged cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    CPyTagged cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    CPyTagged cpy_r_r230;
    CPyTagged cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    tuple_T3OOO cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_unpack_constraints;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_mapped_args;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_instance_args;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    CPyTagged cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    CPyTagged cpy_r_r245;
    tuple_T3OOO cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_tvars_prefix;
    PyObject *cpy_r_r248;
    PyObject *cpy_r__;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_tvars_suffix;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    CPyTagged cpy_r_r255;
    CPyTagged cpy_r_r256;
    CPyTagged cpy_r_r257;
    CPyPtr cpy_r_r258;
    int64_t cpy_r_r259;
    CPyTagged cpy_r_r260;
    char cpy_r_r261;
    CPyPtr cpy_r_r262;
    int64_t cpy_r_r263;
    CPyTagged cpy_r_r264;
    char cpy_r_r265;
    CPyPtr cpy_r_r266;
    int64_t cpy_r_r267;
    CPyTagged cpy_r_r268;
    char cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_tvar;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_mapped_arg;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_instance_arg;
    PyObject *cpy_r_r276;
    CPyPtr cpy_r_r277;
    PyObject *cpy_r_r278;
    char cpy_r_r279;
    PyObject *cpy_r_r280;
    CPyTagged cpy_r_r281;
    char cpy_r_r282;
    CPyTagged cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    CPyTagged cpy_r_r287;
    char cpy_r_r288;
    CPyTagged cpy_r_r289;
    CPyTagged cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    CPyPtr cpy_r_r294;
    PyObject *cpy_r_r295;
    char cpy_r_r296;
    PyObject *cpy_r_r297;
    CPyPtr cpy_r_r298;
    PyObject *cpy_r_r299;
    char cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_suffix;
    PyObject *cpy_r_r303;
    CPyPtr cpy_r_r304;
    PyObject *cpy_r_r305;
    char cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_prefix;
    PyObject *cpy_r_r309;
    CPyPtr cpy_r_r310;
    int64_t cpy_r_r311;
    CPyTagged cpy_r_r312;
    char cpy_r_r313;
    char cpy_r_r314;
    PyObject *cpy_r_r315;
    char cpy_r_r316;
    char cpy_r_from_concat;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    CPyTagged cpy_r_r326;
    CPyTagged cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    CPyPtr cpy_r_r339;
    PyObject *cpy_r_r340;
    char cpy_r_r341;
    char cpy_r_r342;
    PyObject *cpy_r_r343;
    CPyPtr cpy_r_r344;
    PyObject *cpy_r_r345;
    char cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    CPyPtr cpy_r_r352;
    PyObject *cpy_r_r353;
    char cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    CPyPtr cpy_r_r361;
    int64_t cpy_r_r362;
    CPyTagged cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    CPyPtr cpy_r_r368;
    PyObject *cpy_r_r369;
    char cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    CPyPtr cpy_r_r377;
    int64_t cpy_r_r378;
    CPyTagged cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    CPyPtr cpy_r_r384;
    PyObject *cpy_r_r385;
    char cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    CPyPtr cpy_r_r393;
    int64_t cpy_r_r394;
    CPyTagged cpy_r_r395;
    PyObject *cpy_r_r396;
    PyObject *cpy_r_r397;
    PyObject *cpy_r_r398;
    CPyPtr cpy_r_r399;
    PyObject *cpy_r_r400;
    char cpy_r_r401;
    PyObject *cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    CPyTagged cpy_r_r413;
    CPyTagged cpy_r_r414;
    PyObject *cpy_r_r415;
    PyObject *cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject *cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject *cpy_r_r427;
    int32_t cpy_r_r428;
    char cpy_r_r429;
    PyObject *cpy_r_r430;
    CPyPtr cpy_r_r431;
    PyObject *cpy_r_r432;
    char cpy_r_r433;
    PyObject *cpy_r_r434;
    PyObject *cpy_r_r435;
    PyObject *cpy_r_r436;
    int32_t cpy_r_r437;
    char cpy_r_r438;
    PyObject *cpy_r_r439;
    CPyPtr cpy_r_r440;
    PyObject *cpy_r_r441;
    char cpy_r_r442;
    char cpy_r_r443;
    char cpy_r_r444;
    CPyTagged cpy_r_r445;
    CPyTagged cpy_r_r446;
    CPyTagged cpy_r_r447;
    CPyTagged cpy_r_r448;
    char cpy_r_r449;
    PyObject *cpy_r_r450;
    PyObject *cpy_r_r451;
    PyObject *cpy_r_r452;
    char cpy_r_r453;
    PyObject *cpy_r_r454;
    PyObject *cpy_r_r455;
    PyObject *cpy_r_r456;
    PyObject *cpy_r_r457;
    PyObject *cpy_r_r458;
    PyObject *cpy_r_r459;
    char cpy_r_r460;
    PyObject *cpy_r_r461;
    PyObject *cpy_r_r462;
    PyObject *cpy_r_r463;
    char cpy_r_r464;
    char cpy_r_r465;
    PyObject *cpy_r_r466;
    PyObject *cpy_r_r467;
    PyObject *cpy_r_r468;
    char cpy_r_r469;
    char cpy_r_r470;
    PyObject *cpy_r_r471;
    PyObject *cpy_r_r472;
    PyObject *cpy_r_r473;
    char cpy_r_r474;
    char cpy_r_r475;
    PyObject *cpy_r_r476;
    PyObject *cpy_r_r477;
    PyObject *cpy_r_r478;
    char cpy_r_r479;
    char cpy_r_r480;
    PyObject *cpy_r_r481;
    PyObject *cpy_r_r482;
    PyObject *cpy_r_r483;
    CPyTagged cpy_r_r484;
    PyObject *cpy_r_r485;
    PyObject *cpy_r_r486;
    CPyTagged cpy_r_r487;
    PyObject *cpy_r_r488;
    PyObject *cpy_r_r489;
    PyObject *cpy_r_r490;
    CPyTagged cpy_r_r491;
    PyObject *cpy_r_r492;
    PyObject *cpy_r_r493;
    CPyTagged cpy_r_r494;
    CPyTagged cpy_r_r495;
    PyObject *cpy_r_r496;
    PyObject *cpy_r_r497;
    tuple_T3OOO cpy_r_r498;
    PyObject *cpy_r_r499;
    PyObject *cpy_r_r500;
    PyObject *cpy_r_r501;
    PyObject *cpy_r_template_args;
    PyObject *cpy_r_r502;
    PyObject *cpy_r_r503;
    PyObject *cpy_r_r504;
    PyObject *cpy_r_r505;
    CPyTagged cpy_r_r506;
    PyObject *cpy_r_r507;
    PyObject *cpy_r_r508;
    CPyTagged cpy_r_r509;
    tuple_T3OOO cpy_r_r510;
    PyObject *cpy_r_r511;
    PyObject *cpy_r_r512;
    PyObject *cpy_r_r513;
    PyObject *cpy_r_r514;
    PyObject *cpy_r_r515;
    PyObject *cpy_r_r516;
    PyObject *cpy_r_r517;
    PyObject *cpy_r_r518;
    CPyTagged cpy_r_r519;
    CPyTagged cpy_r_r520;
    CPyTagged cpy_r_r521;
    CPyPtr cpy_r_r522;
    int64_t cpy_r_r523;
    CPyTagged cpy_r_r524;
    char cpy_r_r525;
    CPyPtr cpy_r_r526;
    int64_t cpy_r_r527;
    CPyTagged cpy_r_r528;
    char cpy_r_r529;
    CPyPtr cpy_r_r530;
    int64_t cpy_r_r531;
    CPyTagged cpy_r_r532;
    char cpy_r_r533;
    PyObject *cpy_r_r534;
    PyObject *cpy_r_r535;
    PyObject *cpy_r_r536;
    PyObject *cpy_r_r537;
    PyObject *cpy_r_r538;
    PyObject *cpy_r_r539;
    PyObject *cpy_r_template_arg;
    PyObject *cpy_r_r540;
    CPyPtr cpy_r_r541;
    PyObject *cpy_r_r542;
    char cpy_r_r543;
    char cpy_r_r544;
    char cpy_r_r545;
    PyObject *cpy_r_r546;
    CPyPtr cpy_r_r547;
    PyObject *cpy_r_r548;
    char cpy_r_r549;
    PyObject *cpy_r_r550;
    CPyTagged cpy_r_r551;
    char cpy_r_r552;
    CPyTagged cpy_r_r553;
    PyObject *cpy_r_r554;
    PyObject *cpy_r_r555;
    PyObject *cpy_r_r556;
    CPyTagged cpy_r_r557;
    char cpy_r_r558;
    CPyTagged cpy_r_r559;
    CPyTagged cpy_r_r560;
    PyObject *cpy_r_r561;
    PyObject *cpy_r_r562;
    PyObject *cpy_r_r563;
    CPyPtr cpy_r_r564;
    PyObject *cpy_r_r565;
    char cpy_r_r566;
    PyObject *cpy_r_r567;
    CPyPtr cpy_r_r568;
    PyObject *cpy_r_r569;
    char cpy_r_r570;
    PyObject *cpy_r_r571;
    PyObject *cpy_r_r572;
    PyObject *cpy_r_r573;
    CPyPtr cpy_r_r574;
    PyObject *cpy_r_r575;
    char cpy_r_r576;
    PyObject *cpy_r_r577;
    PyObject *cpy_r_r578;
    PyObject *cpy_r_r579;
    CPyPtr cpy_r_r580;
    int64_t cpy_r_r581;
    CPyTagged cpy_r_r582;
    char cpy_r_r583;
    char cpy_r_r584;
    PyObject *cpy_r_r585;
    char cpy_r_r586;
    PyObject *cpy_r_r587;
    PyObject *cpy_r_r588;
    PyObject *cpy_r_r589;
    PyObject *cpy_r_r590;
    PyObject *cpy_r_r591;
    PyObject *cpy_r_r592;
    PyObject *cpy_r_r593;
    PyObject *cpy_r_r594;
    PyObject *cpy_r_r595;
    CPyTagged cpy_r_r596;
    CPyTagged cpy_r_r597;
    PyObject *cpy_r_r598;
    PyObject *cpy_r_r599;
    PyObject *cpy_r_r600;
    PyObject *cpy_r_r601;
    PyObject *cpy_r_r602;
    PyObject *cpy_r_r603;
    PyObject *cpy_r_r604;
    PyObject *cpy_r_r605;
    PyObject *cpy_r_r606;
    PyObject *cpy_r_r607;
    PyObject *cpy_r_r608;
    CPyPtr cpy_r_r609;
    PyObject *cpy_r_r610;
    char cpy_r_r611;
    char cpy_r_r612;
    PyObject *cpy_r_r613;
    CPyPtr cpy_r_r614;
    PyObject *cpy_r_r615;
    char cpy_r_r616;
    PyObject *cpy_r_r617;
    PyObject *cpy_r_r618;
    PyObject *cpy_r_r619;
    PyObject *cpy_r_r620;
    PyObject *cpy_r_r621;
    CPyPtr cpy_r_r622;
    PyObject *cpy_r_r623;
    char cpy_r_r624;
    PyObject *cpy_r_r625;
    PyObject *cpy_r_r626;
    PyObject *cpy_r_r627;
    PyObject *cpy_r_r628;
    PyObject *cpy_r_r629;
    PyObject *cpy_r_r630;
    CPyPtr cpy_r_r631;
    int64_t cpy_r_r632;
    CPyTagged cpy_r_r633;
    PyObject *cpy_r_r634;
    PyObject *cpy_r_r635;
    PyObject *cpy_r_r636;
    PyObject *cpy_r_r637;
    CPyPtr cpy_r_r638;
    PyObject *cpy_r_r639;
    char cpy_r_r640;
    PyObject *cpy_r_r641;
    PyObject *cpy_r_r642;
    PyObject *cpy_r_r643;
    PyObject *cpy_r_r644;
    PyObject *cpy_r_r645;
    PyObject *cpy_r_r646;
    CPyPtr cpy_r_r647;
    int64_t cpy_r_r648;
    CPyTagged cpy_r_r649;
    PyObject *cpy_r_r650;
    PyObject *cpy_r_r651;
    PyObject *cpy_r_r652;
    PyObject *cpy_r_r653;
    CPyPtr cpy_r_r654;
    PyObject *cpy_r_r655;
    char cpy_r_r656;
    PyObject *cpy_r_r657;
    PyObject *cpy_r_r658;
    PyObject *cpy_r_r659;
    PyObject *cpy_r_r660;
    PyObject *cpy_r_r661;
    PyObject *cpy_r_r662;
    CPyPtr cpy_r_r663;
    int64_t cpy_r_r664;
    CPyTagged cpy_r_r665;
    PyObject *cpy_r_r666;
    PyObject *cpy_r_r667;
    PyObject *cpy_r_r668;
    CPyPtr cpy_r_r669;
    PyObject *cpy_r_r670;
    char cpy_r_r671;
    PyObject *cpy_r_r672;
    PyObject *cpy_r_r673;
    PyObject *cpy_r_r674;
    PyObject *cpy_r_r675;
    PyObject *cpy_r_r676;
    PyObject *cpy_r_r677;
    PyObject *cpy_r_r678;
    PyObject *cpy_r_r679;
    PyObject *cpy_r_r680;
    PyObject *cpy_r_r681;
    PyObject *cpy_r_r682;
    CPyTagged cpy_r_r683;
    CPyTagged cpy_r_r684;
    PyObject *cpy_r_r685;
    PyObject *cpy_r_r686;
    PyObject *cpy_r_r687;
    PyObject *cpy_r_r688;
    PyObject *cpy_r_r689;
    PyObject *cpy_r_r690;
    PyObject *cpy_r_r691;
    PyObject *cpy_r_r692;
    PyObject *cpy_r_r693;
    PyObject *cpy_r_r694;
    PyObject *cpy_r_r695;
    PyObject *cpy_r_r696;
    PyObject *cpy_r_r697;
    int32_t cpy_r_r698;
    char cpy_r_r699;
    PyObject *cpy_r_r700;
    CPyPtr cpy_r_r701;
    PyObject *cpy_r_r702;
    char cpy_r_r703;
    PyObject *cpy_r_r704;
    PyObject *cpy_r_r705;
    PyObject *cpy_r_r706;
    int32_t cpy_r_r707;
    char cpy_r_r708;
    PyObject *cpy_r_r709;
    CPyPtr cpy_r_r710;
    PyObject *cpy_r_r711;
    char cpy_r_r712;
    char cpy_r_r713;
    char cpy_r_r714;
    CPyTagged cpy_r_r715;
    CPyTagged cpy_r_r716;
    CPyTagged cpy_r_r717;
    PyObject *cpy_r_r718;
    char cpy_r_r719;
    CPyTagged cpy_r_r720;
    char cpy_r_r721;
    char cpy_r_r722;
    PyObject *cpy_r_r723;
    PyObject *cpy_r_r724;
    CPyPtr cpy_r_r725;
    int64_t cpy_r_r726;
    CPyTagged cpy_r_r727;
    CPyTagged cpy_r_r728;
    CPyTagged cpy_r_r729;
    int64_t cpy_r_r730;
    char cpy_r_r731;
    int64_t cpy_r_r732;
    char cpy_r_r733;
    char cpy_r_r734;
    char cpy_r_r735;
    char cpy_r_r736;
    char cpy_r_r737;
    char cpy_r_r738;
    CPyPtr cpy_r_r739;
    int64_t cpy_r_r740;
    CPyTagged cpy_r_r741;
    int64_t cpy_r_r742;
    char cpy_r_r743;
    int64_t cpy_r_r744;
    char cpy_r_r745;
    char cpy_r_r746;
    char cpy_r_r747;
    char cpy_r_r748;
    char cpy_r_r749;
    PyObject *cpy_r_r750;
    CPyTagged cpy_r_r751;
    PyObject *cpy_r_r752;
    PyObject *cpy_r_r753;
    PyObject *cpy_r_t_2;
    PyObject *cpy_r_r754;
    char cpy_r_r755;
    CPyTagged cpy_r_r756;
    PyObject *cpy_r_r757;
    PyObject *cpy_r_r758;
    PyObject *cpy_r_r759;
    CPyPtr cpy_r_r760;
    CPyPtr cpy_r_r761;
    char cpy_r_r762;
    char cpy_r_r763;
    char cpy_r_r764;
    PyObject *cpy_r_r765;
    PyObject *cpy_r_r766;
    int32_t cpy_r_r767;
    char cpy_r_r768;
    char cpy_r_r769;
    PyObject *cpy_r_r770;
    PyObject *cpy_r_r771;
    PyObject *cpy_r_r772;
    PyObject *cpy_r_r773;
    PyObject *cpy_r_r774;
    PyObject *cpy_r_r775;
    PyObject *cpy_r_r776;
    char cpy_r_r777;
    CPyTagged cpy_r_r778;
    char cpy_r_r779;
    char cpy_r_r780;
    PyObject *cpy_r_r781;
    PyObject *cpy_r_r782;
    CPyPtr cpy_r_r783;
    int64_t cpy_r_r784;
    CPyTagged cpy_r_r785;
    CPyTagged cpy_r_r786;
    CPyTagged cpy_r_r787;
    int64_t cpy_r_r788;
    char cpy_r_r789;
    int64_t cpy_r_r790;
    char cpy_r_r791;
    char cpy_r_r792;
    char cpy_r_r793;
    char cpy_r_r794;
    char cpy_r_r795;
    char cpy_r_r796;
    CPyPtr cpy_r_r797;
    int64_t cpy_r_r798;
    CPyTagged cpy_r_r799;
    int64_t cpy_r_r800;
    char cpy_r_r801;
    int64_t cpy_r_r802;
    char cpy_r_r803;
    char cpy_r_r804;
    char cpy_r_r805;
    char cpy_r_r806;
    char cpy_r_r807;
    PyObject *cpy_r_r808;
    CPyTagged cpy_r_r809;
    PyObject *cpy_r_r810;
    PyObject *cpy_r_r811;
    PyObject *cpy_r_i;
    PyObject *cpy_r_r812;
    char cpy_r_r813;
    CPyTagged cpy_r_r814;
    PyObject *cpy_r_r815;
    PyObject *cpy_r_r816;
    PyObject *cpy_r_r817;
    CPyPtr cpy_r_r818;
    CPyPtr cpy_r_r819;
    char cpy_r_r820;
    char cpy_r_r821;
    char cpy_r_r822;
    PyObject *cpy_r_r823;
    PyObject *cpy_r_r824;
    int32_t cpy_r_r825;
    char cpy_r_r826;
    char cpy_r_r827;
    PyObject *cpy_r_r828;
    PyObject *cpy_r_r829;
    PyObject *cpy_r_r830;
    PyObject *cpy_r_r831;
    PyObject *cpy_r_r832;
    PyObject *cpy_r_r833;
    CPyPtr cpy_r_r834;
    int64_t cpy_r_r835;
    CPyTagged cpy_r_r836;
    char cpy_r_r837;
    PyObject *cpy_r_r838;
    CPyPtr cpy_r_r839;
    PyObject *cpy_r_r840;
    char cpy_r_r841;
    PyObject *cpy_r_r842;
    PyObject *cpy_r_r843;
    PyObject *cpy_r_r844;
    PyObject *cpy_r_r845;
    CPyPtr cpy_r_r846;
    PyObject *cpy_r_r847;
    char cpy_r_r848;
    tuple_T5OOOOO cpy_r_r849;
    char cpy_r_r850;
    PyObject *cpy_r_r851;
    char cpy_r_r852;
    CPyTagged cpy_r_r853;
    char cpy_r_r854;
    PyObject *cpy_r_r855;
    PyObject *cpy_r_r856;
    CPyTagged cpy_r_r857;
    CPyPtr cpy_r_r858;
    int64_t cpy_r_r859;
    CPyTagged cpy_r_r860;
    char cpy_r_r861;
    PyObject *cpy_r_r862;
    PyObject *cpy_r_r863;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r864;
    PyObject *cpy_r_r865;
    PyObject *cpy_r_r866;
    PyObject *cpy_r_r867;
    PyObject *cpy_r_cb;
    PyObject *cpy_r_r868;
    CPyTagged cpy_r_r869;
    PyObject *cpy_r_r870;
    CPyPtr cpy_r_r871;
    PyObject *cpy_r_r872;
    char cpy_r_r873;
    CPyTagged cpy_r_r874;
    char cpy_r_r875;
    PyObject *cpy_r_r876;
    PyObject *cpy_r_r877;
    CPyTagged cpy_r_r878;
    PyObject *cpy_r_r879;
    PyObject *cpy_r_r880;
    CPyPtr cpy_r_r881;
    PyObject *cpy_r_r882;
    char cpy_r_r883;
    PyObject *cpy_r_r884;
    PyObject *cpy_r_r885;
    CPyPtr cpy_r_r886;
    int64_t cpy_r_r887;
    CPyTagged cpy_r_r888;
    char cpy_r_r889;
    PyObject *cpy_r_r890;
    PyObject *cpy_r_r891;
    CPyTagged cpy_r_r892;
    PyObject *cpy_r_r893;
    PyObject *cpy_r_r894;
    PyObject *cpy_r_r895;
    CPyPtr cpy_r_r896;
    PyObject *cpy_r_r897;
    char cpy_r_r898;
    PyObject *cpy_r_r899;
    PyObject *cpy_r_r900;
    CPyTagged cpy_r_r901;
    PyObject *cpy_r_r902;
    PyObject *cpy_r_r903;
    CPyPtr cpy_r_r904;
    PyObject *cpy_r_r905;
    char cpy_r_r906;
    PyObject *cpy_r_r907;
    PyObject *cpy_r_r908;
    PyObject *cpy_r_r909;
    PyObject *cpy_r_r910;
    PyObject *cpy_r_r911;
    cpy_r_r0 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "actual", 575, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_original_actual = cpy_r_r0;
    cpy_r_actual = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 576, CPyStatic_constraints___globals);
        goto CPyL506;
    }
    cpy_r_res = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL5;
CPyL4: ;
    cpy_r_r7 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    cpy_r_r6 = cpy_r_r10;
CPyL5: ;
    if (!cpy_r_r6) goto CPyL41;
    cpy_r_r11 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r12 = ((mypy___nodes___TypeInfoObject *)cpy_r_r11)->_is_protocol;
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "is_protocol", 577, CPyStatic_constraints___globals);
        goto CPyL507;
    }
CPyL7: ;
    if (!cpy_r_r12) goto CPyL41;
CPyL8: ;
    cpy_r_r13 = CPyStatics[706]; /* '__call__' */
    cpy_r_r14 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r15 = CPY_GET_ATTR(cpy_r_r14, CPyType_nodes___TypeInfo, 12, mypy___nodes___TypeInfoObject, PyObject *); /* protocol_members */
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 578, CPyStatic_constraints___globals);
        goto CPyL507;
    }
CPyL9: ;
    cpy_r_r16 = PySequence_Contains(cpy_r_r15, cpy_r_r13);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 578, CPyStatic_constraints___globals);
        goto CPyL507;
    }
    cpy_r_r18 = cpy_r_r16;
    if (!cpy_r_r18) goto CPyL41;
    cpy_r_r19 = 0;
    cpy_r_r20 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r21 = ((mypy___nodes___TypeInfoObject *)cpy_r_r20)->_inferring;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "inferring", 580, CPyStatic_constraints___globals);
        goto CPyL507;
    }
    CPy_INCREF(cpy_r_r21);
CPyL12: ;
    cpy_r_r22 = 0;
CPyL13: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r21)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL508;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_r21, cpy_r_r22);
    if (likely(Py_TYPE(cpy_r_r27) == CPyType_types___Instance))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 580, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_r27);
        goto CPyL509;
    }
    cpy_r_t = cpy_r_r28;
    cpy_r_r29 = CPyDef_types___Instance_____eq__(cpy_r_template, cpy_r_t);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 580, CPyStatic_constraints___globals);
        goto CPyL509;
    }
    if (unlikely(!PyBool_Check(cpy_r_r29))) {
        CPy_TypeError("bool", cpy_r_r29); cpy_r_r30 = 2;
    } else
        cpy_r_r30 = cpy_r_r29 == Py_True;
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 580, CPyStatic_constraints___globals);
        goto CPyL509;
    }
    if (cpy_r_r30) {
        goto CPyL510;
    } else
        goto CPyL19;
CPyL18: ;
    cpy_r_r19 = 1;
    goto CPyL20;
CPyL19: ;
    cpy_r_r31 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r31;
    goto CPyL13;
CPyL20: ;
    if (cpy_r_r19) goto CPyL41;
    cpy_r_r32 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r33 = ((mypy___nodes___TypeInfoObject *)cpy_r_r32)->_inferring;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "inferring", 581, CPyStatic_constraints___globals);
        goto CPyL507;
    }
    CPy_INCREF(cpy_r_r33);
CPyL22: ;
    cpy_r_r34 = PyList_Append(cpy_r_r33, cpy_r_template);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 581, CPyStatic_constraints___globals);
        goto CPyL507;
    }
    cpy_r_r36 = CPyStatics[706]; /* '__call__' */
    CPy_INCREF(cpy_r_actual);
    if (Py_TYPE(cpy_r_actual) == CPyType_types___CallableType)
        cpy_r_r37 = cpy_r_actual;
    else {
        cpy_r_r37 = NULL;
    }
    if (cpy_r_r37 != NULL) goto __LL1807;
    if (Py_TYPE(cpy_r_actual) == CPyType_types___Overloaded)
        cpy_r_r37 = cpy_r_actual;
    else {
        cpy_r_r37 = NULL;
    }
    if (cpy_r_r37 != NULL) goto __LL1807;
    CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 583, CPyStatic_constraints___globals, "union[mypy.types.CallableType, mypy.types.Overloaded]", cpy_r_actual);
    goto CPyL507;
__LL1807: ;
    cpy_r_r38 = 2;
    cpy_r_r39 = CPyDef_subtypes___find_member(cpy_r_r36, cpy_r_template, cpy_r_r37, 1, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 582, CPyStatic_constraints___globals);
        goto CPyL507;
    }
    cpy_r_call = cpy_r_r39;
    cpy_r_r40 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r41 = cpy_r_call != cpy_r_r40;
    if (cpy_r_r41) {
        goto CPyL28;
    } else
        goto CPyL511;
CPyL26: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r42 = 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 585, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_Unreachable();
CPyL28: ;
    CPy_INCREF(cpy_r_actual);
    if (Py_TYPE(cpy_r_actual) == CPyType_types___CallableType)
        cpy_r_r43 = cpy_r_actual;
    else {
        cpy_r_r43 = NULL;
    }
    if (cpy_r_r43 != NULL) goto __LL1808;
    if (Py_TYPE(cpy_r_actual) == CPyType_types___Overloaded)
        cpy_r_r43 = cpy_r_actual;
    else {
        cpy_r_r43 = NULL;
    }
    if (cpy_r_r43 != NULL) goto __LL1808;
    CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 586, CPyStatic_constraints___globals, "union[mypy.types.CallableType, mypy.types.Overloaded]", cpy_r_actual);
    goto CPyL512;
__LL1808: ;
    CPy_INCREF(cpy_r_call);
    if (likely(cpy_r_call != Py_None))
        cpy_r_r44 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 586, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_call);
        goto CPyL513;
    }
    cpy_r_r45 = NULL;
    cpy_r_r46 = CPyDef_erasetype___erase_typevars(cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 586, CPyStatic_constraints___globals);
        goto CPyL513;
    }
    cpy_r_r47 = NULL;
    cpy_r_r48 = 2;
    cpy_r_r49 = 2;
    cpy_r_r50 = 2;
    cpy_r_r51 = 2;
    cpy_r_r52 = 2;
    cpy_r_r53 = NULL;
    cpy_r_r54 = CPyDef_subtypes___is_subtype(cpy_r_r43, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 586, CPyStatic_constraints___globals);
        goto CPyL512;
    }
    if (!cpy_r_r54) goto CPyL514;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r55 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 587, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_call);
        goto CPyL507;
    }
    CPy_INCREF(cpy_r_actual);
    if (Py_TYPE(cpy_r_actual) == CPyType_types___CallableType)
        cpy_r_r56 = cpy_r_actual;
    else {
        cpy_r_r56 = NULL;
    }
    if (cpy_r_r56 != NULL) goto __LL1809;
    if (Py_TYPE(cpy_r_actual) == CPyType_types___Overloaded)
        cpy_r_r56 = cpy_r_actual;
    else {
        cpy_r_r56 = NULL;
    }
    if (cpy_r_r56 != NULL) goto __LL1809;
    CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 587, CPyStatic_constraints___globals, "union[mypy.types.CallableType, mypy.types.Overloaded]", cpy_r_actual);
    goto CPyL515;
__LL1809: ;
    cpy_r_r57 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r57 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 587, CPyStatic_constraints___globals);
        goto CPyL516;
    }
    CPyTagged_INCREF(cpy_r_r57);
CPyL36: ;
    cpy_r_r58 = CPyDef_constraints___infer_constraints(cpy_r_r55, cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r56);
    CPyTagged_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 587, CPyStatic_constraints___globals);
        goto CPyL507;
    }
    cpy_r_subres = cpy_r_r58;
    cpy_r_r59 = CPyList_Extend(cpy_r_res, cpy_r_subres);
    CPy_DECREF(cpy_r_subres);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 588, CPyStatic_constraints___globals);
        goto CPyL507;
    } else
        goto CPyL517;
CPyL38: ;
    cpy_r_r60 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r61 = ((mypy___nodes___TypeInfoObject *)cpy_r_r60)->_inferring;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "inferring", 589, CPyStatic_constraints___globals);
        goto CPyL507;
    }
    CPy_INCREF(cpy_r_r61);
CPyL39: ;
    cpy_r_r62 = CPyList_PopLast(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 589, CPyStatic_constraints___globals);
        goto CPyL507;
    }
    if (likely(Py_TYPE(cpy_r_r62) == CPyType_types___Instance))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeError("mypy.types.Instance", cpy_r_r62); 
        cpy_r_r63 = NULL;
    }
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 589, CPyStatic_constraints___globals);
        goto CPyL507;
    } else
        goto CPyL518;
CPyL41: ;
    cpy_r_r64 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r65 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r66 = *(PyObject * *)cpy_r_r65;
    cpy_r_r67 = cpy_r_r66 == cpy_r_r64;
    if (!cpy_r_r67) goto CPyL67;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___CallableType))
        cpy_r_r68 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 590, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_actual);
        goto CPyL507;
    }
    cpy_r_r69 = ((mypy___types___CallableTypeObject *)cpy_r_r68)->_fallback;
    cpy_r_r70 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r71 = cpy_r_r69 != cpy_r_r70;
    if (!cpy_r_r71) goto CPyL67;
    CPy_INCREF(cpy_r_actual);
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___CallableType))
        cpy_r_r72 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 591, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_actual);
        goto CPyL507;
    }
    cpy_r_r73 = CPyDef_types___CallableType___is_type_obj(cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 591, CPyStatic_constraints___globals);
        goto CPyL507;
    }
    if (!cpy_r_r73) goto CPyL65;
    cpy_r_r74 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r75 = ((mypy___nodes___TypeInfoObject *)cpy_r_r74)->_is_protocol;
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "is_protocol", 591, CPyStatic_constraints___globals);
        goto CPyL507;
    }
CPyL48: ;
    if (!cpy_r_r75) goto CPyL65;
CPyL49: ;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___CallableType))
        cpy_r_r76 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 592, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_actual);
        goto CPyL507;
    }
    cpy_r_r77 = ((mypy___types___CallableTypeObject *)cpy_r_r76)->_ret_type;
    CPy_INCREF(cpy_r_r77);
    cpy_r_r78 = CPyDef_types___get_proper_type(cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 592, CPyStatic_constraints___globals);
        goto CPyL507;
    }
    if (likely(cpy_r_r78 != Py_None))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 592, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_r78);
        goto CPyL507;
    }
    cpy_r_ret_type = cpy_r_r79;
    cpy_r_r80 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r81 = (CPyPtr)&((PyObject *)cpy_r_ret_type)->ob_type;
    cpy_r_r82 = *(PyObject * *)cpy_r_r81;
    cpy_r_r83 = cpy_r_r82 == cpy_r_r80;
    if (!cpy_r_r83) goto CPyL56;
    if (likely(Py_TYPE(cpy_r_ret_type) == CPyType_types___TupleType))
        cpy_r_r84 = cpy_r_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 594, CPyStatic_constraints___globals, "mypy.types.TupleType", cpy_r_ret_type);
        goto CPyL507;
    }
    cpy_r_r85 = CPyDef_typeops___tuple_fallback(cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 594, CPyStatic_constraints___globals);
        goto CPyL507;
    }
    cpy_r_ret_type = cpy_r_r85;
CPyL56: ;
    cpy_r_r86 = (PyObject *)CPyType_types___Instance;
    cpy_r_r87 = (CPyPtr)&((PyObject *)cpy_r_ret_type)->ob_type;
    cpy_r_r88 = *(PyObject * *)cpy_r_r87;
    cpy_r_r89 = cpy_r_r88 == cpy_r_r86;
    if (!cpy_r_r89) goto CPyL519;
    cpy_r_r90 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r90 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 596, CPyStatic_constraints___globals);
        goto CPyL520;
    }
CPyL58: ;
    cpy_r_r91 = cpy_r_r90 == 0;
    if (!cpy_r_r91) goto CPyL60;
    CPy_INCREF(cpy_r_template);
    cpy_r_subtype = cpy_r_template;
    goto CPyL62;
CPyL60: ;
    CPy_INCREF(cpy_r_ret_type);
    if (likely(Py_TYPE(cpy_r_ret_type) == CPyType_types___Instance))
        cpy_r_r92 = cpy_r_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 599, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_ret_type);
        goto CPyL520;
    }
    cpy_r_subtype = cpy_r_r92;
CPyL62: ;
    if (likely(Py_TYPE(cpy_r_ret_type) == CPyType_types___Instance))
        cpy_r_r93 = cpy_r_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 602, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_ret_type);
        goto CPyL521;
    }
    cpy_r_r94 = CPyDef_constraints___ConstraintBuilderVisitor___infer_constraints_from_protocol_members(cpy_r_self, cpy_r_r93, cpy_r_template, cpy_r_subtype, cpy_r_template, 1);
    CPy_DECREF(cpy_r_r93);
    CPy_DECREF(cpy_r_subtype);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 601, CPyStatic_constraints___globals);
        goto CPyL507;
    }
    cpy_r_r95 = CPyList_Extend(cpy_r_res, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 600, CPyStatic_constraints___globals);
        goto CPyL507;
    } else
        goto CPyL522;
CPyL65: ;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___CallableType))
        cpy_r_r96 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 605, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_actual);
        goto CPyL507;
    }
    cpy_r_r97 = ((mypy___types___CallableTypeObject *)cpy_r_r96)->_fallback;
    CPy_INCREF(cpy_r_r97);
    CPy_DECREF(cpy_r_actual);
    cpy_r_actual = cpy_r_r97;
CPyL67: ;
    cpy_r_r98 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r99 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r100 = *(PyObject * *)cpy_r_r99;
    cpy_r_r101 = cpy_r_r100 == cpy_r_r98;
    if (!cpy_r_r101) goto CPyL100;
    cpy_r_r102 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r103 = ((mypy___nodes___TypeInfoObject *)cpy_r_r102)->_is_protocol;
    if (unlikely(cpy_r_r103 == 2)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "is_protocol", 606, CPyStatic_constraints___globals);
        goto CPyL507;
    }
CPyL69: ;
    if (!cpy_r_r103) goto CPyL100;
CPyL70: ;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___TypeType))
        cpy_r_r104 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 607, CPyStatic_constraints___globals, "mypy.types.TypeType", cpy_r_actual);
        goto CPyL507;
    }
    cpy_r_r105 = ((mypy___types___TypeTypeObject *)cpy_r_r104)->_item;
    cpy_r_r106 = (PyObject *)CPyType_types___Instance;
    cpy_r_r107 = (CPyPtr)&((PyObject *)cpy_r_r105)->ob_type;
    cpy_r_r108 = *(PyObject * *)cpy_r_r107;
    cpy_r_r109 = cpy_r_r108 == cpy_r_r106;
    if (!cpy_r_r109) goto CPyL82;
    cpy_r_r110 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r110 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 608, CPyStatic_constraints___globals);
        goto CPyL507;
    }
CPyL73: ;
    cpy_r_r111 = cpy_r_r110 == 0;
    if (!cpy_r_r111) goto CPyL75;
    CPy_INCREF(cpy_r_template);
    cpy_r_subtype = cpy_r_template;
    goto CPyL78;
CPyL75: ;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___TypeType))
        cpy_r_r112 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 611, CPyStatic_constraints___globals, "mypy.types.TypeType", cpy_r_actual);
        goto CPyL507;
    }
    cpy_r_r113 = ((mypy___types___TypeTypeObject *)cpy_r_r112)->_item;
    CPy_INCREF(cpy_r_r113);
    if (likely(Py_TYPE(cpy_r_r113) == CPyType_types___Instance))
        cpy_r_r114 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 611, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_r113);
        goto CPyL507;
    }
    cpy_r_subtype = cpy_r_r114;
CPyL78: ;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___TypeType))
        cpy_r_r115 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 614, CPyStatic_constraints___globals, "mypy.types.TypeType", cpy_r_actual);
        goto CPyL521;
    }
    cpy_r_r116 = ((mypy___types___TypeTypeObject *)cpy_r_r115)->_item;
    CPy_INCREF(cpy_r_r116);
    if (likely(Py_TYPE(cpy_r_r116) == CPyType_types___Instance))
        cpy_r_r117 = cpy_r_r116;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 614, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_r116);
        goto CPyL521;
    }
    cpy_r_r118 = CPyDef_constraints___ConstraintBuilderVisitor___infer_constraints_from_protocol_members(cpy_r_self, cpy_r_r117, cpy_r_template, cpy_r_subtype, cpy_r_template, 1);
    CPy_DECREF(cpy_r_r117);
    CPy_DECREF(cpy_r_subtype);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 613, CPyStatic_constraints___globals);
        goto CPyL507;
    }
    cpy_r_r119 = CPyList_Extend(cpy_r_res, cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 612, CPyStatic_constraints___globals);
        goto CPyL507;
    } else
        goto CPyL523;
CPyL82: ;
    cpy_r_r120 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r120 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 617, CPyStatic_constraints___globals);
        goto CPyL507;
    }
CPyL83: ;
    cpy_r_r121 = cpy_r_r120 == 2;
    if (!cpy_r_r121) goto CPyL100;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___TypeType))
        cpy_r_r122 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 619, CPyStatic_constraints___globals, "mypy.types.TypeType", cpy_r_actual);
        goto CPyL507;
    }
    cpy_r_r123 = ((mypy___types___TypeTypeObject *)cpy_r_r122)->_item;
    CPy_INCREF(cpy_r_r123);
    cpy_r_a_item = cpy_r_r123;
    cpy_r_r124 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r125 = (CPyPtr)&((PyObject *)cpy_r_a_item)->ob_type;
    cpy_r_r126 = *(PyObject * *)cpy_r_r125;
    cpy_r_r127 = cpy_r_r126 == cpy_r_r124;
    if (!cpy_r_r127) goto CPyL90;
    if (likely(Py_TYPE(cpy_r_a_item) == CPyType_types___TypeVarType))
        cpy_r_r128 = cpy_r_a_item;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 621, CPyStatic_constraints___globals, "mypy.types.TypeVarType", cpy_r_a_item);
        goto CPyL524;
    }
    cpy_r_r129 = ((mypy___types___TypeVarTypeObject *)cpy_r_r128)->_upper_bound;
    CPy_INCREF(cpy_r_r129);
    CPy_DECREF(cpy_r_a_item);
    cpy_r_r130 = CPyDef_types___get_proper_type(cpy_r_r129);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 621, CPyStatic_constraints___globals);
        goto CPyL507;
    }
    if (likely(cpy_r_r130 != Py_None))
        cpy_r_r131 = cpy_r_r130;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 621, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_r130);
        goto CPyL507;
    }
    cpy_r_a_item = cpy_r_r131;
CPyL90: ;
    cpy_r_r132 = (PyObject *)CPyType_types___Instance;
    cpy_r_r133 = (CPyPtr)&((PyObject *)cpy_r_a_item)->ob_type;
    cpy_r_r134 = *(PyObject * *)cpy_r_r133;
    cpy_r_r135 = cpy_r_r134 == cpy_r_r132;
    if (!cpy_r_r135) goto CPyL525;
    if (likely(Py_TYPE(cpy_r_a_item) == CPyType_types___Instance))
        cpy_r_r136 = cpy_r_a_item;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 622, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_a_item);
        goto CPyL524;
    }
    cpy_r_r137 = ((mypy___types___InstanceObject *)cpy_r_r136)->_type;
    cpy_r_r138 = ((mypy___nodes___TypeInfoObject *)cpy_r_r137)->_metaclass_type;
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "metaclass_type", 622, CPyStatic_constraints___globals);
        goto CPyL524;
    }
    CPy_INCREF(cpy_r_r138);
CPyL93: ;
    cpy_r_r139 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r140 = cpy_r_r138 != cpy_r_r139;
    CPy_DECREF(cpy_r_r138);
    if (!cpy_r_r140) goto CPyL525;
    if (likely(Py_TYPE(cpy_r_a_item) == CPyType_types___Instance))
        cpy_r_r141 = cpy_r_a_item;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 625, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_a_item);
        goto CPyL524;
    }
    cpy_r_r142 = ((mypy___types___InstanceObject *)cpy_r_r141)->_type;
    cpy_r_r143 = ((mypy___nodes___TypeInfoObject *)cpy_r_r142)->_metaclass_type;
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "metaclass_type", 625, CPyStatic_constraints___globals);
        goto CPyL524;
    }
    CPy_INCREF(cpy_r_r143);
CPyL96: ;
    if (likely(cpy_r_r143 != Py_None))
        cpy_r_r144 = cpy_r_r143;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 625, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_r143);
        goto CPyL524;
    }
    CPy_DECREF(cpy_r_a_item);
    CPy_INCREF(cpy_r_actual);
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___TypeType))
        cpy_r_r145 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 625, CPyStatic_constraints___globals, "mypy.types.TypeType", cpy_r_actual);
        goto CPyL526;
    }
    cpy_r_r146 = 2;
    cpy_r_r147 = CPyDef_constraints___ConstraintBuilderVisitor___infer_constraints_from_protocol_members(cpy_r_self, cpy_r_r144, cpy_r_template, cpy_r_r145, cpy_r_template, cpy_r_r146);
    CPy_DECREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 624, CPyStatic_constraints___globals);
        goto CPyL507;
    }
    cpy_r_r148 = CPyList_Extend(cpy_r_res, cpy_r_r147);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 623, CPyStatic_constraints___globals);
        goto CPyL507;
    } else
        goto CPyL527;
CPyL100: ;
    cpy_r_r149 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r150 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r151 = *(PyObject * *)cpy_r_r150;
    cpy_r_r152 = cpy_r_r151 == cpy_r_r149;
    if (!cpy_r_r152) goto CPyL105;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___Overloaded))
        cpy_r_r153 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 629, CPyStatic_constraints___globals, "mypy.types.Overloaded", cpy_r_actual);
        goto CPyL507;
    }
    cpy_r_r154 = ((mypy___types___OverloadedObject *)cpy_r_r153)->_fallback;
    cpy_r_r155 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r156 = cpy_r_r154 != cpy_r_r155;
    if (!cpy_r_r156) goto CPyL105;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___Overloaded))
        cpy_r_r157 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 630, CPyStatic_constraints___globals, "mypy.types.Overloaded", cpy_r_actual);
        goto CPyL507;
    }
    cpy_r_r158 = ((mypy___types___OverloadedObject *)cpy_r_r157)->_fallback;
    CPy_INCREF(cpy_r_r158);
    CPy_DECREF(cpy_r_actual);
    cpy_r_actual = cpy_r_r158;
CPyL105: ;
    cpy_r_r159 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r160 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r161 = *(PyObject * *)cpy_r_r160;
    cpy_r_r162 = cpy_r_r161 == cpy_r_r159;
    if (!cpy_r_r162) goto CPyL109;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___TypedDictType))
        cpy_r_r163 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 632, CPyStatic_constraints___globals, "mypy.types.TypedDictType", cpy_r_actual);
        goto CPyL528;
    }
    cpy_r_r164 = CPyDef_types___TypedDictType___as_anonymous(cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 632, CPyStatic_constraints___globals);
        goto CPyL528;
    }
    cpy_r_r165 = ((mypy___types___TypedDictTypeObject *)cpy_r_r164)->_fallback;
    CPy_INCREF(cpy_r_r165);
    CPy_DECREF(cpy_r_r164);
    cpy_r_actual = cpy_r_r165;
CPyL109: ;
    cpy_r_r166 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r167 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r168 = *(PyObject * *)cpy_r_r167;
    cpy_r_r169 = cpy_r_r168 == cpy_r_r166;
    if (!cpy_r_r169) goto CPyL112;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___LiteralType))
        cpy_r_r170 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 634, CPyStatic_constraints___globals, "mypy.types.LiteralType", cpy_r_actual);
        goto CPyL507;
    }
    cpy_r_r171 = ((mypy___types___LiteralTypeObject *)cpy_r_r170)->_fallback;
    CPy_INCREF(cpy_r_r171);
    CPy_DECREF(cpy_r_actual);
    cpy_r_actual = cpy_r_r171;
CPyL112: ;
    cpy_r_r172 = (PyObject *)CPyType_types___Instance;
    cpy_r_r173 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r174 = *(PyObject * *)cpy_r_r173;
    cpy_r_r175 = cpy_r_r174 == cpy_r_r172;
    if (!cpy_r_r175) goto CPyL529;
    CPy_INCREF(cpy_r_actual);
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___Instance))
        cpy_r_r176 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 636, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_actual);
        goto CPyL507;
    }
    cpy_r_instance = cpy_r_r176;
    cpy_r_r177 = NULL;
    cpy_r_r178 = CPyDef_erasetype___erase_typevars(cpy_r_template, cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 637, CPyStatic_constraints___globals);
        goto CPyL530;
    }
    cpy_r_erased = cpy_r_r178;
    cpy_r_r179 = (PyObject *)CPyType_types___Instance;
    cpy_r_r180 = (CPyPtr)&((PyObject *)cpy_r_erased)->ob_type;
    cpy_r_r181 = *(PyObject * *)cpy_r_r180;
    cpy_r_r182 = cpy_r_r181 == cpy_r_r179;
    if (cpy_r_r182) {
        goto CPyL118;
    } else
        goto CPyL531;
CPyL116: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r183 = 0;
    if (unlikely(!cpy_r_r183)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 638, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_Unreachable();
CPyL118: ;
    cpy_r_r184 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r184 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 641, CPyStatic_constraints___globals);
        goto CPyL532;
    }
CPyL119: ;
    cpy_r_r185 = cpy_r_r184 == 0;
    if (!cpy_r_r185) goto CPyL250;
    cpy_r_r186 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    CPy_INCREF(cpy_r_r186);
    cpy_r_r187 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r188 = CPY_GET_ATTR(cpy_r_r187, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 641, CPyStatic_constraints___globals);
        goto CPyL533;
    }
CPyL121: ;
    cpy_r_r189 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r186, cpy_r_r188);
    CPy_DECREF(cpy_r_r188);
    CPy_DECREF(cpy_r_r186);
    if (unlikely(cpy_r_r189 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 641, CPyStatic_constraints___globals);
        goto CPyL532;
    }
    if (cpy_r_r189) {
        goto CPyL534;
    } else
        goto CPyL250;
CPyL123: ;
    cpy_r_r190 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    CPy_INCREF(cpy_r_r190);
    cpy_r_r191 = CPyDef_maptype___map_instance_to_supertype(cpy_r_template, cpy_r_r190);
    CPy_DECREF(cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 642, CPyStatic_constraints___globals);
        goto CPyL535;
    }
    cpy_r_mapped = cpy_r_r191;
    cpy_r_r192 = ((mypy___types___InstanceObject *)cpy_r_mapped)->_type;
    cpy_r_r193 = ((mypy___nodes___TypeInfoObject *)cpy_r_r192)->_defn;
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "defn", 643, CPyStatic_constraints___globals);
        goto CPyL536;
    }
CPyL125: ;
    cpy_r_r194 = ((mypy___nodes___ClassDefObject *)cpy_r_r193)->_type_vars;
    CPy_INCREF(cpy_r_r194);
    cpy_r_tvars = cpy_r_r194;
    cpy_r_r195 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r196 = ((mypy___nodes___TypeInfoObject *)cpy_r_r195)->_has_type_var_tuple_type;
    if (unlikely(cpy_r_r196 == 2)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "has_type_var_tuple_type", 645, CPyStatic_constraints___globals);
        goto CPyL537;
    }
CPyL126: ;
    if (!cpy_r_r196) goto CPyL164;
CPyL127: ;
    cpy_r_r197 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r198 = ((mypy___nodes___TypeInfoObject *)cpy_r_r197)->_type_var_tuple_prefix;
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_prefix", 646, CPyStatic_constraints___globals);
        goto CPyL537;
    }
CPyL128: ;
    cpy_r_r199 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r200 = cpy_r_r198 != cpy_r_r199;
    if (cpy_r_r200) {
        goto CPyL131;
    } else
        goto CPyL538;
CPyL129: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r201 = 0;
    if (unlikely(!cpy_r_r201)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 646, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_Unreachable();
CPyL131: ;
    cpy_r_r202 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r203 = ((mypy___nodes___TypeInfoObject *)cpy_r_r202)->_type_var_tuple_suffix;
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_suffix", 647, CPyStatic_constraints___globals);
        goto CPyL537;
    }
CPyL132: ;
    cpy_r_r204 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r205 = cpy_r_r203 != cpy_r_r204;
    if (cpy_r_r205) {
        goto CPyL135;
    } else
        goto CPyL539;
CPyL133: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r206 = 0;
    if (unlikely(!cpy_r_r206)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 647, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_Unreachable();
CPyL135: ;
    cpy_r_r207 = ((mypy___types___InstanceObject *)cpy_r_mapped)->_type;
    cpy_r_r208 = ((mypy___nodes___TypeInfoObject *)cpy_r_r207)->_type_var_tuple_prefix;
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_prefix", 648, CPyStatic_constraints___globals);
        goto CPyL537;
    }
CPyL136: ;
    cpy_r_r209 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r210 = cpy_r_r208 != cpy_r_r209;
    if (cpy_r_r210) {
        goto CPyL139;
    } else
        goto CPyL540;
CPyL137: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r211 = 0;
    if (unlikely(!cpy_r_r211)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 648, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_Unreachable();
CPyL139: ;
    cpy_r_r212 = ((mypy___types___InstanceObject *)cpy_r_mapped)->_type;
    cpy_r_r213 = ((mypy___nodes___TypeInfoObject *)cpy_r_r212)->_type_var_tuple_suffix;
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_suffix", 649, CPyStatic_constraints___globals);
        goto CPyL537;
    }
CPyL140: ;
    cpy_r_r214 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r215 = cpy_r_r213 != cpy_r_r214;
    if (cpy_r_r215) {
        goto CPyL143;
    } else
        goto CPyL541;
CPyL141: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r216 = 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 649, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_Unreachable();
CPyL143: ;
    cpy_r_r217 = ((mypy___types___InstanceObject *)cpy_r_mapped)->_args;
    CPy_INCREF(cpy_r_r217);
    cpy_r_r218 = ((mypy___types___InstanceObject *)cpy_r_mapped)->_type;
    cpy_r_r219 = ((mypy___nodes___TypeInfoObject *)cpy_r_r218)->_type_var_tuple_prefix;
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_prefix", 653, CPyStatic_constraints___globals);
        goto CPyL542;
    }
    CPy_INCREF(cpy_r_r219);
CPyL144: ;
    if (likely(PyLong_Check(cpy_r_r219)))
        cpy_r_r220 = CPyTagged_FromObject(cpy_r_r219);
    else {
        CPy_TypeError("int", cpy_r_r219); cpy_r_r220 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r219);
    if (unlikely(cpy_r_r220 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 653, CPyStatic_constraints___globals);
        goto CPyL542;
    }
    cpy_r_r221 = ((mypy___types___InstanceObject *)cpy_r_mapped)->_type;
    cpy_r_r222 = ((mypy___nodes___TypeInfoObject *)cpy_r_r221)->_type_var_tuple_suffix;
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_suffix", 654, CPyStatic_constraints___globals);
        goto CPyL543;
    }
    CPy_INCREF(cpy_r_r222);
CPyL146: ;
    if (likely(PyLong_Check(cpy_r_r222)))
        cpy_r_r223 = CPyTagged_FromObject(cpy_r_r222);
    else {
        CPy_TypeError("int", cpy_r_r222); cpy_r_r223 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r222);
    if (unlikely(cpy_r_r223 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 654, CPyStatic_constraints___globals);
        goto CPyL543;
    }
    CPy_DECREF(cpy_r_mapped);
    cpy_r_r224 = ((mypy___types___InstanceObject *)cpy_r_instance)->_args;
    CPy_INCREF(cpy_r_r224);
    cpy_r_r225 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r226 = ((mypy___nodes___TypeInfoObject *)cpy_r_r225)->_type_var_tuple_prefix;
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_prefix", 656, CPyStatic_constraints___globals);
        goto CPyL544;
    }
    CPy_INCREF(cpy_r_r226);
CPyL148: ;
    if (likely(PyLong_Check(cpy_r_r226)))
        cpy_r_r227 = CPyTagged_FromObject(cpy_r_r226);
    else {
        CPy_TypeError("int", cpy_r_r226); cpy_r_r227 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r226);
    if (unlikely(cpy_r_r227 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 656, CPyStatic_constraints___globals);
        goto CPyL544;
    }
    cpy_r_r228 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r229 = ((mypy___nodes___TypeInfoObject *)cpy_r_r228)->_type_var_tuple_suffix;
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_suffix", 657, CPyStatic_constraints___globals);
        goto CPyL545;
    }
    CPy_INCREF(cpy_r_r229);
CPyL150: ;
    if (likely(PyLong_Check(cpy_r_r229)))
        cpy_r_r230 = CPyTagged_FromObject(cpy_r_r229);
    else {
        CPy_TypeError("int", cpy_r_r229); cpy_r_r230 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r229);
    if (unlikely(cpy_r_r230 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 657, CPyStatic_constraints___globals);
        goto CPyL545;
    }
    cpy_r_r231 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r231 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 658, CPyStatic_constraints___globals);
        goto CPyL546;
    }
    CPyTagged_INCREF(cpy_r_r231);
CPyL152: ;
    cpy_r_r232 = CPyTagged_StealAsObject(cpy_r_r220);
    cpy_r_r233 = CPyTagged_StealAsObject(cpy_r_r223);
    cpy_r_r234 = CPyDef_constraints___build_constraints_for_unpack(cpy_r_r217, cpy_r_r232, cpy_r_r233, cpy_r_r224, cpy_r_r227, cpy_r_r230, cpy_r_r231);
    CPy_DECREF(cpy_r_r217);
    CPy_DECREF(cpy_r_r232);
    CPy_DECREF(cpy_r_r233);
    CPy_DECREF(cpy_r_r224);
    CPyTagged_DECREF(cpy_r_r227);
    CPyTagged_DECREF(cpy_r_r230);
    CPyTagged_DECREF(cpy_r_r231);
    if (unlikely(cpy_r_r234.f0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 651, CPyStatic_constraints___globals);
        goto CPyL547;
    }
    cpy_r_r235 = cpy_r_r234.f0;
    CPy_INCREF(cpy_r_r235);
    cpy_r_unpack_constraints = cpy_r_r235;
    cpy_r_r236 = cpy_r_r234.f1;
    CPy_INCREF(cpy_r_r236);
    cpy_r_mapped_args = cpy_r_r236;
    cpy_r_r237 = cpy_r_r234.f2;
    CPy_INCREF(cpy_r_r237);
    CPy_DECREF(cpy_r_r234.f0);
    CPy_DECREF(cpy_r_r234.f1);
    CPy_DECREF(cpy_r_r234.f2);
    cpy_r_instance_args = cpy_r_r237;
    cpy_r_r238 = CPyList_Extend(cpy_r_res, cpy_r_unpack_constraints);
    CPy_DECREF(cpy_r_unpack_constraints);
    if (unlikely(cpy_r_r238 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 660, CPyStatic_constraints___globals);
        goto CPyL548;
    } else
        goto CPyL549;
CPyL154: ;
    cpy_r_r239 = PyList_AsTuple(cpy_r_tvars);
    CPy_DECREF(cpy_r_tvars);
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 663, CPyStatic_constraints___globals);
        goto CPyL550;
    }
    cpy_r_r240 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r241 = ((mypy___nodes___TypeInfoObject *)cpy_r_r240)->_type_var_tuple_prefix;
    if (unlikely(cpy_r_r241 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_prefix", 664, CPyStatic_constraints___globals);
        goto CPyL551;
    }
    CPy_INCREF(cpy_r_r241);
CPyL156: ;
    if (likely(PyLong_Check(cpy_r_r241)))
        cpy_r_r242 = CPyTagged_FromObject(cpy_r_r241);
    else {
        CPy_TypeError("int", cpy_r_r241); cpy_r_r242 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r241);
    if (unlikely(cpy_r_r242 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 664, CPyStatic_constraints___globals);
        goto CPyL551;
    }
    cpy_r_r243 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r244 = ((mypy___nodes___TypeInfoObject *)cpy_r_r243)->_type_var_tuple_suffix;
    if (unlikely(cpy_r_r244 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_suffix", 665, CPyStatic_constraints___globals);
        goto CPyL552;
    }
    CPy_INCREF(cpy_r_r244);
CPyL158: ;
    if (likely(PyLong_Check(cpy_r_r244)))
        cpy_r_r245 = CPyTagged_FromObject(cpy_r_r244);
    else {
        CPy_TypeError("int", cpy_r_r244); cpy_r_r245 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r244);
    if (unlikely(cpy_r_r245 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 665, CPyStatic_constraints___globals);
        goto CPyL552;
    }
    CPy_DECREF(cpy_r_instance);
    cpy_r_r246 = CPyDef_types___split_with_prefix_and_suffix(cpy_r_r239, cpy_r_r242, cpy_r_r245);
    CPy_DECREF(cpy_r_r239);
    CPyTagged_DECREF(cpy_r_r242);
    CPyTagged_DECREF(cpy_r_r245);
    if (unlikely(cpy_r_r246.f0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 662, CPyStatic_constraints___globals);
        goto CPyL553;
    }
    cpy_r_r247 = cpy_r_r246.f0;
    CPy_INCREF(cpy_r_r247);
    cpy_r_tvars_prefix = cpy_r_r247;
    cpy_r_r248 = cpy_r_r246.f1;
    CPy_INCREF(cpy_r_r248);
    cpy_r__ = cpy_r_r248;
    CPy_DECREF(cpy_r__);
    cpy_r_r249 = cpy_r_r246.f2;
    CPy_INCREF(cpy_r_r249);
    CPy_DECREF(cpy_r_r246.f0);
    CPy_DECREF(cpy_r_r246.f1);
    CPy_DECREF(cpy_r_r246.f2);
    cpy_r_tvars_suffix = cpy_r_r249;
    cpy_r_r250 = PyNumber_Add(cpy_r_tvars_prefix, cpy_r_tvars_suffix);
    CPy_DECREF(cpy_r_tvars_prefix);
    CPy_DECREF(cpy_r_tvars_suffix);
    if (unlikely(cpy_r_r250 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 667, CPyStatic_constraints___globals);
        goto CPyL553;
    }
    if (likely(PyTuple_Check(cpy_r_r250)))
        cpy_r_r251 = cpy_r_r250;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 667, CPyStatic_constraints___globals, "tuple", cpy_r_r250);
        goto CPyL553;
    }
    cpy_r_r252 = PySequence_List(cpy_r_r251);
    CPy_DECREF(cpy_r_r251);
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 667, CPyStatic_constraints___globals);
        goto CPyL553;
    }
    cpy_r_tvars = cpy_r_r252;
    goto CPyL165;
CPyL164: ;
    cpy_r_r253 = ((mypy___types___InstanceObject *)cpy_r_mapped)->_args;
    CPy_INCREF(cpy_r_r253);
    CPy_DECREF(cpy_r_mapped);
    cpy_r_mapped_args = cpy_r_r253;
    cpy_r_r254 = ((mypy___types___InstanceObject *)cpy_r_instance)->_args;
    CPy_INCREF(cpy_r_r254);
    CPy_DECREF(cpy_r_instance);
    cpy_r_instance_args = cpy_r_r254;
CPyL165: ;
    cpy_r_r255 = 0;
    cpy_r_r256 = 0;
    cpy_r_r257 = 0;
CPyL166: ;
    cpy_r_r258 = (CPyPtr)&((PyVarObject *)cpy_r_tvars)->ob_size;
    cpy_r_r259 = *(int64_t *)cpy_r_r258;
    cpy_r_r260 = cpy_r_r259 << 1;
    cpy_r_r261 = (Py_ssize_t)cpy_r_r255 < (Py_ssize_t)cpy_r_r260;
    if (!cpy_r_r261) goto CPyL554;
    cpy_r_r262 = (CPyPtr)&((PyVarObject *)cpy_r_mapped_args)->ob_size;
    cpy_r_r263 = *(int64_t *)cpy_r_r262;
    cpy_r_r264 = cpy_r_r263 << 1;
    cpy_r_r265 = (Py_ssize_t)cpy_r_r256 < (Py_ssize_t)cpy_r_r264;
    if (!cpy_r_r265) goto CPyL554;
    cpy_r_r266 = (CPyPtr)&((PyVarObject *)cpy_r_instance_args)->ob_size;
    cpy_r_r267 = *(int64_t *)cpy_r_r266;
    cpy_r_r268 = cpy_r_r267 << 1;
    cpy_r_r269 = (Py_ssize_t)cpy_r_r257 < (Py_ssize_t)cpy_r_r268;
    if (!cpy_r_r269) goto CPyL554;
    cpy_r_r270 = CPyList_GetItemUnsafe(cpy_r_tvars, cpy_r_r255);
    if (likely(PyObject_TypeCheck(cpy_r_r270, CPyType_types___TypeVarLikeType)))
        cpy_r_r271 = cpy_r_r270;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 674, CPyStatic_constraints___globals, "mypy.types.TypeVarLikeType", cpy_r_r270);
        goto CPyL555;
    }
    cpy_r_tvar = cpy_r_r271;
    cpy_r_r272 = CPySequenceTuple_GetItem(cpy_r_mapped_args, cpy_r_r256);
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 674, CPyStatic_constraints___globals);
        goto CPyL556;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r272, CPyType_types___Type)))
        cpy_r_r273 = cpy_r_r272;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 674, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r272);
        goto CPyL556;
    }
    cpy_r_mapped_arg = cpy_r_r273;
    cpy_r_r274 = CPySequenceTuple_GetItem(cpy_r_instance_args, cpy_r_r257);
    if (unlikely(cpy_r_r274 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 674, CPyStatic_constraints___globals);
        goto CPyL557;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r274, CPyType_types___Type)))
        cpy_r_r275 = cpy_r_r274;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 674, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r274);
        goto CPyL557;
    }
    cpy_r_instance_arg = cpy_r_r275;
    cpy_r_r276 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r277 = (CPyPtr)&((PyObject *)cpy_r_tvar)->ob_type;
    cpy_r_r278 = *(PyObject * *)cpy_r_r277;
    cpy_r_r279 = cpy_r_r278 == cpy_r_r276;
    if (!cpy_r_r279) goto CPyL186;
    if (likely(Py_TYPE(cpy_r_tvar) == CPyType_types___TypeVarType))
        cpy_r_r280 = cpy_r_tvar;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 679, CPyStatic_constraints___globals, "mypy.types.TypeVarType", cpy_r_tvar);
        goto CPyL558;
    }
    cpy_r_r281 = ((mypy___types___TypeVarTypeObject *)cpy_r_r280)->_variance;
    cpy_r_r282 = cpy_r_r281 != 4;
    if (!cpy_r_r282) goto CPyL180;
    cpy_r_r283 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r283 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 680, CPyStatic_constraints___globals);
        goto CPyL558;
    }
    CPyTagged_INCREF(cpy_r_r283);
CPyL178: ;
    cpy_r_r284 = CPyDef_constraints___infer_constraints(cpy_r_mapped_arg, cpy_r_instance_arg, cpy_r_r283);
    CPyTagged_DECREF(cpy_r_r283);
    if (unlikely(cpy_r_r284 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 680, CPyStatic_constraints___globals);
        goto CPyL558;
    }
    cpy_r_r285 = CPyList_Extend(cpy_r_res, cpy_r_r284);
    CPy_DECREF(cpy_r_r284);
    if (unlikely(cpy_r_r285 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 680, CPyStatic_constraints___globals);
        goto CPyL558;
    } else
        goto CPyL559;
CPyL180: ;
    if (likely(Py_TYPE(cpy_r_tvar) == CPyType_types___TypeVarType))
        cpy_r_r286 = cpy_r_tvar;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 681, CPyStatic_constraints___globals, "mypy.types.TypeVarType", cpy_r_tvar);
        goto CPyL558;
    }
    cpy_r_r287 = ((mypy___types___TypeVarTypeObject *)cpy_r_r286)->_variance;
    cpy_r_r288 = cpy_r_r287 != 2;
    CPy_DECREF(cpy_r_tvar);
    if (!cpy_r_r288) goto CPyL560;
    cpy_r_r289 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r289 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 683, CPyStatic_constraints___globals);
        goto CPyL561;
    }
    CPyTagged_INCREF(cpy_r_r289);
CPyL183: ;
    cpy_r_r290 = CPyDef_constraints___neg_op(cpy_r_r289);
    CPyTagged_DECREF(cpy_r_r289);
    if (unlikely(cpy_r_r290 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 683, CPyStatic_constraints___globals);
        goto CPyL561;
    }
    cpy_r_r291 = CPyDef_constraints___infer_constraints(cpy_r_mapped_arg, cpy_r_instance_arg, cpy_r_r290);
    CPy_DECREF(cpy_r_mapped_arg);
    CPy_DECREF(cpy_r_instance_arg);
    CPyTagged_DECREF(cpy_r_r290);
    if (unlikely(cpy_r_r291 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 683, CPyStatic_constraints___globals);
        goto CPyL555;
    }
    cpy_r_r292 = CPyList_Extend(cpy_r_res, cpy_r_r291);
    CPy_DECREF(cpy_r_r291);
    if (unlikely(cpy_r_r292 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 682, CPyStatic_constraints___globals);
        goto CPyL555;
    } else
        goto CPyL562;
CPyL186: ;
    cpy_r_r293 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r294 = (CPyPtr)&((PyObject *)cpy_r_tvar)->ob_type;
    cpy_r_r295 = *(PyObject * *)cpy_r_r294;
    cpy_r_r296 = cpy_r_r295 == cpy_r_r293;
    if (!cpy_r_r296) goto CPyL563;
    cpy_r_r297 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r298 = (CPyPtr)&((PyObject *)cpy_r_mapped_arg)->ob_type;
    cpy_r_r299 = *(PyObject * *)cpy_r_r298;
    cpy_r_r300 = cpy_r_r299 == cpy_r_r297;
    if (cpy_r_r300) {
        goto CPyL564;
    } else
        goto CPyL563;
CPyL188: ;
    cpy_r_r301 = CPyDef_types___get_proper_type(cpy_r_instance_arg);
    CPy_DECREF(cpy_r_instance_arg);
    if (unlikely(cpy_r_r301 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 686, CPyStatic_constraints___globals);
        goto CPyL565;
    }
    if (likely(cpy_r_r301 != Py_None))
        cpy_r_r302 = cpy_r_r301;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 686, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_r301);
        goto CPyL565;
    }
    cpy_r_suffix = cpy_r_r302;
    cpy_r_r303 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r304 = (CPyPtr)&((PyObject *)cpy_r_suffix)->ob_type;
    cpy_r_r305 = *(PyObject * *)cpy_r_r304;
    cpy_r_r306 = cpy_r_r305 == cpy_r_r303;
    if (!cpy_r_r306) goto CPyL199;
    if (likely(Py_TYPE(cpy_r_mapped_arg) == CPyType_types___ParamSpecType))
        cpy_r_r307 = cpy_r_mapped_arg;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 689, CPyStatic_constraints___globals, "mypy.types.ParamSpecType", cpy_r_mapped_arg);
        goto CPyL566;
    }
    cpy_r_r308 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r307)->_prefix;
    CPy_INCREF(cpy_r_r308);
    cpy_r_prefix = cpy_r_r308;
    cpy_r_r309 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_types;
    CPy_INCREF(cpy_r_r309);
    CPy_DECREF(cpy_r_prefix);
    cpy_r_r310 = (CPyPtr)&((PyVarObject *)cpy_r_r309)->ob_size;
    cpy_r_r311 = *(int64_t *)cpy_r_r310;
    CPy_DECREF(cpy_r_r309);
    cpy_r_r312 = cpy_r_r311 << 1;
    cpy_r_r313 = cpy_r_r312 != 0;
    if (!cpy_r_r313) goto CPyL194;
    cpy_r_r314 = cpy_r_r313;
    goto CPyL196;
CPyL194: ;
    if (likely(Py_TYPE(cpy_r_suffix) == CPyType_types___CallableType))
        cpy_r_r315 = cpy_r_suffix;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 690, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_suffix);
        goto CPyL566;
    }
    cpy_r_r316 = ((mypy___types___CallableTypeObject *)cpy_r_r315)->_from_concatenate;
    cpy_r_r314 = cpy_r_r316;
CPyL196: ;
    cpy_r_from_concat = cpy_r_r314;
    if (likely(Py_TYPE(cpy_r_suffix) == CPyType_types___CallableType))
        cpy_r_r317 = cpy_r_suffix;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 691, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_suffix);
        goto CPyL565;
    }
    cpy_r_r318 = NULL;
    cpy_r_r319 = NULL;
    cpy_r_r320 = NULL;
    cpy_r_r321 = NULL;
    cpy_r_r322 = NULL;
    cpy_r_r323 = NULL;
    cpy_r_r324 = NULL;
    cpy_r_r325 = NULL;
    cpy_r_r326 = CPY_INT_TAG;
    cpy_r_r327 = CPY_INT_TAG;
    cpy_r_r328 = NULL;
    cpy_r_r329 = NULL;
    cpy_r_r330 = NULL;
    cpy_r_r331 = NULL;
    cpy_r_r332 = NULL;
    cpy_r_r333 = NULL;
    cpy_r_r334 = NULL;
    cpy_r_r335 = cpy_r_from_concat ? Py_True : Py_False;
    cpy_r_r336 = NULL;
    cpy_r_r337 = CPyDef_types___CallableType___copy_modified(cpy_r_r317, cpy_r_r318, cpy_r_r319, cpy_r_r320, cpy_r_r321, cpy_r_r322, cpy_r_r323, cpy_r_r324, cpy_r_r325, cpy_r_r326, cpy_r_r327, cpy_r_r328, cpy_r_r329, cpy_r_r330, cpy_r_r331, cpy_r_r332, cpy_r_r333, cpy_r_r334, cpy_r_r335, cpy_r_r336);
    CPy_DECREF(cpy_r_r317);
    if (unlikely(cpy_r_r337 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 691, CPyStatic_constraints___globals);
        goto CPyL565;
    }
    cpy_r_suffix = cpy_r_r337;
CPyL199: ;
    cpy_r_r338 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r339 = (CPyPtr)&((PyObject *)cpy_r_suffix)->ob_type;
    cpy_r_r340 = *(PyObject * *)cpy_r_r339;
    cpy_r_r341 = cpy_r_r340 == cpy_r_r338;
    if (!cpy_r_r341) goto CPyL201;
    cpy_r_r342 = cpy_r_r341;
    goto CPyL202;
CPyL201: ;
    cpy_r_r343 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r344 = (CPyPtr)&((PyObject *)cpy_r_suffix)->ob_type;
    cpy_r_r345 = *(PyObject * *)cpy_r_r344;
    cpy_r_r346 = cpy_r_r345 == cpy_r_r343;
    cpy_r_r342 = cpy_r_r346;
CPyL202: ;
    if (!cpy_r_r342) goto CPyL240;
    if (likely(Py_TYPE(cpy_r_mapped_arg) == CPyType_types___ParamSpecType))
        cpy_r_r347 = cpy_r_mapped_arg;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 697, CPyStatic_constraints___globals, "mypy.types.ParamSpecType", cpy_r_mapped_arg);
        goto CPyL566;
    }
    cpy_r_r348 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r347)->_prefix;
    CPy_INCREF(cpy_r_r348);
    cpy_r_prefix = cpy_r_r348;
    CPy_INCREF(cpy_r_suffix);
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___Parameters)
        cpy_r_r349 = cpy_r_suffix;
    else {
        cpy_r_r349 = NULL;
    }
    if (cpy_r_r349 != NULL) goto __LL1810;
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___CallableType)
        cpy_r_r349 = cpy_r_suffix;
    else {
        cpy_r_r349 = NULL;
    }
    if (cpy_r_r349 != NULL) goto __LL1810;
    CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 698, CPyStatic_constraints___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_suffix);
    goto CPyL567;
__LL1810: ;
    CPy_INCREF(cpy_r_suffix);
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___Parameters)
        cpy_r_r350 = cpy_r_suffix;
    else {
        cpy_r_r350 = NULL;
    }
    if (cpy_r_r350 != NULL) goto __LL1811;
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___CallableType)
        cpy_r_r350 = cpy_r_suffix;
    else {
        cpy_r_r350 = NULL;
    }
    if (cpy_r_r350 != NULL) goto __LL1811;
    CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 699, CPyStatic_constraints___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_suffix);
    goto CPyL568;
__LL1811: ;
    cpy_r_r351 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r352 = (CPyPtr)&((PyObject *)cpy_r_r350)->ob_type;
    cpy_r_r353 = *(PyObject * *)cpy_r_r352;
    cpy_r_r354 = cpy_r_r353 == cpy_r_r351;
    if (!cpy_r_r354) goto CPyL209;
    if (likely(Py_TYPE(cpy_r_r350) == CPyType_types___Parameters))
        cpy_r_r355 = cpy_r_r350;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 699, CPyStatic_constraints___globals, "mypy.types.Parameters", cpy_r_r350);
        goto CPyL568;
    }
    cpy_r_r356 = ((mypy___types___ParametersObject *)cpy_r_r355)->_arg_types;
    CPy_INCREF(cpy_r_r356);
    CPy_DECREF(cpy_r_r355);
    cpy_r_r357 = cpy_r_r356;
    goto CPyL211;
CPyL209: ;
    if (likely(Py_TYPE(cpy_r_r350) == CPyType_types___CallableType))
        cpy_r_r358 = cpy_r_r350;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 699, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r350);
        goto CPyL568;
    }
    cpy_r_r359 = ((mypy___types___CallableTypeObject *)cpy_r_r358)->_arg_types;
    CPy_INCREF(cpy_r_r359);
    CPy_DECREF(cpy_r_r358);
    cpy_r_r357 = cpy_r_r359;
CPyL211: ;
    cpy_r_r360 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_types;
    cpy_r_r361 = (CPyPtr)&((PyVarObject *)cpy_r_r360)->ob_size;
    cpy_r_r362 = *(int64_t *)cpy_r_r361;
    cpy_r_r363 = cpy_r_r362 << 1;
    cpy_r_r364 = CPyList_GetSlice(cpy_r_r357, cpy_r_r363, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r357);
    if (unlikely(cpy_r_r364 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 699, CPyStatic_constraints___globals);
        goto CPyL568;
    }
    if (likely(PyList_Check(cpy_r_r364)))
        cpy_r_r365 = cpy_r_r364;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 699, CPyStatic_constraints___globals, "list", cpy_r_r364);
        goto CPyL568;
    }
    CPy_INCREF(cpy_r_suffix);
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___Parameters)
        cpy_r_r366 = cpy_r_suffix;
    else {
        cpy_r_r366 = NULL;
    }
    if (cpy_r_r366 != NULL) goto __LL1812;
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___CallableType)
        cpy_r_r366 = cpy_r_suffix;
    else {
        cpy_r_r366 = NULL;
    }
    if (cpy_r_r366 != NULL) goto __LL1812;
    CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 700, CPyStatic_constraints___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_suffix);
    goto CPyL569;
__LL1812: ;
    cpy_r_r367 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r368 = (CPyPtr)&((PyObject *)cpy_r_r366)->ob_type;
    cpy_r_r369 = *(PyObject * *)cpy_r_r368;
    cpy_r_r370 = cpy_r_r369 == cpy_r_r367;
    if (!cpy_r_r370) goto CPyL217;
    if (likely(Py_TYPE(cpy_r_r366) == CPyType_types___Parameters))
        cpy_r_r371 = cpy_r_r366;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 700, CPyStatic_constraints___globals, "mypy.types.Parameters", cpy_r_r366);
        goto CPyL569;
    }
    cpy_r_r372 = ((mypy___types___ParametersObject *)cpy_r_r371)->_arg_kinds;
    CPy_INCREF(cpy_r_r372);
    CPy_DECREF(cpy_r_r371);
    cpy_r_r373 = cpy_r_r372;
    goto CPyL219;
CPyL217: ;
    if (likely(Py_TYPE(cpy_r_r366) == CPyType_types___CallableType))
        cpy_r_r374 = cpy_r_r366;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 700, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r366);
        goto CPyL569;
    }
    cpy_r_r375 = ((mypy___types___CallableTypeObject *)cpy_r_r374)->_arg_kinds;
    CPy_INCREF(cpy_r_r375);
    CPy_DECREF(cpy_r_r374);
    cpy_r_r373 = cpy_r_r375;
CPyL219: ;
    cpy_r_r376 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_kinds;
    cpy_r_r377 = (CPyPtr)&((PyVarObject *)cpy_r_r376)->ob_size;
    cpy_r_r378 = *(int64_t *)cpy_r_r377;
    cpy_r_r379 = cpy_r_r378 << 1;
    cpy_r_r380 = CPyList_GetSlice(cpy_r_r373, cpy_r_r379, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r373);
    if (unlikely(cpy_r_r380 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 700, CPyStatic_constraints___globals);
        goto CPyL569;
    }
    if (likely(PyList_Check(cpy_r_r380)))
        cpy_r_r381 = cpy_r_r380;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 700, CPyStatic_constraints___globals, "list", cpy_r_r380);
        goto CPyL569;
    }
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___Parameters)
        cpy_r_r382 = cpy_r_suffix;
    else {
        cpy_r_r382 = NULL;
    }
    if (cpy_r_r382 != NULL) goto __LL1813;
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___CallableType)
        cpy_r_r382 = cpy_r_suffix;
    else {
        cpy_r_r382 = NULL;
    }
    if (cpy_r_r382 != NULL) goto __LL1813;
    CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 701, CPyStatic_constraints___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_suffix);
    goto CPyL570;
__LL1813: ;
    cpy_r_r383 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r384 = (CPyPtr)&((PyObject *)cpy_r_r382)->ob_type;
    cpy_r_r385 = *(PyObject * *)cpy_r_r384;
    cpy_r_r386 = cpy_r_r385 == cpy_r_r383;
    if (!cpy_r_r386) goto CPyL225;
    if (likely(Py_TYPE(cpy_r_r382) == CPyType_types___Parameters))
        cpy_r_r387 = cpy_r_r382;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 701, CPyStatic_constraints___globals, "mypy.types.Parameters", cpy_r_r382);
        goto CPyL570;
    }
    cpy_r_r388 = ((mypy___types___ParametersObject *)cpy_r_r387)->_arg_names;
    CPy_INCREF(cpy_r_r388);
    CPy_DECREF(cpy_r_r387);
    cpy_r_r389 = cpy_r_r388;
    goto CPyL227;
CPyL225: ;
    if (likely(Py_TYPE(cpy_r_r382) == CPyType_types___CallableType))
        cpy_r_r390 = cpy_r_r382;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 701, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r382);
        goto CPyL570;
    }
    cpy_r_r391 = ((mypy___types___CallableTypeObject *)cpy_r_r390)->_arg_names;
    CPy_INCREF(cpy_r_r391);
    CPy_DECREF(cpy_r_r390);
    cpy_r_r389 = cpy_r_r391;
CPyL227: ;
    cpy_r_r392 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_names;
    cpy_r_r393 = (CPyPtr)&((PyVarObject *)cpy_r_r392)->ob_size;
    cpy_r_r394 = *(int64_t *)cpy_r_r393;
    cpy_r_r395 = cpy_r_r394 << 1;
    CPy_DECREF(cpy_r_prefix);
    cpy_r_r396 = CPyList_GetSlice(cpy_r_r389, cpy_r_r395, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r389);
    if (unlikely(cpy_r_r396 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 701, CPyStatic_constraints___globals);
        goto CPyL571;
    }
    if (likely(PyList_Check(cpy_r_r396)))
        cpy_r_r397 = cpy_r_r396;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 701, CPyStatic_constraints___globals, "list", cpy_r_r396);
        goto CPyL571;
    }
    cpy_r_r398 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r399 = (CPyPtr)&((PyObject *)cpy_r_r349)->ob_type;
    cpy_r_r400 = *(PyObject * *)cpy_r_r399;
    cpy_r_r401 = cpy_r_r400 == cpy_r_r398;
    if (!cpy_r_r401) goto CPyL233;
    if (likely(Py_TYPE(cpy_r_r349) == CPyType_types___Parameters))
        cpy_r_r402 = cpy_r_r349;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 698, CPyStatic_constraints___globals, "mypy.types.Parameters", cpy_r_r349);
        goto CPyL572;
    }
    cpy_r_r403 = NULL;
    cpy_r_r404 = NULL;
    cpy_r_r405 = CPyDef_types___Parameters___copy_modified(cpy_r_r402, cpy_r_r365, cpy_r_r381, cpy_r_r397, cpy_r_r403, cpy_r_r404);
    CPy_DECREF(cpy_r_r365);
    CPy_DECREF(cpy_r_r381);
    CPy_DECREF(cpy_r_r397);
    CPy_DECREF(cpy_r_r402);
    if (unlikely(cpy_r_r405 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 698, CPyStatic_constraints___globals);
        goto CPyL565;
    }
    cpy_r_r406 = cpy_r_r405;
    goto CPyL236;
CPyL233: ;
    if (likely(Py_TYPE(cpy_r_r349) == CPyType_types___CallableType))
        cpy_r_r407 = cpy_r_r349;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 698, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r349);
        goto CPyL572;
    }
    cpy_r_r408 = NULL;
    cpy_r_r409 = NULL;
    cpy_r_r410 = NULL;
    cpy_r_r411 = NULL;
    cpy_r_r412 = NULL;
    cpy_r_r413 = CPY_INT_TAG;
    cpy_r_r414 = CPY_INT_TAG;
    cpy_r_r415 = NULL;
    cpy_r_r416 = NULL;
    cpy_r_r417 = NULL;
    cpy_r_r418 = NULL;
    cpy_r_r419 = NULL;
    cpy_r_r420 = NULL;
    cpy_r_r421 = NULL;
    cpy_r_r422 = NULL;
    cpy_r_r423 = NULL;
    cpy_r_r424 = CPyDef_types___CallableType___copy_modified(cpy_r_r407, cpy_r_r365, cpy_r_r381, cpy_r_r397, cpy_r_r408, cpy_r_r409, cpy_r_r410, cpy_r_r411, cpy_r_r412, cpy_r_r413, cpy_r_r414, cpy_r_r415, cpy_r_r416, cpy_r_r417, cpy_r_r418, cpy_r_r419, cpy_r_r420, cpy_r_r421, cpy_r_r422, cpy_r_r423);
    CPy_DECREF(cpy_r_r365);
    CPy_DECREF(cpy_r_r381);
    CPy_DECREF(cpy_r_r397);
    CPy_DECREF(cpy_r_r407);
    if (unlikely(cpy_r_r424 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 698, CPyStatic_constraints___globals);
        goto CPyL565;
    }
    cpy_r_r406 = cpy_r_r424;
CPyL236: ;
    cpy_r_suffix = cpy_r_r406;
    if (likely(Py_TYPE(cpy_r_mapped_arg) == CPyType_types___ParamSpecType))
        cpy_r_r425 = cpy_r_mapped_arg;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 703, CPyStatic_constraints___globals, "mypy.types.ParamSpecType", cpy_r_mapped_arg);
        goto CPyL573;
    }
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___Parameters)
        cpy_r_r426 = cpy_r_suffix;
    else {
        cpy_r_r426 = NULL;
    }
    if (cpy_r_r426 != NULL) goto __LL1814;
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___CallableType)
        cpy_r_r426 = cpy_r_suffix;
    else {
        cpy_r_r426 = NULL;
    }
    if (cpy_r_r426 != NULL) goto __LL1814;
    CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 703, CPyStatic_constraints___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_suffix);
    goto CPyL574;
__LL1814: ;
    cpy_r_r427 = CPyDef_constraints___Constraint(cpy_r_r425, 2, cpy_r_r426);
    CPy_DECREF(cpy_r_r425);
    CPy_DECREF(cpy_r_r426);
    if (unlikely(cpy_r_r427 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 703, CPyStatic_constraints___globals);
        goto CPyL555;
    }
    cpy_r_r428 = PyList_Append(cpy_r_res, cpy_r_r427);
    CPy_DECREF(cpy_r_r427);
    cpy_r_r429 = cpy_r_r428 >= 0;
    if (unlikely(!cpy_r_r429)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 703, CPyStatic_constraints___globals);
        goto CPyL555;
    } else
        goto CPyL248;
CPyL240: ;
    cpy_r_r430 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r431 = (CPyPtr)&((PyObject *)cpy_r_suffix)->ob_type;
    cpy_r_r432 = *(PyObject * *)cpy_r_r431;
    cpy_r_r433 = cpy_r_r432 == cpy_r_r430;
    if (!cpy_r_r433) goto CPyL575;
    if (likely(Py_TYPE(cpy_r_mapped_arg) == CPyType_types___ParamSpecType))
        cpy_r_r434 = cpy_r_mapped_arg;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 705, CPyStatic_constraints___globals, "mypy.types.ParamSpecType", cpy_r_mapped_arg);
        goto CPyL573;
    }
    if (likely(Py_TYPE(cpy_r_suffix) == CPyType_types___ParamSpecType))
        cpy_r_r435 = cpy_r_suffix;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 705, CPyStatic_constraints___globals, "mypy.types.ParamSpecType", cpy_r_suffix);
        goto CPyL576;
    }
    cpy_r_r436 = CPyDef_constraints___Constraint(cpy_r_r434, 2, cpy_r_r435);
    CPy_DECREF(cpy_r_r434);
    CPy_DECREF(cpy_r_r435);
    if (unlikely(cpy_r_r436 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 705, CPyStatic_constraints___globals);
        goto CPyL555;
    }
    cpy_r_r437 = PyList_Append(cpy_r_res, cpy_r_r436);
    CPy_DECREF(cpy_r_r436);
    cpy_r_r438 = cpy_r_r437 >= 0;
    if (unlikely(!cpy_r_r438)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 705, CPyStatic_constraints___globals);
        goto CPyL555;
    } else
        goto CPyL248;
CPyL245: ;
    cpy_r_r439 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r440 = (CPyPtr)&((PyObject *)cpy_r_tvar)->ob_type;
    cpy_r_r441 = *(PyObject * *)cpy_r_r440;
    CPy_DECREF(cpy_r_tvar);
    cpy_r_r442 = cpy_r_r441 == cpy_r_r439;
    cpy_r_r443 = cpy_r_r442 ^ 1;
    if (cpy_r_r443) {
        goto CPyL248;
    } else
        goto CPyL577;
CPyL246: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r444 = 0;
    if (unlikely(!cpy_r_r444)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 708, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_Unreachable();
CPyL248: ;
    cpy_r_r445 = cpy_r_r255 + 2;
    cpy_r_r255 = cpy_r_r445;
    cpy_r_r446 = cpy_r_r256 + 2;
    cpy_r_r256 = cpy_r_r446;
    cpy_r_r447 = cpy_r_r257 + 2;
    cpy_r_r257 = cpy_r_r447;
    goto CPyL166;
CPyL249: ;
    return cpy_r_res;
CPyL250: ;
    cpy_r_r448 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r448 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 711, CPyStatic_constraints___globals);
        goto CPyL532;
    }
CPyL251: ;
    cpy_r_r449 = cpy_r_r448 == 2;
    if (!cpy_r_r449) goto CPyL385;
    cpy_r_r450 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    CPy_INCREF(cpy_r_r450);
    cpy_r_r451 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r452 = CPY_GET_ATTR(cpy_r_r451, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r452 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 711, CPyStatic_constraints___globals);
        goto CPyL578;
    }
CPyL253: ;
    cpy_r_r453 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r450, cpy_r_r452);
    CPy_DECREF(cpy_r_r452);
    CPy_DECREF(cpy_r_r450);
    if (unlikely(cpy_r_r453 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 711, CPyStatic_constraints___globals);
        goto CPyL532;
    }
    if (cpy_r_r453) {
        goto CPyL579;
    } else
        goto CPyL385;
CPyL255: ;
    cpy_r_r454 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    CPy_INCREF(cpy_r_r454);
    cpy_r_r455 = CPyDef_maptype___map_instance_to_supertype(cpy_r_instance, cpy_r_r454);
    CPy_DECREF(cpy_r_instance);
    CPy_DECREF(cpy_r_r454);
    if (unlikely(cpy_r_r455 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 712, CPyStatic_constraints___globals);
        goto CPyL580;
    }
    cpy_r_mapped = cpy_r_r455;
    cpy_r_r456 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r457 = ((mypy___nodes___TypeInfoObject *)cpy_r_r456)->_defn;
    if (unlikely(cpy_r_r457 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "defn", 713, CPyStatic_constraints___globals);
        goto CPyL581;
    }
CPyL257: ;
    cpy_r_r458 = ((mypy___nodes___ClassDefObject *)cpy_r_r457)->_type_vars;
    CPy_INCREF(cpy_r_r458);
    cpy_r_tvars = cpy_r_r458;
    cpy_r_r459 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r460 = ((mypy___nodes___TypeInfoObject *)cpy_r_r459)->_has_type_var_tuple_type;
    if (unlikely(cpy_r_r460 == 2)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "has_type_var_tuple_type", 714, CPyStatic_constraints___globals);
        goto CPyL582;
    }
CPyL258: ;
    if (!cpy_r_r460) goto CPyL296;
CPyL259: ;
    cpy_r_r461 = ((mypy___types___InstanceObject *)cpy_r_mapped)->_type;
    cpy_r_r462 = ((mypy___nodes___TypeInfoObject *)cpy_r_r461)->_type_var_tuple_prefix;
    if (unlikely(cpy_r_r462 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_prefix", 715, CPyStatic_constraints___globals);
        goto CPyL582;
    }
CPyL260: ;
    cpy_r_r463 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r464 = cpy_r_r462 != cpy_r_r463;
    if (cpy_r_r464) {
        goto CPyL263;
    } else
        goto CPyL583;
CPyL261: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r465 = 0;
    if (unlikely(!cpy_r_r465)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 715, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_Unreachable();
CPyL263: ;
    cpy_r_r466 = ((mypy___types___InstanceObject *)cpy_r_mapped)->_type;
    cpy_r_r467 = ((mypy___nodes___TypeInfoObject *)cpy_r_r466)->_type_var_tuple_suffix;
    if (unlikely(cpy_r_r467 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_suffix", 716, CPyStatic_constraints___globals);
        goto CPyL582;
    }
CPyL264: ;
    cpy_r_r468 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r469 = cpy_r_r467 != cpy_r_r468;
    if (cpy_r_r469) {
        goto CPyL267;
    } else
        goto CPyL584;
CPyL265: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r470 = 0;
    if (unlikely(!cpy_r_r470)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 716, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_Unreachable();
CPyL267: ;
    cpy_r_r471 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r472 = ((mypy___nodes___TypeInfoObject *)cpy_r_r471)->_type_var_tuple_prefix;
    if (unlikely(cpy_r_r472 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_prefix", 717, CPyStatic_constraints___globals);
        goto CPyL582;
    }
CPyL268: ;
    cpy_r_r473 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r474 = cpy_r_r472 != cpy_r_r473;
    if (cpy_r_r474) {
        goto CPyL271;
    } else
        goto CPyL585;
CPyL269: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r475 = 0;
    if (unlikely(!cpy_r_r475)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 717, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_Unreachable();
CPyL271: ;
    cpy_r_r476 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r477 = ((mypy___nodes___TypeInfoObject *)cpy_r_r476)->_type_var_tuple_suffix;
    if (unlikely(cpy_r_r477 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_suffix", 718, CPyStatic_constraints___globals);
        goto CPyL582;
    }
CPyL272: ;
    cpy_r_r478 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r479 = cpy_r_r477 != cpy_r_r478;
    if (cpy_r_r479) {
        goto CPyL275;
    } else
        goto CPyL586;
CPyL273: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r480 = 0;
    if (unlikely(!cpy_r_r480)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 718, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_Unreachable();
CPyL275: ;
    cpy_r_r481 = ((mypy___types___InstanceObject *)cpy_r_mapped)->_args;
    CPy_INCREF(cpy_r_r481);
    cpy_r_r482 = ((mypy___types___InstanceObject *)cpy_r_mapped)->_type;
    cpy_r_r483 = ((mypy___nodes___TypeInfoObject *)cpy_r_r482)->_type_var_tuple_prefix;
    if (unlikely(cpy_r_r483 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_prefix", 722, CPyStatic_constraints___globals);
        goto CPyL587;
    }
    CPy_INCREF(cpy_r_r483);
CPyL276: ;
    if (likely(PyLong_Check(cpy_r_r483)))
        cpy_r_r484 = CPyTagged_FromObject(cpy_r_r483);
    else {
        CPy_TypeError("int", cpy_r_r483); cpy_r_r484 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r483);
    if (unlikely(cpy_r_r484 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 722, CPyStatic_constraints___globals);
        goto CPyL587;
    }
    cpy_r_r485 = ((mypy___types___InstanceObject *)cpy_r_mapped)->_type;
    cpy_r_r486 = ((mypy___nodes___TypeInfoObject *)cpy_r_r485)->_type_var_tuple_suffix;
    if (unlikely(cpy_r_r486 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_suffix", 723, CPyStatic_constraints___globals);
        goto CPyL588;
    }
    CPy_INCREF(cpy_r_r486);
CPyL278: ;
    if (likely(PyLong_Check(cpy_r_r486)))
        cpy_r_r487 = CPyTagged_FromObject(cpy_r_r486);
    else {
        CPy_TypeError("int", cpy_r_r486); cpy_r_r487 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r486);
    if (unlikely(cpy_r_r487 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 723, CPyStatic_constraints___globals);
        goto CPyL588;
    }
    CPy_DECREF(cpy_r_mapped);
    cpy_r_r488 = ((mypy___types___InstanceObject *)cpy_r_template)->_args;
    CPy_INCREF(cpy_r_r488);
    cpy_r_r489 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r490 = ((mypy___nodes___TypeInfoObject *)cpy_r_r489)->_type_var_tuple_prefix;
    if (unlikely(cpy_r_r490 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_prefix", 725, CPyStatic_constraints___globals);
        goto CPyL589;
    }
    CPy_INCREF(cpy_r_r490);
CPyL280: ;
    if (likely(PyLong_Check(cpy_r_r490)))
        cpy_r_r491 = CPyTagged_FromObject(cpy_r_r490);
    else {
        CPy_TypeError("int", cpy_r_r490); cpy_r_r491 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r490);
    if (unlikely(cpy_r_r491 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 725, CPyStatic_constraints___globals);
        goto CPyL589;
    }
    cpy_r_r492 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r493 = ((mypy___nodes___TypeInfoObject *)cpy_r_r492)->_type_var_tuple_suffix;
    if (unlikely(cpy_r_r493 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_suffix", 726, CPyStatic_constraints___globals);
        goto CPyL590;
    }
    CPy_INCREF(cpy_r_r493);
CPyL282: ;
    if (likely(PyLong_Check(cpy_r_r493)))
        cpy_r_r494 = CPyTagged_FromObject(cpy_r_r493);
    else {
        CPy_TypeError("int", cpy_r_r493); cpy_r_r494 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r493);
    if (unlikely(cpy_r_r494 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 726, CPyStatic_constraints___globals);
        goto CPyL590;
    }
    cpy_r_r495 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r495 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 727, CPyStatic_constraints___globals);
        goto CPyL591;
    }
    CPyTagged_INCREF(cpy_r_r495);
CPyL284: ;
    cpy_r_r496 = CPyTagged_StealAsObject(cpy_r_r484);
    cpy_r_r497 = CPyTagged_StealAsObject(cpy_r_r487);
    cpy_r_r498 = CPyDef_constraints___build_constraints_for_unpack(cpy_r_r481, cpy_r_r496, cpy_r_r497, cpy_r_r488, cpy_r_r491, cpy_r_r494, cpy_r_r495);
    CPy_DECREF(cpy_r_r481);
    CPy_DECREF(cpy_r_r496);
    CPy_DECREF(cpy_r_r497);
    CPy_DECREF(cpy_r_r488);
    CPyTagged_DECREF(cpy_r_r491);
    CPyTagged_DECREF(cpy_r_r494);
    CPyTagged_DECREF(cpy_r_r495);
    if (unlikely(cpy_r_r498.f0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 720, CPyStatic_constraints___globals);
        goto CPyL592;
    }
    cpy_r_r499 = cpy_r_r498.f0;
    CPy_INCREF(cpy_r_r499);
    cpy_r_unpack_constraints = cpy_r_r499;
    cpy_r_r500 = cpy_r_r498.f1;
    CPy_INCREF(cpy_r_r500);
    cpy_r_mapped_args = cpy_r_r500;
    cpy_r_r501 = cpy_r_r498.f2;
    CPy_INCREF(cpy_r_r501);
    CPy_DECREF(cpy_r_r498.f0);
    CPy_DECREF(cpy_r_r498.f1);
    CPy_DECREF(cpy_r_r498.f2);
    cpy_r_template_args = cpy_r_r501;
    cpy_r_r502 = CPyList_Extend(cpy_r_res, cpy_r_unpack_constraints);
    CPy_DECREF(cpy_r_unpack_constraints);
    if (unlikely(cpy_r_r502 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 729, CPyStatic_constraints___globals);
        goto CPyL593;
    } else
        goto CPyL594;
CPyL286: ;
    cpy_r_r503 = PyList_AsTuple(cpy_r_tvars);
    CPy_DECREF(cpy_r_tvars);
    if (unlikely(cpy_r_r503 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 732, CPyStatic_constraints___globals);
        goto CPyL595;
    }
    cpy_r_r504 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r505 = ((mypy___nodes___TypeInfoObject *)cpy_r_r504)->_type_var_tuple_prefix;
    if (unlikely(cpy_r_r505 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_prefix", 733, CPyStatic_constraints___globals);
        goto CPyL596;
    }
    CPy_INCREF(cpy_r_r505);
CPyL288: ;
    if (likely(PyLong_Check(cpy_r_r505)))
        cpy_r_r506 = CPyTagged_FromObject(cpy_r_r505);
    else {
        CPy_TypeError("int", cpy_r_r505); cpy_r_r506 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r505);
    if (unlikely(cpy_r_r506 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 733, CPyStatic_constraints___globals);
        goto CPyL596;
    }
    cpy_r_r507 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r508 = ((mypy___nodes___TypeInfoObject *)cpy_r_r507)->_type_var_tuple_suffix;
    if (unlikely(cpy_r_r508 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "type_var_tuple_suffix", 734, CPyStatic_constraints___globals);
        goto CPyL597;
    }
    CPy_INCREF(cpy_r_r508);
CPyL290: ;
    if (likely(PyLong_Check(cpy_r_r508)))
        cpy_r_r509 = CPyTagged_FromObject(cpy_r_r508);
    else {
        CPy_TypeError("int", cpy_r_r508); cpy_r_r509 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r508);
    if (unlikely(cpy_r_r509 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 734, CPyStatic_constraints___globals);
        goto CPyL597;
    }
    cpy_r_r510 = CPyDef_types___split_with_prefix_and_suffix(cpy_r_r503, cpy_r_r506, cpy_r_r509);
    CPy_DECREF(cpy_r_r503);
    CPyTagged_DECREF(cpy_r_r506);
    CPyTagged_DECREF(cpy_r_r509);
    if (unlikely(cpy_r_r510.f0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 731, CPyStatic_constraints___globals);
        goto CPyL595;
    }
    cpy_r_r511 = cpy_r_r510.f0;
    CPy_INCREF(cpy_r_r511);
    cpy_r_tvars_prefix = cpy_r_r511;
    cpy_r_r512 = cpy_r_r510.f1;
    CPy_INCREF(cpy_r_r512);
    cpy_r__ = cpy_r_r512;
    CPy_DECREF(cpy_r__);
    cpy_r_r513 = cpy_r_r510.f2;
    CPy_INCREF(cpy_r_r513);
    CPy_DECREF(cpy_r_r510.f0);
    CPy_DECREF(cpy_r_r510.f1);
    CPy_DECREF(cpy_r_r510.f2);
    cpy_r_tvars_suffix = cpy_r_r513;
    cpy_r_r514 = PyNumber_Add(cpy_r_tvars_prefix, cpy_r_tvars_suffix);
    CPy_DECREF(cpy_r_tvars_prefix);
    CPy_DECREF(cpy_r_tvars_suffix);
    if (unlikely(cpy_r_r514 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 736, CPyStatic_constraints___globals);
        goto CPyL595;
    }
    if (likely(PyTuple_Check(cpy_r_r514)))
        cpy_r_r515 = cpy_r_r514;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 736, CPyStatic_constraints___globals, "tuple", cpy_r_r514);
        goto CPyL595;
    }
    cpy_r_r516 = PySequence_List(cpy_r_r515);
    CPy_DECREF(cpy_r_r515);
    if (unlikely(cpy_r_r516 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 736, CPyStatic_constraints___globals);
        goto CPyL595;
    }
    cpy_r_tvars = cpy_r_r516;
    goto CPyL297;
CPyL296: ;
    cpy_r_r517 = ((mypy___types___InstanceObject *)cpy_r_mapped)->_args;
    CPy_INCREF(cpy_r_r517);
    CPy_DECREF(cpy_r_mapped);
    cpy_r_mapped_args = cpy_r_r517;
    cpy_r_r518 = ((mypy___types___InstanceObject *)cpy_r_template)->_args;
    CPy_INCREF(cpy_r_r518);
    cpy_r_template_args = cpy_r_r518;
CPyL297: ;
    cpy_r_r519 = 0;
    cpy_r_r520 = 0;
    cpy_r_r521 = 0;
CPyL298: ;
    cpy_r_r522 = (CPyPtr)&((PyVarObject *)cpy_r_tvars)->ob_size;
    cpy_r_r523 = *(int64_t *)cpy_r_r522;
    cpy_r_r524 = cpy_r_r523 << 1;
    cpy_r_r525 = (Py_ssize_t)cpy_r_r519 < (Py_ssize_t)cpy_r_r524;
    if (!cpy_r_r525) goto CPyL598;
    cpy_r_r526 = (CPyPtr)&((PyVarObject *)cpy_r_mapped_args)->ob_size;
    cpy_r_r527 = *(int64_t *)cpy_r_r526;
    cpy_r_r528 = cpy_r_r527 << 1;
    cpy_r_r529 = (Py_ssize_t)cpy_r_r520 < (Py_ssize_t)cpy_r_r528;
    if (!cpy_r_r529) goto CPyL598;
    cpy_r_r530 = (CPyPtr)&((PyVarObject *)cpy_r_template_args)->ob_size;
    cpy_r_r531 = *(int64_t *)cpy_r_r530;
    cpy_r_r532 = cpy_r_r531 << 1;
    cpy_r_r533 = (Py_ssize_t)cpy_r_r521 < (Py_ssize_t)cpy_r_r532;
    if (!cpy_r_r533) goto CPyL598;
    cpy_r_r534 = CPyList_GetItemUnsafe(cpy_r_tvars, cpy_r_r519);
    if (likely(PyObject_TypeCheck(cpy_r_r534, CPyType_types___TypeVarLikeType)))
        cpy_r_r535 = cpy_r_r534;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 742, CPyStatic_constraints___globals, "mypy.types.TypeVarLikeType", cpy_r_r534);
        goto CPyL593;
    }
    cpy_r_tvar = cpy_r_r535;
    cpy_r_r536 = CPySequenceTuple_GetItem(cpy_r_mapped_args, cpy_r_r520);
    if (unlikely(cpy_r_r536 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 742, CPyStatic_constraints___globals);
        goto CPyL599;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r536, CPyType_types___Type)))
        cpy_r_r537 = cpy_r_r536;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 742, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r536);
        goto CPyL599;
    }
    cpy_r_mapped_arg = cpy_r_r537;
    cpy_r_r538 = CPySequenceTuple_GetItem(cpy_r_template_args, cpy_r_r521);
    if (unlikely(cpy_r_r538 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 742, CPyStatic_constraints___globals);
        goto CPyL600;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r538, CPyType_types___Type)))
        cpy_r_r539 = cpy_r_r538;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 742, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r538);
        goto CPyL600;
    }
    cpy_r_template_arg = cpy_r_r539;
    cpy_r_r540 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r541 = (CPyPtr)&((PyObject *)cpy_r_tvar)->ob_type;
    cpy_r_r542 = *(PyObject * *)cpy_r_r541;
    cpy_r_r543 = cpy_r_r542 == cpy_r_r540;
    cpy_r_r544 = cpy_r_r543 ^ 1;
    if (cpy_r_r544) {
        goto CPyL309;
    } else
        goto CPyL601;
CPyL307: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r545 = 0;
    if (unlikely(!cpy_r_r545)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 743, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_Unreachable();
CPyL309: ;
    cpy_r_r546 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r547 = (CPyPtr)&((PyObject *)cpy_r_tvar)->ob_type;
    cpy_r_r548 = *(PyObject * *)cpy_r_r547;
    cpy_r_r549 = cpy_r_r548 == cpy_r_r546;
    if (!cpy_r_r549) goto CPyL321;
    if (likely(Py_TYPE(cpy_r_tvar) == CPyType_types___TypeVarType))
        cpy_r_r550 = cpy_r_tvar;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 747, CPyStatic_constraints___globals, "mypy.types.TypeVarType", cpy_r_tvar);
        goto CPyL602;
    }
    cpy_r_r551 = ((mypy___types___TypeVarTypeObject *)cpy_r_r550)->_variance;
    cpy_r_r552 = cpy_r_r551 != 4;
    if (!cpy_r_r552) goto CPyL315;
    cpy_r_r553 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r553 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 748, CPyStatic_constraints___globals);
        goto CPyL602;
    }
    CPyTagged_INCREF(cpy_r_r553);
CPyL313: ;
    cpy_r_r554 = CPyDef_constraints___infer_constraints(cpy_r_template_arg, cpy_r_mapped_arg, cpy_r_r553);
    CPyTagged_DECREF(cpy_r_r553);
    if (unlikely(cpy_r_r554 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 748, CPyStatic_constraints___globals);
        goto CPyL602;
    }
    cpy_r_r555 = CPyList_Extend(cpy_r_res, cpy_r_r554);
    CPy_DECREF(cpy_r_r554);
    if (unlikely(cpy_r_r555 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 748, CPyStatic_constraints___globals);
        goto CPyL602;
    } else
        goto CPyL603;
CPyL315: ;
    if (likely(Py_TYPE(cpy_r_tvar) == CPyType_types___TypeVarType))
        cpy_r_r556 = cpy_r_tvar;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 749, CPyStatic_constraints___globals, "mypy.types.TypeVarType", cpy_r_tvar);
        goto CPyL602;
    }
    cpy_r_r557 = ((mypy___types___TypeVarTypeObject *)cpy_r_r556)->_variance;
    cpy_r_r558 = cpy_r_r557 != 2;
    CPy_DECREF(cpy_r_tvar);
    if (!cpy_r_r558) goto CPyL604;
    cpy_r_r559 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r559 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 751, CPyStatic_constraints___globals);
        goto CPyL605;
    }
    CPyTagged_INCREF(cpy_r_r559);
CPyL318: ;
    cpy_r_r560 = CPyDef_constraints___neg_op(cpy_r_r559);
    CPyTagged_DECREF(cpy_r_r559);
    if (unlikely(cpy_r_r560 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 751, CPyStatic_constraints___globals);
        goto CPyL605;
    }
    cpy_r_r561 = CPyDef_constraints___infer_constraints(cpy_r_template_arg, cpy_r_mapped_arg, cpy_r_r560);
    CPy_DECREF(cpy_r_template_arg);
    CPy_DECREF(cpy_r_mapped_arg);
    CPyTagged_DECREF(cpy_r_r560);
    if (unlikely(cpy_r_r561 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 751, CPyStatic_constraints___globals);
        goto CPyL593;
    }
    cpy_r_r562 = CPyList_Extend(cpy_r_res, cpy_r_r561);
    CPy_DECREF(cpy_r_r561);
    if (unlikely(cpy_r_r562 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 750, CPyStatic_constraints___globals);
        goto CPyL593;
    } else
        goto CPyL606;
CPyL321: ;
    cpy_r_r563 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r564 = (CPyPtr)&((PyObject *)cpy_r_tvar)->ob_type;
    cpy_r_r565 = *(PyObject * *)cpy_r_r564;
    cpy_r_r566 = cpy_r_r565 == cpy_r_r563;
    if (!cpy_r_r566) goto CPyL607;
    cpy_r_r567 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r568 = (CPyPtr)&((PyObject *)cpy_r_template_arg)->ob_type;
    cpy_r_r569 = *(PyObject * *)cpy_r_r568;
    cpy_r_r570 = cpy_r_r569 == cpy_r_r567;
    if (cpy_r_r570) {
        goto CPyL608;
    } else
        goto CPyL607;
CPyL323: ;
    cpy_r_r571 = CPyDef_types___get_proper_type(cpy_r_mapped_arg);
    CPy_DECREF(cpy_r_mapped_arg);
    if (unlikely(cpy_r_r571 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 756, CPyStatic_constraints___globals);
        goto CPyL609;
    }
    if (likely(cpy_r_r571 != Py_None))
        cpy_r_r572 = cpy_r_r571;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 756, CPyStatic_constraints___globals, "mypy.types.ProperType", cpy_r_r571);
        goto CPyL609;
    }
    cpy_r_suffix = cpy_r_r572;
    cpy_r_r573 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r574 = (CPyPtr)&((PyObject *)cpy_r_suffix)->ob_type;
    cpy_r_r575 = *(PyObject * *)cpy_r_r574;
    cpy_r_r576 = cpy_r_r575 == cpy_r_r573;
    if (!cpy_r_r576) goto CPyL334;
    if (likely(Py_TYPE(cpy_r_template_arg) == CPyType_types___ParamSpecType))
        cpy_r_r577 = cpy_r_template_arg;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 759, CPyStatic_constraints___globals, "mypy.types.ParamSpecType", cpy_r_template_arg);
        goto CPyL610;
    }
    cpy_r_r578 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r577)->_prefix;
    CPy_INCREF(cpy_r_r578);
    cpy_r_prefix = cpy_r_r578;
    cpy_r_r579 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_types;
    CPy_INCREF(cpy_r_r579);
    CPy_DECREF(cpy_r_prefix);
    cpy_r_r580 = (CPyPtr)&((PyVarObject *)cpy_r_r579)->ob_size;
    cpy_r_r581 = *(int64_t *)cpy_r_r580;
    CPy_DECREF(cpy_r_r579);
    cpy_r_r582 = cpy_r_r581 << 1;
    cpy_r_r583 = cpy_r_r582 != 0;
    if (!cpy_r_r583) goto CPyL329;
    cpy_r_r584 = cpy_r_r583;
    goto CPyL331;
CPyL329: ;
    if (likely(Py_TYPE(cpy_r_suffix) == CPyType_types___CallableType))
        cpy_r_r585 = cpy_r_suffix;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 760, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_suffix);
        goto CPyL610;
    }
    cpy_r_r586 = ((mypy___types___CallableTypeObject *)cpy_r_r585)->_from_concatenate;
    cpy_r_r584 = cpy_r_r586;
CPyL331: ;
    cpy_r_from_concat = cpy_r_r584;
    if (likely(Py_TYPE(cpy_r_suffix) == CPyType_types___CallableType))
        cpy_r_r587 = cpy_r_suffix;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 761, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_suffix);
        goto CPyL609;
    }
    cpy_r_r588 = NULL;
    cpy_r_r589 = NULL;
    cpy_r_r590 = NULL;
    cpy_r_r591 = NULL;
    cpy_r_r592 = NULL;
    cpy_r_r593 = NULL;
    cpy_r_r594 = NULL;
    cpy_r_r595 = NULL;
    cpy_r_r596 = CPY_INT_TAG;
    cpy_r_r597 = CPY_INT_TAG;
    cpy_r_r598 = NULL;
    cpy_r_r599 = NULL;
    cpy_r_r600 = NULL;
    cpy_r_r601 = NULL;
    cpy_r_r602 = NULL;
    cpy_r_r603 = NULL;
    cpy_r_r604 = NULL;
    cpy_r_r605 = cpy_r_from_concat ? Py_True : Py_False;
    cpy_r_r606 = NULL;
    cpy_r_r607 = CPyDef_types___CallableType___copy_modified(cpy_r_r587, cpy_r_r588, cpy_r_r589, cpy_r_r590, cpy_r_r591, cpy_r_r592, cpy_r_r593, cpy_r_r594, cpy_r_r595, cpy_r_r596, cpy_r_r597, cpy_r_r598, cpy_r_r599, cpy_r_r600, cpy_r_r601, cpy_r_r602, cpy_r_r603, cpy_r_r604, cpy_r_r605, cpy_r_r606);
    CPy_DECREF(cpy_r_r587);
    if (unlikely(cpy_r_r607 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 761, CPyStatic_constraints___globals);
        goto CPyL609;
    }
    cpy_r_suffix = cpy_r_r607;
CPyL334: ;
    cpy_r_r608 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r609 = (CPyPtr)&((PyObject *)cpy_r_suffix)->ob_type;
    cpy_r_r610 = *(PyObject * *)cpy_r_r609;
    cpy_r_r611 = cpy_r_r610 == cpy_r_r608;
    if (!cpy_r_r611) goto CPyL336;
    cpy_r_r612 = cpy_r_r611;
    goto CPyL337;
CPyL336: ;
    cpy_r_r613 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r614 = (CPyPtr)&((PyObject *)cpy_r_suffix)->ob_type;
    cpy_r_r615 = *(PyObject * *)cpy_r_r614;
    cpy_r_r616 = cpy_r_r615 == cpy_r_r613;
    cpy_r_r612 = cpy_r_r616;
CPyL337: ;
    if (!cpy_r_r612) goto CPyL375;
    if (likely(Py_TYPE(cpy_r_template_arg) == CPyType_types___ParamSpecType))
        cpy_r_r617 = cpy_r_template_arg;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 767, CPyStatic_constraints___globals, "mypy.types.ParamSpecType", cpy_r_template_arg);
        goto CPyL610;
    }
    cpy_r_r618 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r617)->_prefix;
    CPy_INCREF(cpy_r_r618);
    cpy_r_prefix = cpy_r_r618;
    CPy_INCREF(cpy_r_suffix);
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___Parameters)
        cpy_r_r619 = cpy_r_suffix;
    else {
        cpy_r_r619 = NULL;
    }
    if (cpy_r_r619 != NULL) goto __LL1815;
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___CallableType)
        cpy_r_r619 = cpy_r_suffix;
    else {
        cpy_r_r619 = NULL;
    }
    if (cpy_r_r619 != NULL) goto __LL1815;
    CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 769, CPyStatic_constraints___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_suffix);
    goto CPyL611;
__LL1815: ;
    CPy_INCREF(cpy_r_suffix);
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___Parameters)
        cpy_r_r620 = cpy_r_suffix;
    else {
        cpy_r_r620 = NULL;
    }
    if (cpy_r_r620 != NULL) goto __LL1816;
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___CallableType)
        cpy_r_r620 = cpy_r_suffix;
    else {
        cpy_r_r620 = NULL;
    }
    if (cpy_r_r620 != NULL) goto __LL1816;
    CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 770, CPyStatic_constraints___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_suffix);
    goto CPyL612;
__LL1816: ;
    cpy_r_r621 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r622 = (CPyPtr)&((PyObject *)cpy_r_r620)->ob_type;
    cpy_r_r623 = *(PyObject * *)cpy_r_r622;
    cpy_r_r624 = cpy_r_r623 == cpy_r_r621;
    if (!cpy_r_r624) goto CPyL344;
    if (likely(Py_TYPE(cpy_r_r620) == CPyType_types___Parameters))
        cpy_r_r625 = cpy_r_r620;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 770, CPyStatic_constraints___globals, "mypy.types.Parameters", cpy_r_r620);
        goto CPyL612;
    }
    cpy_r_r626 = ((mypy___types___ParametersObject *)cpy_r_r625)->_arg_types;
    CPy_INCREF(cpy_r_r626);
    CPy_DECREF(cpy_r_r625);
    cpy_r_r627 = cpy_r_r626;
    goto CPyL346;
CPyL344: ;
    if (likely(Py_TYPE(cpy_r_r620) == CPyType_types___CallableType))
        cpy_r_r628 = cpy_r_r620;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 770, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r620);
        goto CPyL612;
    }
    cpy_r_r629 = ((mypy___types___CallableTypeObject *)cpy_r_r628)->_arg_types;
    CPy_INCREF(cpy_r_r629);
    CPy_DECREF(cpy_r_r628);
    cpy_r_r627 = cpy_r_r629;
CPyL346: ;
    cpy_r_r630 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_types;
    cpy_r_r631 = (CPyPtr)&((PyVarObject *)cpy_r_r630)->ob_size;
    cpy_r_r632 = *(int64_t *)cpy_r_r631;
    cpy_r_r633 = cpy_r_r632 << 1;
    cpy_r_r634 = CPyList_GetSlice(cpy_r_r627, cpy_r_r633, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r627);
    if (unlikely(cpy_r_r634 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 770, CPyStatic_constraints___globals);
        goto CPyL612;
    }
    if (likely(PyList_Check(cpy_r_r634)))
        cpy_r_r635 = cpy_r_r634;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 770, CPyStatic_constraints___globals, "list", cpy_r_r634);
        goto CPyL612;
    }
    CPy_INCREF(cpy_r_suffix);
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___Parameters)
        cpy_r_r636 = cpy_r_suffix;
    else {
        cpy_r_r636 = NULL;
    }
    if (cpy_r_r636 != NULL) goto __LL1817;
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___CallableType)
        cpy_r_r636 = cpy_r_suffix;
    else {
        cpy_r_r636 = NULL;
    }
    if (cpy_r_r636 != NULL) goto __LL1817;
    CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 771, CPyStatic_constraints___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_suffix);
    goto CPyL613;
__LL1817: ;
    cpy_r_r637 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r638 = (CPyPtr)&((PyObject *)cpy_r_r636)->ob_type;
    cpy_r_r639 = *(PyObject * *)cpy_r_r638;
    cpy_r_r640 = cpy_r_r639 == cpy_r_r637;
    if (!cpy_r_r640) goto CPyL352;
    if (likely(Py_TYPE(cpy_r_r636) == CPyType_types___Parameters))
        cpy_r_r641 = cpy_r_r636;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 771, CPyStatic_constraints___globals, "mypy.types.Parameters", cpy_r_r636);
        goto CPyL613;
    }
    cpy_r_r642 = ((mypy___types___ParametersObject *)cpy_r_r641)->_arg_kinds;
    CPy_INCREF(cpy_r_r642);
    CPy_DECREF(cpy_r_r641);
    cpy_r_r643 = cpy_r_r642;
    goto CPyL354;
CPyL352: ;
    if (likely(Py_TYPE(cpy_r_r636) == CPyType_types___CallableType))
        cpy_r_r644 = cpy_r_r636;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 771, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r636);
        goto CPyL613;
    }
    cpy_r_r645 = ((mypy___types___CallableTypeObject *)cpy_r_r644)->_arg_kinds;
    CPy_INCREF(cpy_r_r645);
    CPy_DECREF(cpy_r_r644);
    cpy_r_r643 = cpy_r_r645;
CPyL354: ;
    cpy_r_r646 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_kinds;
    cpy_r_r647 = (CPyPtr)&((PyVarObject *)cpy_r_r646)->ob_size;
    cpy_r_r648 = *(int64_t *)cpy_r_r647;
    cpy_r_r649 = cpy_r_r648 << 1;
    cpy_r_r650 = CPyList_GetSlice(cpy_r_r643, cpy_r_r649, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r643);
    if (unlikely(cpy_r_r650 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 771, CPyStatic_constraints___globals);
        goto CPyL613;
    }
    if (likely(PyList_Check(cpy_r_r650)))
        cpy_r_r651 = cpy_r_r650;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 771, CPyStatic_constraints___globals, "list", cpy_r_r650);
        goto CPyL613;
    }
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___Parameters)
        cpy_r_r652 = cpy_r_suffix;
    else {
        cpy_r_r652 = NULL;
    }
    if (cpy_r_r652 != NULL) goto __LL1818;
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___CallableType)
        cpy_r_r652 = cpy_r_suffix;
    else {
        cpy_r_r652 = NULL;
    }
    if (cpy_r_r652 != NULL) goto __LL1818;
    CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 772, CPyStatic_constraints___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_suffix);
    goto CPyL614;
__LL1818: ;
    cpy_r_r653 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r654 = (CPyPtr)&((PyObject *)cpy_r_r652)->ob_type;
    cpy_r_r655 = *(PyObject * *)cpy_r_r654;
    cpy_r_r656 = cpy_r_r655 == cpy_r_r653;
    if (!cpy_r_r656) goto CPyL360;
    if (likely(Py_TYPE(cpy_r_r652) == CPyType_types___Parameters))
        cpy_r_r657 = cpy_r_r652;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 772, CPyStatic_constraints___globals, "mypy.types.Parameters", cpy_r_r652);
        goto CPyL614;
    }
    cpy_r_r658 = ((mypy___types___ParametersObject *)cpy_r_r657)->_arg_names;
    CPy_INCREF(cpy_r_r658);
    CPy_DECREF(cpy_r_r657);
    cpy_r_r659 = cpy_r_r658;
    goto CPyL362;
CPyL360: ;
    if (likely(Py_TYPE(cpy_r_r652) == CPyType_types___CallableType))
        cpy_r_r660 = cpy_r_r652;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 772, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r652);
        goto CPyL614;
    }
    cpy_r_r661 = ((mypy___types___CallableTypeObject *)cpy_r_r660)->_arg_names;
    CPy_INCREF(cpy_r_r661);
    CPy_DECREF(cpy_r_r660);
    cpy_r_r659 = cpy_r_r661;
CPyL362: ;
    cpy_r_r662 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_names;
    cpy_r_r663 = (CPyPtr)&((PyVarObject *)cpy_r_r662)->ob_size;
    cpy_r_r664 = *(int64_t *)cpy_r_r663;
    cpy_r_r665 = cpy_r_r664 << 1;
    CPy_DECREF(cpy_r_prefix);
    cpy_r_r666 = CPyList_GetSlice(cpy_r_r659, cpy_r_r665, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r659);
    if (unlikely(cpy_r_r666 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 772, CPyStatic_constraints___globals);
        goto CPyL615;
    }
    if (likely(PyList_Check(cpy_r_r666)))
        cpy_r_r667 = cpy_r_r666;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 772, CPyStatic_constraints___globals, "list", cpy_r_r666);
        goto CPyL615;
    }
    cpy_r_r668 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r669 = (CPyPtr)&((PyObject *)cpy_r_r619)->ob_type;
    cpy_r_r670 = *(PyObject * *)cpy_r_r669;
    cpy_r_r671 = cpy_r_r670 == cpy_r_r668;
    if (!cpy_r_r671) goto CPyL368;
    if (likely(Py_TYPE(cpy_r_r619) == CPyType_types___Parameters))
        cpy_r_r672 = cpy_r_r619;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 769, CPyStatic_constraints___globals, "mypy.types.Parameters", cpy_r_r619);
        goto CPyL616;
    }
    cpy_r_r673 = NULL;
    cpy_r_r674 = NULL;
    cpy_r_r675 = CPyDef_types___Parameters___copy_modified(cpy_r_r672, cpy_r_r635, cpy_r_r651, cpy_r_r667, cpy_r_r673, cpy_r_r674);
    CPy_DECREF(cpy_r_r635);
    CPy_DECREF(cpy_r_r651);
    CPy_DECREF(cpy_r_r667);
    CPy_DECREF(cpy_r_r672);
    if (unlikely(cpy_r_r675 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 769, CPyStatic_constraints___globals);
        goto CPyL609;
    }
    cpy_r_r676 = cpy_r_r675;
    goto CPyL371;
CPyL368: ;
    if (likely(Py_TYPE(cpy_r_r619) == CPyType_types___CallableType))
        cpy_r_r677 = cpy_r_r619;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 769, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r619);
        goto CPyL616;
    }
    cpy_r_r678 = NULL;
    cpy_r_r679 = NULL;
    cpy_r_r680 = NULL;
    cpy_r_r681 = NULL;
    cpy_r_r682 = NULL;
    cpy_r_r683 = CPY_INT_TAG;
    cpy_r_r684 = CPY_INT_TAG;
    cpy_r_r685 = NULL;
    cpy_r_r686 = NULL;
    cpy_r_r687 = NULL;
    cpy_r_r688 = NULL;
    cpy_r_r689 = NULL;
    cpy_r_r690 = NULL;
    cpy_r_r691 = NULL;
    cpy_r_r692 = NULL;
    cpy_r_r693 = NULL;
    cpy_r_r694 = CPyDef_types___CallableType___copy_modified(cpy_r_r677, cpy_r_r635, cpy_r_r651, cpy_r_r667, cpy_r_r678, cpy_r_r679, cpy_r_r680, cpy_r_r681, cpy_r_r682, cpy_r_r683, cpy_r_r684, cpy_r_r685, cpy_r_r686, cpy_r_r687, cpy_r_r688, cpy_r_r689, cpy_r_r690, cpy_r_r691, cpy_r_r692, cpy_r_r693);
    CPy_DECREF(cpy_r_r635);
    CPy_DECREF(cpy_r_r651);
    CPy_DECREF(cpy_r_r667);
    CPy_DECREF(cpy_r_r677);
    if (unlikely(cpy_r_r694 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 769, CPyStatic_constraints___globals);
        goto CPyL609;
    }
    cpy_r_r676 = cpy_r_r694;
CPyL371: ;
    cpy_r_suffix = cpy_r_r676;
    if (likely(Py_TYPE(cpy_r_template_arg) == CPyType_types___ParamSpecType))
        cpy_r_r695 = cpy_r_template_arg;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 774, CPyStatic_constraints___globals, "mypy.types.ParamSpecType", cpy_r_template_arg);
        goto CPyL617;
    }
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___Parameters)
        cpy_r_r696 = cpy_r_suffix;
    else {
        cpy_r_r696 = NULL;
    }
    if (cpy_r_r696 != NULL) goto __LL1819;
    if (Py_TYPE(cpy_r_suffix) == CPyType_types___CallableType)
        cpy_r_r696 = cpy_r_suffix;
    else {
        cpy_r_r696 = NULL;
    }
    if (cpy_r_r696 != NULL) goto __LL1819;
    CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 774, CPyStatic_constraints___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_suffix);
    goto CPyL618;
__LL1819: ;
    cpy_r_r697 = CPyDef_constraints___Constraint(cpy_r_r695, 2, cpy_r_r696);
    CPy_DECREF(cpy_r_r695);
    CPy_DECREF(cpy_r_r696);
    if (unlikely(cpy_r_r697 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 774, CPyStatic_constraints___globals);
        goto CPyL593;
    }
    cpy_r_r698 = PyList_Append(cpy_r_res, cpy_r_r697);
    CPy_DECREF(cpy_r_r697);
    cpy_r_r699 = cpy_r_r698 >= 0;
    if (unlikely(!cpy_r_r699)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 774, CPyStatic_constraints___globals);
        goto CPyL593;
    } else
        goto CPyL383;
CPyL375: ;
    cpy_r_r700 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r701 = (CPyPtr)&((PyObject *)cpy_r_suffix)->ob_type;
    cpy_r_r702 = *(PyObject * *)cpy_r_r701;
    cpy_r_r703 = cpy_r_r702 == cpy_r_r700;
    if (!cpy_r_r703) goto CPyL619;
    if (likely(Py_TYPE(cpy_r_template_arg) == CPyType_types___ParamSpecType))
        cpy_r_r704 = cpy_r_template_arg;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 776, CPyStatic_constraints___globals, "mypy.types.ParamSpecType", cpy_r_template_arg);
        goto CPyL617;
    }
    if (likely(Py_TYPE(cpy_r_suffix) == CPyType_types___ParamSpecType))
        cpy_r_r705 = cpy_r_suffix;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 776, CPyStatic_constraints___globals, "mypy.types.ParamSpecType", cpy_r_suffix);
        goto CPyL620;
    }
    cpy_r_r706 = CPyDef_constraints___Constraint(cpy_r_r704, 2, cpy_r_r705);
    CPy_DECREF(cpy_r_r704);
    CPy_DECREF(cpy_r_r705);
    if (unlikely(cpy_r_r706 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 776, CPyStatic_constraints___globals);
        goto CPyL593;
    }
    cpy_r_r707 = PyList_Append(cpy_r_res, cpy_r_r706);
    CPy_DECREF(cpy_r_r706);
    cpy_r_r708 = cpy_r_r707 >= 0;
    if (unlikely(!cpy_r_r708)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 776, CPyStatic_constraints___globals);
        goto CPyL593;
    } else
        goto CPyL383;
CPyL380: ;
    cpy_r_r709 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r710 = (CPyPtr)&((PyObject *)cpy_r_tvar)->ob_type;
    cpy_r_r711 = *(PyObject * *)cpy_r_r710;
    CPy_DECREF(cpy_r_tvar);
    cpy_r_r712 = cpy_r_r711 == cpy_r_r709;
    cpy_r_r713 = cpy_r_r712 ^ 1;
    if (cpy_r_r713) {
        goto CPyL383;
    } else
        goto CPyL621;
CPyL381: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r714 = 0;
    if (unlikely(!cpy_r_r714)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 779, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_Unreachable();
CPyL383: ;
    cpy_r_r715 = cpy_r_r519 + 2;
    cpy_r_r519 = cpy_r_r715;
    cpy_r_r716 = cpy_r_r520 + 2;
    cpy_r_r520 = cpy_r_r716;
    cpy_r_r717 = cpy_r_r521 + 2;
    cpy_r_r521 = cpy_r_r717;
    goto CPyL298;
CPyL384: ;
    return cpy_r_res;
CPyL385: ;
    cpy_r_r718 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r719 = ((mypy___nodes___TypeInfoObject *)cpy_r_r718)->_is_protocol;
    if (unlikely(cpy_r_r719 == 2)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "is_protocol", 782, CPyStatic_constraints___globals);
        goto CPyL532;
    }
CPyL386: ;
    if (!cpy_r_r719) goto CPyL622;
CPyL387: ;
    cpy_r_r720 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r720 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 783, CPyStatic_constraints___globals);
        goto CPyL532;
    }
CPyL388: ;
    cpy_r_r721 = cpy_r_r720 == 2;
    if (!cpy_r_r721) goto CPyL622;
    cpy_r_r722 = 0;
    cpy_r_r723 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r724 = ((mypy___nodes___TypeInfoObject *)cpy_r_r723)->_inferring;
    if (unlikely(cpy_r_r724 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "inferring", 793, CPyStatic_constraints___globals);
        goto CPyL532;
    }
    CPy_INCREF(cpy_r_r724);
CPyL390: ;
    cpy_r_r725 = (CPyPtr)&((PyVarObject *)cpy_r_r724)->ob_size;
    cpy_r_r726 = *(int64_t *)cpy_r_r725;
    cpy_r_r727 = cpy_r_r726 << 1;
    cpy_r_r728 = CPyTagged_Subtract(cpy_r_r727, 2);
    cpy_r_r729 = cpy_r_r728;
CPyL391: ;
    cpy_r_r730 = cpy_r_r729 & 1;
    cpy_r_r731 = cpy_r_r730 == 0;
    cpy_r_r732 = 0 & 1;
    cpy_r_r733 = cpy_r_r732 == 0;
    cpy_r_r734 = cpy_r_r731 & cpy_r_r733;
    if (!cpy_r_r734) goto CPyL393;
    cpy_r_r735 = (Py_ssize_t)cpy_r_r729 >= (Py_ssize_t)0;
    cpy_r_r736 = cpy_r_r735;
    goto CPyL394;
CPyL393: ;
    cpy_r_r737 = CPyTagged_IsLt_(cpy_r_r729, 0);
    cpy_r_r738 = cpy_r_r737 ^ 1;
    cpy_r_r736 = cpy_r_r738;
CPyL394: ;
    if (!cpy_r_r736) goto CPyL623;
    cpy_r_r739 = (CPyPtr)&((PyVarObject *)cpy_r_r724)->ob_size;
    cpy_r_r740 = *(int64_t *)cpy_r_r739;
    cpy_r_r741 = cpy_r_r740 << 1;
    cpy_r_r742 = cpy_r_r729 & 1;
    cpy_r_r743 = cpy_r_r742 == 0;
    cpy_r_r744 = cpy_r_r741 & 1;
    cpy_r_r745 = cpy_r_r744 == 0;
    cpy_r_r746 = cpy_r_r743 & cpy_r_r745;
    if (!cpy_r_r746) goto CPyL397;
    cpy_r_r747 = (Py_ssize_t)cpy_r_r729 < (Py_ssize_t)cpy_r_r741;
    cpy_r_r748 = cpy_r_r747;
    goto CPyL398;
CPyL397: ;
    cpy_r_r749 = CPyTagged_IsLt_(cpy_r_r729, cpy_r_r741);
    cpy_r_r748 = cpy_r_r749;
CPyL398: ;
    if (!cpy_r_r748) goto CPyL623;
    CPyTagged_INCREF(cpy_r_r729);
    cpy_r_r750 = CPyTagged_StealAsObject(cpy_r_r729);
    if (likely(PyLong_Check(cpy_r_r750)))
        cpy_r_r751 = CPyTagged_FromObject(cpy_r_r750);
    else {
        CPy_TypeError("short_int", cpy_r_r750); cpy_r_r751 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r750);
    if (unlikely(cpy_r_r751 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 793, CPyStatic_constraints___globals);
        goto CPyL624;
    }
    cpy_r_r752 = CPyList_GetItemUnsafe(cpy_r_r724, cpy_r_r751);
    if (likely(Py_TYPE(cpy_r_r752) == CPyType_types___Instance))
        cpy_r_r753 = cpy_r_r752;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 793, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_r752);
        goto CPyL624;
    }
    cpy_r_t_2 = cpy_r_r753;
    cpy_r_r754 = CPyDef_types___Instance_____eq__(cpy_r_template, cpy_r_t_2);
    CPy_DECREF(cpy_r_t_2);
    if (unlikely(cpy_r_r754 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 793, CPyStatic_constraints___globals);
        goto CPyL624;
    }
    if (unlikely(!PyBool_Check(cpy_r_r754))) {
        CPy_TypeError("bool", cpy_r_r754); cpy_r_r755 = 2;
    } else
        cpy_r_r755 = cpy_r_r754 == Py_True;
    CPy_DECREF(cpy_r_r754);
    if (unlikely(cpy_r_r755 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 793, CPyStatic_constraints___globals);
        goto CPyL624;
    }
    if (cpy_r_r755) {
        goto CPyL625;
    } else
        goto CPyL405;
CPyL404: ;
    cpy_r_r722 = 1;
    goto CPyL406;
CPyL405: ;
    cpy_r_r756 = cpy_r_r729 + -2;
    CPyTagged_DECREF(cpy_r_r729);
    cpy_r_r729 = cpy_r_r756;
    goto CPyL391;
CPyL406: ;
    if (cpy_r_r722) goto CPyL622;
    CPy_INCREF(cpy_r_erased);
    if (likely(Py_TYPE(cpy_r_erased) == CPyType_types___Instance))
        cpy_r_r757 = cpy_r_erased;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 794, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_erased);
        goto CPyL532;
    }
    cpy_r_r758 = CPyStatics[706]; /* '__call__' */
    cpy_r_r759 = PyList_New(1);
    if (unlikely(cpy_r_r759 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 794, CPyStatic_constraints___globals);
        goto CPyL626;
    }
    cpy_r_r760 = (CPyPtr)&((PyListObject *)cpy_r_r759)->ob_item;
    cpy_r_r761 = *(CPyPtr *)cpy_r_r760;
    CPy_INCREF(cpy_r_r758);
    *(PyObject * *)cpy_r_r761 = cpy_r_r758;
    cpy_r_r762 = 2;
    cpy_r_r763 = 2;
    cpy_r_r764 = CPyDef_subtypes___is_protocol_implementation(cpy_r_instance, cpy_r_r757, cpy_r_r762, cpy_r_r763, cpy_r_r759);
    CPy_DECREF(cpy_r_r757);
    CPy_DECREF(cpy_r_r759);
    if (unlikely(cpy_r_r764 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 794, CPyStatic_constraints___globals);
        goto CPyL532;
    }
    if (cpy_r_r764) {
        goto CPyL627;
    } else
        goto CPyL622;
CPyL411: ;
    cpy_r_r765 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r766 = ((mypy___nodes___TypeInfoObject *)cpy_r_r765)->_inferring;
    if (unlikely(cpy_r_r766 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "inferring", 796, CPyStatic_constraints___globals);
        goto CPyL628;
    }
    CPy_INCREF(cpy_r_r766);
CPyL412: ;
    cpy_r_r767 = PyList_Append(cpy_r_r766, cpy_r_template);
    CPy_DECREF(cpy_r_r766);
    cpy_r_r768 = cpy_r_r767 >= 0;
    if (unlikely(!cpy_r_r768)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 796, CPyStatic_constraints___globals);
        goto CPyL628;
    }
    cpy_r_r769 = 2;
    cpy_r_r770 = CPyDef_constraints___ConstraintBuilderVisitor___infer_constraints_from_protocol_members(cpy_r_self, cpy_r_instance, cpy_r_template, cpy_r_original_actual, cpy_r_template, cpy_r_r769);
    CPy_DECREF(cpy_r_instance);
    CPy_DECREF(cpy_r_original_actual);
    if (unlikely(cpy_r_r770 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 798, CPyStatic_constraints___globals);
        goto CPyL580;
    }
    cpy_r_r771 = CPyList_Extend(cpy_r_res, cpy_r_r770);
    CPy_DECREF(cpy_r_r770);
    if (unlikely(cpy_r_r771 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 797, CPyStatic_constraints___globals);
        goto CPyL580;
    } else
        goto CPyL629;
CPyL415: ;
    cpy_r_r772 = ((mypy___types___InstanceObject *)cpy_r_template)->_type;
    cpy_r_r773 = ((mypy___nodes___TypeInfoObject *)cpy_r_r772)->_inferring;
    if (unlikely(cpy_r_r773 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "inferring", 802, CPyStatic_constraints___globals);
        goto CPyL580;
    }
    CPy_INCREF(cpy_r_r773);
CPyL416: ;
    cpy_r_r774 = CPyList_PopLast(cpy_r_r773);
    CPy_DECREF(cpy_r_r773);
    if (unlikely(cpy_r_r774 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 802, CPyStatic_constraints___globals);
        goto CPyL580;
    }
    if (likely(Py_TYPE(cpy_r_r774) == CPyType_types___Instance))
        cpy_r_r775 = cpy_r_r774;
    else {
        CPy_TypeError("mypy.types.Instance", cpy_r_r774); 
        cpy_r_r775 = NULL;
    }
    if (unlikely(cpy_r_r775 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 802, CPyStatic_constraints___globals);
        goto CPyL580;
    } else
        goto CPyL630;
CPyL418: ;
    return cpy_r_res;
CPyL419: ;
    cpy_r_r776 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r777 = ((mypy___nodes___TypeInfoObject *)cpy_r_r776)->_is_protocol;
    if (unlikely(cpy_r_r777 == 2)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "is_protocol", 805, CPyStatic_constraints___globals);
        goto CPyL631;
    }
CPyL420: ;
    if (!cpy_r_r777) goto CPyL632;
CPyL421: ;
    cpy_r_r778 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r778 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 806, CPyStatic_constraints___globals);
        goto CPyL631;
    }
CPyL422: ;
    cpy_r_r779 = cpy_r_r778 == 0;
    if (!cpy_r_r779) goto CPyL632;
    cpy_r_r780 = 0;
    cpy_r_r781 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r782 = ((mypy___nodes___TypeInfoObject *)cpy_r_r781)->_inferring;
    if (unlikely(cpy_r_r782 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "inferring", 809, CPyStatic_constraints___globals);
        goto CPyL631;
    }
    CPy_INCREF(cpy_r_r782);
CPyL424: ;
    cpy_r_r783 = (CPyPtr)&((PyVarObject *)cpy_r_r782)->ob_size;
    cpy_r_r784 = *(int64_t *)cpy_r_r783;
    cpy_r_r785 = cpy_r_r784 << 1;
    cpy_r_r786 = CPyTagged_Subtract(cpy_r_r785, 2);
    cpy_r_r787 = cpy_r_r786;
CPyL425: ;
    cpy_r_r788 = cpy_r_r787 & 1;
    cpy_r_r789 = cpy_r_r788 == 0;
    cpy_r_r790 = 0 & 1;
    cpy_r_r791 = cpy_r_r790 == 0;
    cpy_r_r792 = cpy_r_r789 & cpy_r_r791;
    if (!cpy_r_r792) goto CPyL427;
    cpy_r_r793 = (Py_ssize_t)cpy_r_r787 >= (Py_ssize_t)0;
    cpy_r_r794 = cpy_r_r793;
    goto CPyL428;
CPyL427: ;
    cpy_r_r795 = CPyTagged_IsLt_(cpy_r_r787, 0);
    cpy_r_r796 = cpy_r_r795 ^ 1;
    cpy_r_r794 = cpy_r_r796;
CPyL428: ;
    if (!cpy_r_r794) goto CPyL633;
    cpy_r_r797 = (CPyPtr)&((PyVarObject *)cpy_r_r782)->ob_size;
    cpy_r_r798 = *(int64_t *)cpy_r_r797;
    cpy_r_r799 = cpy_r_r798 << 1;
    cpy_r_r800 = cpy_r_r787 & 1;
    cpy_r_r801 = cpy_r_r800 == 0;
    cpy_r_r802 = cpy_r_r799 & 1;
    cpy_r_r803 = cpy_r_r802 == 0;
    cpy_r_r804 = cpy_r_r801 & cpy_r_r803;
    if (!cpy_r_r804) goto CPyL431;
    cpy_r_r805 = (Py_ssize_t)cpy_r_r787 < (Py_ssize_t)cpy_r_r799;
    cpy_r_r806 = cpy_r_r805;
    goto CPyL432;
CPyL431: ;
    cpy_r_r807 = CPyTagged_IsLt_(cpy_r_r787, cpy_r_r799);
    cpy_r_r806 = cpy_r_r807;
CPyL432: ;
    if (!cpy_r_r806) goto CPyL633;
    CPyTagged_INCREF(cpy_r_r787);
    cpy_r_r808 = CPyTagged_StealAsObject(cpy_r_r787);
    if (likely(PyLong_Check(cpy_r_r808)))
        cpy_r_r809 = CPyTagged_FromObject(cpy_r_r808);
    else {
        CPy_TypeError("short_int", cpy_r_r808); cpy_r_r809 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r808);
    if (unlikely(cpy_r_r809 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 809, CPyStatic_constraints___globals);
        goto CPyL634;
    }
    cpy_r_r810 = CPyList_GetItemUnsafe(cpy_r_r782, cpy_r_r809);
    if (likely(Py_TYPE(cpy_r_r810) == CPyType_types___Instance))
        cpy_r_r811 = cpy_r_r810;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 809, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_r810);
        goto CPyL634;
    }
    cpy_r_i = cpy_r_r811;
    cpy_r_r812 = CPyDef_types___Instance_____eq__(cpy_r_instance, cpy_r_i);
    CPy_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r812 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 809, CPyStatic_constraints___globals);
        goto CPyL634;
    }
    if (unlikely(!PyBool_Check(cpy_r_r812))) {
        CPy_TypeError("bool", cpy_r_r812); cpy_r_r813 = 2;
    } else
        cpy_r_r813 = cpy_r_r812 == Py_True;
    CPy_DECREF(cpy_r_r812);
    if (unlikely(cpy_r_r813 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 809, CPyStatic_constraints___globals);
        goto CPyL634;
    }
    if (cpy_r_r813) {
        goto CPyL635;
    } else
        goto CPyL439;
CPyL438: ;
    cpy_r_r780 = 1;
    goto CPyL440;
CPyL439: ;
    cpy_r_r814 = cpy_r_r787 + -2;
    CPyTagged_DECREF(cpy_r_r787);
    cpy_r_r787 = cpy_r_r814;
    goto CPyL425;
CPyL440: ;
    if (cpy_r_r780) goto CPyL632;
    if (likely(Py_TYPE(cpy_r_erased) == CPyType_types___Instance))
        cpy_r_r815 = cpy_r_erased;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 810, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_erased);
        goto CPyL636;
    }
    cpy_r_r816 = CPyStatics[706]; /* '__call__' */
    cpy_r_r817 = PyList_New(1);
    if (unlikely(cpy_r_r817 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 810, CPyStatic_constraints___globals);
        goto CPyL637;
    }
    cpy_r_r818 = (CPyPtr)&((PyListObject *)cpy_r_r817)->ob_item;
    cpy_r_r819 = *(CPyPtr *)cpy_r_r818;
    CPy_INCREF(cpy_r_r816);
    *(PyObject * *)cpy_r_r819 = cpy_r_r816;
    cpy_r_r820 = 2;
    cpy_r_r821 = 2;
    cpy_r_r822 = CPyDef_subtypes___is_protocol_implementation(cpy_r_r815, cpy_r_instance, cpy_r_r820, cpy_r_r821, cpy_r_r817);
    CPy_DECREF(cpy_r_r815);
    CPy_DECREF(cpy_r_r817);
    if (unlikely(cpy_r_r822 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 810, CPyStatic_constraints___globals);
        goto CPyL636;
    }
    if (cpy_r_r822) {
        goto CPyL638;
    } else
        goto CPyL639;
CPyL445: ;
    cpy_r_r823 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r824 = ((mypy___nodes___TypeInfoObject *)cpy_r_r823)->_inferring;
    if (unlikely(cpy_r_r824 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "inferring", 812, CPyStatic_constraints___globals);
        goto CPyL535;
    }
    CPy_INCREF(cpy_r_r824);
CPyL446: ;
    cpy_r_r825 = PyList_Append(cpy_r_r824, cpy_r_instance);
    CPy_DECREF(cpy_r_r824);
    cpy_r_r826 = cpy_r_r825 >= 0;
    if (unlikely(!cpy_r_r826)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 812, CPyStatic_constraints___globals);
        goto CPyL535;
    }
    cpy_r_r827 = 2;
    cpy_r_r828 = CPyDef_constraints___ConstraintBuilderVisitor___infer_constraints_from_protocol_members(cpy_r_self, cpy_r_instance, cpy_r_template, cpy_r_template, cpy_r_instance, cpy_r_r827);
    if (unlikely(cpy_r_r828 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 814, CPyStatic_constraints___globals);
        goto CPyL535;
    }
    cpy_r_r829 = CPyList_Extend(cpy_r_res, cpy_r_r828);
    CPy_DECREF(cpy_r_r828);
    if (unlikely(cpy_r_r829 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 813, CPyStatic_constraints___globals);
        goto CPyL535;
    } else
        goto CPyL640;
CPyL449: ;
    cpy_r_r830 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r831 = ((mypy___nodes___TypeInfoObject *)cpy_r_r830)->_inferring;
    if (unlikely(cpy_r_r831 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "TypeInfo", "inferring", 818, CPyStatic_constraints___globals);
        goto CPyL535;
    }
    CPy_INCREF(cpy_r_r831);
CPyL450: ;
    CPy_DECREF(cpy_r_instance);
    cpy_r_r832 = CPyList_PopLast(cpy_r_r831);
    CPy_DECREF(cpy_r_r831);
    if (unlikely(cpy_r_r832 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 818, CPyStatic_constraints___globals);
        goto CPyL580;
    }
    if (likely(Py_TYPE(cpy_r_r832) == CPyType_types___Instance))
        cpy_r_r833 = cpy_r_r832;
    else {
        CPy_TypeError("mypy.types.Instance", cpy_r_r832); 
        cpy_r_r833 = NULL;
    }
    if (unlikely(cpy_r_r833 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 818, CPyStatic_constraints___globals);
        goto CPyL580;
    } else
        goto CPyL641;
CPyL452: ;
    return cpy_r_res;
CPyL453: ;
    cpy_r_r834 = (CPyPtr)&((PyVarObject *)cpy_r_res)->ob_size;
    cpy_r_r835 = *(int64_t *)cpy_r_r834;
    cpy_r_r836 = cpy_r_r835 << 1;
    cpy_r_r837 = cpy_r_r836 != 0;
    if (cpy_r_r837) {
        goto CPyL642;
    } else
        goto CPyL455;
CPyL454: ;
    return cpy_r_res;
CPyL455: ;
    cpy_r_r838 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r839 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r840 = *(PyObject * *)cpy_r_r839;
    cpy_r_r841 = cpy_r_r840 == cpy_r_r838;
    if (cpy_r_r841) {
        goto CPyL643;
    } else
        goto CPyL459;
CPyL456: ;
    cpy_r_r842 = ((mypy___types___InstanceObject *)cpy_r_template)->_args;
    CPy_INCREF(cpy_r_r842);
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___AnyType))
        cpy_r_r843 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 824, CPyStatic_constraints___globals, "mypy.types.AnyType", cpy_r_actual);
        goto CPyL644;
    }
    cpy_r_r844 = CPyDef_constraints___ConstraintBuilderVisitor___infer_against_any(cpy_r_self, cpy_r_r842, cpy_r_r843);
    CPy_DECREF(cpy_r_r842);
    CPy_DECREF(cpy_r_r843);
    if (unlikely(cpy_r_r844 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 824, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    return cpy_r_r844;
CPyL459: ;
    cpy_r_r845 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r846 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r847 = *(PyObject * *)cpy_r_r846;
    cpy_r_r848 = cpy_r_r847 == cpy_r_r845;
    if (!cpy_r_r848) goto CPyL645;
    cpy_r_r849 = CPyStatic_types___TUPLE_LIKE_INSTANCE_NAMES;
    if (unlikely(cpy_r_r849.f0 == NULL)) {
        goto CPyL646;
    } else
        goto CPyL463;
CPyL461: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TUPLE_LIKE_INSTANCE_NAMES\" was not set");
    cpy_r_r850 = 0;
    if (unlikely(!cpy_r_r850)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 827, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_Unreachable();
CPyL463: ;
    CPy_INCREF(cpy_r_r849.f0);
    CPy_INCREF(cpy_r_r849.f1);
    CPy_INCREF(cpy_r_r849.f2);
    CPy_INCREF(cpy_r_r849.f3);
    CPy_INCREF(cpy_r_r849.f4);
    cpy_r_r851 = PyTuple_New(5);
    if (unlikely(cpy_r_r851 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1820 = cpy_r_r849.f0;
    PyTuple_SET_ITEM(cpy_r_r851, 0, __tmp1820);
    PyObject *__tmp1821 = cpy_r_r849.f1;
    PyTuple_SET_ITEM(cpy_r_r851, 1, __tmp1821);
    PyObject *__tmp1822 = cpy_r_r849.f2;
    PyTuple_SET_ITEM(cpy_r_r851, 2, __tmp1822);
    PyObject *__tmp1823 = cpy_r_r849.f3;
    PyTuple_SET_ITEM(cpy_r_r851, 3, __tmp1823);
    PyObject *__tmp1824 = cpy_r_r849.f4;
    PyTuple_SET_ITEM(cpy_r_r851, 4, __tmp1824);
    cpy_r_r852 = CPyDef_types___is_named_instance(cpy_r_template, cpy_r_r851);
    CPy_DECREF(cpy_r_r851);
    if (unlikely(cpy_r_r852 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 827, CPyStatic_constraints___globals);
        goto CPyL647;
    }
    if (!cpy_r_r852) goto CPyL645;
    cpy_r_r853 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r853 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 828, CPyStatic_constraints___globals);
        goto CPyL647;
    }
CPyL466: ;
    cpy_r_r854 = cpy_r_r853 == 2;
    if (!cpy_r_r854) goto CPyL645;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___TupleType))
        cpy_r_r855 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 830, CPyStatic_constraints___globals, "mypy.types.TupleType", cpy_r_actual);
        goto CPyL647;
    }
    cpy_r_r856 = ((mypy___types___TupleTypeObject *)cpy_r_r855)->_items;
    CPy_INCREF(cpy_r_r856);
    CPy_DECREF(cpy_r_actual);
    cpy_r_r857 = 0;
CPyL469: ;
    cpy_r_r858 = (CPyPtr)&((PyVarObject *)cpy_r_r856)->ob_size;
    cpy_r_r859 = *(int64_t *)cpy_r_r858;
    cpy_r_r860 = cpy_r_r859 << 1;
    cpy_r_r861 = (Py_ssize_t)cpy_r_r857 < (Py_ssize_t)cpy_r_r860;
    if (!cpy_r_r861) goto CPyL648;
    cpy_r_r862 = CPyList_GetItemUnsafe(cpy_r_r856, cpy_r_r857);
    if (likely(PyObject_TypeCheck(cpy_r_r862, CPyType_types___Type)))
        cpy_r_r863 = cpy_r_r862;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 830, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r862);
        goto CPyL649;
    }
    cpy_r_item = cpy_r_r863;
    cpy_r_r864 = ((mypy___types___InstanceObject *)cpy_r_template)->_args;
    CPy_INCREF(cpy_r_r864);
    cpy_r_r865 = CPySequenceTuple_GetItem(cpy_r_r864, 0);
    CPy_DECREF(cpy_r_r864);
    if (unlikely(cpy_r_r865 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 831, CPyStatic_constraints___globals);
        goto CPyL650;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r865, CPyType_types___Type)))
        cpy_r_r866 = cpy_r_r865;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 831, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r865);
        goto CPyL650;
    }
    cpy_r_r867 = CPyDef_constraints___infer_constraints(cpy_r_r866, cpy_r_item, 2);
    CPy_DECREF(cpy_r_r866);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r867 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 831, CPyStatic_constraints___globals);
        goto CPyL649;
    }
    cpy_r_cb = cpy_r_r867;
    cpy_r_r868 = CPyList_Extend(cpy_r_res, cpy_r_cb);
    CPy_DECREF(cpy_r_cb);
    if (unlikely(cpy_r_r868 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 832, CPyStatic_constraints___globals);
        goto CPyL649;
    } else
        goto CPyL651;
CPyL475: ;
    cpy_r_r869 = cpy_r_r857 + 2;
    cpy_r_r857 = cpy_r_r869;
    goto CPyL469;
CPyL476: ;
    return cpy_r_res;
CPyL477: ;
    cpy_r_r870 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r871 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r872 = *(PyObject * *)cpy_r_r871;
    cpy_r_r873 = cpy_r_r872 == cpy_r_r870;
    if (!cpy_r_r873) goto CPyL485;
    cpy_r_r874 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r874 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 834, CPyStatic_constraints___globals);
        goto CPyL652;
    }
CPyL479: ;
    cpy_r_r875 = cpy_r_r874 == 2;
    if (!cpy_r_r875) goto CPyL485;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___TupleType))
        cpy_r_r876 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 835, CPyStatic_constraints___globals, "mypy.types.TupleType", cpy_r_actual);
        goto CPyL505;
    }
    cpy_r_r877 = CPyDef_typeops___tuple_fallback(cpy_r_r876);
    CPy_DECREF(cpy_r_r876);
    if (unlikely(cpy_r_r877 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 835, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    cpy_r_r878 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r878 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 835, CPyStatic_constraints___globals);
        goto CPyL653;
    }
    CPyTagged_INCREF(cpy_r_r878);
CPyL483: ;
    cpy_r_r879 = CPyDef_constraints___infer_constraints(cpy_r_template, cpy_r_r877, cpy_r_r878);
    CPy_DECREF(cpy_r_r877);
    CPyTagged_DECREF(cpy_r_r878);
    if (unlikely(cpy_r_r879 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 835, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    return cpy_r_r879;
CPyL485: ;
    cpy_r_r880 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r881 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r882 = *(PyObject * *)cpy_r_r881;
    cpy_r_r883 = cpy_r_r882 == cpy_r_r880;
    if (!cpy_r_r883) goto CPyL494;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___TypeVarType))
        cpy_r_r884 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 837, CPyStatic_constraints___globals, "mypy.types.TypeVarType", cpy_r_actual);
        goto CPyL652;
    }
    cpy_r_r885 = ((mypy___types___TypeVarTypeObject *)cpy_r_r884)->_values;
    CPy_INCREF(cpy_r_r885);
    cpy_r_r886 = (CPyPtr)&((PyVarObject *)cpy_r_r885)->ob_size;
    cpy_r_r887 = *(int64_t *)cpy_r_r886;
    CPy_DECREF(cpy_r_r885);
    cpy_r_r888 = cpy_r_r887 << 1;
    cpy_r_r889 = cpy_r_r888 != 0;
    if (cpy_r_r889) goto CPyL654;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___TypeVarType))
        cpy_r_r890 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 838, CPyStatic_constraints___globals, "mypy.types.TypeVarType", cpy_r_actual);
        goto CPyL652;
    }
    cpy_r_r891 = ((mypy___types___TypeVarTypeObject *)cpy_r_r890)->_upper_bound;
    CPy_INCREF(cpy_r_r891);
    CPy_DECREF(cpy_r_actual);
    cpy_r_r892 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r892 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 838, CPyStatic_constraints___globals);
        goto CPyL655;
    }
    CPyTagged_INCREF(cpy_r_r892);
CPyL490: ;
    cpy_r_r893 = CPyDef_constraints___infer_constraints(cpy_r_template, cpy_r_r891, cpy_r_r892);
    CPy_DECREF(cpy_r_r891);
    CPyTagged_DECREF(cpy_r_r892);
    if (unlikely(cpy_r_r893 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 838, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    return cpy_r_r893;
CPyL492: ;
    cpy_r_r894 = PyList_New(0);
    if (unlikely(cpy_r_r894 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 839, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    return cpy_r_r894;
CPyL494: ;
    cpy_r_r895 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r896 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r897 = *(PyObject * *)cpy_r_r896;
    cpy_r_r898 = cpy_r_r897 == cpy_r_r895;
    if (!cpy_r_r898) goto CPyL499;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___ParamSpecType))
        cpy_r_r899 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_instance", 841, CPyStatic_constraints___globals, "mypy.types.ParamSpecType", cpy_r_actual);
        goto CPyL652;
    }
    cpy_r_r900 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r899)->_upper_bound;
    CPy_INCREF(cpy_r_r900);
    CPy_DECREF(cpy_r_actual);
    cpy_r_r901 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r901 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_instance", "ConstraintBuilderVisitor", "direction", 841, CPyStatic_constraints___globals);
        goto CPyL656;
    }
    CPyTagged_INCREF(cpy_r_r901);
CPyL497: ;
    cpy_r_r902 = CPyDef_constraints___infer_constraints(cpy_r_template, cpy_r_r900, cpy_r_r901);
    CPy_DECREF(cpy_r_r900);
    CPyTagged_DECREF(cpy_r_r901);
    if (unlikely(cpy_r_r902 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 841, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    return cpy_r_r902;
CPyL499: ;
    cpy_r_r903 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r904 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r905 = *(PyObject * *)cpy_r_r904;
    CPy_DECREF(cpy_r_actual);
    cpy_r_r906 = cpy_r_r905 == cpy_r_r903;
    if (!cpy_r_r906) goto CPyL503;
    cpy_r_r907 = CPyModule_builtins;
    cpy_r_r908 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r909 = CPyObject_GetAttr(cpy_r_r907, cpy_r_r908);
    if (unlikely(cpy_r_r909 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 843, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_Raise(cpy_r_r909);
    CPy_DECREF(cpy_r_r909);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 843, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    CPy_Unreachable();
CPyL503: ;
    cpy_r_r910 = PyList_New(0);
    if (unlikely(cpy_r_r910 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_instance", 845, CPyStatic_constraints___globals);
        goto CPyL505;
    }
    return cpy_r_r910;
CPyL505: ;
    cpy_r_r911 = NULL;
    return cpy_r_r911;
CPyL506: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    goto CPyL505;
CPyL507: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    goto CPyL505;
CPyL508: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL20;
CPyL509: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r21);
    goto CPyL505;
CPyL510: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL18;
CPyL511: ;
    CPy_DECREF(cpy_r_original_actual);
    CPy_DECREF(cpy_r_actual);
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_call);
    goto CPyL26;
CPyL512: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_call);
    goto CPyL505;
CPyL513: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_r43);
    goto CPyL505;
CPyL514: ;
    CPy_DECREF(cpy_r_call);
    goto CPyL38;
CPyL515: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r55);
    goto CPyL505;
CPyL516: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r56);
    goto CPyL505;
CPyL517: ;
    CPy_DECREF(cpy_r_r59);
    goto CPyL38;
CPyL518: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL41;
CPyL519: ;
    CPy_DECREF(cpy_r_ret_type);
    goto CPyL65;
CPyL520: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL505;
CPyL521: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_subtype);
    goto CPyL505;
CPyL522: ;
    CPy_DECREF(cpy_r_r95);
    goto CPyL65;
CPyL523: ;
    CPy_DECREF(cpy_r_r119);
    goto CPyL82;
CPyL524: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_a_item);
    goto CPyL505;
CPyL525: ;
    CPy_DECREF(cpy_r_a_item);
    goto CPyL100;
CPyL526: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r144);
    goto CPyL505;
CPyL527: ;
    CPy_DECREF(cpy_r_r148);
    goto CPyL100;
CPyL528: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_res);
    goto CPyL505;
CPyL529: ;
    CPy_DECREF(cpy_r_original_actual);
    goto CPyL453;
CPyL530: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    goto CPyL505;
CPyL531: ;
    CPy_DECREF(cpy_r_original_actual);
    CPy_DECREF(cpy_r_actual);
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_instance);
    CPy_DECREF(cpy_r_erased);
    goto CPyL116;
CPyL532: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_erased);
    goto CPyL505;
CPyL533: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_erased);
    CPy_DecRef(cpy_r_r186);
    goto CPyL505;
CPyL534: ;
    CPy_DECREF(cpy_r_original_actual);
    CPy_DECREF(cpy_r_actual);
    CPy_DECREF(cpy_r_erased);
    goto CPyL123;
CPyL535: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    goto CPyL505;
CPyL536: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_mapped);
    goto CPyL505;
CPyL537: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_tvars);
    goto CPyL505;
CPyL538: ;
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_instance);
    CPy_DECREF(cpy_r_mapped);
    CPy_DECREF(cpy_r_tvars);
    goto CPyL129;
CPyL539: ;
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_instance);
    CPy_DECREF(cpy_r_mapped);
    CPy_DECREF(cpy_r_tvars);
    goto CPyL133;
CPyL540: ;
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_instance);
    CPy_DECREF(cpy_r_mapped);
    CPy_DECREF(cpy_r_tvars);
    goto CPyL137;
CPyL541: ;
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_instance);
    CPy_DECREF(cpy_r_mapped);
    CPy_DECREF(cpy_r_tvars);
    goto CPyL141;
CPyL542: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_r217);
    goto CPyL505;
CPyL543: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_r217);
    CPyTagged_DecRef(cpy_r_r220);
    goto CPyL505;
CPyL544: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_r217);
    CPyTagged_DecRef(cpy_r_r220);
    CPyTagged_DecRef(cpy_r_r223);
    CPy_DecRef(cpy_r_r224);
    goto CPyL505;
CPyL545: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_r217);
    CPyTagged_DecRef(cpy_r_r220);
    CPyTagged_DecRef(cpy_r_r223);
    CPy_DecRef(cpy_r_r224);
    CPyTagged_DecRef(cpy_r_r227);
    goto CPyL505;
CPyL546: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_r217);
    CPyTagged_DecRef(cpy_r_r220);
    CPyTagged_DecRef(cpy_r_r223);
    CPy_DecRef(cpy_r_r224);
    CPyTagged_DecRef(cpy_r_r227);
    CPyTagged_DecRef(cpy_r_r230);
    goto CPyL505;
CPyL547: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_tvars);
    goto CPyL505;
CPyL548: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    goto CPyL505;
CPyL549: ;
    CPy_DECREF(cpy_r_r238);
    goto CPyL154;
CPyL550: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    goto CPyL505;
CPyL551: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_r239);
    goto CPyL505;
CPyL552: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_r239);
    CPyTagged_DecRef(cpy_r_r242);
    goto CPyL505;
CPyL553: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    goto CPyL505;
CPyL554: ;
    CPy_DECREF(cpy_r_tvars);
    CPy_DECREF(cpy_r_mapped_args);
    CPy_DECREF(cpy_r_instance_args);
    goto CPyL249;
CPyL555: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    goto CPyL505;
CPyL556: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_tvar);
    goto CPyL505;
CPyL557: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_tvar);
    CPy_DecRef(cpy_r_mapped_arg);
    goto CPyL505;
CPyL558: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_tvar);
    CPy_DecRef(cpy_r_mapped_arg);
    CPy_DecRef(cpy_r_instance_arg);
    goto CPyL505;
CPyL559: ;
    CPy_DECREF(cpy_r_r285);
    goto CPyL180;
CPyL560: ;
    CPy_DECREF(cpy_r_mapped_arg);
    CPy_DECREF(cpy_r_instance_arg);
    goto CPyL248;
CPyL561: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_mapped_arg);
    CPy_DecRef(cpy_r_instance_arg);
    goto CPyL505;
CPyL562: ;
    CPy_DECREF(cpy_r_r292);
    goto CPyL248;
CPyL563: ;
    CPy_DECREF(cpy_r_mapped_arg);
    CPy_DECREF(cpy_r_instance_arg);
    goto CPyL245;
CPyL564: ;
    CPy_DECREF(cpy_r_tvar);
    goto CPyL188;
CPyL565: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_mapped_arg);
    goto CPyL505;
CPyL566: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_mapped_arg);
    CPy_DecRef(cpy_r_suffix);
    goto CPyL505;
CPyL567: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_mapped_arg);
    CPy_DecRef(cpy_r_suffix);
    CPy_DecRef(cpy_r_prefix);
    goto CPyL505;
CPyL568: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_mapped_arg);
    CPy_DecRef(cpy_r_suffix);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r349);
    goto CPyL505;
CPyL569: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_mapped_arg);
    CPy_DecRef(cpy_r_suffix);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r349);
    CPy_DecRef(cpy_r_r365);
    goto CPyL505;
CPyL570: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_mapped_arg);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r349);
    CPy_DecRef(cpy_r_r365);
    CPy_DecRef(cpy_r_r381);
    goto CPyL505;
CPyL571: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_mapped_arg);
    CPy_DecRef(cpy_r_r349);
    CPy_DecRef(cpy_r_r365);
    CPy_DecRef(cpy_r_r381);
    goto CPyL505;
CPyL572: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_mapped_arg);
    CPy_DecRef(cpy_r_r365);
    CPy_DecRef(cpy_r_r381);
    CPy_DecRef(cpy_r_r397);
    goto CPyL505;
CPyL573: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_suffix);
    goto CPyL505;
CPyL574: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_r425);
    goto CPyL505;
CPyL575: ;
    CPy_DECREF(cpy_r_mapped_arg);
    CPy_DECREF(cpy_r_suffix);
    goto CPyL248;
CPyL576: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_r434);
    goto CPyL505;
CPyL577: ;
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_tvars);
    CPy_DECREF(cpy_r_mapped_args);
    CPy_DECREF(cpy_r_instance_args);
    goto CPyL246;
CPyL578: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_erased);
    CPy_DecRef(cpy_r_r450);
    goto CPyL505;
CPyL579: ;
    CPy_DECREF(cpy_r_original_actual);
    CPy_DECREF(cpy_r_actual);
    CPy_DECREF(cpy_r_erased);
    goto CPyL255;
CPyL580: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL505;
CPyL581: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_mapped);
    goto CPyL505;
CPyL582: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_tvars);
    goto CPyL505;
CPyL583: ;
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_mapped);
    CPy_DECREF(cpy_r_tvars);
    goto CPyL261;
CPyL584: ;
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_mapped);
    CPy_DECREF(cpy_r_tvars);
    goto CPyL265;
CPyL585: ;
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_mapped);
    CPy_DECREF(cpy_r_tvars);
    goto CPyL269;
CPyL586: ;
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_mapped);
    CPy_DECREF(cpy_r_tvars);
    goto CPyL273;
CPyL587: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_r481);
    goto CPyL505;
CPyL588: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_r481);
    CPyTagged_DecRef(cpy_r_r484);
    goto CPyL505;
CPyL589: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_r481);
    CPyTagged_DecRef(cpy_r_r484);
    CPyTagged_DecRef(cpy_r_r487);
    CPy_DecRef(cpy_r_r488);
    goto CPyL505;
CPyL590: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_r481);
    CPyTagged_DecRef(cpy_r_r484);
    CPyTagged_DecRef(cpy_r_r487);
    CPy_DecRef(cpy_r_r488);
    CPyTagged_DecRef(cpy_r_r491);
    goto CPyL505;
CPyL591: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_r481);
    CPyTagged_DecRef(cpy_r_r484);
    CPyTagged_DecRef(cpy_r_r487);
    CPy_DecRef(cpy_r_r488);
    CPyTagged_DecRef(cpy_r_r491);
    CPyTagged_DecRef(cpy_r_r494);
    goto CPyL505;
CPyL592: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    goto CPyL505;
CPyL593: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_template_args);
    goto CPyL505;
CPyL594: ;
    CPy_DECREF(cpy_r_r502);
    goto CPyL286;
CPyL595: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_template_args);
    goto CPyL505;
CPyL596: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_r503);
    goto CPyL505;
CPyL597: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_r503);
    CPyTagged_DecRef(cpy_r_r506);
    goto CPyL505;
CPyL598: ;
    CPy_DECREF(cpy_r_tvars);
    CPy_DECREF(cpy_r_mapped_args);
    CPy_DECREF(cpy_r_template_args);
    goto CPyL384;
CPyL599: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_tvar);
    CPy_DecRef(cpy_r_template_args);
    goto CPyL505;
CPyL600: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_tvar);
    CPy_DecRef(cpy_r_mapped_arg);
    CPy_DecRef(cpy_r_template_args);
    goto CPyL505;
CPyL601: ;
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_tvars);
    CPy_DECREF(cpy_r_mapped_args);
    CPy_DECREF(cpy_r_tvar);
    CPy_DECREF(cpy_r_mapped_arg);
    CPy_DECREF(cpy_r_template_args);
    CPy_DECREF(cpy_r_template_arg);
    goto CPyL307;
CPyL602: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_tvar);
    CPy_DecRef(cpy_r_mapped_arg);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_template_arg);
    goto CPyL505;
CPyL603: ;
    CPy_DECREF(cpy_r_r555);
    goto CPyL315;
CPyL604: ;
    CPy_DECREF(cpy_r_mapped_arg);
    CPy_DECREF(cpy_r_template_arg);
    goto CPyL383;
CPyL605: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_mapped_arg);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_template_arg);
    goto CPyL505;
CPyL606: ;
    CPy_DECREF(cpy_r_r562);
    goto CPyL383;
CPyL607: ;
    CPy_DECREF(cpy_r_mapped_arg);
    CPy_DECREF(cpy_r_template_arg);
    goto CPyL380;
CPyL608: ;
    CPy_DECREF(cpy_r_tvar);
    goto CPyL323;
CPyL609: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_template_arg);
    goto CPyL505;
CPyL610: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_suffix);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_template_arg);
    goto CPyL505;
CPyL611: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_suffix);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_template_arg);
    goto CPyL505;
CPyL612: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_suffix);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_template_arg);
    CPy_DecRef(cpy_r_r619);
    goto CPyL505;
CPyL613: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_suffix);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_template_arg);
    CPy_DecRef(cpy_r_r619);
    CPy_DecRef(cpy_r_r635);
    goto CPyL505;
CPyL614: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_template_arg);
    CPy_DecRef(cpy_r_r619);
    CPy_DecRef(cpy_r_r635);
    CPy_DecRef(cpy_r_r651);
    goto CPyL505;
CPyL615: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_template_arg);
    CPy_DecRef(cpy_r_r619);
    CPy_DecRef(cpy_r_r635);
    CPy_DecRef(cpy_r_r651);
    goto CPyL505;
CPyL616: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_template_arg);
    CPy_DecRef(cpy_r_r635);
    CPy_DecRef(cpy_r_r651);
    CPy_DecRef(cpy_r_r667);
    goto CPyL505;
CPyL617: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_suffix);
    CPy_DecRef(cpy_r_template_args);
    goto CPyL505;
CPyL618: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_r695);
    goto CPyL505;
CPyL619: ;
    CPy_DECREF(cpy_r_suffix);
    CPy_DECREF(cpy_r_template_arg);
    goto CPyL383;
CPyL620: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_mapped_args);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_r704);
    goto CPyL505;
CPyL621: ;
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_tvars);
    CPy_DECREF(cpy_r_mapped_args);
    CPy_DECREF(cpy_r_template_args);
    goto CPyL381;
CPyL622: ;
    CPy_DECREF(cpy_r_original_actual);
    goto CPyL419;
CPyL623: ;
    CPy_DECREF(cpy_r_r724);
    CPyTagged_DECREF(cpy_r_r729);
    goto CPyL406;
CPyL624: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_erased);
    CPy_DecRef(cpy_r_r724);
    CPyTagged_DecRef(cpy_r_r729);
    goto CPyL505;
CPyL625: ;
    CPy_DECREF(cpy_r_r724);
    CPyTagged_DECREF(cpy_r_r729);
    goto CPyL404;
CPyL626: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_erased);
    CPy_DecRef(cpy_r_r757);
    goto CPyL505;
CPyL627: ;
    CPy_DECREF(cpy_r_actual);
    CPy_DECREF(cpy_r_erased);
    goto CPyL411;
CPyL628: ;
    CPy_DecRef(cpy_r_original_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    goto CPyL505;
CPyL629: ;
    CPy_DECREF(cpy_r_r771);
    goto CPyL415;
CPyL630: ;
    CPy_DECREF(cpy_r_r775);
    goto CPyL418;
CPyL631: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_erased);
    goto CPyL505;
CPyL632: ;
    CPy_DECREF(cpy_r_instance);
    CPy_DECREF(cpy_r_erased);
    goto CPyL453;
CPyL633: ;
    CPy_DECREF(cpy_r_r782);
    CPyTagged_DECREF(cpy_r_r787);
    goto CPyL440;
CPyL634: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_erased);
    CPy_DecRef(cpy_r_r782);
    CPyTagged_DecRef(cpy_r_r787);
    goto CPyL505;
CPyL635: ;
    CPy_DECREF(cpy_r_r782);
    CPyTagged_DECREF(cpy_r_r787);
    goto CPyL438;
CPyL636: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    goto CPyL505;
CPyL637: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_r815);
    goto CPyL505;
CPyL638: ;
    CPy_DECREF(cpy_r_actual);
    goto CPyL445;
CPyL639: ;
    CPy_DECREF(cpy_r_instance);
    goto CPyL453;
CPyL640: ;
    CPy_DECREF(cpy_r_r829);
    goto CPyL449;
CPyL641: ;
    CPy_DECREF(cpy_r_r833);
    goto CPyL452;
CPyL642: ;
    CPy_DECREF(cpy_r_actual);
    goto CPyL454;
CPyL643: ;
    CPy_DECREF(cpy_r_res);
    goto CPyL456;
CPyL644: ;
    CPy_DecRef(cpy_r_r842);
    goto CPyL505;
CPyL645: ;
    CPy_DECREF(cpy_r_res);
    goto CPyL477;
CPyL646: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    goto CPyL461;
CPyL647: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    goto CPyL505;
CPyL648: ;
    CPy_DECREF(cpy_r_r856);
    goto CPyL476;
CPyL649: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r856);
    goto CPyL505;
CPyL650: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r856);
    CPy_DecRef(cpy_r_item);
    goto CPyL505;
CPyL651: ;
    CPy_DECREF(cpy_r_r868);
    goto CPyL475;
CPyL652: ;
    CPy_DecRef(cpy_r_actual);
    goto CPyL505;
CPyL653: ;
    CPy_DecRef(cpy_r_r877);
    goto CPyL505;
CPyL654: ;
    CPy_DECREF(cpy_r_actual);
    goto CPyL492;
CPyL655: ;
    CPy_DecRef(cpy_r_r891);
    goto CPyL505;
CPyL656: ;
    CPy_DecRef(cpy_r_r900);
    goto CPyL505;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___Instance))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.Instance", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_instance(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_instance", 574, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___infer_constraints_from_protocol_members(PyObject *cpy_r_self, PyObject *cpy_r_instance, PyObject *cpy_r_template, PyObject *cpy_r_subtype, PyObject *cpy_r_protocol, char cpy_r_class_obj) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_member;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_inst;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_temp;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
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
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    if (cpy_r_class_obj != 2) goto CPyL2;
    cpy_r_class_obj = 0;
CPyL2: ;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 861, CPyStatic_constraints___globals);
        goto CPyL33;
    }
    cpy_r_res = cpy_r_r0;
    cpy_r_r1 = ((mypy___types___InstanceObject *)cpy_r_protocol)->_type;
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_r1, CPyType_nodes___TypeInfo, 12, mypy___nodes___TypeInfoObject, PyObject *); /* protocol_members */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 862, CPyStatic_constraints___globals);
        goto CPyL34;
    }
CPyL4: ;
    cpy_r_r3 = 0;
CPyL5: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL35;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 862, CPyStatic_constraints___globals, "str", cpy_r_r8);
        goto CPyL36;
    }
    cpy_r_member = cpy_r_r9;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_subtypes___find_member(cpy_r_member, cpy_r_instance, cpy_r_subtype, cpy_r_r10, cpy_r_class_obj);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 863, CPyStatic_constraints___globals);
        goto CPyL37;
    }
    cpy_r_inst = cpy_r_r11;
    cpy_r_r12 = 2;
    cpy_r_r13 = 2;
    cpy_r_r14 = CPyDef_subtypes___find_member(cpy_r_member, cpy_r_template, cpy_r_subtype, cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 864, CPyStatic_constraints___globals);
        goto CPyL38;
    }
    cpy_r_temp = cpy_r_r14;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_inst == cpy_r_r15;
    if (cpy_r_r16) goto CPyL39;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_temp == cpy_r_r17;
    if (cpy_r_r18) {
        goto CPyL39;
    } else
        goto CPyL17;
CPyL11: ;
    cpy_r_r19 = CPyStatics[706]; /* '__call__' */
    cpy_r_r20 = PyUnicode_Compare(cpy_r_member, cpy_r_r19);
    CPy_DECREF(cpy_r_member);
    cpy_r_r21 = cpy_r_r20 == -1;
    if (!cpy_r_r21) goto CPyL14;
    cpy_r_r22 = PyErr_Occurred();
    cpy_r_r23 = cpy_r_r22 != NULL;
    if (!cpy_r_r23) goto CPyL14;
    cpy_r_r24 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 866, CPyStatic_constraints___globals);
        goto CPyL36;
    }
CPyL14: ;
    cpy_r_r25 = cpy_r_r20 == 0;
    if (cpy_r_r25) {
        goto CPyL31;
    } else
        goto CPyL40;
CPyL15: ;
    cpy_r_r26 = PyList_New(0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 868, CPyStatic_constraints___globals);
        goto CPyL33;
    }
    return cpy_r_r26;
CPyL17: ;
    CPy_INCREF(cpy_r_temp);
    if (likely(cpy_r_temp != Py_None))
        cpy_r_r27 = cpy_r_temp;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 871, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_temp);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_inst);
    if (likely(cpy_r_inst != Py_None))
        cpy_r_r28 = cpy_r_inst;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 871, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_inst);
        goto CPyL42;
    }
    cpy_r_r29 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r29 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "infer_constraints_from_protocol_members", "ConstraintBuilderVisitor", "direction", 871, CPyStatic_constraints___globals);
        goto CPyL43;
    }
    CPyTagged_INCREF(cpy_r_r29);
CPyL20: ;
    cpy_r_r30 = CPyDef_constraints___infer_constraints(cpy_r_r27, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r28);
    CPyTagged_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 871, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    cpy_r_r31 = CPyList_Extend(cpy_r_res, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 871, CPyStatic_constraints___globals);
        goto CPyL41;
    } else
        goto CPyL44;
CPyL22: ;
    cpy_r_r32 = 2;
    cpy_r_r33 = CPyDef_subtypes___get_member_flags(cpy_r_member, cpy_r_protocol, cpy_r_r32);
    CPy_DECREF(cpy_r_member);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 872, CPyStatic_constraints___globals);
        goto CPyL45;
    }
    cpy_r_r34 = CPyStatics[9016]; /* 1 */
    cpy_r_r35 = PySet_Contains(cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 872, CPyStatic_constraints___globals);
        goto CPyL45;
    }
    cpy_r_r37 = cpy_r_r35;
    if (!cpy_r_r37) goto CPyL46;
    if (likely(cpy_r_temp != Py_None))
        cpy_r_r38 = cpy_r_temp;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 874, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_temp);
        goto CPyL47;
    }
    if (likely(cpy_r_inst != Py_None))
        cpy_r_r39 = cpy_r_inst;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 874, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_inst);
        goto CPyL48;
    }
    cpy_r_r40 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r40 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "infer_constraints_from_protocol_members", "ConstraintBuilderVisitor", "direction", 874, CPyStatic_constraints___globals);
        goto CPyL49;
    }
    CPyTagged_INCREF(cpy_r_r40);
CPyL28: ;
    cpy_r_r41 = CPyDef_constraints___neg_op(cpy_r_r40);
    CPyTagged_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 874, CPyStatic_constraints___globals);
        goto CPyL49;
    }
    cpy_r_r42 = CPyDef_constraints___infer_constraints(cpy_r_r38, cpy_r_r39, cpy_r_r41);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r39);
    CPyTagged_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 874, CPyStatic_constraints___globals);
        goto CPyL36;
    }
    cpy_r_r43 = CPyList_Extend(cpy_r_res, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 874, CPyStatic_constraints___globals);
        goto CPyL36;
    } else
        goto CPyL50;
CPyL31: ;
    cpy_r_r44 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r44;
    goto CPyL5;
CPyL32: ;
    return cpy_r_res;
CPyL33: ;
    cpy_r_r45 = NULL;
    return cpy_r_r45;
CPyL34: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL33;
CPyL35: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL32;
CPyL36: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r2);
    goto CPyL33;
CPyL37: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_member);
    goto CPyL33;
CPyL38: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_member);
    CPy_DecRef(cpy_r_inst);
    goto CPyL33;
CPyL39: ;
    CPy_DECREF(cpy_r_inst);
    CPy_DECREF(cpy_r_temp);
    goto CPyL11;
CPyL40: ;
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_r2);
    goto CPyL15;
CPyL41: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_member);
    CPy_DecRef(cpy_r_inst);
    CPy_DecRef(cpy_r_temp);
    goto CPyL33;
CPyL42: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_member);
    CPy_DecRef(cpy_r_inst);
    CPy_DecRef(cpy_r_temp);
    CPy_DecRef(cpy_r_r27);
    goto CPyL33;
CPyL43: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_member);
    CPy_DecRef(cpy_r_inst);
    CPy_DecRef(cpy_r_temp);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r28);
    goto CPyL33;
CPyL44: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL22;
CPyL45: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_inst);
    CPy_DecRef(cpy_r_temp);
    goto CPyL33;
CPyL46: ;
    CPy_DECREF(cpy_r_inst);
    CPy_DECREF(cpy_r_temp);
    goto CPyL31;
CPyL47: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_inst);
    goto CPyL33;
CPyL48: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r38);
    goto CPyL33;
CPyL49: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r39);
    goto CPyL33;
CPyL50: ;
    CPy_DECREF(cpy_r_r43);
    goto CPyL31;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___infer_constraints_from_protocol_members(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"instance", "template", "subtype", "protocol", "class_obj", 0};
    static CPyArg_Parser parser = {"OOOO|O:infer_constraints_from_protocol_members", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_template;
    PyObject *obj_subtype;
    PyObject *obj_protocol;
    PyObject *obj_class_obj = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_template, &obj_subtype, &obj_protocol, &obj_class_obj)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_instance;
    if (likely(Py_TYPE(obj_instance) == CPyType_types___Instance))
        arg_instance = obj_instance;
    else {
        CPy_TypeError("mypy.types.Instance", obj_instance); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___Instance))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.Instance", obj_template); 
        goto fail;
    }
    PyObject *arg_subtype;
    if (likely(PyObject_TypeCheck(obj_subtype, CPyType_types___Type)))
        arg_subtype = obj_subtype;
    else {
        CPy_TypeError("mypy.types.Type", obj_subtype); 
        goto fail;
    }
    PyObject *arg_protocol;
    if (likely(Py_TYPE(obj_protocol) == CPyType_types___Instance))
        arg_protocol = obj_protocol;
    else {
        CPy_TypeError("mypy.types.Instance", obj_protocol); 
        goto fail;
    }
    char arg_class_obj;
    if (obj_class_obj == NULL) {
        arg_class_obj = 2;
    } else if (unlikely(!PyBool_Check(obj_class_obj))) {
        CPy_TypeError("bool", obj_class_obj); goto fail;
    } else
        arg_class_obj = obj_class_obj == Py_True;
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___infer_constraints_from_protocol_members(arg_self, arg_instance, arg_template, arg_subtype, arg_protocol, arg_class_obj);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "infer_constraints_from_protocol_members", 847, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_cactual;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_param_spec;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    int64_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_unified;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
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
    CPyTagged cpy_r_r63;
    tuple_T3OOO cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_unpack_constraints;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_cactual_args_t;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_template_args_t;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_template_args;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_cactual_args;
    PyObject *cpy_r_r70;
    CPyPtr cpy_r_r71;
    int64_t cpy_r_r72;
    CPyTagged cpy_r_r73;
    CPyPtr cpy_r_r74;
    int64_t cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyTagged cpy_r_r83;
    CPyTagged cpy_r_r84;
    CPyPtr cpy_r_r85;
    int64_t cpy_r_r86;
    CPyTagged cpy_r_r87;
    char cpy_r_r88;
    CPyPtr cpy_r_r89;
    int64_t cpy_r_r90;
    CPyTagged cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_a;
    CPyTagged cpy_r_r97;
    CPyTagged cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyTagged cpy_r_r101;
    CPyTagged cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_prefix;
    PyObject *cpy_r_r105;
    CPyPtr cpy_r_r106;
    int64_t cpy_r_r107;
    CPyTagged cpy_r_r108;
    CPyTagged cpy_r_prefix_len;
    PyObject *cpy_r_r109;
    PyObject **cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_cactual_ps;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    CPyTagged cpy_r_r120;
    CPyPtr cpy_r_r121;
    int64_t cpy_r_r122;
    CPyTagged cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_k;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    char cpy_r_r133;
    int32_t cpy_r_r134;
    char cpy_r_r135;
    CPyTagged cpy_r_r136;
    CPyPtr cpy_r_r137;
    int64_t cpy_r_r138;
    CPyTagged cpy_r_r139;
    CPyTagged cpy_r_max_prefix_len;
    int64_t cpy_r_r140;
    char cpy_r_r141;
    int64_t cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    CPyTagged cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    char cpy_r_r165;
    CPyTagged cpy_r_r166;
    CPyTagged cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject **cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    int32_t cpy_r_r176;
    char cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    int32_t cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject **cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_cactual_prefix;
    PyObject *cpy_r_r203;
    CPyTagged cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    CPyTagged cpy_r_r208;
    CPyPtr cpy_r_r209;
    int64_t cpy_r_r210;
    CPyTagged cpy_r_r211;
    char cpy_r_r212;
    CPyPtr cpy_r_r213;
    int64_t cpy_r_r214;
    CPyTagged cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    CPyTagged cpy_r_r221;
    CPyTagged cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    CPyTagged cpy_r_r225;
    CPyTagged cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_template_ret_type;
    PyObject *cpy_r_cactual_ret_type;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    char cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    CPyTagged cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    CPyPtr cpy_r_r251;
    PyObject *cpy_r_r252;
    char cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    CPyTagged cpy_r_r258;
    CPyTagged cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_any_type;
    PyObject *cpy_r_r261;
    char cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    CPyPtr cpy_r_r272;
    CPyPtr cpy_r_r273;
    PyObject *cpy_r_r274;
    CPyTagged cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    CPyPtr cpy_r_r280;
    PyObject *cpy_r_r281;
    char cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    CPyPtr cpy_r_r288;
    PyObject *cpy_r_r289;
    char cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    CPyTagged cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    CPyPtr cpy_r_r299;
    PyObject *cpy_r_r300;
    char cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    char cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_call;
    PyObject *cpy_r_r309;
    char cpy_r_r310;
    PyObject *cpy_r_r311;
    CPyTagged cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    cpy_r_r0 = CPyDef_types___CallableType___with_unpacked_kwargs(cpy_r_template);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 881, CPyStatic_constraints___globals);
        goto CPyL205;
    }
    if (likely(Py_TYPE(cpy_r_r0) == CPyType_types___CallableType))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 881, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r0);
        goto CPyL205;
    }
    cpy_r_template = cpy_r_r1;
    cpy_r_r2 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "actual", 882, CPyStatic_constraints___globals);
        goto CPyL206;
    }
CPyL3: ;
    cpy_r_r3 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_r2)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (!cpy_r_r6) goto CPyL156;
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 883, CPyStatic_constraints___globals);
        goto CPyL206;
    }
    cpy_r_res = cpy_r_r7;
    cpy_r_r8 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "actual", 884, CPyStatic_constraints___globals);
        goto CPyL207;
    }
    CPy_INCREF(cpy_r_r8);
CPyL6: ;
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_types___CallableType))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 884, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r8);
        goto CPyL207;
    }
    cpy_r_r10 = CPyDef_types___CallableType___with_unpacked_kwargs(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 884, CPyStatic_constraints___globals);
        goto CPyL207;
    }
    cpy_r_cactual = cpy_r_r10;
    cpy_r_r11 = CPyDef_types___CallableType___param_spec(cpy_r_template);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 885, CPyStatic_constraints___globals);
        goto CPyL208;
    }
    cpy_r_param_spec = cpy_r_r11;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_param_spec == cpy_r_r12;
    if (cpy_r_r13) {
        goto CPyL209;
    } else
        goto CPyL66;
CPyL10: ;
    cpy_r_r14 = CPyStatic_typestate___type_state;
    if (unlikely(cpy_r_r14 == NULL)) {
        goto CPyL210;
    } else
        goto CPyL13;
CPyL11: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"type_state\" was not set");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 890, CPyStatic_constraints___globals);
        goto CPyL205;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r16 = ((mypy___typestate___TypeStateObject *)cpy_r_r14)->_infer_polymorphic;
    if (!cpy_r_r16) goto CPyL38;
CPyL14: ;
    cpy_r_r17 = CPyStatics[803]; /* 'variables' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_cactual, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 891, CPyStatic_constraints___globals);
        goto CPyL208;
    }
    cpy_r_r19 = PyObject_IsTrue(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 891, CPyStatic_constraints___globals);
        goto CPyL208;
    }
    cpy_r_r21 = cpy_r_r19;
    if (!cpy_r_r21) goto CPyL38;
    cpy_r_r22 = CPyStatics[1609]; /* 'param_spec' */
    PyObject *cpy_r_r23[1] = {cpy_r_cactual};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = PyObject_VectorcallMethod(cpy_r_r22, cpy_r_r24, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 892, CPyStatic_constraints___globals);
        goto CPyL208;
    }
    if (Py_TYPE(cpy_r_r25) == CPyType_types___ParamSpecType)
        cpy_r_r26 = cpy_r_r25;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL1825;
    if (cpy_r_r25 == Py_None)
        cpy_r_r26 = cpy_r_r25;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL1825;
    CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 892, CPyStatic_constraints___globals, "mypy.types.ParamSpecType or None", cpy_r_r25);
    goto CPyL211;
__LL1825: ;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_r26 == cpy_r_r27;
    CPy_DECREF(cpy_r_r25);
    if (!cpy_r_r28) goto CPyL38;
    cpy_r_r29 = 0;
    cpy_r_r30 = CPyStatics[803]; /* 'variables' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_cactual, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 898, CPyStatic_constraints___globals);
        goto CPyL208;
    }
    cpy_r_r32 = PyObject_GetIter(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 898, CPyStatic_constraints___globals);
        goto CPyL208;
    }
CPyL22: ;
    cpy_r_r33 = PyIter_Next(cpy_r_r32);
    if (cpy_r_r33 == NULL) goto CPyL212;
    if (likely(PyObject_TypeCheck(cpy_r_r33, CPyType_types___TypeVarLikeType)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 898, CPyStatic_constraints___globals, "mypy.types.TypeVarLikeType", cpy_r_r33);
        goto CPyL213;
    }
    cpy_r_tv = cpy_r_r34;
    cpy_r_r35 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_tv)->_id;
    cpy_r_r36 = ((mypy___types___TypeVarIdObject *)cpy_r_r35)->_raw_id;
    cpy_r_r37 = cpy_r_r36 & 1;
    cpy_r_r38 = cpy_r_r37 == 0;
    if (!cpy_r_r38) goto CPyL26;
    cpy_r_r39 = cpy_r_r36 == 0;
    cpy_r_r40 = cpy_r_r39;
    goto CPyL27;
CPyL26: ;
    cpy_r_r41 = CPyTagged_IsEq_(cpy_r_r36, 0);
    cpy_r_r40 = cpy_r_r41;
CPyL27: ;
    CPy_DECREF(cpy_r_tv);
    if (cpy_r_r40) {
        goto CPyL214;
    } else
        goto CPyL22;
CPyL28: ;
    cpy_r_r29 = 1;
    goto CPyL30;
CPyL29: ;
    cpy_r_r42 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 898, CPyStatic_constraints___globals);
        goto CPyL208;
    }
CPyL30: ;
    if (cpy_r_r29) goto CPyL38;
    cpy_r_r43 = NULL;
    cpy_r_r44 = CPyDef_subtypes___unify_generic_callable(cpy_r_cactual, cpy_r_template, 1, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 906, CPyStatic_constraints___globals);
        goto CPyL208;
    }
    cpy_r_unified = cpy_r_r44;
    cpy_r_r45 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r46 = cpy_r_unified != cpy_r_r45;
    if (cpy_r_r46) {
        goto CPyL215;
    } else
        goto CPyL216;
CPyL33: ;
    cpy_r_cactual = cpy_r_unified;
    cpy_r_r47 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r47 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "direction", 911, CPyStatic_constraints___globals);
        goto CPyL208;
    }
    CPyTagged_INCREF(cpy_r_r47);
CPyL34: ;
    cpy_r_r48 = CPyDef_constraints___neg_op(cpy_r_r47);
    CPyTagged_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 911, CPyStatic_constraints___globals);
        goto CPyL208;
    }
    CPy_INCREF(cpy_r_cactual);
    if (likely(PyObject_TypeCheck(cpy_r_cactual, CPyType_types___Type)))
        cpy_r_r49 = cpy_r_cactual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 911, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_cactual);
        goto CPyL217;
    }
    cpy_r_r50 = CPyDef_constraints___infer_constraints(cpy_r_r49, cpy_r_template, cpy_r_r48);
    CPy_DECREF(cpy_r_r49);
    CPyTagged_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 911, CPyStatic_constraints___globals);
        goto CPyL208;
    }
    cpy_r_r51 = CPyList_Extend(cpy_r_res, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 911, CPyStatic_constraints___globals);
        goto CPyL208;
    } else
        goto CPyL218;
CPyL38: ;
    cpy_r_r52 = ((mypy___types___CallableTypeObject *)cpy_r_template)->_is_ellipsis_args;
    if (cpy_r_r52) goto CPyL141;
CPyL39: ;
    cpy_r_r53 = ((mypy___types___CallableTypeObject *)cpy_r_template)->_arg_types;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = CPyDef_typevartuples___find_unpack_in_list(cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 916, CPyStatic_constraints___globals);
        goto CPyL208;
    }
    cpy_r_r55 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r56 = cpy_r_r54 != cpy_r_r55;
    CPy_DECREF(cpy_r_r54);
    if (!cpy_r_r56) goto CPyL53;
    cpy_r_r57 = CPyStatics[1125]; /* 'arg_types' */
    cpy_r_r58 = CPyObject_GetAttr(cpy_r_cactual, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 922, CPyStatic_constraints___globals);
        goto CPyL208;
    }
    if (likely(PyList_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 922, CPyStatic_constraints___globals, "list", cpy_r_r58);
        goto CPyL208;
    }
    cpy_r_r60 = PyList_AsTuple(cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 922, CPyStatic_constraints___globals);
        goto CPyL208;
    }
    cpy_r_r61 = ((mypy___types___CallableTypeObject *)cpy_r_template)->_arg_types;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r62 = PyList_AsTuple(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 922, CPyStatic_constraints___globals);
        goto CPyL219;
    }
    cpy_r_r63 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r63 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "direction", 922, CPyStatic_constraints___globals);
        goto CPyL220;
    }
    CPyTagged_INCREF(cpy_r_r63);
CPyL46: ;
    cpy_r_r64 = CPyDef_constraints___find_and_build_constraints_for_unpack(cpy_r_r60, cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r62);
    CPyTagged_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64.f0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 921, CPyStatic_constraints___globals);
        goto CPyL208;
    }
    cpy_r_r65 = cpy_r_r64.f0;
    CPy_INCREF(cpy_r_r65);
    cpy_r_unpack_constraints = cpy_r_r65;
    cpy_r_r66 = cpy_r_r64.f1;
    CPy_INCREF(cpy_r_r66);
    cpy_r_cactual_args_t = cpy_r_r66;
    cpy_r_r67 = cpy_r_r64.f2;
    CPy_INCREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r64.f0);
    CPy_DECREF(cpy_r_r64.f1);
    CPy_DECREF(cpy_r_r64.f2);
    cpy_r_template_args_t = cpy_r_r67;
    cpy_r_r68 = PySequence_List(cpy_r_template_args_t);
    CPy_DECREF(cpy_r_template_args_t);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 924, CPyStatic_constraints___globals);
        goto CPyL221;
    }
    cpy_r_template_args = cpy_r_r68;
    cpy_r_r69 = PySequence_List(cpy_r_cactual_args_t);
    CPy_DECREF(cpy_r_cactual_args_t);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 925, CPyStatic_constraints___globals);
        goto CPyL222;
    }
    cpy_r_cactual_args = cpy_r_r69;
    cpy_r_r70 = CPyList_Extend(cpy_r_res, cpy_r_unpack_constraints);
    CPy_DECREF(cpy_r_unpack_constraints);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 926, CPyStatic_constraints___globals);
        goto CPyL223;
    } else
        goto CPyL224;
CPyL50: ;
    cpy_r_r71 = (CPyPtr)&((PyVarObject *)cpy_r_template_args)->ob_size;
    cpy_r_r72 = *(int64_t *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 << 1;
    cpy_r_r74 = (CPyPtr)&((PyVarObject *)cpy_r_cactual_args)->ob_size;
    cpy_r_r75 = *(int64_t *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 << 1;
    cpy_r_r77 = cpy_r_r73 == cpy_r_r76;
    if (cpy_r_r77) {
        goto CPyL56;
    } else
        goto CPyL225;
CPyL51: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r78 = 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 927, CPyStatic_constraints___globals);
        goto CPyL205;
    }
    CPy_Unreachable();
CPyL53: ;
    cpy_r_r79 = ((mypy___types___CallableTypeObject *)cpy_r_template)->_arg_types;
    CPy_INCREF(cpy_r_r79);
    cpy_r_template_args = cpy_r_r79;
    cpy_r_r80 = CPyStatics[1125]; /* 'arg_types' */
    cpy_r_r81 = CPyObject_GetAttr(cpy_r_cactual, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 930, CPyStatic_constraints___globals);
        goto CPyL226;
    }
    if (likely(PyList_Check(cpy_r_r81)))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 930, CPyStatic_constraints___globals, "list", cpy_r_r81);
        goto CPyL226;
    }
    cpy_r_cactual_args = cpy_r_r82;
CPyL56: ;
    cpy_r_r83 = 0;
    cpy_r_r84 = 0;
CPyL57: ;
    cpy_r_r85 = (CPyPtr)&((PyVarObject *)cpy_r_template_args)->ob_size;
    cpy_r_r86 = *(int64_t *)cpy_r_r85;
    cpy_r_r87 = cpy_r_r86 << 1;
    cpy_r_r88 = (Py_ssize_t)cpy_r_r83 < (Py_ssize_t)cpy_r_r87;
    if (!cpy_r_r88) goto CPyL227;
    cpy_r_r89 = (CPyPtr)&((PyVarObject *)cpy_r_cactual_args)->ob_size;
    cpy_r_r90 = *(int64_t *)cpy_r_r89;
    cpy_r_r91 = cpy_r_r90 << 1;
    cpy_r_r92 = (Py_ssize_t)cpy_r_r84 < (Py_ssize_t)cpy_r_r91;
    if (!cpy_r_r92) goto CPyL227;
    cpy_r_r93 = CPyList_GetItemUnsafe(cpy_r_template_args, cpy_r_r83);
    if (likely(PyObject_TypeCheck(cpy_r_r93, CPyType_types___Type)))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 932, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r93);
        goto CPyL223;
    }
    cpy_r_t = cpy_r_r94;
    cpy_r_r95 = CPyList_GetItemUnsafe(cpy_r_cactual_args, cpy_r_r84);
    if (likely(PyObject_TypeCheck(cpy_r_r95, CPyType_types___Type)))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 932, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r95);
        goto CPyL228;
    }
    cpy_r_a = cpy_r_r96;
    cpy_r_r97 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r97 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "direction", 934, CPyStatic_constraints___globals);
        goto CPyL229;
    }
    CPyTagged_INCREF(cpy_r_r97);
CPyL62: ;
    cpy_r_r98 = CPyDef_constraints___neg_op(cpy_r_r97);
    CPyTagged_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 934, CPyStatic_constraints___globals);
        goto CPyL229;
    }
    cpy_r_r99 = CPyDef_constraints___infer_constraints(cpy_r_t, cpy_r_a, cpy_r_r98);
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_a);
    CPyTagged_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 934, CPyStatic_constraints___globals);
        goto CPyL223;
    }
    cpy_r_r100 = CPyList_Extend(cpy_r_res, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 934, CPyStatic_constraints___globals);
        goto CPyL223;
    } else
        goto CPyL230;
CPyL65: ;
    cpy_r_r101 = cpy_r_r83 + 2;
    cpy_r_r83 = cpy_r_r101;
    cpy_r_r102 = cpy_r_r84 + 2;
    cpy_r_r84 = cpy_r_r102;
    goto CPyL57;
CPyL66: ;
    if (likely(cpy_r_param_spec != Py_None))
        cpy_r_r103 = cpy_r_param_spec;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 940, CPyStatic_constraints___globals, "mypy.types.ParamSpecType", cpy_r_param_spec);
        goto CPyL231;
    }
    cpy_r_r104 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r103)->_prefix;
    CPy_INCREF(cpy_r_r104);
    cpy_r_prefix = cpy_r_r104;
    cpy_r_r105 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_types;
    cpy_r_r106 = (CPyPtr)&((PyVarObject *)cpy_r_r105)->ob_size;
    cpy_r_r107 = *(int64_t *)cpy_r_r106;
    cpy_r_r108 = cpy_r_r107 << 1;
    cpy_r_prefix_len = cpy_r_r108;
    cpy_r_r109 = CPyStatics[1609]; /* 'param_spec' */
    PyObject *cpy_r_r110[1] = {cpy_r_cactual};
    cpy_r_r111 = (PyObject **)&cpy_r_r110;
    cpy_r_r112 = PyObject_VectorcallMethod(cpy_r_r109, cpy_r_r111, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 942, CPyStatic_constraints___globals);
        goto CPyL232;
    }
    if (Py_TYPE(cpy_r_r112) == CPyType_types___ParamSpecType)
        cpy_r_r113 = cpy_r_r112;
    else {
        cpy_r_r113 = NULL;
    }
    if (cpy_r_r113 != NULL) goto __LL1826;
    if (cpy_r_r112 == Py_None)
        cpy_r_r113 = cpy_r_r112;
    else {
        cpy_r_r113 = NULL;
    }
    if (cpy_r_r113 != NULL) goto __LL1826;
    CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 942, CPyStatic_constraints___globals, "mypy.types.ParamSpecType or None", cpy_r_r112);
    goto CPyL232;
__LL1826: ;
    cpy_r_cactual_ps = cpy_r_r113;
    cpy_r_r114 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r115 = cpy_r_cactual_ps != cpy_r_r114;
    if (cpy_r_r115) {
        goto CPyL112;
    } else
        goto CPyL233;
CPyL70: ;
    cpy_r_r116 = PyList_New(0);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 945, CPyStatic_constraints___globals);
        goto CPyL232;
    }
    cpy_r_r117 = CPyStatics[1610]; /* 'arg_kinds' */
    cpy_r_r118 = CPyObject_GetAttr(cpy_r_cactual, cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 945, CPyStatic_constraints___globals);
        goto CPyL234;
    }
    if (likely(PyList_Check(cpy_r_r118)))
        cpy_r_r119 = cpy_r_r118;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 945, CPyStatic_constraints___globals, "list", cpy_r_r118);
        goto CPyL234;
    }
    cpy_r_r120 = 0;
CPyL74: ;
    cpy_r_r121 = (CPyPtr)&((PyVarObject *)cpy_r_r119)->ob_size;
    cpy_r_r122 = *(int64_t *)cpy_r_r121;
    cpy_r_r123 = cpy_r_r122 << 1;
    cpy_r_r124 = (Py_ssize_t)cpy_r_r120 < (Py_ssize_t)cpy_r_r123;
    if (!cpy_r_r124) goto CPyL235;
    cpy_r_r125 = CPyList_GetItemUnsafe(cpy_r_r119, cpy_r_r120);
    if (likely(Py_TYPE(cpy_r_r125) == CPyType_nodes___ArgKind))
        cpy_r_r126 = cpy_r_r125;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 945, CPyStatic_constraints___globals, "mypy.nodes.ArgKind", cpy_r_r125);
        goto CPyL236;
    }
    CPy_INCREF(cpy_r_r126);
    cpy_r_k = cpy_r_r126;
    CPy_DECREF(cpy_r_r125);
    cpy_r_r127 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r127 == NULL)) {
        goto CPyL237;
    } else
        goto CPyL79;
CPyL77: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r128 = 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 945, CPyStatic_constraints___globals);
        goto CPyL205;
    }
    CPy_Unreachable();
CPyL79: ;
    cpy_r_r129 = cpy_r_k == cpy_r_r127;
    if (!cpy_r_r129) goto CPyL81;
    cpy_r_r130 = cpy_r_r129;
    goto CPyL85;
CPyL81: ;
    cpy_r_r131 = CPyStatic_nodes___ARG_OPT;
    if (unlikely(cpy_r_r131 == NULL)) {
        goto CPyL238;
    } else
        goto CPyL84;
CPyL82: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_OPT\" was not set");
    cpy_r_r132 = 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 945, CPyStatic_constraints___globals);
        goto CPyL205;
    }
    CPy_Unreachable();
CPyL84: ;
    cpy_r_r133 = cpy_r_k == cpy_r_r131;
    cpy_r_r130 = cpy_r_r133;
CPyL85: ;
    if (!cpy_r_r130) goto CPyL239;
    cpy_r_r134 = PyList_Append(cpy_r_r116, cpy_r_k);
    CPy_DECREF(cpy_r_k);
    cpy_r_r135 = cpy_r_r134 >= 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 945, CPyStatic_constraints___globals);
        goto CPyL240;
    }
CPyL87: ;
    cpy_r_r136 = cpy_r_r120 + 2;
    cpy_r_r120 = cpy_r_r136;
    goto CPyL74;
CPyL88: ;
    cpy_r_r137 = (CPyPtr)&((PyVarObject *)cpy_r_r116)->ob_size;
    cpy_r_r138 = *(int64_t *)cpy_r_r137;
    CPy_DECREF(cpy_r_r116);
    cpy_r_r139 = cpy_r_r138 << 1;
    cpy_r_max_prefix_len = cpy_r_r139;
    cpy_r_r140 = cpy_r_max_prefix_len & 1;
    cpy_r_r141 = cpy_r_r140 == 0;
    cpy_r_r142 = cpy_r_prefix_len & 1;
    cpy_r_r143 = cpy_r_r142 == 0;
    cpy_r_r144 = cpy_r_r141 & cpy_r_r143;
    if (!cpy_r_r144) goto CPyL90;
    cpy_r_r145 = (Py_ssize_t)cpy_r_max_prefix_len < (Py_ssize_t)cpy_r_prefix_len;
    cpy_r_r146 = cpy_r_r145;
    goto CPyL91;
CPyL90: ;
    cpy_r_r147 = CPyTagged_IsLt_(cpy_r_max_prefix_len, cpy_r_prefix_len);
    cpy_r_r146 = cpy_r_r147;
CPyL91: ;
    if (cpy_r_r146) {
        goto CPyL241;
    } else
        goto CPyL242;
CPyL92: ;
    cpy_r_r148 = cpy_r_max_prefix_len;
    goto CPyL94;
CPyL93: ;
    cpy_r_r148 = cpy_r_prefix_len;
CPyL94: ;
    cpy_r_prefix_len = cpy_r_r148;
    if (likely(cpy_r_param_spec != Py_None))
        cpy_r_r149 = cpy_r_param_spec;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 949, CPyStatic_constraints___globals, "mypy.types.ParamSpecType", cpy_r_param_spec);
        goto CPyL243;
    }
    cpy_r_r150 = CPyStatics[1125]; /* 'arg_types' */
    cpy_r_r151 = CPyObject_GetAttr(cpy_r_cactual, cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 952, CPyStatic_constraints___globals);
        goto CPyL244;
    }
    if (likely(PyList_Check(cpy_r_r151)))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 952, CPyStatic_constraints___globals, "list", cpy_r_r151);
        goto CPyL244;
    }
    cpy_r_r153 = CPyList_GetSlice(cpy_r_r152, cpy_r_prefix_len, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 952, CPyStatic_constraints___globals);
        goto CPyL244;
    }
    if (likely(PyList_Check(cpy_r_r153)))
        cpy_r_r154 = cpy_r_r153;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 952, CPyStatic_constraints___globals, "list", cpy_r_r153);
        goto CPyL244;
    }
    cpy_r_r155 = CPyStatics[1610]; /* 'arg_kinds' */
    cpy_r_r156 = CPyObject_GetAttr(cpy_r_cactual, cpy_r_r155);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 953, CPyStatic_constraints___globals);
        goto CPyL245;
    }
    if (likely(PyList_Check(cpy_r_r156)))
        cpy_r_r157 = cpy_r_r156;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 953, CPyStatic_constraints___globals, "list", cpy_r_r156);
        goto CPyL245;
    }
    cpy_r_r158 = CPyList_GetSlice(cpy_r_r157, cpy_r_prefix_len, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 953, CPyStatic_constraints___globals);
        goto CPyL245;
    }
    if (likely(PyList_Check(cpy_r_r158)))
        cpy_r_r159 = cpy_r_r158;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 953, CPyStatic_constraints___globals, "list", cpy_r_r158);
        goto CPyL245;
    }
    cpy_r_r160 = CPyStatics[1611]; /* 'arg_names' */
    cpy_r_r161 = CPyObject_GetAttr(cpy_r_cactual, cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 954, CPyStatic_constraints___globals);
        goto CPyL246;
    }
    if (likely(PyList_Check(cpy_r_r161)))
        cpy_r_r162 = cpy_r_r161;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 954, CPyStatic_constraints___globals, "list", cpy_r_r161);
        goto CPyL246;
    }
    cpy_r_r163 = CPyList_GetSlice(cpy_r_r162, cpy_r_prefix_len, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r162);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 954, CPyStatic_constraints___globals);
        goto CPyL246;
    }
    if (likely(PyList_Check(cpy_r_r163)))
        cpy_r_r164 = cpy_r_r163;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 954, CPyStatic_constraints___globals, "list", cpy_r_r163);
        goto CPyL246;
    }
    cpy_r_r165 = 2;
    cpy_r_r166 = CPY_INT_TAG;
    cpy_r_r167 = CPY_INT_TAG;
    cpy_r_r168 = CPyDef_types___UninhabitedType(cpy_r_r165, cpy_r_r166, cpy_r_r167);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 955, CPyStatic_constraints___globals);
        goto CPyL247;
    }
    cpy_r_r169 = CPyStatics[1612]; /* 'copy_modified' */
    PyObject *cpy_r_r170[5] = {cpy_r_cactual, cpy_r_r154, cpy_r_r159, cpy_r_r164, cpy_r_r168};
    cpy_r_r171 = (PyObject **)&cpy_r_r170;
    cpy_r_r172 = CPyStatics[9287]; /* ('arg_types', 'arg_kinds', 'arg_names', 'ret_type') */
    cpy_r_r173 = PyObject_VectorcallMethod(cpy_r_r169, cpy_r_r171, 9223372036854775809ULL, cpy_r_r172);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 951, CPyStatic_constraints___globals);
        goto CPyL248;
    }
    CPy_DECREF(cpy_r_r154);
    CPy_DECREF(cpy_r_r159);
    CPy_DECREF(cpy_r_r164);
    CPy_DECREF(cpy_r_r168);
    if (likely(PyObject_TypeCheck(cpy_r_r173, CPyType_types___Type)))
        cpy_r_r174 = cpy_r_r173;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 948, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r173);
        goto CPyL244;
    }
    cpy_r_r175 = CPyDef_constraints___Constraint(cpy_r_r149, 0, cpy_r_r174);
    CPy_DECREF(cpy_r_r149);
    CPy_DECREF(cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 948, CPyStatic_constraints___globals);
        goto CPyL243;
    }
    cpy_r_r176 = PyList_Append(cpy_r_res, cpy_r_r175);
    CPy_DECREF(cpy_r_r175);
    cpy_r_r177 = cpy_r_r176 >= 0;
    if (unlikely(!cpy_r_r177)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 947, CPyStatic_constraints___globals);
        goto CPyL243;
    } else
        goto CPyL116;
CPyL112: ;
    if (likely(cpy_r_param_spec != Py_None))
        cpy_r_r178 = cpy_r_param_spec;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 960, CPyStatic_constraints___globals, "mypy.types.ParamSpecType", cpy_r_param_spec);
        goto CPyL249;
    }
    if (likely(cpy_r_cactual_ps != Py_None))
        cpy_r_r179 = cpy_r_cactual_ps;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 960, CPyStatic_constraints___globals, "mypy.types.ParamSpecType", cpy_r_cactual_ps);
        goto CPyL250;
    }
    cpy_r_r180 = CPyDef_constraints___Constraint(cpy_r_r178, 0, cpy_r_r179);
    CPy_DECREF(cpy_r_r178);
    CPy_DECREF(cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 960, CPyStatic_constraints___globals);
        goto CPyL243;
    }
    cpy_r_r181 = PyList_Append(cpy_r_res, cpy_r_r180);
    CPy_DECREF(cpy_r_r180);
    cpy_r_r182 = cpy_r_r181 >= 0;
    if (unlikely(!cpy_r_r182)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 960, CPyStatic_constraints___globals);
        goto CPyL243;
    }
CPyL116: ;
    cpy_r_r183 = CPyStatics[1125]; /* 'arg_types' */
    cpy_r_r184 = CPyObject_GetAttr(cpy_r_cactual, cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 964, CPyStatic_constraints___globals);
        goto CPyL243;
    }
    if (likely(PyList_Check(cpy_r_r184)))
        cpy_r_r185 = cpy_r_r184;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 964, CPyStatic_constraints___globals, "list", cpy_r_r184);
        goto CPyL243;
    }
    cpy_r_r186 = CPyList_GetSlice(cpy_r_r185, 0, cpy_r_prefix_len);
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 964, CPyStatic_constraints___globals);
        goto CPyL243;
    }
    if (likely(PyList_Check(cpy_r_r186)))
        cpy_r_r187 = cpy_r_r186;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 964, CPyStatic_constraints___globals, "list", cpy_r_r186);
        goto CPyL243;
    }
    cpy_r_r188 = CPyStatics[1610]; /* 'arg_kinds' */
    cpy_r_r189 = CPyObject_GetAttr(cpy_r_cactual, cpy_r_r188);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 965, CPyStatic_constraints___globals);
        goto CPyL251;
    }
    if (likely(PyList_Check(cpy_r_r189)))
        cpy_r_r190 = cpy_r_r189;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 965, CPyStatic_constraints___globals, "list", cpy_r_r189);
        goto CPyL251;
    }
    cpy_r_r191 = CPyList_GetSlice(cpy_r_r190, 0, cpy_r_prefix_len);
    CPy_DECREF(cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 965, CPyStatic_constraints___globals);
        goto CPyL251;
    }
    if (likely(PyList_Check(cpy_r_r191)))
        cpy_r_r192 = cpy_r_r191;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 965, CPyStatic_constraints___globals, "list", cpy_r_r191);
        goto CPyL251;
    }
    cpy_r_r193 = CPyStatics[1611]; /* 'arg_names' */
    cpy_r_r194 = CPyObject_GetAttr(cpy_r_cactual, cpy_r_r193);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 966, CPyStatic_constraints___globals);
        goto CPyL252;
    }
    if (likely(PyList_Check(cpy_r_r194)))
        cpy_r_r195 = cpy_r_r194;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 966, CPyStatic_constraints___globals, "list", cpy_r_r194);
        goto CPyL252;
    }
    cpy_r_r196 = CPyList_GetSlice(cpy_r_r195, 0, cpy_r_prefix_len);
    CPy_DECREF(cpy_r_r195);
    CPyTagged_DECREF(cpy_r_prefix_len);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 966, CPyStatic_constraints___globals);
        goto CPyL253;
    }
    if (likely(PyList_Check(cpy_r_r196)))
        cpy_r_r197 = cpy_r_r196;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 966, CPyStatic_constraints___globals, "list", cpy_r_r196);
        goto CPyL253;
    }
    cpy_r_r198 = CPyStatics[1612]; /* 'copy_modified' */
    PyObject *cpy_r_r199[4] = {cpy_r_cactual, cpy_r_r187, cpy_r_r192, cpy_r_r197};
    cpy_r_r200 = (PyObject **)&cpy_r_r199;
    cpy_r_r201 = CPyStatics[9288]; /* ('arg_types', 'arg_kinds', 'arg_names') */
    cpy_r_r202 = PyObject_VectorcallMethod(cpy_r_r198, cpy_r_r200, 9223372036854775809ULL, cpy_r_r201);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 963, CPyStatic_constraints___globals);
        goto CPyL254;
    }
    CPy_DECREF(cpy_r_r187);
    CPy_DECREF(cpy_r_r192);
    CPy_DECREF(cpy_r_r197);
    cpy_r_cactual_prefix = cpy_r_r202;
    cpy_r_r203 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_types;
    CPy_INCREF(cpy_r_r203);
    CPy_DECREF(cpy_r_prefix);
    cpy_r_r204 = 0;
    cpy_r_r205 = CPyStatics[1125]; /* 'arg_types' */
    cpy_r_r206 = CPyObject_GetAttr(cpy_r_cactual_prefix, cpy_r_r205);
    CPy_DECREF(cpy_r_cactual_prefix);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 971, CPyStatic_constraints___globals);
        goto CPyL255;
    }
    if (likely(PyList_Check(cpy_r_r206)))
        cpy_r_r207 = cpy_r_r206;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 971, CPyStatic_constraints___globals, "list", cpy_r_r206);
        goto CPyL255;
    }
    cpy_r_r208 = 0;
CPyL132: ;
    cpy_r_r209 = (CPyPtr)&((PyVarObject *)cpy_r_r203)->ob_size;
    cpy_r_r210 = *(int64_t *)cpy_r_r209;
    cpy_r_r211 = cpy_r_r210 << 1;
    cpy_r_r212 = (Py_ssize_t)cpy_r_r204 < (Py_ssize_t)cpy_r_r211;
    if (!cpy_r_r212) goto CPyL256;
    cpy_r_r213 = (CPyPtr)&((PyVarObject *)cpy_r_r207)->ob_size;
    cpy_r_r214 = *(int64_t *)cpy_r_r213;
    cpy_r_r215 = cpy_r_r214 << 1;
    cpy_r_r216 = (Py_ssize_t)cpy_r_r208 < (Py_ssize_t)cpy_r_r215;
    if (!cpy_r_r216) goto CPyL256;
    cpy_r_r217 = CPyList_GetItemUnsafe(cpy_r_r203, cpy_r_r204);
    if (likely(PyObject_TypeCheck(cpy_r_r217, CPyType_types___Type)))
        cpy_r_r218 = cpy_r_r217;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 971, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r217);
        goto CPyL257;
    }
    cpy_r_t = cpy_r_r218;
    cpy_r_r219 = CPyList_GetItemUnsafe(cpy_r_r207, cpy_r_r208);
    if (likely(PyObject_TypeCheck(cpy_r_r219, CPyType_types___Type)))
        cpy_r_r220 = cpy_r_r219;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 971, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r219);
        goto CPyL258;
    }
    cpy_r_a = cpy_r_r220;
    cpy_r_r221 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r221 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "direction", 972, CPyStatic_constraints___globals);
        goto CPyL259;
    }
    CPyTagged_INCREF(cpy_r_r221);
CPyL137: ;
    cpy_r_r222 = CPyDef_constraints___neg_op(cpy_r_r221);
    CPyTagged_DECREF(cpy_r_r221);
    if (unlikely(cpy_r_r222 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 972, CPyStatic_constraints___globals);
        goto CPyL259;
    }
    cpy_r_r223 = CPyDef_constraints___infer_constraints(cpy_r_t, cpy_r_a, cpy_r_r222);
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_a);
    CPyTagged_DECREF(cpy_r_r222);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 972, CPyStatic_constraints___globals);
        goto CPyL257;
    }
    cpy_r_r224 = CPyList_Extend(cpy_r_res, cpy_r_r223);
    CPy_DECREF(cpy_r_r223);
    if (unlikely(cpy_r_r224 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 972, CPyStatic_constraints___globals);
        goto CPyL257;
    } else
        goto CPyL260;
CPyL140: ;
    cpy_r_r225 = cpy_r_r204 + 2;
    cpy_r_r204 = cpy_r_r225;
    cpy_r_r226 = cpy_r_r208 + 2;
    cpy_r_r208 = cpy_r_r226;
    goto CPyL132;
CPyL141: ;
    cpy_r_r227 = ((mypy___types___CallableTypeObject *)cpy_r_template)->_ret_type;
    CPy_INCREF(cpy_r_r227);
    cpy_r_r228 = cpy_r_r227;
    cpy_r_r229 = CPyStatics[1613]; /* 'ret_type' */
    cpy_r_r230 = CPyObject_GetAttr(cpy_r_cactual, cpy_r_r229);
    if (unlikely(cpy_r_r230 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 974, CPyStatic_constraints___globals);
        goto CPyL261;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r230, CPyType_types___Type)))
        cpy_r_r231 = cpy_r_r230;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 974, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r230);
        goto CPyL261;
    }
    cpy_r_r232 = cpy_r_r231;
    cpy_r_template_ret_type = cpy_r_r228;
    cpy_r_cactual_ret_type = cpy_r_r232;
    cpy_r_r233 = ((mypy___types___CallableTypeObject *)cpy_r_template)->_type_guard;
    CPy_INCREF(cpy_r_r233);
    cpy_r_r234 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r235 = cpy_r_r233 != cpy_r_r234;
    CPy_DECREF(cpy_r_r233);
    if (cpy_r_r235) {
        goto CPyL262;
    } else
        goto CPyL263;
CPyL144: ;
    cpy_r_r236 = ((mypy___types___CallableTypeObject *)cpy_r_template)->_type_guard;
    CPy_INCREF(cpy_r_r236);
    CPy_DECREF(cpy_r_template);
    if (likely(cpy_r_r236 != Py_None))
        cpy_r_r237 = cpy_r_r236;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 976, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r236);
        goto CPyL264;
    }
    cpy_r_template_ret_type = cpy_r_r237;
CPyL146: ;
    cpy_r_r238 = CPyStatics[1614]; /* 'type_guard' */
    cpy_r_r239 = CPyObject_GetAttr(cpy_r_cactual, cpy_r_r238);
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 977, CPyStatic_constraints___globals);
        goto CPyL265;
    }
    if (PyObject_TypeCheck(cpy_r_r239, CPyType_types___Type))
        cpy_r_r240 = cpy_r_r239;
    else {
        cpy_r_r240 = NULL;
    }
    if (cpy_r_r240 != NULL) goto __LL1827;
    if (cpy_r_r239 == Py_None)
        cpy_r_r240 = cpy_r_r239;
    else {
        cpy_r_r240 = NULL;
    }
    if (cpy_r_r240 != NULL) goto __LL1827;
    CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 977, CPyStatic_constraints___globals, "mypy.types.Type or None", cpy_r_r239);
    goto CPyL266;
__LL1827: ;
    cpy_r_r241 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r242 = cpy_r_r240 != cpy_r_r241;
    CPy_DECREF(cpy_r_r239);
    if (cpy_r_r242) {
        goto CPyL267;
    } else
        goto CPyL268;
CPyL149: ;
    cpy_r_r243 = CPyStatics[1614]; /* 'type_guard' */
    cpy_r_r244 = CPyObject_GetAttr(cpy_r_cactual, cpy_r_r243);
    CPy_DECREF(cpy_r_cactual);
    if (unlikely(cpy_r_r244 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 978, CPyStatic_constraints___globals);
        goto CPyL269;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r244, CPyType_types___Type)))
        cpy_r_r245 = cpy_r_r244;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 978, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r244);
        goto CPyL269;
    }
    cpy_r_cactual_ret_type = cpy_r_r245;
CPyL152: ;
    cpy_r_r246 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r246 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "direction", 980, CPyStatic_constraints___globals);
        goto CPyL270;
    }
    CPyTagged_INCREF(cpy_r_r246);
CPyL153: ;
    cpy_r_r247 = CPyDef_constraints___infer_constraints(cpy_r_template_ret_type, cpy_r_cactual_ret_type, cpy_r_r246);
    CPy_DECREF(cpy_r_template_ret_type);
    CPy_DECREF(cpy_r_cactual_ret_type);
    CPyTagged_DECREF(cpy_r_r246);
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 980, CPyStatic_constraints___globals);
        goto CPyL271;
    }
    cpy_r_r248 = CPyList_Extend(cpy_r_res, cpy_r_r247);
    CPy_DECREF(cpy_r_r247);
    if (unlikely(cpy_r_r248 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 980, CPyStatic_constraints___globals);
        goto CPyL271;
    } else
        goto CPyL272;
CPyL155: ;
    return cpy_r_res;
CPyL156: ;
    cpy_r_r249 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r249 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "actual", 982, CPyStatic_constraints___globals);
        goto CPyL206;
    }
CPyL157: ;
    cpy_r_r250 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r251 = (CPyPtr)&((PyObject *)cpy_r_r249)->ob_type;
    cpy_r_r252 = *(PyObject * *)cpy_r_r251;
    cpy_r_r253 = cpy_r_r252 == cpy_r_r250;
    if (!cpy_r_r253) goto CPyL176;
    cpy_r_r254 = CPyDef_types___CallableType___param_spec(cpy_r_template);
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 983, CPyStatic_constraints___globals);
        goto CPyL206;
    }
    cpy_r_param_spec = cpy_r_r254;
    cpy_r_r255 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r255 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "actual", 984, CPyStatic_constraints___globals);
        goto CPyL273;
    }
    CPy_INCREF(cpy_r_r255);
CPyL160: ;
    if (likely(Py_TYPE(cpy_r_r255) == CPyType_types___AnyType))
        cpy_r_r256 = cpy_r_r255;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 984, CPyStatic_constraints___globals, "mypy.types.AnyType", cpy_r_r255);
        goto CPyL273;
    }
    cpy_r_r257 = NULL;
    cpy_r_r258 = CPY_INT_TAG;
    cpy_r_r259 = CPY_INT_TAG;
    cpy_r_r260 = CPyDef_types___AnyType(14, cpy_r_r256, cpy_r_r257, cpy_r_r258, cpy_r_r259);
    CPy_DECREF(cpy_r_r256);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 984, CPyStatic_constraints___globals);
        goto CPyL273;
    }
    cpy_r_any_type = cpy_r_r260;
    cpy_r_r261 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r262 = cpy_r_param_spec == cpy_r_r261;
    if (cpy_r_r262) {
        goto CPyL274;
    } else
        goto CPyL167;
CPyL163: ;
    cpy_r_r263 = ((mypy___types___CallableTypeObject *)cpy_r_template)->_arg_types;
    CPy_INCREF(cpy_r_r263);
    cpy_r_r264 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r264 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "actual", 987, CPyStatic_constraints___globals);
        goto CPyL275;
    }
    CPy_INCREF(cpy_r_r264);
CPyL164: ;
    if (likely(Py_TYPE(cpy_r_r264) == CPyType_types___AnyType))
        cpy_r_r265 = cpy_r_r264;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 987, CPyStatic_constraints___globals, "mypy.types.AnyType", cpy_r_r264);
        goto CPyL275;
    }
    cpy_r_r266 = CPyDef_constraints___ConstraintBuilderVisitor___infer_against_any(cpy_r_self, cpy_r_r263, cpy_r_r265);
    CPy_DECREF(cpy_r_r263);
    CPy_DECREF(cpy_r_r265);
    if (unlikely(cpy_r_r266 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 987, CPyStatic_constraints___globals);
        goto CPyL276;
    }
    cpy_r_res = cpy_r_r266;
    goto CPyL172;
CPyL167: ;
    if (likely(cpy_r_param_spec != Py_None))
        cpy_r_r267 = cpy_r_param_spec;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 991, CPyStatic_constraints___globals, "mypy.types.ParamSpecType", cpy_r_param_spec);
        goto CPyL276;
    }
    cpy_r_r268 = ((mypy___types___CallableTypeObject *)cpy_r_template)->_fallback;
    CPy_INCREF(cpy_r_r268);
    cpy_r_r269 = CPyDef_types___callable_with_ellipsis(cpy_r_any_type, cpy_r_any_type, cpy_r_r268);
    CPy_DECREF(cpy_r_r268);
    if (unlikely(cpy_r_r269 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 993, CPyStatic_constraints___globals);
        goto CPyL277;
    }
    cpy_r_r270 = CPyDef_constraints___Constraint(cpy_r_r267, 0, cpy_r_r269);
    CPy_DECREF(cpy_r_r267);
    CPy_DECREF(cpy_r_r269);
    if (unlikely(cpy_r_r270 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 990, CPyStatic_constraints___globals);
        goto CPyL276;
    }
    cpy_r_r271 = PyList_New(1);
    if (unlikely(cpy_r_r271 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 989, CPyStatic_constraints___globals);
        goto CPyL278;
    }
    cpy_r_r272 = (CPyPtr)&((PyListObject *)cpy_r_r271)->ob_item;
    cpy_r_r273 = *(CPyPtr *)cpy_r_r272;
    *(PyObject * *)cpy_r_r273 = cpy_r_r270;
    cpy_r_res = cpy_r_r271;
CPyL172: ;
    cpy_r_r274 = ((mypy___types___CallableTypeObject *)cpy_r_template)->_ret_type;
    CPy_INCREF(cpy_r_r274);
    CPy_DECREF(cpy_r_template);
    cpy_r_r275 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r275 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "direction", 996, CPyStatic_constraints___globals);
        goto CPyL279;
    }
    CPyTagged_INCREF(cpy_r_r275);
CPyL173: ;
    cpy_r_r276 = CPyDef_constraints___infer_constraints(cpy_r_r274, cpy_r_any_type, cpy_r_r275);
    CPy_DECREF(cpy_r_r274);
    CPy_DECREF(cpy_r_any_type);
    CPyTagged_DECREF(cpy_r_r275);
    if (unlikely(cpy_r_r276 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 996, CPyStatic_constraints___globals);
        goto CPyL271;
    }
    cpy_r_r277 = CPyList_Extend(cpy_r_res, cpy_r_r276);
    CPy_DECREF(cpy_r_r276);
    if (unlikely(cpy_r_r277 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 996, CPyStatic_constraints___globals);
        goto CPyL271;
    } else
        goto CPyL280;
CPyL175: ;
    return cpy_r_res;
CPyL176: ;
    cpy_r_r278 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r278 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "actual", 998, CPyStatic_constraints___globals);
        goto CPyL206;
    }
CPyL177: ;
    cpy_r_r279 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r280 = (CPyPtr)&((PyObject *)cpy_r_r278)->ob_type;
    cpy_r_r281 = *(PyObject * *)cpy_r_r280;
    cpy_r_r282 = cpy_r_r281 == cpy_r_r279;
    if (!cpy_r_r282) goto CPyL182;
    cpy_r_r283 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "actual", 999, CPyStatic_constraints___globals);
        goto CPyL206;
    }
    CPy_INCREF(cpy_r_r283);
CPyL179: ;
    if (likely(Py_TYPE(cpy_r_r283) == CPyType_types___Overloaded))
        cpy_r_r284 = cpy_r_r283;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 999, CPyStatic_constraints___globals, "mypy.types.Overloaded", cpy_r_r283);
        goto CPyL206;
    }
    cpy_r_r285 = CPyDef_constraints___ConstraintBuilderVisitor___infer_against_overloaded(cpy_r_self, cpy_r_r284, cpy_r_template);
    CPy_DECREF(cpy_r_r284);
    CPy_DECREF(cpy_r_template);
    if (unlikely(cpy_r_r285 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 999, CPyStatic_constraints___globals);
        goto CPyL205;
    }
    return cpy_r_r285;
CPyL182: ;
    cpy_r_r286 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r286 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "actual", 1000, CPyStatic_constraints___globals);
        goto CPyL206;
    }
CPyL183: ;
    cpy_r_r287 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r288 = (CPyPtr)&((PyObject *)cpy_r_r286)->ob_type;
    cpy_r_r289 = *(PyObject * *)cpy_r_r288;
    cpy_r_r290 = cpy_r_r289 == cpy_r_r287;
    if (!cpy_r_r290) goto CPyL189;
    cpy_r_r291 = ((mypy___types___CallableTypeObject *)cpy_r_template)->_ret_type;
    CPy_INCREF(cpy_r_r291);
    CPy_DECREF(cpy_r_template);
    cpy_r_r292 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r292 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "actual", 1001, CPyStatic_constraints___globals);
        goto CPyL281;
    }
CPyL185: ;
    if (likely(Py_TYPE(cpy_r_r292) == CPyType_types___TypeType))
        cpy_r_r293 = cpy_r_r292;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 1001, CPyStatic_constraints___globals, "mypy.types.TypeType", cpy_r_r292);
        goto CPyL281;
    }
    cpy_r_r294 = ((mypy___types___TypeTypeObject *)cpy_r_r293)->_item;
    CPy_INCREF(cpy_r_r294);
    cpy_r_r295 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r295 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "direction", 1001, CPyStatic_constraints___globals);
        goto CPyL282;
    }
    CPyTagged_INCREF(cpy_r_r295);
CPyL187: ;
    cpy_r_r296 = CPyDef_constraints___infer_constraints(cpy_r_r291, cpy_r_r294, cpy_r_r295);
    CPy_DECREF(cpy_r_r291);
    CPy_DECREF(cpy_r_r294);
    CPyTagged_DECREF(cpy_r_r295);
    if (unlikely(cpy_r_r296 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 1001, CPyStatic_constraints___globals);
        goto CPyL205;
    }
    return cpy_r_r296;
CPyL189: ;
    cpy_r_r297 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r297 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "actual", 1002, CPyStatic_constraints___globals);
        goto CPyL206;
    }
CPyL190: ;
    cpy_r_r298 = (PyObject *)CPyType_types___Instance;
    cpy_r_r299 = (CPyPtr)&((PyObject *)cpy_r_r297)->ob_type;
    cpy_r_r300 = *(PyObject * *)cpy_r_r299;
    cpy_r_r301 = cpy_r_r300 == cpy_r_r298;
    if (!cpy_r_r301) goto CPyL283;
    cpy_r_r302 = CPyStatics[706]; /* '__call__' */
    cpy_r_r303 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r303 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "actual", 1006, CPyStatic_constraints___globals);
        goto CPyL206;
    }
    CPy_INCREF(cpy_r_r303);
CPyL192: ;
    if (likely(Py_TYPE(cpy_r_r303) == CPyType_types___Instance))
        cpy_r_r304 = cpy_r_r303;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 1006, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_r303);
        goto CPyL206;
    }
    cpy_r_r305 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r305 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "actual", 1006, CPyStatic_constraints___globals);
        goto CPyL284;
    }
    CPy_INCREF(cpy_r_r305);
CPyL194: ;
    if (likely(Py_TYPE(cpy_r_r305) == CPyType_types___Instance))
        cpy_r_r306 = cpy_r_r305;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 1006, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_r305);
        goto CPyL284;
    }
    cpy_r_r307 = 2;
    cpy_r_r308 = CPyDef_subtypes___find_member(cpy_r_r302, cpy_r_r304, cpy_r_r306, 1, cpy_r_r307);
    CPy_DECREF(cpy_r_r304);
    CPy_DECREF(cpy_r_r306);
    if (unlikely(cpy_r_r308 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 1005, CPyStatic_constraints___globals);
        goto CPyL206;
    }
    cpy_r_call = cpy_r_r308;
    cpy_r_r309 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r310 = cpy_r_call != cpy_r_r309;
    if (!cpy_r_r310) goto CPyL285;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r311 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_callable_type", 1009, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_call);
        goto CPyL206;
    }
    cpy_r_r312 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r312 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_callable_type", "ConstraintBuilderVisitor", "direction", 1009, CPyStatic_constraints___globals);
        goto CPyL286;
    }
    CPyTagged_INCREF(cpy_r_r312);
CPyL199: ;
    cpy_r_r313 = CPyDef_constraints___infer_constraints(cpy_r_template, cpy_r_r311, cpy_r_r312);
    CPy_DECREF(cpy_r_template);
    CPy_DECREF(cpy_r_r311);
    CPyTagged_DECREF(cpy_r_r312);
    if (unlikely(cpy_r_r313 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 1009, CPyStatic_constraints___globals);
        goto CPyL205;
    }
    return cpy_r_r313;
CPyL201: ;
    cpy_r_r314 = PyList_New(0);
    if (unlikely(cpy_r_r314 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 1011, CPyStatic_constraints___globals);
        goto CPyL205;
    }
    return cpy_r_r314;
CPyL203: ;
    cpy_r_r315 = PyList_New(0);
    if (unlikely(cpy_r_r315 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 1013, CPyStatic_constraints___globals);
        goto CPyL205;
    }
    return cpy_r_r315;
CPyL205: ;
    cpy_r_r316 = NULL;
    return cpy_r_r316;
CPyL206: ;
    CPy_DecRef(cpy_r_template);
    goto CPyL205;
CPyL207: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    goto CPyL205;
CPyL208: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    goto CPyL205;
CPyL209: ;
    CPy_DECREF(cpy_r_param_spec);
    goto CPyL10;
CPyL210: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    goto CPyL11;
CPyL211: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_r25);
    goto CPyL205;
CPyL212: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL29;
CPyL213: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_r32);
    goto CPyL205;
CPyL214: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL28;
CPyL215: ;
    CPy_DECREF(cpy_r_cactual);
    goto CPyL33;
CPyL216: ;
    CPy_DECREF(cpy_r_unified);
    goto CPyL38;
CPyL217: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPyTagged_DecRef(cpy_r_r48);
    goto CPyL205;
CPyL218: ;
    CPy_DECREF(cpy_r_r51);
    goto CPyL38;
CPyL219: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_r60);
    goto CPyL205;
CPyL220: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r62);
    goto CPyL205;
CPyL221: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_unpack_constraints);
    CPy_DecRef(cpy_r_cactual_args_t);
    goto CPyL205;
CPyL222: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_unpack_constraints);
    CPy_DecRef(cpy_r_template_args);
    goto CPyL205;
CPyL223: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_cactual_args);
    goto CPyL205;
CPyL224: ;
    CPy_DECREF(cpy_r_r70);
    goto CPyL50;
CPyL225: ;
    CPy_DECREF(cpy_r_template);
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_cactual);
    CPy_DECREF(cpy_r_template_args);
    CPy_DECREF(cpy_r_cactual_args);
    goto CPyL51;
CPyL226: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_template_args);
    goto CPyL205;
CPyL227: ;
    CPy_DECREF(cpy_r_template_args);
    CPy_DECREF(cpy_r_cactual_args);
    goto CPyL141;
CPyL228: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_cactual_args);
    CPy_DecRef(cpy_r_t);
    goto CPyL205;
CPyL229: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_template_args);
    CPy_DecRef(cpy_r_cactual_args);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_a);
    goto CPyL205;
CPyL230: ;
    CPy_DECREF(cpy_r_r100);
    goto CPyL65;
CPyL231: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_param_spec);
    goto CPyL205;
CPyL232: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_param_spec);
    CPy_DecRef(cpy_r_prefix);
    CPyTagged_DecRef(cpy_r_prefix_len);
    goto CPyL205;
CPyL233: ;
    CPy_DECREF(cpy_r_cactual_ps);
    goto CPyL70;
CPyL234: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_param_spec);
    CPy_DecRef(cpy_r_prefix);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r116);
    goto CPyL205;
CPyL235: ;
    CPy_DECREF(cpy_r_r119);
    goto CPyL88;
CPyL236: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_param_spec);
    CPy_DecRef(cpy_r_prefix);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_r125);
    goto CPyL205;
CPyL237: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_param_spec);
    CPy_DecRef(cpy_r_prefix);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_k);
    goto CPyL77;
CPyL238: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_param_spec);
    CPy_DecRef(cpy_r_prefix);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_k);
    goto CPyL82;
CPyL239: ;
    CPy_DECREF(cpy_r_k);
    goto CPyL87;
CPyL240: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_param_spec);
    CPy_DecRef(cpy_r_prefix);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r119);
    goto CPyL205;
CPyL241: ;
    CPyTagged_DECREF(cpy_r_prefix_len);
    goto CPyL92;
CPyL242: ;
    CPyTagged_DECREF(cpy_r_max_prefix_len);
    goto CPyL93;
CPyL243: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_prefix);
    CPyTagged_DecRef(cpy_r_prefix_len);
    goto CPyL205;
CPyL244: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_prefix);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r149);
    goto CPyL205;
CPyL245: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_prefix);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r154);
    goto CPyL205;
CPyL246: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_prefix);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r154);
    CPy_DecRef(cpy_r_r159);
    goto CPyL205;
CPyL247: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_prefix);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r154);
    CPy_DecRef(cpy_r_r159);
    CPy_DecRef(cpy_r_r164);
    goto CPyL205;
CPyL248: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_prefix);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r154);
    CPy_DecRef(cpy_r_r159);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r168);
    goto CPyL205;
CPyL249: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_prefix);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_cactual_ps);
    goto CPyL205;
CPyL250: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_prefix);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r178);
    goto CPyL205;
CPyL251: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_prefix);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r187);
    goto CPyL205;
CPyL252: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_prefix);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r192);
    goto CPyL205;
CPyL253: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r192);
    goto CPyL205;
CPyL254: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r192);
    CPy_DecRef(cpy_r_r197);
    goto CPyL205;
CPyL255: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_r203);
    goto CPyL205;
CPyL256: ;
    CPy_DECREF(cpy_r_r203);
    CPy_DECREF(cpy_r_r207);
    goto CPyL141;
CPyL257: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r207);
    goto CPyL205;
CPyL258: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r207);
    goto CPyL205;
CPyL259: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r207);
    goto CPyL205;
CPyL260: ;
    CPy_DECREF(cpy_r_r224);
    goto CPyL140;
CPyL261: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_r228);
    goto CPyL205;
CPyL262: ;
    CPy_DECREF(cpy_r_template_ret_type);
    goto CPyL144;
CPyL263: ;
    CPy_DECREF(cpy_r_template);
    goto CPyL146;
CPyL264: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_cactual_ret_type);
    goto CPyL205;
CPyL265: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_template_ret_type);
    CPy_DecRef(cpy_r_cactual_ret_type);
    goto CPyL205;
CPyL266: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_cactual);
    CPy_DecRef(cpy_r_template_ret_type);
    CPy_DecRef(cpy_r_cactual_ret_type);
    CPy_DecRef(cpy_r_r239);
    goto CPyL205;
CPyL267: ;
    CPy_DECREF(cpy_r_cactual_ret_type);
    goto CPyL149;
CPyL268: ;
    CPy_DECREF(cpy_r_cactual);
    goto CPyL152;
CPyL269: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_template_ret_type);
    goto CPyL205;
CPyL270: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_template_ret_type);
    CPy_DecRef(cpy_r_cactual_ret_type);
    goto CPyL205;
CPyL271: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL205;
CPyL272: ;
    CPy_DECREF(cpy_r_r248);
    goto CPyL155;
CPyL273: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_param_spec);
    goto CPyL205;
CPyL274: ;
    CPy_DECREF(cpy_r_param_spec);
    goto CPyL163;
CPyL275: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r263);
    goto CPyL205;
CPyL276: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_any_type);
    goto CPyL205;
CPyL277: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r267);
    goto CPyL205;
CPyL278: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r270);
    goto CPyL205;
CPyL279: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r274);
    goto CPyL205;
CPyL280: ;
    CPy_DECREF(cpy_r_r277);
    goto CPyL175;
CPyL281: ;
    CPy_DecRef(cpy_r_r291);
    goto CPyL205;
CPyL282: ;
    CPy_DecRef(cpy_r_r291);
    CPy_DecRef(cpy_r_r294);
    goto CPyL205;
CPyL283: ;
    CPy_DECREF(cpy_r_template);
    goto CPyL203;
CPyL284: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_r304);
    goto CPyL205;
CPyL285: ;
    CPy_DECREF(cpy_r_template);
    CPy_DECREF(cpy_r_call);
    goto CPyL201;
CPyL286: ;
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_r311);
    goto CPyL205;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___CallableType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_callable_type(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_callable_type", 877, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___infer_against_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_overloaded, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_item;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_constraints___find_matching_overload_item(cpy_r_overloaded, cpy_r_template);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_against_overloaded", 1023, CPyStatic_constraints___globals);
        goto CPyL4;
    }
    cpy_r_item = cpy_r_r0;
    cpy_r_r1 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "infer_against_overloaded", "ConstraintBuilderVisitor", "direction", 1024, CPyStatic_constraints___globals);
        goto CPyL5;
    }
    CPyTagged_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = CPyDef_constraints___infer_constraints(cpy_r_template, cpy_r_item, cpy_r_r1);
    CPy_DECREF(cpy_r_item);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_against_overloaded", 1024, CPyStatic_constraints___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
CPyL5: ;
    CPy_DecRef(cpy_r_item);
    goto CPyL4;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___infer_against_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"overloaded", "template", 0};
    static CPyArg_Parser parser = {"OO:infer_against_overloaded", kwlist, 0};
    PyObject *obj_overloaded;
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_overloaded, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_overloaded;
    if (likely(Py_TYPE(obj_overloaded) == CPyType_types___Overloaded))
        arg_overloaded = obj_overloaded;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_overloaded); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___CallableType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___infer_against_overloaded(arg_self, arg_overloaded, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "infer_against_overloaded", 1015, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_actual;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_unpack_index;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_is_varlength_tuple;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_unpack_type;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_unpacked_type;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    CPyPtr cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyTagged cpy_r_r57;
    tuple_T3OOO cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_unpack_constraints;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_actual_items;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_template_items;
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
    CPyPtr cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    CPyPtr cpy_r_r77;
    int64_t cpy_r_r78;
    CPyTagged cpy_r_r79;
    CPyPtr cpy_r_r80;
    int64_t cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    CPyTagged cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyPtr cpy_r_r98;
    int64_t cpy_r_r99;
    CPyTagged cpy_r_r100;
    CPyTagged cpy_r_r101;
    CPyTagged cpy_r_i;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    CPyTagged cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyTagged cpy_r_r110;
    PyObject *cpy_r_r111;
    CPyPtr cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    cpy_r_r0 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_tuple_type", "ConstraintBuilderVisitor", "actual", 1027, CPyStatic_constraints___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_actual = cpy_r_r0;
    cpy_r_r1 = ((mypy___types___TupleTypeObject *)cpy_r_template)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_typevartuples___find_unpack_in_list(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1028, CPyStatic_constraints___globals);
        goto CPyL78;
    }
    cpy_r_unpack_index = cpy_r_r2;
    cpy_r_r3 = (PyObject *)CPyType_types___Instance;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (cpy_r_r6) goto CPyL4;
    cpy_r_r7 = cpy_r_r6;
    goto CPyL10;
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___Instance))
        cpy_r_r8 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_tuple_type", 1030, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_actual);
        goto CPyL79;
    }
    cpy_r_r9 = ((mypy___types___InstanceObject *)cpy_r_r8)->_type;
    cpy_r_r10 = CPY_GET_ATTR(cpy_r_r9, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1030, CPyStatic_constraints___globals);
        goto CPyL79;
    }
CPyL6: ;
    cpy_r_r11 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r12 = PyUnicode_Compare(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 == -1;
    if (!cpy_r_r13) goto CPyL9;
    cpy_r_r14 = PyErr_Occurred();
    cpy_r_r15 = cpy_r_r14 != NULL;
    if (!cpy_r_r15) goto CPyL9;
    cpy_r_r16 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1030, CPyStatic_constraints___globals);
        goto CPyL79;
    }
CPyL9: ;
    cpy_r_r17 = cpy_r_r12 == 0;
    cpy_r_r7 = cpy_r_r17;
CPyL10: ;
    cpy_r_is_varlength_tuple = cpy_r_r7;
    cpy_r_r18 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (cpy_r_r21) goto CPyL12;
    if (!cpy_r_is_varlength_tuple) goto CPyL80;
CPyL12: ;
    cpy_r_r22 = PyList_New(0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1034, CPyStatic_constraints___globals);
        goto CPyL79;
    }
    cpy_r_res = cpy_r_r22;
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_unpack_index != cpy_r_r23;
    if (!cpy_r_r24) goto CPyL81;
    if (cpy_r_is_varlength_tuple) {
        goto CPyL82;
    } else
        goto CPyL83;
CPyL15: ;
    cpy_r_r25 = ((mypy___types___TupleTypeObject *)cpy_r_template)->_items;
    if (likely(PyLong_Check(cpy_r_unpack_index)))
        cpy_r_r26 = CPyTagged_FromObject(cpy_r_unpack_index);
    else {
        CPy_TypeError("int", cpy_r_unpack_index); cpy_r_r26 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_unpack_index);
    if (unlikely(cpy_r_r26 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1037, CPyStatic_constraints___globals);
        goto CPyL78;
    }
    cpy_r_r27 = CPyList_GetItem(cpy_r_r25, cpy_r_r26);
    CPyTagged_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1037, CPyStatic_constraints___globals);
        goto CPyL78;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_types___Type)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_tuple_type", 1037, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r27);
        goto CPyL78;
    }
    cpy_r_unpack_type = cpy_r_r28;
    cpy_r_r29 = (PyObject *)CPyType_types___UnpackType;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_unpack_type)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (cpy_r_r32) {
        goto CPyL21;
    } else
        goto CPyL84;
CPyL19: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1038, CPyStatic_constraints___globals);
        goto CPyL77;
    }
    CPy_Unreachable();
CPyL21: ;
    if (likely(Py_TYPE(cpy_r_unpack_type) == CPyType_types___UnpackType))
        cpy_r_r34 = cpy_r_unpack_type;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_tuple_type", 1039, CPyStatic_constraints___globals, "mypy.types.UnpackType", cpy_r_unpack_type);
        goto CPyL85;
    }
    cpy_r_r35 = ((mypy___types___UnpackTypeObject *)cpy_r_r34)->_type;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF(cpy_r_unpack_type);
    cpy_r_unpacked_type = cpy_r_r35;
    cpy_r_r36 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_unpacked_type)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    if (cpy_r_r39) {
        goto CPyL25;
    } else
        goto CPyL86;
CPyL23: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1040, CPyStatic_constraints___globals);
        goto CPyL77;
    }
    CPy_Unreachable();
CPyL25: ;
    if (likely(Py_TYPE(cpy_r_unpacked_type) == CPyType_types___TypeVarTupleType))
        cpy_r_r41 = cpy_r_unpacked_type;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_tuple_type", 1041, CPyStatic_constraints___globals, "mypy.types.TypeVarTupleType", cpy_r_unpacked_type);
        goto CPyL78;
    }
    cpy_r_r42 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r42 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_tuple_type", "ConstraintBuilderVisitor", "direction", 1041, CPyStatic_constraints___globals);
        goto CPyL87;
    }
    CPyTagged_INCREF(cpy_r_r42);
CPyL27: ;
    cpy_r_r43 = CPyDef_constraints___Constraint(cpy_r_r41, cpy_r_r42, cpy_r_actual);
    CPy_DECREF(cpy_r_r41);
    CPyTagged_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_actual);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1041, CPyStatic_constraints___globals);
        goto CPyL77;
    }
    cpy_r_r44 = PyList_New(1);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1041, CPyStatic_constraints___globals);
        goto CPyL88;
    }
    cpy_r_r45 = (CPyPtr)&((PyListObject *)cpy_r_r44)->ob_item;
    cpy_r_r46 = *(CPyPtr *)cpy_r_r45;
    *(PyObject * *)cpy_r_r46 = cpy_r_r43;
    return cpy_r_r44;
CPyL30: ;
    cpy_r_r47 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r48 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r49 = *(PyObject * *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 == cpy_r_r47;
    if (cpy_r_r50) {
        goto CPyL33;
    } else
        goto CPyL89;
CPyL31: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1043, CPyStatic_constraints___globals);
        goto CPyL77;
    }
    CPy_Unreachable();
CPyL33: ;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___TupleType))
        cpy_r_r52 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_tuple_type", 1049, CPyStatic_constraints___globals, "mypy.types.TupleType", cpy_r_actual);
        goto CPyL90;
    }
    cpy_r_r53 = ((mypy___types___TupleTypeObject *)cpy_r_r52)->_items;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = PyList_AsTuple(cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1049, CPyStatic_constraints___globals);
        goto CPyL90;
    }
    cpy_r_r55 = ((mypy___types___TupleTypeObject *)cpy_r_template)->_items;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = PyList_AsTuple(cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1049, CPyStatic_constraints___globals);
        goto CPyL91;
    }
    cpy_r_r57 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r57 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_tuple_type", "ConstraintBuilderVisitor", "direction", 1049, CPyStatic_constraints___globals);
        goto CPyL92;
    }
    CPyTagged_INCREF(cpy_r_r57);
CPyL37: ;
    cpy_r_r58 = CPyDef_constraints___find_and_build_constraints_for_unpack(cpy_r_r54, cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r56);
    CPyTagged_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58.f0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1048, CPyStatic_constraints___globals);
        goto CPyL90;
    }
    cpy_r_r59 = cpy_r_r58.f0;
    CPy_INCREF(cpy_r_r59);
    cpy_r_unpack_constraints = cpy_r_r59;
    cpy_r_r60 = cpy_r_r58.f1;
    CPy_INCREF(cpy_r_r60);
    cpy_r_actual_items = cpy_r_r60;
    cpy_r_r61 = cpy_r_r58.f2;
    CPy_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r58.f0);
    CPy_DECREF(cpy_r_r58.f1);
    CPy_DECREF(cpy_r_r58.f2);
    cpy_r_template_items = cpy_r_r61;
    cpy_r_r62 = CPyList_Extend(cpy_r_res, cpy_r_unpack_constraints);
    CPy_DECREF(cpy_r_unpack_constraints);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1051, CPyStatic_constraints___globals);
        goto CPyL93;
    } else
        goto CPyL94;
CPyL39: ;
    cpy_r_r63 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r64 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r65 = *(PyObject * *)cpy_r_r64;
    cpy_r_r66 = cpy_r_r65 == cpy_r_r63;
    if (!cpy_r_r66) goto CPyL95;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___TupleType))
        cpy_r_r67 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_tuple_type", 1053, CPyStatic_constraints___globals, "mypy.types.TupleType", cpy_r_actual);
        goto CPyL90;
    }
    cpy_r_r68 = ((mypy___types___TupleTypeObject *)cpy_r_r67)->_items;
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69 = PyList_AsTuple(cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1053, CPyStatic_constraints___globals);
        goto CPyL90;
    }
    cpy_r_actual_items = cpy_r_r69;
    cpy_r_r70 = ((mypy___types___TupleTypeObject *)cpy_r_template)->_items;
    CPy_INCREF(cpy_r_r70);
    cpy_r_r71 = PyList_AsTuple(cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1054, CPyStatic_constraints___globals);
        goto CPyL96;
    }
    cpy_r_template_items = cpy_r_r71;
    goto CPyL45;
CPyL44: ;
    return cpy_r_res;
CPyL45: ;
    cpy_r_r72 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r73 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r74 = *(PyObject * *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r74 == cpy_r_r72;
    if (cpy_r_r75) {
        goto CPyL48;
    } else
        goto CPyL97;
CPyL46: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r76 = 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1059, CPyStatic_constraints___globals);
        goto CPyL77;
    }
    CPy_Unreachable();
CPyL48: ;
    cpy_r_r77 = (CPyPtr)&((PyVarObject *)cpy_r_actual_items)->ob_size;
    cpy_r_r78 = *(int64_t *)cpy_r_r77;
    cpy_r_r79 = cpy_r_r78 << 1;
    cpy_r_r80 = (CPyPtr)&((PyVarObject *)cpy_r_template_items)->ob_size;
    cpy_r_r81 = *(int64_t *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 << 1;
    cpy_r_r83 = cpy_r_r79 == cpy_r_r82;
    if (!cpy_r_r83) goto CPyL98;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___TupleType))
        cpy_r_r84 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_tuple_type", 1062, CPyStatic_constraints___globals, "mypy.types.TupleType", cpy_r_actual);
        goto CPyL93;
    }
    cpy_r_r85 = ((mypy___types___TupleTypeObject *)cpy_r_r84)->_partial_fallback;
    cpy_r_r86 = ((mypy___types___InstanceObject *)cpy_r_r85)->_type;
    cpy_r_r87 = ((mypy___nodes___TypeInfoObject *)cpy_r_r86)->_is_named_tuple;
    if (unlikely(cpy_r_r87 == 2)) {
        CPy_AttributeError("mypy/constraints.py", "visit_tuple_type", "TypeInfo", "is_named_tuple", 1062, CPyStatic_constraints___globals);
        goto CPyL93;
    }
CPyL51: ;
    if (!cpy_r_r87) goto CPyL99;
CPyL52: ;
    cpy_r_r88 = ((mypy___types___TupleTypeObject *)cpy_r_template)->_partial_fallback;
    cpy_r_r89 = ((mypy___types___InstanceObject *)cpy_r_r88)->_type;
    cpy_r_r90 = ((mypy___nodes___TypeInfoObject *)cpy_r_r89)->_is_named_tuple;
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AttributeError("mypy/constraints.py", "visit_tuple_type", "TypeInfo", "is_named_tuple", 1063, CPyStatic_constraints___globals);
        goto CPyL93;
    }
CPyL53: ;
    if (cpy_r_r90) {
        goto CPyL100;
    } else
        goto CPyL99;
CPyL54: ;
    cpy_r_r91 = ((mypy___types___TupleTypeObject *)cpy_r_template)->_partial_fallback;
    CPy_INCREF(cpy_r_r91);
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___TupleType))
        cpy_r_r92 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_tuple_type", 1067, CPyStatic_constraints___globals, "mypy.types.TupleType", cpy_r_actual);
        goto CPyL101;
    }
    cpy_r_r93 = ((mypy___types___TupleTypeObject *)cpy_r_r92)->_partial_fallback;
    CPy_INCREF(cpy_r_r93);
    CPy_DECREF(cpy_r_actual);
    cpy_r_r94 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r94 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_tuple_type", "ConstraintBuilderVisitor", "direction", 1067, CPyStatic_constraints___globals);
        goto CPyL102;
    }
    CPyTagged_INCREF(cpy_r_r94);
CPyL56: ;
    cpy_r_r95 = CPyDef_constraints___infer_constraints(cpy_r_r91, cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r93);
    CPyTagged_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1066, CPyStatic_constraints___globals);
        goto CPyL103;
    }
    cpy_r_r96 = PyNumber_Add(cpy_r_res, cpy_r_r95);
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1066, CPyStatic_constraints___globals);
        goto CPyL77;
    }
    if (likely(PyList_Check(cpy_r_r96)))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_tuple_type", 1066, CPyStatic_constraints___globals, "list", cpy_r_r96);
        goto CPyL77;
    }
    return cpy_r_r97;
CPyL60: ;
    cpy_r_r98 = (CPyPtr)&((PyVarObject *)cpy_r_template_items)->ob_size;
    cpy_r_r99 = *(int64_t *)cpy_r_r98;
    cpy_r_r100 = cpy_r_r99 << 1;
    cpy_r_r101 = 0;
    cpy_r_i = cpy_r_r101;
CPyL61: ;
    cpy_r_r102 = (Py_ssize_t)cpy_r_r101 < (Py_ssize_t)cpy_r_r100;
    if (!cpy_r_r102) goto CPyL104;
    cpy_r_r103 = CPySequenceTuple_GetItem(cpy_r_template_items, cpy_r_i);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1071, CPyStatic_constraints___globals);
        goto CPyL105;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r103, CPyType_types___Type)))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_tuple_type", 1071, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r103);
        goto CPyL105;
    }
    cpy_r_r105 = CPySequenceTuple_GetItem(cpy_r_actual_items, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1071, CPyStatic_constraints___globals);
        goto CPyL106;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r105, CPyType_types___Type)))
        cpy_r_r106 = cpy_r_r105;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_tuple_type", 1071, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r105);
        goto CPyL106;
    }
    cpy_r_r107 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r107 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_tuple_type", "ConstraintBuilderVisitor", "direction", 1071, CPyStatic_constraints___globals);
        goto CPyL107;
    }
    CPyTagged_INCREF(cpy_r_r107);
CPyL67: ;
    cpy_r_r108 = CPyDef_constraints___infer_constraints(cpy_r_r104, cpy_r_r106, cpy_r_r107);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r106);
    CPyTagged_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1071, CPyStatic_constraints___globals);
        goto CPyL108;
    }
    cpy_r_r109 = CPyList_Extend(cpy_r_res, cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1070, CPyStatic_constraints___globals);
        goto CPyL108;
    } else
        goto CPyL109;
CPyL69: ;
    cpy_r_r110 = cpy_r_r101 + 2;
    cpy_r_r101 = cpy_r_r110;
    cpy_r_i = cpy_r_r110;
    goto CPyL61;
CPyL70: ;
    return cpy_r_res;
CPyL71: ;
    cpy_r_r111 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r112 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r113 = *(PyObject * *)cpy_r_r112;
    cpy_r_r114 = cpy_r_r113 == cpy_r_r111;
    if (!cpy_r_r114) goto CPyL110;
    cpy_r_r115 = ((mypy___types___TupleTypeObject *)cpy_r_template)->_items;
    CPy_INCREF(cpy_r_r115);
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___AnyType))
        cpy_r_r116 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_tuple_type", 1075, CPyStatic_constraints___globals, "mypy.types.AnyType", cpy_r_actual);
        goto CPyL111;
    }
    cpy_r_r117 = CPyDef_constraints___ConstraintBuilderVisitor___infer_against_any(cpy_r_self, cpy_r_r115, cpy_r_r116);
    CPy_DECREF(cpy_r_r115);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1075, CPyStatic_constraints___globals);
        goto CPyL77;
    }
    return cpy_r_r117;
CPyL75: ;
    cpy_r_r118 = PyList_New(0);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1077, CPyStatic_constraints___globals);
        goto CPyL77;
    }
    return cpy_r_r118;
CPyL77: ;
    cpy_r_r119 = NULL;
    return cpy_r_r119;
CPyL78: ;
    CPy_DecRef(cpy_r_actual);
    goto CPyL77;
CPyL79: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_unpack_index);
    goto CPyL77;
CPyL80: ;
    CPy_DECREF(cpy_r_unpack_index);
    goto CPyL71;
CPyL81: ;
    CPy_DECREF(cpy_r_unpack_index);
    goto CPyL39;
CPyL82: ;
    CPy_DECREF(cpy_r_res);
    goto CPyL15;
CPyL83: ;
    CPy_DECREF(cpy_r_unpack_index);
    goto CPyL30;
CPyL84: ;
    CPy_DECREF(cpy_r_actual);
    CPy_DECREF(cpy_r_unpack_type);
    goto CPyL19;
CPyL85: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_unpack_type);
    goto CPyL77;
CPyL86: ;
    CPy_DECREF(cpy_r_actual);
    CPy_DECREF(cpy_r_unpacked_type);
    goto CPyL23;
CPyL87: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_r41);
    goto CPyL77;
CPyL88: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL77;
CPyL89: ;
    CPy_DECREF(cpy_r_actual);
    CPy_DECREF(cpy_r_res);
    goto CPyL31;
CPyL90: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    goto CPyL77;
CPyL91: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r54);
    goto CPyL77;
CPyL92: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r56);
    goto CPyL77;
CPyL93: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_actual_items);
    CPy_DecRef(cpy_r_template_items);
    goto CPyL77;
CPyL94: ;
    CPy_DECREF(cpy_r_r62);
    goto CPyL45;
CPyL95: ;
    CPy_DECREF(cpy_r_actual);
    goto CPyL44;
CPyL96: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_actual_items);
    goto CPyL77;
CPyL97: ;
    CPy_DECREF(cpy_r_actual);
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_actual_items);
    CPy_DECREF(cpy_r_template_items);
    goto CPyL46;
CPyL98: ;
    CPy_DECREF(cpy_r_actual);
    CPy_DECREF(cpy_r_actual_items);
    CPy_DECREF(cpy_r_template_items);
    goto CPyL70;
CPyL99: ;
    CPy_DECREF(cpy_r_actual);
    goto CPyL60;
CPyL100: ;
    CPy_DECREF(cpy_r_actual_items);
    CPy_DECREF(cpy_r_template_items);
    goto CPyL54;
CPyL101: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r91);
    goto CPyL77;
CPyL102: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r93);
    goto CPyL77;
CPyL103: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL77;
CPyL104: ;
    CPy_DECREF(cpy_r_actual_items);
    CPy_DECREF(cpy_r_template_items);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL70;
CPyL105: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_actual_items);
    CPy_DecRef(cpy_r_template_items);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL77;
CPyL106: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_actual_items);
    CPy_DecRef(cpy_r_template_items);
    CPy_DecRef(cpy_r_r104);
    goto CPyL77;
CPyL107: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_actual_items);
    CPy_DecRef(cpy_r_template_items);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    goto CPyL77;
CPyL108: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_actual_items);
    CPy_DecRef(cpy_r_template_items);
    goto CPyL77;
CPyL109: ;
    CPy_DECREF(cpy_r_r109);
    goto CPyL69;
CPyL110: ;
    CPy_DECREF(cpy_r_actual);
    goto CPyL75;
CPyL111: ;
    CPy_DecRef(cpy_r_r115);
    goto CPyL77;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___TupleType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_tuple_type(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type", 1026, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_tuple_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_tuple_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_tuple_type__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_actual;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T3OOO cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_item_name;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_template_item_type;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_actual_item_type;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_typeddict_type", "ConstraintBuilderVisitor", "actual", 1080, CPyStatic_constraints___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_actual = cpy_r_r0;
    cpy_r_r1 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL13;
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_typeddict_type", 1082, CPyStatic_constraints___globals);
        goto CPyL21;
    }
    cpy_r_res = cpy_r_r5;
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___TypedDictType))
        cpy_r_r6 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_typeddict_type", 1085, CPyStatic_constraints___globals, "mypy.types.TypedDictType", cpy_r_actual);
        goto CPyL22;
    }
    cpy_r_r7 = CPyDef_types___TypedDictType___zip(cpy_r_template, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_typeddict_type", 1085, CPyStatic_constraints___globals);
        goto CPyL22;
    }
    cpy_r_r8 = PyObject_GetIter(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_typeddict_type", 1085, CPyStatic_constraints___globals);
        goto CPyL22;
    }
CPyL6: ;
    cpy_r_r9 = PyIter_Next(cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL23;
    PyObject *__tmp1828;
    if (unlikely(!(PyTuple_Check(cpy_r_r9) && PyTuple_GET_SIZE(cpy_r_r9) == 3))) {
        __tmp1828 = NULL;
        goto __LL1829;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r9, 0))))
        __tmp1828 = PyTuple_GET_ITEM(cpy_r_r9, 0);
    else {
        __tmp1828 = NULL;
    }
    if (__tmp1828 == NULL) goto __LL1829;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r9, 1), CPyType_types___Type)))
        __tmp1828 = PyTuple_GET_ITEM(cpy_r_r9, 1);
    else {
        __tmp1828 = NULL;
    }
    if (__tmp1828 == NULL) goto __LL1829;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r9, 2), CPyType_types___Type)))
        __tmp1828 = PyTuple_GET_ITEM(cpy_r_r9, 2);
    else {
        __tmp1828 = NULL;
    }
    if (__tmp1828 == NULL) goto __LL1829;
    __tmp1828 = cpy_r_r9;
__LL1829: ;
    if (unlikely(__tmp1828 == NULL)) {
        CPy_TypeError("tuple[str, mypy.types.Type, mypy.types.Type]", cpy_r_r9); cpy_r_r10 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp1830 = PyTuple_GET_ITEM(cpy_r_r9, 0);
        CPy_INCREF(__tmp1830);
        PyObject *__tmp1831;
        if (likely(PyUnicode_Check(__tmp1830)))
            __tmp1831 = __tmp1830;
        else {
            CPy_TypeError("str", __tmp1830); 
            __tmp1831 = NULL;
        }
        cpy_r_r10.f0 = __tmp1831;
        PyObject *__tmp1832 = PyTuple_GET_ITEM(cpy_r_r9, 1);
        CPy_INCREF(__tmp1832);
        PyObject *__tmp1833;
        if (likely(PyObject_TypeCheck(__tmp1832, CPyType_types___Type)))
            __tmp1833 = __tmp1832;
        else {
            CPy_TypeError("mypy.types.Type", __tmp1832); 
            __tmp1833 = NULL;
        }
        cpy_r_r10.f1 = __tmp1833;
        PyObject *__tmp1834 = PyTuple_GET_ITEM(cpy_r_r9, 2);
        CPy_INCREF(__tmp1834);
        PyObject *__tmp1835;
        if (likely(PyObject_TypeCheck(__tmp1834, CPyType_types___Type)))
            __tmp1835 = __tmp1834;
        else {
            CPy_TypeError("mypy.types.Type", __tmp1834); 
            __tmp1835 = NULL;
        }
        cpy_r_r10.f2 = __tmp1835;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10.f0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_typeddict_type", 1085, CPyStatic_constraints___globals);
        goto CPyL24;
    }
    cpy_r_r11 = cpy_r_r10.f0;
    CPy_INCREF(cpy_r_r11);
    cpy_r_item_name = cpy_r_r11;
    CPy_DECREF(cpy_r_item_name);
    cpy_r_r12 = cpy_r_r10.f1;
    CPy_INCREF(cpy_r_r12);
    cpy_r_template_item_type = cpy_r_r12;
    cpy_r_r13 = cpy_r_r10.f2;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r10.f0);
    CPy_DECREF(cpy_r_r10.f1);
    CPy_DECREF(cpy_r_r10.f2);
    cpy_r_actual_item_type = cpy_r_r13;
    cpy_r_r14 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r14 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_typeddict_type", "ConstraintBuilderVisitor", "direction", 1086, CPyStatic_constraints___globals);
        goto CPyL25;
    }
    CPyTagged_INCREF(cpy_r_r14);
CPyL9: ;
    cpy_r_r15 = CPyDef_constraints___infer_constraints(cpy_r_template_item_type, cpy_r_actual_item_type, cpy_r_r14);
    CPy_DECREF(cpy_r_template_item_type);
    CPy_DECREF(cpy_r_actual_item_type);
    CPyTagged_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_typeddict_type", 1086, CPyStatic_constraints___globals);
        goto CPyL24;
    }
    cpy_r_r16 = CPyList_Extend(cpy_r_res, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_typeddict_type", 1086, CPyStatic_constraints___globals);
        goto CPyL24;
    } else
        goto CPyL26;
CPyL11: ;
    cpy_r_r17 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_typeddict_type", 1085, CPyStatic_constraints___globals);
        goto CPyL22;
    }
    return cpy_r_res;
CPyL13: ;
    cpy_r_r18 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL27;
    cpy_r_r22 = ((mypy___types___TypedDictTypeObject *)cpy_r_template)->_items;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = CPyDict_ValuesView(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_typeddict_type", 1089, CPyStatic_constraints___globals);
        goto CPyL21;
    }
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___AnyType))
        cpy_r_r24 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_typeddict_type", 1089, CPyStatic_constraints___globals, "mypy.types.AnyType", cpy_r_actual);
        goto CPyL28;
    }
    cpy_r_r25 = CPyDef_constraints___ConstraintBuilderVisitor___infer_against_any(cpy_r_self, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_typeddict_type", 1089, CPyStatic_constraints___globals);
        goto CPyL20;
    }
    return cpy_r_r25;
CPyL18: ;
    cpy_r_r26 = PyList_New(0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_typeddict_type", 1091, CPyStatic_constraints___globals);
        goto CPyL20;
    }
    return cpy_r_r26;
CPyL20: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL21: ;
    CPy_DecRef(cpy_r_actual);
    goto CPyL20;
CPyL22: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL20;
CPyL23: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL11;
CPyL24: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r8);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_template_item_type);
    CPy_DecRef(cpy_r_actual_item_type);
    goto CPyL20;
CPyL26: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL6;
CPyL27: ;
    CPy_DECREF(cpy_r_actual);
    goto CPyL18;
CPyL28: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL20;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___TypedDictType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_typeddict_type(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_typeddict_type", 1079, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_typeddict_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_typeddict_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_typeddict_type__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "Unexpected UnionType in ConstraintBuilderVisitor (should have been handled in infer_constraints)");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_union_type", 1094, CPyStatic_constraints___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___UnionType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_union_type(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_union_type", 1093, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_union_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_template) {
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
    cpy_r_r1 = PyObject_Str(cpy_r_template);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_type_alias_type", 1100, CPyStatic_constraints___globals);
        goto CPyL8;
    }
    cpy_r_r2 = CPyStr_Build(2, cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_type_alias_type", 1100, CPyStatic_constraints___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyModule_builtins;
    cpy_r_r4 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_type_alias_type", 1100, CPyStatic_constraints___globals);
        goto CPyL9;
    }
    PyObject *cpy_r_r6[1] = {cpy_r_r2};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 1, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_type_alias_type", 1100, CPyStatic_constraints___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r2);
    CPy_Raise(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_type_alias_type", 1100, CPyStatic_constraints___globals);
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

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___TypeAliasType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_type_alias_type(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_type_alias_type", 1099, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___infer_against_any(PyObject *cpy_r_self, PyObject *cpy_r_types, PyObject *cpy_r_any_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_against_any", 1103, CPyStatic_constraints___globals);
        goto CPyL17;
    }
    cpy_r_res = cpy_r_r0;
    cpy_r_r1 = PyObject_GetIter(cpy_r_types);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_against_any", 1104, CPyStatic_constraints___globals);
        goto CPyL18;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL19;
    if (likely(PyObject_TypeCheck(cpy_r_r2, CPyType_types___Type)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_against_any", 1104, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r2);
        goto CPyL20;
    }
    cpy_r_t = cpy_r_r3;
    cpy_r_r4 = (PyObject *)CPyType_types___UnpackType;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL12;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnpackType))
        cpy_r_r8 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_against_any", 1105, CPyStatic_constraints___globals, "mypy.types.UnpackType", cpy_r_t);
        goto CPyL21;
    }
    cpy_r_r9 = ((mypy___types___UnpackTypeObject *)cpy_r_r8)->_type;
    cpy_r_r10 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_r9)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL12;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnpackType))
        cpy_r_r14 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_against_any", 1106, CPyStatic_constraints___globals, "mypy.types.UnpackType", cpy_r_t);
        goto CPyL21;
    }
    cpy_r_r15 = ((mypy___types___UnpackTypeObject *)cpy_r_r14)->_type;
    CPy_INCREF(cpy_r_r15);
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_types___TypeVarTupleType))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "infer_against_any", 1106, CPyStatic_constraints___globals, "mypy.types.TypeVarTupleType", cpy_r_r15);
        goto CPyL21;
    }
    CPy_DECREF(cpy_r_t);
    cpy_r_r17 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r17 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "infer_against_any", "ConstraintBuilderVisitor", "direction", 1106, CPyStatic_constraints___globals);
        goto CPyL22;
    }
    CPyTagged_INCREF(cpy_r_r17);
CPyL10: ;
    cpy_r_r18 = CPyDef_constraints___Constraint(cpy_r_r16, cpy_r_r17, cpy_r_any_type);
    CPy_DECREF(cpy_r_r16);
    CPyTagged_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_against_any", 1106, CPyStatic_constraints___globals);
        goto CPyL20;
    }
    cpy_r_r19 = PyList_Append(cpy_r_res, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_against_any", 1106, CPyStatic_constraints___globals);
        goto CPyL20;
    } else
        goto CPyL2;
CPyL12: ;
    cpy_r_r21 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "infer_against_any", "ConstraintBuilderVisitor", "direction", 1111, CPyStatic_constraints___globals);
        goto CPyL21;
    }
    CPyTagged_INCREF(cpy_r_r21);
CPyL13: ;
    cpy_r_r22 = CPyDef_constraints___infer_constraints(cpy_r_t, cpy_r_any_type, cpy_r_r21);
    CPy_DECREF(cpy_r_t);
    CPyTagged_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_against_any", 1111, CPyStatic_constraints___globals);
        goto CPyL20;
    }
    cpy_r_r23 = CPyList_Extend(cpy_r_res, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_against_any", 1111, CPyStatic_constraints___globals);
        goto CPyL20;
    } else
        goto CPyL23;
CPyL15: ;
    cpy_r_r24 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/constraints.py", "infer_against_any", 1104, CPyStatic_constraints___globals);
        goto CPyL18;
    }
    return cpy_r_res;
CPyL17: ;
    cpy_r_r25 = NULL;
    return cpy_r_r25;
CPyL18: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL15;
CPyL20: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r1);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_t);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r16);
    goto CPyL17;
CPyL23: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL2;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___infer_against_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"types", "any_type", 0};
    static CPyArg_Parser parser = {"OO:infer_against_any", kwlist, 0};
    PyObject *obj_types;
    PyObject *obj_any_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_types, &obj_any_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_types = obj_types;
    PyObject *arg_any_type;
    if (likely(Py_TYPE(obj_any_type) == CPyType_types___AnyType))
        arg_any_type = obj_any_type;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_any_type); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___infer_against_any(arg_self, arg_types, arg_any_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "infer_against_any", 1102, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_res;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_overloaded", "ConstraintBuilderVisitor", "actual", 1115, CPyStatic_constraints___globals);
        goto CPyL18;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL6;
    cpy_r_r5 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_overloaded", "ConstraintBuilderVisitor", "actual", 1116, CPyStatic_constraints___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___CallableType))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_overloaded", 1116, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r5);
        goto CPyL18;
    }
    cpy_r_r7 = CPyDef_constraints___find_matching_overload_items(cpy_r_template, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_overloaded", 1116, CPyStatic_constraints___globals);
        goto CPyL18;
    }
    cpy_r_items = cpy_r_r7;
    goto CPyL8;
CPyL6: ;
    cpy_r_r8 = CPY_GET_ATTR(cpy_r_template, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_overloaded", 1118, CPyStatic_constraints___globals);
        goto CPyL18;
    }
CPyL7: ;
    cpy_r_items = cpy_r_r8;
CPyL8: ;
    cpy_r_r9 = PyList_New(0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_overloaded", 1119, CPyStatic_constraints___globals);
        goto CPyL19;
    }
    cpy_r_res = cpy_r_r9;
    cpy_r_r10 = 0;
CPyL10: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL20;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r10);
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_types___CallableType))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_overloaded", 1120, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r15);
        goto CPyL21;
    }
    cpy_r_t = cpy_r_r16;
    cpy_r_r17 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_overloaded", "ConstraintBuilderVisitor", "actual", 1121, CPyStatic_constraints___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r17);
CPyL13: ;
    cpy_r_r18 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r18 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_overloaded", "ConstraintBuilderVisitor", "direction", 1121, CPyStatic_constraints___globals);
        goto CPyL23;
    }
    CPyTagged_INCREF(cpy_r_r18);
CPyL14: ;
    cpy_r_r19 = CPyDef_constraints___infer_constraints(cpy_r_t, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_r17);
    CPyTagged_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_overloaded", 1121, CPyStatic_constraints___globals);
        goto CPyL21;
    }
    cpy_r_r20 = CPyList_Extend(cpy_r_res, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_overloaded", 1121, CPyStatic_constraints___globals);
        goto CPyL21;
    } else
        goto CPyL24;
CPyL16: ;
    cpy_r_r21 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r21;
    goto CPyL10;
CPyL17: ;
    return cpy_r_res;
CPyL18: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL19: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL18;
CPyL20: ;
    CPy_DECREF(cpy_r_items);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_res);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_t);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r17);
    goto CPyL18;
CPyL24: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL16;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___Overloaded))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_overloaded(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_overloaded", 1114, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_overloaded__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_overloaded(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_overloaded__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_overloaded__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_overloaded__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_type_type(PyObject *cpy_r_self, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    cpy_r_r0 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_type_type", "ConstraintBuilderVisitor", "actual", 1125, CPyStatic_constraints___globals);
        goto CPyL33;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL7;
    cpy_r_r5 = ((mypy___types___TypeTypeObject *)cpy_r_template)->_item;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_type_type", "ConstraintBuilderVisitor", "actual", 1126, CPyStatic_constraints___globals);
        goto CPyL34;
    }
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_types___CallableType))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_type_type", 1126, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r6);
        goto CPyL34;
    }
    cpy_r_r8 = ((mypy___types___CallableTypeObject *)cpy_r_r7)->_ret_type;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_type_type", "ConstraintBuilderVisitor", "direction", 1126, CPyStatic_constraints___globals);
        goto CPyL35;
    }
    CPyTagged_INCREF(cpy_r_r9);
CPyL5: ;
    cpy_r_r10 = CPyDef_constraints___infer_constraints(cpy_r_r5, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    CPyTagged_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_type_type", 1126, CPyStatic_constraints___globals);
        goto CPyL33;
    }
    return cpy_r_r10;
CPyL7: ;
    cpy_r_r11 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_type_type", "ConstraintBuilderVisitor", "actual", 1127, CPyStatic_constraints___globals);
        goto CPyL33;
    }
CPyL8: ;
    cpy_r_r12 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_r11)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (!cpy_r_r15) goto CPyL17;
    cpy_r_r16 = ((mypy___types___TypeTypeObject *)cpy_r_template)->_item;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_type_type", "ConstraintBuilderVisitor", "actual", 1128, CPyStatic_constraints___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r17);
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_types___Overloaded))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_type_type", 1128, CPyStatic_constraints___globals, "mypy.types.Overloaded", cpy_r_r17);
        goto CPyL36;
    }
    cpy_r_r19 = CPY_GET_ATTR(cpy_r_r18, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_type_type", 1128, CPyStatic_constraints___globals);
        goto CPyL36;
    }
CPyL12: ;
    cpy_r_r20 = CPyList_GetItemShortBorrow(cpy_r_r19, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_type_type", 1128, CPyStatic_constraints___globals);
        goto CPyL37;
    }
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_types___CallableType))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_type_type", 1128, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r20);
        goto CPyL37;
    }
    cpy_r_r22 = ((mypy___types___CallableTypeObject *)cpy_r_r21)->_ret_type;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r23 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r23 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_type_type", "ConstraintBuilderVisitor", "direction", 1128, CPyStatic_constraints___globals);
        goto CPyL38;
    }
    CPyTagged_INCREF(cpy_r_r23);
CPyL15: ;
    cpy_r_r24 = CPyDef_constraints___infer_constraints(cpy_r_r16, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r22);
    CPyTagged_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_type_type", 1128, CPyStatic_constraints___globals);
        goto CPyL33;
    }
    return cpy_r_r24;
CPyL17: ;
    cpy_r_r25 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_type_type", "ConstraintBuilderVisitor", "actual", 1129, CPyStatic_constraints___globals);
        goto CPyL33;
    }
CPyL18: ;
    cpy_r_r26 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_r25)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    if (!cpy_r_r29) goto CPyL24;
    cpy_r_r30 = ((mypy___types___TypeTypeObject *)cpy_r_template)->_item;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_type_type", "ConstraintBuilderVisitor", "actual", 1130, CPyStatic_constraints___globals);
        goto CPyL39;
    }
CPyL20: ;
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_types___TypeType))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_type_type", 1130, CPyStatic_constraints___globals, "mypy.types.TypeType", cpy_r_r31);
        goto CPyL39;
    }
    cpy_r_r33 = ((mypy___types___TypeTypeObject *)cpy_r_r32)->_item;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r34 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_type_type", "ConstraintBuilderVisitor", "direction", 1130, CPyStatic_constraints___globals);
        goto CPyL40;
    }
    CPyTagged_INCREF(cpy_r_r34);
CPyL22: ;
    cpy_r_r35 = CPyDef_constraints___infer_constraints(cpy_r_r30, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r33);
    CPyTagged_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_type_type", 1130, CPyStatic_constraints___globals);
        goto CPyL33;
    }
    return cpy_r_r35;
CPyL24: ;
    cpy_r_r36 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_type_type", "ConstraintBuilderVisitor", "actual", 1131, CPyStatic_constraints___globals);
        goto CPyL33;
    }
CPyL25: ;
    cpy_r_r37 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_r36)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    if (!cpy_r_r40) goto CPyL31;
    cpy_r_r41 = ((mypy___types___TypeTypeObject *)cpy_r_template)->_item;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_actual;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypy/constraints.py", "visit_type_type", "ConstraintBuilderVisitor", "actual", 1132, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r42);
CPyL27: ;
    if (likely(Py_TYPE(cpy_r_r42) == CPyType_types___AnyType))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "visit_type_type", 1132, CPyStatic_constraints___globals, "mypy.types.AnyType", cpy_r_r42);
        goto CPyL41;
    }
    cpy_r_r44 = ((mypy___constraints___ConstraintBuilderVisitorObject *)cpy_r_self)->_direction;
    if (unlikely(cpy_r_r44 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/constraints.py", "visit_type_type", "ConstraintBuilderVisitor", "direction", 1132, CPyStatic_constraints___globals);
        goto CPyL42;
    }
    CPyTagged_INCREF(cpy_r_r44);
CPyL29: ;
    cpy_r_r45 = CPyDef_constraints___infer_constraints(cpy_r_r41, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r43);
    CPyTagged_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_type_type", 1132, CPyStatic_constraints___globals);
        goto CPyL33;
    }
    return cpy_r_r45;
CPyL31: ;
    cpy_r_r46 = PyList_New(0);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "visit_type_type", 1134, CPyStatic_constraints___globals);
        goto CPyL33;
    }
    return cpy_r_r46;
CPyL33: ;
    cpy_r_r47 = NULL;
    return cpy_r_r47;
CPyL34: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL33;
CPyL35: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL33;
CPyL36: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL33;
CPyL37: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    goto CPyL33;
CPyL38: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r22);
    goto CPyL33;
CPyL39: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL33;
CPyL40: ;
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r33);
    goto CPyL33;
CPyL41: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL33;
CPyL42: ;
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r43);
    goto CPyL33;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_type_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"template", 0};
    static CPyArg_Parser parser = {"O:visit_type_type", kwlist, 0};
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_template)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___TypeType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_type_type(arg_self, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_type_type", 1124, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___ConstraintBuilderVisitor___visit_type_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_constraints___ConstraintBuilderVisitor___visit_type_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_constraints___ConstraintBuilderVisitor___visit_type_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_constraints___ConstraintBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.constraints.ConstraintBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___ConstraintBuilderVisitor___visit_type_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "visit_type_type__TypeVisitor_glue", -1, CPyStatic_constraints___globals);
    return NULL;
}

CPyTagged CPyDef_constraints___neg_op(CPyTagged cpy_r_op) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    cpy_r_r0 = cpy_r_op == 0;
    if (!cpy_r_r0) goto CPyL2;
    return 2;
CPyL2: ;
    cpy_r_r1 = cpy_r_op == 2;
    if (!cpy_r_r1) goto CPyL4;
    return 0;
CPyL4: ;
    cpy_r_r2 = CPyStatics[1616]; /* 'Invalid operator ' */
    cpy_r_r3 = CPyTagged_Str(cpy_r_op);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "neg_op", 1145, CPyStatic_constraints___globals);
        goto CPyL10;
    }
    cpy_r_r4 = CPyStr_Build(2, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "neg_op", 1145, CPyStatic_constraints___globals);
        goto CPyL10;
    }
    cpy_r_r5 = CPyModule_builtins;
    cpy_r_r6 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "neg_op", 1145, CPyStatic_constraints___globals);
        goto CPyL11;
    }
    PyObject *cpy_r_r8[1] = {cpy_r_r4};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r9, 1, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "neg_op", 1145, CPyStatic_constraints___globals);
        goto CPyL11;
    }
    CPy_DECREF(cpy_r_r4);
    CPy_Raise(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/constraints.py", "neg_op", 1145, CPyStatic_constraints___globals);
        goto CPyL10;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r11 = CPY_INT_TAG;
    return cpy_r_r11;
CPyL11: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL10;
}

PyObject *CPyPy_constraints___neg_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:neg_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    CPyTagged arg_op;
    if (likely(PyLong_Check(obj_op)))
        arg_op = CPyTagged_BorrowFromObject(obj_op);
    else {
        CPy_TypeError("int", obj_op); goto fail;
    }
    CPyTagged retval = CPyDef_constraints___neg_op(arg_op);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "neg_op", 1137, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___find_matching_overload_item(PyObject *cpy_r_overloaded, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_items;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_overloaded, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "find_matching_overload_item", 1150, CPyStatic_constraints___globals);
        goto CPyL12;
    }
CPyL1: ;
    cpy_r_items = cpy_r_r0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL9;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_types___CallableType))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "find_matching_overload_item", 1151, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r6);
        goto CPyL13;
    }
    cpy_r_item = cpy_r_r7;
    cpy_r_r8 = CPyModule_mypy___subtypes;
    cpy_r_r9 = CPyStatics[57]; /* 'is_subtype' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "find_matching_overload_item", 1155, CPyStatic_constraints___globals);
        goto CPyL14;
    }
    cpy_r_r11 = NULL;
    cpy_r_r12 = 2;
    cpy_r_r13 = 2;
    cpy_r_r14 = 2;
    cpy_r_r15 = 2;
    cpy_r_r16 = CPyDef_subtypes___is_callable_compatible(cpy_r_item, cpy_r_template, cpy_r_r10, cpy_r_r11, 1, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "find_matching_overload_item", 1154, CPyStatic_constraints___globals);
        goto CPyL14;
    }
    if (cpy_r_r16) {
        goto CPyL15;
    } else
        goto CPyL16;
CPyL7: ;
    return cpy_r_item;
CPyL8: ;
    cpy_r_r17 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r17;
    goto CPyL2;
CPyL9: ;
    cpy_r_r18 = CPyList_GetItemShort(cpy_r_items, 0);
    CPy_DECREF(cpy_r_items);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "find_matching_overload_item", 1160, CPyStatic_constraints___globals);
        goto CPyL12;
    }
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_types___CallableType))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "find_matching_overload_item", 1160, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r18);
        goto CPyL12;
    }
    return cpy_r_r19;
CPyL12: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL13: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_item);
    goto CPyL12;
CPyL15: ;
    CPy_DECREF(cpy_r_items);
    goto CPyL7;
CPyL16: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL8;
}

PyObject *CPyPy_constraints___find_matching_overload_item(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"overloaded", "template", 0};
    static CPyArg_Parser parser = {"OO:find_matching_overload_item", kwlist, 0};
    PyObject *obj_overloaded;
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_overloaded, &obj_template)) {
        return NULL;
    }
    PyObject *arg_overloaded;
    if (likely(Py_TYPE(obj_overloaded) == CPyType_types___Overloaded))
        arg_overloaded = obj_overloaded;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_overloaded); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___CallableType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___find_matching_overload_item(arg_overloaded, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "find_matching_overload_item", 1148, CPyStatic_constraints___globals);
    return NULL;
}

PyObject *CPyDef_constraints___find_matching_overload_items(PyObject *cpy_r_overloaded, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_res;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_overloaded, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "find_matching_overload_items", 1167, CPyStatic_constraints___globals);
        goto CPyL15;
    }
CPyL1: ;
    cpy_r_items = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "find_matching_overload_items", 1168, CPyStatic_constraints___globals);
        goto CPyL16;
    }
    cpy_r_res = cpy_r_r1;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL10;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_types___CallableType))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "find_matching_overload_items", 1169, CPyStatic_constraints___globals, "mypy.types.CallableType", cpy_r_r7);
        goto CPyL17;
    }
    cpy_r_item = cpy_r_r8;
    cpy_r_r9 = CPyModule_mypy___subtypes;
    cpy_r_r10 = CPyStatics[57]; /* 'is_subtype' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "find_matching_overload_items", 1173, CPyStatic_constraints___globals);
        goto CPyL18;
    }
    cpy_r_r12 = NULL;
    cpy_r_r13 = 2;
    cpy_r_r14 = 2;
    cpy_r_r15 = 2;
    cpy_r_r16 = 2;
    cpy_r_r17 = CPyDef_subtypes___is_callable_compatible(cpy_r_item, cpy_r_template, cpy_r_r11, cpy_r_r12, 1, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "find_matching_overload_items", 1172, CPyStatic_constraints___globals);
        goto CPyL18;
    }
    if (!cpy_r_r17) goto CPyL19;
    cpy_r_r18 = PyList_Append(cpy_r_res, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/constraints.py", "find_matching_overload_items", 1175, CPyStatic_constraints___globals);
        goto CPyL17;
    }
CPyL9: ;
    cpy_r_r20 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r20;
    goto CPyL3;
CPyL10: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_res)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = cpy_r_r23 != 0;
    if (cpy_r_r24) {
        goto CPyL20;
    } else
        goto CPyL21;
CPyL11: ;
    cpy_r_r25 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r26[1] = {cpy_r_items};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_VectorcallMethod(cpy_r_r25, cpy_r_r27, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "find_matching_overload_items", 1179, CPyStatic_constraints___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_items);
    if (likely(PyList_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "find_matching_overload_items", 1179, CPyStatic_constraints___globals, "list", cpy_r_r28);
        goto CPyL15;
    }
    cpy_r_res = cpy_r_r29;
CPyL14: ;
    return cpy_r_res;
CPyL15: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL16: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_res);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_item);
    goto CPyL15;
CPyL19: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL9;
CPyL20: ;
    CPy_DECREF(cpy_r_items);
    goto CPyL14;
CPyL21: ;
    CPy_DECREF(cpy_r_res);
    goto CPyL11;
}

PyObject *CPyPy_constraints___find_matching_overload_items(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"overloaded", "template", 0};
    static CPyArg_Parser parser = {"OO:find_matching_overload_items", kwlist, 0};
    PyObject *obj_overloaded;
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_overloaded, &obj_template)) {
        return NULL;
    }
    PyObject *arg_overloaded;
    if (likely(Py_TYPE(obj_overloaded) == CPyType_types___Overloaded))
        arg_overloaded = obj_overloaded;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_overloaded); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_types___CallableType))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_template); 
        goto fail;
    }
    PyObject *retval = CPyDef_constraints___find_matching_overload_items(arg_overloaded, arg_template);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "find_matching_overload_items", 1163, CPyStatic_constraints___globals);
    return NULL;
}

tuple_T3OOO CPyDef_constraints___find_and_build_constraints_for_unpack(PyObject *cpy_r_mapped, PyObject *cpy_r_template, CPyTagged cpy_r_direction) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_mapped_prefix_len;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_mapped_suffix_len;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_template_prefix_len;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_template_suffix_len;
    CPyTagged cpy_r_r21;
    tuple_T3OOO cpy_r_r22;
    tuple_T3OOO cpy_r_r23;
    cpy_r_r0 = CPyDef_typevartuples___find_unpack_in_list(cpy_r_mapped);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "find_and_build_constraints_for_unpack", 1186, CPyStatic_constraints___globals);
        goto CPyL13;
    }
    cpy_r_mapped_prefix_len = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_mapped_prefix_len != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL4;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_mapped)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    if (likely(PyLong_Check(cpy_r_mapped_prefix_len)))
        cpy_r_r6 = CPyTagged_FromObject(cpy_r_mapped_prefix_len);
    else {
        CPy_TypeError("int", cpy_r_mapped_prefix_len); cpy_r_r6 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "find_and_build_constraints_for_unpack", 1188, CPyStatic_constraints___globals);
        goto CPyL14;
    }
    cpy_r_r7 = CPyTagged_Subtract(cpy_r_r5, cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r6);
    cpy_r_r8 = CPyTagged_Subtract(cpy_r_r7, 2);
    CPyTagged_DECREF(cpy_r_r7);
    cpy_r_r9 = CPyTagged_StealAsObject(cpy_r_r8);
    cpy_r_mapped_suffix_len = cpy_r_r9;
    goto CPyL5;
CPyL4: ;
    cpy_r_r10 = Py_None;
    CPy_INCREF(cpy_r_r10);
    cpy_r_mapped_suffix_len = cpy_r_r10;
CPyL5: ;
    cpy_r_r11 = CPyDef_typevartuples___find_unpack_in_list(cpy_r_template);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "find_and_build_constraints_for_unpack", 1192, CPyStatic_constraints___globals);
        goto CPyL15;
    }
    cpy_r_template_prefix_len = cpy_r_r11;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_template_prefix_len != cpy_r_r12;
    if (cpy_r_r13) {
        goto CPyL9;
    } else
        goto CPyL16;
CPyL7: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r14 = 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/constraints.py", "find_and_build_constraints_for_unpack", 1193, CPyStatic_constraints___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_template)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    if (likely(PyLong_Check(cpy_r_template_prefix_len)))
        cpy_r_r18 = CPyTagged_FromObject(cpy_r_template_prefix_len);
    else {
        CPy_TypeError("int", cpy_r_template_prefix_len); cpy_r_r18 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r18 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "find_and_build_constraints_for_unpack", 1194, CPyStatic_constraints___globals);
        goto CPyL17;
    }
    cpy_r_r19 = CPyTagged_Subtract(cpy_r_r17, cpy_r_r18);
    CPyTagged_DECREF(cpy_r_r18);
    cpy_r_r20 = CPyTagged_Subtract(cpy_r_r19, 2);
    CPyTagged_DECREF(cpy_r_r19);
    cpy_r_template_suffix_len = cpy_r_r20;
    if (likely(PyLong_Check(cpy_r_template_prefix_len)))
        cpy_r_r21 = CPyTagged_FromObject(cpy_r_template_prefix_len);
    else {
        CPy_TypeError("int", cpy_r_template_prefix_len); cpy_r_r21 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_template_prefix_len);
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "find_and_build_constraints_for_unpack", 1201, CPyStatic_constraints___globals);
        goto CPyL18;
    }
    cpy_r_r22 = CPyDef_constraints___build_constraints_for_unpack(cpy_r_mapped, cpy_r_mapped_prefix_len, cpy_r_mapped_suffix_len, cpy_r_template, cpy_r_r21, cpy_r_template_suffix_len, cpy_r_direction);
    CPy_DECREF(cpy_r_mapped_prefix_len);
    CPy_DECREF(cpy_r_mapped_suffix_len);
    CPyTagged_DECREF(cpy_r_r21);
    CPyTagged_DECREF(cpy_r_template_suffix_len);
    if (unlikely(cpy_r_r22.f0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "find_and_build_constraints_for_unpack", 1196, CPyStatic_constraints___globals);
        goto CPyL13;
    }
    return cpy_r_r22;
CPyL13: ;
    tuple_T3OOO __tmp1836 = { NULL, NULL, NULL };
    cpy_r_r23 = __tmp1836;
    return cpy_r_r23;
CPyL14: ;
    CPy_DecRef(cpy_r_mapped_prefix_len);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_mapped_prefix_len);
    CPy_DecRef(cpy_r_mapped_suffix_len);
    goto CPyL13;
CPyL16: ;
    CPy_DECREF(cpy_r_mapped_prefix_len);
    CPy_DECREF(cpy_r_mapped_suffix_len);
    CPy_DECREF(cpy_r_template_prefix_len);
    goto CPyL7;
CPyL17: ;
    CPy_DecRef(cpy_r_mapped_prefix_len);
    CPy_DecRef(cpy_r_mapped_suffix_len);
    CPy_DecRef(cpy_r_template_prefix_len);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_mapped_prefix_len);
    CPy_DecRef(cpy_r_mapped_suffix_len);
    CPyTagged_DecRef(cpy_r_template_suffix_len);
    goto CPyL13;
}

PyObject *CPyPy_constraints___find_and_build_constraints_for_unpack(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"mapped", "template", "direction", 0};
    static CPyArg_Parser parser = {"OOO:find_and_build_constraints_for_unpack", kwlist, 0};
    PyObject *obj_mapped;
    PyObject *obj_template;
    PyObject *obj_direction;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_mapped, &obj_template, &obj_direction)) {
        return NULL;
    }
    PyObject * arg_mapped;
    if (likely(PyTuple_Check(obj_mapped)))
        arg_mapped = obj_mapped;
    else {
        CPy_TypeError("tuple", obj_mapped); 
        goto fail;
    }
    PyObject * arg_template;
    if (likely(PyTuple_Check(obj_template)))
        arg_template = obj_template;
    else {
        CPy_TypeError("tuple", obj_template); 
        goto fail;
    }
    CPyTagged arg_direction;
    if (likely(PyLong_Check(obj_direction)))
        arg_direction = CPyTagged_BorrowFromObject(obj_direction);
    else {
        CPy_TypeError("int", obj_direction); goto fail;
    }
    tuple_T3OOO retval = CPyDef_constraints___find_and_build_constraints_for_unpack(arg_mapped, arg_template, arg_direction);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1837 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp1837);
    PyObject *__tmp1838 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp1838);
    PyObject *__tmp1839 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp1839);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "find_and_build_constraints_for_unpack", 1183, CPyStatic_constraints___globals);
    return NULL;
}

tuple_T3OOO CPyDef_constraints___build_constraints_for_unpack(PyObject *cpy_r_mapped, PyObject *cpy_r_mapped_prefix_len, PyObject *cpy_r_mapped_suffix_len, PyObject *cpy_r_template, CPyTagged cpy_r_template_prefix_len, CPyTagged cpy_r_template_suffix_len, CPyTagged cpy_r_direction) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_split_result;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    tuple_T6OOOOOO cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_mapped_prefix;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_mapped_middle;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_mapped_suffix;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_template_prefix;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_template_middle;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_template_suffix;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_template_unpack;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyTagged cpy_r_r34;
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
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyPtr cpy_r_r55;
    int64_t cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyTagged cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    int64_t cpy_r_r75;
    CPyTagged cpy_r_r76;
    CPyPtr cpy_r_r77;
    int64_t cpy_r_r78;
    CPyTagged cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyTagged cpy_r_r83;
    CPyTagged cpy_r_r84;
    CPyPtr cpy_r_r85;
    int64_t cpy_r_r86;
    CPyTagged cpy_r_r87;
    char cpy_r_r88;
    CPyPtr cpy_r_r89;
    int64_t cpy_r_r90;
    CPyTagged cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_template_arg;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    CPyTagged cpy_r_r99;
    CPyTagged cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    tuple_T3OOO cpy_r_r105;
    tuple_T3OOO cpy_r_r106;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_mapped_prefix_len == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL57;
    CPyTagged_INCREF(cpy_r_template_prefix_len);
    cpy_r_r2 = CPyTagged_StealAsObject(cpy_r_template_prefix_len);
    cpy_r_mapped_prefix_len = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_mapped_suffix_len == cpy_r_r3;
    if (!cpy_r_r4) goto CPyL58;
    CPyTagged_INCREF(cpy_r_template_suffix_len);
    cpy_r_r5 = CPyTagged_StealAsObject(cpy_r_template_suffix_len);
    cpy_r_mapped_suffix_len = cpy_r_r5;
CPyL4: ;
    if (likely(PyLong_Check(cpy_r_mapped_prefix_len)))
        cpy_r_r6 = CPyTagged_FromObject(cpy_r_mapped_prefix_len);
    else {
        CPy_TypeError("int", cpy_r_mapped_prefix_len); cpy_r_r6 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_mapped_prefix_len);
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1223, CPyStatic_constraints___globals);
        goto CPyL59;
    }
    if (likely(PyLong_Check(cpy_r_mapped_suffix_len)))
        cpy_r_r7 = CPyTagged_FromObject(cpy_r_mapped_suffix_len);
    else {
        CPy_TypeError("int", cpy_r_mapped_suffix_len); cpy_r_r7 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_mapped_suffix_len);
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1224, CPyStatic_constraints___globals);
        goto CPyL60;
    }
    cpy_r_r8 = CPyTagged_StealAsObject(cpy_r_r6);
    cpy_r_r9 = CPyTagged_StealAsObject(cpy_r_r7);
    cpy_r_r10 = CPyDef_typevartuples___split_with_mapped_and_template(cpy_r_mapped, cpy_r_r8, cpy_r_r9, cpy_r_template, cpy_r_template_prefix_len, cpy_r_template_suffix_len);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1221, CPyStatic_constraints___globals);
        goto CPyL56;
    }
    cpy_r_split_result = cpy_r_r10;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_split_result != cpy_r_r11;
    if (cpy_r_r12) {
        goto CPyL10;
    } else
        goto CPyL61;
CPyL8: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1229, CPyStatic_constraints___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL10: ;
    PyObject *__tmp1840;
    if (unlikely(!(PyTuple_Check(cpy_r_split_result) && PyTuple_GET_SIZE(cpy_r_split_result) == 6))) {
        __tmp1840 = NULL;
        goto __LL1841;
    }
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_split_result, 0))))
        __tmp1840 = PyTuple_GET_ITEM(cpy_r_split_result, 0);
    else {
        __tmp1840 = NULL;
    }
    if (__tmp1840 == NULL) goto __LL1841;
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_split_result, 1))))
        __tmp1840 = PyTuple_GET_ITEM(cpy_r_split_result, 1);
    else {
        __tmp1840 = NULL;
    }
    if (__tmp1840 == NULL) goto __LL1841;
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_split_result, 2))))
        __tmp1840 = PyTuple_GET_ITEM(cpy_r_split_result, 2);
    else {
        __tmp1840 = NULL;
    }
    if (__tmp1840 == NULL) goto __LL1841;
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_split_result, 3))))
        __tmp1840 = PyTuple_GET_ITEM(cpy_r_split_result, 3);
    else {
        __tmp1840 = NULL;
    }
    if (__tmp1840 == NULL) goto __LL1841;
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_split_result, 4))))
        __tmp1840 = PyTuple_GET_ITEM(cpy_r_split_result, 4);
    else {
        __tmp1840 = NULL;
    }
    if (__tmp1840 == NULL) goto __LL1841;
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_split_result, 5))))
        __tmp1840 = PyTuple_GET_ITEM(cpy_r_split_result, 5);
    else {
        __tmp1840 = NULL;
    }
    if (__tmp1840 == NULL) goto __LL1841;
    __tmp1840 = cpy_r_split_result;
__LL1841: ;
    if (unlikely(__tmp1840 == NULL)) {
        CPy_TypeError("tuple[tuple, tuple, tuple, tuple, tuple, tuple]", cpy_r_split_result); cpy_r_r14 = (tuple_T6OOOOOO) { NULL, NULL, NULL, NULL, NULL, NULL };
    } else {
        PyObject *__tmp1842 = PyTuple_GET_ITEM(cpy_r_split_result, 0);
        CPy_INCREF(__tmp1842);
        PyObject * __tmp1843;
        if (likely(PyTuple_Check(__tmp1842)))
            __tmp1843 = __tmp1842;
        else {
            CPy_TypeError("tuple", __tmp1842); 
            __tmp1843 = NULL;
        }
        cpy_r_r14.f0 = __tmp1843;
        PyObject *__tmp1844 = PyTuple_GET_ITEM(cpy_r_split_result, 1);
        CPy_INCREF(__tmp1844);
        PyObject * __tmp1845;
        if (likely(PyTuple_Check(__tmp1844)))
            __tmp1845 = __tmp1844;
        else {
            CPy_TypeError("tuple", __tmp1844); 
            __tmp1845 = NULL;
        }
        cpy_r_r14.f1 = __tmp1845;
        PyObject *__tmp1846 = PyTuple_GET_ITEM(cpy_r_split_result, 2);
        CPy_INCREF(__tmp1846);
        PyObject * __tmp1847;
        if (likely(PyTuple_Check(__tmp1846)))
            __tmp1847 = __tmp1846;
        else {
            CPy_TypeError("tuple", __tmp1846); 
            __tmp1847 = NULL;
        }
        cpy_r_r14.f2 = __tmp1847;
        PyObject *__tmp1848 = PyTuple_GET_ITEM(cpy_r_split_result, 3);
        CPy_INCREF(__tmp1848);
        PyObject * __tmp1849;
        if (likely(PyTuple_Check(__tmp1848)))
            __tmp1849 = __tmp1848;
        else {
            CPy_TypeError("tuple", __tmp1848); 
            __tmp1849 = NULL;
        }
        cpy_r_r14.f3 = __tmp1849;
        PyObject *__tmp1850 = PyTuple_GET_ITEM(cpy_r_split_result, 4);
        CPy_INCREF(__tmp1850);
        PyObject * __tmp1851;
        if (likely(PyTuple_Check(__tmp1850)))
            __tmp1851 = __tmp1850;
        else {
            CPy_TypeError("tuple", __tmp1850); 
            __tmp1851 = NULL;
        }
        cpy_r_r14.f4 = __tmp1851;
        PyObject *__tmp1852 = PyTuple_GET_ITEM(cpy_r_split_result, 5);
        CPy_INCREF(__tmp1852);
        PyObject * __tmp1853;
        if (likely(PyTuple_Check(__tmp1852)))
            __tmp1853 = __tmp1852;
        else {
            CPy_TypeError("tuple", __tmp1852); 
            __tmp1853 = NULL;
        }
        cpy_r_r14.f5 = __tmp1853;
    }
    CPy_DECREF(cpy_r_split_result);
    if (unlikely(cpy_r_r14.f0 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1237, CPyStatic_constraints___globals);
        goto CPyL56;
    }
    cpy_r_r15 = cpy_r_r14.f0;
    CPy_INCREF(cpy_r_r15);
    cpy_r_mapped_prefix = cpy_r_r15;
    cpy_r_r16 = cpy_r_r14.f1;
    CPy_INCREF(cpy_r_r16);
    cpy_r_mapped_middle = cpy_r_r16;
    cpy_r_r17 = cpy_r_r14.f2;
    CPy_INCREF(cpy_r_r17);
    cpy_r_mapped_suffix = cpy_r_r17;
    cpy_r_r18 = cpy_r_r14.f3;
    CPy_INCREF(cpy_r_r18);
    cpy_r_template_prefix = cpy_r_r18;
    cpy_r_r19 = cpy_r_r14.f4;
    CPy_INCREF(cpy_r_r19);
    cpy_r_template_middle = cpy_r_r19;
    cpy_r_r20 = cpy_r_r14.f5;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r14.f0);
    CPy_DECREF(cpy_r_r14.f1);
    CPy_DECREF(cpy_r_r14.f2);
    CPy_DECREF(cpy_r_r14.f3);
    CPy_DECREF(cpy_r_r14.f4);
    CPy_DECREF(cpy_r_r14.f5);
    cpy_r_template_suffix = cpy_r_r20;
    cpy_r_r21 = CPyDef_typevartuples___extract_unpack(cpy_r_template_middle);
    CPy_DECREF(cpy_r_template_middle);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1239, CPyStatic_constraints___globals);
        goto CPyL62;
    }
    cpy_r_template_unpack = cpy_r_r21;
    cpy_r_r22 = PyList_New(0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1240, CPyStatic_constraints___globals);
        goto CPyL63;
    }
    cpy_r_res = cpy_r_r22;
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_template_unpack != cpy_r_r23;
    if (!cpy_r_r24) goto CPyL64;
    cpy_r_r25 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_template_unpack)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    if (!cpy_r_r28) goto CPyL21;
    CPy_INCREF(cpy_r_template_unpack);
    if (likely(Py_TYPE(cpy_r_template_unpack) == CPyType_types___TypeVarTupleType))
        cpy_r_r29 = cpy_r_template_unpack;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1246, CPyStatic_constraints___globals, "mypy.types.TypeVarTupleType", cpy_r_template_unpack);
        goto CPyL65;
    }
    cpy_r_r30 = PySequence_List(cpy_r_mapped_middle);
    CPy_DECREF(cpy_r_mapped_middle);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1248, CPyStatic_constraints___globals);
        goto CPyL66;
    }
    if (likely(Py_TYPE(cpy_r_template_unpack) == CPyType_types___TypeVarTupleType))
        cpy_r_r31 = cpy_r_template_unpack;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1248, CPyStatic_constraints___globals, "mypy.types.TypeVarTupleType", cpy_r_template_unpack);
        goto CPyL67;
    }
    cpy_r_r32 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_r31)->_tuple_fallback;
    CPy_INCREF(cpy_r_r32);
    CPy_DECREF(cpy_r_template_unpack);
    cpy_r_r33 = CPY_INT_TAG;
    cpy_r_r34 = CPY_INT_TAG;
    cpy_r_r35 = 2;
    cpy_r_r36 = CPyDef_types___TupleType(cpy_r_r30, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1248, CPyStatic_constraints___globals);
        goto CPyL68;
    }
    cpy_r_r37 = CPyDef_constraints___Constraint(cpy_r_r29, cpy_r_direction, cpy_r_r36);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1245, CPyStatic_constraints___globals);
        goto CPyL69;
    }
    cpy_r_r38 = PyList_Append(cpy_r_res, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1244, CPyStatic_constraints___globals);
        goto CPyL69;
    } else
        goto CPyL51;
CPyL21: ;
    cpy_r_r40 = (PyObject *)CPyType_types___Instance;
    cpy_r_r41 = (CPyPtr)&((PyObject *)cpy_r_template_unpack)->ob_type;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 == cpy_r_r40;
    if (!cpy_r_r43) goto CPyL38;
    if (likely(Py_TYPE(cpy_r_template_unpack) == CPyType_types___Instance))
        cpy_r_r44 = cpy_r_template_unpack;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1253, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_template_unpack);
        goto CPyL65;
    }
    cpy_r_r45 = ((mypy___types___InstanceObject *)cpy_r_r44)->_type;
    cpy_r_r46 = CPY_GET_ATTR(cpy_r_r45, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1253, CPyStatic_constraints___globals);
        goto CPyL65;
    }
CPyL24: ;
    cpy_r_r47 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r48 = PyUnicode_Compare(cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r49 = cpy_r_r48 == -1;
    if (!cpy_r_r49) goto CPyL27;
    cpy_r_r50 = PyErr_Occurred();
    cpy_r_r51 = cpy_r_r50 != NULL;
    if (!cpy_r_r51) goto CPyL27;
    cpy_r_r52 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1253, CPyStatic_constraints___globals);
        goto CPyL65;
    }
CPyL27: ;
    cpy_r_r53 = cpy_r_r48 == 0;
    if (!cpy_r_r53) goto CPyL38;
    cpy_r_r54 = 0;
CPyL29: ;
    cpy_r_r55 = (CPyPtr)&((PyVarObject *)cpy_r_mapped_middle)->ob_size;
    cpy_r_r56 = *(int64_t *)cpy_r_r55;
    cpy_r_r57 = cpy_r_r56 << 1;
    cpy_r_r58 = (Py_ssize_t)cpy_r_r54 < (Py_ssize_t)cpy_r_r57;
    if (!cpy_r_r58) goto CPyL64;
    cpy_r_r59 = CPySequenceTuple_GetItem(cpy_r_mapped_middle, cpy_r_r54);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1255, CPyStatic_constraints___globals);
        goto CPyL65;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r59, CPyType_types___Type)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1255, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r59);
        goto CPyL65;
    }
    cpy_r_item = cpy_r_r60;
    if (likely(Py_TYPE(cpy_r_template_unpack) == CPyType_types___Instance))
        cpy_r_r61 = cpy_r_template_unpack;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1256, CPyStatic_constraints___globals, "mypy.types.Instance", cpy_r_template_unpack);
        goto CPyL70;
    }
    cpy_r_r62 = ((mypy___types___InstanceObject *)cpy_r_r61)->_args;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = CPySequenceTuple_GetItem(cpy_r_r62, 0);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1256, CPyStatic_constraints___globals);
        goto CPyL70;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r63, CPyType_types___Type)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1256, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r63);
        goto CPyL70;
    }
    cpy_r_r65 = CPyDef_constraints___infer_constraints(cpy_r_r64, cpy_r_item, cpy_r_direction);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1256, CPyStatic_constraints___globals);
        goto CPyL65;
    }
    cpy_r_r66 = CPyList_Extend(cpy_r_res, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1256, CPyStatic_constraints___globals);
        goto CPyL65;
    } else
        goto CPyL71;
CPyL37: ;
    cpy_r_r67 = cpy_r_r54 + 2;
    cpy_r_r54 = cpy_r_r67;
    goto CPyL29;
CPyL38: ;
    cpy_r_r68 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r69 = (CPyPtr)&((PyObject *)cpy_r_template_unpack)->ob_type;
    cpy_r_r70 = *(PyObject * *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 == cpy_r_r68;
    if (!cpy_r_r71) goto CPyL64;
    if (likely(Py_TYPE(cpy_r_template_unpack) == CPyType_types___TupleType))
        cpy_r_r72 = cpy_r_template_unpack;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1259, CPyStatic_constraints___globals, "mypy.types.TupleType", cpy_r_template_unpack);
        goto CPyL65;
    }
    cpy_r_r73 = ((mypy___types___TupleTypeObject *)cpy_r_r72)->_items;
    cpy_r_r74 = (CPyPtr)&((PyVarObject *)cpy_r_r73)->ob_size;
    cpy_r_r75 = *(int64_t *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 << 1;
    cpy_r_r77 = (CPyPtr)&((PyVarObject *)cpy_r_mapped_middle)->ob_size;
    cpy_r_r78 = *(int64_t *)cpy_r_r77;
    cpy_r_r79 = cpy_r_r78 << 1;
    cpy_r_r80 = cpy_r_r76 == cpy_r_r79;
    if (!cpy_r_r80) goto CPyL64;
    if (likely(Py_TYPE(cpy_r_template_unpack) == CPyType_types___TupleType))
        cpy_r_r81 = cpy_r_template_unpack;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1260, CPyStatic_constraints___globals, "mypy.types.TupleType", cpy_r_template_unpack);
        goto CPyL65;
    }
    cpy_r_r82 = ((mypy___types___TupleTypeObject *)cpy_r_r81)->_items;
    CPy_INCREF(cpy_r_r82);
    CPy_DECREF(cpy_r_template_unpack);
    cpy_r_r83 = 0;
    cpy_r_r84 = 0;
CPyL43: ;
    cpy_r_r85 = (CPyPtr)&((PyVarObject *)cpy_r_r82)->ob_size;
    cpy_r_r86 = *(int64_t *)cpy_r_r85;
    cpy_r_r87 = cpy_r_r86 << 1;
    cpy_r_r88 = (Py_ssize_t)cpy_r_r83 < (Py_ssize_t)cpy_r_r87;
    if (!cpy_r_r88) goto CPyL72;
    cpy_r_r89 = (CPyPtr)&((PyVarObject *)cpy_r_mapped_middle)->ob_size;
    cpy_r_r90 = *(int64_t *)cpy_r_r89;
    cpy_r_r91 = cpy_r_r90 << 1;
    cpy_r_r92 = (Py_ssize_t)cpy_r_r84 < (Py_ssize_t)cpy_r_r91;
    if (!cpy_r_r92) goto CPyL72;
    cpy_r_r93 = CPyList_GetItemUnsafe(cpy_r_r82, cpy_r_r83);
    if (likely(PyObject_TypeCheck(cpy_r_r93, CPyType_types___Type)))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1260, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r93);
        goto CPyL73;
    }
    cpy_r_template_arg = cpy_r_r94;
    cpy_r_r95 = CPySequenceTuple_GetItem(cpy_r_mapped_middle, cpy_r_r84);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1260, CPyStatic_constraints___globals);
        goto CPyL74;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r95, CPyType_types___Type)))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1260, CPyStatic_constraints___globals, "mypy.types.Type", cpy_r_r95);
        goto CPyL74;
    }
    cpy_r_item = cpy_r_r96;
    cpy_r_r97 = CPyDef_constraints___infer_constraints(cpy_r_template_arg, cpy_r_item, cpy_r_direction);
    CPy_DECREF(cpy_r_template_arg);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1261, CPyStatic_constraints___globals);
        goto CPyL73;
    }
    cpy_r_r98 = CPyList_Extend(cpy_r_res, cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1261, CPyStatic_constraints___globals);
        goto CPyL73;
    } else
        goto CPyL75;
CPyL50: ;
    cpy_r_r99 = cpy_r_r83 + 2;
    cpy_r_r83 = cpy_r_r99;
    cpy_r_r100 = cpy_r_r84 + 2;
    cpy_r_r84 = cpy_r_r100;
    goto CPyL43;
CPyL51: ;
    cpy_r_r101 = PyNumber_Add(cpy_r_mapped_prefix, cpy_r_mapped_suffix);
    CPy_DECREF(cpy_r_mapped_prefix);
    CPy_DECREF(cpy_r_mapped_suffix);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1262, CPyStatic_constraints___globals);
        goto CPyL76;
    }
    if (likely(PyTuple_Check(cpy_r_r101)))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1262, CPyStatic_constraints___globals, "tuple", cpy_r_r101);
        goto CPyL76;
    }
    cpy_r_r103 = PyNumber_Add(cpy_r_template_prefix, cpy_r_template_suffix);
    CPy_DECREF(cpy_r_template_prefix);
    CPy_DECREF(cpy_r_template_suffix);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1262, CPyStatic_constraints___globals);
        goto CPyL77;
    }
    if (likely(PyTuple_Check(cpy_r_r103)))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1262, CPyStatic_constraints___globals, "tuple", cpy_r_r103);
        goto CPyL77;
    }
    cpy_r_r105.f0 = cpy_r_res;
    cpy_r_r105.f1 = cpy_r_r102;
    cpy_r_r105.f2 = cpy_r_r104;
    CPy_INCREF(cpy_r_r105.f0);
    CPy_INCREF(cpy_r_r105.f1);
    CPy_INCREF(cpy_r_r105.f2);
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_r102);
    CPy_DECREF(cpy_r_r104);
    return cpy_r_r105;
CPyL56: ;
    tuple_T3OOO __tmp1854 = { NULL, NULL, NULL };
    cpy_r_r106 = __tmp1854;
    return cpy_r_r106;
CPyL57: ;
    CPy_INCREF(cpy_r_mapped_prefix_len);
    goto CPyL2;
CPyL58: ;
    CPy_INCREF(cpy_r_mapped_suffix_len);
    goto CPyL4;
CPyL59: ;
    CPy_DecRef(cpy_r_mapped_suffix_len);
    goto CPyL56;
CPyL60: ;
    CPyTagged_DecRef(cpy_r_r6);
    goto CPyL56;
CPyL61: ;
    CPy_DECREF(cpy_r_split_result);
    goto CPyL8;
CPyL62: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_middle);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_suffix);
    goto CPyL56;
CPyL63: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_middle);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_suffix);
    CPy_DecRef(cpy_r_template_unpack);
    goto CPyL56;
CPyL64: ;
    CPy_DECREF(cpy_r_mapped_middle);
    CPy_DECREF(cpy_r_template_unpack);
    goto CPyL51;
CPyL65: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_middle);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_suffix);
    CPy_DecRef(cpy_r_template_unpack);
    CPy_DecRef(cpy_r_res);
    goto CPyL56;
CPyL66: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_suffix);
    CPy_DecRef(cpy_r_template_unpack);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r29);
    goto CPyL56;
CPyL67: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_suffix);
    CPy_DecRef(cpy_r_template_unpack);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r30);
    goto CPyL56;
CPyL68: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_suffix);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r29);
    goto CPyL56;
CPyL69: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_suffix);
    CPy_DecRef(cpy_r_res);
    goto CPyL56;
CPyL70: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_middle);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_suffix);
    CPy_DecRef(cpy_r_template_unpack);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_item);
    goto CPyL56;
CPyL71: ;
    CPy_DECREF(cpy_r_r66);
    goto CPyL37;
CPyL72: ;
    CPy_DECREF(cpy_r_mapped_middle);
    CPy_DECREF(cpy_r_r82);
    goto CPyL51;
CPyL73: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_middle);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_suffix);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r82);
    goto CPyL56;
CPyL74: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_middle);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_suffix);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_template_arg);
    goto CPyL56;
CPyL75: ;
    CPy_DECREF(cpy_r_r98);
    goto CPyL50;
CPyL76: ;
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_suffix);
    CPy_DecRef(cpy_r_res);
    goto CPyL56;
CPyL77: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r102);
    goto CPyL56;
}

PyObject *CPyPy_constraints___build_constraints_for_unpack(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"mapped", "mapped_prefix_len", "mapped_suffix_len", "template", "template_prefix_len", "template_suffix_len", "direction", 0};
    static CPyArg_Parser parser = {"OOOOOOO:build_constraints_for_unpack", kwlist, 0};
    PyObject *obj_mapped;
    PyObject *obj_mapped_prefix_len;
    PyObject *obj_mapped_suffix_len;
    PyObject *obj_template;
    PyObject *obj_template_prefix_len;
    PyObject *obj_template_suffix_len;
    PyObject *obj_direction;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_mapped, &obj_mapped_prefix_len, &obj_mapped_suffix_len, &obj_template, &obj_template_prefix_len, &obj_template_suffix_len, &obj_direction)) {
        return NULL;
    }
    PyObject * arg_mapped;
    if (likely(PyTuple_Check(obj_mapped)))
        arg_mapped = obj_mapped;
    else {
        CPy_TypeError("tuple", obj_mapped); 
        goto fail;
    }
    PyObject *arg_mapped_prefix_len;
    if (PyLong_Check(obj_mapped_prefix_len))
        arg_mapped_prefix_len = obj_mapped_prefix_len;
    else {
        arg_mapped_prefix_len = NULL;
    }
    if (arg_mapped_prefix_len != NULL) goto __LL1855;
    if (obj_mapped_prefix_len == Py_None)
        arg_mapped_prefix_len = obj_mapped_prefix_len;
    else {
        arg_mapped_prefix_len = NULL;
    }
    if (arg_mapped_prefix_len != NULL) goto __LL1855;
    CPy_TypeError("int or None", obj_mapped_prefix_len); 
    goto fail;
__LL1855: ;
    PyObject *arg_mapped_suffix_len;
    if (PyLong_Check(obj_mapped_suffix_len))
        arg_mapped_suffix_len = obj_mapped_suffix_len;
    else {
        arg_mapped_suffix_len = NULL;
    }
    if (arg_mapped_suffix_len != NULL) goto __LL1856;
    if (obj_mapped_suffix_len == Py_None)
        arg_mapped_suffix_len = obj_mapped_suffix_len;
    else {
        arg_mapped_suffix_len = NULL;
    }
    if (arg_mapped_suffix_len != NULL) goto __LL1856;
    CPy_TypeError("int or None", obj_mapped_suffix_len); 
    goto fail;
__LL1856: ;
    PyObject * arg_template;
    if (likely(PyTuple_Check(obj_template)))
        arg_template = obj_template;
    else {
        CPy_TypeError("tuple", obj_template); 
        goto fail;
    }
    CPyTagged arg_template_prefix_len;
    if (likely(PyLong_Check(obj_template_prefix_len)))
        arg_template_prefix_len = CPyTagged_BorrowFromObject(obj_template_prefix_len);
    else {
        CPy_TypeError("int", obj_template_prefix_len); goto fail;
    }
    CPyTagged arg_template_suffix_len;
    if (likely(PyLong_Check(obj_template_suffix_len)))
        arg_template_suffix_len = CPyTagged_BorrowFromObject(obj_template_suffix_len);
    else {
        CPy_TypeError("int", obj_template_suffix_len); goto fail;
    }
    CPyTagged arg_direction;
    if (likely(PyLong_Check(obj_direction)))
        arg_direction = CPyTagged_BorrowFromObject(obj_direction);
    else {
        CPy_TypeError("int", obj_direction); goto fail;
    }
    tuple_T3OOO retval = CPyDef_constraints___build_constraints_for_unpack(arg_mapped, arg_mapped_prefix_len, arg_mapped_suffix_len, arg_template, arg_template_prefix_len, arg_template_suffix_len, arg_direction);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1857 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp1857);
    PyObject *__tmp1858 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp1858);
    PyObject *__tmp1859 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp1859);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/constraints.py", "build_constraints_for_unpack", 1207, CPyStatic_constraints___globals);
    return NULL;
}

char CPyDef_constraints_____top_level__(void) {
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
    PyObject **cpy_r_r14;
    void *cpy_r_r16;
    void *cpy_r_r18;
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
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    int32_t cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    int32_t cpy_r_r128;
    char cpy_r_r129;
    char cpy_r_r130;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", -1, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_constraints___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 3, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9289]; /* ('TYPE_CHECKING', 'Final', 'Iterable', 'List', 'Sequence',
                                    'cast') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_constraints___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 5, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = (PyObject **)&CPyModule_mypy___subtypes;
    cpy_r_r14 = (PyObject **)&CPyModule_mypy___typeops;
    PyObject **cpy_r_r15[2] = {cpy_r_r13, cpy_r_r14};
    cpy_r_r16 = (void *)&cpy_r_r15;
    int64_t cpy_r_r17[2] = {7, 8};
    cpy_r_r18 = (void *)&cpy_r_r17;
    cpy_r_r19 = CPyStatics[9291]; /* (('mypy.subtypes', 'mypy', 'mypy'),
                                     ('mypy.typeops', 'mypy', 'mypy')) */
    cpy_r_r20 = CPyStatic_constraints___globals;
    cpy_r_r21 = CPyStatics[1617]; /* 'mypy/constraints.py' */
    cpy_r_r22 = CPyStatics[17]; /* '<module>' */
    cpy_r_r23 = CPyImport_ImportMany(cpy_r_r19, cpy_r_r16, cpy_r_r20, cpy_r_r21, cpy_r_r22, cpy_r_r18);
    if (!cpy_r_r23) goto CPyL41;
    cpy_r_r24 = CPyStatics[9292]; /* ('ArgTypeExpander',) */
    cpy_r_r25 = CPyStatics[64]; /* 'mypy.argmap' */
    cpy_r_r26 = CPyStatic_constraints___globals;
    cpy_r_r27 = CPyImport_ImportFromMany(cpy_r_r25, cpy_r_r24, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 9, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    CPyModule_mypy___argmap = cpy_r_r27;
    CPy_INCREF(CPyModule_mypy___argmap);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r28 = CPyStatics[9248]; /* ('erase_typevars',) */
    cpy_r_r29 = CPyStatics[90]; /* 'mypy.erasetype' */
    cpy_r_r30 = CPyStatic_constraints___globals;
    cpy_r_r31 = CPyImport_ImportFromMany(cpy_r_r29, cpy_r_r28, cpy_r_r28, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 10, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    CPyModule_mypy___erasetype = cpy_r_r31;
    CPy_INCREF(CPyModule_mypy___erasetype);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r32 = CPyStatics[9081]; /* ('map_instance_to_supertype',) */
    cpy_r_r33 = CPyStatics[61]; /* 'mypy.maptype' */
    cpy_r_r34 = CPyStatic_constraints___globals;
    cpy_r_r35 = CPyImport_ImportFromMany(cpy_r_r33, cpy_r_r32, cpy_r_r32, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 11, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    CPyModule_mypy___maptype = cpy_r_r35;
    CPy_INCREF(CPyModule_mypy___maptype);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r36 = CPyStatics[9293]; /* ('ARG_OPT', 'ARG_POS', 'CONTRAVARIANT', 'COVARIANT',
                                     'ArgKind') */
    cpy_r_r37 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r38 = CPyStatic_constraints___globals;
    cpy_r_r39 = CPyImport_ImportFromMany(cpy_r_r37, cpy_r_r36, cpy_r_r36, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 12, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    CPyModule_mypy___nodes = cpy_r_r39;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r40 = CPyStatics[9294]; /* ('TUPLE_LIKE_INSTANCE_NAMES', 'AnyType', 'CallableType',
                                     'DeletedType', 'ErasedType', 'Instance', 'LiteralType',
                                     'NoneType', 'Overloaded', 'Parameters', 'ParamSpecType',
                                     'PartialType', 'ProperType', 'TupleType', 'Type',
                                     'TypeAliasType', 'TypedDictType', 'TypeOfAny',
                                     'TypeQuery', 'TypeType', 'TypeVarId', 'TypeVarLikeType',
                                     'TypeVarTupleType', 'TypeVarType', 'TypeVisitor',
                                     'UnboundType', 'UninhabitedType', 'UnionType',
                                     'UnpackType', 'callable_with_ellipsis',
                                     'get_proper_type', 'has_recursive_types',
                                     'has_type_vars', 'is_named_instance',
                                     'split_with_prefix_and_suffix') */
    cpy_r_r41 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r42 = CPyStatic_constraints___globals;
    cpy_r_r43 = CPyImport_ImportFromMany(cpy_r_r41, cpy_r_r40, cpy_r_r40, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 13, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    CPyModule_mypy___types = cpy_r_r43;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r44 = CPyStatics[9295]; /* ('is_union_with_any',) */
    cpy_r_r45 = CPyStatics[1079]; /* 'mypy.types_utils' */
    cpy_r_r46 = CPyStatic_constraints___globals;
    cpy_r_r47 = CPyImport_ImportFromMany(cpy_r_r45, cpy_r_r44, cpy_r_r44, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 50, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    CPyModule_mypy___types_utils = cpy_r_r47;
    CPy_INCREF(CPyModule_mypy___types_utils);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r48 = CPyStatics[9241]; /* ('type_state',) */
    cpy_r_r49 = CPyStatics[596]; /* 'mypy.typestate' */
    cpy_r_r50 = CPyStatic_constraints___globals;
    cpy_r_r51 = CPyImport_ImportFromMany(cpy_r_r49, cpy_r_r48, cpy_r_r48, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 51, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    CPyModule_mypy___typestate = cpy_r_r51;
    CPy_INCREF(CPyModule_mypy___typestate);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r52 = CPyStatics[9296]; /* ('extract_unpack', 'find_unpack_in_list',
                                     'split_with_mapped_and_template') */
    cpy_r_r53 = CPyStatics[52]; /* 'mypy.typevartuples' */
    cpy_r_r54 = CPyStatic_constraints___globals;
    cpy_r_r55 = CPyImport_ImportFromMany(cpy_r_r53, cpy_r_r52, cpy_r_r52, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 52, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    CPyModule_mypy___typevartuples = cpy_r_r55;
    CPy_INCREF(CPyModule_mypy___typevartuples);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r56 = CPyStatic_constraints___globals;
    cpy_r_r57 = CPyStatics[58]; /* 'TYPE_CHECKING' */
    cpy_r_r58 = CPyDict_GetItem(cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 54, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    if (unlikely(!PyBool_Check(cpy_r_r58))) {
        CPy_TypeError("bool", cpy_r_r58); cpy_r_r59 = 2;
    } else
        cpy_r_r59 = cpy_r_r58 == Py_True;
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 54, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    cpy_r_r60 = CPyStatic_constraints___globals;
    cpy_r_r61 = CPyStatics[1626]; /* 'SUBTYPE_OF' */
    cpy_r_r62 = CPyStatics[9015]; /* 0 */
    cpy_r_r63 = CPyDict_SetItem(cpy_r_r60, cpy_r_r61, cpy_r_r62);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 57, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    cpy_r_r65 = CPyStatic_constraints___globals;
    cpy_r_r66 = CPyStatics[916]; /* 'SUPERTYPE_OF' */
    cpy_r_r67 = CPyStatics[9016]; /* 1 */
    cpy_r_r68 = CPyDict_SetItem(cpy_r_r65, cpy_r_r66, cpy_r_r67);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 58, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    cpy_r_r70 = NULL;
    cpy_r_r71 = CPyStatics[917]; /* 'mypy.constraints' */
    cpy_r_r72 = (PyObject *)CPyType_constraints___Constraint_template;
    cpy_r_r73 = CPyType_FromTemplate(cpy_r_r72, cpy_r_r70, cpy_r_r71);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 61, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    cpy_r_r74 = CPyDef_constraints___Constraint_trait_vtable_setup();
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", -1, CPyStatic_constraints___globals);
        goto CPyL42;
    }
    cpy_r_r75 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r76 = CPyStatics[1627]; /* 'type_var' */
    cpy_r_r77 = CPyStatics[1628]; /* 'op' */
    cpy_r_r78 = CPyStatics[1629]; /* 'target' */
    cpy_r_r79 = CPyStatics[1630]; /* 'origin_type_var' */
    cpy_r_r80 = PyTuple_Pack(4, cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 61, CPyStatic_constraints___globals);
        goto CPyL42;
    }
    cpy_r_r81 = PyObject_SetAttr(cpy_r_r73, cpy_r_r75, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 61, CPyStatic_constraints___globals);
        goto CPyL42;
    }
    CPyType_constraints___Constraint = (PyTypeObject *)cpy_r_r73;
    CPy_INCREF(CPyType_constraints___Constraint);
    cpy_r_r83 = CPyStatic_constraints___globals;
    cpy_r_r84 = CPyStatics[1631]; /* 'Constraint' */
    cpy_r_r85 = CPyDict_SetItem(cpy_r_r83, cpy_r_r84, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 61, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    cpy_r_r87 = (PyObject *)CPyType_type_visitor___TypeQuery;
    cpy_r_r88 = (PyObject *)&PyBool_Type;
    cpy_r_r89 = PyObject_GetItem(cpy_r_r87, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 498, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    cpy_r_r90 = PyTuple_Pack(1, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 498, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    cpy_r_r91 = CPyStatics[917]; /* 'mypy.constraints' */
    cpy_r_r92 = (PyObject *)CPyType_constraints___CompleteTypeVisitor_template;
    cpy_r_r93 = CPyType_FromTemplate(cpy_r_r92, cpy_r_r90, cpy_r_r91);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 498, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    cpy_r_r94 = CPyDef_constraints___CompleteTypeVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r94 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", -1, CPyStatic_constraints___globals);
        goto CPyL43;
    }
    cpy_r_r95 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r96 = CPyStatics[1131]; /* 'strategy' */
    cpy_r_r97 = CPyStatics[1132]; /* 'seen_aliases' */
    cpy_r_r98 = CPyStatics[1133]; /* 'skip_alias_target' */
    cpy_r_r99 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r100 = PyTuple_Pack(4, cpy_r_r96, cpy_r_r97, cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 498, CPyStatic_constraints___globals);
        goto CPyL43;
    }
    cpy_r_r101 = PyObject_SetAttr(cpy_r_r93, cpy_r_r95, cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 498, CPyStatic_constraints___globals);
        goto CPyL43;
    }
    CPyType_constraints___CompleteTypeVisitor = (PyTypeObject *)cpy_r_r93;
    CPy_INCREF(CPyType_constraints___CompleteTypeVisitor);
    cpy_r_r103 = CPyStatic_constraints___globals;
    cpy_r_r104 = CPyStatics[1632]; /* 'CompleteTypeVisitor' */
    cpy_r_r105 = CPyDict_SetItem(cpy_r_r103, cpy_r_r104, cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r106 = cpy_r_r105 >= 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 498, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    cpy_r_r107 = (PyObject *)CPyType_type_visitor___TypeVisitor;
    cpy_r_r108 = CPyStatic_constraints___globals;
    cpy_r_r109 = CPyStatics[81]; /* 'List' */
    cpy_r_r110 = CPyDict_GetItem(cpy_r_r108, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 506, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    cpy_r_r111 = (PyObject *)CPyType_constraints___Constraint;
    cpy_r_r112 = PyObject_GetItem(cpy_r_r110, cpy_r_r111);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 506, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    cpy_r_r113 = PyObject_GetItem(cpy_r_r107, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 506, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    cpy_r_r114 = PyTuple_Pack(1, cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 506, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    cpy_r_r115 = CPyStatics[917]; /* 'mypy.constraints' */
    cpy_r_r116 = (PyObject *)CPyType_constraints___ConstraintBuilderVisitor_template;
    cpy_r_r117 = CPyType_FromTemplate(cpy_r_r116, cpy_r_r114, cpy_r_r115);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 506, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    cpy_r_r118 = CPyDef_constraints___ConstraintBuilderVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r118 == 2)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", -1, CPyStatic_constraints___globals);
        goto CPyL44;
    }
    cpy_r_r119 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r120 = CPyStatics[1633]; /* 'actual' */
    cpy_r_r121 = CPyStatics[1634]; /* 'direction' */
    cpy_r_r122 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r123 = PyTuple_Pack(3, cpy_r_r120, cpy_r_r121, cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 506, CPyStatic_constraints___globals);
        goto CPyL44;
    }
    cpy_r_r124 = PyObject_SetAttr(cpy_r_r117, cpy_r_r119, cpy_r_r123);
    CPy_DECREF(cpy_r_r123);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 506, CPyStatic_constraints___globals);
        goto CPyL44;
    }
    CPyType_constraints___ConstraintBuilderVisitor = (PyTypeObject *)cpy_r_r117;
    CPy_INCREF(CPyType_constraints___ConstraintBuilderVisitor);
    cpy_r_r126 = CPyStatic_constraints___globals;
    cpy_r_r127 = CPyStatics[1635]; /* 'ConstraintBuilderVisitor' */
    cpy_r_r128 = CPyDict_SetItem(cpy_r_r126, cpy_r_r127, cpy_r_r117);
    CPy_DECREF(cpy_r_r117);
    cpy_r_r129 = cpy_r_r128 >= 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypy/constraints.py", "<module>", 506, CPyStatic_constraints___globals);
        goto CPyL41;
    }
    return 1;
CPyL41: ;
    cpy_r_r130 = 2;
    return cpy_r_r130;
CPyL42: ;
    CPy_DecRef(cpy_r_r73);
    goto CPyL41;
CPyL43: ;
    CPy_DecRef(cpy_r_r93);
    goto CPyL41;
CPyL44: ;
    CPy_DecRef(cpy_r_r117);
    goto CPyL41;
}
