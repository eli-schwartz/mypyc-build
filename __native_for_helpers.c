#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
for_helpers___ForGenerator_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *for_helpers___ForGenerator_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___ForGenerator(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested);

static PyObject *
for_helpers___ForGenerator_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___ForGenerator) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = for_helpers___ForGenerator_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_for_helpers___ForGenerator_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
for_helpers___ForGenerator_traverse(mypyc___irbuild___for_helpers___ForGeneratorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_index);
    Py_VISIT(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_loop_exit);
    return 0;
}

static int
for_helpers___ForGenerator_clear(mypyc___irbuild___for_helpers___ForGeneratorObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_index);
    Py_CLEAR(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_loop_exit);
    return 0;
}

static void
for_helpers___ForGenerator_dealloc(mypyc___irbuild___for_helpers___ForGeneratorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___ForGenerator_dealloc)
    for_helpers___ForGenerator_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___ForGenerator_vtable[8];
static bool
CPyDef_for_helpers___ForGenerator_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___ForGenerator_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator_____init__,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___add_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___gen_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___load_len,
    };
    memcpy(for_helpers___ForGenerator_vtable, for_helpers___ForGenerator_vtable_scratch, sizeof(for_helpers___ForGenerator_vtable));
    return 1;
}

static PyObject *
for_helpers___ForGenerator_get_builder(mypyc___irbuild___for_helpers___ForGeneratorObject *self, void *closure);
static int
for_helpers___ForGenerator_set_builder(mypyc___irbuild___for_helpers___ForGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForGenerator_get_index(mypyc___irbuild___for_helpers___ForGeneratorObject *self, void *closure);
static int
for_helpers___ForGenerator_set_index(mypyc___irbuild___for_helpers___ForGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForGenerator_get_body_block(mypyc___irbuild___for_helpers___ForGeneratorObject *self, void *closure);
static int
for_helpers___ForGenerator_set_body_block(mypyc___irbuild___for_helpers___ForGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForGenerator_get_line(mypyc___irbuild___for_helpers___ForGeneratorObject *self, void *closure);
static int
for_helpers___ForGenerator_set_line(mypyc___irbuild___for_helpers___ForGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForGenerator_get_loop_exit(mypyc___irbuild___for_helpers___ForGeneratorObject *self, void *closure);
static int
for_helpers___ForGenerator_set_loop_exit(mypyc___irbuild___for_helpers___ForGeneratorObject *self, PyObject *value, void *closure);

static PyGetSetDef for_helpers___ForGenerator_getseters[] = {
    {"builder",
     (getter)for_helpers___ForGenerator_get_builder, (setter)for_helpers___ForGenerator_set_builder,
     NULL, NULL},
    {"index",
     (getter)for_helpers___ForGenerator_get_index, (setter)for_helpers___ForGenerator_set_index,
     NULL, NULL},
    {"body_block",
     (getter)for_helpers___ForGenerator_get_body_block, (setter)for_helpers___ForGenerator_set_body_block,
     NULL, NULL},
    {"line",
     (getter)for_helpers___ForGenerator_get_line, (setter)for_helpers___ForGenerator_set_line,
     NULL, NULL},
    {"loop_exit",
     (getter)for_helpers___ForGenerator_get_loop_exit, (setter)for_helpers___ForGenerator_set_loop_exit,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef for_helpers___ForGenerator_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_for_helpers___ForGenerator_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"need_cleanup",
     (PyCFunction)CPyPy_for_helpers___ForGenerator___need_cleanup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_cleanup",
     (PyCFunction)CPyPy_for_helpers___ForGenerator___add_cleanup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_condition",
     (PyCFunction)CPyPy_for_helpers___ForGenerator___gen_condition,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"begin_body",
     (PyCFunction)CPyPy_for_helpers___ForGenerator___begin_body,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_step",
     (PyCFunction)CPyPy_for_helpers___ForGenerator___gen_step,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_cleanup",
     (PyCFunction)CPyPy_for_helpers___ForGenerator___gen_cleanup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"load_len",
     (PyCFunction)CPyPy_for_helpers___ForGenerator___load_len,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___ForGenerator_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ForGenerator",
    .tp_new = for_helpers___ForGenerator_new,
    .tp_dealloc = (destructor)for_helpers___ForGenerator_dealloc,
    .tp_traverse = (traverseproc)for_helpers___ForGenerator_traverse,
    .tp_clear = (inquiry)for_helpers___ForGenerator_clear,
    .tp_getset = for_helpers___ForGenerator_getseters,
    .tp_methods = for_helpers___ForGenerator_methods,
    .tp_init = for_helpers___ForGenerator_init,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___ForGeneratorObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___ForGenerator_template = &CPyType_for_helpers___ForGenerator_template_;

static PyObject *
for_helpers___ForGenerator_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___ForGeneratorObject *self;
    self = (mypyc___irbuild___for_helpers___ForGeneratorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___ForGenerator_vtable;
    self->_line = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___ForGenerator(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested)
{
    PyObject *self = for_helpers___ForGenerator_setup(CPyType_for_helpers___ForGenerator);
    if (self == NULL)
        return NULL;
    char res = CPyDef_for_helpers___ForGenerator_____init__(self, cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
for_helpers___ForGenerator_get_builder(mypyc___irbuild___for_helpers___ForGeneratorObject *self, void *closure)
{
    if (unlikely(self->_builder == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'builder' of 'ForGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_builder);
    PyObject *retval = self->_builder;
    return retval;
}

static int
for_helpers___ForGenerator_set_builder(mypyc___irbuild___for_helpers___ForGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForGenerator' object attribute 'builder' cannot be deleted");
        return -1;
    }
    if (self->_builder != NULL) {
        CPy_DECREF(self->_builder);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_builder___IRBuilder))
        tmp = value;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_builder = tmp;
    return 0;
}

static PyObject *
for_helpers___ForGenerator_get_index(mypyc___irbuild___for_helpers___ForGeneratorObject *self, void *closure)
{
    if (unlikely(self->_index == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'index' of 'ForGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_index);
    PyObject *retval = self->_index;
    return retval;
}

static int
for_helpers___ForGenerator_set_index(mypyc___irbuild___for_helpers___ForGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForGenerator' object attribute 'index' cannot be deleted");
        return -1;
    }
    if (self->_index != NULL) {
        CPy_DECREF(self->_index);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_nodes___Expression)))
        tmp = value;
    else {
        CPy_TypeError("mypy.nodes.Expression", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_index = tmp;
    return 0;
}

static PyObject *
for_helpers___ForGenerator_get_body_block(mypyc___irbuild___for_helpers___ForGeneratorObject *self, void *closure)
{
    if (unlikely(self->_body_block == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'body_block' of 'ForGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_body_block);
    PyObject *retval = self->_body_block;
    return retval;
}

static int
for_helpers___ForGenerator_set_body_block(mypyc___irbuild___for_helpers___ForGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForGenerator' object attribute 'body_block' cannot be deleted");
        return -1;
    }
    if (self->_body_block != NULL) {
        CPy_DECREF(self->_body_block);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_ops___BasicBlock))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_body_block = tmp;
    return 0;
}

static PyObject *
for_helpers___ForGenerator_get_line(mypyc___irbuild___for_helpers___ForGeneratorObject *self, void *closure)
{
    if (unlikely(self->_line == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'line' of 'ForGenerator' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_line);
    PyObject *retval = CPyTagged_StealAsObject(self->_line);
    return retval;
}

static int
for_helpers___ForGenerator_set_line(mypyc___irbuild___for_helpers___ForGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForGenerator' object attribute 'line' cannot be deleted");
        return -1;
    }
    if (self->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_line);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_line = tmp;
    return 0;
}

static PyObject *
for_helpers___ForGenerator_get_loop_exit(mypyc___irbuild___for_helpers___ForGeneratorObject *self, void *closure)
{
    if (unlikely(self->_loop_exit == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'loop_exit' of 'ForGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_loop_exit);
    PyObject *retval = self->_loop_exit;
    return retval;
}

static int
for_helpers___ForGenerator_set_loop_exit(mypyc___irbuild___for_helpers___ForGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForGenerator' object attribute 'loop_exit' cannot be deleted");
        return -1;
    }
    if (self->_loop_exit != NULL) {
        CPy_DECREF(self->_loop_exit);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_ops___BasicBlock))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_loop_exit = tmp;
    return 0;
}

static PyObject *for_helpers___ForIterable_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___ForIterable(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested);

static PyObject *
for_helpers___ForIterable_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___ForIterable) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = for_helpers___ForIterable_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_for_helpers___ForGenerator_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
for_helpers___ForIterable_traverse(mypyc___irbuild___for_helpers___ForIterableObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_index);
    Py_VISIT(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_loop_exit);
    Py_VISIT(self->_iter_target);
    Py_VISIT(self->_target_type);
    Py_VISIT(self->_next_reg);
    return 0;
}

static int
for_helpers___ForIterable_clear(mypyc___irbuild___for_helpers___ForIterableObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_index);
    Py_CLEAR(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_loop_exit);
    Py_CLEAR(self->_iter_target);
    Py_CLEAR(self->_target_type);
    Py_CLEAR(self->_next_reg);
    return 0;
}

static void
for_helpers___ForIterable_dealloc(mypyc___irbuild___for_helpers___ForIterableObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___ForIterable_dealloc)
    for_helpers___ForIterable_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___ForIterable_vtable[14];
static bool
CPyDef_for_helpers___ForIterable_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___ForIterable_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator_____init__,
        (CPyVTableItem)CPyDef_for_helpers___ForIterable___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___add_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForIterable___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForIterable___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForIterable___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForIterable___gen_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___load_len,
        (CPyVTableItem)CPyDef_for_helpers___ForIterable___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForIterable___init,
        (CPyVTableItem)CPyDef_for_helpers___ForIterable___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForIterable___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForIterable___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForIterable___gen_cleanup,
    };
    memcpy(for_helpers___ForIterable_vtable, for_helpers___ForIterable_vtable_scratch, sizeof(for_helpers___ForIterable_vtable));
    return 1;
}

static PyObject *
for_helpers___ForIterable_get_iter_target(mypyc___irbuild___for_helpers___ForIterableObject *self, void *closure);
static int
for_helpers___ForIterable_set_iter_target(mypyc___irbuild___for_helpers___ForIterableObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForIterable_get_target_type(mypyc___irbuild___for_helpers___ForIterableObject *self, void *closure);
static int
for_helpers___ForIterable_set_target_type(mypyc___irbuild___for_helpers___ForIterableObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForIterable_get_next_reg(mypyc___irbuild___for_helpers___ForIterableObject *self, void *closure);
static int
for_helpers___ForIterable_set_next_reg(mypyc___irbuild___for_helpers___ForIterableObject *self, PyObject *value, void *closure);

static PyGetSetDef for_helpers___ForIterable_getseters[] = {
    {"iter_target",
     (getter)for_helpers___ForIterable_get_iter_target, (setter)for_helpers___ForIterable_set_iter_target,
     NULL, NULL},
    {"target_type",
     (getter)for_helpers___ForIterable_get_target_type, (setter)for_helpers___ForIterable_set_target_type,
     NULL, NULL},
    {"next_reg",
     (getter)for_helpers___ForIterable_get_next_reg, (setter)for_helpers___ForIterable_set_next_reg,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef for_helpers___ForIterable_methods[] = {
    {"need_cleanup",
     (PyCFunction)CPyPy_for_helpers___ForIterable___need_cleanup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"init",
     (PyCFunction)CPyPy_for_helpers___ForIterable___init,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_condition",
     (PyCFunction)CPyPy_for_helpers___ForIterable___gen_condition,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"begin_body",
     (PyCFunction)CPyPy_for_helpers___ForIterable___begin_body,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_step",
     (PyCFunction)CPyPy_for_helpers___ForIterable___gen_step,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_cleanup",
     (PyCFunction)CPyPy_for_helpers___ForIterable___gen_cleanup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___ForIterable_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ForIterable",
    .tp_new = for_helpers___ForIterable_new,
    .tp_dealloc = (destructor)for_helpers___ForIterable_dealloc,
    .tp_traverse = (traverseproc)for_helpers___ForIterable_traverse,
    .tp_clear = (inquiry)for_helpers___ForIterable_clear,
    .tp_getset = for_helpers___ForIterable_getseters,
    .tp_methods = for_helpers___ForIterable_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___ForIterableObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___ForIterable_template = &CPyType_for_helpers___ForIterable_template_;

static PyObject *
for_helpers___ForIterable_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___ForIterableObject *self;
    self = (mypyc___irbuild___for_helpers___ForIterableObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___ForIterable_vtable;
    self->_line = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___ForIterable(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested)
{
    PyObject *self = for_helpers___ForIterable_setup(CPyType_for_helpers___ForIterable);
    if (self == NULL)
        return NULL;
    char res = CPyDef_for_helpers___ForGenerator_____init__(self, cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
for_helpers___ForIterable_get_iter_target(mypyc___irbuild___for_helpers___ForIterableObject *self, void *closure)
{
    if (unlikely(self->_iter_target == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'iter_target' of 'ForIterable' undefined");
        return NULL;
    }
    CPy_INCREF(self->_iter_target);
    PyObject *retval = self->_iter_target;
    return retval;
}

static int
for_helpers___ForIterable_set_iter_target(mypyc___irbuild___for_helpers___ForIterableObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForIterable' object attribute 'iter_target' cannot be deleted");
        return -1;
    }
    if (self->_iter_target != NULL) {
        CPy_DECREF(self->_iter_target);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_ops___Value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10153;
    if (PyObject_TypeCheck(value, CPyType_targets___AssignmentTarget))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10153;
    CPy_TypeError("union[mypyc.ir.ops.Value, mypyc.irbuild.targets.AssignmentTarget]", value); 
    tmp = NULL;
__LL10153: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_iter_target = tmp;
    return 0;
}

static PyObject *
for_helpers___ForIterable_get_target_type(mypyc___irbuild___for_helpers___ForIterableObject *self, void *closure)
{
    if (unlikely(self->_target_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'target_type' of 'ForIterable' undefined");
        return NULL;
    }
    CPy_INCREF(self->_target_type);
    PyObject *retval = self->_target_type;
    return retval;
}

static int
for_helpers___ForIterable_set_target_type(mypyc___irbuild___for_helpers___ForIterableObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForIterable' object attribute 'target_type' cannot be deleted");
        return -1;
    }
    if (self->_target_type != NULL) {
        CPy_DECREF(self->_target_type);
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
    self->_target_type = tmp;
    return 0;
}

static PyObject *
for_helpers___ForIterable_get_next_reg(mypyc___irbuild___for_helpers___ForIterableObject *self, void *closure)
{
    if (unlikely(self->_next_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'next_reg' of 'ForIterable' undefined");
        return NULL;
    }
    CPy_INCREF(self->_next_reg);
    PyObject *retval = self->_next_reg;
    return retval;
}

static int
for_helpers___ForIterable_set_next_reg(mypyc___irbuild___for_helpers___ForIterableObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForIterable' object attribute 'next_reg' cannot be deleted");
        return -1;
    }
    if (self->_next_reg != NULL) {
        CPy_DECREF(self->_next_reg);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_ops___Value)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_next_reg = tmp;
    return 0;
}

static PyObject *for_helpers___ForAsyncIterable_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___ForAsyncIterable(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested);

static PyObject *
for_helpers___ForAsyncIterable_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___ForAsyncIterable) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = for_helpers___ForAsyncIterable_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_for_helpers___ForGenerator_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
for_helpers___ForAsyncIterable_traverse(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_index);
    Py_VISIT(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_loop_exit);
    Py_VISIT(self->_iter_target);
    Py_VISIT(self->_target_type);
    Py_VISIT(self->_stop_reg);
    Py_VISIT(self->_next_reg);
    return 0;
}

static int
for_helpers___ForAsyncIterable_clear(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_index);
    Py_CLEAR(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_loop_exit);
    Py_CLEAR(self->_iter_target);
    Py_CLEAR(self->_target_type);
    Py_CLEAR(self->_stop_reg);
    Py_CLEAR(self->_next_reg);
    return 0;
}

static void
for_helpers___ForAsyncIterable_dealloc(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___ForAsyncIterable_dealloc)
    for_helpers___ForAsyncIterable_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___ForAsyncIterable_vtable[12];
static bool
CPyDef_for_helpers___ForAsyncIterable_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___ForAsyncIterable_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator_____init__,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___add_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForAsyncIterable___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForAsyncIterable___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForAsyncIterable___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___gen_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___load_len,
        (CPyVTableItem)CPyDef_for_helpers___ForAsyncIterable___init,
        (CPyVTableItem)CPyDef_for_helpers___ForAsyncIterable___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForAsyncIterable___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForAsyncIterable___gen_step,
    };
    memcpy(for_helpers___ForAsyncIterable_vtable, for_helpers___ForAsyncIterable_vtable_scratch, sizeof(for_helpers___ForAsyncIterable_vtable));
    return 1;
}

static PyObject *
for_helpers___ForAsyncIterable_get_iter_target(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, void *closure);
static int
for_helpers___ForAsyncIterable_set_iter_target(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForAsyncIterable_get_target_type(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, void *closure);
static int
for_helpers___ForAsyncIterable_set_target_type(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForAsyncIterable_get_stop_reg(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, void *closure);
static int
for_helpers___ForAsyncIterable_set_stop_reg(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForAsyncIterable_get_next_reg(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, void *closure);
static int
for_helpers___ForAsyncIterable_set_next_reg(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, PyObject *value, void *closure);

static PyGetSetDef for_helpers___ForAsyncIterable_getseters[] = {
    {"iter_target",
     (getter)for_helpers___ForAsyncIterable_get_iter_target, (setter)for_helpers___ForAsyncIterable_set_iter_target,
     NULL, NULL},
    {"target_type",
     (getter)for_helpers___ForAsyncIterable_get_target_type, (setter)for_helpers___ForAsyncIterable_set_target_type,
     NULL, NULL},
    {"stop_reg",
     (getter)for_helpers___ForAsyncIterable_get_stop_reg, (setter)for_helpers___ForAsyncIterable_set_stop_reg,
     NULL, NULL},
    {"next_reg",
     (getter)for_helpers___ForAsyncIterable_get_next_reg, (setter)for_helpers___ForAsyncIterable_set_next_reg,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef for_helpers___ForAsyncIterable_methods[] = {
    {"init",
     (PyCFunction)CPyPy_for_helpers___ForAsyncIterable___init,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_condition",
     (PyCFunction)CPyPy_for_helpers___ForAsyncIterable___gen_condition,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"begin_body",
     (PyCFunction)CPyPy_for_helpers___ForAsyncIterable___begin_body,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_step",
     (PyCFunction)CPyPy_for_helpers___ForAsyncIterable___gen_step,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___ForAsyncIterable_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ForAsyncIterable",
    .tp_new = for_helpers___ForAsyncIterable_new,
    .tp_dealloc = (destructor)for_helpers___ForAsyncIterable_dealloc,
    .tp_traverse = (traverseproc)for_helpers___ForAsyncIterable_traverse,
    .tp_clear = (inquiry)for_helpers___ForAsyncIterable_clear,
    .tp_getset = for_helpers___ForAsyncIterable_getseters,
    .tp_methods = for_helpers___ForAsyncIterable_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___ForAsyncIterableObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___ForAsyncIterable_template = &CPyType_for_helpers___ForAsyncIterable_template_;

static PyObject *
for_helpers___ForAsyncIterable_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___ForAsyncIterableObject *self;
    self = (mypyc___irbuild___for_helpers___ForAsyncIterableObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___ForAsyncIterable_vtable;
    self->_line = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___ForAsyncIterable(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested)
{
    PyObject *self = for_helpers___ForAsyncIterable_setup(CPyType_for_helpers___ForAsyncIterable);
    if (self == NULL)
        return NULL;
    char res = CPyDef_for_helpers___ForGenerator_____init__(self, cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
for_helpers___ForAsyncIterable_get_iter_target(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, void *closure)
{
    if (unlikely(self->_iter_target == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'iter_target' of 'ForAsyncIterable' undefined");
        return NULL;
    }
    CPy_INCREF(self->_iter_target);
    PyObject *retval = self->_iter_target;
    return retval;
}

static int
for_helpers___ForAsyncIterable_set_iter_target(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForAsyncIterable' object attribute 'iter_target' cannot be deleted");
        return -1;
    }
    if (self->_iter_target != NULL) {
        CPy_DECREF(self->_iter_target);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_ops___Value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10154;
    if (PyObject_TypeCheck(value, CPyType_targets___AssignmentTarget))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10154;
    CPy_TypeError("union[mypyc.ir.ops.Value, mypyc.irbuild.targets.AssignmentTarget]", value); 
    tmp = NULL;
__LL10154: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_iter_target = tmp;
    return 0;
}

static PyObject *
for_helpers___ForAsyncIterable_get_target_type(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, void *closure)
{
    if (unlikely(self->_target_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'target_type' of 'ForAsyncIterable' undefined");
        return NULL;
    }
    CPy_INCREF(self->_target_type);
    PyObject *retval = self->_target_type;
    return retval;
}

static int
for_helpers___ForAsyncIterable_set_target_type(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForAsyncIterable' object attribute 'target_type' cannot be deleted");
        return -1;
    }
    if (self->_target_type != NULL) {
        CPy_DECREF(self->_target_type);
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
    self->_target_type = tmp;
    return 0;
}

static PyObject *
for_helpers___ForAsyncIterable_get_stop_reg(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, void *closure)
{
    if (unlikely(self->_stop_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'stop_reg' of 'ForAsyncIterable' undefined");
        return NULL;
    }
    CPy_INCREF(self->_stop_reg);
    PyObject *retval = self->_stop_reg;
    return retval;
}

static int
for_helpers___ForAsyncIterable_set_stop_reg(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForAsyncIterable' object attribute 'stop_reg' cannot be deleted");
        return -1;
    }
    if (self->_stop_reg != NULL) {
        CPy_DECREF(self->_stop_reg);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_ops___Register))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.Register", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_stop_reg = tmp;
    return 0;
}

static PyObject *
for_helpers___ForAsyncIterable_get_next_reg(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, void *closure)
{
    if (unlikely(self->_next_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'next_reg' of 'ForAsyncIterable' undefined");
        return NULL;
    }
    CPy_INCREF(self->_next_reg);
    PyObject *retval = self->_next_reg;
    return retval;
}

static int
for_helpers___ForAsyncIterable_set_next_reg(mypyc___irbuild___for_helpers___ForAsyncIterableObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForAsyncIterable' object attribute 'next_reg' cannot be deleted");
        return -1;
    }
    if (self->_next_reg != NULL) {
        CPy_DECREF(self->_next_reg);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_ops___Value)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_next_reg = tmp;
    return 0;
}

static PyObject *for_helpers___ForSequence_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___ForSequence(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested);

static PyObject *
for_helpers___ForSequence_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___ForSequence) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = for_helpers___ForSequence_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_for_helpers___ForGenerator_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
for_helpers___ForSequence_traverse(mypyc___irbuild___for_helpers___ForSequenceObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_index);
    Py_VISIT(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_loop_exit);
    Py_VISIT(self->_expr_target);
    Py_VISIT(self->_index_target);
    Py_VISIT(self->_target_type);
    return 0;
}

static int
for_helpers___ForSequence_clear(mypyc___irbuild___for_helpers___ForSequenceObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_index);
    Py_CLEAR(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_loop_exit);
    Py_CLEAR(self->_expr_target);
    Py_CLEAR(self->_index_target);
    Py_CLEAR(self->_target_type);
    return 0;
}

static void
for_helpers___ForSequence_dealloc(mypyc___irbuild___for_helpers___ForSequenceObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___ForSequence_dealloc)
    for_helpers___ForSequence_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___ForSequence_vtable[12];
static bool
CPyDef_for_helpers___ForSequence_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___ForSequence_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator_____init__,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___add_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForSequence___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForSequence___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForSequence___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___gen_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___load_len,
        (CPyVTableItem)CPyDef_for_helpers___ForSequence___init,
        (CPyVTableItem)CPyDef_for_helpers___ForSequence___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForSequence___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForSequence___gen_step,
    };
    memcpy(for_helpers___ForSequence_vtable, for_helpers___ForSequence_vtable_scratch, sizeof(for_helpers___ForSequence_vtable));
    return 1;
}

static PyObject *
for_helpers___ForSequence_get_reverse(mypyc___irbuild___for_helpers___ForSequenceObject *self, void *closure);
static int
for_helpers___ForSequence_set_reverse(mypyc___irbuild___for_helpers___ForSequenceObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForSequence_get_expr_target(mypyc___irbuild___for_helpers___ForSequenceObject *self, void *closure);
static int
for_helpers___ForSequence_set_expr_target(mypyc___irbuild___for_helpers___ForSequenceObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForSequence_get_index_target(mypyc___irbuild___for_helpers___ForSequenceObject *self, void *closure);
static int
for_helpers___ForSequence_set_index_target(mypyc___irbuild___for_helpers___ForSequenceObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForSequence_get_target_type(mypyc___irbuild___for_helpers___ForSequenceObject *self, void *closure);
static int
for_helpers___ForSequence_set_target_type(mypyc___irbuild___for_helpers___ForSequenceObject *self, PyObject *value, void *closure);

static PyGetSetDef for_helpers___ForSequence_getseters[] = {
    {"reverse",
     (getter)for_helpers___ForSequence_get_reverse, (setter)for_helpers___ForSequence_set_reverse,
     NULL, NULL},
    {"expr_target",
     (getter)for_helpers___ForSequence_get_expr_target, (setter)for_helpers___ForSequence_set_expr_target,
     NULL, NULL},
    {"index_target",
     (getter)for_helpers___ForSequence_get_index_target, (setter)for_helpers___ForSequence_set_index_target,
     NULL, NULL},
    {"target_type",
     (getter)for_helpers___ForSequence_get_target_type, (setter)for_helpers___ForSequence_set_target_type,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef for_helpers___ForSequence_methods[] = {
    {"init",
     (PyCFunction)CPyPy_for_helpers___ForSequence___init,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_condition",
     (PyCFunction)CPyPy_for_helpers___ForSequence___gen_condition,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"begin_body",
     (PyCFunction)CPyPy_for_helpers___ForSequence___begin_body,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_step",
     (PyCFunction)CPyPy_for_helpers___ForSequence___gen_step,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___ForSequence_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ForSequence",
    .tp_new = for_helpers___ForSequence_new,
    .tp_dealloc = (destructor)for_helpers___ForSequence_dealloc,
    .tp_traverse = (traverseproc)for_helpers___ForSequence_traverse,
    .tp_clear = (inquiry)for_helpers___ForSequence_clear,
    .tp_getset = for_helpers___ForSequence_getseters,
    .tp_methods = for_helpers___ForSequence_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___ForSequenceObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___ForSequence_template = &CPyType_for_helpers___ForSequence_template_;

static PyObject *
for_helpers___ForSequence_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___ForSequenceObject *self;
    self = (mypyc___irbuild___for_helpers___ForSequenceObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___ForSequence_vtable;
    self->_line = CPY_INT_TAG;
    self->_reverse = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___ForSequence(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested)
{
    PyObject *self = for_helpers___ForSequence_setup(CPyType_for_helpers___ForSequence);
    if (self == NULL)
        return NULL;
    char res = CPyDef_for_helpers___ForGenerator_____init__(self, cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
for_helpers___ForSequence_get_reverse(mypyc___irbuild___for_helpers___ForSequenceObject *self, void *closure)
{
    if (unlikely(self->_reverse == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'reverse' of 'ForSequence' undefined");
        return NULL;
    }
    PyObject *retval = self->_reverse ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
for_helpers___ForSequence_set_reverse(mypyc___irbuild___for_helpers___ForSequenceObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForSequence' object attribute 'reverse' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_reverse = tmp;
    return 0;
}

static PyObject *
for_helpers___ForSequence_get_expr_target(mypyc___irbuild___for_helpers___ForSequenceObject *self, void *closure)
{
    if (unlikely(self->_expr_target == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'expr_target' of 'ForSequence' undefined");
        return NULL;
    }
    CPy_INCREF(self->_expr_target);
    PyObject *retval = self->_expr_target;
    return retval;
}

static int
for_helpers___ForSequence_set_expr_target(mypyc___irbuild___for_helpers___ForSequenceObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForSequence' object attribute 'expr_target' cannot be deleted");
        return -1;
    }
    if (self->_expr_target != NULL) {
        CPy_DECREF(self->_expr_target);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_ops___Value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10155;
    if (PyObject_TypeCheck(value, CPyType_targets___AssignmentTarget))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10155;
    CPy_TypeError("union[mypyc.ir.ops.Value, mypyc.irbuild.targets.AssignmentTarget]", value); 
    tmp = NULL;
__LL10155: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_expr_target = tmp;
    return 0;
}

static PyObject *
for_helpers___ForSequence_get_index_target(mypyc___irbuild___for_helpers___ForSequenceObject *self, void *closure)
{
    if (unlikely(self->_index_target == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'index_target' of 'ForSequence' undefined");
        return NULL;
    }
    CPy_INCREF(self->_index_target);
    PyObject *retval = self->_index_target;
    return retval;
}

static int
for_helpers___ForSequence_set_index_target(mypyc___irbuild___for_helpers___ForSequenceObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForSequence' object attribute 'index_target' cannot be deleted");
        return -1;
    }
    if (self->_index_target != NULL) {
        CPy_DECREF(self->_index_target);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_ops___Register)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10156;
    if (PyObject_TypeCheck(value, CPyType_targets___AssignmentTarget))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10156;
    CPy_TypeError("union[mypyc.ir.ops.Register, mypyc.irbuild.targets.AssignmentTarget]", value); 
    tmp = NULL;
__LL10156: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_index_target = tmp;
    return 0;
}

static PyObject *
for_helpers___ForSequence_get_target_type(mypyc___irbuild___for_helpers___ForSequenceObject *self, void *closure)
{
    if (unlikely(self->_target_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'target_type' of 'ForSequence' undefined");
        return NULL;
    }
    CPy_INCREF(self->_target_type);
    PyObject *retval = self->_target_type;
    return retval;
}

static int
for_helpers___ForSequence_set_target_type(mypyc___irbuild___for_helpers___ForSequenceObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForSequence' object attribute 'target_type' cannot be deleted");
        return -1;
    }
    if (self->_target_type != NULL) {
        CPy_DECREF(self->_target_type);
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
    self->_target_type = tmp;
    return 0;
}

static PyObject *for_helpers___ForDictionaryCommon_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___ForDictionaryCommon(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested);

static PyObject *
for_helpers___ForDictionaryCommon_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___ForDictionaryCommon) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = for_helpers___ForDictionaryCommon_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_for_helpers___ForGenerator_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
for_helpers___ForDictionaryCommon_traverse(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_index);
    Py_VISIT(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_loop_exit);
    Py_VISIT(self->_target_type);
    Py_VISIT(self->_expr_target);
    Py_VISIT(self->_offset_target);
    Py_VISIT(self->_size);
    Py_VISIT(self->_iter_target);
    Py_VISIT(self->_next_tuple);
    return 0;
}

static int
for_helpers___ForDictionaryCommon_clear(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_index);
    Py_CLEAR(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_loop_exit);
    Py_CLEAR(self->_target_type);
    Py_CLEAR(self->_expr_target);
    Py_CLEAR(self->_offset_target);
    Py_CLEAR(self->_size);
    Py_CLEAR(self->_iter_target);
    Py_CLEAR(self->_next_tuple);
    return 0;
}

static void
for_helpers___ForDictionaryCommon_dealloc(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___ForDictionaryCommon_dealloc)
    for_helpers___ForDictionaryCommon_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___ForDictionaryCommon_vtable[13];
static bool
CPyDef_for_helpers___ForDictionaryCommon_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___ForDictionaryCommon_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator_____init__,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___add_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___load_len,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___init,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_cleanup,
    };
    memcpy(for_helpers___ForDictionaryCommon_vtable, for_helpers___ForDictionaryCommon_vtable_scratch, sizeof(for_helpers___ForDictionaryCommon_vtable));
    return 1;
}

static PyObject *
for_helpers___ForDictionaryCommon_get_target_type(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, void *closure);
static int
for_helpers___ForDictionaryCommon_set_target_type(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForDictionaryCommon_get_expr_target(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, void *closure);
static int
for_helpers___ForDictionaryCommon_set_expr_target(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForDictionaryCommon_get_offset_target(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, void *closure);
static int
for_helpers___ForDictionaryCommon_set_offset_target(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForDictionaryCommon_get_size(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, void *closure);
static int
for_helpers___ForDictionaryCommon_set_size(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForDictionaryCommon_get_iter_target(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, void *closure);
static int
for_helpers___ForDictionaryCommon_set_iter_target(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForDictionaryCommon_get_next_tuple(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, void *closure);
static int
for_helpers___ForDictionaryCommon_set_next_tuple(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, PyObject *value, void *closure);

static PyGetSetDef for_helpers___ForDictionaryCommon_getseters[] = {
    {"target_type",
     (getter)for_helpers___ForDictionaryCommon_get_target_type, (setter)for_helpers___ForDictionaryCommon_set_target_type,
     NULL, NULL},
    {"expr_target",
     (getter)for_helpers___ForDictionaryCommon_get_expr_target, (setter)for_helpers___ForDictionaryCommon_set_expr_target,
     NULL, NULL},
    {"offset_target",
     (getter)for_helpers___ForDictionaryCommon_get_offset_target, (setter)for_helpers___ForDictionaryCommon_set_offset_target,
     NULL, NULL},
    {"size",
     (getter)for_helpers___ForDictionaryCommon_get_size, (setter)for_helpers___ForDictionaryCommon_set_size,
     NULL, NULL},
    {"iter_target",
     (getter)for_helpers___ForDictionaryCommon_get_iter_target, (setter)for_helpers___ForDictionaryCommon_set_iter_target,
     NULL, NULL},
    {"next_tuple",
     (getter)for_helpers___ForDictionaryCommon_get_next_tuple, (setter)for_helpers___ForDictionaryCommon_set_next_tuple,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef for_helpers___ForDictionaryCommon_methods[] = {
    {"need_cleanup",
     (PyCFunction)CPyPy_for_helpers___ForDictionaryCommon___need_cleanup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"init",
     (PyCFunction)CPyPy_for_helpers___ForDictionaryCommon___init,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_condition",
     (PyCFunction)CPyPy_for_helpers___ForDictionaryCommon___gen_condition,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_step",
     (PyCFunction)CPyPy_for_helpers___ForDictionaryCommon___gen_step,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_cleanup",
     (PyCFunction)CPyPy_for_helpers___ForDictionaryCommon___gen_cleanup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___ForDictionaryCommon_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ForDictionaryCommon",
    .tp_new = for_helpers___ForDictionaryCommon_new,
    .tp_dealloc = (destructor)for_helpers___ForDictionaryCommon_dealloc,
    .tp_traverse = (traverseproc)for_helpers___ForDictionaryCommon_traverse,
    .tp_clear = (inquiry)for_helpers___ForDictionaryCommon_clear,
    .tp_getset = for_helpers___ForDictionaryCommon_getseters,
    .tp_methods = for_helpers___ForDictionaryCommon_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___ForDictionaryCommonObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___ForDictionaryCommon_template = &CPyType_for_helpers___ForDictionaryCommon_template_;

static PyObject *
for_helpers___ForDictionaryCommon_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self;
    self = (mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___ForDictionaryCommon_vtable;
    self->_line = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___ForDictionaryCommon(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested)
{
    PyObject *self = for_helpers___ForDictionaryCommon_setup(CPyType_for_helpers___ForDictionaryCommon);
    if (self == NULL)
        return NULL;
    char res = CPyDef_for_helpers___ForGenerator_____init__(self, cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
for_helpers___ForDictionaryCommon_get_target_type(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, void *closure)
{
    if (unlikely(self->_target_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'target_type' of 'ForDictionaryCommon' undefined");
        return NULL;
    }
    CPy_INCREF(self->_target_type);
    PyObject *retval = self->_target_type;
    return retval;
}

static int
for_helpers___ForDictionaryCommon_set_target_type(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForDictionaryCommon' object attribute 'target_type' cannot be deleted");
        return -1;
    }
    if (self->_target_type != NULL) {
        CPy_DECREF(self->_target_type);
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
    self->_target_type = tmp;
    return 0;
}

static PyObject *
for_helpers___ForDictionaryCommon_get_expr_target(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, void *closure)
{
    if (unlikely(self->_expr_target == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'expr_target' of 'ForDictionaryCommon' undefined");
        return NULL;
    }
    CPy_INCREF(self->_expr_target);
    PyObject *retval = self->_expr_target;
    return retval;
}

static int
for_helpers___ForDictionaryCommon_set_expr_target(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForDictionaryCommon' object attribute 'expr_target' cannot be deleted");
        return -1;
    }
    if (self->_expr_target != NULL) {
        CPy_DECREF(self->_expr_target);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_ops___Value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10157;
    if (PyObject_TypeCheck(value, CPyType_targets___AssignmentTarget))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10157;
    CPy_TypeError("union[mypyc.ir.ops.Value, mypyc.irbuild.targets.AssignmentTarget]", value); 
    tmp = NULL;
__LL10157: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_expr_target = tmp;
    return 0;
}

static PyObject *
for_helpers___ForDictionaryCommon_get_offset_target(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, void *closure)
{
    if (unlikely(self->_offset_target == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'offset_target' of 'ForDictionaryCommon' undefined");
        return NULL;
    }
    CPy_INCREF(self->_offset_target);
    PyObject *retval = self->_offset_target;
    return retval;
}

static int
for_helpers___ForDictionaryCommon_set_offset_target(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForDictionaryCommon' object attribute 'offset_target' cannot be deleted");
        return -1;
    }
    if (self->_offset_target != NULL) {
        CPy_DECREF(self->_offset_target);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_ops___Register)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10158;
    if (PyObject_TypeCheck(value, CPyType_targets___AssignmentTarget))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10158;
    CPy_TypeError("union[mypyc.ir.ops.Register, mypyc.irbuild.targets.AssignmentTarget]", value); 
    tmp = NULL;
__LL10158: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_offset_target = tmp;
    return 0;
}

static PyObject *
for_helpers___ForDictionaryCommon_get_size(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, void *closure)
{
    if (unlikely(self->_size == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'size' of 'ForDictionaryCommon' undefined");
        return NULL;
    }
    CPy_INCREF(self->_size);
    PyObject *retval = self->_size;
    return retval;
}

static int
for_helpers___ForDictionaryCommon_set_size(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForDictionaryCommon' object attribute 'size' cannot be deleted");
        return -1;
    }
    if (self->_size != NULL) {
        CPy_DECREF(self->_size);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_ops___Value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10159;
    if (PyObject_TypeCheck(value, CPyType_targets___AssignmentTarget))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10159;
    CPy_TypeError("union[mypyc.ir.ops.Value, mypyc.irbuild.targets.AssignmentTarget]", value); 
    tmp = NULL;
__LL10159: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_size = tmp;
    return 0;
}

static PyObject *
for_helpers___ForDictionaryCommon_get_iter_target(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, void *closure)
{
    if (unlikely(self->_iter_target == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'iter_target' of 'ForDictionaryCommon' undefined");
        return NULL;
    }
    CPy_INCREF(self->_iter_target);
    PyObject *retval = self->_iter_target;
    return retval;
}

static int
for_helpers___ForDictionaryCommon_set_iter_target(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForDictionaryCommon' object attribute 'iter_target' cannot be deleted");
        return -1;
    }
    if (self->_iter_target != NULL) {
        CPy_DECREF(self->_iter_target);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_ops___Value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10160;
    if (PyObject_TypeCheck(value, CPyType_targets___AssignmentTarget))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10160;
    CPy_TypeError("union[mypyc.ir.ops.Value, mypyc.irbuild.targets.AssignmentTarget]", value); 
    tmp = NULL;
__LL10160: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_iter_target = tmp;
    return 0;
}

static PyObject *
for_helpers___ForDictionaryCommon_get_next_tuple(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, void *closure)
{
    if (unlikely(self->_next_tuple == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'next_tuple' of 'ForDictionaryCommon' undefined");
        return NULL;
    }
    CPy_INCREF(self->_next_tuple);
    PyObject *retval = self->_next_tuple;
    return retval;
}

static int
for_helpers___ForDictionaryCommon_set_next_tuple(mypyc___irbuild___for_helpers___ForDictionaryCommonObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForDictionaryCommon' object attribute 'next_tuple' cannot be deleted");
        return -1;
    }
    if (self->_next_tuple != NULL) {
        CPy_DECREF(self->_next_tuple);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_ops___Value)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_next_tuple = tmp;
    return 0;
}

static PyObject *for_helpers___ForDictionaryKeys_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___ForDictionaryKeys(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested);

static PyObject *
for_helpers___ForDictionaryKeys_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___ForDictionaryKeys) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = for_helpers___ForDictionaryKeys_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_for_helpers___ForGenerator_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
for_helpers___ForDictionaryKeys_traverse(mypyc___irbuild___for_helpers___ForDictionaryKeysObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_index);
    Py_VISIT(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_loop_exit);
    Py_VISIT(self->_target_type);
    Py_VISIT(self->_expr_target);
    Py_VISIT(self->_offset_target);
    Py_VISIT(self->_size);
    Py_VISIT(self->_iter_target);
    Py_VISIT(self->_next_tuple);
    return 0;
}

static int
for_helpers___ForDictionaryKeys_clear(mypyc___irbuild___for_helpers___ForDictionaryKeysObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_index);
    Py_CLEAR(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_loop_exit);
    Py_CLEAR(self->_target_type);
    Py_CLEAR(self->_expr_target);
    Py_CLEAR(self->_offset_target);
    Py_CLEAR(self->_size);
    Py_CLEAR(self->_iter_target);
    Py_CLEAR(self->_next_tuple);
    return 0;
}

static void
for_helpers___ForDictionaryKeys_dealloc(mypyc___irbuild___for_helpers___ForDictionaryKeysObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___ForDictionaryKeys_dealloc)
    for_helpers___ForDictionaryKeys_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___ForDictionaryKeys_vtable[14];
static bool
CPyDef_for_helpers___ForDictionaryKeys_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___ForDictionaryKeys_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator_____init__,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___add_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryKeys___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___load_len,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___init,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryKeys___begin_body,
    };
    memcpy(for_helpers___ForDictionaryKeys_vtable, for_helpers___ForDictionaryKeys_vtable_scratch, sizeof(for_helpers___ForDictionaryKeys_vtable));
    return 1;
}


static PyGetSetDef for_helpers___ForDictionaryKeys_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef for_helpers___ForDictionaryKeys_methods[] = {
    {"begin_body",
     (PyCFunction)CPyPy_for_helpers___ForDictionaryKeys___begin_body,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___ForDictionaryKeys_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ForDictionaryKeys",
    .tp_new = for_helpers___ForDictionaryKeys_new,
    .tp_dealloc = (destructor)for_helpers___ForDictionaryKeys_dealloc,
    .tp_traverse = (traverseproc)for_helpers___ForDictionaryKeys_traverse,
    .tp_clear = (inquiry)for_helpers___ForDictionaryKeys_clear,
    .tp_getset = for_helpers___ForDictionaryKeys_getseters,
    .tp_methods = for_helpers___ForDictionaryKeys_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___ForDictionaryKeysObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___ForDictionaryKeys_template = &CPyType_for_helpers___ForDictionaryKeys_template_;

static PyObject *
for_helpers___ForDictionaryKeys_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___ForDictionaryKeysObject *self;
    self = (mypyc___irbuild___for_helpers___ForDictionaryKeysObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___ForDictionaryKeys_vtable;
    self->_line = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___ForDictionaryKeys(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested)
{
    PyObject *self = for_helpers___ForDictionaryKeys_setup(CPyType_for_helpers___ForDictionaryKeys);
    if (self == NULL)
        return NULL;
    char res = CPyDef_for_helpers___ForGenerator_____init__(self, cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


static PyObject *for_helpers___ForDictionaryValues_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___ForDictionaryValues(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested);

static PyObject *
for_helpers___ForDictionaryValues_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___ForDictionaryValues) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = for_helpers___ForDictionaryValues_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_for_helpers___ForGenerator_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
for_helpers___ForDictionaryValues_traverse(mypyc___irbuild___for_helpers___ForDictionaryValuesObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_index);
    Py_VISIT(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_loop_exit);
    Py_VISIT(self->_target_type);
    Py_VISIT(self->_expr_target);
    Py_VISIT(self->_offset_target);
    Py_VISIT(self->_size);
    Py_VISIT(self->_iter_target);
    Py_VISIT(self->_next_tuple);
    return 0;
}

static int
for_helpers___ForDictionaryValues_clear(mypyc___irbuild___for_helpers___ForDictionaryValuesObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_index);
    Py_CLEAR(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_loop_exit);
    Py_CLEAR(self->_target_type);
    Py_CLEAR(self->_expr_target);
    Py_CLEAR(self->_offset_target);
    Py_CLEAR(self->_size);
    Py_CLEAR(self->_iter_target);
    Py_CLEAR(self->_next_tuple);
    return 0;
}

static void
for_helpers___ForDictionaryValues_dealloc(mypyc___irbuild___for_helpers___ForDictionaryValuesObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___ForDictionaryValues_dealloc)
    for_helpers___ForDictionaryValues_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___ForDictionaryValues_vtable[14];
static bool
CPyDef_for_helpers___ForDictionaryValues_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___ForDictionaryValues_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator_____init__,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___add_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryValues___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___load_len,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___init,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryValues___begin_body,
    };
    memcpy(for_helpers___ForDictionaryValues_vtable, for_helpers___ForDictionaryValues_vtable_scratch, sizeof(for_helpers___ForDictionaryValues_vtable));
    return 1;
}


static PyGetSetDef for_helpers___ForDictionaryValues_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef for_helpers___ForDictionaryValues_methods[] = {
    {"begin_body",
     (PyCFunction)CPyPy_for_helpers___ForDictionaryValues___begin_body,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___ForDictionaryValues_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ForDictionaryValues",
    .tp_new = for_helpers___ForDictionaryValues_new,
    .tp_dealloc = (destructor)for_helpers___ForDictionaryValues_dealloc,
    .tp_traverse = (traverseproc)for_helpers___ForDictionaryValues_traverse,
    .tp_clear = (inquiry)for_helpers___ForDictionaryValues_clear,
    .tp_getset = for_helpers___ForDictionaryValues_getseters,
    .tp_methods = for_helpers___ForDictionaryValues_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___ForDictionaryValuesObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___ForDictionaryValues_template = &CPyType_for_helpers___ForDictionaryValues_template_;

static PyObject *
for_helpers___ForDictionaryValues_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___ForDictionaryValuesObject *self;
    self = (mypyc___irbuild___for_helpers___ForDictionaryValuesObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___ForDictionaryValues_vtable;
    self->_line = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___ForDictionaryValues(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested)
{
    PyObject *self = for_helpers___ForDictionaryValues_setup(CPyType_for_helpers___ForDictionaryValues);
    if (self == NULL)
        return NULL;
    char res = CPyDef_for_helpers___ForGenerator_____init__(self, cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


static PyObject *for_helpers___ForDictionaryItems_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___ForDictionaryItems(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested);

static PyObject *
for_helpers___ForDictionaryItems_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___ForDictionaryItems) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = for_helpers___ForDictionaryItems_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_for_helpers___ForGenerator_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
for_helpers___ForDictionaryItems_traverse(mypyc___irbuild___for_helpers___ForDictionaryItemsObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_index);
    Py_VISIT(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_loop_exit);
    Py_VISIT(self->_target_type);
    Py_VISIT(self->_expr_target);
    Py_VISIT(self->_offset_target);
    Py_VISIT(self->_size);
    Py_VISIT(self->_iter_target);
    Py_VISIT(self->_next_tuple);
    return 0;
}

static int
for_helpers___ForDictionaryItems_clear(mypyc___irbuild___for_helpers___ForDictionaryItemsObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_index);
    Py_CLEAR(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_loop_exit);
    Py_CLEAR(self->_target_type);
    Py_CLEAR(self->_expr_target);
    Py_CLEAR(self->_offset_target);
    Py_CLEAR(self->_size);
    Py_CLEAR(self->_iter_target);
    Py_CLEAR(self->_next_tuple);
    return 0;
}

static void
for_helpers___ForDictionaryItems_dealloc(mypyc___irbuild___for_helpers___ForDictionaryItemsObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___ForDictionaryItems_dealloc)
    for_helpers___ForDictionaryItems_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___ForDictionaryItems_vtable[14];
static bool
CPyDef_for_helpers___ForDictionaryItems_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___ForDictionaryItems_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator_____init__,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___add_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryItems___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___load_len,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___init,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryCommon___gen_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForDictionaryItems___begin_body,
    };
    memcpy(for_helpers___ForDictionaryItems_vtable, for_helpers___ForDictionaryItems_vtable_scratch, sizeof(for_helpers___ForDictionaryItems_vtable));
    return 1;
}


static PyGetSetDef for_helpers___ForDictionaryItems_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef for_helpers___ForDictionaryItems_methods[] = {
    {"begin_body",
     (PyCFunction)CPyPy_for_helpers___ForDictionaryItems___begin_body,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___ForDictionaryItems_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ForDictionaryItems",
    .tp_new = for_helpers___ForDictionaryItems_new,
    .tp_dealloc = (destructor)for_helpers___ForDictionaryItems_dealloc,
    .tp_traverse = (traverseproc)for_helpers___ForDictionaryItems_traverse,
    .tp_clear = (inquiry)for_helpers___ForDictionaryItems_clear,
    .tp_getset = for_helpers___ForDictionaryItems_getseters,
    .tp_methods = for_helpers___ForDictionaryItems_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___ForDictionaryItemsObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___ForDictionaryItems_template = &CPyType_for_helpers___ForDictionaryItems_template_;

static PyObject *
for_helpers___ForDictionaryItems_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___ForDictionaryItemsObject *self;
    self = (mypyc___irbuild___for_helpers___ForDictionaryItemsObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___ForDictionaryItems_vtable;
    self->_line = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___ForDictionaryItems(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested)
{
    PyObject *self = for_helpers___ForDictionaryItems_setup(CPyType_for_helpers___ForDictionaryItems);
    if (self == NULL)
        return NULL;
    char res = CPyDef_for_helpers___ForGenerator_____init__(self, cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


static PyObject *for_helpers___ForRange_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___ForRange(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested);

static PyObject *
for_helpers___ForRange_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___ForRange) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = for_helpers___ForRange_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_for_helpers___ForGenerator_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
for_helpers___ForRange_traverse(mypyc___irbuild___for_helpers___ForRangeObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_index);
    Py_VISIT(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_loop_exit);
    Py_VISIT(self->_start_reg);
    Py_VISIT(self->_end_reg);
    if (CPyTagged_CheckLong(self->_step)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_step));
    }
    Py_VISIT(self->_end_target);
    Py_VISIT(self->_index_reg);
    Py_VISIT(self->_index_target);
    return 0;
}

static int
for_helpers___ForRange_clear(mypyc___irbuild___for_helpers___ForRangeObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_index);
    Py_CLEAR(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_loop_exit);
    Py_CLEAR(self->_start_reg);
    Py_CLEAR(self->_end_reg);
    if (CPyTagged_CheckLong(self->_step)) {
        CPyTagged __tmp = self->_step;
        self->_step = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_end_target);
    Py_CLEAR(self->_index_reg);
    Py_CLEAR(self->_index_target);
    return 0;
}

static void
for_helpers___ForRange_dealloc(mypyc___irbuild___for_helpers___ForRangeObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___ForRange_dealloc)
    for_helpers___ForRange_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___ForRange_vtable[11];
static bool
CPyDef_for_helpers___ForRange_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___ForRange_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator_____init__,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___add_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForRange___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForRange___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___gen_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___load_len,
        (CPyVTableItem)CPyDef_for_helpers___ForRange___init,
        (CPyVTableItem)CPyDef_for_helpers___ForRange___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForRange___gen_step,
    };
    memcpy(for_helpers___ForRange_vtable, for_helpers___ForRange_vtable_scratch, sizeof(for_helpers___ForRange_vtable));
    return 1;
}

static PyObject *
for_helpers___ForRange_get_start_reg(mypyc___irbuild___for_helpers___ForRangeObject *self, void *closure);
static int
for_helpers___ForRange_set_start_reg(mypyc___irbuild___for_helpers___ForRangeObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForRange_get_end_reg(mypyc___irbuild___for_helpers___ForRangeObject *self, void *closure);
static int
for_helpers___ForRange_set_end_reg(mypyc___irbuild___for_helpers___ForRangeObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForRange_get_step(mypyc___irbuild___for_helpers___ForRangeObject *self, void *closure);
static int
for_helpers___ForRange_set_step(mypyc___irbuild___for_helpers___ForRangeObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForRange_get_end_target(mypyc___irbuild___for_helpers___ForRangeObject *self, void *closure);
static int
for_helpers___ForRange_set_end_target(mypyc___irbuild___for_helpers___ForRangeObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForRange_get_index_reg(mypyc___irbuild___for_helpers___ForRangeObject *self, void *closure);
static int
for_helpers___ForRange_set_index_reg(mypyc___irbuild___for_helpers___ForRangeObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForRange_get_index_target(mypyc___irbuild___for_helpers___ForRangeObject *self, void *closure);
static int
for_helpers___ForRange_set_index_target(mypyc___irbuild___for_helpers___ForRangeObject *self, PyObject *value, void *closure);

static PyGetSetDef for_helpers___ForRange_getseters[] = {
    {"start_reg",
     (getter)for_helpers___ForRange_get_start_reg, (setter)for_helpers___ForRange_set_start_reg,
     NULL, NULL},
    {"end_reg",
     (getter)for_helpers___ForRange_get_end_reg, (setter)for_helpers___ForRange_set_end_reg,
     NULL, NULL},
    {"step",
     (getter)for_helpers___ForRange_get_step, (setter)for_helpers___ForRange_set_step,
     NULL, NULL},
    {"end_target",
     (getter)for_helpers___ForRange_get_end_target, (setter)for_helpers___ForRange_set_end_target,
     NULL, NULL},
    {"index_reg",
     (getter)for_helpers___ForRange_get_index_reg, (setter)for_helpers___ForRange_set_index_reg,
     NULL, NULL},
    {"index_target",
     (getter)for_helpers___ForRange_get_index_target, (setter)for_helpers___ForRange_set_index_target,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef for_helpers___ForRange_methods[] = {
    {"init",
     (PyCFunction)CPyPy_for_helpers___ForRange___init,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_condition",
     (PyCFunction)CPyPy_for_helpers___ForRange___gen_condition,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_step",
     (PyCFunction)CPyPy_for_helpers___ForRange___gen_step,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___ForRange_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ForRange",
    .tp_new = for_helpers___ForRange_new,
    .tp_dealloc = (destructor)for_helpers___ForRange_dealloc,
    .tp_traverse = (traverseproc)for_helpers___ForRange_traverse,
    .tp_clear = (inquiry)for_helpers___ForRange_clear,
    .tp_getset = for_helpers___ForRange_getseters,
    .tp_methods = for_helpers___ForRange_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___ForRangeObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___ForRange_template = &CPyType_for_helpers___ForRange_template_;

static PyObject *
for_helpers___ForRange_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___ForRangeObject *self;
    self = (mypyc___irbuild___for_helpers___ForRangeObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___ForRange_vtable;
    self->_line = CPY_INT_TAG;
    self->_step = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___ForRange(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested)
{
    PyObject *self = for_helpers___ForRange_setup(CPyType_for_helpers___ForRange);
    if (self == NULL)
        return NULL;
    char res = CPyDef_for_helpers___ForGenerator_____init__(self, cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
for_helpers___ForRange_get_start_reg(mypyc___irbuild___for_helpers___ForRangeObject *self, void *closure)
{
    if (unlikely(self->_start_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'start_reg' of 'ForRange' undefined");
        return NULL;
    }
    CPy_INCREF(self->_start_reg);
    PyObject *retval = self->_start_reg;
    return retval;
}

static int
for_helpers___ForRange_set_start_reg(mypyc___irbuild___for_helpers___ForRangeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForRange' object attribute 'start_reg' cannot be deleted");
        return -1;
    }
    if (self->_start_reg != NULL) {
        CPy_DECREF(self->_start_reg);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_ops___Value)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_start_reg = tmp;
    return 0;
}

static PyObject *
for_helpers___ForRange_get_end_reg(mypyc___irbuild___for_helpers___ForRangeObject *self, void *closure)
{
    if (unlikely(self->_end_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'end_reg' of 'ForRange' undefined");
        return NULL;
    }
    CPy_INCREF(self->_end_reg);
    PyObject *retval = self->_end_reg;
    return retval;
}

static int
for_helpers___ForRange_set_end_reg(mypyc___irbuild___for_helpers___ForRangeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForRange' object attribute 'end_reg' cannot be deleted");
        return -1;
    }
    if (self->_end_reg != NULL) {
        CPy_DECREF(self->_end_reg);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_ops___Value)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_end_reg = tmp;
    return 0;
}

static PyObject *
for_helpers___ForRange_get_step(mypyc___irbuild___for_helpers___ForRangeObject *self, void *closure)
{
    if (unlikely(self->_step == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'step' of 'ForRange' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_step);
    PyObject *retval = CPyTagged_StealAsObject(self->_step);
    return retval;
}

static int
for_helpers___ForRange_set_step(mypyc___irbuild___for_helpers___ForRangeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForRange' object attribute 'step' cannot be deleted");
        return -1;
    }
    if (self->_step != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_step);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_step = tmp;
    return 0;
}

static PyObject *
for_helpers___ForRange_get_end_target(mypyc___irbuild___for_helpers___ForRangeObject *self, void *closure)
{
    if (unlikely(self->_end_target == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'end_target' of 'ForRange' undefined");
        return NULL;
    }
    CPy_INCREF(self->_end_target);
    PyObject *retval = self->_end_target;
    return retval;
}

static int
for_helpers___ForRange_set_end_target(mypyc___irbuild___for_helpers___ForRangeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForRange' object attribute 'end_target' cannot be deleted");
        return -1;
    }
    if (self->_end_target != NULL) {
        CPy_DECREF(self->_end_target);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_ops___Value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10161;
    if (PyObject_TypeCheck(value, CPyType_targets___AssignmentTarget))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10161;
    CPy_TypeError("union[mypyc.ir.ops.Value, mypyc.irbuild.targets.AssignmentTarget]", value); 
    tmp = NULL;
__LL10161: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_end_target = tmp;
    return 0;
}

static PyObject *
for_helpers___ForRange_get_index_reg(mypyc___irbuild___for_helpers___ForRangeObject *self, void *closure)
{
    if (unlikely(self->_index_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'index_reg' of 'ForRange' undefined");
        return NULL;
    }
    CPy_INCREF(self->_index_reg);
    PyObject *retval = self->_index_reg;
    return retval;
}

static int
for_helpers___ForRange_set_index_reg(mypyc___irbuild___for_helpers___ForRangeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForRange' object attribute 'index_reg' cannot be deleted");
        return -1;
    }
    if (self->_index_reg != NULL) {
        CPy_DECREF(self->_index_reg);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_ops___Register)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10162;
    if (PyObject_TypeCheck(value, CPyType_targets___AssignmentTarget))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10162;
    CPy_TypeError("union[mypyc.ir.ops.Register, mypyc.irbuild.targets.AssignmentTarget]", value); 
    tmp = NULL;
__LL10162: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_index_reg = tmp;
    return 0;
}

static PyObject *
for_helpers___ForRange_get_index_target(mypyc___irbuild___for_helpers___ForRangeObject *self, void *closure)
{
    if (unlikely(self->_index_target == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'index_target' of 'ForRange' undefined");
        return NULL;
    }
    CPy_INCREF(self->_index_target);
    PyObject *retval = self->_index_target;
    return retval;
}

static int
for_helpers___ForRange_set_index_target(mypyc___irbuild___for_helpers___ForRangeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForRange' object attribute 'index_target' cannot be deleted");
        return -1;
    }
    if (self->_index_target != NULL) {
        CPy_DECREF(self->_index_target);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_ops___Register)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10163;
    if (PyObject_TypeCheck(value, CPyType_targets___AssignmentTarget))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10163;
    CPy_TypeError("union[mypyc.ir.ops.Register, mypyc.irbuild.targets.AssignmentTarget]", value); 
    tmp = NULL;
__LL10163: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_index_target = tmp;
    return 0;
}

static PyObject *for_helpers___ForInfiniteCounter_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___ForInfiniteCounter(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested);

static PyObject *
for_helpers___ForInfiniteCounter_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___ForInfiniteCounter) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = for_helpers___ForInfiniteCounter_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_for_helpers___ForGenerator_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
for_helpers___ForInfiniteCounter_traverse(mypyc___irbuild___for_helpers___ForInfiniteCounterObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_index);
    Py_VISIT(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_loop_exit);
    Py_VISIT(self->_index_reg);
    Py_VISIT(self->_index_target);
    return 0;
}

static int
for_helpers___ForInfiniteCounter_clear(mypyc___irbuild___for_helpers___ForInfiniteCounterObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_index);
    Py_CLEAR(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_loop_exit);
    Py_CLEAR(self->_index_reg);
    Py_CLEAR(self->_index_target);
    return 0;
}

static void
for_helpers___ForInfiniteCounter_dealloc(mypyc___irbuild___for_helpers___ForInfiniteCounterObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___ForInfiniteCounter_dealloc)
    for_helpers___ForInfiniteCounter_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___ForInfiniteCounter_vtable[10];
static bool
CPyDef_for_helpers___ForInfiniteCounter_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___ForInfiniteCounter_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator_____init__,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___add_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForInfiniteCounter___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___gen_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___load_len,
        (CPyVTableItem)CPyDef_for_helpers___ForInfiniteCounter___init,
        (CPyVTableItem)CPyDef_for_helpers___ForInfiniteCounter___gen_step,
    };
    memcpy(for_helpers___ForInfiniteCounter_vtable, for_helpers___ForInfiniteCounter_vtable_scratch, sizeof(for_helpers___ForInfiniteCounter_vtable));
    return 1;
}

static PyObject *
for_helpers___ForInfiniteCounter_get_index_reg(mypyc___irbuild___for_helpers___ForInfiniteCounterObject *self, void *closure);
static int
for_helpers___ForInfiniteCounter_set_index_reg(mypyc___irbuild___for_helpers___ForInfiniteCounterObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForInfiniteCounter_get_index_target(mypyc___irbuild___for_helpers___ForInfiniteCounterObject *self, void *closure);
static int
for_helpers___ForInfiniteCounter_set_index_target(mypyc___irbuild___for_helpers___ForInfiniteCounterObject *self, PyObject *value, void *closure);

static PyGetSetDef for_helpers___ForInfiniteCounter_getseters[] = {
    {"index_reg",
     (getter)for_helpers___ForInfiniteCounter_get_index_reg, (setter)for_helpers___ForInfiniteCounter_set_index_reg,
     NULL, NULL},
    {"index_target",
     (getter)for_helpers___ForInfiniteCounter_get_index_target, (setter)for_helpers___ForInfiniteCounter_set_index_target,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef for_helpers___ForInfiniteCounter_methods[] = {
    {"init",
     (PyCFunction)CPyPy_for_helpers___ForInfiniteCounter___init,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_step",
     (PyCFunction)CPyPy_for_helpers___ForInfiniteCounter___gen_step,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___ForInfiniteCounter_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ForInfiniteCounter",
    .tp_new = for_helpers___ForInfiniteCounter_new,
    .tp_dealloc = (destructor)for_helpers___ForInfiniteCounter_dealloc,
    .tp_traverse = (traverseproc)for_helpers___ForInfiniteCounter_traverse,
    .tp_clear = (inquiry)for_helpers___ForInfiniteCounter_clear,
    .tp_getset = for_helpers___ForInfiniteCounter_getseters,
    .tp_methods = for_helpers___ForInfiniteCounter_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___ForInfiniteCounterObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___ForInfiniteCounter_template = &CPyType_for_helpers___ForInfiniteCounter_template_;

static PyObject *
for_helpers___ForInfiniteCounter_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___ForInfiniteCounterObject *self;
    self = (mypyc___irbuild___for_helpers___ForInfiniteCounterObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___ForInfiniteCounter_vtable;
    self->_line = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___ForInfiniteCounter(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested)
{
    PyObject *self = for_helpers___ForInfiniteCounter_setup(CPyType_for_helpers___ForInfiniteCounter);
    if (self == NULL)
        return NULL;
    char res = CPyDef_for_helpers___ForGenerator_____init__(self, cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
for_helpers___ForInfiniteCounter_get_index_reg(mypyc___irbuild___for_helpers___ForInfiniteCounterObject *self, void *closure)
{
    if (unlikely(self->_index_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'index_reg' of 'ForInfiniteCounter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_index_reg);
    PyObject *retval = self->_index_reg;
    return retval;
}

static int
for_helpers___ForInfiniteCounter_set_index_reg(mypyc___irbuild___for_helpers___ForInfiniteCounterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForInfiniteCounter' object attribute 'index_reg' cannot be deleted");
        return -1;
    }
    if (self->_index_reg != NULL) {
        CPy_DECREF(self->_index_reg);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_ops___Register)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10164;
    if (PyObject_TypeCheck(value, CPyType_targets___AssignmentTarget))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10164;
    CPy_TypeError("union[mypyc.ir.ops.Register, mypyc.irbuild.targets.AssignmentTarget]", value); 
    tmp = NULL;
__LL10164: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_index_reg = tmp;
    return 0;
}

static PyObject *
for_helpers___ForInfiniteCounter_get_index_target(mypyc___irbuild___for_helpers___ForInfiniteCounterObject *self, void *closure)
{
    if (unlikely(self->_index_target == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'index_target' of 'ForInfiniteCounter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_index_target);
    PyObject *retval = self->_index_target;
    return retval;
}

static int
for_helpers___ForInfiniteCounter_set_index_target(mypyc___irbuild___for_helpers___ForInfiniteCounterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForInfiniteCounter' object attribute 'index_target' cannot be deleted");
        return -1;
    }
    if (self->_index_target != NULL) {
        CPy_DECREF(self->_index_target);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_ops___Register)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10165;
    if (PyObject_TypeCheck(value, CPyType_targets___AssignmentTarget))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10165;
    CPy_TypeError("union[mypyc.ir.ops.Register, mypyc.irbuild.targets.AssignmentTarget]", value); 
    tmp = NULL;
__LL10165: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_index_target = tmp;
    return 0;
}

static PyObject *for_helpers___ForEnumerate_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___ForEnumerate(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested);

static PyObject *
for_helpers___ForEnumerate_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___ForEnumerate) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = for_helpers___ForEnumerate_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_for_helpers___ForGenerator_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
for_helpers___ForEnumerate_traverse(mypyc___irbuild___for_helpers___ForEnumerateObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_index);
    Py_VISIT(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_loop_exit);
    Py_VISIT(self->_index_gen);
    Py_VISIT(self->_main_gen);
    return 0;
}

static int
for_helpers___ForEnumerate_clear(mypyc___irbuild___for_helpers___ForEnumerateObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_index);
    Py_CLEAR(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_loop_exit);
    Py_CLEAR(self->_index_gen);
    Py_CLEAR(self->_main_gen);
    return 0;
}

static void
for_helpers___ForEnumerate_dealloc(mypyc___irbuild___for_helpers___ForEnumerateObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___ForEnumerate_dealloc)
    for_helpers___ForEnumerate_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___ForEnumerate_vtable[14];
static bool
CPyDef_for_helpers___ForEnumerate_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___ForEnumerate_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator_____init__,
        (CPyVTableItem)CPyDef_for_helpers___ForEnumerate___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___add_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForEnumerate___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForEnumerate___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForEnumerate___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForEnumerate___gen_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___load_len,
        (CPyVTableItem)CPyDef_for_helpers___ForEnumerate___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForEnumerate___init,
        (CPyVTableItem)CPyDef_for_helpers___ForEnumerate___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForEnumerate___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForEnumerate___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForEnumerate___gen_cleanup,
    };
    memcpy(for_helpers___ForEnumerate_vtable, for_helpers___ForEnumerate_vtable_scratch, sizeof(for_helpers___ForEnumerate_vtable));
    return 1;
}

static PyObject *
for_helpers___ForEnumerate_get_index_gen(mypyc___irbuild___for_helpers___ForEnumerateObject *self, void *closure);
static int
for_helpers___ForEnumerate_set_index_gen(mypyc___irbuild___for_helpers___ForEnumerateObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForEnumerate_get_main_gen(mypyc___irbuild___for_helpers___ForEnumerateObject *self, void *closure);
static int
for_helpers___ForEnumerate_set_main_gen(mypyc___irbuild___for_helpers___ForEnumerateObject *self, PyObject *value, void *closure);

static PyGetSetDef for_helpers___ForEnumerate_getseters[] = {
    {"index_gen",
     (getter)for_helpers___ForEnumerate_get_index_gen, (setter)for_helpers___ForEnumerate_set_index_gen,
     NULL, NULL},
    {"main_gen",
     (getter)for_helpers___ForEnumerate_get_main_gen, (setter)for_helpers___ForEnumerate_set_main_gen,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef for_helpers___ForEnumerate_methods[] = {
    {"need_cleanup",
     (PyCFunction)CPyPy_for_helpers___ForEnumerate___need_cleanup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"init",
     (PyCFunction)CPyPy_for_helpers___ForEnumerate___init,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_condition",
     (PyCFunction)CPyPy_for_helpers___ForEnumerate___gen_condition,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"begin_body",
     (PyCFunction)CPyPy_for_helpers___ForEnumerate___begin_body,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_step",
     (PyCFunction)CPyPy_for_helpers___ForEnumerate___gen_step,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_cleanup",
     (PyCFunction)CPyPy_for_helpers___ForEnumerate___gen_cleanup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___ForEnumerate_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ForEnumerate",
    .tp_new = for_helpers___ForEnumerate_new,
    .tp_dealloc = (destructor)for_helpers___ForEnumerate_dealloc,
    .tp_traverse = (traverseproc)for_helpers___ForEnumerate_traverse,
    .tp_clear = (inquiry)for_helpers___ForEnumerate_clear,
    .tp_getset = for_helpers___ForEnumerate_getseters,
    .tp_methods = for_helpers___ForEnumerate_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___ForEnumerateObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___ForEnumerate_template = &CPyType_for_helpers___ForEnumerate_template_;

static PyObject *
for_helpers___ForEnumerate_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___ForEnumerateObject *self;
    self = (mypyc___irbuild___for_helpers___ForEnumerateObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___ForEnumerate_vtable;
    self->_line = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___ForEnumerate(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested)
{
    PyObject *self = for_helpers___ForEnumerate_setup(CPyType_for_helpers___ForEnumerate);
    if (self == NULL)
        return NULL;
    char res = CPyDef_for_helpers___ForGenerator_____init__(self, cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
for_helpers___ForEnumerate_get_index_gen(mypyc___irbuild___for_helpers___ForEnumerateObject *self, void *closure)
{
    if (unlikely(self->_index_gen == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'index_gen' of 'ForEnumerate' undefined");
        return NULL;
    }
    CPy_INCREF(self->_index_gen);
    PyObject *retval = self->_index_gen;
    return retval;
}

static int
for_helpers___ForEnumerate_set_index_gen(mypyc___irbuild___for_helpers___ForEnumerateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForEnumerate' object attribute 'index_gen' cannot be deleted");
        return -1;
    }
    if (self->_index_gen != NULL) {
        CPy_DECREF(self->_index_gen);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_for_helpers___ForInfiniteCounter))
        tmp = value;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForInfiniteCounter", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_index_gen = tmp;
    return 0;
}

static PyObject *
for_helpers___ForEnumerate_get_main_gen(mypyc___irbuild___for_helpers___ForEnumerateObject *self, void *closure)
{
    if (unlikely(self->_main_gen == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'main_gen' of 'ForEnumerate' undefined");
        return NULL;
    }
    CPy_INCREF(self->_main_gen);
    PyObject *retval = self->_main_gen;
    return retval;
}

static int
for_helpers___ForEnumerate_set_main_gen(mypyc___irbuild___for_helpers___ForEnumerateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForEnumerate' object attribute 'main_gen' cannot be deleted");
        return -1;
    }
    if (self->_main_gen != NULL) {
        CPy_DECREF(self->_main_gen);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_for_helpers___ForGenerator)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForGenerator", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_main_gen = tmp;
    return 0;
}

static PyObject *for_helpers___ForZip_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___ForZip(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested);

static PyObject *
for_helpers___ForZip_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___ForZip) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = for_helpers___ForZip_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_for_helpers___ForGenerator_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
for_helpers___ForZip_traverse(mypyc___irbuild___for_helpers___ForZipObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_index);
    Py_VISIT(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_loop_exit);
    Py_VISIT(self->_cond_blocks);
    Py_VISIT(self->_gens);
    return 0;
}

static int
for_helpers___ForZip_clear(mypyc___irbuild___for_helpers___ForZipObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_index);
    Py_CLEAR(self->_body_block);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_loop_exit);
    Py_CLEAR(self->_cond_blocks);
    Py_CLEAR(self->_gens);
    return 0;
}

static void
for_helpers___ForZip_dealloc(mypyc___irbuild___for_helpers___ForZipObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___ForZip_dealloc)
    for_helpers___ForZip_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___ForZip_vtable[14];
static bool
CPyDef_for_helpers___ForZip_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___ForZip_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator_____init__,
        (CPyVTableItem)CPyDef_for_helpers___ForZip___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___add_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForZip___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForZip___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForZip___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForZip___gen_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForGenerator___load_len,
        (CPyVTableItem)CPyDef_for_helpers___ForZip___need_cleanup,
        (CPyVTableItem)CPyDef_for_helpers___ForZip___init,
        (CPyVTableItem)CPyDef_for_helpers___ForZip___gen_condition,
        (CPyVTableItem)CPyDef_for_helpers___ForZip___begin_body,
        (CPyVTableItem)CPyDef_for_helpers___ForZip___gen_step,
        (CPyVTableItem)CPyDef_for_helpers___ForZip___gen_cleanup,
    };
    memcpy(for_helpers___ForZip_vtable, for_helpers___ForZip_vtable_scratch, sizeof(for_helpers___ForZip_vtable));
    return 1;
}

static PyObject *
for_helpers___ForZip_get_cond_blocks(mypyc___irbuild___for_helpers___ForZipObject *self, void *closure);
static int
for_helpers___ForZip_set_cond_blocks(mypyc___irbuild___for_helpers___ForZipObject *self, PyObject *value, void *closure);
static PyObject *
for_helpers___ForZip_get_gens(mypyc___irbuild___for_helpers___ForZipObject *self, void *closure);
static int
for_helpers___ForZip_set_gens(mypyc___irbuild___for_helpers___ForZipObject *self, PyObject *value, void *closure);

static PyGetSetDef for_helpers___ForZip_getseters[] = {
    {"cond_blocks",
     (getter)for_helpers___ForZip_get_cond_blocks, (setter)for_helpers___ForZip_set_cond_blocks,
     NULL, NULL},
    {"gens",
     (getter)for_helpers___ForZip_get_gens, (setter)for_helpers___ForZip_set_gens,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef for_helpers___ForZip_methods[] = {
    {"need_cleanup",
     (PyCFunction)CPyPy_for_helpers___ForZip___need_cleanup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"init",
     (PyCFunction)CPyPy_for_helpers___ForZip___init,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_condition",
     (PyCFunction)CPyPy_for_helpers___ForZip___gen_condition,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"begin_body",
     (PyCFunction)CPyPy_for_helpers___ForZip___begin_body,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_step",
     (PyCFunction)CPyPy_for_helpers___ForZip___gen_step,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_cleanup",
     (PyCFunction)CPyPy_for_helpers___ForZip___gen_cleanup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___ForZip_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ForZip",
    .tp_new = for_helpers___ForZip_new,
    .tp_dealloc = (destructor)for_helpers___ForZip_dealloc,
    .tp_traverse = (traverseproc)for_helpers___ForZip_traverse,
    .tp_clear = (inquiry)for_helpers___ForZip_clear,
    .tp_getset = for_helpers___ForZip_getseters,
    .tp_methods = for_helpers___ForZip_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___ForZipObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___ForZip_template = &CPyType_for_helpers___ForZip_template_;

static PyObject *
for_helpers___ForZip_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___ForZipObject *self;
    self = (mypyc___irbuild___for_helpers___ForZipObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___ForZip_vtable;
    self->_line = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___ForZip(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested)
{
    PyObject *self = for_helpers___ForZip_setup(CPyType_for_helpers___ForZip);
    if (self == NULL)
        return NULL;
    char res = CPyDef_for_helpers___ForGenerator_____init__(self, cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
for_helpers___ForZip_get_cond_blocks(mypyc___irbuild___for_helpers___ForZipObject *self, void *closure)
{
    if (unlikely(self->_cond_blocks == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'cond_blocks' of 'ForZip' undefined");
        return NULL;
    }
    CPy_INCREF(self->_cond_blocks);
    PyObject *retval = self->_cond_blocks;
    return retval;
}

static int
for_helpers___ForZip_set_cond_blocks(mypyc___irbuild___for_helpers___ForZipObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForZip' object attribute 'cond_blocks' cannot be deleted");
        return -1;
    }
    if (self->_cond_blocks != NULL) {
        CPy_DECREF(self->_cond_blocks);
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
    self->_cond_blocks = tmp;
    return 0;
}

static PyObject *
for_helpers___ForZip_get_gens(mypyc___irbuild___for_helpers___ForZipObject *self, void *closure)
{
    if (unlikely(self->_gens == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'gens' of 'ForZip' undefined");
        return NULL;
    }
    CPy_INCREF(self->_gens);
    PyObject *retval = self->_gens;
    return retval;
}

static int
for_helpers___ForZip_set_gens(mypyc___irbuild___for_helpers___ForZipObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ForZip' object attribute 'gens' cannot be deleted");
        return -1;
    }
    if (self->_gens != NULL) {
        CPy_DECREF(self->_gens);
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
    self->_gens = tmp;
    return 0;
}

static PyObject *for_helpers___sequence_from_generator_preallocate_helper_env_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___sequence_from_generator_preallocate_helper_env(void);

static PyObject *
for_helpers___sequence_from_generator_preallocate_helper_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___sequence_from_generator_preallocate_helper_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return for_helpers___sequence_from_generator_preallocate_helper_env_setup(type);
}

static int
for_helpers___sequence_from_generator_preallocate_helper_env_traverse(mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_gen);
    Py_VISIT(self->_set_item_op);
    Py_VISIT(self->_target_op);
    Py_VISIT(self->_set_item);
    Py_VISIT(self->_empty_op_llbuilder);
    Py_VISIT(self->_rtype);
    Py_VISIT(self->_sequence);
    Py_VISIT(self->_length);
    return 0;
}

static int
for_helpers___sequence_from_generator_preallocate_helper_env_clear(mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_gen);
    Py_CLEAR(self->_set_item_op);
    Py_CLEAR(self->_target_op);
    Py_CLEAR(self->_set_item);
    Py_CLEAR(self->_empty_op_llbuilder);
    Py_CLEAR(self->_rtype);
    Py_CLEAR(self->_sequence);
    Py_CLEAR(self->_length);
    return 0;
}

static void
for_helpers___sequence_from_generator_preallocate_helper_env_dealloc(mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___sequence_from_generator_preallocate_helper_env_dealloc)
    for_helpers___sequence_from_generator_preallocate_helper_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___sequence_from_generator_preallocate_helper_env_vtable[1];
static bool
CPyDef_for_helpers___sequence_from_generator_preallocate_helper_env_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___sequence_from_generator_preallocate_helper_env_vtable_scratch[] = {
        NULL
    };
    memcpy(for_helpers___sequence_from_generator_preallocate_helper_env_vtable, for_helpers___sequence_from_generator_preallocate_helper_env_vtable_scratch, sizeof(for_helpers___sequence_from_generator_preallocate_helper_env_vtable));
    return 1;
}

static PyMethodDef for_helpers___sequence_from_generator_preallocate_helper_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___sequence_from_generator_preallocate_helper_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "sequence_from_generator_preallocate_helper_env",
    .tp_new = for_helpers___sequence_from_generator_preallocate_helper_env_new,
    .tp_dealloc = (destructor)for_helpers___sequence_from_generator_preallocate_helper_env_dealloc,
    .tp_traverse = (traverseproc)for_helpers___sequence_from_generator_preallocate_helper_env_traverse,
    .tp_clear = (inquiry)for_helpers___sequence_from_generator_preallocate_helper_env_clear,
    .tp_methods = for_helpers___sequence_from_generator_preallocate_helper_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___sequence_from_generator_preallocate_helper_env_template = &CPyType_for_helpers___sequence_from_generator_preallocate_helper_env_template_;

static PyObject *
for_helpers___sequence_from_generator_preallocate_helper_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *self;
    self = (mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___sequence_from_generator_preallocate_helper_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___sequence_from_generator_preallocate_helper_env(void)
{
    PyObject *self = for_helpers___sequence_from_generator_preallocate_helper_env_setup(CPyType_for_helpers___sequence_from_generator_preallocate_helper_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__for_helpers___set_item_sequence_from_generator_preallocate_helper_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_____get__(self, instance, owner);
}
PyMemberDef for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj(void);

static PyObject *
for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_setup(type);
}

static int
for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_traverse(mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject))));
    return 0;
}

static int
for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_clear(mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject))));
    return 0;
}

static void
for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_dealloc(mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_dealloc)
    for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_vtable[2];
static bool
CPyDef_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_____call__,
        (CPyVTableItem)CPyDef_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_____get__,
    };
    memcpy(for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_vtable, for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_vtable_scratch, sizeof(for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_vtable));
    return 1;
}

static PyMethodDef for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "set_item_sequence_from_generator_preallocate_helper_obj",
    .tp_new = for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_new,
    .tp_dealloc = (destructor)for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_dealloc,
    .tp_traverse = (traverseproc)for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_traverse,
    .tp_clear = (inquiry)for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_clear,
    .tp_methods = for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__for_helpers___set_item_sequence_from_generator_preallocate_helper_obj,
    .tp_members = for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_template = &CPyType_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_template_;

static PyObject *
for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject *self;
    self = (mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_vtable;
    self->vectorcall = CPyPy_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj(void)
{
    PyObject *self = for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_setup(CPyType_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *for_helpers___translate_list_comprehension_env_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___translate_list_comprehension_env(void);

static PyObject *
for_helpers___translate_list_comprehension_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___translate_list_comprehension_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return for_helpers___translate_list_comprehension_env_setup(type);
}

static int
for_helpers___translate_list_comprehension_env_traverse(mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_gen);
    Py_VISIT(self->_list_ops);
    Py_VISIT(self->_gen_inner_stmts);
    Py_VISIT(self->_val);
    Py_VISIT(self->_loop_params);
    return 0;
}

static int
for_helpers___translate_list_comprehension_env_clear(mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_gen);
    Py_CLEAR(self->_list_ops);
    Py_CLEAR(self->_gen_inner_stmts);
    Py_CLEAR(self->_val);
    Py_CLEAR(self->_loop_params);
    return 0;
}

static void
for_helpers___translate_list_comprehension_env_dealloc(mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___translate_list_comprehension_env_dealloc)
    for_helpers___translate_list_comprehension_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___translate_list_comprehension_env_vtable[1];
static bool
CPyDef_for_helpers___translate_list_comprehension_env_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___translate_list_comprehension_env_vtable_scratch[] = {
        NULL
    };
    memcpy(for_helpers___translate_list_comprehension_env_vtable, for_helpers___translate_list_comprehension_env_vtable_scratch, sizeof(for_helpers___translate_list_comprehension_env_vtable));
    return 1;
}

static PyMethodDef for_helpers___translate_list_comprehension_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___translate_list_comprehension_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "translate_list_comprehension_env",
    .tp_new = for_helpers___translate_list_comprehension_env_new,
    .tp_dealloc = (destructor)for_helpers___translate_list_comprehension_env_dealloc,
    .tp_traverse = (traverseproc)for_helpers___translate_list_comprehension_env_traverse,
    .tp_clear = (inquiry)for_helpers___translate_list_comprehension_env_clear,
    .tp_methods = for_helpers___translate_list_comprehension_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___translate_list_comprehension_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___translate_list_comprehension_env_template = &CPyType_for_helpers___translate_list_comprehension_env_template_;

static PyObject *
for_helpers___translate_list_comprehension_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *self;
    self = (mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___translate_list_comprehension_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___translate_list_comprehension_env(void)
{
    PyObject *self = for_helpers___translate_list_comprehension_env_setup(CPyType_for_helpers___translate_list_comprehension_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__for_helpers___gen_inner_stmts_translate_list_comprehension_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_____get__(self, instance, owner);
}
PyMemberDef for_helpers___gen_inner_stmts_translate_list_comprehension_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *for_helpers___gen_inner_stmts_translate_list_comprehension_obj_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___gen_inner_stmts_translate_list_comprehension_obj(void);

static PyObject *
for_helpers___gen_inner_stmts_translate_list_comprehension_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___gen_inner_stmts_translate_list_comprehension_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return for_helpers___gen_inner_stmts_translate_list_comprehension_obj_setup(type);
}

static int
for_helpers___gen_inner_stmts_translate_list_comprehension_obj_traverse(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject))));
    return 0;
}

static int
for_helpers___gen_inner_stmts_translate_list_comprehension_obj_clear(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject))));
    return 0;
}

static void
for_helpers___gen_inner_stmts_translate_list_comprehension_obj_dealloc(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___gen_inner_stmts_translate_list_comprehension_obj_dealloc)
    for_helpers___gen_inner_stmts_translate_list_comprehension_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___gen_inner_stmts_translate_list_comprehension_obj_vtable[2];
static bool
CPyDef_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___gen_inner_stmts_translate_list_comprehension_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_____call__,
        (CPyVTableItem)CPyDef_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_____get__,
    };
    memcpy(for_helpers___gen_inner_stmts_translate_list_comprehension_obj_vtable, for_helpers___gen_inner_stmts_translate_list_comprehension_obj_vtable_scratch, sizeof(for_helpers___gen_inner_stmts_translate_list_comprehension_obj_vtable));
    return 1;
}

static PyMethodDef for_helpers___gen_inner_stmts_translate_list_comprehension_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "gen_inner_stmts_translate_list_comprehension_obj",
    .tp_new = for_helpers___gen_inner_stmts_translate_list_comprehension_obj_new,
    .tp_dealloc = (destructor)for_helpers___gen_inner_stmts_translate_list_comprehension_obj_dealloc,
    .tp_traverse = (traverseproc)for_helpers___gen_inner_stmts_translate_list_comprehension_obj_traverse,
    .tp_clear = (inquiry)for_helpers___gen_inner_stmts_translate_list_comprehension_obj_clear,
    .tp_methods = for_helpers___gen_inner_stmts_translate_list_comprehension_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__for_helpers___gen_inner_stmts_translate_list_comprehension_obj,
    .tp_members = for_helpers___gen_inner_stmts_translate_list_comprehension_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_template = &CPyType_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_template_;

static PyObject *
for_helpers___gen_inner_stmts_translate_list_comprehension_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject *self;
    self = (mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___gen_inner_stmts_translate_list_comprehension_obj_vtable;
    self->vectorcall = CPyPy_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___gen_inner_stmts_translate_list_comprehension_obj(void)
{
    PyObject *self = for_helpers___gen_inner_stmts_translate_list_comprehension_obj_setup(CPyType_for_helpers___gen_inner_stmts_translate_list_comprehension_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *for_helpers___translate_set_comprehension_env_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___translate_set_comprehension_env(void);

static PyObject *
for_helpers___translate_set_comprehension_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___translate_set_comprehension_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return for_helpers___translate_set_comprehension_env_setup(type);
}

static int
for_helpers___translate_set_comprehension_env_traverse(mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_gen);
    Py_VISIT(self->_set_ops);
    Py_VISIT(self->_gen_inner_stmts);
    Py_VISIT(self->_loop_params);
    return 0;
}

static int
for_helpers___translate_set_comprehension_env_clear(mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_gen);
    Py_CLEAR(self->_set_ops);
    Py_CLEAR(self->_gen_inner_stmts);
    Py_CLEAR(self->_loop_params);
    return 0;
}

static void
for_helpers___translate_set_comprehension_env_dealloc(mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___translate_set_comprehension_env_dealloc)
    for_helpers___translate_set_comprehension_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___translate_set_comprehension_env_vtable[1];
static bool
CPyDef_for_helpers___translate_set_comprehension_env_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___translate_set_comprehension_env_vtable_scratch[] = {
        NULL
    };
    memcpy(for_helpers___translate_set_comprehension_env_vtable, for_helpers___translate_set_comprehension_env_vtable_scratch, sizeof(for_helpers___translate_set_comprehension_env_vtable));
    return 1;
}

static PyMethodDef for_helpers___translate_set_comprehension_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___translate_set_comprehension_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "translate_set_comprehension_env",
    .tp_new = for_helpers___translate_set_comprehension_env_new,
    .tp_dealloc = (destructor)for_helpers___translate_set_comprehension_env_dealloc,
    .tp_traverse = (traverseproc)for_helpers___translate_set_comprehension_env_traverse,
    .tp_clear = (inquiry)for_helpers___translate_set_comprehension_env_clear,
    .tp_methods = for_helpers___translate_set_comprehension_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___translate_set_comprehension_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___translate_set_comprehension_env_template = &CPyType_for_helpers___translate_set_comprehension_env_template_;

static PyObject *
for_helpers___translate_set_comprehension_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *self;
    self = (mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___translate_set_comprehension_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___translate_set_comprehension_env(void)
{
    PyObject *self = for_helpers___translate_set_comprehension_env_setup(CPyType_for_helpers___translate_set_comprehension_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__for_helpers___gen_inner_stmts_translate_set_comprehension_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_____get__(self, instance, owner);
}
PyMemberDef for_helpers___gen_inner_stmts_translate_set_comprehension_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *for_helpers___gen_inner_stmts_translate_set_comprehension_obj_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___gen_inner_stmts_translate_set_comprehension_obj(void);

static PyObject *
for_helpers___gen_inner_stmts_translate_set_comprehension_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___gen_inner_stmts_translate_set_comprehension_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return for_helpers___gen_inner_stmts_translate_set_comprehension_obj_setup(type);
}

static int
for_helpers___gen_inner_stmts_translate_set_comprehension_obj_traverse(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject))));
    return 0;
}

static int
for_helpers___gen_inner_stmts_translate_set_comprehension_obj_clear(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject))));
    return 0;
}

static void
for_helpers___gen_inner_stmts_translate_set_comprehension_obj_dealloc(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___gen_inner_stmts_translate_set_comprehension_obj_dealloc)
    for_helpers___gen_inner_stmts_translate_set_comprehension_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___gen_inner_stmts_translate_set_comprehension_obj_vtable[2];
static bool
CPyDef_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___gen_inner_stmts_translate_set_comprehension_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_____call__,
        (CPyVTableItem)CPyDef_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_____get__,
    };
    memcpy(for_helpers___gen_inner_stmts_translate_set_comprehension_obj_vtable, for_helpers___gen_inner_stmts_translate_set_comprehension_obj_vtable_scratch, sizeof(for_helpers___gen_inner_stmts_translate_set_comprehension_obj_vtable));
    return 1;
}

static PyMethodDef for_helpers___gen_inner_stmts_translate_set_comprehension_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "gen_inner_stmts_translate_set_comprehension_obj",
    .tp_new = for_helpers___gen_inner_stmts_translate_set_comprehension_obj_new,
    .tp_dealloc = (destructor)for_helpers___gen_inner_stmts_translate_set_comprehension_obj_dealloc,
    .tp_traverse = (traverseproc)for_helpers___gen_inner_stmts_translate_set_comprehension_obj_traverse,
    .tp_clear = (inquiry)for_helpers___gen_inner_stmts_translate_set_comprehension_obj_clear,
    .tp_methods = for_helpers___gen_inner_stmts_translate_set_comprehension_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__for_helpers___gen_inner_stmts_translate_set_comprehension_obj,
    .tp_members = for_helpers___gen_inner_stmts_translate_set_comprehension_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_template = &CPyType_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_template_;

static PyObject *
for_helpers___gen_inner_stmts_translate_set_comprehension_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject *self;
    self = (mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___gen_inner_stmts_translate_set_comprehension_obj_vtable;
    self->vectorcall = CPyPy_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___gen_inner_stmts_translate_set_comprehension_obj(void)
{
    PyObject *self = for_helpers___gen_inner_stmts_translate_set_comprehension_obj_setup(CPyType_for_helpers___gen_inner_stmts_translate_set_comprehension_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *for_helpers___comprehension_helper_env_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___comprehension_helper_env(void);

static PyObject *
for_helpers___comprehension_helper_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___comprehension_helper_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return for_helpers___comprehension_helper_env_setup(type);
}

static int
for_helpers___comprehension_helper_env_traverse(mypyc___irbuild___for_helpers___comprehension_helper_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_gen_inner_stmts);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_handle_loop);
    Py_VISIT(self->_loop_contents);
    Py_VISIT(self->_loop_params);
    return 0;
}

static int
for_helpers___comprehension_helper_env_clear(mypyc___irbuild___for_helpers___comprehension_helper_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_gen_inner_stmts);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_handle_loop);
    Py_CLEAR(self->_loop_contents);
    Py_CLEAR(self->_loop_params);
    return 0;
}

static void
for_helpers___comprehension_helper_env_dealloc(mypyc___irbuild___for_helpers___comprehension_helper_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___comprehension_helper_env_dealloc)
    for_helpers___comprehension_helper_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___comprehension_helper_env_vtable[1];
static bool
CPyDef_for_helpers___comprehension_helper_env_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___comprehension_helper_env_vtable_scratch[] = {
        NULL
    };
    memcpy(for_helpers___comprehension_helper_env_vtable, for_helpers___comprehension_helper_env_vtable_scratch, sizeof(for_helpers___comprehension_helper_env_vtable));
    return 1;
}

static PyMethodDef for_helpers___comprehension_helper_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___comprehension_helper_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "comprehension_helper_env",
    .tp_new = for_helpers___comprehension_helper_env_new,
    .tp_dealloc = (destructor)for_helpers___comprehension_helper_env_dealloc,
    .tp_traverse = (traverseproc)for_helpers___comprehension_helper_env_traverse,
    .tp_clear = (inquiry)for_helpers___comprehension_helper_env_clear,
    .tp_methods = for_helpers___comprehension_helper_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___comprehension_helper_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___comprehension_helper_env_template = &CPyType_for_helpers___comprehension_helper_env_template_;

static PyObject *
for_helpers___comprehension_helper_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___comprehension_helper_envObject *self;
    self = (mypyc___irbuild___for_helpers___comprehension_helper_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___comprehension_helper_env_vtable;
    self->_line = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___comprehension_helper_env(void)
{
    PyObject *self = for_helpers___comprehension_helper_env_setup(CPyType_for_helpers___comprehension_helper_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *for_helpers___handle_loop_comprehension_helper_env_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___handle_loop_comprehension_helper_env(void);

static PyObject *
for_helpers___handle_loop_comprehension_helper_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___handle_loop_comprehension_helper_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return for_helpers___handle_loop_comprehension_helper_env_setup(type);
}

static int
for_helpers___handle_loop_comprehension_helper_env_traverse(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(self->_loop_params);
    Py_VISIT(self->_conds);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_gen_inner_stmts);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_handle_loop);
    Py_VISIT(self->_loop_contents);
    Py_VISIT(self->_index);
    Py_VISIT(self->_expr);
    return 0;
}

static int
for_helpers___handle_loop_comprehension_helper_env_clear(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(self->_loop_params);
    Py_CLEAR(self->_conds);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_gen_inner_stmts);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_handle_loop);
    Py_CLEAR(self->_loop_contents);
    Py_CLEAR(self->_index);
    Py_CLEAR(self->_expr);
    return 0;
}

static void
for_helpers___handle_loop_comprehension_helper_env_dealloc(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___handle_loop_comprehension_helper_env_dealloc)
    for_helpers___handle_loop_comprehension_helper_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___handle_loop_comprehension_helper_env_vtable[1];
static bool
CPyDef_for_helpers___handle_loop_comprehension_helper_env_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___handle_loop_comprehension_helper_env_vtable_scratch[] = {
        NULL
    };
    memcpy(for_helpers___handle_loop_comprehension_helper_env_vtable, for_helpers___handle_loop_comprehension_helper_env_vtable_scratch, sizeof(for_helpers___handle_loop_comprehension_helper_env_vtable));
    return 1;
}

static PyMethodDef for_helpers___handle_loop_comprehension_helper_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___handle_loop_comprehension_helper_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "handle_loop_comprehension_helper_env",
    .tp_new = for_helpers___handle_loop_comprehension_helper_env_new,
    .tp_dealloc = (destructor)for_helpers___handle_loop_comprehension_helper_env_dealloc,
    .tp_traverse = (traverseproc)for_helpers___handle_loop_comprehension_helper_env_traverse,
    .tp_clear = (inquiry)for_helpers___handle_loop_comprehension_helper_env_clear,
    .tp_methods = for_helpers___handle_loop_comprehension_helper_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___handle_loop_comprehension_helper_env_template = &CPyType_for_helpers___handle_loop_comprehension_helper_env_template_;

static PyObject *
for_helpers___handle_loop_comprehension_helper_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *self;
    self = (mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___handle_loop_comprehension_helper_env_vtable;
    self->_line = CPY_INT_TAG;
    self->_is_async = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___handle_loop_comprehension_helper_env(void)
{
    PyObject *self = for_helpers___handle_loop_comprehension_helper_env_setup(CPyType_for_helpers___handle_loop_comprehension_helper_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__for_helpers___handle_loop_comprehension_helper_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_for_helpers___handle_loop_comprehension_helper_obj_____get__(self, instance, owner);
}
PyMemberDef for_helpers___handle_loop_comprehension_helper_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *for_helpers___handle_loop_comprehension_helper_obj_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___handle_loop_comprehension_helper_obj(void);

static PyObject *
for_helpers___handle_loop_comprehension_helper_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___handle_loop_comprehension_helper_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return for_helpers___handle_loop_comprehension_helper_obj_setup(type);
}

static int
for_helpers___handle_loop_comprehension_helper_obj_traverse(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject))));
    return 0;
}

static int
for_helpers___handle_loop_comprehension_helper_obj_clear(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject))));
    return 0;
}

static void
for_helpers___handle_loop_comprehension_helper_obj_dealloc(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___handle_loop_comprehension_helper_obj_dealloc)
    for_helpers___handle_loop_comprehension_helper_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___handle_loop_comprehension_helper_obj_vtable[2];
static bool
CPyDef_for_helpers___handle_loop_comprehension_helper_obj_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___handle_loop_comprehension_helper_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___handle_loop_comprehension_helper_obj_____call__,
        (CPyVTableItem)CPyDef_for_helpers___handle_loop_comprehension_helper_obj_____get__,
    };
    memcpy(for_helpers___handle_loop_comprehension_helper_obj_vtable, for_helpers___handle_loop_comprehension_helper_obj_vtable_scratch, sizeof(for_helpers___handle_loop_comprehension_helper_obj_vtable));
    return 1;
}

static PyMethodDef for_helpers___handle_loop_comprehension_helper_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_for_helpers___handle_loop_comprehension_helper_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_for_helpers___handle_loop_comprehension_helper_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___handle_loop_comprehension_helper_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "handle_loop_comprehension_helper_obj",
    .tp_new = for_helpers___handle_loop_comprehension_helper_obj_new,
    .tp_dealloc = (destructor)for_helpers___handle_loop_comprehension_helper_obj_dealloc,
    .tp_traverse = (traverseproc)for_helpers___handle_loop_comprehension_helper_obj_traverse,
    .tp_clear = (inquiry)for_helpers___handle_loop_comprehension_helper_obj_clear,
    .tp_methods = for_helpers___handle_loop_comprehension_helper_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__for_helpers___handle_loop_comprehension_helper_obj,
    .tp_members = for_helpers___handle_loop_comprehension_helper_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_for_helpers___handle_loop_comprehension_helper_obj_template = &CPyType_for_helpers___handle_loop_comprehension_helper_obj_template_;

static PyObject *
for_helpers___handle_loop_comprehension_helper_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject *self;
    self = (mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___handle_loop_comprehension_helper_obj_vtable;
    self->vectorcall = CPyPy_for_helpers___handle_loop_comprehension_helper_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___handle_loop_comprehension_helper_obj(void)
{
    PyObject *self = for_helpers___handle_loop_comprehension_helper_obj_setup(CPyType_for_helpers___handle_loop_comprehension_helper_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_____get__(self, instance, owner);
}
PyMemberDef for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj(void);

static PyObject *
for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_setup(type);
}

static int
for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_traverse(mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject))));
    return 0;
}

static int
for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_clear(mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject))));
    return 0;
}

static void
for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_dealloc(mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_dealloc)
    for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_vtable[2];
static bool
CPyDef_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_____call__,
        (CPyVTableItem)CPyDef_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_____get__,
    };
    memcpy(for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_vtable, for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_vtable_scratch, sizeof(for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_vtable));
    return 1;
}

static PyMethodDef for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_comprehension_helper_handle_loop_obj",
    .tp_new = for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_new,
    .tp_dealloc = (destructor)for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_dealloc,
    .tp_traverse = (traverseproc)for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_traverse,
    .tp_clear = (inquiry)for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_clear,
    .tp_methods = for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj,
    .tp_members = for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_template = &CPyType_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_template_;

static PyObject *
for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject *self;
    self = (mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_vtable;
    self->vectorcall = CPyPy_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj(void)
{
    PyObject *self = for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_setup(CPyType_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__for_helpers___loop_contents_comprehension_helper_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_for_helpers___loop_contents_comprehension_helper_obj_____get__(self, instance, owner);
}
PyMemberDef for_helpers___loop_contents_comprehension_helper_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *for_helpers___loop_contents_comprehension_helper_obj_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___loop_contents_comprehension_helper_obj(void);

static PyObject *
for_helpers___loop_contents_comprehension_helper_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___loop_contents_comprehension_helper_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return for_helpers___loop_contents_comprehension_helper_obj_setup(type);
}

static int
for_helpers___loop_contents_comprehension_helper_obj_traverse(mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject))));
    return 0;
}

static int
for_helpers___loop_contents_comprehension_helper_obj_clear(mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject))));
    return 0;
}

static void
for_helpers___loop_contents_comprehension_helper_obj_dealloc(mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___loop_contents_comprehension_helper_obj_dealloc)
    for_helpers___loop_contents_comprehension_helper_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___loop_contents_comprehension_helper_obj_vtable[2];
static bool
CPyDef_for_helpers___loop_contents_comprehension_helper_obj_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___loop_contents_comprehension_helper_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___loop_contents_comprehension_helper_obj_____call__,
        (CPyVTableItem)CPyDef_for_helpers___loop_contents_comprehension_helper_obj_____get__,
    };
    memcpy(for_helpers___loop_contents_comprehension_helper_obj_vtable, for_helpers___loop_contents_comprehension_helper_obj_vtable_scratch, sizeof(for_helpers___loop_contents_comprehension_helper_obj_vtable));
    return 1;
}

static PyMethodDef for_helpers___loop_contents_comprehension_helper_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_for_helpers___loop_contents_comprehension_helper_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_for_helpers___loop_contents_comprehension_helper_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___loop_contents_comprehension_helper_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "loop_contents_comprehension_helper_obj",
    .tp_new = for_helpers___loop_contents_comprehension_helper_obj_new,
    .tp_dealloc = (destructor)for_helpers___loop_contents_comprehension_helper_obj_dealloc,
    .tp_traverse = (traverseproc)for_helpers___loop_contents_comprehension_helper_obj_traverse,
    .tp_clear = (inquiry)for_helpers___loop_contents_comprehension_helper_obj_clear,
    .tp_methods = for_helpers___loop_contents_comprehension_helper_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__for_helpers___loop_contents_comprehension_helper_obj,
    .tp_members = for_helpers___loop_contents_comprehension_helper_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_for_helpers___loop_contents_comprehension_helper_obj_template = &CPyType_for_helpers___loop_contents_comprehension_helper_obj_template_;

static PyObject *
for_helpers___loop_contents_comprehension_helper_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject *self;
    self = (mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___loop_contents_comprehension_helper_obj_vtable;
    self->vectorcall = CPyPy_for_helpers___loop_contents_comprehension_helper_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___loop_contents_comprehension_helper_obj(void)
{
    PyObject *self = for_helpers___loop_contents_comprehension_helper_obj_setup(CPyType_for_helpers___loop_contents_comprehension_helper_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *for_helpers___gen_condition_ForAsyncIterable_env_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___gen_condition_ForAsyncIterable_env(void);

static PyObject *
for_helpers___gen_condition_ForAsyncIterable_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___gen_condition_ForAsyncIterable_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return for_helpers___gen_condition_ForAsyncIterable_env_setup(type);
}

static int
for_helpers___gen_condition_ForAsyncIterable_env_traverse(mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_builder);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_except_match);
    Py_VISIT(self->_try_body);
    Py_VISIT(self->_except_body);
    return 0;
}

static int
for_helpers___gen_condition_ForAsyncIterable_env_clear(mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_builder);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_except_match);
    Py_CLEAR(self->_try_body);
    Py_CLEAR(self->_except_body);
    return 0;
}

static void
for_helpers___gen_condition_ForAsyncIterable_env_dealloc(mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___gen_condition_ForAsyncIterable_env_dealloc)
    for_helpers___gen_condition_ForAsyncIterable_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___gen_condition_ForAsyncIterable_env_vtable[1];
static bool
CPyDef_for_helpers___gen_condition_ForAsyncIterable_env_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___gen_condition_ForAsyncIterable_env_vtable_scratch[] = {
        NULL
    };
    memcpy(for_helpers___gen_condition_ForAsyncIterable_env_vtable, for_helpers___gen_condition_ForAsyncIterable_env_vtable_scratch, sizeof(for_helpers___gen_condition_ForAsyncIterable_env_vtable));
    return 1;
}

static PyMethodDef for_helpers___gen_condition_ForAsyncIterable_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___gen_condition_ForAsyncIterable_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "gen_condition_ForAsyncIterable_env",
    .tp_new = for_helpers___gen_condition_ForAsyncIterable_env_new,
    .tp_dealloc = (destructor)for_helpers___gen_condition_ForAsyncIterable_env_dealloc,
    .tp_traverse = (traverseproc)for_helpers___gen_condition_ForAsyncIterable_env_traverse,
    .tp_clear = (inquiry)for_helpers___gen_condition_ForAsyncIterable_env_clear,
    .tp_methods = for_helpers___gen_condition_ForAsyncIterable_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_for_helpers___gen_condition_ForAsyncIterable_env_template = &CPyType_for_helpers___gen_condition_ForAsyncIterable_env_template_;

static PyObject *
for_helpers___gen_condition_ForAsyncIterable_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *self;
    self = (mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___gen_condition_ForAsyncIterable_env_vtable;
    self->_line = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___gen_condition_ForAsyncIterable_env(void)
{
    PyObject *self = for_helpers___gen_condition_ForAsyncIterable_env_setup(CPyType_for_helpers___gen_condition_ForAsyncIterable_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__for_helpers___except_match_gen_condition_ForAsyncIterable_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_____get__(self, instance, owner);
}
PyMemberDef for_helpers___except_match_gen_condition_ForAsyncIterable_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *for_helpers___except_match_gen_condition_ForAsyncIterable_obj_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___except_match_gen_condition_ForAsyncIterable_obj(void);

static PyObject *
for_helpers___except_match_gen_condition_ForAsyncIterable_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___except_match_gen_condition_ForAsyncIterable_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return for_helpers___except_match_gen_condition_ForAsyncIterable_obj_setup(type);
}

static int
for_helpers___except_match_gen_condition_ForAsyncIterable_obj_traverse(mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject))));
    return 0;
}

static int
for_helpers___except_match_gen_condition_ForAsyncIterable_obj_clear(mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject))));
    return 0;
}

static void
for_helpers___except_match_gen_condition_ForAsyncIterable_obj_dealloc(mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___except_match_gen_condition_ForAsyncIterable_obj_dealloc)
    for_helpers___except_match_gen_condition_ForAsyncIterable_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___except_match_gen_condition_ForAsyncIterable_obj_vtable[2];
static bool
CPyDef_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___except_match_gen_condition_ForAsyncIterable_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_____call__,
        (CPyVTableItem)CPyDef_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_____get__,
    };
    memcpy(for_helpers___except_match_gen_condition_ForAsyncIterable_obj_vtable, for_helpers___except_match_gen_condition_ForAsyncIterable_obj_vtable_scratch, sizeof(for_helpers___except_match_gen_condition_ForAsyncIterable_obj_vtable));
    return 1;
}

static PyMethodDef for_helpers___except_match_gen_condition_ForAsyncIterable_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "except_match_gen_condition_ForAsyncIterable_obj",
    .tp_new = for_helpers___except_match_gen_condition_ForAsyncIterable_obj_new,
    .tp_dealloc = (destructor)for_helpers___except_match_gen_condition_ForAsyncIterable_obj_dealloc,
    .tp_traverse = (traverseproc)for_helpers___except_match_gen_condition_ForAsyncIterable_obj_traverse,
    .tp_clear = (inquiry)for_helpers___except_match_gen_condition_ForAsyncIterable_obj_clear,
    .tp_methods = for_helpers___except_match_gen_condition_ForAsyncIterable_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__for_helpers___except_match_gen_condition_ForAsyncIterable_obj,
    .tp_members = for_helpers___except_match_gen_condition_ForAsyncIterable_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_template = &CPyType_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_template_;

static PyObject *
for_helpers___except_match_gen_condition_ForAsyncIterable_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject *self;
    self = (mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___except_match_gen_condition_ForAsyncIterable_obj_vtable;
    self->vectorcall = CPyPy_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___except_match_gen_condition_ForAsyncIterable_obj(void)
{
    PyObject *self = for_helpers___except_match_gen_condition_ForAsyncIterable_obj_setup(CPyType_for_helpers___except_match_gen_condition_ForAsyncIterable_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__for_helpers___try_body_gen_condition_ForAsyncIterable_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_____get__(self, instance, owner);
}
PyMemberDef for_helpers___try_body_gen_condition_ForAsyncIterable_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *for_helpers___try_body_gen_condition_ForAsyncIterable_obj_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___try_body_gen_condition_ForAsyncIterable_obj(void);

static PyObject *
for_helpers___try_body_gen_condition_ForAsyncIterable_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___try_body_gen_condition_ForAsyncIterable_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return for_helpers___try_body_gen_condition_ForAsyncIterable_obj_setup(type);
}

static int
for_helpers___try_body_gen_condition_ForAsyncIterable_obj_traverse(mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject))));
    return 0;
}

static int
for_helpers___try_body_gen_condition_ForAsyncIterable_obj_clear(mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject))));
    return 0;
}

static void
for_helpers___try_body_gen_condition_ForAsyncIterable_obj_dealloc(mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___try_body_gen_condition_ForAsyncIterable_obj_dealloc)
    for_helpers___try_body_gen_condition_ForAsyncIterable_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___try_body_gen_condition_ForAsyncIterable_obj_vtable[2];
static bool
CPyDef_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___try_body_gen_condition_ForAsyncIterable_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_____call__,
        (CPyVTableItem)CPyDef_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_____get__,
    };
    memcpy(for_helpers___try_body_gen_condition_ForAsyncIterable_obj_vtable, for_helpers___try_body_gen_condition_ForAsyncIterable_obj_vtable_scratch, sizeof(for_helpers___try_body_gen_condition_ForAsyncIterable_obj_vtable));
    return 1;
}

static PyMethodDef for_helpers___try_body_gen_condition_ForAsyncIterable_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "try_body_gen_condition_ForAsyncIterable_obj",
    .tp_new = for_helpers___try_body_gen_condition_ForAsyncIterable_obj_new,
    .tp_dealloc = (destructor)for_helpers___try_body_gen_condition_ForAsyncIterable_obj_dealloc,
    .tp_traverse = (traverseproc)for_helpers___try_body_gen_condition_ForAsyncIterable_obj_traverse,
    .tp_clear = (inquiry)for_helpers___try_body_gen_condition_ForAsyncIterable_obj_clear,
    .tp_methods = for_helpers___try_body_gen_condition_ForAsyncIterable_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__for_helpers___try_body_gen_condition_ForAsyncIterable_obj,
    .tp_members = for_helpers___try_body_gen_condition_ForAsyncIterable_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_template = &CPyType_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_template_;

static PyObject *
for_helpers___try_body_gen_condition_ForAsyncIterable_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject *self;
    self = (mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___try_body_gen_condition_ForAsyncIterable_obj_vtable;
    self->vectorcall = CPyPy_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___try_body_gen_condition_ForAsyncIterable_obj(void)
{
    PyObject *self = for_helpers___try_body_gen_condition_ForAsyncIterable_obj_setup(CPyType_for_helpers___try_body_gen_condition_ForAsyncIterable_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__for_helpers___except_body_gen_condition_ForAsyncIterable_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_____get__(self, instance, owner);
}
PyMemberDef for_helpers___except_body_gen_condition_ForAsyncIterable_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *for_helpers___except_body_gen_condition_ForAsyncIterable_obj_setup(PyTypeObject *type);
PyObject *CPyDef_for_helpers___except_body_gen_condition_ForAsyncIterable_obj(void);

static PyObject *
for_helpers___except_body_gen_condition_ForAsyncIterable_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_for_helpers___except_body_gen_condition_ForAsyncIterable_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return for_helpers___except_body_gen_condition_ForAsyncIterable_obj_setup(type);
}

static int
for_helpers___except_body_gen_condition_ForAsyncIterable_obj_traverse(mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject))));
    return 0;
}

static int
for_helpers___except_body_gen_condition_ForAsyncIterable_obj_clear(mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject))));
    return 0;
}

static void
for_helpers___except_body_gen_condition_ForAsyncIterable_obj_dealloc(mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, for_helpers___except_body_gen_condition_ForAsyncIterable_obj_dealloc)
    for_helpers___except_body_gen_condition_ForAsyncIterable_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem for_helpers___except_body_gen_condition_ForAsyncIterable_obj_vtable[2];
static bool
CPyDef_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_trait_vtable_setup(void)
{
    CPyVTableItem for_helpers___except_body_gen_condition_ForAsyncIterable_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_____call__,
        (CPyVTableItem)CPyDef_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_____get__,
    };
    memcpy(for_helpers___except_body_gen_condition_ForAsyncIterable_obj_vtable, for_helpers___except_body_gen_condition_ForAsyncIterable_obj_vtable_scratch, sizeof(for_helpers___except_body_gen_condition_ForAsyncIterable_obj_vtable));
    return 1;
}

static PyMethodDef for_helpers___except_body_gen_condition_ForAsyncIterable_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "except_body_gen_condition_ForAsyncIterable_obj",
    .tp_new = for_helpers___except_body_gen_condition_ForAsyncIterable_obj_new,
    .tp_dealloc = (destructor)for_helpers___except_body_gen_condition_ForAsyncIterable_obj_dealloc,
    .tp_traverse = (traverseproc)for_helpers___except_body_gen_condition_ForAsyncIterable_obj_traverse,
    .tp_clear = (inquiry)for_helpers___except_body_gen_condition_ForAsyncIterable_obj_clear,
    .tp_methods = for_helpers___except_body_gen_condition_ForAsyncIterable_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__for_helpers___except_body_gen_condition_ForAsyncIterable_obj,
    .tp_members = for_helpers___except_body_gen_condition_ForAsyncIterable_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_template = &CPyType_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_template_;

static PyObject *
for_helpers___except_body_gen_condition_ForAsyncIterable_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject *self;
    self = (mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = for_helpers___except_body_gen_condition_ForAsyncIterable_obj_vtable;
    self->vectorcall = CPyPy_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_for_helpers___except_body_gen_condition_ForAsyncIterable_obj(void)
{
    PyObject *self = for_helpers___except_body_gen_condition_ForAsyncIterable_obj_setup(CPyType_for_helpers___except_body_gen_condition_ForAsyncIterable_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef for_helpersmodule_methods[] = {
    {"for_loop_helper", (PyCFunction)CPyPy_for_helpers___for_loop_helper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"for_loop_helper_with_index", (PyCFunction)CPyPy_for_helpers___for_loop_helper_with_index, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"sequence_from_generator_preallocate_helper", (PyCFunction)CPyPy_for_helpers___sequence_from_generator_preallocate_helper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_list_comprehension", (PyCFunction)CPyPy_for_helpers___translate_list_comprehension, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"translate_set_comprehension", (PyCFunction)CPyPy_for_helpers___translate_set_comprehension, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"comprehension_helper", (PyCFunction)CPyPy_for_helpers___comprehension_helper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_range_ref", (PyCFunction)CPyPy_for_helpers___is_range_ref, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"make_for_loop_generator", (PyCFunction)CPyPy_for_helpers___make_for_loop_generator, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"unsafe_index", (PyCFunction)CPyPy_for_helpers___unsafe_index, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef for_helpersmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.for_helpers",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    for_helpersmodule_methods
};

PyObject *CPyInit_mypyc___irbuild___for_helpers(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___for_helpers_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___for_helpers_internal);
        return CPyModule_mypyc___irbuild___for_helpers_internal;
    }
    CPyModule_mypyc___irbuild___for_helpers_internal = PyModule_Create(&for_helpersmodule);
    if (unlikely(CPyModule_mypyc___irbuild___for_helpers_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___for_helpers_internal, "__name__");
    CPyStatic_for_helpers___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___for_helpers_internal);
    if (unlikely(CPyStatic_for_helpers___globals == NULL))
        goto fail;
    CPyType_for_helpers___sequence_from_generator_preallocate_helper_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_for_helpers___sequence_from_generator_preallocate_helper_env_template, NULL, modname);
    if (unlikely(!CPyType_for_helpers___sequence_from_generator_preallocate_helper_env))
        goto fail;
    CPyType_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_template, NULL, modname);
    if (unlikely(!CPyType_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj))
        goto fail;
    CPyType_for_helpers___translate_list_comprehension_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_for_helpers___translate_list_comprehension_env_template, NULL, modname);
    if (unlikely(!CPyType_for_helpers___translate_list_comprehension_env))
        goto fail;
    CPyType_for_helpers___gen_inner_stmts_translate_list_comprehension_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_template, NULL, modname);
    if (unlikely(!CPyType_for_helpers___gen_inner_stmts_translate_list_comprehension_obj))
        goto fail;
    CPyType_for_helpers___translate_set_comprehension_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_for_helpers___translate_set_comprehension_env_template, NULL, modname);
    if (unlikely(!CPyType_for_helpers___translate_set_comprehension_env))
        goto fail;
    CPyType_for_helpers___gen_inner_stmts_translate_set_comprehension_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_template, NULL, modname);
    if (unlikely(!CPyType_for_helpers___gen_inner_stmts_translate_set_comprehension_obj))
        goto fail;
    CPyType_for_helpers___comprehension_helper_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_for_helpers___comprehension_helper_env_template, NULL, modname);
    if (unlikely(!CPyType_for_helpers___comprehension_helper_env))
        goto fail;
    CPyType_for_helpers___handle_loop_comprehension_helper_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_for_helpers___handle_loop_comprehension_helper_env_template, NULL, modname);
    if (unlikely(!CPyType_for_helpers___handle_loop_comprehension_helper_env))
        goto fail;
    CPyType_for_helpers___handle_loop_comprehension_helper_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_for_helpers___handle_loop_comprehension_helper_obj_template, NULL, modname);
    if (unlikely(!CPyType_for_helpers___handle_loop_comprehension_helper_obj))
        goto fail;
    CPyType_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_template, NULL, modname);
    if (unlikely(!CPyType_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj))
        goto fail;
    CPyType_for_helpers___loop_contents_comprehension_helper_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_for_helpers___loop_contents_comprehension_helper_obj_template, NULL, modname);
    if (unlikely(!CPyType_for_helpers___loop_contents_comprehension_helper_obj))
        goto fail;
    CPyType_for_helpers___gen_condition_ForAsyncIterable_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_for_helpers___gen_condition_ForAsyncIterable_env_template, NULL, modname);
    if (unlikely(!CPyType_for_helpers___gen_condition_ForAsyncIterable_env))
        goto fail;
    CPyType_for_helpers___except_match_gen_condition_ForAsyncIterable_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_template, NULL, modname);
    if (unlikely(!CPyType_for_helpers___except_match_gen_condition_ForAsyncIterable_obj))
        goto fail;
    CPyType_for_helpers___try_body_gen_condition_ForAsyncIterable_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_template, NULL, modname);
    if (unlikely(!CPyType_for_helpers___try_body_gen_condition_ForAsyncIterable_obj))
        goto fail;
    CPyType_for_helpers___except_body_gen_condition_ForAsyncIterable_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_template, NULL, modname);
    if (unlikely(!CPyType_for_helpers___except_body_gen_condition_ForAsyncIterable_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_for_helpers_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___for_helpers_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___for_helpers_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_for_helpers___ForGenerator);
    Py_CLEAR(CPyType_for_helpers___ForIterable);
    Py_CLEAR(CPyType_for_helpers___ForAsyncIterable);
    Py_CLEAR(CPyType_for_helpers___ForSequence);
    Py_CLEAR(CPyType_for_helpers___ForDictionaryCommon);
    Py_CLEAR(CPyType_for_helpers___ForDictionaryKeys);
    Py_CLEAR(CPyType_for_helpers___ForDictionaryValues);
    Py_CLEAR(CPyType_for_helpers___ForDictionaryItems);
    Py_CLEAR(CPyType_for_helpers___ForRange);
    Py_CLEAR(CPyType_for_helpers___ForInfiniteCounter);
    Py_CLEAR(CPyType_for_helpers___ForEnumerate);
    Py_CLEAR(CPyType_for_helpers___ForZip);
    Py_CLEAR(CPyType_for_helpers___sequence_from_generator_preallocate_helper_env);
    Py_CLEAR(CPyType_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj);
    Py_CLEAR(CPyType_for_helpers___translate_list_comprehension_env);
    Py_CLEAR(CPyType_for_helpers___gen_inner_stmts_translate_list_comprehension_obj);
    Py_CLEAR(CPyType_for_helpers___translate_set_comprehension_env);
    Py_CLEAR(CPyType_for_helpers___gen_inner_stmts_translate_set_comprehension_obj);
    Py_CLEAR(CPyType_for_helpers___comprehension_helper_env);
    Py_CLEAR(CPyType_for_helpers___handle_loop_comprehension_helper_env);
    Py_CLEAR(CPyType_for_helpers___handle_loop_comprehension_helper_obj);
    Py_CLEAR(CPyType_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj);
    Py_CLEAR(CPyType_for_helpers___loop_contents_comprehension_helper_obj);
    Py_CLEAR(CPyType_for_helpers___gen_condition_ForAsyncIterable_env);
    Py_CLEAR(CPyType_for_helpers___except_match_gen_condition_ForAsyncIterable_obj);
    Py_CLEAR(CPyType_for_helpers___try_body_gen_condition_ForAsyncIterable_obj);
    Py_CLEAR(CPyType_for_helpers___except_body_gen_condition_ForAsyncIterable_obj);
    return NULL;
}

char CPyDef_for_helpers___for_loop_helper(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_expr, PyObject *cpy_r_body_insts, PyObject *cpy_r_else_insts, char cpy_r_is_async, CPyTagged cpy_r_line) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_body_block;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_step_block;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_else_block;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_exit_block;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_normal_loop_exit;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_for_gen;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_condition_block;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPyDef_ops___BasicBlock(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 90, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    cpy_r_body_block = cpy_r_r1;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPyDef_ops___BasicBlock(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 92, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
    cpy_r_step_block = cpy_r_r3;
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_ops___BasicBlock(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 94, CPyStatic_for_helpers___globals);
        goto CPyL28;
    }
    cpy_r_else_block = cpy_r_r5;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPyDef_ops___BasicBlock(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 96, CPyStatic_for_helpers___globals);
        goto CPyL29;
    }
    cpy_r_exit_block = cpy_r_r7;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_else_insts != cpy_r_r8;
    if (!cpy_r_r9) goto CPyL6;
    CPy_INCREF(cpy_r_else_block);
    cpy_r_r10 = cpy_r_else_block;
    goto CPyL7;
CPyL6: ;
    CPy_INCREF(cpy_r_exit_block);
    cpy_r_r10 = cpy_r_exit_block;
CPyL7: ;
    cpy_r_normal_loop_exit = cpy_r_r10;
    cpy_r_r11 = 2;
    cpy_r_r12 = CPyDef_for_helpers___make_for_loop_generator(cpy_r_builder, cpy_r_index, cpy_r_expr, cpy_r_body_block, cpy_r_normal_loop_exit, cpy_r_line, cpy_r_is_async, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 101, CPyStatic_for_helpers___globals);
        goto CPyL30;
    }
    cpy_r_for_gen = cpy_r_r12;
    cpy_r_r13 = CPyDef_builder___IRBuilder___push_loop_stack(cpy_r_builder, cpy_r_step_block, cpy_r_exit_block);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 105, CPyStatic_for_helpers___globals);
        goto CPyL31;
    }
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = CPyDef_ops___BasicBlock(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 106, CPyStatic_for_helpers___globals);
        goto CPyL31;
    }
    cpy_r_condition_block = cpy_r_r15;
    cpy_r_r16 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_builder, cpy_r_condition_block);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 107, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    cpy_r_r17 = CPY_GET_METHOD(cpy_r_for_gen, CPyType_for_helpers___ForGenerator, 3, mypyc___irbuild___for_helpers___ForGeneratorObject, char (*)(PyObject *))(cpy_r_for_gen); /* gen_condition */
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 110, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    cpy_r_r18 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_body_block);
    CPy_DECREF(cpy_r_body_block);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 113, CPyStatic_for_helpers___globals);
        goto CPyL33;
    }
    cpy_r_r19 = CPY_GET_METHOD(cpy_r_for_gen, CPyType_for_helpers___ForGenerator, 4, mypyc___irbuild___for_helpers___ForGeneratorObject, char (*)(PyObject *))(cpy_r_for_gen); /* begin_body */
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 114, CPyStatic_for_helpers___globals);
        goto CPyL33;
    }
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_body_insts, 0, 0, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 115, CPyStatic_for_helpers___globals);
        goto CPyL33;
    } else
        goto CPyL34;
CPyL15: ;
    cpy_r_r21 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_builder, cpy_r_step_block);
    CPy_DECREF(cpy_r_step_block);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 118, CPyStatic_for_helpers___globals);
        goto CPyL35;
    }
    cpy_r_r22 = CPY_GET_METHOD(cpy_r_for_gen, CPyType_for_helpers___ForGenerator, 5, mypyc___irbuild___for_helpers___ForGeneratorObject, char (*)(PyObject *))(cpy_r_for_gen); /* gen_step */
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 119, CPyStatic_for_helpers___globals);
        goto CPyL35;
    }
    cpy_r_r23 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_condition_block);
    CPy_DECREF(cpy_r_condition_block);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 121, CPyStatic_for_helpers___globals);
        goto CPyL36;
    }
    cpy_r_r24 = CPyDef_for_helpers___ForGenerator___add_cleanup(cpy_r_for_gen, cpy_r_normal_loop_exit);
    CPy_DECREF(cpy_r_normal_loop_exit);
    CPy_DECREF(cpy_r_for_gen);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 123, CPyStatic_for_helpers___globals);
        goto CPyL37;
    }
    cpy_r_r25 = CPyDef_builder___IRBuilder___pop_loop_stack(cpy_r_builder);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 124, CPyStatic_for_helpers___globals);
        goto CPyL37;
    }
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_else_insts != cpy_r_r26;
    if (!cpy_r_r27) goto CPyL38;
    cpy_r_r28 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_else_block);
    CPy_DECREF(cpy_r_else_block);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 127, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_else_insts, 0, 0, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 128, CPyStatic_for_helpers___globals);
        goto CPyL39;
    } else
        goto CPyL40;
CPyL23: ;
    cpy_r_r30 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_exit_block);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 129, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
CPyL24: ;
    cpy_r_r31 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_exit_block);
    CPy_DECREF(cpy_r_exit_block);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 131, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    return 1;
CPyL26: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL27: ;
    CPy_DecRef(cpy_r_body_block);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_step_block);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_step_block);
    CPy_DecRef(cpy_r_else_block);
    goto CPyL26;
CPyL30: ;
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_step_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_normal_loop_exit);
    goto CPyL26;
CPyL31: ;
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_step_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_normal_loop_exit);
    CPy_DecRef(cpy_r_for_gen);
    goto CPyL26;
CPyL32: ;
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_step_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_normal_loop_exit);
    CPy_DecRef(cpy_r_for_gen);
    CPy_DecRef(cpy_r_condition_block);
    goto CPyL26;
CPyL33: ;
    CPy_DecRef(cpy_r_step_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_normal_loop_exit);
    CPy_DecRef(cpy_r_for_gen);
    CPy_DecRef(cpy_r_condition_block);
    goto CPyL26;
CPyL34: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL15;
CPyL35: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_normal_loop_exit);
    CPy_DecRef(cpy_r_for_gen);
    CPy_DecRef(cpy_r_condition_block);
    goto CPyL26;
CPyL36: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_normal_loop_exit);
    CPy_DecRef(cpy_r_for_gen);
    goto CPyL26;
CPyL37: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_exit_block);
    goto CPyL26;
CPyL38: ;
    CPy_DECREF(cpy_r_else_block);
    goto CPyL24;
CPyL39: ;
    CPy_DecRef(cpy_r_exit_block);
    goto CPyL26;
CPyL40: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL23;
}

PyObject *CPyPy_for_helpers___for_loop_helper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "index", "expr", "body_insts", "else_insts", "is_async", "line", 0};
    static CPyArg_Parser parser = {"OOOOOOO:for_loop_helper", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_index;
    PyObject *obj_expr;
    PyObject *obj_body_insts;
    PyObject *obj_else_insts;
    PyObject *obj_is_async;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_index, &obj_expr, &obj_body_insts, &obj_else_insts, &obj_is_async, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_index;
    if (likely(PyObject_TypeCheck(obj_index, CPyType_nodes___Expression)))
        arg_index = obj_index;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_index); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *arg_body_insts = obj_body_insts;
    PyObject *arg_else_insts;
    arg_else_insts = obj_else_insts;
    if (arg_else_insts != NULL) goto __LL10166;
    if (obj_else_insts == Py_None)
        arg_else_insts = obj_else_insts;
    else {
        arg_else_insts = NULL;
    }
    if (arg_else_insts != NULL) goto __LL10166;
    CPy_TypeError("object or None", obj_else_insts); 
    goto fail;
__LL10166: ;
    char arg_is_async;
    if (unlikely(!PyBool_Check(obj_is_async))) {
        CPy_TypeError("bool", obj_is_async); goto fail;
    } else
        arg_is_async = obj_is_async == Py_True;
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_for_helpers___for_loop_helper(arg_builder, arg_index, arg_expr, arg_body_insts, arg_else_insts, arg_is_async, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper", 72, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___for_loop_helper_with_index(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_expr, PyObject *cpy_r_expr_reg, PyObject *cpy_r_body_insts, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_target_type;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_body_block;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_step_block;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_exit_block;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_condition_block;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_for_gen;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = ((mypyc___ir___ops___ValueObject *)cpy_r_expr_reg)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_rtypes___is_sequence_rprimitive(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 153, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    if (cpy_r_r1) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 153, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = CPyDef_builder___IRBuilder___get_sequence_type(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 154, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    cpy_r_target_type = cpy_r_r3;
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_ops___BasicBlock(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 156, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
    cpy_r_body_block = cpy_r_r5;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPyDef_ops___BasicBlock(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 157, CPyStatic_for_helpers___globals);
        goto CPyL28;
    }
    cpy_r_step_block = cpy_r_r7;
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = CPyDef_ops___BasicBlock(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 158, CPyStatic_for_helpers___globals);
        goto CPyL29;
    }
    cpy_r_exit_block = cpy_r_r9;
    cpy_r_r10 = CPY_INT_TAG;
    cpy_r_r11 = CPyDef_ops___BasicBlock(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 159, CPyStatic_for_helpers___globals);
        goto CPyL30;
    }
    cpy_r_condition_block = cpy_r_r11;
    cpy_r_r12 = CPyDef_for_helpers___ForSequence(cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_exit_block, cpy_r_line, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 161, CPyStatic_for_helpers___globals);
        goto CPyL31;
    }
    cpy_r_for_gen = cpy_r_r12;
    cpy_r_r13 = CPyDef_for_helpers___ForSequence___init(cpy_r_for_gen, cpy_r_expr_reg, cpy_r_target_type, 0);
    CPy_DECREF(cpy_r_target_type);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 162, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    cpy_r_r14 = CPyDef_builder___IRBuilder___push_loop_stack(cpy_r_builder, cpy_r_step_block, cpy_r_exit_block);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 164, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    cpy_r_r15 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_builder, cpy_r_condition_block);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 166, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    cpy_r_r16 = CPyDef_for_helpers___ForSequence___gen_condition(cpy_r_for_gen);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 167, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    cpy_r_r17 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_body_block);
    CPy_DECREF(cpy_r_body_block);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 169, CPyStatic_for_helpers___globals);
        goto CPyL33;
    }
    cpy_r_r18 = CPyDef_for_helpers___ForSequence___begin_body(cpy_r_for_gen);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 170, CPyStatic_for_helpers___globals);
        goto CPyL33;
    }
    cpy_r_r19 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_for_gen)->_index_target;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", "ForSequence", "index_target", 171, CPyStatic_for_helpers___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r19);
CPyL17: ;
    cpy_r_r20 = CPY_INT_TAG;
    cpy_r_r21 = 2;
    cpy_r_r22 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r19, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 171, CPyStatic_for_helpers___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r23[1] = {cpy_r_r22};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = _PyObject_Vectorcall(cpy_r_body_insts, cpy_r_r24, 1, 0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 171, CPyStatic_for_helpers___globals);
        goto CPyL34;
    } else
        goto CPyL35;
CPyL19: ;
    CPy_DECREF(cpy_r_r22);
    cpy_r_r26 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_builder, cpy_r_step_block);
    CPy_DECREF(cpy_r_step_block);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 173, CPyStatic_for_helpers___globals);
        goto CPyL36;
    }
    cpy_r_r27 = CPyDef_for_helpers___ForSequence___gen_step(cpy_r_for_gen);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 174, CPyStatic_for_helpers___globals);
        goto CPyL36;
    }
    cpy_r_r28 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_condition_block);
    CPy_DECREF(cpy_r_condition_block);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 175, CPyStatic_for_helpers___globals);
        goto CPyL37;
    }
    cpy_r_r29 = CPyDef_for_helpers___ForGenerator___add_cleanup(cpy_r_for_gen, cpy_r_exit_block);
    CPy_DECREF(cpy_r_for_gen);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 177, CPyStatic_for_helpers___globals);
        goto CPyL38;
    }
    cpy_r_r30 = CPyDef_builder___IRBuilder___pop_loop_stack(cpy_r_builder);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 178, CPyStatic_for_helpers___globals);
        goto CPyL38;
    }
    cpy_r_r31 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_exit_block);
    CPy_DECREF(cpy_r_exit_block);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 180, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    return 1;
CPyL26: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL27: ;
    CPy_DecRef(cpy_r_target_type);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_target_type);
    CPy_DecRef(cpy_r_body_block);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_target_type);
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_step_block);
    goto CPyL26;
CPyL30: ;
    CPy_DecRef(cpy_r_target_type);
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_step_block);
    CPy_DecRef(cpy_r_exit_block);
    goto CPyL26;
CPyL31: ;
    CPy_DecRef(cpy_r_target_type);
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_step_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_condition_block);
    goto CPyL26;
CPyL32: ;
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_step_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_condition_block);
    CPy_DecRef(cpy_r_for_gen);
    goto CPyL26;
CPyL33: ;
    CPy_DecRef(cpy_r_step_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_condition_block);
    CPy_DecRef(cpy_r_for_gen);
    goto CPyL26;
CPyL34: ;
    CPy_DecRef(cpy_r_step_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_condition_block);
    CPy_DecRef(cpy_r_for_gen);
    CPy_DecRef(cpy_r_r22);
    goto CPyL26;
CPyL35: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL19;
CPyL36: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_condition_block);
    CPy_DecRef(cpy_r_for_gen);
    goto CPyL26;
CPyL37: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_for_gen);
    goto CPyL26;
CPyL38: ;
    CPy_DecRef(cpy_r_exit_block);
    goto CPyL26;
}

PyObject *CPyPy_for_helpers___for_loop_helper_with_index(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "index", "expr", "expr_reg", "body_insts", "line", 0};
    static CPyArg_Parser parser = {"OOOOOO:for_loop_helper_with_index", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_index;
    PyObject *obj_expr;
    PyObject *obj_expr_reg;
    PyObject *obj_body_insts;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_index, &obj_expr, &obj_expr_reg, &obj_body_insts, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_index;
    if (likely(PyObject_TypeCheck(obj_index, CPyType_nodes___Expression)))
        arg_index = obj_index;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_index); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *arg_expr_reg;
    if (likely(PyObject_TypeCheck(obj_expr_reg, CPyType_ops___Value)))
        arg_expr_reg = obj_expr_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_expr_reg); 
        goto fail;
    }
    PyObject *arg_body_insts = obj_body_insts;
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_for_helpers___for_loop_helper_with_index(arg_builder, arg_index, arg_expr, arg_expr_reg, arg_body_insts, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "for_loop_helper_with_index", 134, CPyStatic_for_helpers___globals);
    return NULL;
}

PyObject *CPyDef_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "__get__", -1, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_item_index) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_set_item;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "set_item", "set_item_sequence_from_generator_preallocate_helper_obj", "__mypyc_env__", 219, CPyStatic_for_helpers___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_set_item;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "set_item", "sequence_from_generator_preallocate_helper_env", "set_item", -1, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_set_item = cpy_r_r1;
    CPy_DECREF(cpy_r_set_item);
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "set_item", "sequence_from_generator_preallocate_helper_env", "builder", 220, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "set_item", "sequence_from_generator_preallocate_helper_env", "gen", 220, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r3)->_left_expr;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_builder___IRBuilder___accept(cpy_r_r2, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "set_item", 220, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "set_item", 220, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r6);
        goto CPyL14;
    }
    cpy_r_e = cpy_r_r7;
    cpy_r_r8 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "set_item", "sequence_from_generator_preallocate_helper_env", "builder", 221, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    cpy_r_r9 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_set_item_op;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "set_item", "sequence_from_generator_preallocate_helper_env", "set_item_op", 221, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r9);
CPyL8: ;
    cpy_r_r10 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_target_op;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "set_item", "sequence_from_generator_preallocate_helper_env", "target_op", 221, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r10);
CPyL9: ;
    cpy_r_r11 = PyList_New(3);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "set_item", 221, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
    cpy_r_r12 = (CPyPtr)&((PyListObject *)cpy_r_r11)->ob_item;
    cpy_r_r13 = *(CPyPtr *)cpy_r_r12;
    *(PyObject * *)cpy_r_r13 = cpy_r_r10;
    cpy_r_r14 = cpy_r_r13 + 8;
    CPy_INCREF(cpy_r_item_index);
    *(PyObject * *)cpy_r_r14 = cpy_r_item_index;
    cpy_r_r15 = cpy_r_r13 + 16;
    *(PyObject * *)cpy_r_r15 = cpy_r_e;
    cpy_r_r16 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r16 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'gen' of 'sequence_from_generator_preallocate_helper_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r16);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "set_item", 221, CPyStatic_for_helpers___globals);
        goto CPyL20;
    }
CPyL11: ;
    cpy_r_r17 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r16)->_line;
    CPyTagged_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = CPyDef_builder___IRBuilder___call_c(cpy_r_r8, cpy_r_r9, cpy_r_r11, cpy_r_r17);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "set_item", 221, CPyStatic_for_helpers___globals);
        goto CPyL13;
    } else
        goto CPyL21;
CPyL12: ;
    return 1;
CPyL13: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_e);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r8);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL13;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    goto CPyL13;
CPyL20: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r11);
    goto CPyL13;
CPyL21: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL12;
}

PyObject *CPyPy_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"item_index", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_item_index;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_item_index)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_item_index;
    if (likely(PyObject_TypeCheck(obj_item_index, CPyType_ops___Value)))
        arg_item_index = obj_item_index;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_item_index); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj_____call__(arg___mypyc_self__, arg_item_index);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "set_item", 219, CPyStatic_for_helpers___globals);
    return NULL;
}

PyObject *CPyDef_for_helpers___sequence_from_generator_preallocate_helper(PyObject *cpy_r_builder, PyObject *cpy_r_gen, PyObject *cpy_r_empty_op_llbuilder, PyObject *cpy_r_set_item_op) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_rtype;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_sequence;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_length;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject **cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
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
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    cpy_r_r0 = CPyDef_for_helpers___sequence_from_generator_preallocate_helper_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 183, CPyStatic_for_helpers___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 183, CPyStatic_for_helpers___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_gen);
    if (((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_gen != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_gen);
    }
    ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_gen = cpy_r_gen;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 183, CPyStatic_for_helpers___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_set_item_op);
    if (((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_set_item_op != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_set_item_op);
    }
    ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_set_item_op = cpy_r_set_item_op;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 183, CPyStatic_for_helpers___globals);
        goto CPyL53;
    }
    cpy_r_r4 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", "sequence_from_generator_preallocate_helper_env", "gen", 212, CPyStatic_for_helpers___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_r5 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r4)->_sequences;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = cpy_r_r8 == 2;
    CPy_DECREF(cpy_r_r4);
    if (!cpy_r_r9) goto CPyL54;
    cpy_r_r10 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", "sequence_from_generator_preallocate_helper_env", "gen", 212, CPyStatic_for_helpers___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r10);
CPyL7: ;
    cpy_r_r11 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r10)->_indices;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = cpy_r_r14 == 2;
    CPy_DECREF(cpy_r_r10);
    if (!cpy_r_r15) goto CPyL54;
    cpy_r_r16 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", "sequence_from_generator_preallocate_helper_env", "gen", 212, CPyStatic_for_helpers___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r16);
CPyL9: ;
    cpy_r_r17 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r16)->_condlists;
    cpy_r_r18 = CPyList_GetItemShortBorrow(cpy_r_r17, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 212, CPyStatic_for_helpers___globals);
        goto CPyL55;
    }
    if (likely(PyList_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 212, CPyStatic_for_helpers___globals, "list", cpy_r_r18);
        goto CPyL55;
    }
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = cpy_r_r22 == 0;
    CPy_DECREF(cpy_r_r16);
    if (!cpy_r_r23) goto CPyL54;
    cpy_r_r24 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", "sequence_from_generator_preallocate_helper_env", "builder", 213, CPyStatic_for_helpers___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r24);
CPyL13: ;
    cpy_r_r25 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", "sequence_from_generator_preallocate_helper_env", "gen", 213, CPyStatic_for_helpers___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r25);
CPyL14: ;
    cpy_r_r26 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r25)->_sequences;
    cpy_r_r27 = CPyList_GetItemShort(cpy_r_r26, 0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 213, CPyStatic_for_helpers___globals);
        goto CPyL57;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_nodes___Expression)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 213, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r27);
        goto CPyL57;
    }
    CPy_DECREF(cpy_r_r25);
    cpy_r_r29 = CPyDef_builder___IRBuilder___node_type(cpy_r_r24, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 213, CPyStatic_for_helpers___globals);
        goto CPyL53;
    }
    cpy_r_rtype = cpy_r_r29;
    cpy_r_r30 = CPyDef_rtypes___is_list_rprimitive(cpy_r_rtype);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 214, CPyStatic_for_helpers___globals);
        goto CPyL58;
    }
    if (cpy_r_r30) goto CPyL59;
    cpy_r_r31 = CPyDef_rtypes___is_tuple_rprimitive(cpy_r_rtype);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 214, CPyStatic_for_helpers___globals);
        goto CPyL58;
    }
    if (cpy_r_r31) goto CPyL59;
    cpy_r_r32 = CPyDef_rtypes___is_str_rprimitive(cpy_r_rtype);
    CPy_DECREF(cpy_r_rtype);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 214, CPyStatic_for_helpers___globals);
        goto CPyL53;
    }
    if (!cpy_r_r32) goto CPyL54;
CPyL23: ;
    cpy_r_r33 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", "sequence_from_generator_preallocate_helper_env", "builder", 215, CPyStatic_for_helpers___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r33);
CPyL24: ;
    cpy_r_r34 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", "sequence_from_generator_preallocate_helper_env", "gen", 215, CPyStatic_for_helpers___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r34);
CPyL25: ;
    cpy_r_r35 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r34)->_sequences;
    cpy_r_r36 = CPyList_GetItemShort(cpy_r_r35, 0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 215, CPyStatic_for_helpers___globals);
        goto CPyL61;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r36, CPyType_nodes___Expression)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 215, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r36);
        goto CPyL61;
    }
    CPy_DECREF(cpy_r_r34);
    cpy_r_r38 = 2;
    cpy_r_r39 = CPyDef_builder___IRBuilder___accept(cpy_r_r33, cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 215, CPyStatic_for_helpers___globals);
        goto CPyL53;
    }
    if (likely(cpy_r_r39 != Py_None))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 215, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r39);
        goto CPyL53;
    }
    cpy_r_sequence = cpy_r_r40;
    cpy_r_r41 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", "sequence_from_generator_preallocate_helper_env", "builder", 216, CPyStatic_for_helpers___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r41);
CPyL30: ;
    cpy_r_r42 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r41)->_builder;
    CPy_INCREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", "sequence_from_generator_preallocate_helper_env", "gen", 216, CPyStatic_for_helpers___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r43);
CPyL31: ;
    cpy_r_r44 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r43)->_line;
    CPyTagged_INCREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = CPyDef_ll_builder___LowLevelIRBuilder___builtin_len(cpy_r_r42, cpy_r_sequence, cpy_r_r44, 1);
    CPyTagged_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 216, CPyStatic_for_helpers___globals);
        goto CPyL62;
    }
    cpy_r_length = cpy_r_r45;
    cpy_r_r46 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", "sequence_from_generator_preallocate_helper_env", "gen", 217, CPyStatic_for_helpers___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r46);
CPyL33: ;
    cpy_r_r47 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r46)->_line;
    CPyTagged_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = CPyTagged_StealAsObject(cpy_r_r47);
    PyObject *cpy_r_r49[2] = {cpy_r_length, cpy_r_r48};
    cpy_r_r50 = (PyObject **)&cpy_r_r49;
    cpy_r_r51 = _PyObject_Vectorcall(cpy_r_empty_op_llbuilder, cpy_r_r50, 2, 0);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 217, CPyStatic_for_helpers___globals);
        goto CPyL65;
    }
    CPy_DECREF(cpy_r_length);
    CPy_DECREF(cpy_r_r48);
    if (likely(PyObject_TypeCheck(cpy_r_r51, CPyType_ops___Value)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 217, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r51);
        goto CPyL62;
    }
    if (((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_target_op != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_target_op);
    }
    ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_target_op = cpy_r_r52;
    cpy_r_r53 = 1;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 217, CPyStatic_for_helpers___globals);
        goto CPyL62;
    }
    cpy_r_r54 = CPyDef_for_helpers___set_item_sequence_from_generator_preallocate_helper_obj();
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 219, CPyStatic_for_helpers___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject *)cpy_r_r54)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject *)cpy_r_r54)->___mypyc_env__);
    }
    ((mypyc___irbuild___for_helpers___set_item_sequence_from_generator_preallocate_helper_objObject *)cpy_r_r54)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r55 = 1;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 219, CPyStatic_for_helpers___globals);
        goto CPyL66;
    }
    if (((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_set_item != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_set_item);
    }
    ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_set_item = cpy_r_r54;
    cpy_r_r56 = 1;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 219, CPyStatic_for_helpers___globals);
        goto CPyL62;
    }
    cpy_r_r57 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", "sequence_from_generator_preallocate_helper_env", "builder", 224, CPyStatic_for_helpers___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r57);
CPyL40: ;
    cpy_r_r58 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", "sequence_from_generator_preallocate_helper_env", "gen", 224, CPyStatic_for_helpers___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r58);
CPyL41: ;
    cpy_r_r59 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r58)->_indices;
    cpy_r_r60 = CPyList_GetItemShort(cpy_r_r59, 0);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 224, CPyStatic_for_helpers___globals);
        goto CPyL68;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r60, CPyType_nodes___Expression)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 224, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r60);
        goto CPyL68;
    }
    CPy_DECREF(cpy_r_r58);
    cpy_r_r62 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", "sequence_from_generator_preallocate_helper_env", "gen", 224, CPyStatic_for_helpers___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r62);
CPyL44: ;
    cpy_r_r63 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r62)->_sequences;
    cpy_r_r64 = CPyList_GetItemShort(cpy_r_r63, 0);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 224, CPyStatic_for_helpers___globals);
        goto CPyL70;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r64, CPyType_nodes___Expression)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 224, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r64);
        goto CPyL70;
    }
    CPy_DECREF(cpy_r_r62);
    cpy_r_r66 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_set_item;
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", "sequence_from_generator_preallocate_helper_env", "set_item", 224, CPyStatic_for_helpers___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r66);
CPyL47: ;
    cpy_r_r67 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", "sequence_from_generator_preallocate_helper_env", "gen", 224, CPyStatic_for_helpers___globals);
        goto CPyL72;
    }
    CPy_INCREF(cpy_r_r67);
CPyL48: ;
    cpy_r_r68 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r67)->_line;
    CPyTagged_INCREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r69 = CPyDef_for_helpers___for_loop_helper_with_index(cpy_r_r57, cpy_r_r61, cpy_r_r65, cpy_r_sequence, cpy_r_r66, cpy_r_r68);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_sequence);
    CPy_DECREF(cpy_r_r66);
    CPyTagged_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 223, CPyStatic_for_helpers___globals);
        goto CPyL53;
    }
    cpy_r_r70 = ((mypyc___irbuild___for_helpers___sequence_from_generator_preallocate_helper_envObject *)cpy_r_r0)->_target_op;
    if (unlikely(cpy_r_r70 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'target_op' of 'sequence_from_generator_preallocate_helper_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r70);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 227, CPyStatic_for_helpers___globals);
        goto CPyL52;
    }
CPyL50: ;
    return cpy_r_r70;
CPyL51: ;
    cpy_r_r71 = Py_None;
    CPy_INCREF(cpy_r_r71);
    return cpy_r_r71;
CPyL52: ;
    cpy_r_r72 = NULL;
    return cpy_r_r72;
CPyL53: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL52;
CPyL54: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL51;
CPyL55: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16);
    goto CPyL52;
CPyL56: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    goto CPyL52;
CPyL57: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    goto CPyL52;
CPyL58: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_rtype);
    goto CPyL52;
CPyL59: ;
    CPy_DECREF(cpy_r_rtype);
    goto CPyL23;
CPyL60: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r33);
    goto CPyL52;
CPyL61: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    goto CPyL52;
CPyL62: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_sequence);
    goto CPyL52;
CPyL63: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_sequence);
    CPy_DecRef(cpy_r_r42);
    goto CPyL52;
CPyL64: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_sequence);
    CPy_DecRef(cpy_r_length);
    goto CPyL52;
CPyL65: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_sequence);
    CPy_DecRef(cpy_r_length);
    CPy_DecRef(cpy_r_r48);
    goto CPyL52;
CPyL66: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_sequence);
    CPy_DecRef(cpy_r_r54);
    goto CPyL52;
CPyL67: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_sequence);
    CPy_DecRef(cpy_r_r57);
    goto CPyL52;
CPyL68: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_sequence);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r58);
    goto CPyL52;
CPyL69: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_sequence);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r61);
    goto CPyL52;
CPyL70: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_sequence);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    goto CPyL52;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_sequence);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r65);
    goto CPyL52;
CPyL72: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_sequence);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r66);
    goto CPyL52;
}

PyObject *CPyPy_for_helpers___sequence_from_generator_preallocate_helper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "gen", "empty_op_llbuilder", "set_item_op", 0};
    static CPyArg_Parser parser = {"OOOO:sequence_from_generator_preallocate_helper", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_gen;
    PyObject *obj_empty_op_llbuilder;
    PyObject *obj_set_item_op;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_gen, &obj_empty_op_llbuilder, &obj_set_item_op)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_gen;
    if (likely(Py_TYPE(obj_gen) == CPyType_nodes___GeneratorExpr))
        arg_gen = obj_gen;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_gen); 
        goto fail;
    }
    PyObject *arg_empty_op_llbuilder = obj_empty_op_llbuilder;
    PyObject * arg_set_item_op;
    if (likely(PyTuple_Check(obj_set_item_op)))
        arg_set_item_op = obj_set_item_op;
    else {
        CPy_TypeError("tuple", obj_set_item_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_for_helpers___sequence_from_generator_preallocate_helper(arg_builder, arg_gen, arg_empty_op_llbuilder, arg_set_item_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "sequence_from_generator_preallocate_helper", 183, CPyStatic_for_helpers___globals);
    return NULL;
}

PyObject *CPyDef_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "__get__", -1, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_gen_inner_stmts;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", "gen_inner_stmts_translate_list_comprehension_obj", "__mypyc_env__", 246, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen_inner_stmts;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", "translate_list_comprehension_env", "gen_inner_stmts", -1, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_gen_inner_stmts = cpy_r_r1;
    CPy_DECREF(cpy_r_gen_inner_stmts);
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", "translate_list_comprehension_env", "builder", 247, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", "translate_list_comprehension_env", "gen", 247, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r3)->_left_expr;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_builder___IRBuilder___accept(cpy_r_r2, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 247, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 247, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r6);
        goto CPyL17;
    }
    cpy_r_e = cpy_r_r7;
    cpy_r_r8 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", "translate_list_comprehension_env", "builder", 248, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    cpy_r_r9 = CPyStatic_for_helpers___globals;
    cpy_r_r10 = CPyStatics[8227]; /* 'list_append_op' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 248, CPyStatic_for_helpers___globals);
        goto CPyL20;
    }
    if (likely(PyTuple_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 248, CPyStatic_for_helpers___globals, "tuple", cpy_r_r11);
        goto CPyL20;
    }
    cpy_r_r13 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", "translate_list_comprehension_env", "builder", 248, CPyStatic_for_helpers___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r13);
CPyL10: ;
    cpy_r_r14 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_list_ops;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", "translate_list_comprehension_env", "list_ops", 248, CPyStatic_for_helpers___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r14);
CPyL11: ;
    cpy_r_r15 = CPY_INT_TAG;
    cpy_r_r16 = 2;
    cpy_r_r17 = CPyDef_builder___IRBuilder___read(cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 248, CPyStatic_for_helpers___globals);
        goto CPyL21;
    }
    cpy_r_r18 = PyList_New(2);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 248, CPyStatic_for_helpers___globals);
        goto CPyL23;
    }
    cpy_r_r19 = (CPyPtr)&((PyListObject *)cpy_r_r18)->ob_item;
    cpy_r_r20 = *(CPyPtr *)cpy_r_r19;
    *(PyObject * *)cpy_r_r20 = cpy_r_r17;
    cpy_r_r21 = cpy_r_r20 + 8;
    *(PyObject * *)cpy_r_r21 = cpy_r_e;
    cpy_r_r22 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r22 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'gen' of 'translate_list_comprehension_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r22);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 248, CPyStatic_for_helpers___globals);
        goto CPyL24;
    }
CPyL14: ;
    cpy_r_r23 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r22)->_line;
    CPyTagged_INCREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = CPyDef_builder___IRBuilder___call_c(cpy_r_r8, cpy_r_r12, cpy_r_r18, cpy_r_r23);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r18);
    CPyTagged_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 248, CPyStatic_for_helpers___globals);
        goto CPyL16;
    } else
        goto CPyL25;
CPyL15: ;
    return 1;
CPyL16: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_e);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r8);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r12);
    goto CPyL16;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r17);
    goto CPyL16;
CPyL24: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r18);
    goto CPyL16;
CPyL25: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL15;
}

PyObject *CPyPy_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_for_helpers___gen_inner_stmts_translate_list_comprehension_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 246, CPyStatic_for_helpers___globals);
    return NULL;
}

PyObject *CPyDef_for_helpers___translate_list_comprehension(PyObject *cpy_r_builder, PyObject *cpy_r_gen) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
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
    PyObject *cpy_r_val;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
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
    PyObject **cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_loop_params;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    cpy_r_r0 = CPyDef_for_helpers___translate_list_comprehension_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 231, CPyStatic_for_helpers___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 231, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_gen);
    if (((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen);
    }
    ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen = cpy_r_gen;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 231, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    cpy_r_r3 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", "translate_list_comprehension_env", "builder", 234, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", "translate_list_comprehension_env", "gen", 235, CPyStatic_for_helpers___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_r5 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", "translate_list_comprehension_env", "builder", 236, CPyStatic_for_helpers___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r5);
CPyL6: ;
    cpy_r_r6 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r5)->_builder;
    CPy_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = CPyStatics[8263]; /* 'new_list_op_with_length' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 236, CPyStatic_for_helpers___globals);
        goto CPyL41;
    }
    cpy_r_r9 = CPyStatic_for_helpers___globals;
    cpy_r_r10 = CPyStatics[8264]; /* 'new_list_set_item_op' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 237, CPyStatic_for_helpers___globals);
        goto CPyL42;
    }
    if (likely(PyTuple_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 237, CPyStatic_for_helpers___globals, "tuple", cpy_r_r11);
        goto CPyL42;
    }
    cpy_r_r13 = CPyDef_for_helpers___sequence_from_generator_preallocate_helper(cpy_r_r3, cpy_r_r4, cpy_r_r8, cpy_r_r12);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 233, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    cpy_r_val = cpy_r_r13;
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_val != cpy_r_r14;
    if (cpy_r_r15) {
        goto CPyL43;
    } else
        goto CPyL44;
CPyL11: ;
    if (likely(cpy_r_val != Py_None))
        cpy_r_r16 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 240, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_val);
        goto CPyL38;
    }
    return cpy_r_r16;
CPyL13: ;
    cpy_r_r17 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", "translate_list_comprehension_env", "builder", 242, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r17);
CPyL14: ;
    cpy_r_r18 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", "translate_list_comprehension_env", "builder", 242, CPyStatic_for_helpers___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_r18);
CPyL15: ;
    cpy_r_r19 = PyList_New(0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 242, CPyStatic_for_helpers___globals);
        goto CPyL46;
    }
    cpy_r_r20 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", "translate_list_comprehension_env", "gen", 242, CPyStatic_for_helpers___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r20);
CPyL17: ;
    cpy_r_r21 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r20)->_line;
    CPyTagged_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = CPyDef_builder___IRBuilder___new_list_op(cpy_r_r18, cpy_r_r19, cpy_r_r21);
    CPy_DECREF(cpy_r_r19);
    CPyTagged_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 242, CPyStatic_for_helpers___globals);
        goto CPyL45;
    }
    cpy_r_r23 = CPyDef_builder___IRBuilder___maybe_spill(cpy_r_r17, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 242, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    if (((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_list_ops != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_list_ops);
    }
    ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_list_ops = cpy_r_r23;
    cpy_r_r24 = 1;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 242, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    cpy_r_r25 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", "translate_list_comprehension_env", "gen", 244, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r25);
CPyL21: ;
    cpy_r_r26 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r25)->_indices;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", "translate_list_comprehension_env", "gen", 244, CPyStatic_for_helpers___globals);
        goto CPyL48;
    }
    CPy_INCREF(cpy_r_r27);
CPyL22: ;
    cpy_r_r28 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r27)->_sequences;
    CPy_INCREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", "translate_list_comprehension_env", "gen", 244, CPyStatic_for_helpers___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r29);
CPyL23: ;
    cpy_r_r30 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r29)->_condlists;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", "translate_list_comprehension_env", "gen", 244, CPyStatic_for_helpers___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r31);
CPyL24: ;
    cpy_r_r32 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r31)->_is_async;
    CPy_INCREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = CPyModule_builtins;
    cpy_r_r34 = CPyStatics[794]; /* 'zip' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 244, CPyStatic_for_helpers___globals);
        goto CPyL51;
    }
    PyObject *cpy_r_r36[4] = {cpy_r_r26, cpy_r_r28, cpy_r_r30, cpy_r_r32};
    cpy_r_r37 = (PyObject **)&cpy_r_r36;
    cpy_r_r38 = _PyObject_Vectorcall(cpy_r_r35, cpy_r_r37, 4, 0);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 244, CPyStatic_for_helpers___globals);
        goto CPyL51;
    }
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r39 = PySequence_List(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 244, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    cpy_r_loop_params = cpy_r_r39;
    cpy_r_r40 = CPyDef_for_helpers___gen_inner_stmts_translate_list_comprehension_obj();
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 246, CPyStatic_for_helpers___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject *)cpy_r_r40)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject *)cpy_r_r40)->___mypyc_env__);
    }
    ((mypyc___irbuild___for_helpers___gen_inner_stmts_translate_list_comprehension_objObject *)cpy_r_r40)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r41 = 1;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 246, CPyStatic_for_helpers___globals);
        goto CPyL53;
    }
    if (((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen_inner_stmts != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen_inner_stmts);
    }
    ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen_inner_stmts = cpy_r_r40;
    cpy_r_r42 = 1;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 246, CPyStatic_for_helpers___globals);
        goto CPyL52;
    }
    cpy_r_r43 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", "translate_list_comprehension_env", "builder", 250, CPyStatic_for_helpers___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r43);
CPyL31: ;
    cpy_r_r44 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen_inner_stmts;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", "translate_list_comprehension_env", "gen_inner_stmts", 250, CPyStatic_for_helpers___globals);
        goto CPyL54;
    }
    CPy_INCREF(cpy_r_r44);
CPyL32: ;
    cpy_r_r45 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", "translate_list_comprehension_env", "gen", 250, CPyStatic_for_helpers___globals);
        goto CPyL55;
    }
    CPy_INCREF(cpy_r_r45);
CPyL33: ;
    cpy_r_r46 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r45)->_line;
    CPyTagged_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = CPyDef_for_helpers___comprehension_helper(cpy_r_r43, cpy_r_loop_params, cpy_r_r44, cpy_r_r46);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_loop_params);
    CPy_DECREF(cpy_r_r44);
    CPyTagged_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 250, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    cpy_r_r48 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", "translate_list_comprehension_env", "builder", 251, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r48);
CPyL35: ;
    cpy_r_r49 = ((mypyc___irbuild___for_helpers___translate_list_comprehension_envObject *)cpy_r_r0)->_list_ops;
    if (unlikely(cpy_r_r49 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'list_ops' of 'translate_list_comprehension_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r49);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 251, CPyStatic_for_helpers___globals);
        goto CPyL56;
    }
CPyL36: ;
    cpy_r_r50 = CPY_INT_TAG;
    cpy_r_r51 = 2;
    cpy_r_r52 = CPyDef_builder___IRBuilder___read(cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 251, CPyStatic_for_helpers___globals);
        goto CPyL38;
    }
    return cpy_r_r52;
CPyL38: ;
    cpy_r_r53 = NULL;
    return cpy_r_r53;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL38;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL38;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL38;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r8);
    goto CPyL38;
CPyL43: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL11;
CPyL44: ;
    CPy_DECREF(cpy_r_val);
    goto CPyL13;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r17);
    goto CPyL38;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    goto CPyL38;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL38;
CPyL48: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r26);
    goto CPyL38;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r28);
    goto CPyL38;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    goto CPyL38;
CPyL51: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r32);
    goto CPyL38;
CPyL52: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    goto CPyL38;
CPyL53: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r40);
    goto CPyL38;
CPyL54: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r43);
    goto CPyL38;
CPyL55: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r44);
    goto CPyL38;
CPyL56: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL38;
}

PyObject *CPyPy_for_helpers___translate_list_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "gen", 0};
    static CPyArg_Parser parser = {"OO:translate_list_comprehension", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_gen;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_gen)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_gen;
    if (likely(Py_TYPE(obj_gen) == CPyType_nodes___GeneratorExpr))
        arg_gen = obj_gen;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_gen); 
        goto fail;
    }
    PyObject *retval = CPyDef_for_helpers___translate_list_comprehension(arg_builder, arg_gen);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_list_comprehension", 231, CPyStatic_for_helpers___globals);
    return NULL;
}

PyObject *CPyDef_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "__get__", -1, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_gen_inner_stmts;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", "gen_inner_stmts_translate_set_comprehension_obj", "__mypyc_env__", 258, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_gen_inner_stmts;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", "translate_set_comprehension_env", "gen_inner_stmts", -1, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_gen_inner_stmts = cpy_r_r1;
    CPy_DECREF(cpy_r_gen_inner_stmts);
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", "translate_set_comprehension_env", "builder", 259, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", "translate_set_comprehension_env", "gen", 259, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r3)->_left_expr;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_builder___IRBuilder___accept(cpy_r_r2, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 259, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 259, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r6);
        goto CPyL17;
    }
    cpy_r_e = cpy_r_r7;
    cpy_r_r8 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", "translate_set_comprehension_env", "builder", 260, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    cpy_r_r9 = CPyStatic_for_helpers___globals;
    cpy_r_r10 = CPyStatics[8231]; /* 'set_add_op' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 260, CPyStatic_for_helpers___globals);
        goto CPyL20;
    }
    if (likely(PyTuple_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 260, CPyStatic_for_helpers___globals, "tuple", cpy_r_r11);
        goto CPyL20;
    }
    cpy_r_r13 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", "translate_set_comprehension_env", "builder", 260, CPyStatic_for_helpers___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r13);
CPyL10: ;
    cpy_r_r14 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_set_ops;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", "translate_set_comprehension_env", "set_ops", 260, CPyStatic_for_helpers___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r14);
CPyL11: ;
    cpy_r_r15 = CPY_INT_TAG;
    cpy_r_r16 = 2;
    cpy_r_r17 = CPyDef_builder___IRBuilder___read(cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 260, CPyStatic_for_helpers___globals);
        goto CPyL21;
    }
    cpy_r_r18 = PyList_New(2);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 260, CPyStatic_for_helpers___globals);
        goto CPyL23;
    }
    cpy_r_r19 = (CPyPtr)&((PyListObject *)cpy_r_r18)->ob_item;
    cpy_r_r20 = *(CPyPtr *)cpy_r_r19;
    *(PyObject * *)cpy_r_r20 = cpy_r_r17;
    cpy_r_r21 = cpy_r_r20 + 8;
    *(PyObject * *)cpy_r_r21 = cpy_r_e;
    cpy_r_r22 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r22 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'gen' of 'translate_set_comprehension_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r22);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 260, CPyStatic_for_helpers___globals);
        goto CPyL24;
    }
CPyL14: ;
    cpy_r_r23 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r22)->_line;
    CPyTagged_INCREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = CPyDef_builder___IRBuilder___call_c(cpy_r_r8, cpy_r_r12, cpy_r_r18, cpy_r_r23);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r18);
    CPyTagged_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 260, CPyStatic_for_helpers___globals);
        goto CPyL16;
    } else
        goto CPyL25;
CPyL15: ;
    return 1;
CPyL16: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_e);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r8);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r12);
    goto CPyL16;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r17);
    goto CPyL16;
CPyL24: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r18);
    goto CPyL16;
CPyL25: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL15;
}

PyObject *CPyPy_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_for_helpers___gen_inner_stmts_translate_set_comprehension_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_inner_stmts", 258, CPyStatic_for_helpers___globals);
    return NULL;
}

PyObject *CPyDef_for_helpers___translate_set_comprehension(PyObject *cpy_r_builder, PyObject *cpy_r_gen) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
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
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_loop_params;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    cpy_r_r0 = CPyDef_for_helpers___translate_set_comprehension_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 254, CPyStatic_for_helpers___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 254, CPyStatic_for_helpers___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_gen);
    if (((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_gen != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_gen);
    }
    ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_gen = cpy_r_gen;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 254, CPyStatic_for_helpers___globals);
        goto CPyL29;
    }
    cpy_r_r3 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", "translate_set_comprehension_env", "builder", 255, CPyStatic_for_helpers___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", "translate_set_comprehension_env", "builder", 255, CPyStatic_for_helpers___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 255, CPyStatic_for_helpers___globals);
        goto CPyL31;
    }
    cpy_r_r6 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", "translate_set_comprehension_env", "gen", 255, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r6)->_line;
    CPyTagged_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = CPyDef_builder___IRBuilder___new_set_op(cpy_r_r4, cpy_r_r5, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 255, CPyStatic_for_helpers___globals);
        goto CPyL30;
    }
    cpy_r_r9 = CPyDef_builder___IRBuilder___maybe_spill(cpy_r_r3, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 255, CPyStatic_for_helpers___globals);
        goto CPyL29;
    }
    if (((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_set_ops != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_set_ops);
    }
    ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_set_ops = cpy_r_r9;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 255, CPyStatic_for_helpers___globals);
        goto CPyL29;
    }
    cpy_r_r11 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", "translate_set_comprehension_env", "gen", 256, CPyStatic_for_helpers___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r11);
CPyL11: ;
    cpy_r_r12 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r11)->_indices;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", "translate_set_comprehension_env", "gen", 256, CPyStatic_for_helpers___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r13);
CPyL12: ;
    cpy_r_r14 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r13)->_sequences;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", "translate_set_comprehension_env", "gen", 256, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r15);
CPyL13: ;
    cpy_r_r16 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r15)->_condlists;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", "translate_set_comprehension_env", "gen", 256, CPyStatic_for_helpers___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r17);
CPyL14: ;
    cpy_r_r18 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r17)->_is_async;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = CPyModule_builtins;
    cpy_r_r20 = CPyStatics[794]; /* 'zip' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 256, CPyStatic_for_helpers___globals);
        goto CPyL36;
    }
    PyObject *cpy_r_r22[4] = {cpy_r_r12, cpy_r_r14, cpy_r_r16, cpy_r_r18};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r23, 4, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 256, CPyStatic_for_helpers___globals);
        goto CPyL36;
    }
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r25 = PySequence_List(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 256, CPyStatic_for_helpers___globals);
        goto CPyL29;
    }
    cpy_r_loop_params = cpy_r_r25;
    cpy_r_r26 = CPyDef_for_helpers___gen_inner_stmts_translate_set_comprehension_obj();
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 258, CPyStatic_for_helpers___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject *)cpy_r_r26)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject *)cpy_r_r26)->___mypyc_env__);
    }
    ((mypyc___irbuild___for_helpers___gen_inner_stmts_translate_set_comprehension_objObject *)cpy_r_r26)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r27 = 1;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 258, CPyStatic_for_helpers___globals);
        goto CPyL38;
    }
    if (((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_gen_inner_stmts != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_gen_inner_stmts);
    }
    ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_gen_inner_stmts = cpy_r_r26;
    cpy_r_r28 = 1;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 258, CPyStatic_for_helpers___globals);
        goto CPyL37;
    }
    cpy_r_r29 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", "translate_set_comprehension_env", "builder", 262, CPyStatic_for_helpers___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r29);
CPyL21: ;
    cpy_r_r30 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_gen_inner_stmts;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", "translate_set_comprehension_env", "gen_inner_stmts", 262, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r30);
CPyL22: ;
    cpy_r_r31 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_gen;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", "translate_set_comprehension_env", "gen", 262, CPyStatic_for_helpers___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r31);
CPyL23: ;
    cpy_r_r32 = ((mypy___nodes___GeneratorExprObject *)cpy_r_r31)->_line;
    CPyTagged_INCREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = CPyDef_for_helpers___comprehension_helper(cpy_r_r29, cpy_r_loop_params, cpy_r_r30, cpy_r_r32);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_loop_params);
    CPy_DECREF(cpy_r_r30);
    CPyTagged_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 262, CPyStatic_for_helpers___globals);
        goto CPyL29;
    }
    cpy_r_r34 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", "translate_set_comprehension_env", "builder", 263, CPyStatic_for_helpers___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r34);
CPyL25: ;
    cpy_r_r35 = ((mypyc___irbuild___for_helpers___translate_set_comprehension_envObject *)cpy_r_r0)->_set_ops;
    if (unlikely(cpy_r_r35 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'set_ops' of 'translate_set_comprehension_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r35);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 263, CPyStatic_for_helpers___globals);
        goto CPyL41;
    }
CPyL26: ;
    cpy_r_r36 = CPY_INT_TAG;
    cpy_r_r37 = 2;
    cpy_r_r38 = CPyDef_builder___IRBuilder___read(cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 263, CPyStatic_for_helpers___globals);
        goto CPyL28;
    }
    return cpy_r_r38;
CPyL28: ;
    cpy_r_r39 = NULL;
    return cpy_r_r39;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL28;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL28;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL28;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL28;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    goto CPyL28;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    goto CPyL28;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    goto CPyL28;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    goto CPyL28;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    goto CPyL28;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r26);
    goto CPyL28;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r29);
    goto CPyL28;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_loop_params);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r30);
    goto CPyL28;
CPyL41: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL28;
}

PyObject *CPyPy_for_helpers___translate_set_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "gen", 0};
    static CPyArg_Parser parser = {"OO:translate_set_comprehension", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_gen;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_gen)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_gen;
    if (likely(Py_TYPE(obj_gen) == CPyType_nodes___GeneratorExpr))
        arg_gen = obj_gen;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_gen); 
        goto fail;
    }
    PyObject *retval = CPyDef_for_helpers___translate_set_comprehension(arg_builder, arg_gen);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "translate_set_comprehension", 254, CPyStatic_for_helpers___globals);
    return NULL;
}

PyObject *CPyDef_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "__get__", -1, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "<lambda>", "__mypyc_lambda__0_comprehension_helper_handle_loop_obj", "__mypyc_env__", 294, CPyStatic_for_helpers___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *)cpy_r_r0)->___mypyc_env__;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "<lambda>", "handle_loop_comprehension_helper_env", "__mypyc_env__", 294, CPyStatic_for_helpers___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *)cpy_r_r0)->_conds;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "<lambda>", "handle_loop_comprehension_helper_env", "conds", 294, CPyStatic_for_helpers___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *)cpy_r_r0)->_loop_params;
    if (unlikely(cpy_r_r3 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'loop_params' of 'handle_loop_comprehension_helper_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r3);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<lambda>", 294, CPyStatic_for_helpers___globals);
        goto CPyL13;
    }
CPyL4: ;
    cpy_r_r4 = CPyList_GetSlice(cpy_r_r3, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<lambda>", 294, CPyStatic_for_helpers___globals);
        goto CPyL13;
    }
    if (likely(PyList_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "<lambda>", 294, CPyStatic_for_helpers___globals, "list", cpy_r_r4);
        goto CPyL13;
    }
    cpy_r_r6 = ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r1)->_loop_contents;
    if (unlikely(cpy_r_r6 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'loop_contents' of 'comprehension_helper_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r6);
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<lambda>", 294, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
CPyL7: ;
    PyObject *cpy_r_r7[2] = {cpy_r_r2, cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 2, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<lambda>", 294, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 != Py_None)) {
        CPy_TypeError("None", cpy_r_r9); cpy_r_r10 = 2;
    } else
        cpy_r_r10 = 1;
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<lambda>", 294, CPyStatic_for_helpers___globals);
        goto CPyL10;
    }
    return cpy_r_r10;
CPyL10: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL10;
}

PyObject *CPyPy_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<lambda>", 294, CPyStatic_for_helpers___globals);
    return NULL;
}

PyObject *CPyDef_for_helpers___handle_loop_comprehension_helper_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_for_helpers___handle_loop_comprehension_helper_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_for_helpers___handle_loop_comprehension_helper_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "__get__", -1, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___handle_loop_comprehension_helper_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_loop_params) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_handle_loop;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T4OOOC cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_index;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_expr;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_is_async;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "handle_loop", "handle_loop_comprehension_helper_obj", "__mypyc_env__", 283, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_handle_loop;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "handle_loop", "comprehension_helper_env", "handle_loop", -1, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_handle_loop = cpy_r_r1;
    CPy_DECREF(cpy_r_handle_loop);
    cpy_r_r2 = CPyDef_for_helpers___handle_loop_comprehension_helper_env();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "handle_loop", 283, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "handle_loop", 283, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_loop_params);
    if (((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *)cpy_r_r2)->_loop_params != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *)cpy_r_r2)->_loop_params);
    }
    ((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *)cpy_r_r2)->_loop_params = cpy_r_loop_params;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "handle_loop", 283, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    cpy_r_r5 = ((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *)cpy_r_r2)->_loop_params;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "handle_loop", "handle_loop_comprehension_helper_env", "loop_params", 289, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r5);
CPyL6: ;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_r5, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "handle_loop", 289, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    PyObject *__tmp10167;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 4))) {
        __tmp10167 = NULL;
        goto __LL10168;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r6, 0), CPyType_nodes___Expression)))
        __tmp10167 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp10167 = NULL;
    }
    if (__tmp10167 == NULL) goto __LL10168;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r6, 1), CPyType_nodes___Expression)))
        __tmp10167 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp10167 = NULL;
    }
    if (__tmp10167 == NULL) goto __LL10168;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r6, 2))))
        __tmp10167 = PyTuple_GET_ITEM(cpy_r_r6, 2);
    else {
        __tmp10167 = NULL;
    }
    if (__tmp10167 == NULL) goto __LL10168;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r6, 3))))
        __tmp10167 = PyTuple_GET_ITEM(cpy_r_r6, 3);
    else {
        __tmp10167 = NULL;
    }
    if (__tmp10167 == NULL) goto __LL10168;
    __tmp10167 = cpy_r_r6;
__LL10168: ;
    if (unlikely(__tmp10167 == NULL)) {
        CPy_TypeError("tuple[mypy.nodes.Expression, mypy.nodes.Expression, list, bool]", cpy_r_r6); cpy_r_r7 = (tuple_T4OOOC) { NULL, NULL, NULL, 2 };
    } else {
        PyObject *__tmp10169 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp10169);
        PyObject *__tmp10170;
        if (likely(PyObject_TypeCheck(__tmp10169, CPyType_nodes___Expression)))
            __tmp10170 = __tmp10169;
        else {
            CPy_TypeError("mypy.nodes.Expression", __tmp10169); 
            __tmp10170 = NULL;
        }
        cpy_r_r7.f0 = __tmp10170;
        PyObject *__tmp10171 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp10171);
        PyObject *__tmp10172;
        if (likely(PyObject_TypeCheck(__tmp10171, CPyType_nodes___Expression)))
            __tmp10172 = __tmp10171;
        else {
            CPy_TypeError("mypy.nodes.Expression", __tmp10171); 
            __tmp10172 = NULL;
        }
        cpy_r_r7.f1 = __tmp10172;
        PyObject *__tmp10173 = PyTuple_GET_ITEM(cpy_r_r6, 2);
        CPy_INCREF(__tmp10173);
        PyObject *__tmp10174;
        if (likely(PyList_Check(__tmp10173)))
            __tmp10174 = __tmp10173;
        else {
            CPy_TypeError("list", __tmp10173); 
            __tmp10174 = NULL;
        }
        cpy_r_r7.f2 = __tmp10174;
        PyObject *__tmp10175 = PyTuple_GET_ITEM(cpy_r_r6, 3);
        char __tmp10176;
        if (unlikely(!PyBool_Check(__tmp10175))) {
            CPy_TypeError("bool", __tmp10175); __tmp10176 = 2;
        } else
            __tmp10176 = __tmp10175 == Py_True;
        cpy_r_r7.f3 = __tmp10176;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "handle_loop", 289, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_index = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    cpy_r_expr = cpy_r_r9;
    cpy_r_r10 = cpy_r_r7.f2;
    CPy_INCREF(cpy_r_r10);
    if (((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *)cpy_r_r2)->_conds != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *)cpy_r_r2)->_conds);
    }
    ((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_envObject *)cpy_r_r2)->_conds = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "handle_loop", 289, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    cpy_r_r12 = cpy_r_r7.f3;
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    CPy_DECREF(cpy_r_r7.f2);
    cpy_r_is_async = cpy_r_r12;
    cpy_r_r13 = ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "handle_loop", "comprehension_helper_env", "builder", 291, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r13);
CPyL10: ;
    cpy_r_r14 = CPyDef_for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_obj();
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "handle_loop", 294, CPyStatic_for_helpers___globals);
        goto CPyL20;
    }
    if (((mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject *)cpy_r_r14)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject *)cpy_r_r14)->___mypyc_env__);
    }
    ((mypyc___irbuild___for_helpers_____mypyc_lambda__0_comprehension_helper_handle_loop_objObject *)cpy_r_r14)->___mypyc_env__ = cpy_r_r2;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "handle_loop", 294, CPyStatic_for_helpers___globals);
        goto CPyL21;
    }
    cpy_r_r16 = ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'comprehension_helper_env' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r16);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "handle_loop", 297, CPyStatic_for_helpers___globals);
        goto CPyL22;
    }
CPyL13: ;
    cpy_r_r17 = Py_None;
    cpy_r_r18 = CPyDef_for_helpers___for_loop_helper(cpy_r_r13, cpy_r_index, cpy_r_expr, cpy_r_r14, cpy_r_r17, cpy_r_is_async, cpy_r_r16);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_index);
    CPy_DECREF(cpy_r_expr);
    CPy_DECREF(cpy_r_r14);
    CPyTagged_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "handle_loop", 290, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r7.f0);
    CPy_DecRef(cpy_r_r7.f1);
    CPy_DecRef(cpy_r_r7.f2);
    CPy_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_expr);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_expr);
    goto CPyL15;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_r13);
    goto CPyL15;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL15;
CPyL22: ;
    CPy_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL15;
}

PyObject *CPyPy_for_helpers___handle_loop_comprehension_helper_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"loop_params", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_loop_params;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_loop_params)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_loop_params;
    if (likely(PyList_Check(obj_loop_params)))
        arg_loop_params = obj_loop_params;
    else {
        CPy_TypeError("list", obj_loop_params); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___handle_loop_comprehension_helper_obj_____call__(arg___mypyc_self__, arg_loop_params);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "handle_loop", 283, CPyStatic_for_helpers___globals);
    return NULL;
}

PyObject *CPyDef_for_helpers___loop_contents_comprehension_helper_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_for_helpers___loop_contents_comprehension_helper_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_for_helpers___loop_contents_comprehension_helper_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "__get__", -1, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___loop_contents_comprehension_helper_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_conds, PyObject *cpy_r_remaining_loop_params) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_loop_contents;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_cond;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_cond_val;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_cont_block;
    PyObject *cpy_r_rest_block;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyPtr cpy_r_r33;
    int64_t cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "loop_contents", "loop_contents_comprehension_helper_obj", "__mypyc_env__", 300, CPyStatic_for_helpers___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_loop_contents;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "loop_contents", "comprehension_helper_env", "loop_contents", -1, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_loop_contents = cpy_r_r1;
    CPy_DECREF(cpy_r_loop_contents);
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_conds)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL23;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_conds, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_nodes___Expression)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 313, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r7);
        goto CPyL32;
    }
    cpy_r_cond = cpy_r_r8;
    cpy_r_r9 = ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "loop_contents", "comprehension_helper_env", "builder", 314, CPyStatic_for_helpers___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r9);
CPyL6: ;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_builder___IRBuilder___accept(cpy_r_r9, cpy_r_cond, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 314, CPyStatic_for_helpers___globals);
        goto CPyL33;
    }
    if (likely(cpy_r_r11 != Py_None))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 314, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r11);
        goto CPyL33;
    }
    cpy_r_cond_val = cpy_r_r12;
    cpy_r_r13 = CPY_INT_TAG;
    cpy_r_r14 = CPyDef_ops___BasicBlock(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 315, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    cpy_r_r15 = cpy_r_r14;
    cpy_r_r16 = CPY_INT_TAG;
    cpy_r_r17 = CPyDef_ops___BasicBlock(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 315, CPyStatic_for_helpers___globals);
        goto CPyL35;
    }
    cpy_r_r18 = cpy_r_r17;
    cpy_r_cont_block = cpy_r_r15;
    cpy_r_rest_block = cpy_r_r18;
    cpy_r_r19 = ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "loop_contents", "comprehension_helper_env", "builder", 317, CPyStatic_for_helpers___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r19);
CPyL11: ;
    cpy_r_r20 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_r19, cpy_r_cond_val, cpy_r_rest_block, cpy_r_cont_block);
    CPy_DECREF(cpy_r_cond_val);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 317, CPyStatic_for_helpers___globals);
        goto CPyL37;
    }
    cpy_r_r21 = ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "loop_contents", "comprehension_helper_env", "builder", 318, CPyStatic_for_helpers___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r21);
CPyL13: ;
    cpy_r_r22 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r21, cpy_r_cont_block);
    CPy_DECREF(cpy_r_cont_block);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 318, CPyStatic_for_helpers___globals);
        goto CPyL38;
    }
    cpy_r_r23 = ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "loop_contents", "comprehension_helper_env", "builder", 319, CPyStatic_for_helpers___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r23);
CPyL15: ;
    cpy_r_r24 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r23)->_nonlocal_control;
    cpy_r_r25 = CPyList_GetItemShort(cpy_r_r24, -2);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 319, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r25, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 319, CPyStatic_for_helpers___globals, "mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r25);
        goto CPyL39;
    }
    CPy_DECREF(cpy_r_r23);
    cpy_r_r27 = ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "loop_contents", "comprehension_helper_env", "builder", 319, CPyStatic_for_helpers___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r27);
CPyL18: ;
    cpy_r_r28 = ((mypy___nodes___ContextObject *)cpy_r_cond)->_line;
    if (unlikely(cpy_r_r28 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'Expression' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r28);
    }
    CPy_DECREF(cpy_r_cond);
    if (unlikely(cpy_r_r28 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 319, CPyStatic_for_helpers___globals);
        goto CPyL41;
    }
CPyL19: ;
    cpy_r_r29 = CPY_GET_METHOD(cpy_r_r26, CPyType_nonlocalcontrol___NonlocalControl, 1, mypyc___irbuild___nonlocalcontrol___NonlocalControlObject, char (*)(PyObject *, PyObject *, CPyTagged))(cpy_r_r26, cpy_r_r27, cpy_r_r28); /* gen_continue */
    CPy_DECREF(cpy_r_r27);
    CPyTagged_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 319, CPyStatic_for_helpers___globals);
        goto CPyL42;
    }
    cpy_r_r30 = ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "loop_contents", "comprehension_helper_env", "builder", 320, CPyStatic_for_helpers___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r30);
CPyL21: ;
    cpy_r_r31 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_r30, cpy_r_rest_block);
    CPy_DECREF(cpy_r_rest_block);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 320, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    cpy_r_r32 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r32;
    goto CPyL3;
CPyL23: ;
    cpy_r_r33 = (CPyPtr)&((PyVarObject *)cpy_r_remaining_loop_params)->ob_size;
    cpy_r_r34 = *(int64_t *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 << 1;
    cpy_r_r36 = cpy_r_r35 != 0;
    if (!cpy_r_r36) goto CPyL28;
    cpy_r_r37 = ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_handle_loop;
    if (unlikely(cpy_r_r37 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'handle_loop' of 'comprehension_helper_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r37);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 324, CPyStatic_for_helpers___globals);
        goto CPyL31;
    }
CPyL25: ;
    PyObject *cpy_r_r38[1] = {cpy_r_remaining_loop_params};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = _PyObject_Vectorcall(cpy_r_r37, cpy_r_r39, 1, 0);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 324, CPyStatic_for_helpers___globals);
        goto CPyL31;
    }
    if (unlikely(cpy_r_r40 != Py_None)) {
        CPy_TypeError("None", cpy_r_r40); cpy_r_r41 = 2;
    } else
        cpy_r_r41 = 1;
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 324, CPyStatic_for_helpers___globals);
        goto CPyL31;
    }
    return cpy_r_r41;
CPyL28: ;
    cpy_r_r42 = ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_gen_inner_stmts;
    if (unlikely(cpy_r_r42 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'gen_inner_stmts' of 'comprehension_helper_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r42);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 328, CPyStatic_for_helpers___globals);
        goto CPyL31;
    }
CPyL29: ;
    cpy_r_r43 = _PyObject_Vectorcall(cpy_r_r42, 0, 0, 0);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 328, CPyStatic_for_helpers___globals);
        goto CPyL31;
    } else
        goto CPyL43;
CPyL30: ;
    return 1;
CPyL31: ;
    cpy_r_r44 = 2;
    return cpy_r_r44;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_cond);
    goto CPyL31;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_cond_val);
    goto CPyL31;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_cond_val);
    CPy_DecRef(cpy_r_r15);
    goto CPyL31;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_cond_val);
    CPy_DecRef(cpy_r_cont_block);
    CPy_DecRef(cpy_r_rest_block);
    goto CPyL31;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_cont_block);
    CPy_DecRef(cpy_r_rest_block);
    goto CPyL31;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_rest_block);
    goto CPyL31;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_rest_block);
    CPy_DecRef(cpy_r_r23);
    goto CPyL31;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_rest_block);
    CPy_DecRef(cpy_r_r26);
    goto CPyL31;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_rest_block);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    goto CPyL31;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_rest_block);
    goto CPyL31;
CPyL43: ;
    CPy_DECREF(cpy_r_r43);
    goto CPyL30;
}

PyObject *CPyPy_for_helpers___loop_contents_comprehension_helper_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"conds", "remaining_loop_params", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_conds;
    PyObject *obj_remaining_loop_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_conds, &obj_remaining_loop_params)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_conds;
    if (likely(PyList_Check(obj_conds)))
        arg_conds = obj_conds;
    else {
        CPy_TypeError("list", obj_conds); 
        goto fail;
    }
    PyObject *arg_remaining_loop_params;
    if (likely(PyList_Check(obj_remaining_loop_params)))
        arg_remaining_loop_params = obj_remaining_loop_params;
    else {
        CPy_TypeError("list", obj_remaining_loop_params); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___loop_contents_comprehension_helper_obj_____call__(arg___mypyc_self__, arg_conds, arg_remaining_loop_params);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "loop_contents", 300, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___comprehension_helper(PyObject *cpy_r_builder, PyObject *cpy_r_loop_params, PyObject *cpy_r_gen_inner_stmts, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = CPyDef_for_helpers___comprehension_helper_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "comprehension_helper", 266, CPyStatic_for_helpers___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "comprehension_helper", 266, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_gen_inner_stmts);
    if (((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_gen_inner_stmts != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_gen_inner_stmts);
    }
    ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_gen_inner_stmts = cpy_r_gen_inner_stmts;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "comprehension_helper", 266, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    CPyTagged_INCREF(cpy_r_line);
    if (((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_line);
    }
    ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_line = cpy_r_line;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "comprehension_helper", 266, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    cpy_r_r4 = CPyDef_for_helpers___handle_loop_comprehension_helper_obj();
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "comprehension_helper", 283, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject *)cpy_r_r4)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject *)cpy_r_r4)->___mypyc_env__);
    }
    ((mypyc___irbuild___for_helpers___handle_loop_comprehension_helper_objObject *)cpy_r_r4)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "comprehension_helper", 283, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
    if (((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_handle_loop != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_handle_loop);
    }
    ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_handle_loop = cpy_r_r4;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "comprehension_helper", 283, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    cpy_r_r7 = CPyDef_for_helpers___loop_contents_comprehension_helper_obj();
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "comprehension_helper", 300, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject *)cpy_r_r7)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject *)cpy_r_r7)->___mypyc_env__);
    }
    ((mypyc___irbuild___for_helpers___loop_contents_comprehension_helper_objObject *)cpy_r_r7)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "comprehension_helper", 300, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    if (((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_loop_contents != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_loop_contents);
    }
    ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_loop_contents = cpy_r_r7;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "comprehension_helper", 300, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    cpy_r_r10 = ((mypyc___irbuild___for_helpers___comprehension_helper_envObject *)cpy_r_r0)->_handle_loop;
    if (unlikely(cpy_r_r10 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'handle_loop' of 'comprehension_helper_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r10);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "comprehension_helper", 330, CPyStatic_for_helpers___globals);
        goto CPyL13;
    }
CPyL11: ;
    PyObject *cpy_r_r11[1] = {cpy_r_loop_params};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "comprehension_helper", 330, CPyStatic_for_helpers___globals);
        goto CPyL13;
    } else
        goto CPyL17;
CPyL12: ;
    return 1;
CPyL13: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    goto CPyL13;
CPyL17: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL12;
}

PyObject *CPyPy_for_helpers___comprehension_helper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "loop_params", "gen_inner_stmts", "line", 0};
    static CPyArg_Parser parser = {"OOOO:comprehension_helper", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_loop_params;
    PyObject *obj_gen_inner_stmts;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_loop_params, &obj_gen_inner_stmts, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_loop_params;
    if (likely(PyList_Check(obj_loop_params)))
        arg_loop_params = obj_loop_params;
    else {
        CPy_TypeError("list", obj_loop_params); 
        goto fail;
    }
    PyObject *arg_gen_inner_stmts = obj_gen_inner_stmts;
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_for_helpers___comprehension_helper(arg_builder, arg_loop_params, arg_gen_inner_stmts, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "comprehension_helper", 266, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___is_range_ref(PyObject *cpy_r_expr) {
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
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_expr, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "is_range_ref", 335, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
CPyL1: ;
    cpy_r_r1 = CPyStatics[825]; /* 'builtins.range' */
    cpy_r_r2 = PyUnicode_Compare(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 == -1;
    if (!cpy_r_r3) goto CPyL4;
    cpy_r_r4 = PyErr_Occurred();
    cpy_r_r5 = cpy_r_r4 != NULL;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "is_range_ref", 335, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
CPyL4: ;
    cpy_r_r7 = cpy_r_r2 == 0;
    if (!cpy_r_r7) goto CPyL6;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL14;
CPyL6: ;
    cpy_r_r9 = ((mypy___nodes___RefExprObject *)cpy_r_expr)->_node;
    cpy_r_r10 = (PyObject *)CPyType_nodes___TypeAlias;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_r9)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (cpy_r_r13) goto CPyL8;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL13;
CPyL8: ;
    cpy_r_r15 = CPY_GET_ATTR(cpy_r_expr, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "is_range_ref", 337, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
CPyL9: ;
    cpy_r_r16 = CPyStatics[8265]; /* 'six.moves.xrange' */
    cpy_r_r17 = PyUnicode_Compare(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 == -1;
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = PyErr_Occurred();
    cpy_r_r20 = cpy_r_r19 != NULL;
    if (!cpy_r_r20) goto CPyL12;
    cpy_r_r21 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "is_range_ref", 337, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
CPyL12: ;
    cpy_r_r22 = cpy_r_r17 == 0;
    cpy_r_r14 = cpy_r_r22;
CPyL13: ;
    cpy_r_r8 = cpy_r_r14;
CPyL14: ;
    return cpy_r_r8;
CPyL15: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
}

PyObject *CPyPy_for_helpers___is_range_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:is_range_ref", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (likely((Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_expr) == CPyType_nodes___RefExpr)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___is_range_ref(arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "is_range_ref", 333, CPyStatic_for_helpers___globals);
    return NULL;
}

PyObject *CPyDef_for_helpers___make_for_loop_generator(PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_expr, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_is_async, char cpy_r_nested) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_expr_reg;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_async_obj;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_item_type;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_item_rtype;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_rtyp;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_target_type;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_for_list;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_for_dict;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    int64_t cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
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
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyPtr cpy_r_r77;
    int64_t cpy_r_r78;
    CPyTagged cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyTagged cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_start_reg;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_end_reg;
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
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    CPyPtr cpy_r_r107;
    int64_t cpy_r_r108;
    CPyTagged cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_step;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    CPyTagged cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    CPyTagged cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_for_range;
    CPyTagged cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    int32_t cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    char cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    CPyPtr cpy_r_r145;
    int64_t cpy_r_r146;
    CPyTagged cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    CPyPtr cpy_r_r154;
    CPyPtr cpy_r_r155;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    CPyPtr cpy_r_r159;
    PyObject *cpy_r_r160;
    char cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    CPyPtr cpy_r_r164;
    int64_t cpy_r_r165;
    CPyTagged cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_lvalue1;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_lvalue2;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_for_enumerate;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    int32_t cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    char cpy_r_r191;
    char cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    CPyPtr cpy_r_r196;
    int64_t cpy_r_r197;
    CPyTagged cpy_r_r198;
    char cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    int32_t cpy_r_r206;
    char cpy_r_r207;
    PyObject *cpy_r_r208;
    char cpy_r_r209;
    PyObject *cpy_r_r210;
    CPyPtr cpy_r_r211;
    PyObject *cpy_r_r212;
    char cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    CPyPtr cpy_r_r216;
    int64_t cpy_r_r217;
    CPyTagged cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    CPyPtr cpy_r_r221;
    int64_t cpy_r_r222;
    CPyTagged cpy_r_r223;
    char cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_for_zip;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    int32_t cpy_r_r237;
    char cpy_r_r238;
    PyObject *cpy_r_r239;
    char cpy_r_r240;
    char cpy_r_r241;
    char cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    CPyPtr cpy_r_r245;
    int64_t cpy_r_r246;
    CPyTagged cpy_r_r247;
    char cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    char cpy_r_r252;
    PyObject *cpy_r_r253;
    CPyPtr cpy_r_r254;
    CPyPtr cpy_r_r255;
    PyObject *cpy_r_r256;
    char cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    char cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    char cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    char cpy_r_r274;
    PyObject *cpy_r_r275;
    CPyPtr cpy_r_r276;
    PyObject *cpy_r_r277;
    char cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    CPyPtr cpy_r_r282;
    PyObject *cpy_r_r283;
    char cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    CPyPtr cpy_r_r287;
    int64_t cpy_r_r288;
    CPyTagged cpy_r_r289;
    char cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_rtype;
    char cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    int32_t cpy_r_r302;
    char cpy_r_r303;
    PyObject *cpy_r_r304;
    char cpy_r_r305;
    char cpy_r_r306;
    char cpy_r_r307;
    char cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    int32_t cpy_r_r314;
    char cpy_r_r315;
    PyObject *cpy_r_r316;
    char cpy_r_r317;
    char cpy_r_r318;
    char cpy_r_r319;
    char cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    int32_t cpy_r_r326;
    char cpy_r_r327;
    PyObject *cpy_r_r328;
    char cpy_r_r329;
    char cpy_r_r330;
    char cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    char cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_for_dict_type;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    int32_t cpy_r_r345;
    char cpy_r_r346;
    PyObject *cpy_r_r347;
    char cpy_r_r348;
    char cpy_r_r349;
    char cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    int32_t cpy_r_r362;
    char cpy_r_r363;
    PyObject *cpy_r_r364;
    char cpy_r_r365;
    char cpy_r_r366;
    char cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject **cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_for_dict_gen;
    PyObject *cpy_r_r386;
    CPyPtr cpy_r_r387;
    PyObject *cpy_r_r388;
    char cpy_r_r389;
    PyObject *cpy_r_r390;
    char cpy_r_r391;
    char cpy_r_r392;
    PyObject *cpy_r_r393;
    CPyPtr cpy_r_r394;
    PyObject *cpy_r_r395;
    char cpy_r_r396;
    PyObject *cpy_r_r397;
    char cpy_r_r398;
    PyObject *cpy_r_r399;
    char cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_iterable_expr_reg;
    PyObject *cpy_r_r402;
    CPyPtr cpy_r_r403;
    PyObject *cpy_r_r404;
    char cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_set_literal;
    PyObject *cpy_r_r412;
    char cpy_r_r413;
    PyObject *cpy_r_r414;
    PyObject *cpy_r_r415;
    char cpy_r_r416;
    char cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_for_obj;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    char cpy_r_r424;
    PyObject *cpy_r_r425;
    if (cpy_r_is_async != 2) goto CPyL2;
    cpy_r_is_async = 0;
CPyL2: ;
    if (cpy_r_nested != 2) goto CPyL4;
    cpy_r_nested = 0;
CPyL4: ;
    if (!cpy_r_is_async) goto CPyL12;
    cpy_r_r0 = 2;
    cpy_r_r1 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_expr, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 358, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (likely(cpy_r_r1 != Py_None))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 358, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r1);
        goto CPyL288;
    }
    cpy_r_expr_reg = cpy_r_r2;
    cpy_r_r3 = CPyDef_for_helpers___ForAsyncIterable(cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 359, CPyStatic_for_helpers___globals);
        goto CPyL289;
    }
    cpy_r_async_obj = cpy_r_r3;
    cpy_r_r4 = CPyDef_builder___IRBuilder____analyze_iterable_item_type(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 360, CPyStatic_for_helpers___globals);
        goto CPyL290;
    }
    cpy_r_item_type = cpy_r_r4;
    cpy_r_r5 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_builder, cpy_r_item_type);
    CPy_DECREF(cpy_r_item_type);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 361, CPyStatic_for_helpers___globals);
        goto CPyL290;
    }
    cpy_r_item_rtype = cpy_r_r5;
    cpy_r_r6 = CPyDef_for_helpers___ForAsyncIterable___init(cpy_r_async_obj, cpy_r_expr_reg, cpy_r_item_rtype);
    CPy_DECREF(cpy_r_expr_reg);
    CPy_DECREF(cpy_r_item_rtype);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 362, CPyStatic_for_helpers___globals);
        goto CPyL291;
    }
    return cpy_r_async_obj;
CPyL12: ;
    cpy_r_r7 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 365, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    cpy_r_rtyp = cpy_r_r7;
    cpy_r_r8 = CPyDef_rtypes___is_sequence_rprimitive(cpy_r_rtyp);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 366, CPyStatic_for_helpers___globals);
        goto CPyL292;
    }
    if (cpy_r_r8) {
        goto CPyL293;
    } else
        goto CPyL21;
CPyL15: ;
    cpy_r_r9 = 2;
    cpy_r_r10 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_expr, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 368, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (likely(cpy_r_r10 != Py_None))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 368, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r10);
        goto CPyL288;
    }
    cpy_r_expr_reg = cpy_r_r11;
    cpy_r_r12 = CPyDef_builder___IRBuilder___get_sequence_type(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 369, CPyStatic_for_helpers___globals);
        goto CPyL289;
    }
    cpy_r_target_type = cpy_r_r12;
    cpy_r_r13 = CPyDef_for_helpers___ForSequence(cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 371, CPyStatic_for_helpers___globals);
        goto CPyL294;
    }
    cpy_r_for_list = cpy_r_r13;
    cpy_r_r14 = CPyDef_for_helpers___ForSequence___init(cpy_r_for_list, cpy_r_expr_reg, cpy_r_target_type, 0);
    CPy_DECREF(cpy_r_expr_reg);
    CPy_DECREF(cpy_r_target_type);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 372, CPyStatic_for_helpers___globals);
        goto CPyL295;
    }
    return cpy_r_for_list;
CPyL21: ;
    cpy_r_r15 = CPyDef_rtypes___is_dict_rprimitive(cpy_r_rtyp);
    CPy_DECREF(cpy_r_rtyp);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 375, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (!cpy_r_r15) goto CPyL29;
    cpy_r_r16 = 2;
    cpy_r_r17 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_expr, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 377, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (likely(cpy_r_r17 != Py_None))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 377, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r17);
        goto CPyL288;
    }
    cpy_r_expr_reg = cpy_r_r18;
    cpy_r_r19 = CPyDef_builder___IRBuilder___get_dict_key_type(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 378, CPyStatic_for_helpers___globals);
        goto CPyL289;
    }
    cpy_r_target_type = cpy_r_r19;
    cpy_r_r20 = CPyDef_for_helpers___ForDictionaryKeys(cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 380, CPyStatic_for_helpers___globals);
        goto CPyL294;
    }
    cpy_r_for_dict = cpy_r_r20;
    cpy_r_r21 = CPyDef_for_helpers___ForDictionaryCommon___init(cpy_r_for_dict, cpy_r_expr_reg, cpy_r_target_type);
    CPy_DECREF(cpy_r_expr_reg);
    CPy_DECREF(cpy_r_target_type);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 381, CPyStatic_for_helpers___globals);
        goto CPyL296;
    }
    return cpy_r_for_dict;
CPyL29: ;
    cpy_r_r22 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r23 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r24 = *(PyObject * *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 == cpy_r_r22;
    if (!cpy_r_r25) goto CPyL197;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r26 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 384, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r27 = ((mypy___nodes___CallExprObject *)cpy_r_r26)->_callee;
    cpy_r_r28 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_r27)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    if (!cpy_r_r31) goto CPyL33;
    cpy_r_r32 = cpy_r_r31;
    goto CPyL34;
CPyL33: ;
    cpy_r_r33 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_r27)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    cpy_r_r32 = cpy_r_r36;
CPyL34: ;
    if (!cpy_r_r32) goto CPyL36;
    cpy_r_r37 = cpy_r_r32;
    goto CPyL37;
CPyL36: ;
    cpy_r_r38 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r39 = (CPyPtr)&((PyObject *)cpy_r_r27)->ob_type;
    cpy_r_r40 = *(PyObject * *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 == cpy_r_r38;
    cpy_r_r37 = cpy_r_r41;
CPyL37: ;
    if (!cpy_r_r37) goto CPyL197;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r42 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 386, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r43 = ((mypy___nodes___CallExprObject *)cpy_r_r42)->_callee;
    CPy_INCREF(cpy_r_r43);
    if (likely((Py_TYPE(cpy_r_r43) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r43) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r43) == CPyType_nodes___RefExpr)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 386, CPyStatic_for_helpers___globals, "mypy.nodes.RefExpr", cpy_r_r43);
        goto CPyL288;
    }
    cpy_r_r45 = CPyDef_for_helpers___is_range_ref(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 386, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (!cpy_r_r45) goto CPyL102;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r46 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 388, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r47 = ((mypy___nodes___CallExprObject *)cpy_r_r46)->_args;
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_r47)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = (Py_ssize_t)cpy_r_r50 <= (Py_ssize_t)4;
    if (cpy_r_r51) goto CPyL51;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r52 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 389, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r53 = ((mypy___nodes___CallExprObject *)cpy_r_r52)->_args;
    cpy_r_r54 = (CPyPtr)&((PyVarObject *)cpy_r_r53)->ob_size;
    cpy_r_r55 = *(int64_t *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 << 1;
    cpy_r_r57 = cpy_r_r56 == 6;
    if (!cpy_r_r57) goto CPyL102;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r58 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 389, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r59 = ((mypy___nodes___CallExprObject *)cpy_r_r58)->_args;
    cpy_r_r60 = CPyList_GetItemShort(cpy_r_r59, 4);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 389, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r60, CPyType_nodes___Expression)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 389, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r60);
        goto CPyL288;
    }
    cpy_r_r62 = CPyDef_builder___IRBuilder___extract_int(cpy_r_builder, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 389, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    cpy_r_r63 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r64 = cpy_r_r62 != cpy_r_r63;
    CPy_DECREF(cpy_r_r62);
    if (!cpy_r_r64) goto CPyL102;
CPyL51: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r65 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 391, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r66 = ((mypy___nodes___CallExprObject *)cpy_r_r65)->_arg_kinds;
    CPy_INCREF(cpy_r_r66);
    cpy_r_r67 = PySet_New(cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 391, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    cpy_r_r68 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r68 == NULL)) {
        goto CPyL297;
    } else
        goto CPyL56;
CPyL54: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r69 = 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 391, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL56: ;
    cpy_r_r70 = PySet_New(NULL);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 391, CPyStatic_for_helpers___globals);
        goto CPyL298;
    }
    cpy_r_r71 = PySet_Add(cpy_r_r70, cpy_r_r68);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 391, CPyStatic_for_helpers___globals);
        goto CPyL299;
    }
    cpy_r_r73 = PyObject_RichCompare(cpy_r_r67, cpy_r_r70, 2);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 391, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (unlikely(!PyBool_Check(cpy_r_r73))) {
        CPy_TypeError("bool", cpy_r_r73); cpy_r_r74 = 2;
    } else
        cpy_r_r74 = cpy_r_r73 == Py_True;
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 391, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (!cpy_r_r74) goto CPyL102;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r75 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 397, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r76 = ((mypy___nodes___CallExprObject *)cpy_r_r75)->_args;
    cpy_r_r77 = (CPyPtr)&((PyVarObject *)cpy_r_r76)->ob_size;
    cpy_r_r78 = *(int64_t *)cpy_r_r77;
    cpy_r_r79 = cpy_r_r78 << 1;
    cpy_r_r80 = cpy_r_r79 == 2;
    if (!cpy_r_r80) goto CPyL70;
    cpy_r_r81 = NULL;
    cpy_r_r82 = CPY_INT_TAG;
    cpy_r_r83 = CPyDef_ops___Integer(0, cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 398, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    cpy_r_start_reg = cpy_r_r83;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r84 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 399, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL300;
    }
    cpy_r_r85 = ((mypy___nodes___CallExprObject *)cpy_r_r84)->_args;
    cpy_r_r86 = CPyList_GetItemShort(cpy_r_r85, 0);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 399, CPyStatic_for_helpers___globals);
        goto CPyL300;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r86, CPyType_nodes___Expression)))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 399, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r86);
        goto CPyL300;
    }
    cpy_r_r88 = 2;
    cpy_r_r89 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 399, CPyStatic_for_helpers___globals);
        goto CPyL300;
    }
    if (likely(cpy_r_r89 != Py_None))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 399, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r89);
        goto CPyL300;
    }
    cpy_r_end_reg = cpy_r_r90;
    goto CPyL81;
CPyL70: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r91 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 401, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r92 = ((mypy___nodes___CallExprObject *)cpy_r_r91)->_args;
    cpy_r_r93 = CPyList_GetItemShort(cpy_r_r92, 0);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 401, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r93, CPyType_nodes___Expression)))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 401, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r93);
        goto CPyL288;
    }
    cpy_r_r95 = 2;
    cpy_r_r96 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r94, cpy_r_r95);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 401, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (likely(cpy_r_r96 != Py_None))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 401, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r96);
        goto CPyL288;
    }
    cpy_r_start_reg = cpy_r_r97;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r98 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 402, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL300;
    }
    cpy_r_r99 = ((mypy___nodes___CallExprObject *)cpy_r_r98)->_args;
    cpy_r_r100 = CPyList_GetItemShort(cpy_r_r99, 2);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 402, CPyStatic_for_helpers___globals);
        goto CPyL300;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r100, CPyType_nodes___Expression)))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 402, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r100);
        goto CPyL300;
    }
    cpy_r_r102 = 2;
    cpy_r_r103 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r101, cpy_r_r102);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 402, CPyStatic_for_helpers___globals);
        goto CPyL300;
    }
    if (likely(cpy_r_r103 != Py_None))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 402, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r103);
        goto CPyL300;
    }
    cpy_r_end_reg = cpy_r_r104;
CPyL81: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r105 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 403, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL301;
    }
    cpy_r_r106 = ((mypy___nodes___CallExprObject *)cpy_r_r105)->_args;
    cpy_r_r107 = (CPyPtr)&((PyVarObject *)cpy_r_r106)->ob_size;
    cpy_r_r108 = *(int64_t *)cpy_r_r107;
    cpy_r_r109 = cpy_r_r108 << 1;
    cpy_r_r110 = cpy_r_r109 == 6;
    if (!cpy_r_r110) goto CPyL97;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r111 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 404, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL301;
    }
    cpy_r_r112 = ((mypy___nodes___CallExprObject *)cpy_r_r111)->_args;
    cpy_r_r113 = CPyList_GetItemShort(cpy_r_r112, 4);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 404, CPyStatic_for_helpers___globals);
        goto CPyL301;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r113, CPyType_nodes___Expression)))
        cpy_r_r114 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 404, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r113);
        goto CPyL301;
    }
    cpy_r_r115 = CPyDef_builder___IRBuilder___extract_int(cpy_r_builder, cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 404, CPyStatic_for_helpers___globals);
        goto CPyL301;
    }
    cpy_r_step = cpy_r_r115;
    cpy_r_r116 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r117 = cpy_r_step != cpy_r_r116;
    if (cpy_r_r117) {
        goto CPyL90;
    } else
        goto CPyL302;
CPyL88: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r118 = 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 405, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL90: ;
    if (likely(PyLong_Check(cpy_r_step)))
        cpy_r_r119 = CPyTagged_FromObject(cpy_r_step);
    else {
        CPy_TypeError("int", cpy_r_step); cpy_r_r119 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r119 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 406, CPyStatic_for_helpers___globals);
        goto CPyL303;
    }
    cpy_r_r120 = cpy_r_r119 == 0;
    CPyTagged_DECREF(cpy_r_r119);
    if (!cpy_r_r120) goto CPyL98;
    cpy_r_r121 = CPyStatics[8266]; /* "range() step can't be zero" */
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r122 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 407, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL303;
    }
    cpy_r_r123 = ((mypy___nodes___CallExprObject *)cpy_r_r122)->_args;
    cpy_r_r124 = CPyList_GetItemShortBorrow(cpy_r_r123, 4);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 407, CPyStatic_for_helpers___globals);
        goto CPyL303;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r124, CPyType_nodes___Expression)))
        cpy_r_r125 = cpy_r_r124;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 407, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r124);
        goto CPyL303;
    }
    cpy_r_r126 = ((mypy___nodes___ContextObject *)cpy_r_r125)->_line;
    if (unlikely(cpy_r_r126 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", "Expression", "line", 407, CPyStatic_for_helpers___globals);
        goto CPyL303;
    }
    CPyTagged_INCREF(cpy_r_r126);
CPyL96: ;
    cpy_r_r127 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r121, cpy_r_r126);
    CPyTagged_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r127 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 407, CPyStatic_for_helpers___globals);
        goto CPyL303;
    } else
        goto CPyL98;
CPyL97: ;
    cpy_r_r128 = CPyStatics[9016]; /* 1 */
    CPy_INCREF(cpy_r_r128);
    cpy_r_step = cpy_r_r128;
CPyL98: ;
    cpy_r_r129 = CPyDef_for_helpers___ForRange(cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 411, CPyStatic_for_helpers___globals);
        goto CPyL303;
    }
    cpy_r_for_range = cpy_r_r129;
    if (likely(PyLong_Check(cpy_r_step)))
        cpy_r_r130 = CPyTagged_FromObject(cpy_r_step);
    else {
        CPy_TypeError("int", cpy_r_step); cpy_r_r130 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_step);
    if (unlikely(cpy_r_r130 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 412, CPyStatic_for_helpers___globals);
        goto CPyL304;
    }
    cpy_r_r131 = CPyDef_for_helpers___ForRange___init(cpy_r_for_range, cpy_r_start_reg, cpy_r_end_reg, cpy_r_r130);
    CPy_DECREF(cpy_r_start_reg);
    CPy_DECREF(cpy_r_end_reg);
    CPyTagged_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r131 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 412, CPyStatic_for_helpers___globals);
        goto CPyL305;
    }
    return cpy_r_for_range;
CPyL102: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r132 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 416, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r133 = ((mypy___nodes___CallExprObject *)cpy_r_r132)->_callee;
    CPy_INCREF(cpy_r_r133);
    if (likely((Py_TYPE(cpy_r_r133) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r133) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r133) == CPyType_nodes___RefExpr)))
        cpy_r_r134 = cpy_r_r133;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 416, CPyStatic_for_helpers___globals, "mypy.nodes.RefExpr", cpy_r_r133);
        goto CPyL288;
    }
    cpy_r_r135 = CPY_GET_ATTR(cpy_r_r134, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 416, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
CPyL105: ;
    cpy_r_r136 = CPyStatics[4078]; /* 'builtins.enumerate' */
    cpy_r_r137 = PyUnicode_Compare(cpy_r_r135, cpy_r_r136);
    CPy_DECREF(cpy_r_r135);
    cpy_r_r138 = cpy_r_r137 == -1;
    if (!cpy_r_r138) goto CPyL108;
    cpy_r_r139 = PyErr_Occurred();
    cpy_r_r140 = cpy_r_r139 != NULL;
    if (!cpy_r_r140) goto CPyL108;
    cpy_r_r141 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 416, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
CPyL108: ;
    cpy_r_r142 = cpy_r_r137 == 0;
    if (!cpy_r_r142) goto CPyL135;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r143 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 417, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r144 = ((mypy___nodes___CallExprObject *)cpy_r_r143)->_args;
    cpy_r_r145 = (CPyPtr)&((PyVarObject *)cpy_r_r144)->ob_size;
    cpy_r_r146 = *(int64_t *)cpy_r_r145;
    cpy_r_r147 = cpy_r_r146 << 1;
    cpy_r_r148 = cpy_r_r147 == 2;
    if (!cpy_r_r148) goto CPyL135;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r149 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 418, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r150 = ((mypy___nodes___CallExprObject *)cpy_r_r149)->_arg_kinds;
    CPy_INCREF(cpy_r_r150);
    cpy_r_r151 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r151 == NULL)) {
        goto CPyL306;
    } else
        goto CPyL115;
CPyL113: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r152 = 0;
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 418, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL115: ;
    cpy_r_r153 = PyList_New(1);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 418, CPyStatic_for_helpers___globals);
        goto CPyL307;
    }
    cpy_r_r154 = (CPyPtr)&((PyListObject *)cpy_r_r153)->ob_item;
    cpy_r_r155 = *(CPyPtr *)cpy_r_r154;
    CPy_INCREF(cpy_r_r151);
    *(PyObject * *)cpy_r_r155 = cpy_r_r151;
    cpy_r_r156 = PyObject_RichCompare(cpy_r_r150, cpy_r_r153, 2);
    CPy_DECREF(cpy_r_r150);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 418, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (unlikely(!PyBool_Check(cpy_r_r156))) {
        CPy_TypeError("bool", cpy_r_r156); cpy_r_r157 = 2;
    } else
        cpy_r_r157 = cpy_r_r156 == Py_True;
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r157 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 418, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (!cpy_r_r157) goto CPyL135;
    cpy_r_r158 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r159 = (CPyPtr)&((PyObject *)cpy_r_index)->ob_type;
    cpy_r_r160 = *(PyObject * *)cpy_r_r159;
    cpy_r_r161 = cpy_r_r160 == cpy_r_r158;
    if (!cpy_r_r161) goto CPyL135;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___TupleExpr))
        cpy_r_r162 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 420, CPyStatic_for_helpers___globals, "mypy.nodes.TupleExpr", cpy_r_index);
        goto CPyL288;
    }
    cpy_r_r163 = ((mypy___nodes___TupleExprObject *)cpy_r_r162)->_items;
    cpy_r_r164 = (CPyPtr)&((PyVarObject *)cpy_r_r163)->ob_size;
    cpy_r_r165 = *(int64_t *)cpy_r_r164;
    cpy_r_r166 = cpy_r_r165 << 1;
    cpy_r_r167 = cpy_r_r166 == 4;
    if (!cpy_r_r167) goto CPyL135;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___TupleExpr))
        cpy_r_r168 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 423, CPyStatic_for_helpers___globals, "mypy.nodes.TupleExpr", cpy_r_index);
        goto CPyL288;
    }
    cpy_r_r169 = ((mypy___nodes___TupleExprObject *)cpy_r_r168)->_items;
    cpy_r_r170 = CPyList_GetItemShort(cpy_r_r169, 0);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 423, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r170, CPyType_nodes___Expression)))
        cpy_r_r171 = cpy_r_r170;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 423, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r170);
        goto CPyL288;
    }
    cpy_r_lvalue1 = cpy_r_r171;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___TupleExpr))
        cpy_r_r172 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 424, CPyStatic_for_helpers___globals, "mypy.nodes.TupleExpr", cpy_r_index);
        goto CPyL308;
    }
    cpy_r_r173 = ((mypy___nodes___TupleExprObject *)cpy_r_r172)->_items;
    cpy_r_r174 = CPyList_GetItemShort(cpy_r_r173, 2);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 424, CPyStatic_for_helpers___globals);
        goto CPyL308;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r174, CPyType_nodes___Expression)))
        cpy_r_r175 = cpy_r_r174;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 424, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r174);
        goto CPyL308;
    }
    cpy_r_lvalue2 = cpy_r_r175;
    CPy_INCREF(cpy_r_index);
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___TupleExpr))
        cpy_r_r176 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 425, CPyStatic_for_helpers___globals, "mypy.nodes.TupleExpr", cpy_r_index);
        goto CPyL309;
    }
    cpy_r_r177 = CPyDef_for_helpers___ForEnumerate(cpy_r_builder, cpy_r_r176, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    CPy_DECREF(cpy_r_r176);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 425, CPyStatic_for_helpers___globals);
        goto CPyL309;
    }
    cpy_r_for_enumerate = cpy_r_r177;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r178 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 426, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL310;
    }
    cpy_r_r179 = ((mypy___nodes___CallExprObject *)cpy_r_r178)->_args;
    cpy_r_r180 = CPyList_GetItemShort(cpy_r_r179, 0);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 426, CPyStatic_for_helpers___globals);
        goto CPyL310;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r180, CPyType_nodes___Expression)))
        cpy_r_r181 = cpy_r_r180;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 426, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r180);
        goto CPyL310;
    }
    cpy_r_r182 = CPyDef_for_helpers___ForEnumerate___init(cpy_r_for_enumerate, cpy_r_lvalue1, cpy_r_lvalue2, cpy_r_r181);
    CPy_DECREF(cpy_r_lvalue1);
    CPy_DECREF(cpy_r_lvalue2);
    CPy_DECREF(cpy_r_r181);
    if (unlikely(cpy_r_r182 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 426, CPyStatic_for_helpers___globals);
        goto CPyL311;
    }
    return cpy_r_for_enumerate;
CPyL135: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r183 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 430, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r184 = ((mypy___nodes___CallExprObject *)cpy_r_r183)->_callee;
    CPy_INCREF(cpy_r_r184);
    if (likely((Py_TYPE(cpy_r_r184) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r184) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r184) == CPyType_nodes___RefExpr)))
        cpy_r_r185 = cpy_r_r184;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 430, CPyStatic_for_helpers___globals, "mypy.nodes.RefExpr", cpy_r_r184);
        goto CPyL288;
    }
    cpy_r_r186 = CPY_GET_ATTR(cpy_r_r185, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 430, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
CPyL138: ;
    cpy_r_r187 = CPyStatics[8267]; /* 'builtins.zip' */
    cpy_r_r188 = PyUnicode_Compare(cpy_r_r186, cpy_r_r187);
    CPy_DECREF(cpy_r_r186);
    cpy_r_r189 = cpy_r_r188 == -1;
    if (!cpy_r_r189) goto CPyL141;
    cpy_r_r190 = PyErr_Occurred();
    cpy_r_r191 = cpy_r_r190 != NULL;
    if (!cpy_r_r191) goto CPyL141;
    cpy_r_r192 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r192)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 430, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
CPyL141: ;
    cpy_r_r193 = cpy_r_r188 == 0;
    if (!cpy_r_r193) goto CPyL164;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r194 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 431, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r195 = ((mypy___nodes___CallExprObject *)cpy_r_r194)->_args;
    cpy_r_r196 = (CPyPtr)&((PyVarObject *)cpy_r_r195)->ob_size;
    cpy_r_r197 = *(int64_t *)cpy_r_r196;
    cpy_r_r198 = cpy_r_r197 << 1;
    cpy_r_r199 = (Py_ssize_t)cpy_r_r198 >= (Py_ssize_t)4;
    if (!cpy_r_r199) goto CPyL164;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r200 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 432, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r201 = ((mypy___nodes___CallExprObject *)cpy_r_r200)->_arg_kinds;
    CPy_INCREF(cpy_r_r201);
    cpy_r_r202 = PySet_New(cpy_r_r201);
    CPy_DECREF(cpy_r_r201);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 432, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    cpy_r_r203 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r203 == NULL)) {
        goto CPyL312;
    } else
        goto CPyL149;
CPyL147: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r204 = 0;
    if (unlikely(!cpy_r_r204)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 432, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL149: ;
    cpy_r_r205 = PySet_New(NULL);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 432, CPyStatic_for_helpers___globals);
        goto CPyL313;
    }
    cpy_r_r206 = PySet_Add(cpy_r_r205, cpy_r_r203);
    cpy_r_r207 = cpy_r_r206 >= 0;
    if (unlikely(!cpy_r_r207)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 432, CPyStatic_for_helpers___globals);
        goto CPyL314;
    }
    cpy_r_r208 = PyObject_RichCompare(cpy_r_r202, cpy_r_r205, 2);
    CPy_DECREF(cpy_r_r202);
    CPy_DECREF(cpy_r_r205);
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 432, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (unlikely(!PyBool_Check(cpy_r_r208))) {
        CPy_TypeError("bool", cpy_r_r208); cpy_r_r209 = 2;
    } else
        cpy_r_r209 = cpy_r_r208 == Py_True;
    CPy_DECREF(cpy_r_r208);
    if (unlikely(cpy_r_r209 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 432, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (!cpy_r_r209) goto CPyL164;
    cpy_r_r210 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r211 = (CPyPtr)&((PyObject *)cpy_r_index)->ob_type;
    cpy_r_r212 = *(PyObject * *)cpy_r_r211;
    cpy_r_r213 = cpy_r_r212 == cpy_r_r210;
    if (!cpy_r_r213) goto CPyL164;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___TupleExpr))
        cpy_r_r214 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 434, CPyStatic_for_helpers___globals, "mypy.nodes.TupleExpr", cpy_r_index);
        goto CPyL288;
    }
    cpy_r_r215 = ((mypy___nodes___TupleExprObject *)cpy_r_r214)->_items;
    cpy_r_r216 = (CPyPtr)&((PyVarObject *)cpy_r_r215)->ob_size;
    cpy_r_r217 = *(int64_t *)cpy_r_r216;
    cpy_r_r218 = cpy_r_r217 << 1;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r219 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 434, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r220 = ((mypy___nodes___CallExprObject *)cpy_r_r219)->_args;
    cpy_r_r221 = (CPyPtr)&((PyVarObject *)cpy_r_r220)->ob_size;
    cpy_r_r222 = *(int64_t *)cpy_r_r221;
    cpy_r_r223 = cpy_r_r222 << 1;
    cpy_r_r224 = cpy_r_r218 == cpy_r_r223;
    if (!cpy_r_r224) goto CPyL164;
    CPy_INCREF(cpy_r_index);
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___TupleExpr))
        cpy_r_r225 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 437, CPyStatic_for_helpers___globals, "mypy.nodes.TupleExpr", cpy_r_index);
        goto CPyL288;
    }
    cpy_r_r226 = CPyDef_for_helpers___ForZip(cpy_r_builder, cpy_r_r225, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    CPy_DECREF(cpy_r_r225);
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 437, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    cpy_r_for_zip = cpy_r_r226;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___TupleExpr))
        cpy_r_r227 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 438, CPyStatic_for_helpers___globals, "mypy.nodes.TupleExpr", cpy_r_index);
        goto CPyL315;
    }
    cpy_r_r228 = ((mypy___nodes___TupleExprObject *)cpy_r_r227)->_items;
    CPy_INCREF(cpy_r_r228);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r229 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 438, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL316;
    }
    cpy_r_r230 = ((mypy___nodes___CallExprObject *)cpy_r_r229)->_args;
    CPy_INCREF(cpy_r_r230);
    cpy_r_r231 = CPyDef_for_helpers___ForZip___init(cpy_r_for_zip, cpy_r_r228, cpy_r_r230);
    CPy_DECREF(cpy_r_r228);
    CPy_DECREF(cpy_r_r230);
    if (unlikely(cpy_r_r231 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 438, CPyStatic_for_helpers___globals);
        goto CPyL315;
    }
    return cpy_r_for_zip;
CPyL164: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r232 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 442, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r233 = ((mypy___nodes___CallExprObject *)cpy_r_r232)->_callee;
    CPy_INCREF(cpy_r_r233);
    if (likely((Py_TYPE(cpy_r_r233) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r233) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r233) == CPyType_nodes___RefExpr)))
        cpy_r_r234 = cpy_r_r233;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 442, CPyStatic_for_helpers___globals, "mypy.nodes.RefExpr", cpy_r_r233);
        goto CPyL288;
    }
    cpy_r_r235 = CPY_GET_ATTR(cpy_r_r234, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r234);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 442, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
CPyL167: ;
    cpy_r_r236 = CPyStatics[8268]; /* 'builtins.reversed' */
    cpy_r_r237 = PyUnicode_Compare(cpy_r_r235, cpy_r_r236);
    CPy_DECREF(cpy_r_r235);
    cpy_r_r238 = cpy_r_r237 == -1;
    if (!cpy_r_r238) goto CPyL170;
    cpy_r_r239 = PyErr_Occurred();
    cpy_r_r240 = cpy_r_r239 != NULL;
    if (!cpy_r_r240) goto CPyL170;
    cpy_r_r241 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r241)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 442, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
CPyL170: ;
    cpy_r_r242 = cpy_r_r237 == 0;
    if (!cpy_r_r242) goto CPyL197;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r243 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 443, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r244 = ((mypy___nodes___CallExprObject *)cpy_r_r243)->_args;
    cpy_r_r245 = (CPyPtr)&((PyVarObject *)cpy_r_r244)->ob_size;
    cpy_r_r246 = *(int64_t *)cpy_r_r245;
    cpy_r_r247 = cpy_r_r246 << 1;
    cpy_r_r248 = cpy_r_r247 == 2;
    if (!cpy_r_r248) goto CPyL197;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r249 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 444, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r250 = ((mypy___nodes___CallExprObject *)cpy_r_r249)->_arg_kinds;
    CPy_INCREF(cpy_r_r250);
    cpy_r_r251 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r251 == NULL)) {
        goto CPyL317;
    } else
        goto CPyL177;
CPyL175: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r252 = 0;
    if (unlikely(!cpy_r_r252)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 444, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL177: ;
    cpy_r_r253 = PyList_New(1);
    if (unlikely(cpy_r_r253 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 444, CPyStatic_for_helpers___globals);
        goto CPyL318;
    }
    cpy_r_r254 = (CPyPtr)&((PyListObject *)cpy_r_r253)->ob_item;
    cpy_r_r255 = *(CPyPtr *)cpy_r_r254;
    CPy_INCREF(cpy_r_r251);
    *(PyObject * *)cpy_r_r255 = cpy_r_r251;
    cpy_r_r256 = PyObject_RichCompare(cpy_r_r250, cpy_r_r253, 2);
    CPy_DECREF(cpy_r_r250);
    CPy_DECREF(cpy_r_r253);
    if (unlikely(cpy_r_r256 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 444, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (unlikely(!PyBool_Check(cpy_r_r256))) {
        CPy_TypeError("bool", cpy_r_r256); cpy_r_r257 = 2;
    } else
        cpy_r_r257 = cpy_r_r256 == Py_True;
    CPy_DECREF(cpy_r_r256);
    if (unlikely(cpy_r_r257 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 444, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (!cpy_r_r257) goto CPyL197;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r258 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 445, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r259 = ((mypy___nodes___CallExprObject *)cpy_r_r258)->_args;
    cpy_r_r260 = CPyList_GetItemShort(cpy_r_r259, 0);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 445, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r260, CPyType_nodes___Expression)))
        cpy_r_r261 = cpy_r_r260;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 445, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r260);
        goto CPyL288;
    }
    cpy_r_r262 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_r261);
    CPy_DECREF(cpy_r_r261);
    if (unlikely(cpy_r_r262 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 445, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    cpy_r_r263 = CPyDef_rtypes___is_sequence_rprimitive(cpy_r_r262);
    CPy_DECREF(cpy_r_r262);
    if (unlikely(cpy_r_r263 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 445, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (!cpy_r_r263) goto CPyL197;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r264 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 448, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r265 = ((mypy___nodes___CallExprObject *)cpy_r_r264)->_args;
    cpy_r_r266 = CPyList_GetItemShort(cpy_r_r265, 0);
    if (unlikely(cpy_r_r266 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 448, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r266, CPyType_nodes___Expression)))
        cpy_r_r267 = cpy_r_r266;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 448, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r266);
        goto CPyL288;
    }
    cpy_r_r268 = 2;
    cpy_r_r269 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r267, cpy_r_r268);
    CPy_DECREF(cpy_r_r267);
    if (unlikely(cpy_r_r269 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 448, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (likely(cpy_r_r269 != Py_None))
        cpy_r_r270 = cpy_r_r269;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 448, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r269);
        goto CPyL288;
    }
    cpy_r_expr_reg = cpy_r_r270;
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r271 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 449, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL289;
    }
    cpy_r_r272 = CPyDef_builder___IRBuilder___get_sequence_type(cpy_r_builder, cpy_r_r271);
    CPy_DECREF(cpy_r_r271);
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 449, CPyStatic_for_helpers___globals);
        goto CPyL289;
    }
    cpy_r_target_type = cpy_r_r272;
    cpy_r_r273 = CPyDef_for_helpers___ForSequence(cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 451, CPyStatic_for_helpers___globals);
        goto CPyL294;
    }
    cpy_r_for_list = cpy_r_r273;
    cpy_r_r274 = CPyDef_for_helpers___ForSequence___init(cpy_r_for_list, cpy_r_expr_reg, cpy_r_target_type, 1);
    CPy_DECREF(cpy_r_expr_reg);
    CPy_DECREF(cpy_r_target_type);
    if (unlikely(cpy_r_r274 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 452, CPyStatic_for_helpers___globals);
        goto CPyL295;
    }
    return cpy_r_for_list;
CPyL197: ;
    cpy_r_r275 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r276 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r277 = *(PyObject * *)cpy_r_r276;
    cpy_r_r278 = cpy_r_r277 == cpy_r_r275;
    if (!cpy_r_r278) goto CPyL271;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r279 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 454, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r280 = ((mypy___nodes___CallExprObject *)cpy_r_r279)->_callee;
    cpy_r_r281 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r282 = (CPyPtr)&((PyObject *)cpy_r_r280)->ob_type;
    cpy_r_r283 = *(PyObject * *)cpy_r_r282;
    cpy_r_r284 = cpy_r_r283 == cpy_r_r281;
    if (!cpy_r_r284) goto CPyL271;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r285 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 454, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r286 = ((mypy___nodes___CallExprObject *)cpy_r_r285)->_args;
    CPy_INCREF(cpy_r_r286);
    cpy_r_r287 = (CPyPtr)&((PyVarObject *)cpy_r_r286)->ob_size;
    cpy_r_r288 = *(int64_t *)cpy_r_r287;
    CPy_DECREF(cpy_r_r286);
    cpy_r_r289 = cpy_r_r288 << 1;
    cpy_r_r290 = cpy_r_r289 != 0;
    if (cpy_r_r290) goto CPyL271;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r291 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 456, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r292 = ((mypy___nodes___CallExprObject *)cpy_r_r291)->_callee;
    if (likely(Py_TYPE(cpy_r_r292) == CPyType_nodes___MemberExpr))
        cpy_r_r293 = cpy_r_r292;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 456, CPyStatic_for_helpers___globals, "mypy.nodes.MemberExpr", cpy_r_r292);
        goto CPyL288;
    }
    cpy_r_r294 = ((mypy___nodes___MemberExprObject *)cpy_r_r293)->_expr;
    CPy_INCREF(cpy_r_r294);
    cpy_r_r295 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_r294);
    CPy_DECREF(cpy_r_r294);
    if (unlikely(cpy_r_r295 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 456, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    cpy_r_rtype = cpy_r_r295;
    cpy_r_r296 = CPyDef_rtypes___is_dict_rprimitive(cpy_r_rtype);
    CPy_DECREF(cpy_r_rtype);
    if (unlikely(cpy_r_r296 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 457, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (!cpy_r_r296) goto CPyL271;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r297 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 457, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r298 = ((mypy___nodes___CallExprObject *)cpy_r_r297)->_callee;
    if (likely(Py_TYPE(cpy_r_r298) == CPyType_nodes___MemberExpr))
        cpy_r_r299 = cpy_r_r298;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 457, CPyStatic_for_helpers___globals, "mypy.nodes.MemberExpr", cpy_r_r298);
        goto CPyL288;
    }
    cpy_r_r300 = ((mypy___nodes___MemberExprObject *)cpy_r_r299)->_name;
    CPy_INCREF(cpy_r_r300);
    cpy_r_r301 = CPyStatics[267]; /* 'keys' */
    cpy_r_r302 = PyUnicode_Compare(cpy_r_r300, cpy_r_r301);
    CPy_DECREF(cpy_r_r300);
    cpy_r_r303 = cpy_r_r302 == -1;
    if (!cpy_r_r303) goto CPyL212;
    cpy_r_r304 = PyErr_Occurred();
    cpy_r_r305 = cpy_r_r304 != NULL;
    if (!cpy_r_r305) goto CPyL212;
    cpy_r_r306 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r306)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", -1, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
CPyL212: ;
    cpy_r_r307 = cpy_r_r302 == 0;
    if (!cpy_r_r307) goto CPyL214;
    cpy_r_r308 = cpy_r_r307;
    goto CPyL220;
CPyL214: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r309 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 457, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r310 = ((mypy___nodes___CallExprObject *)cpy_r_r309)->_callee;
    if (likely(Py_TYPE(cpy_r_r310) == CPyType_nodes___MemberExpr))
        cpy_r_r311 = cpy_r_r310;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 457, CPyStatic_for_helpers___globals, "mypy.nodes.MemberExpr", cpy_r_r310);
        goto CPyL288;
    }
    cpy_r_r312 = ((mypy___nodes___MemberExprObject *)cpy_r_r311)->_name;
    CPy_INCREF(cpy_r_r312);
    cpy_r_r313 = CPyStatics[2406]; /* 'values' */
    cpy_r_r314 = PyUnicode_Compare(cpy_r_r312, cpy_r_r313);
    CPy_DECREF(cpy_r_r312);
    cpy_r_r315 = cpy_r_r314 == -1;
    if (!cpy_r_r315) goto CPyL219;
    cpy_r_r316 = PyErr_Occurred();
    cpy_r_r317 = cpy_r_r316 != NULL;
    if (!cpy_r_r317) goto CPyL219;
    cpy_r_r318 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r318)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", -1, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
CPyL219: ;
    cpy_r_r319 = cpy_r_r314 == 0;
    cpy_r_r308 = cpy_r_r319;
CPyL220: ;
    if (!cpy_r_r308) goto CPyL222;
    cpy_r_r320 = cpy_r_r308;
    goto CPyL228;
CPyL222: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r321 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 457, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r322 = ((mypy___nodes___CallExprObject *)cpy_r_r321)->_callee;
    if (likely(Py_TYPE(cpy_r_r322) == CPyType_nodes___MemberExpr))
        cpy_r_r323 = cpy_r_r322;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 457, CPyStatic_for_helpers___globals, "mypy.nodes.MemberExpr", cpy_r_r322);
        goto CPyL288;
    }
    cpy_r_r324 = ((mypy___nodes___MemberExprObject *)cpy_r_r323)->_name;
    CPy_INCREF(cpy_r_r324);
    cpy_r_r325 = CPyStatics[219]; /* 'items' */
    cpy_r_r326 = PyUnicode_Compare(cpy_r_r324, cpy_r_r325);
    CPy_DECREF(cpy_r_r324);
    cpy_r_r327 = cpy_r_r326 == -1;
    if (!cpy_r_r327) goto CPyL227;
    cpy_r_r328 = PyErr_Occurred();
    cpy_r_r329 = cpy_r_r328 != NULL;
    if (!cpy_r_r329) goto CPyL227;
    cpy_r_r330 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r330)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", -1, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
CPyL227: ;
    cpy_r_r331 = cpy_r_r326 == 0;
    cpy_r_r320 = cpy_r_r331;
CPyL228: ;
    if (!cpy_r_r320) goto CPyL271;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r332 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 458, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL288;
    }
    cpy_r_r333 = ((mypy___nodes___CallExprObject *)cpy_r_r332)->_callee;
    if (likely(Py_TYPE(cpy_r_r333) == CPyType_nodes___MemberExpr))
        cpy_r_r334 = cpy_r_r333;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 458, CPyStatic_for_helpers___globals, "mypy.nodes.MemberExpr", cpy_r_r333);
        goto CPyL288;
    }
    cpy_r_r335 = ((mypy___nodes___MemberExprObject *)cpy_r_r334)->_expr;
    CPy_INCREF(cpy_r_r335);
    cpy_r_r336 = 2;
    cpy_r_r337 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r335, cpy_r_r336);
    CPy_DECREF(cpy_r_r335);
    if (unlikely(cpy_r_r337 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 458, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (likely(cpy_r_r337 != Py_None))
        cpy_r_r338 = cpy_r_r337;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 458, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r337);
        goto CPyL288;
    }
    cpy_r_expr_reg = cpy_r_r338;
    cpy_r_r339 = Py_None;
    CPy_INCREF(cpy_r_r339);
    cpy_r_for_dict_type = cpy_r_r339;
    CPy_DECREF(cpy_r_for_dict_type);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r340 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 460, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL289;
    }
    cpy_r_r341 = ((mypy___nodes___CallExprObject *)cpy_r_r340)->_callee;
    if (likely(Py_TYPE(cpy_r_r341) == CPyType_nodes___MemberExpr))
        cpy_r_r342 = cpy_r_r341;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 460, CPyStatic_for_helpers___globals, "mypy.nodes.MemberExpr", cpy_r_r341);
        goto CPyL289;
    }
    cpy_r_r343 = ((mypy___nodes___MemberExprObject *)cpy_r_r342)->_name;
    CPy_INCREF(cpy_r_r343);
    cpy_r_r344 = CPyStatics[267]; /* 'keys' */
    cpy_r_r345 = PyUnicode_Compare(cpy_r_r343, cpy_r_r344);
    CPy_DECREF(cpy_r_r343);
    cpy_r_r346 = cpy_r_r345 == -1;
    if (!cpy_r_r346) goto CPyL238;
    cpy_r_r347 = PyErr_Occurred();
    cpy_r_r348 = cpy_r_r347 != NULL;
    if (!cpy_r_r348) goto CPyL238;
    cpy_r_r349 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r349)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 460, CPyStatic_for_helpers___globals);
        goto CPyL289;
    }
CPyL238: ;
    cpy_r_r350 = cpy_r_r345 == 0;
    if (!cpy_r_r350) goto CPyL243;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r351 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 461, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL289;
    }
    cpy_r_r352 = ((mypy___nodes___CallExprObject *)cpy_r_r351)->_callee;
    if (likely(Py_TYPE(cpy_r_r352) == CPyType_nodes___MemberExpr))
        cpy_r_r353 = cpy_r_r352;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 461, CPyStatic_for_helpers___globals, "mypy.nodes.MemberExpr", cpy_r_r352);
        goto CPyL289;
    }
    cpy_r_r354 = ((mypy___nodes___MemberExprObject *)cpy_r_r353)->_expr;
    CPy_INCREF(cpy_r_r354);
    cpy_r_r355 = CPyDef_builder___IRBuilder___get_dict_key_type(cpy_r_builder, cpy_r_r354);
    CPy_DECREF(cpy_r_r354);
    if (unlikely(cpy_r_r355 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 461, CPyStatic_for_helpers___globals);
        goto CPyL289;
    }
    cpy_r_target_type = cpy_r_r355;
    cpy_r_r356 = (PyObject *)CPyType_for_helpers___ForDictionaryKeys;
    CPy_INCREF(cpy_r_r356);
    cpy_r_for_dict_type = cpy_r_r356;
    goto CPyL257;
CPyL243: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r357 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 463, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL289;
    }
    cpy_r_r358 = ((mypy___nodes___CallExprObject *)cpy_r_r357)->_callee;
    if (likely(Py_TYPE(cpy_r_r358) == CPyType_nodes___MemberExpr))
        cpy_r_r359 = cpy_r_r358;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 463, CPyStatic_for_helpers___globals, "mypy.nodes.MemberExpr", cpy_r_r358);
        goto CPyL289;
    }
    cpy_r_r360 = ((mypy___nodes___MemberExprObject *)cpy_r_r359)->_name;
    CPy_INCREF(cpy_r_r360);
    cpy_r_r361 = CPyStatics[2406]; /* 'values' */
    cpy_r_r362 = PyUnicode_Compare(cpy_r_r360, cpy_r_r361);
    CPy_DECREF(cpy_r_r360);
    cpy_r_r363 = cpy_r_r362 == -1;
    if (!cpy_r_r363) goto CPyL248;
    cpy_r_r364 = PyErr_Occurred();
    cpy_r_r365 = cpy_r_r364 != NULL;
    if (!cpy_r_r365) goto CPyL248;
    cpy_r_r366 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r366)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 463, CPyStatic_for_helpers___globals);
        goto CPyL289;
    }
CPyL248: ;
    cpy_r_r367 = cpy_r_r362 == 0;
    if (!cpy_r_r367) goto CPyL253;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r368 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 464, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL289;
    }
    cpy_r_r369 = ((mypy___nodes___CallExprObject *)cpy_r_r368)->_callee;
    if (likely(Py_TYPE(cpy_r_r369) == CPyType_nodes___MemberExpr))
        cpy_r_r370 = cpy_r_r369;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 464, CPyStatic_for_helpers___globals, "mypy.nodes.MemberExpr", cpy_r_r369);
        goto CPyL289;
    }
    cpy_r_r371 = ((mypy___nodes___MemberExprObject *)cpy_r_r370)->_expr;
    CPy_INCREF(cpy_r_r371);
    cpy_r_r372 = CPyDef_builder___IRBuilder___get_dict_value_type(cpy_r_builder, cpy_r_r371);
    CPy_DECREF(cpy_r_r371);
    if (unlikely(cpy_r_r372 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 464, CPyStatic_for_helpers___globals);
        goto CPyL289;
    }
    cpy_r_target_type = cpy_r_r372;
    cpy_r_r373 = (PyObject *)CPyType_for_helpers___ForDictionaryValues;
    CPy_INCREF(cpy_r_r373);
    cpy_r_for_dict_type = cpy_r_r373;
    goto CPyL257;
CPyL253: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r374 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 467, CPyStatic_for_helpers___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL289;
    }
    cpy_r_r375 = ((mypy___nodes___CallExprObject *)cpy_r_r374)->_callee;
    if (likely(Py_TYPE(cpy_r_r375) == CPyType_nodes___MemberExpr))
        cpy_r_r376 = cpy_r_r375;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 467, CPyStatic_for_helpers___globals, "mypy.nodes.MemberExpr", cpy_r_r375);
        goto CPyL289;
    }
    cpy_r_r377 = ((mypy___nodes___MemberExprObject *)cpy_r_r376)->_expr;
    CPy_INCREF(cpy_r_r377);
    cpy_r_r378 = CPyDef_builder___IRBuilder___get_dict_item_type(cpy_r_builder, cpy_r_r377);
    CPy_DECREF(cpy_r_r377);
    if (unlikely(cpy_r_r378 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 467, CPyStatic_for_helpers___globals);
        goto CPyL289;
    }
    cpy_r_target_type = cpy_r_r378;
    cpy_r_r379 = (PyObject *)CPyType_for_helpers___ForDictionaryItems;
    CPy_INCREF(cpy_r_r379);
    cpy_r_for_dict_type = cpy_r_r379;
CPyL257: ;
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r380 = CPyTagged_StealAsObject(cpy_r_line);
    cpy_r_r381 = cpy_r_nested ? Py_True : Py_False;
    PyObject *cpy_r_r382[6] = {
        cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit,
        cpy_r_r380, cpy_r_r381
    };
    cpy_r_r383 = (PyObject **)&cpy_r_r382;
    cpy_r_r384 = _PyObject_Vectorcall(cpy_r_for_dict_type, cpy_r_r383, 6, 0);
    CPy_DECREF(cpy_r_for_dict_type);
    if (unlikely(cpy_r_r384 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 469, CPyStatic_for_helpers___globals);
        goto CPyL319;
    }
    CPy_DECREF(cpy_r_r380);
    if (Py_TYPE(cpy_r_r384) == CPyType_for_helpers___ForDictionaryKeys)
        cpy_r_r385 = cpy_r_r384;
    else {
        cpy_r_r385 = NULL;
    }
    if (cpy_r_r385 != NULL) goto __LL10177;
    if (Py_TYPE(cpy_r_r384) == CPyType_for_helpers___ForDictionaryValues)
        cpy_r_r385 = cpy_r_r384;
    else {
        cpy_r_r385 = NULL;
    }
    if (cpy_r_r385 != NULL) goto __LL10177;
    if (Py_TYPE(cpy_r_r384) == CPyType_for_helpers___ForDictionaryItems)
        cpy_r_r385 = cpy_r_r384;
    else {
        cpy_r_r385 = NULL;
    }
    if (cpy_r_r385 != NULL) goto __LL10177;
    CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 469, CPyStatic_for_helpers___globals, "union[mypyc.irbuild.for_helpers.ForDictionaryKeys, mypyc.irbuild.for_helpers.ForDictionaryValues, mypyc.irbuild.for_helpers.ForDictionaryItems]", cpy_r_r384);
    goto CPyL294;
__LL10177: ;
    cpy_r_for_dict_gen = cpy_r_r385;
    cpy_r_r386 = (PyObject *)CPyType_for_helpers___ForDictionaryKeys;
    cpy_r_r387 = (CPyPtr)&((PyObject *)cpy_r_for_dict_gen)->ob_type;
    cpy_r_r388 = *(PyObject * *)cpy_r_r387;
    cpy_r_r389 = cpy_r_r388 == cpy_r_r386;
    if (!cpy_r_r389) goto CPyL263;
    CPy_INCREF(cpy_r_for_dict_gen);
    if (likely(Py_TYPE(cpy_r_for_dict_gen) == CPyType_for_helpers___ForDictionaryKeys))
        cpy_r_r390 = cpy_r_for_dict_gen;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 470, CPyStatic_for_helpers___globals, "mypyc.irbuild.for_helpers.ForDictionaryKeys", cpy_r_for_dict_gen);
        goto CPyL320;
    }
    cpy_r_r391 = CPyDef_for_helpers___ForDictionaryCommon___init(cpy_r_r390, cpy_r_expr_reg, cpy_r_target_type);
    CPy_DECREF(cpy_r_expr_reg);
    CPy_DECREF(cpy_r_target_type);
    CPy_DECREF(cpy_r_r390);
    if (unlikely(cpy_r_r391 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 470, CPyStatic_for_helpers___globals);
        goto CPyL321;
    }
    cpy_r_r392 = cpy_r_r391;
    goto CPyL270;
CPyL263: ;
    cpy_r_r393 = (PyObject *)CPyType_for_helpers___ForDictionaryValues;
    cpy_r_r394 = (CPyPtr)&((PyObject *)cpy_r_for_dict_gen)->ob_type;
    cpy_r_r395 = *(PyObject * *)cpy_r_r394;
    cpy_r_r396 = cpy_r_r395 == cpy_r_r393;
    if (!cpy_r_r396) goto CPyL267;
    CPy_INCREF(cpy_r_for_dict_gen);
    if (likely(Py_TYPE(cpy_r_for_dict_gen) == CPyType_for_helpers___ForDictionaryValues))
        cpy_r_r397 = cpy_r_for_dict_gen;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 470, CPyStatic_for_helpers___globals, "mypyc.irbuild.for_helpers.ForDictionaryValues", cpy_r_for_dict_gen);
        goto CPyL320;
    }
    cpy_r_r398 = CPyDef_for_helpers___ForDictionaryCommon___init(cpy_r_r397, cpy_r_expr_reg, cpy_r_target_type);
    CPy_DECREF(cpy_r_expr_reg);
    CPy_DECREF(cpy_r_target_type);
    CPy_DECREF(cpy_r_r397);
    if (unlikely(cpy_r_r398 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 470, CPyStatic_for_helpers___globals);
        goto CPyL321;
    }
    cpy_r_r392 = cpy_r_r398;
    goto CPyL270;
CPyL267: ;
    CPy_INCREF(cpy_r_for_dict_gen);
    if (likely(Py_TYPE(cpy_r_for_dict_gen) == CPyType_for_helpers___ForDictionaryItems))
        cpy_r_r399 = cpy_r_for_dict_gen;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 470, CPyStatic_for_helpers___globals, "mypyc.irbuild.for_helpers.ForDictionaryItems", cpy_r_for_dict_gen);
        goto CPyL320;
    }
    cpy_r_r400 = CPyDef_for_helpers___ForDictionaryCommon___init(cpy_r_r399, cpy_r_expr_reg, cpy_r_target_type);
    CPy_DECREF(cpy_r_expr_reg);
    CPy_DECREF(cpy_r_target_type);
    CPy_DECREF(cpy_r_r399);
    if (unlikely(cpy_r_r400 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 470, CPyStatic_for_helpers___globals);
        goto CPyL321;
    }
    cpy_r_r392 = cpy_r_r400;
CPyL270: ;
    return cpy_r_for_dict_gen;
CPyL271: ;
    cpy_r_r401 = Py_None;
    CPy_INCREF(cpy_r_r401);
    cpy_r_iterable_expr_reg = cpy_r_r401;
    cpy_r_r402 = (PyObject *)CPyType_nodes___SetExpr;
    cpy_r_r403 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r404 = *(PyObject * *)cpy_r_r403;
    cpy_r_r405 = cpy_r_r404 == cpy_r_r402;
    if (!cpy_r_r405) goto CPyL278;
    cpy_r_r406 = CPyStatics[10113]; /* ('precompute_set_literal',) */
    cpy_r_r407 = CPyStatics[8270]; /* 'mypyc.irbuild.expression' */
    cpy_r_r408 = CPyStatic_for_helpers___globals;
    cpy_r_r409 = CPyImport_ImportFromMany(cpy_r_r407, cpy_r_r406, cpy_r_r406, cpy_r_r408);
    if (unlikely(cpy_r_r409 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 476, CPyStatic_for_helpers___globals);
        goto CPyL322;
    }
    CPyModule_mypyc___irbuild___expression = cpy_r_r409;
    CPy_INCREF(CPyModule_mypyc___irbuild___expression);
    CPy_DECREF(cpy_r_r409);
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___SetExpr))
        cpy_r_r410 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 478, CPyStatic_for_helpers___globals, "mypy.nodes.SetExpr", cpy_r_expr);
        goto CPyL322;
    }
    cpy_r_r411 = CPyDef_expression___precompute_set_literal(cpy_r_builder, cpy_r_r410);
    CPy_DECREF(cpy_r_r410);
    if (unlikely(cpy_r_r411 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 478, CPyStatic_for_helpers___globals);
        goto CPyL322;
    }
    cpy_r_set_literal = cpy_r_r411;
    cpy_r_r412 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r413 = cpy_r_set_literal != cpy_r_r412;
    if (cpy_r_r413) {
        goto CPyL323;
    } else
        goto CPyL324;
CPyL276: ;
    if (likely(cpy_r_set_literal != Py_None))
        cpy_r_r414 = cpy_r_set_literal;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 480, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_set_literal);
        goto CPyL288;
    }
    cpy_r_iterable_expr_reg = cpy_r_r414;
CPyL278: ;
    cpy_r_r415 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r416 = cpy_r_iterable_expr_reg == cpy_r_r415;
    if (cpy_r_r416) {
        goto CPyL325;
    } else
        goto CPyL282;
CPyL279: ;
    cpy_r_r417 = 2;
    cpy_r_r418 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_expr, cpy_r_r417);
    if (unlikely(cpy_r_r418 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 484, CPyStatic_for_helpers___globals);
        goto CPyL288;
    }
    if (likely(cpy_r_r418 != Py_None))
        cpy_r_r419 = cpy_r_r418;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 484, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r418);
        goto CPyL288;
    }
    cpy_r_iterable_expr_reg = cpy_r_r419;
CPyL282: ;
    cpy_r_r420 = CPyDef_for_helpers___ForIterable(cpy_r_builder, cpy_r_index, cpy_r_body_block, cpy_r_loop_exit, cpy_r_line, cpy_r_nested);
    if (unlikely(cpy_r_r420 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 485, CPyStatic_for_helpers___globals);
        goto CPyL322;
    }
    cpy_r_for_obj = cpy_r_r420;
    cpy_r_r421 = CPyDef_builder___IRBuilder____analyze_iterable_item_type(cpy_r_builder, cpy_r_expr);
    if (unlikely(cpy_r_r421 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 486, CPyStatic_for_helpers___globals);
        goto CPyL326;
    }
    cpy_r_item_type = cpy_r_r421;
    cpy_r_r422 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_builder, cpy_r_item_type);
    CPy_DECREF(cpy_r_item_type);
    if (unlikely(cpy_r_r422 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 487, CPyStatic_for_helpers___globals);
        goto CPyL326;
    }
    cpy_r_item_rtype = cpy_r_r422;
    if (likely(cpy_r_iterable_expr_reg != Py_None))
        cpy_r_r423 = cpy_r_iterable_expr_reg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 488, CPyStatic_for_helpers___globals, "mypyc.ir.ops.Value", cpy_r_iterable_expr_reg);
        goto CPyL327;
    }
    cpy_r_r424 = CPyDef_for_helpers___ForIterable___init(cpy_r_for_obj, cpy_r_r423, cpy_r_item_rtype);
    CPy_DECREF(cpy_r_r423);
    CPy_DECREF(cpy_r_item_rtype);
    if (unlikely(cpy_r_r424 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 488, CPyStatic_for_helpers___globals);
        goto CPyL328;
    }
    return cpy_r_for_obj;
CPyL288: ;
    cpy_r_r425 = NULL;
    return cpy_r_r425;
CPyL289: ;
    CPy_DecRef(cpy_r_expr_reg);
    goto CPyL288;
CPyL290: ;
    CPy_DecRef(cpy_r_expr_reg);
    CPy_DecRef(cpy_r_async_obj);
    goto CPyL288;
CPyL291: ;
    CPy_DecRef(cpy_r_async_obj);
    goto CPyL288;
CPyL292: ;
    CPy_DecRef(cpy_r_rtyp);
    goto CPyL288;
CPyL293: ;
    CPy_DECREF(cpy_r_rtyp);
    goto CPyL15;
CPyL294: ;
    CPy_DecRef(cpy_r_expr_reg);
    CPy_DecRef(cpy_r_target_type);
    goto CPyL288;
CPyL295: ;
    CPy_DecRef(cpy_r_for_list);
    goto CPyL288;
CPyL296: ;
    CPy_DecRef(cpy_r_for_dict);
    goto CPyL288;
CPyL297: ;
    CPy_DecRef(cpy_r_r67);
    goto CPyL54;
CPyL298: ;
    CPy_DecRef(cpy_r_r67);
    goto CPyL288;
CPyL299: ;
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r70);
    goto CPyL288;
CPyL300: ;
    CPy_DecRef(cpy_r_start_reg);
    goto CPyL288;
CPyL301: ;
    CPy_DecRef(cpy_r_start_reg);
    CPy_DecRef(cpy_r_end_reg);
    goto CPyL288;
CPyL302: ;
    CPy_DECREF(cpy_r_start_reg);
    CPy_DECREF(cpy_r_end_reg);
    CPy_DECREF(cpy_r_step);
    goto CPyL88;
CPyL303: ;
    CPy_DecRef(cpy_r_start_reg);
    CPy_DecRef(cpy_r_end_reg);
    CPy_DecRef(cpy_r_step);
    goto CPyL288;
CPyL304: ;
    CPy_DecRef(cpy_r_start_reg);
    CPy_DecRef(cpy_r_end_reg);
    CPy_DecRef(cpy_r_for_range);
    goto CPyL288;
CPyL305: ;
    CPy_DecRef(cpy_r_for_range);
    goto CPyL288;
CPyL306: ;
    CPy_DecRef(cpy_r_r150);
    goto CPyL113;
CPyL307: ;
    CPy_DecRef(cpy_r_r150);
    goto CPyL288;
CPyL308: ;
    CPy_DecRef(cpy_r_lvalue1);
    goto CPyL288;
CPyL309: ;
    CPy_DecRef(cpy_r_lvalue1);
    CPy_DecRef(cpy_r_lvalue2);
    goto CPyL288;
CPyL310: ;
    CPy_DecRef(cpy_r_lvalue1);
    CPy_DecRef(cpy_r_lvalue2);
    CPy_DecRef(cpy_r_for_enumerate);
    goto CPyL288;
CPyL311: ;
    CPy_DecRef(cpy_r_for_enumerate);
    goto CPyL288;
CPyL312: ;
    CPy_DecRef(cpy_r_r202);
    goto CPyL147;
CPyL313: ;
    CPy_DecRef(cpy_r_r202);
    goto CPyL288;
CPyL314: ;
    CPy_DecRef(cpy_r_r202);
    CPy_DecRef(cpy_r_r205);
    goto CPyL288;
CPyL315: ;
    CPy_DecRef(cpy_r_for_zip);
    goto CPyL288;
CPyL316: ;
    CPy_DecRef(cpy_r_for_zip);
    CPy_DecRef(cpy_r_r228);
    goto CPyL288;
CPyL317: ;
    CPy_DecRef(cpy_r_r250);
    goto CPyL175;
CPyL318: ;
    CPy_DecRef(cpy_r_r250);
    goto CPyL288;
CPyL319: ;
    CPy_DecRef(cpy_r_expr_reg);
    CPy_DecRef(cpy_r_target_type);
    CPy_DecRef(cpy_r_r380);
    goto CPyL288;
CPyL320: ;
    CPy_DecRef(cpy_r_expr_reg);
    CPy_DecRef(cpy_r_target_type);
    CPy_DecRef(cpy_r_for_dict_gen);
    goto CPyL288;
CPyL321: ;
    CPy_DecRef(cpy_r_for_dict_gen);
    goto CPyL288;
CPyL322: ;
    CPy_DecRef(cpy_r_iterable_expr_reg);
    goto CPyL288;
CPyL323: ;
    CPy_DECREF(cpy_r_iterable_expr_reg);
    goto CPyL276;
CPyL324: ;
    CPy_DECREF(cpy_r_set_literal);
    goto CPyL278;
CPyL325: ;
    CPy_DECREF(cpy_r_iterable_expr_reg);
    goto CPyL279;
CPyL326: ;
    CPy_DecRef(cpy_r_iterable_expr_reg);
    CPy_DecRef(cpy_r_for_obj);
    goto CPyL288;
CPyL327: ;
    CPy_DecRef(cpy_r_item_rtype);
    CPy_DecRef(cpy_r_for_obj);
    goto CPyL288;
CPyL328: ;
    CPy_DecRef(cpy_r_for_obj);
    goto CPyL288;
}

PyObject *CPyPy_for_helpers___make_for_loop_generator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "index", "expr", "body_block", "loop_exit", "line", "is_async", "nested", 0};
    static CPyArg_Parser parser = {"OOOOOO|OO:make_for_loop_generator", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_index;
    PyObject *obj_expr;
    PyObject *obj_body_block;
    PyObject *obj_loop_exit;
    PyObject *obj_line;
    PyObject *obj_is_async = NULL;
    PyObject *obj_nested = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_index, &obj_expr, &obj_body_block, &obj_loop_exit, &obj_line, &obj_is_async, &obj_nested)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_index;
    if (likely(PyObject_TypeCheck(obj_index, CPyType_nodes___Expression)))
        arg_index = obj_index;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_index); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *arg_body_block;
    if (likely(Py_TYPE(obj_body_block) == CPyType_ops___BasicBlock))
        arg_body_block = obj_body_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_body_block); 
        goto fail;
    }
    PyObject *arg_loop_exit;
    if (likely(Py_TYPE(obj_loop_exit) == CPyType_ops___BasicBlock))
        arg_loop_exit = obj_loop_exit;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_loop_exit); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char arg_is_async;
    if (obj_is_async == NULL) {
        arg_is_async = 2;
    } else if (unlikely(!PyBool_Check(obj_is_async))) {
        CPy_TypeError("bool", obj_is_async); goto fail;
    } else
        arg_is_async = obj_is_async == Py_True;
    char arg_nested;
    if (obj_nested == NULL) {
        arg_nested = 2;
    } else if (unlikely(!PyBool_Check(obj_nested))) {
        CPy_TypeError("bool", obj_nested); goto fail;
    } else
        arg_nested = obj_nested == Py_True;
    PyObject *retval = CPyDef_for_helpers___make_for_loop_generator(arg_builder, arg_index, arg_expr, arg_body_block, arg_loop_exit, arg_line, arg_is_async, arg_nested);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "make_for_loop_generator", 341, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForGenerator_____init__(PyObject *cpy_r_self, PyObject *cpy_r_builder, PyObject *cpy_r_index, PyObject *cpy_r_body_block, PyObject *cpy_r_loop_exit, CPyTagged cpy_r_line, char cpy_r_nested) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    CPy_INCREF(cpy_r_builder);
    ((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_builder = cpy_r_builder;
    CPy_INCREF(cpy_r_index);
    ((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_index = cpy_r_index;
    CPy_INCREF(cpy_r_body_block);
    ((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_body_block = cpy_r_body_block;
    CPyTagged_INCREF(cpy_r_line);
    ((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_line = cpy_r_line;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_for_helpers___ForGenerator, 1, mypyc___irbuild___for_helpers___ForGeneratorObject, char (*)(PyObject *))(cpy_r_self); /* need_cleanup */
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "__init__", 513, CPyStatic_for_helpers___globals);
        goto CPyL7;
    }
    if (!cpy_r_r0) goto CPyL5;
    if (cpy_r_nested) goto CPyL5;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_ops___BasicBlock(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "__init__", 515, CPyStatic_for_helpers___globals);
        goto CPyL7;
    }
    if (((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_loop_exit != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_loop_exit);
    }
    ((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_loop_exit = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "__init__", 515, CPyStatic_for_helpers___globals);
        goto CPyL7;
    } else
        goto CPyL6;
CPyL5: ;
    CPy_INCREF(cpy_r_loop_exit);
    if (((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_loop_exit != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_loop_exit);
    }
    ((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_loop_exit = cpy_r_loop_exit;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "__init__", 518, CPyStatic_for_helpers___globals);
        goto CPyL7;
    }
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_for_helpers___ForGenerator_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "index", "body_block", "loop_exit", "line", "nested", 0};
    PyObject *obj_builder;
    PyObject *obj_index;
    PyObject *obj_body_block;
    PyObject *obj_loop_exit;
    PyObject *obj_line;
    PyObject *obj_nested;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOOOO", "__init__", kwlist, &obj_builder, &obj_index, &obj_body_block, &obj_loop_exit, &obj_line, &obj_nested)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_for_helpers___ForGenerator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_index;
    if (likely(PyObject_TypeCheck(obj_index, CPyType_nodes___Expression)))
        arg_index = obj_index;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_index); 
        goto fail;
    }
    PyObject *arg_body_block;
    if (likely(Py_TYPE(obj_body_block) == CPyType_ops___BasicBlock))
        arg_body_block = obj_body_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_body_block); 
        goto fail;
    }
    PyObject *arg_loop_exit;
    if (likely(Py_TYPE(obj_loop_exit) == CPyType_ops___BasicBlock))
        arg_loop_exit = obj_loop_exit;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_loop_exit); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char arg_nested;
    if (unlikely(!PyBool_Check(obj_nested))) {
        CPy_TypeError("bool", obj_nested); goto fail;
    } else
        arg_nested = obj_nested == Py_True;
    char retval = CPyDef_for_helpers___ForGenerator_____init__(arg_self, arg_builder, arg_index, arg_body_block, arg_loop_exit, arg_line, arg_nested);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "__init__", 495, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForGenerator___need_cleanup(PyObject *cpy_r_self) {
    return 0;
}

PyObject *CPyPy_for_helpers___ForGenerator___need_cleanup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":need_cleanup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_for_helpers___ForGenerator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForGenerator", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForGenerator___need_cleanup(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "need_cleanup", 520, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForGenerator___add_cleanup(PyObject *cpy_r_self, PyObject *cpy_r_exit_block) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_for_helpers___ForGenerator, 1, mypyc___irbuild___for_helpers___ForGeneratorObject, char (*)(PyObject *))(cpy_r_self); /* need_cleanup */
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "add_cleanup", 526, CPyStatic_for_helpers___globals);
        goto CPyL7;
    }
    if (!cpy_r_r0) goto CPyL6;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_loop_exit;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "add_cleanup", "ForGenerator", "loop_exit", 527, CPyStatic_for_helpers___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "add_cleanup", 527, CPyStatic_for_helpers___globals);
        goto CPyL7;
    }
    cpy_r_r4 = CPY_GET_METHOD(cpy_r_self, CPyType_for_helpers___ForGenerator, 6, mypyc___irbuild___for_helpers___ForGeneratorObject, char (*)(PyObject *))(cpy_r_self); /* gen_cleanup */
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "add_cleanup", 528, CPyStatic_for_helpers___globals);
        goto CPyL7;
    }
    cpy_r_r5 = ((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_builder___IRBuilder___goto(cpy_r_r5, cpy_r_exit_block);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "add_cleanup", 529, CPyStatic_for_helpers___globals);
        goto CPyL7;
    }
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL8: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
}

PyObject *CPyPy_for_helpers___ForGenerator___add_cleanup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"exit_block", 0};
    static CPyArg_Parser parser = {"O:add_cleanup", kwlist, 0};
    PyObject *obj_exit_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_exit_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_for_helpers___ForGenerator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_exit_block;
    if (likely(Py_TYPE(obj_exit_block) == CPyType_ops___BasicBlock))
        arg_exit_block = obj_exit_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_exit_block); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForGenerator___add_cleanup(arg_self, arg_exit_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "add_cleanup", 524, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForGenerator___gen_condition(PyObject *cpy_r_self) {
    return 1;
}

PyObject *CPyPy_for_helpers___ForGenerator___gen_condition(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_condition", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_for_helpers___ForGenerator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForGenerator", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForGenerator___gen_condition(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 531, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForGenerator___begin_body(PyObject *cpy_r_self) {
    return 1;
}

PyObject *CPyPy_for_helpers___ForGenerator___begin_body(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":begin_body", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_for_helpers___ForGenerator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForGenerator", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForGenerator___begin_body(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 534, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForGenerator___gen_step(PyObject *cpy_r_self) {
    return 1;
}

PyObject *CPyPy_for_helpers___ForGenerator___gen_step(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_step", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_for_helpers___ForGenerator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForGenerator", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForGenerator___gen_step(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 537, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForGenerator___gen_cleanup(PyObject *cpy_r_self) {
    return 1;
}

PyObject *CPyPy_for_helpers___ForGenerator___gen_cleanup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_cleanup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_for_helpers___ForGenerator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForGenerator", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForGenerator___gen_cleanup(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 540, CPyStatic_for_helpers___globals);
    return NULL;
}

PyObject *CPyDef_for_helpers___ForGenerator___load_len(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_builder;
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r0)->_builder;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_builder___IRBuilder___read(cpy_r_r2, cpy_r_expr, cpy_r_r3, cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "load_len", 545, CPyStatic_for_helpers___globals);
        goto CPyL4;
    }
    cpy_r_r6 = ((mypyc___irbuild___for_helpers___ForGeneratorObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r6);
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_ll_builder___LowLevelIRBuilder___builtin_len(cpy_r_r1, cpy_r_r5, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "load_len", 545, CPyStatic_for_helpers___globals);
        goto CPyL3;
    }
    return cpy_r_r8;
CPyL3: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL4: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
}

PyObject *CPyPy_for_helpers___ForGenerator___load_len(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:load_len", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_for_helpers___ForGenerator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (PyObject_TypeCheck(obj_expr, CPyType_ops___Value))
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL10178;
    if (PyObject_TypeCheck(obj_expr, CPyType_targets___AssignmentTarget))
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL10178;
    CPy_TypeError("union[mypyc.ir.ops.Value, mypyc.irbuild.targets.AssignmentTarget]", obj_expr); 
    goto fail;
__LL10178: ;
    PyObject *retval = CPyDef_for_helpers___ForGenerator___load_len(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "load_len", 543, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForIterable___need_cleanup(PyObject *cpy_r_self) {
    return 1;
}

PyObject *CPyPy_for_helpers___ForIterable___need_cleanup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":need_cleanup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForIterable))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForIterable", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForIterable___need_cleanup(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "need_cleanup", 551, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForIterable___init(PyObject *cpy_r_self, PyObject *cpy_r_expr_reg, PyObject *cpy_r_target_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_iter_reg;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = CPyStatic_for_helpers___globals;
    cpy_r_r2 = CPyStatics[8072]; /* 'iter_op' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 560, CPyStatic_for_helpers___globals);
        goto CPyL10;
    }
    if (likely(PyTuple_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "init", 560, CPyStatic_for_helpers___globals, "tuple", cpy_r_r3);
        goto CPyL10;
    }
    cpy_r_r5 = PyList_New(1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 560, CPyStatic_for_helpers___globals);
        goto CPyL11;
    }
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r5)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    CPy_INCREF(cpy_r_expr_reg);
    *(PyObject * *)cpy_r_r7 = cpy_r_expr_reg;
    cpy_r_r8 = ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r4, cpy_r_r5, cpy_r_r8);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 560, CPyStatic_for_helpers___globals);
        goto CPyL10;
    }
    cpy_r_iter_reg = cpy_r_r9;
    cpy_r_r10 = CPyDef_builder___IRBuilder___maybe_spill(cpy_r_builder, cpy_r_expr_reg);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 561, CPyStatic_for_helpers___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL5: ;
    cpy_r_r11 = CPyDef_builder___IRBuilder___maybe_spill(cpy_r_builder, cpy_r_iter_reg);
    CPy_DECREF(cpy_r_iter_reg);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 562, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    if (((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_iter_target != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_iter_target);
    }
    ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_iter_target = cpy_r_r11;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 562, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_target_type);
    if (((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_target_type != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_target_type);
    }
    ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_target_type = cpy_r_target_type;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 563, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    return 1;
CPyL9: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL10: ;
    CPy_DecRef(cpy_r_builder);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_r4);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_iter_reg);
    goto CPyL9;
CPyL13: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL5;
}

PyObject *CPyPy_for_helpers___ForIterable___init(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr_reg", "target_type", 0};
    static CPyArg_Parser parser = {"OO:init", kwlist, 0};
    PyObject *obj_expr_reg;
    PyObject *obj_target_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr_reg, &obj_target_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForIterable))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForIterable", obj_self); 
        goto fail;
    }
    PyObject *arg_expr_reg;
    if (likely(PyObject_TypeCheck(obj_expr_reg, CPyType_ops___Value)))
        arg_expr_reg = obj_expr_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_expr_reg); 
        goto fail;
    }
    PyObject *arg_target_type;
    if (likely(PyObject_TypeCheck(obj_target_type, CPyType_rtypes___RType)))
        arg_target_type = obj_target_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_target_type); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForIterable___init(arg_self, arg_expr_reg, arg_target_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 555, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForIterable___gen_condition(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_line = cpy_r_r1;
    cpy_r_r2 = CPyStatic_for_helpers___globals;
    cpy_r_r3 = CPyStatics[8073]; /* 'next_op' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 572, CPyStatic_for_helpers___globals);
        goto CPyL13;
    }
    if (likely(PyTuple_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 572, CPyStatic_for_helpers___globals, "tuple", cpy_r_r4);
        goto CPyL13;
    }
    cpy_r_r6 = ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_iter_target;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForIterable", "iter_target", 572, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r6);
CPyL3: ;
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r6, cpy_r_line, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 572, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    cpy_r_r9 = PyList_New(1);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 572, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
    cpy_r_r10 = (CPyPtr)&((PyListObject *)cpy_r_r9)->ob_item;
    cpy_r_r11 = *(CPyPtr *)cpy_r_r10;
    *(PyObject * *)cpy_r_r11 = cpy_r_r8;
    cpy_r_r12 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r5, cpy_r_r9, cpy_r_line);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    CPyTagged_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 572, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    if (((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_next_reg != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_next_reg);
    }
    ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_next_reg = cpy_r_r12;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 572, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    cpy_r_r14 = ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_next_reg;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForIterable", "next_reg", 573, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r14);
CPyL8: ;
    cpy_r_r15 = ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_loop_exit;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForIterable", "loop_exit", 573, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r15);
CPyL9: ;
    cpy_r_r16 = ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_body_block;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPY_INT_TAG;
    cpy_r_r18 = 2;
    cpy_r_r19 = CPyDef_ops___Branch(cpy_r_r14, cpy_r_r15, cpy_r_r16, 202, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 573, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    cpy_r_r20 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 573, CPyStatic_for_helpers___globals);
        goto CPyL12;
    } else
        goto CPyL18;
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL13: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r5);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_builder);
    goto CPyL12;
CPyL17: ;
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_r14);
    goto CPyL12;
CPyL18: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL11;
}

PyObject *CPyPy_for_helpers___ForIterable___gen_condition(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_condition", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForIterable))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForIterable", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForIterable___gen_condition(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 565, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForIterable___begin_body(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_next_reg;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_line = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_next_reg;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForIterable", "next_reg", 582, CPyStatic_for_helpers___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r2);
CPyL1: ;
    cpy_r_r3 = ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_target_type;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForIterable", "target_type", 582, CPyStatic_for_helpers___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r3);
CPyL2: ;
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_r2, cpy_r_r3, cpy_r_line, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 582, CPyStatic_for_helpers___globals);
        goto CPyL7;
    }
    cpy_r_next_reg = cpy_r_r5;
    cpy_r_r6 = ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_index;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_builder, cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 583, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    cpy_r_r10 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r9, cpy_r_next_reg, cpy_r_line);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_next_reg);
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 583, CPyStatic_for_helpers___globals);
        goto CPyL6;
    }
    return 1;
CPyL6: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL7: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_next_reg);
    goto CPyL6;
}

PyObject *CPyPy_for_helpers___ForIterable___begin_body(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":begin_body", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForIterable))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForIterable", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForIterable___begin_body(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 575, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForIterable___gen_step(PyObject *cpy_r_self) {
    return 1;
}

PyObject *CPyPy_for_helpers___ForIterable___gen_step(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_step", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForIterable))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForIterable", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForIterable___gen_step(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 585, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForIterable___gen_cleanup(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatic_for_helpers___globals;
    cpy_r_r2 = CPyStatics[8271]; /* 'no_err_occurred_op' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 594, CPyStatic_for_helpers___globals);
        goto CPyL6;
    }
    if (likely(PyTuple_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 594, CPyStatic_for_helpers___globals, "tuple", cpy_r_r3);
        goto CPyL6;
    }
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 594, CPyStatic_for_helpers___globals);
        goto CPyL7;
    }
    cpy_r_r6 = ((mypyc___irbuild___for_helpers___ForIterableObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_builder___IRBuilder___call_c(cpy_r_r0, cpy_r_r4, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 594, CPyStatic_for_helpers___globals);
        goto CPyL5;
    } else
        goto CPyL8;
CPyL4: ;
    return 1;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL5;
CPyL8: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL4;
}

PyObject *CPyPy_for_helpers___ForIterable___gen_cleanup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_cleanup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForIterable))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForIterable", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForIterable___gen_cleanup(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 589, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForAsyncIterable___init(PyObject *cpy_r_self, PyObject *cpy_r_expr_reg, PyObject *cpy_r_target_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_iter_reg;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = CPyStatic_for_helpers___globals;
    cpy_r_r2 = CPyStatics[8272]; /* 'aiter_op' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 606, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
    if (likely(PyTuple_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "init", 606, CPyStatic_for_helpers___globals, "tuple", cpy_r_r3);
        goto CPyL15;
    }
    cpy_r_r5 = PyList_New(1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 606, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r5)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    CPy_INCREF(cpy_r_expr_reg);
    *(PyObject * *)cpy_r_r7 = cpy_r_expr_reg;
    cpy_r_r8 = ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r4, cpy_r_r5, cpy_r_r8);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 606, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
    cpy_r_iter_reg = cpy_r_r9;
    cpy_r_r10 = CPyDef_builder___IRBuilder___maybe_spill(cpy_r_builder, cpy_r_expr_reg);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 607, CPyStatic_for_helpers___globals);
        goto CPyL17;
    } else
        goto CPyL18;
CPyL5: ;
    cpy_r_r11 = CPyDef_builder___IRBuilder___maybe_spill(cpy_r_builder, cpy_r_iter_reg);
    CPy_DECREF(cpy_r_iter_reg);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 608, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    if (((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_self)->_iter_target != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_self)->_iter_target);
    }
    ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_self)->_iter_target = cpy_r_r11;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 608, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_target_type);
    if (((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_self)->_target_type != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_self)->_target_type);
    }
    ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_self)->_target_type = cpy_r_target_type;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 609, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    cpy_r_r14 = CPyStatic_rtypes___bool_rprimitive;
    if (likely(cpy_r_r14 != NULL)) goto CPyL11;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 610, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r16 = NULL;
    cpy_r_r17 = 2;
    cpy_r_r18 = CPY_INT_TAG;
    cpy_r_r19 = CPyDef_ops___Register(cpy_r_r14, cpy_r_r16, cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 610, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    if (((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_self)->_stop_reg != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_self)->_stop_reg);
    }
    ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_self)->_stop_reg = cpy_r_r19;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 610, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL15: ;
    CPy_DecRef(cpy_r_builder);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_r4);
    goto CPyL14;
CPyL17: ;
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_iter_reg);
    goto CPyL14;
CPyL18: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL5;
}

PyObject *CPyPy_for_helpers___ForAsyncIterable___init(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr_reg", "target_type", 0};
    static CPyArg_Parser parser = {"OO:init", kwlist, 0};
    PyObject *obj_expr_reg;
    PyObject *obj_target_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr_reg, &obj_target_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForAsyncIterable))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForAsyncIterable", obj_self); 
        goto fail;
    }
    PyObject *arg_expr_reg;
    if (likely(PyObject_TypeCheck(obj_expr_reg, CPyType_ops___Value)))
        arg_expr_reg = obj_expr_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_expr_reg); 
        goto fail;
    }
    PyObject *arg_target_type;
    if (likely(PyObject_TypeCheck(obj_target_type, CPyType_rtypes___RType)))
        arg_target_type = obj_target_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_target_type); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForAsyncIterable___init(arg_self, arg_expr_reg, arg_target_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 600, CPyStatic_for_helpers___globals);
    return NULL;
}

PyObject *CPyDef_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "__get__", -1, CPyStatic_for_helpers___globals);
    return NULL;
}

PyObject *CPyDef_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_except_match;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_addr;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "except_match", "except_match_gen_condition_ForAsyncIterable_obj", "__mypyc_env__", 628, CPyStatic_for_helpers___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_except_match;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "except_match", "gen_condition_ForAsyncIterable_env", "except_match", -1, CPyStatic_for_helpers___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_except_match = cpy_r_r1;
    CPy_DECREF(cpy_r_except_match);
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "except_match", "gen_condition_ForAsyncIterable_env", "builder", 629, CPyStatic_for_helpers___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPyStatic_rtypes___pointer_rprimitive;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL23;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "except_match", 629, CPyStatic_for_helpers___globals);
        goto CPyL21;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r5 = CPyStatic_for_helpers___globals;
    cpy_r_r6 = CPyStatics[8273]; /* 'stop_async_iteration_op' */
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "except_match", 629, CPyStatic_for_helpers___globals);
        goto CPyL24;
    }
    if (likely(PyTuple_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "except_match", 629, CPyStatic_for_helpers___globals, "tuple", cpy_r_r7);
        goto CPyL24;
    }
    cpy_r_r9 = CPySequenceTuple_GetItem(cpy_r_r8, 4);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "except_match", 629, CPyStatic_for_helpers___globals);
        goto CPyL24;
    }
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "except_match", 629, CPyStatic_for_helpers___globals, "str", cpy_r_r9);
        goto CPyL24;
    }
    cpy_r_r11 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "except_match", "gen_condition_ForAsyncIterable_env", "line", 629, CPyStatic_for_helpers___globals);
        goto CPyL25;
    }
    CPyTagged_INCREF(cpy_r_r11);
CPyL11: ;
    cpy_r_r12 = CPyDef_ops___LoadAddress(cpy_r_r3, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "except_match", 629, CPyStatic_for_helpers___globals);
        goto CPyL24;
    }
    cpy_r_r13 = CPyDef_builder___IRBuilder___add(cpy_r_r2, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "except_match", 629, CPyStatic_for_helpers___globals);
        goto CPyL22;
    }
    cpy_r_addr = cpy_r_r13;
    cpy_r_r14 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r14 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'builder' of 'gen_condition_ForAsyncIterable_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r14);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "except_match", 630, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
CPyL14: ;
    cpy_r_r15 = CPyStatic_for_helpers___globals;
    cpy_r_r16 = CPyStatics[8273]; /* 'stop_async_iteration_op' */
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "except_match", 630, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
    if (likely(PyTuple_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "except_match", 630, CPyStatic_for_helpers___globals, "tuple", cpy_r_r17);
        goto CPyL27;
    }
    cpy_r_r19 = CPySequenceTuple_GetItem(cpy_r_r18, 2);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "except_match", 630, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_rtypes___RType)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "except_match", 630, CPyStatic_for_helpers___globals, "mypyc.ir.rtypes.RType", cpy_r_r19);
        goto CPyL27;
    }
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPyDef_ops___LoadMem(cpy_r_r20, cpy_r_addr, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_addr);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "except_match", 630, CPyStatic_for_helpers___globals);
        goto CPyL28;
    }
    cpy_r_r23 = CPyDef_builder___IRBuilder___add(cpy_r_r14, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "except_match", 630, CPyStatic_for_helpers___globals);
        goto CPyL21;
    }
    return cpy_r_r23;
CPyL21: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL21;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r10);
    goto CPyL21;
CPyL26: ;
    CPy_DecRef(cpy_r_addr);
    goto CPyL21;
CPyL27: ;
    CPy_DecRef(cpy_r_addr);
    CPy_DecRef(cpy_r_r14);
    goto CPyL21;
CPyL28: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL21;
}

PyObject *CPyPy_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *retval = CPyDef_for_helpers___except_match_gen_condition_ForAsyncIterable_obj_____call__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "except_match", 628, CPyStatic_for_helpers___globals);
    return NULL;
}

PyObject *CPyDef_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "__get__", -1, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_try_body;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    CPyPtr cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_awaitable;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "try_body", "try_body_gen_condition_ForAsyncIterable_obj", "__mypyc_env__", 632, CPyStatic_for_helpers___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_try_body;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "try_body", "gen_condition_ForAsyncIterable_env", "try_body", -1, CPyStatic_for_helpers___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_try_body = cpy_r_r1;
    CPy_DECREF(cpy_r_try_body);
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "try_body", "gen_condition_ForAsyncIterable_env", "builder", 633, CPyStatic_for_helpers___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPyStatic_for_helpers___globals;
    cpy_r_r4 = CPyStatics[8274]; /* 'anext_op' */
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "try_body", 633, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    if (likely(PyTuple_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "try_body", 633, CPyStatic_for_helpers___globals, "tuple", cpy_r_r5);
        goto CPyL26;
    }
    cpy_r_r7 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "try_body", "gen_condition_ForAsyncIterable_env", "builder", 633, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r7);
CPyL6: ;
    cpy_r_r8 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "try_body", "gen_condition_ForAsyncIterable_env", "self", 633, CPyStatic_for_helpers___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    cpy_r_r9 = ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_r8)->_iter_target;
    if (unlikely(cpy_r_r9 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'iter_target' of 'ForAsyncIterable' undefined");
    } else {
        CPy_INCREF(cpy_r_r9);
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "try_body", 633, CPyStatic_for_helpers___globals);
        goto CPyL28;
    }
CPyL8: ;
    cpy_r_r10 = CPY_INT_TAG;
    cpy_r_r11 = 2;
    cpy_r_r12 = CPyDef_builder___IRBuilder___read(cpy_r_r7, cpy_r_r9, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "try_body", 633, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
    cpy_r_r13 = PyList_New(1);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "try_body", 633, CPyStatic_for_helpers___globals);
        goto CPyL29;
    }
    cpy_r_r14 = (CPyPtr)&((PyListObject *)cpy_r_r13)->ob_item;
    cpy_r_r15 = *(CPyPtr *)cpy_r_r14;
    *(PyObject * *)cpy_r_r15 = cpy_r_r12;
    cpy_r_r16 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "try_body", "gen_condition_ForAsyncIterable_env", "line", 633, CPyStatic_for_helpers___globals);
        goto CPyL30;
    }
    CPyTagged_INCREF(cpy_r_r16);
CPyL11: ;
    cpy_r_r17 = CPyDef_builder___IRBuilder___call_c(cpy_r_r2, cpy_r_r6, cpy_r_r13, cpy_r_r16);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "try_body", 633, CPyStatic_for_helpers___globals);
        goto CPyL25;
    }
    cpy_r_awaitable = cpy_r_r17;
    cpy_r_r18 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "try_body", "gen_condition_ForAsyncIterable_env", "builder", 634, CPyStatic_for_helpers___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r18);
CPyL13: ;
    cpy_r_r19 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r19 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "try_body", "gen_condition_ForAsyncIterable_env", "line", 634, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    CPyTagged_INCREF(cpy_r_r19);
CPyL14: ;
    cpy_r_r20 = CPyDef_statement___emit_await(cpy_r_r18, cpy_r_awaitable, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_awaitable);
    CPyTagged_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "try_body", 634, CPyStatic_for_helpers___globals);
        goto CPyL25;
    }
    cpy_r_r21 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "try_body", "gen_condition_ForAsyncIterable_env", "self", 634, CPyStatic_for_helpers___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r21);
CPyL16: ;
    if (((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_r21)->_next_reg != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_r21)->_next_reg);
    }
    ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_r21)->_next_reg = cpy_r_r20;
    cpy_r_r22 = 1;
    CPy_DECREF(cpy_r_r21);
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "try_body", 634, CPyStatic_for_helpers___globals);
        goto CPyL25;
    }
    cpy_r_r23 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "try_body", "gen_condition_ForAsyncIterable_env", "builder", 635, CPyStatic_for_helpers___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r23);
CPyL18: ;
    cpy_r_r24 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "try_body", "gen_condition_ForAsyncIterable_env", "self", 635, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r24);
CPyL19: ;
    cpy_r_r25 = ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_r24)->_stop_reg;
    if (unlikely(cpy_r_r25 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'stop_reg' of 'ForAsyncIterable' undefined");
    } else {
        CPy_INCREF(cpy_r_r25);
    }
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "try_body", 635, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
CPyL20: ;
    cpy_r_r26 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r26 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'builder' of 'gen_condition_ForAsyncIterable_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r26);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "try_body", 635, CPyStatic_for_helpers___globals);
        goto CPyL35;
    }
CPyL21: ;
    cpy_r_r27 = CPyDef_builder___IRBuilder___false(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "try_body", 635, CPyStatic_for_helpers___globals);
        goto CPyL35;
    }
    cpy_r_r28 = CPyDef_builder___IRBuilder___assign(cpy_r_r23, cpy_r_r25, cpy_r_r27, -2);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "try_body", 635, CPyStatic_for_helpers___globals);
        goto CPyL24;
    }
    return 1;
CPyL24: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL24;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL24;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL24;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r12);
    goto CPyL24;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r13);
    goto CPyL24;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_awaitable);
    goto CPyL24;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_awaitable);
    CPy_DecRef(cpy_r_r18);
    goto CPyL24;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r20);
    goto CPyL24;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r23);
    goto CPyL24;
CPyL35: ;
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r25);
    goto CPyL24;
}

PyObject *CPyPy_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_for_helpers___try_body_gen_condition_ForAsyncIterable_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "try_body", 632, CPyStatic_for_helpers___globals);
    return NULL;
}

PyObject *CPyDef_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "__get__", -1, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_except_body;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "except_body", "except_body_gen_condition_ForAsyncIterable_obj", "__mypyc_env__", 637, CPyStatic_for_helpers___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_except_body;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "except_body", "gen_condition_ForAsyncIterable_env", "except_body", -1, CPyStatic_for_helpers___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_except_body = cpy_r_r1;
    CPy_DECREF(cpy_r_except_body);
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "except_body", "gen_condition_ForAsyncIterable_env", "builder", 638, CPyStatic_for_helpers___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "except_body", "gen_condition_ForAsyncIterable_env", "self", 638, CPyStatic_for_helpers___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_r3)->_stop_reg;
    if (unlikely(cpy_r_r4 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'stop_reg' of 'ForAsyncIterable' undefined");
    } else {
        CPy_INCREF(cpy_r_r4);
    }
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "except_body", 638, CPyStatic_for_helpers___globals);
        goto CPyL12;
    }
CPyL5: ;
    cpy_r_r5 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "except_body", "gen_condition_ForAsyncIterable_env", "builder", 638, CPyStatic_for_helpers___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r5);
CPyL6: ;
    cpy_r_r6 = CPyDef_builder___IRBuilder___true(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "except_body", 638, CPyStatic_for_helpers___globals);
        goto CPyL13;
    }
    cpy_r_r7 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'gen_condition_ForAsyncIterable_env' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r7);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "except_body", 638, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
CPyL8: ;
    cpy_r_r8 = CPyDef_builder___IRBuilder___assign(cpy_r_r2, cpy_r_r4, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "except_body", 638, CPyStatic_for_helpers___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL10;
}

PyObject *CPyPy_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_for_helpers___except_body_gen_condition_ForAsyncIterable_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "except_body", 637, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForAsyncIterable___gen_condition(PyObject *cpy_r_self) {
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
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    tuple_T2OI cpy_r_r25;
    PyObject *cpy_r_r26;
    tuple_T3T2OICO cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    CPyPtr cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    cpy_r_r0 = CPyDef_for_helpers___gen_condition_ForAsyncIterable_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 612, CPyStatic_for_helpers___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_self);
    }
    ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 612, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    cpy_r_r2 = CPyStatics[10114]; /* ('emit_await', 'transform_try_except') */
    cpy_r_r3 = CPyStatics[8277]; /* 'mypyc.irbuild.statement' */
    cpy_r_r4 = CPyStatic_for_helpers___globals;
    cpy_r_r5 = CPyImport_ImportFromMany(cpy_r_r3, cpy_r_r2, cpy_r_r2, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 623, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    CPyModule_mypyc___irbuild___statement = cpy_r_r5;
    CPy_INCREF(CPyModule_mypyc___irbuild___statement);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r6 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "gen_condition_ForAsyncIterable_env", "self", 625, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_r6)->_builder;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_builder = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 625, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    cpy_r_r9 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "gen_condition_ForAsyncIterable_env", "self", 626, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r9);
CPyL6: ;
    cpy_r_r10 = ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_r9)->_line;
    CPyTagged_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_line);
    }
    ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_line = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 626, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    cpy_r_r12 = CPyDef_for_helpers___except_match_gen_condition_ForAsyncIterable_obj();
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 628, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject *)cpy_r_r12)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject *)cpy_r_r12)->___mypyc_env__);
    }
    ((mypyc___irbuild___for_helpers___except_match_gen_condition_ForAsyncIterable_objObject *)cpy_r_r12)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 628, CPyStatic_for_helpers___globals);
        goto CPyL35;
    }
    if (((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_except_match != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_except_match);
    }
    ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_except_match = cpy_r_r12;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 628, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    cpy_r_r15 = CPyDef_for_helpers___try_body_gen_condition_ForAsyncIterable_obj();
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 632, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject *)cpy_r_r15)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject *)cpy_r_r15)->___mypyc_env__);
    }
    ((mypyc___irbuild___for_helpers___try_body_gen_condition_ForAsyncIterable_objObject *)cpy_r_r15)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 632, CPyStatic_for_helpers___globals);
        goto CPyL36;
    }
    if (((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_try_body != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_try_body);
    }
    ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_try_body = cpy_r_r15;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 632, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    cpy_r_r18 = CPyDef_for_helpers___except_body_gen_condition_ForAsyncIterable_obj();
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 637, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject *)cpy_r_r18)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject *)cpy_r_r18)->___mypyc_env__);
    }
    ((mypyc___irbuild___for_helpers___except_body_gen_condition_ForAsyncIterable_objObject *)cpy_r_r18)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r19 = 1;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 637, CPyStatic_for_helpers___globals);
        goto CPyL37;
    }
    if (((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_except_body != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_except_body);
    }
    ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_except_body = cpy_r_r18;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 637, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    cpy_r_r21 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "gen_condition_ForAsyncIterable_env", "builder", 641, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r21);
CPyL17: ;
    cpy_r_r22 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_try_body;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "gen_condition_ForAsyncIterable_env", "try_body", 641, CPyStatic_for_helpers___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r22);
CPyL18: ;
    cpy_r_r23 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_except_match;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "gen_condition_ForAsyncIterable_env", "except_match", 641, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r23);
CPyL19: ;
    cpy_r_r24 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r24 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "gen_condition_ForAsyncIterable_env", "line", 641, CPyStatic_for_helpers___globals);
        goto CPyL40;
    }
    CPyTagged_INCREF(cpy_r_r24);
CPyL20: ;
    cpy_r_r25.f0 = cpy_r_r23;
    cpy_r_r25.f1 = cpy_r_r24;
    CPy_INCREF(cpy_r_r25.f0);
    CPyTagged_INCREF(cpy_r_r25.f1);
    CPy_DECREF(cpy_r_r23);
    CPyTagged_DECREF(cpy_r_r24);
    cpy_r_r26 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_except_body;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "gen_condition_ForAsyncIterable_env", "except_body", 641, CPyStatic_for_helpers___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r26);
CPyL21: ;
    cpy_r_r27.f0 = cpy_r_r25;
    cpy_r_r27.f1 = 1;
    cpy_r_r27.f2 = cpy_r_r26;
    CPy_INCREF(cpy_r_r27.f0.f0);
    CPyTagged_INCREF(cpy_r_r27.f0.f1);
    CPy_INCREF(cpy_r_r27.f2);
    CPy_DECREF(cpy_r_r25.f0);
    CPyTagged_DECREF(cpy_r_r25.f1);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = PyList_New(1);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 641, CPyStatic_for_helpers___globals);
        goto CPyL42;
    }
    cpy_r_r29 = PyTuple_New(3);
    if (unlikely(cpy_r_r29 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10179 = PyTuple_New(2);
    if (unlikely(__tmp10179 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10180 = cpy_r_r27.f0.f0;
    PyTuple_SET_ITEM(__tmp10179, 0, __tmp10180);
    PyObject *__tmp10181 = CPyTagged_StealAsObject(cpy_r_r27.f0.f1);
    PyTuple_SET_ITEM(__tmp10179, 1, __tmp10181);
    PyTuple_SET_ITEM(cpy_r_r29, 0, __tmp10179);
    PyObject *__tmp10182 = Py_None;
    CPy_INCREF(__tmp10182);
    PyTuple_SET_ITEM(cpy_r_r29, 1, __tmp10182);
    PyObject *__tmp10183 = cpy_r_r27.f2;
    PyTuple_SET_ITEM(cpy_r_r29, 2, __tmp10183);
    cpy_r_r30 = (CPyPtr)&((PyListObject *)cpy_r_r28)->ob_item;
    cpy_r_r31 = *(CPyPtr *)cpy_r_r30;
    *(PyObject * *)cpy_r_r31 = cpy_r_r29;
    cpy_r_r32 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r32 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "gen_condition_ForAsyncIterable_env", "line", 641, CPyStatic_for_helpers___globals);
        goto CPyL43;
    }
    CPyTagged_INCREF(cpy_r_r32);
CPyL23: ;
    cpy_r_r33 = Py_None;
    cpy_r_r34 = CPyDef_statement___transform_try_except(cpy_r_r21, cpy_r_r22, cpy_r_r28, cpy_r_r33, cpy_r_r32);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r28);
    CPyTagged_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 640, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    cpy_r_r35 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "gen_condition_ForAsyncIterable_env", "builder", 644, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r35);
CPyL25: ;
    cpy_r_r36 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "gen_condition_ForAsyncIterable_env", "self", 644, CPyStatic_for_helpers___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r36);
CPyL26: ;
    cpy_r_r37 = ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_r36)->_stop_reg;
    if (unlikely(cpy_r_r37 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'stop_reg' of 'ForAsyncIterable' undefined");
    } else {
        CPy_INCREF(cpy_r_r37);
    }
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 644, CPyStatic_for_helpers___globals);
        goto CPyL44;
    }
CPyL27: ;
    cpy_r_r38 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "gen_condition_ForAsyncIterable_env", "self", 644, CPyStatic_for_helpers___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_r38);
CPyL28: ;
    cpy_r_r39 = ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_r38)->_loop_exit;
    if (unlikely(cpy_r_r39 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'loop_exit' of 'ForAsyncIterable' undefined");
    } else {
        CPy_INCREF(cpy_r_r39);
    }
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 644, CPyStatic_for_helpers___globals);
        goto CPyL45;
    }
CPyL29: ;
    cpy_r_r40 = ((mypyc___irbuild___for_helpers___gen_condition_ForAsyncIterable_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r40 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'self' of 'gen_condition_ForAsyncIterable_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r40);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 644, CPyStatic_for_helpers___globals);
        goto CPyL46;
    }
CPyL30: ;
    cpy_r_r41 = ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_r40)->_body_block;
    CPy_INCREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = CPY_INT_TAG;
    cpy_r_r43 = 2;
    cpy_r_r44 = CPyDef_ops___Branch(cpy_r_r37, cpy_r_r39, cpy_r_r41, 200, cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 644, CPyStatic_for_helpers___globals);
        goto CPyL47;
    }
    cpy_r_r45 = CPyDef_builder___IRBuilder___add(cpy_r_r35, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 644, CPyStatic_for_helpers___globals);
        goto CPyL33;
    } else
        goto CPyL48;
CPyL32: ;
    return 1;
CPyL33: ;
    cpy_r_r46 = 2;
    return cpy_r_r46;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL33;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    goto CPyL33;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r15);
    goto CPyL33;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r18);
    goto CPyL33;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    goto CPyL33;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    goto CPyL33;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r23);
    goto CPyL33;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r25.f0);
    CPyTagged_DecRef(cpy_r_r25.f1);
    goto CPyL33;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r27.f0.f0);
    CPyTagged_DecRef(cpy_r_r27.f0.f1);
    CPy_DecRef(cpy_r_r27.f2);
    goto CPyL33;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r28);
    goto CPyL33;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r35);
    goto CPyL33;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r37);
    goto CPyL33;
CPyL46: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r39);
    goto CPyL33;
CPyL47: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL33;
CPyL48: ;
    CPy_DECREF(cpy_r_r45);
    goto CPyL32;
}

PyObject *CPyPy_for_helpers___ForAsyncIterable___gen_condition(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_condition", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForAsyncIterable))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForAsyncIterable", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForAsyncIterable___gen_condition(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 612, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForAsyncIterable___begin_body(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_next_reg;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_line = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_self)->_next_reg;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForAsyncIterable", "next_reg", 653, CPyStatic_for_helpers___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r2);
CPyL1: ;
    cpy_r_r3 = ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_self)->_target_type;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForAsyncIterable", "target_type", 653, CPyStatic_for_helpers___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r3);
CPyL2: ;
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_r2, cpy_r_r3, cpy_r_line, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 653, CPyStatic_for_helpers___globals);
        goto CPyL7;
    }
    cpy_r_next_reg = cpy_r_r5;
    cpy_r_r6 = ((mypyc___irbuild___for_helpers___ForAsyncIterableObject *)cpy_r_self)->_index;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_builder, cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 654, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    cpy_r_r10 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r9, cpy_r_next_reg, cpy_r_line);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_next_reg);
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 654, CPyStatic_for_helpers___globals);
        goto CPyL6;
    }
    return 1;
CPyL6: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL7: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_next_reg);
    goto CPyL6;
}

PyObject *CPyPy_for_helpers___ForAsyncIterable___begin_body(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":begin_body", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForAsyncIterable))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForAsyncIterable", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForAsyncIterable___begin_body(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 646, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForAsyncIterable___gen_step(PyObject *cpy_r_self) {
    return 1;
}

PyObject *CPyPy_for_helpers___ForAsyncIterable___gen_step(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_step", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForAsyncIterable))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForAsyncIterable", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForAsyncIterable___gen_step(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 656, CPyStatic_for_helpers___globals);
    return NULL;
}

PyObject *CPyDef_for_helpers___unsafe_index(PyObject *cpy_r_builder, PyObject *cpy_r_target, PyObject *cpy_r_index, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = ((mypyc___ir___ops___ValueObject *)cpy_r_target)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_rtypes___is_list_rprimitive(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "unsafe_index", 666, CPyStatic_for_helpers___globals);
        goto CPyL10;
    }
    if (!cpy_r_r1) goto CPyL7;
    cpy_r_r2 = CPyStatic_for_helpers___globals;
    cpy_r_r3 = CPyStatics[8070]; /* 'list_get_item_unsafe_op' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "unsafe_index", 667, CPyStatic_for_helpers___globals);
        goto CPyL10;
    }
    if (likely(PyTuple_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "unsafe_index", 667, CPyStatic_for_helpers___globals, "tuple", cpy_r_r4);
        goto CPyL10;
    }
    cpy_r_r6 = PyList_New(2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "unsafe_index", 667, CPyStatic_for_helpers___globals);
        goto CPyL11;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    CPy_INCREF(cpy_r_target);
    *(PyObject * *)cpy_r_r8 = cpy_r_target;
    cpy_r_r9 = cpy_r_r8 + 8;
    CPy_INCREF(cpy_r_index);
    *(PyObject * *)cpy_r_r9 = cpy_r_index;
    cpy_r_r10 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r5, cpy_r_r6, cpy_r_line);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "unsafe_index", 667, CPyStatic_for_helpers___globals);
        goto CPyL10;
    }
    return cpy_r_r10;
CPyL7: ;
    cpy_r_r11 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r12 = PyList_New(1);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "unsafe_index", 669, CPyStatic_for_helpers___globals);
        goto CPyL10;
    }
    cpy_r_r13 = (CPyPtr)&((PyListObject *)cpy_r_r12)->ob_item;
    cpy_r_r14 = *(CPyPtr *)cpy_r_r13;
    CPy_INCREF(cpy_r_index);
    *(PyObject * *)cpy_r_r14 = cpy_r_index;
    cpy_r_r15 = Py_None;
    cpy_r_r16 = NULL;
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPyDef_builder___IRBuilder___gen_method_call(cpy_r_builder, cpy_r_target, cpy_r_r11, cpy_r_r12, cpy_r_r15, cpy_r_line, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "unsafe_index", 669, CPyStatic_for_helpers___globals);
        goto CPyL10;
    }
    return cpy_r_r18;
CPyL10: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL11: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL10;
}

PyObject *CPyPy_for_helpers___unsafe_index(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "target", "index", "line", 0};
    static CPyArg_Parser parser = {"OOOO:unsafe_index", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_target;
    PyObject *obj_index;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_target, &obj_index, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(PyObject_TypeCheck(obj_target, CPyType_ops___Value)))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_target); 
        goto fail;
    }
    PyObject *arg_index;
    if (likely(PyObject_TypeCheck(obj_index, CPyType_ops___Value)))
        arg_index = obj_index;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_index); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_for_helpers___unsafe_index(arg_builder, arg_target, arg_index, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "unsafe_index", 661, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForSequence___init(PyObject *cpy_r_self, PyObject *cpy_r_expr_reg, PyObject *cpy_r_target_type, char cpy_r_reverse) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_index_reg;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_reverse = cpy_r_reverse;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 680, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    cpy_r_r2 = CPyDef_builder___IRBuilder___maybe_spill(cpy_r_builder, cpy_r_expr_reg);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 684, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    if (((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_expr_target != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_expr_target);
    }
    ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_expr_target = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 684, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    if (cpy_r_reverse) goto CPyL6;
    cpy_r_r4 = NULL;
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = CPyDef_ops___Integer(0, cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 686, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    cpy_r_index_reg = cpy_r_r6;
    goto CPyL11;
CPyL6: ;
    cpy_r_r7 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_expr_target;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "init", "ForSequence", "expr_target", 689, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r7);
CPyL7: ;
    cpy_r_r8 = CPyDef_for_helpers___ForGenerator___load_len(cpy_r_self, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 689, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPY_INT_TAG;
    cpy_r_r11 = CPyDef_ops___Integer(2, cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 689, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    cpy_r_r12 = CPyStatics[1198]; /* '-' */
    cpy_r_r13 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDef_builder___IRBuilder___binary_op(cpy_r_builder, cpy_r_r8, cpy_r_r11, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 688, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    cpy_r_index_reg = cpy_r_r14;
CPyL11: ;
    cpy_r_r15 = CPyDef_builder___IRBuilder___maybe_spill_assignable(cpy_r_builder, cpy_r_index_reg);
    CPy_DECREF(cpy_r_index_reg);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 691, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
    if (((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_index_target != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_index_target);
    }
    ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_index_target = cpy_r_r15;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 691, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_target_type);
    if (((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_target_type != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_target_type);
    }
    ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_target_type = cpy_r_target_type;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 692, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL16: ;
    CPy_DecRef(cpy_r_builder);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_r8);
    goto CPyL15;
}

PyObject *CPyPy_for_helpers___ForSequence___init(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr_reg", "target_type", "reverse", 0};
    static CPyArg_Parser parser = {"OOO:init", kwlist, 0};
    PyObject *obj_expr_reg;
    PyObject *obj_target_type;
    PyObject *obj_reverse;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr_reg, &obj_target_type, &obj_reverse)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForSequence))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForSequence", obj_self); 
        goto fail;
    }
    PyObject *arg_expr_reg;
    if (likely(PyObject_TypeCheck(obj_expr_reg, CPyType_ops___Value)))
        arg_expr_reg = obj_expr_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_expr_reg); 
        goto fail;
    }
    PyObject *arg_target_type;
    if (likely(PyObject_TypeCheck(obj_target_type, CPyType_rtypes___RType)))
        arg_target_type = obj_target_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_target_type); 
        goto fail;
    }
    char arg_reverse;
    if (unlikely(!PyBool_Check(obj_reverse))) {
        CPy_TypeError("bool", obj_reverse); goto fail;
    } else
        arg_reverse = obj_reverse == Py_True;
    char retval = CPyDef_for_helpers___ForSequence___init(arg_self, arg_expr_reg, arg_target_type, arg_reverse);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 678, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForSequence___gen_condition(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_line;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_comparison;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_second_check;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_len_reg;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_line = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_reverse;
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForSequence", "reverse", 698, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
CPyL1: ;
    if (!cpy_r_r2) goto CPyL10;
CPyL2: ;
    cpy_r_r3 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_index_target;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForSequence", "index_target", 704, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r3);
CPyL3: ;
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r3, cpy_r_line, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 704, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = CPyDef_ops___Integer(0, cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 704, CPyStatic_for_helpers___globals);
        goto CPyL20;
    }
    cpy_r_r9 = CPyStatics[2468]; /* '>=' */
    cpy_r_r10 = CPyDef_builder___IRBuilder___binary_op(cpy_r_builder, cpy_r_r5, cpy_r_r8, cpy_r_r9, cpy_r_line);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 703, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
    cpy_r_comparison = cpy_r_r10;
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = CPyDef_ops___BasicBlock(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 706, CPyStatic_for_helpers___globals);
        goto CPyL21;
    }
    cpy_r_second_check = cpy_r_r12;
    cpy_r_r13 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_loop_exit;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForSequence", "loop_exit", 707, CPyStatic_for_helpers___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r13);
CPyL8: ;
    cpy_r_r14 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_builder, cpy_r_comparison, cpy_r_second_check, cpy_r_r13);
    CPy_DECREF(cpy_r_comparison);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 707, CPyStatic_for_helpers___globals);
        goto CPyL23;
    }
    cpy_r_r15 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_second_check);
    CPy_DECREF(cpy_r_second_check);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 708, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
CPyL10: ;
    cpy_r_r16 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_expr_target;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForSequence", "expr_target", 711, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r16);
CPyL11: ;
    cpy_r_r17 = CPyDef_for_helpers___ForGenerator___load_len(cpy_r_self, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 711, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
    cpy_r_len_reg = cpy_r_r17;
    cpy_r_r18 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_index_target;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForSequence", "index_target", 712, CPyStatic_for_helpers___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r18);
CPyL13: ;
    cpy_r_r19 = 2;
    cpy_r_r20 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r18, cpy_r_line, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 712, CPyStatic_for_helpers___globals);
        goto CPyL24;
    }
    cpy_r_r21 = CPyStatics[2465]; /* '<' */
    cpy_r_r22 = CPyDef_builder___IRBuilder___binary_op(cpy_r_builder, cpy_r_r20, cpy_r_len_reg, cpy_r_r21, cpy_r_line);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_len_reg);
    CPyTagged_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 712, CPyStatic_for_helpers___globals);
        goto CPyL25;
    }
    cpy_r_comparison = cpy_r_r22;
    cpy_r_r23 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_body_block;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_loop_exit;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForSequence", "loop_exit", 713, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r24);
CPyL16: ;
    cpy_r_r25 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_builder, cpy_r_comparison, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_comparison);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 713, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    return 1;
CPyL18: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL19: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r5);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_comparison);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_comparison);
    CPy_DecRef(cpy_r_second_check);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_second_check);
    goto CPyL18;
CPyL24: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_len_reg);
    goto CPyL18;
CPyL25: ;
    CPy_DecRef(cpy_r_builder);
    goto CPyL18;
CPyL26: ;
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_comparison);
    CPy_DecRef(cpy_r_r23);
    goto CPyL18;
}

PyObject *CPyPy_for_helpers___ForSequence___gen_condition(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_condition", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForSequence))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForSequence", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForSequence___gen_condition(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 694, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForSequence___begin_body(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_value_box;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_line = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_expr_target;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForSequence", "expr_target", 721, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r2);
CPyL1: ;
    cpy_r_r3 = 2;
    cpy_r_r4 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r2, cpy_r_line, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 721, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
    cpy_r_r5 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_index_target;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForSequence", "index_target", 722, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    cpy_r_r6 = 2;
    cpy_r_r7 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r5, cpy_r_line, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 722, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    cpy_r_r8 = CPyDef_for_helpers___unsafe_index(cpy_r_builder, cpy_r_r4, cpy_r_r7, cpy_r_line);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 719, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
    cpy_r_value_box = cpy_r_r8;
    cpy_r_r9 = PyObject_IsTrue(cpy_r_value_box);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 719, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    cpy_r_r11 = cpy_r_r9;
    if (cpy_r_r11) {
        goto CPyL9;
    } else
        goto CPyL18;
CPyL7: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r12 = 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 725, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r13 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_index;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = 2;
    cpy_r_r16 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_builder, cpy_r_r13, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 730, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    cpy_r_r17 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_target_type;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForSequence", "target_type", 731, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r17);
CPyL11: ;
    cpy_r_r18 = 2;
    cpy_r_r19 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_value_box, cpy_r_r17, cpy_r_line, cpy_r_r18);
    CPy_DECREF(cpy_r_value_box);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 731, CPyStatic_for_helpers___globals);
        goto CPyL20;
    }
    cpy_r_r20 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r16, cpy_r_r19, cpy_r_line);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 729, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL15: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r4);
    goto CPyL14;
CPyL17: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_value_box);
    goto CPyL14;
CPyL18: ;
    CPy_DECREF(cpy_r_builder);
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_value_box);
    goto CPyL7;
CPyL19: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_value_box);
    CPy_DecRef(cpy_r_r16);
    goto CPyL14;
CPyL20: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r16);
    goto CPyL14;
}

PyObject *CPyPy_for_helpers___ForSequence___begin_body(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":begin_body", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForSequence))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForSequence", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForSequence___begin_body(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 715, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForSequence___gen_step(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_line;
    char cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_step;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_add;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_line = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_reverse;
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForSequence", "reverse", 739, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
CPyL1: ;
    if (cpy_r_r2) goto CPyL3;
CPyL2: ;
    cpy_r_r3 = 2;
    goto CPyL4;
CPyL3: ;
    cpy_r_r3 = -2;
CPyL4: ;
    cpy_r_step = cpy_r_r3;
    cpy_r_r4 = CPyStatic_rtypes___short_int_rprimitive;
    if (unlikely(cpy_r_r4 == NULL)) {
        goto CPyL16;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"short_int_rprimitive\" was not set");
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 741, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r6 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_index_target;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForSequence", "index_target", 742, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r6);
CPyL8: ;
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r6, cpy_r_line, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 742, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPY_INT_TAG;
    cpy_r_r11 = CPyDef_ops___Integer(cpy_r_step, cpy_r_r9, cpy_r_r10);
    CPyTagged_DECREF(cpy_r_step);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 743, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    cpy_r_r12 = CPyDef_builder___IRBuilder___int_op(cpy_r_builder, cpy_r_r4, cpy_r_r8, cpy_r_r11, 0, cpy_r_line);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 740, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
    cpy_r_add = cpy_r_r12;
    cpy_r_r13 = ((mypyc___irbuild___for_helpers___ForSequenceObject *)cpy_r_self)->_index_target;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForSequence", "index_target", 747, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r13);
CPyL12: ;
    cpy_r_r14 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r13, cpy_r_add, cpy_r_line);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_add);
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 747, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL15: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_step);
    goto CPyL5;
CPyL17: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_step);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r8);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_add);
    goto CPyL14;
}

PyObject *CPyPy_for_helpers___ForSequence___gen_step(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_step", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForSequence))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForSequence", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForSequence___gen_step(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 735, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForDictionaryCommon___need_cleanup(PyObject *cpy_r_self) {
    return 1;
}

PyObject *CPyPy_for_helpers___ForDictionaryCommon___need_cleanup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":need_cleanup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_for_helpers___ForDictionaryCommon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForDictionaryCommon", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForDictionaryCommon___need_cleanup(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "need_cleanup", 769, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForDictionaryCommon___init(PyObject *cpy_r_self, PyObject *cpy_r_expr_reg, PyObject *cpy_r_target_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_offset;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_iter_reg;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    CPy_INCREF(cpy_r_target_type);
    if (((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_target_type != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_target_type);
    }
    ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_target_type = cpy_r_target_type;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 776, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    cpy_r_r2 = CPyDef_builder___IRBuilder___maybe_spill(cpy_r_builder, cpy_r_expr_reg);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 779, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    if (((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_expr_target != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_expr_target);
    }
    ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_expr_target = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 779, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    cpy_r_r4 = NULL;
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = CPyDef_ops___Integer(0, cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 780, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    cpy_r_offset = cpy_r_r6;
    cpy_r_r7 = CPyDef_builder___IRBuilder___maybe_spill_assignable(cpy_r_builder, cpy_r_offset);
    CPy_DECREF(cpy_r_offset);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 781, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    if (((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_offset_target != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_offset_target);
    }
    ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_offset_target = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 781, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    cpy_r_r9 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_expr_target;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "init", "ForDictionaryCommon", "expr_target", 782, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r9);
CPyL7: ;
    cpy_r_r10 = CPyDef_for_helpers___ForGenerator___load_len(cpy_r_self, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 782, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    cpy_r_r11 = CPyDef_builder___IRBuilder___maybe_spill(cpy_r_builder, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 782, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    if (((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_size != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_size);
    }
    ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_size = cpy_r_r11;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 782, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    cpy_r_r13 = CPyStatics[8278]; /* 'dict_iter_op' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_self, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 785, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    if (likely(PyTuple_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "init", 785, CPyStatic_for_helpers___globals, "tuple", cpy_r_r14);
        goto CPyL18;
    }
    cpy_r_r16 = PyList_New(1);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 785, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
    cpy_r_r17 = (CPyPtr)&((PyListObject *)cpy_r_r16)->ob_item;
    cpy_r_r18 = *(CPyPtr *)cpy_r_r17;
    CPy_INCREF(cpy_r_expr_reg);
    *(PyObject * *)cpy_r_r18 = cpy_r_expr_reg;
    cpy_r_r19 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r15, cpy_r_r16, cpy_r_r19);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    CPyTagged_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 785, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    cpy_r_iter_reg = cpy_r_r20;
    cpy_r_r21 = CPyDef_builder___IRBuilder___maybe_spill(cpy_r_builder, cpy_r_iter_reg);
    CPy_DECREF(cpy_r_iter_reg);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 786, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    if (((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_iter_target != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_iter_target);
    }
    ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_iter_target = cpy_r_r21;
    cpy_r_r22 = 1;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 786, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    return 1;
CPyL17: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL18: ;
    CPy_DecRef(cpy_r_builder);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_r15);
    goto CPyL17;
}

PyObject *CPyPy_for_helpers___ForDictionaryCommon___init(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr_reg", "target_type", 0};
    static CPyArg_Parser parser = {"OO:init", kwlist, 0};
    PyObject *obj_expr_reg;
    PyObject *obj_target_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr_reg, &obj_target_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_for_helpers___ForDictionaryCommon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForDictionaryCommon", obj_self); 
        goto fail;
    }
    PyObject *arg_expr_reg;
    if (likely(PyObject_TypeCheck(obj_expr_reg, CPyType_ops___Value)))
        arg_expr_reg = obj_expr_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_expr_reg); 
        goto fail;
    }
    PyObject *arg_target_type;
    if (likely(PyObject_TypeCheck(obj_target_type, CPyType_rtypes___RType)))
        arg_target_type = obj_target_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_target_type); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForDictionaryCommon___init(arg_self, arg_expr_reg, arg_target_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 774, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForDictionaryCommon___gen_condition(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_new_offset;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_should_continue;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_line = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyStatics[8279]; /* 'dict_next_op' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_self, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 793, CPyStatic_for_helpers___globals);
        goto CPyL22;
    }
    if (likely(PyTuple_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 793, CPyStatic_for_helpers___globals, "tuple", cpy_r_r4);
        goto CPyL22;
    }
    cpy_r_r6 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_iter_target;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForDictionaryCommon", "iter_target", 794, CPyStatic_for_helpers___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r6);
CPyL3: ;
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r6, cpy_r_line, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 794, CPyStatic_for_helpers___globals);
        goto CPyL23;
    }
    cpy_r_r9 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_offset_target;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForDictionaryCommon", "offset_target", 794, CPyStatic_for_helpers___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r9);
CPyL5: ;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r9, cpy_r_line, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 794, CPyStatic_for_helpers___globals);
        goto CPyL24;
    }
    cpy_r_r12 = PyList_New(2);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 794, CPyStatic_for_helpers___globals);
        goto CPyL25;
    }
    cpy_r_r13 = (CPyPtr)&((PyListObject *)cpy_r_r12)->ob_item;
    cpy_r_r14 = *(CPyPtr *)cpy_r_r13;
    *(PyObject * *)cpy_r_r14 = cpy_r_r8;
    cpy_r_r15 = cpy_r_r14 + 8;
    *(PyObject * *)cpy_r_r15 = cpy_r_r11;
    cpy_r_r16 = CPyDef_builder___IRBuilder___call_c(cpy_r_r2, cpy_r_r5, cpy_r_r12, cpy_r_line);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 792, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    if (((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_next_tuple != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_next_tuple);
    }
    ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_next_tuple = cpy_r_r16;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 792, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    cpy_r_r18 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_next_tuple;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForDictionaryCommon", "next_tuple", 799, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r18);
CPyL10: ;
    cpy_r_r19 = CPyDef_ops___TupleGet(cpy_r_r18, 2, cpy_r_line);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 799, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    cpy_r_r20 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 799, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    cpy_r_new_offset = cpy_r_r20;
    cpy_r_r21 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_offset_target;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForDictionaryCommon", "offset_target", 800, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r21);
CPyL13: ;
    cpy_r_r22 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r21, cpy_r_new_offset, cpy_r_line);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_new_offset);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 800, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    cpy_r_r23 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_next_tuple;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForDictionaryCommon", "next_tuple", 802, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r23);
CPyL15: ;
    cpy_r_r24 = CPyDef_ops___TupleGet(cpy_r_r23, 0, cpy_r_line);
    CPy_DECREF(cpy_r_r23);
    CPyTagged_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 802, CPyStatic_for_helpers___globals);
        goto CPyL28;
    }
    cpy_r_r25 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 802, CPyStatic_for_helpers___globals);
        goto CPyL28;
    }
    cpy_r_should_continue = cpy_r_r25;
    cpy_r_r26 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_body_block;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_loop_exit;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForDictionaryCommon", "loop_exit", 803, CPyStatic_for_helpers___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r27);
CPyL18: ;
    cpy_r_r28 = CPY_INT_TAG;
    cpy_r_r29 = 2;
    cpy_r_r30 = CPyDef_ops___Branch(cpy_r_should_continue, cpy_r_r26, cpy_r_r27, 200, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_should_continue);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 803, CPyStatic_for_helpers___globals);
        goto CPyL28;
    }
    cpy_r_r31 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 803, CPyStatic_for_helpers___globals);
        goto CPyL21;
    } else
        goto CPyL30;
CPyL20: ;
    return 1;
CPyL21: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL22: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r2);
    goto CPyL21;
CPyL23: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL21;
CPyL26: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL21;
CPyL27: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_new_offset);
    goto CPyL21;
CPyL28: ;
    CPy_DecRef(cpy_r_builder);
    goto CPyL21;
CPyL29: ;
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_should_continue);
    CPy_DecRef(cpy_r_r26);
    goto CPyL21;
CPyL30: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL20;
}

PyObject *CPyPy_for_helpers___ForDictionaryCommon___gen_condition(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_condition", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_for_helpers___ForDictionaryCommon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForDictionaryCommon", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForDictionaryCommon___gen_condition(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 788, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForDictionaryCommon___gen_step(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_line = cpy_r_r1;
    cpy_r_r2 = CPyStatic_for_helpers___globals;
    cpy_r_r3 = CPyStatics[8280]; /* 'dict_check_size_op' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 814, CPyStatic_for_helpers___globals);
        goto CPyL10;
    }
    if (likely(PyTuple_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 814, CPyStatic_for_helpers___globals, "tuple", cpy_r_r4);
        goto CPyL10;
    }
    cpy_r_r6 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_expr_target;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForDictionaryCommon", "expr_target", 815, CPyStatic_for_helpers___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r6);
CPyL3: ;
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r6, cpy_r_line, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 815, CPyStatic_for_helpers___globals);
        goto CPyL11;
    }
    cpy_r_r9 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_size;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForDictionaryCommon", "size", 815, CPyStatic_for_helpers___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r9);
CPyL5: ;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r9, cpy_r_line, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 815, CPyStatic_for_helpers___globals);
        goto CPyL12;
    }
    cpy_r_r12 = PyList_New(2);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 815, CPyStatic_for_helpers___globals);
        goto CPyL13;
    }
    cpy_r_r13 = (CPyPtr)&((PyListObject *)cpy_r_r12)->ob_item;
    cpy_r_r14 = *(CPyPtr *)cpy_r_r13;
    *(PyObject * *)cpy_r_r14 = cpy_r_r8;
    cpy_r_r15 = cpy_r_r14 + 8;
    *(PyObject * *)cpy_r_r15 = cpy_r_r11;
    cpy_r_r16 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r5, cpy_r_r12, cpy_r_line);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r12);
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 813, CPyStatic_for_helpers___globals);
        goto CPyL9;
    } else
        goto CPyL14;
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL10: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r5);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL9;
CPyL13: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL9;
CPyL14: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL8;
}

PyObject *CPyPy_for_helpers___ForDictionaryCommon___gen_step(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_step", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_for_helpers___ForDictionaryCommon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForDictionaryCommon", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForDictionaryCommon___gen_step(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 805, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForDictionaryCommon___gen_cleanup(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatic_for_helpers___globals;
    cpy_r_r2 = CPyStatics[8271]; /* 'no_err_occurred_op' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 821, CPyStatic_for_helpers___globals);
        goto CPyL6;
    }
    if (likely(PyTuple_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 821, CPyStatic_for_helpers___globals, "tuple", cpy_r_r3);
        goto CPyL6;
    }
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 821, CPyStatic_for_helpers___globals);
        goto CPyL7;
    }
    cpy_r_r6 = ((mypyc___irbuild___for_helpers___ForDictionaryCommonObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_builder___IRBuilder___call_c(cpy_r_r0, cpy_r_r4, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 821, CPyStatic_for_helpers___globals);
        goto CPyL5;
    } else
        goto CPyL8;
CPyL4: ;
    return 1;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL5;
CPyL8: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL4;
}

PyObject *CPyPy_for_helpers___ForDictionaryCommon___gen_cleanup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_cleanup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_for_helpers___ForDictionaryCommon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForDictionaryCommon", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForDictionaryCommon___gen_cleanup(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 819, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForDictionaryKeys___begin_body(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForDictionaryKeysObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForDictionaryKeysObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_line = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForDictionaryKeysObject *)cpy_r_self)->_next_tuple;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForDictionaryKeys", "next_tuple", 835, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r2);
CPyL1: ;
    cpy_r_r3 = CPyDef_ops___TupleGet(cpy_r_r2, 4, cpy_r_line);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 835, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    cpy_r_r4 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 835, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    cpy_r_key = cpy_r_r4;
    cpy_r_r5 = ((mypyc___irbuild___for_helpers___ForDictionaryKeysObject *)cpy_r_self)->_index;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_builder, cpy_r_r5, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 837, CPyStatic_for_helpers___globals);
        goto CPyL10;
    }
    cpy_r_r9 = ((mypyc___irbuild___for_helpers___ForDictionaryKeysObject *)cpy_r_self)->_target_type;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForDictionaryKeys", "target_type", 838, CPyStatic_for_helpers___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r9);
CPyL5: ;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_key, cpy_r_r9, cpy_r_line, cpy_r_r10);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 838, CPyStatic_for_helpers___globals);
        goto CPyL12;
    }
    cpy_r_r12 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r8, cpy_r_r11, cpy_r_line);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 836, CPyStatic_for_helpers___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL9: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_key);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r8);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r8);
    goto CPyL8;
}

PyObject *CPyPy_for_helpers___ForDictionaryKeys___begin_body(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":begin_body", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForDictionaryKeys))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForDictionaryKeys", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForDictionaryKeys___begin_body(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 830, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForDictionaryValues___begin_body(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForDictionaryValuesObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForDictionaryValuesObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_line = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForDictionaryValuesObject *)cpy_r_self)->_next_tuple;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForDictionaryValues", "next_tuple", 854, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r2);
CPyL1: ;
    cpy_r_r3 = CPyDef_ops___TupleGet(cpy_r_r2, 4, cpy_r_line);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 854, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    cpy_r_r4 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 854, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    cpy_r_value = cpy_r_r4;
    cpy_r_r5 = ((mypyc___irbuild___for_helpers___ForDictionaryValuesObject *)cpy_r_self)->_index;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_builder, cpy_r_r5, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 856, CPyStatic_for_helpers___globals);
        goto CPyL10;
    }
    cpy_r_r9 = ((mypyc___irbuild___for_helpers___ForDictionaryValuesObject *)cpy_r_self)->_target_type;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForDictionaryValues", "target_type", 857, CPyStatic_for_helpers___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r9);
CPyL5: ;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_value, cpy_r_r9, cpy_r_line, cpy_r_r10);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 857, CPyStatic_for_helpers___globals);
        goto CPyL12;
    }
    cpy_r_r12 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r8, cpy_r_r11, cpy_r_line);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 855, CPyStatic_for_helpers___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL9: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_value);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r8);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r8);
    goto CPyL8;
}

PyObject *CPyPy_for_helpers___ForDictionaryValues___begin_body(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":begin_body", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForDictionaryValues))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForDictionaryValues", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForDictionaryValues___begin_body(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 849, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForDictionaryItems___begin_body(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
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
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyPtr cpy_r_r55;
    CPyPtr cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_rvalue;
    char cpy_r_r60;
    char cpy_r_r61;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForDictionaryItemsObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForDictionaryItemsObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_line = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForDictionaryItemsObject *)cpy_r_self)->_next_tuple;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForDictionaryItems", "next_tuple", 872, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r2);
CPyL1: ;
    cpy_r_r3 = CPyDef_ops___TupleGet(cpy_r_r2, 4, cpy_r_line);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 872, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    cpy_r_r4 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 872, CPyStatic_for_helpers___globals);
        goto CPyL39;
    }
    cpy_r_key = cpy_r_r4;
    cpy_r_r5 = ((mypyc___irbuild___for_helpers___ForDictionaryItemsObject *)cpy_r_self)->_next_tuple;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForDictionaryItems", "next_tuple", 873, CPyStatic_for_helpers___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r5);
CPyL4: ;
    cpy_r_r6 = CPyDef_ops___TupleGet(cpy_r_r5, 6, cpy_r_line);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 873, CPyStatic_for_helpers___globals);
        goto CPyL40;
    }
    cpy_r_r7 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 873, CPyStatic_for_helpers___globals);
        goto CPyL40;
    }
    cpy_r_value = cpy_r_r7;
    cpy_r_r8 = ((mypyc___irbuild___for_helpers___ForDictionaryItemsObject *)cpy_r_self)->_target_type;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForDictionaryItems", "target_type", 876, CPyStatic_for_helpers___globals);
        goto CPyL41;
    }
CPyL7: ;
    cpy_r_r9 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_r8)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (cpy_r_r12) {
        goto CPyL10;
    } else
        goto CPyL42;
CPyL8: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 876, CPyStatic_for_helpers___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r14 = ((mypyc___irbuild___for_helpers___ForDictionaryItemsObject *)cpy_r_self)->_target_type;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForDictionaryItems", "target_type", 877, CPyStatic_for_helpers___globals);
        goto CPyL41;
    }
CPyL11: ;
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_rtypes___RTuple))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 877, CPyStatic_for_helpers___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r14);
        goto CPyL41;
    }
    cpy_r_r16 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r15)->_types;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPySequenceTuple_GetItem(cpy_r_r16, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 877, CPyStatic_for_helpers___globals);
        goto CPyL41;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_rtypes___RType)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 877, CPyStatic_for_helpers___globals, "mypyc.ir.rtypes.RType", cpy_r_r17);
        goto CPyL41;
    }
    cpy_r_r19 = 2;
    cpy_r_r20 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_key, cpy_r_r18, cpy_r_line, cpy_r_r19);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 877, CPyStatic_for_helpers___globals);
        goto CPyL43;
    }
    cpy_r_key = cpy_r_r20;
    cpy_r_r21 = ((mypyc___irbuild___for_helpers___ForDictionaryItemsObject *)cpy_r_self)->_target_type;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForDictionaryItems", "target_type", 878, CPyStatic_for_helpers___globals);
        goto CPyL41;
    }
CPyL16: ;
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_rtypes___RTuple))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 878, CPyStatic_for_helpers___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r21);
        goto CPyL41;
    }
    cpy_r_r23 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r22)->_types;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPySequenceTuple_GetItem(cpy_r_r23, 2);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 878, CPyStatic_for_helpers___globals);
        goto CPyL41;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r24, CPyType_rtypes___RType)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 878, CPyStatic_for_helpers___globals, "mypyc.ir.rtypes.RType", cpy_r_r24);
        goto CPyL41;
    }
    cpy_r_r26 = 2;
    cpy_r_r27 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_value, cpy_r_r25, cpy_r_line, cpy_r_r26);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 878, CPyStatic_for_helpers___globals);
        goto CPyL40;
    }
    cpy_r_value = cpy_r_r27;
    cpy_r_r28 = ((mypyc___irbuild___for_helpers___ForDictionaryItemsObject *)cpy_r_self)->_index;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPY_INT_TAG;
    cpy_r_r30 = 2;
    cpy_r_r31 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_builder, cpy_r_r28, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 880, CPyStatic_for_helpers___globals);
        goto CPyL41;
    }
    cpy_r_target = cpy_r_r31;
    cpy_r_r32 = (PyObject *)CPyType_targets___AssignmentTargetTuple;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (!cpy_r_r35) goto CPyL33;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetTuple))
        cpy_r_r36 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 883, CPyStatic_for_helpers___globals, "mypyc.irbuild.targets.AssignmentTargetTuple", cpy_r_target);
        goto CPyL44;
    }
    cpy_r_r37 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_r36)->_items;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_r37)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = cpy_r_r40 != 4;
    if (!cpy_r_r41) goto CPyL25;
    cpy_r_r42 = CPyStatics[8281]; /* 'Expected a pair for dict item iteration' */
    cpy_r_r43 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r42, cpy_r_line);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 884, CPyStatic_for_helpers___globals);
        goto CPyL44;
    }
CPyL25: ;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetTuple))
        cpy_r_r44 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 885, CPyStatic_for_helpers___globals, "mypyc.irbuild.targets.AssignmentTargetTuple", cpy_r_target);
        goto CPyL44;
    }
    cpy_r_r45 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_r44)->_items;
    cpy_r_r46 = CPyList_GetItemShort(cpy_r_r45, 0);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 885, CPyStatic_for_helpers___globals);
        goto CPyL44;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r46, CPyType_targets___AssignmentTarget)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 885, CPyStatic_for_helpers___globals, "mypyc.irbuild.targets.AssignmentTarget", cpy_r_r46);
        goto CPyL44;
    }
    cpy_r_r48 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r47, cpy_r_key, cpy_r_line);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 885, CPyStatic_for_helpers___globals);
        goto CPyL45;
    }
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetTuple))
        cpy_r_r49 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 886, CPyStatic_for_helpers___globals, "mypyc.irbuild.targets.AssignmentTargetTuple", cpy_r_target);
        goto CPyL45;
    }
    cpy_r_r50 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_r49)->_items;
    cpy_r_r51 = CPyList_GetItemShort(cpy_r_r50, 2);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 886, CPyStatic_for_helpers___globals);
        goto CPyL45;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r51, CPyType_targets___AssignmentTarget)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 886, CPyStatic_for_helpers___globals, "mypyc.irbuild.targets.AssignmentTarget", cpy_r_r51);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_target);
    cpy_r_r53 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r52, cpy_r_value, cpy_r_line);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_value);
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 886, CPyStatic_for_helpers___globals);
        goto CPyL38;
    } else
        goto CPyL37;
CPyL33: ;
    cpy_r_r54 = PyList_New(2);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 888, CPyStatic_for_helpers___globals);
        goto CPyL44;
    }
    cpy_r_r55 = (CPyPtr)&((PyListObject *)cpy_r_r54)->ob_item;
    cpy_r_r56 = *(CPyPtr *)cpy_r_r55;
    *(PyObject * *)cpy_r_r56 = cpy_r_key;
    cpy_r_r57 = cpy_r_r56 + 8;
    *(PyObject * *)cpy_r_r57 = cpy_r_value;
    cpy_r_r58 = CPyDef_ops___TupleSet(cpy_r_r54, cpy_r_line);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 888, CPyStatic_for_helpers___globals);
        goto CPyL46;
    }
    cpy_r_r59 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 888, CPyStatic_for_helpers___globals);
        goto CPyL46;
    }
    cpy_r_rvalue = cpy_r_r59;
    cpy_r_r60 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_target, cpy_r_rvalue, cpy_r_line);
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_rvalue);
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 889, CPyStatic_for_helpers___globals);
        goto CPyL38;
    }
CPyL37: ;
    return 1;
CPyL38: ;
    cpy_r_r61 = 2;
    return cpy_r_r61;
CPyL39: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL38;
CPyL40: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_key);
    goto CPyL38;
CPyL41: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    goto CPyL38;
CPyL42: ;
    CPy_DECREF(cpy_r_builder);
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_value);
    goto CPyL8;
CPyL43: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_value);
    goto CPyL38;
CPyL44: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_target);
    goto CPyL38;
CPyL45: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_target);
    goto CPyL38;
CPyL46: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_target);
    goto CPyL38;
}

PyObject *CPyPy_for_helpers___ForDictionaryItems___begin_body(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":begin_body", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForDictionaryItems))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForDictionaryItems", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForDictionaryItems___begin_body(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 868, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForRange___init(PyObject *cpy_r_self, PyObject *cpy_r_start_reg, PyObject *cpy_r_end_reg, CPyTagged cpy_r_step) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_index_type;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_index_reg;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    CPy_INCREF(cpy_r_start_reg);
    if (((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_start_reg != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_start_reg);
    }
    ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_start_reg = cpy_r_start_reg;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 897, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_end_reg);
    if (((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_end_reg != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_end_reg);
    }
    ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_end_reg = cpy_r_end_reg;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 898, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    CPyTagged_INCREF(cpy_r_step);
    if (((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_step != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_step);
    }
    ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_step = cpy_r_step;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 899, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    cpy_r_r4 = CPyDef_builder___IRBuilder___maybe_spill(cpy_r_builder, cpy_r_end_reg);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 900, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    if (((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_end_target != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_end_target);
    }
    ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_end_target = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 900, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    cpy_r_r6 = ((mypyc___ir___ops___ValueObject *)cpy_r_start_reg)->_type;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_rtypes___is_short_int_rprimitive(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 901, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    if (!cpy_r_r7) goto CPyL13;
    cpy_r_r8 = ((mypyc___ir___ops___ValueObject *)cpy_r_end_reg)->_type;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_rtypes___is_short_int_rprimitive(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 901, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    if (!cpy_r_r9) goto CPyL13;
    cpy_r_r10 = CPyStatic_rtypes___short_int_rprimitive;
    if (unlikely(cpy_r_r10 == NULL)) {
        goto CPyL35;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"short_int_rprimitive\" was not set");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 902, CPyStatic_for_helpers___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL12: ;
    CPy_INCREF(cpy_r_r10);
    cpy_r_index_type = cpy_r_r10;
    goto CPyL21;
CPyL13: ;
    cpy_r_r12 = ((mypyc___ir___ops___ValueObject *)cpy_r_end_reg)->_type;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 903, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    if (!cpy_r_r13) goto CPyL17;
    cpy_r_r14 = ((mypyc___ir___ops___ValueObject *)cpy_r_end_reg)->_type;
    CPy_INCREF(cpy_r_r14);
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_rtypes___RPrimitive))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "init", 904, CPyStatic_for_helpers___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r14);
        goto CPyL34;
    }
    cpy_r_index_type = cpy_r_r15;
    goto CPyL21;
CPyL17: ;
    cpy_r_r16 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r16 == NULL)) {
        goto CPyL36;
    } else
        goto CPyL20;
CPyL18: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 906, CPyStatic_for_helpers___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL20: ;
    CPy_INCREF(cpy_r_r16);
    cpy_r_index_type = cpy_r_r16;
CPyL21: ;
    cpy_r_r18 = NULL;
    cpy_r_r19 = 2;
    cpy_r_r20 = CPY_INT_TAG;
    cpy_r_r21 = CPyDef_ops___Register(cpy_r_index_type, cpy_r_r18, cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_index_type);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 907, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    cpy_r_index_reg = cpy_r_r21;
    cpy_r_r22 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_index_reg, cpy_r_start_reg, -2);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 908, CPyStatic_for_helpers___globals);
        goto CPyL37;
    }
    cpy_r_r23 = CPyDef_builder___IRBuilder___maybe_spill_assignable(cpy_r_builder, cpy_r_index_reg);
    CPy_DECREF(cpy_r_index_reg);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 909, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    if (((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_index_reg != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_index_reg);
    }
    ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_index_reg = cpy_r_r23;
    cpy_r_r24 = 1;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 909, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    cpy_r_r25 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_index;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPY_INT_TAG;
    cpy_r_r27 = 2;
    cpy_r_r28 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_builder, cpy_r_r25, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 911, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    if (((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_index_target != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_index_target);
    }
    ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_index_target = cpy_r_r28;
    cpy_r_r29 = 1;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 911, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    cpy_r_r30 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_index_target;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "init", "ForRange", "index_target", 912, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r30);
CPyL28: ;
    if (likely(PyObject_TypeCheck(cpy_r_r30, CPyType_targets___AssignmentTarget)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "init", 912, CPyStatic_for_helpers___globals, "mypyc.irbuild.targets.AssignmentTarget", cpy_r_r30);
        goto CPyL34;
    }
    cpy_r_r32 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_index_reg;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "init", "ForRange", "index_reg", 912, CPyStatic_for_helpers___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r32);
CPyL30: ;
    cpy_r_r33 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r33);
    cpy_r_r34 = 2;
    cpy_r_r35 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r32, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r32);
    CPyTagged_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 912, CPyStatic_for_helpers___globals);
        goto CPyL38;
    }
    cpy_r_r36 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r36);
    cpy_r_r37 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r31, cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r35);
    CPyTagged_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 912, CPyStatic_for_helpers___globals);
        goto CPyL33;
    }
    return 1;
CPyL33: ;
    cpy_r_r38 = 2;
    return cpy_r_r38;
CPyL34: ;
    CPy_DecRef(cpy_r_builder);
    goto CPyL33;
CPyL35: ;
    CPy_DecRef(cpy_r_builder);
    goto CPyL10;
CPyL36: ;
    CPy_DecRef(cpy_r_builder);
    goto CPyL18;
CPyL37: ;
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_index_reg);
    goto CPyL33;
CPyL38: ;
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_r31);
    goto CPyL33;
}

PyObject *CPyPy_for_helpers___ForRange___init(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"start_reg", "end_reg", "step", 0};
    static CPyArg_Parser parser = {"OOO:init", kwlist, 0};
    PyObject *obj_start_reg;
    PyObject *obj_end_reg;
    PyObject *obj_step;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_start_reg, &obj_end_reg, &obj_step)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForRange))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForRange", obj_self); 
        goto fail;
    }
    PyObject *arg_start_reg;
    if (likely(PyObject_TypeCheck(obj_start_reg, CPyType_ops___Value)))
        arg_start_reg = obj_start_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_start_reg); 
        goto fail;
    }
    PyObject *arg_end_reg;
    if (likely(PyObject_TypeCheck(obj_end_reg, CPyType_ops___Value)))
        arg_end_reg = obj_end_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_end_reg); 
        goto fail;
    }
    CPyTagged arg_step;
    if (likely(PyLong_Check(obj_step)))
        arg_step = CPyTagged_BorrowFromObject(obj_step);
    else {
        CPy_TypeError("int", obj_step); goto fail;
    }
    char retval = CPyDef_for_helpers___ForRange___init(arg_self, arg_start_reg, arg_end_reg, arg_step);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 895, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForRange___gen_condition(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_line;
    CPyTagged cpy_r_r2;
    int64_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_cmp;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_comparison;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_line = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_step;
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForRange", "step", 918, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
CPyL1: ;
    cpy_r_r3 = cpy_r_r2 & 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = CPyTagged_IsLt_(0, cpy_r_r2);
    if (cpy_r_r5) {
        goto CPyL4;
    } else
        goto CPyL5;
CPyL3: ;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 > (Py_ssize_t)0;
    if (!cpy_r_r6) goto CPyL5;
CPyL4: ;
    cpy_r_r7 = CPyStatics[2465]; /* '<' */
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = cpy_r_r7;
    goto CPyL6;
CPyL5: ;
    cpy_r_r9 = CPyStatics[840]; /* '>' */
    CPy_INCREF(cpy_r_r9);
    cpy_r_r8 = cpy_r_r9;
CPyL6: ;
    cpy_r_cmp = cpy_r_r8;
    cpy_r_r10 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_index_reg;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForRange", "index_reg", 920, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r10);
CPyL7: ;
    cpy_r_r11 = 2;
    cpy_r_r12 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r10, cpy_r_line, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 920, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    cpy_r_r13 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_end_target;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForRange", "end_target", 920, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r13);
CPyL9: ;
    cpy_r_r14 = 2;
    cpy_r_r15 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r13, cpy_r_line, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 920, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    cpy_r_r16 = CPyDef_builder___IRBuilder___binary_op(cpy_r_builder, cpy_r_r12, cpy_r_r15, cpy_r_cmp, cpy_r_line);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_cmp);
    CPyTagged_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 919, CPyStatic_for_helpers___globals);
        goto CPyL18;
    }
    cpy_r_comparison = cpy_r_r16;
    cpy_r_r17 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_body_block;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_loop_exit;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForRange", "loop_exit", 922, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r18);
CPyL12: ;
    cpy_r_r19 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_builder, cpy_r_comparison, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_comparison);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 922, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL15: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_cmp);
    goto CPyL14;
CPyL17: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_cmp);
    CPy_DecRef(cpy_r_r12);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_builder);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_comparison);
    CPy_DecRef(cpy_r_r17);
    goto CPyL14;
}

PyObject *CPyPy_for_helpers___ForRange___gen_condition(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_condition", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForRange))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForRange", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForRange___gen_condition(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 914, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForRange___gen_step(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_new_val;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_line = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_start_reg;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForRange", "start_reg", 930, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
CPyL1: ;
    cpy_r_r3 = ((mypyc___ir___ops___ValueObject *)cpy_r_r2)->_type;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_rtypes___is_short_int_rprimitive(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 930, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
    if (!cpy_r_r4) goto CPyL15;
    cpy_r_r5 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_end_reg;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForRange", "end_reg", 931, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
CPyL4: ;
    cpy_r_r6 = ((mypyc___ir___ops___ValueObject *)cpy_r_r5)->_type;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_rtypes___is_short_int_rprimitive(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 930, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
    if (!cpy_r_r7) goto CPyL15;
    cpy_r_r8 = CPyStatic_rtypes___short_int_rprimitive;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL28;
    } else
        goto CPyL9;
CPyL7: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"short_int_rprimitive\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 934, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r10 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_index_reg;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForRange", "index_reg", 935, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r10);
CPyL10: ;
    cpy_r_r11 = 2;
    cpy_r_r12 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r10, cpy_r_line, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 935, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
    cpy_r_r13 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_step;
    if (unlikely(cpy_r_r13 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForRange", "step", 936, CPyStatic_for_helpers___globals);
        goto CPyL29;
    }
    CPyTagged_INCREF(cpy_r_r13);
CPyL12: ;
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPY_INT_TAG;
    cpy_r_r16 = CPyDef_ops___Integer(cpy_r_r13, cpy_r_r14, cpy_r_r15);
    CPyTagged_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 936, CPyStatic_for_helpers___globals);
        goto CPyL29;
    }
    cpy_r_r17 = CPyDef_builder___IRBuilder___int_op(cpy_r_builder, cpy_r_r8, cpy_r_r12, cpy_r_r16, 0, cpy_r_line);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 933, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
    cpy_r_new_val = cpy_r_r17;
    goto CPyL21;
CPyL15: ;
    cpy_r_r18 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_index_reg;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForRange", "index_reg", 943, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r18);
CPyL16: ;
    cpy_r_r19 = 2;
    cpy_r_r20 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r18, cpy_r_line, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 943, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
    cpy_r_r21 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_step;
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForRange", "step", 943, CPyStatic_for_helpers___globals);
        goto CPyL30;
    }
    CPyTagged_INCREF(cpy_r_r21);
CPyL18: ;
    cpy_r_r22 = NULL;
    cpy_r_r23 = CPY_INT_TAG;
    cpy_r_r24 = CPyDef_ops___Integer(cpy_r_r21, cpy_r_r22, cpy_r_r23);
    CPyTagged_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 943, CPyStatic_for_helpers___globals);
        goto CPyL30;
    }
    cpy_r_r25 = CPyStatics[886]; /* '+' */
    cpy_r_r26 = CPyDef_builder___IRBuilder___binary_op(cpy_r_builder, cpy_r_r20, cpy_r_r24, cpy_r_r25, cpy_r_line);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 942, CPyStatic_for_helpers___globals);
        goto CPyL27;
    }
    cpy_r_new_val = cpy_r_r26;
CPyL21: ;
    cpy_r_r27 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_index_reg;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForRange", "index_reg", 945, CPyStatic_for_helpers___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r27);
CPyL22: ;
    cpy_r_r28 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r27, cpy_r_new_val, cpy_r_line);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 945, CPyStatic_for_helpers___globals);
        goto CPyL31;
    }
    cpy_r_r29 = ((mypyc___irbuild___for_helpers___ForRangeObject *)cpy_r_self)->_index_target;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForRange", "index_target", 946, CPyStatic_for_helpers___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r29);
CPyL24: ;
    cpy_r_r30 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r29, cpy_r_new_val, cpy_r_line);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_new_val);
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 946, CPyStatic_for_helpers___globals);
        goto CPyL26;
    }
    return 1;
CPyL26: ;
    cpy_r_r31 = 2;
    return cpy_r_r31;
CPyL27: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL7;
CPyL29: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r12);
    goto CPyL26;
CPyL30: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r20);
    goto CPyL26;
CPyL31: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_new_val);
    goto CPyL26;
}

PyObject *CPyPy_for_helpers___ForRange___gen_step(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_step", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForRange))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForRange", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForRange___gen_step(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 924, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForInfiniteCounter___init(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_zero;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForInfiniteCounterObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPyDef_ops___Integer(0, cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 956, CPyStatic_for_helpers___globals);
        goto CPyL10;
    }
    cpy_r_zero = cpy_r_r3;
    cpy_r_r4 = CPyDef_builder___IRBuilder___maybe_spill_assignable(cpy_r_builder, cpy_r_zero);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 957, CPyStatic_for_helpers___globals);
        goto CPyL11;
    }
    if (((mypyc___irbuild___for_helpers___ForInfiniteCounterObject *)cpy_r_self)->_index_reg != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForInfiniteCounterObject *)cpy_r_self)->_index_reg);
    }
    ((mypyc___irbuild___for_helpers___ForInfiniteCounterObject *)cpy_r_self)->_index_reg = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 957, CPyStatic_for_helpers___globals);
        goto CPyL11;
    }
    cpy_r_r6 = ((mypyc___irbuild___for_helpers___ForInfiniteCounterObject *)cpy_r_self)->_index;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_builder, cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 958, CPyStatic_for_helpers___globals);
        goto CPyL11;
    }
    if (((mypyc___irbuild___for_helpers___ForInfiniteCounterObject *)cpy_r_self)->_index_target != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForInfiniteCounterObject *)cpy_r_self)->_index_target);
    }
    ((mypyc___irbuild___for_helpers___ForInfiniteCounterObject *)cpy_r_self)->_index_target = cpy_r_r9;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 958, CPyStatic_for_helpers___globals);
        goto CPyL11;
    }
    cpy_r_r11 = ((mypyc___irbuild___for_helpers___ForInfiniteCounterObject *)cpy_r_self)->_index_target;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "init", "ForInfiniteCounter", "index_target", 959, CPyStatic_for_helpers___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r11);
CPyL6: ;
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_targets___AssignmentTarget)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "init", 959, CPyStatic_for_helpers___globals, "mypyc.irbuild.targets.AssignmentTarget", cpy_r_r11);
        goto CPyL11;
    }
    cpy_r_r13 = ((mypyc___irbuild___for_helpers___ForInfiniteCounterObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r12, cpy_r_zero, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_zero);
    CPyTagged_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 959, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    return 1;
CPyL9: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL10: ;
    CPy_DecRef(cpy_r_builder);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_zero);
    goto CPyL9;
}

PyObject *CPyPy_for_helpers___ForInfiniteCounter___init(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":init", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForInfiniteCounter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForInfiniteCounter", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForInfiniteCounter___init(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 952, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForInfiniteCounter___gen_step(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_builder;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_new_val;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForInfiniteCounterObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_builder = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForInfiniteCounterObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_line = cpy_r_r1;
    cpy_r_r2 = CPyStatic_rtypes___short_int_rprimitive;
    if (unlikely(cpy_r_r2 == NULL)) {
        goto CPyL13;
    } else
        goto CPyL3;
CPyL1: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"short_int_rprimitive\" was not set");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 968, CPyStatic_for_helpers___globals);
        goto CPyL12;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypyc___irbuild___for_helpers___ForInfiniteCounterObject *)cpy_r_self)->_index_reg;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForInfiniteCounter", "index_reg", 968, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r4, cpy_r_line, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 968, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = CPyDef_ops___Integer(2, cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 968, CPyStatic_for_helpers___globals);
        goto CPyL15;
    }
    cpy_r_r10 = CPyDef_builder___IRBuilder___int_op(cpy_r_builder, cpy_r_r2, cpy_r_r6, cpy_r_r9, 0, cpy_r_line);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 967, CPyStatic_for_helpers___globals);
        goto CPyL14;
    }
    cpy_r_new_val = cpy_r_r10;
    cpy_r_r11 = ((mypyc___irbuild___for_helpers___ForInfiniteCounterObject *)cpy_r_self)->_index_reg;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForInfiniteCounter", "index_reg", 970, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r11);
CPyL8: ;
    cpy_r_r12 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r11, cpy_r_new_val, cpy_r_line);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 970, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    cpy_r_r13 = ((mypyc___irbuild___for_helpers___ForInfiniteCounterObject *)cpy_r_self)->_index_target;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForInfiniteCounter", "index_target", 971, CPyStatic_for_helpers___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r13);
CPyL10: ;
    cpy_r_r14 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r13, cpy_r_new_val, cpy_r_line);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_new_val);
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_builder);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 971, CPyStatic_for_helpers___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL13: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL1;
CPyL14: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r6);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_builder);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_new_val);
    goto CPyL12;
}

PyObject *CPyPy_for_helpers___ForInfiniteCounter___gen_step(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_step", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForInfiniteCounter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForInfiniteCounter", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForInfiniteCounter___gen_step(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 961, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForEnumerate___need_cleanup(PyObject *cpy_r_self) {
    return 1;
}

PyObject *CPyPy_for_helpers___ForEnumerate___need_cleanup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":need_cleanup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForEnumerate))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForEnumerate", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForEnumerate___need_cleanup(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "need_cleanup", 977, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForEnumerate___init(PyObject *cpy_r_self, PyObject *cpy_r_index1, PyObject *cpy_r_index2, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_body_block;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_loop_exit;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "init", "ForEnumerate", "loop_exit", 985, CPyStatic_for_helpers___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r2);
CPyL1: ;
    cpy_r_r3 = ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_for_helpers___ForInfiniteCounter(cpy_r_r0, cpy_r_index1, cpy_r_r1, cpy_r_r2, cpy_r_r3, 1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 984, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    if (((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_index_gen != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_index_gen);
    }
    ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_index_gen = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 984, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    cpy_r_r6 = ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_index_gen;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "init", "ForEnumerate", "index_gen", 987, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = CPyDef_for_helpers___ForInfiniteCounter___init(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 987, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    cpy_r_r8 = ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_body_block;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_loop_exit;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "init", "ForEnumerate", "loop_exit", 990, CPyStatic_for_helpers___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r10);
CPyL6: ;
    cpy_r_r11 = ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r11);
    cpy_r_r12 = 2;
    cpy_r_r13 = CPyDef_for_helpers___make_for_loop_generator(cpy_r_r8, cpy_r_index2, cpy_r_expr, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, 1);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 989, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    if (((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_main_gen != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_main_gen);
    }
    ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_main_gen = cpy_r_r13;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 989, CPyStatic_for_helpers___globals);
        goto CPyL9;
    }
    return 1;
CPyL9: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL9;
}

PyObject *CPyPy_for_helpers___ForEnumerate___init(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"index1", "index2", "expr", 0};
    static CPyArg_Parser parser = {"OOO:init", kwlist, 0};
    PyObject *obj_index1;
    PyObject *obj_index2;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_index1, &obj_index2, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForEnumerate))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForEnumerate", obj_self); 
        goto fail;
    }
    PyObject *arg_index1;
    if (likely(PyObject_TypeCheck(obj_index1, CPyType_nodes___Expression)))
        arg_index1 = obj_index1;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_index1); 
        goto fail;
    }
    PyObject *arg_index2;
    if (likely(PyObject_TypeCheck(obj_index2, CPyType_nodes___Expression)))
        arg_index2 = obj_index2;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_index2); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForEnumerate___init(arg_self, arg_index1, arg_index2, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 982, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForEnumerate___gen_condition(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_main_gen;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForEnumerate", "main_gen", 995, CPyStatic_for_helpers___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_for_helpers___ForGenerator, 3, mypyc___irbuild___for_helpers___ForGeneratorObject, char (*)(PyObject *))(cpy_r_r0); /* gen_condition */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 995, CPyStatic_for_helpers___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_for_helpers___ForEnumerate___gen_condition(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_condition", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForEnumerate))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForEnumerate", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForEnumerate___gen_condition(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 993, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForEnumerate___begin_body(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_index_gen;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForEnumerate", "index_gen", 998, CPyStatic_for_helpers___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_for_helpers___ForGenerator___begin_body(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 998, CPyStatic_for_helpers___globals);
        goto CPyL5;
    }
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_main_gen;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForEnumerate", "main_gen", 999, CPyStatic_for_helpers___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_r2, CPyType_for_helpers___ForGenerator, 4, mypyc___irbuild___for_helpers___ForGeneratorObject, char (*)(PyObject *))(cpy_r_r2); /* begin_body */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 999, CPyStatic_for_helpers___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_for_helpers___ForEnumerate___begin_body(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":begin_body", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForEnumerate))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForEnumerate", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForEnumerate___begin_body(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 997, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForEnumerate___gen_step(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_index_gen;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForEnumerate", "index_gen", 1002, CPyStatic_for_helpers___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_for_helpers___ForInfiniteCounter___gen_step(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 1002, CPyStatic_for_helpers___globals);
        goto CPyL5;
    }
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_main_gen;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForEnumerate", "main_gen", 1003, CPyStatic_for_helpers___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_r2, CPyType_for_helpers___ForGenerator, 5, mypyc___irbuild___for_helpers___ForGeneratorObject, char (*)(PyObject *))(cpy_r_r2); /* gen_step */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 1003, CPyStatic_for_helpers___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_for_helpers___ForEnumerate___gen_step(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_step", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForEnumerate))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForEnumerate", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForEnumerate___gen_step(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 1001, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForEnumerate___gen_cleanup(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_index_gen;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_cleanup", "ForEnumerate", "index_gen", 1006, CPyStatic_for_helpers___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_for_helpers___ForGenerator___gen_cleanup(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 1006, CPyStatic_for_helpers___globals);
        goto CPyL5;
    }
    cpy_r_r2 = ((mypyc___irbuild___for_helpers___ForEnumerateObject *)cpy_r_self)->_main_gen;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_cleanup", "ForEnumerate", "main_gen", 1007, CPyStatic_for_helpers___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_r2, CPyType_for_helpers___ForGenerator, 6, mypyc___irbuild___for_helpers___ForGeneratorObject, char (*)(PyObject *))(cpy_r_r2); /* gen_cleanup */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 1007, CPyStatic_for_helpers___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_for_helpers___ForEnumerate___gen_cleanup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_cleanup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForEnumerate))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForEnumerate", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForEnumerate___gen_cleanup(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 1005, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForZip___need_cleanup(PyObject *cpy_r_self) {
    return 1;
}

PyObject *CPyPy_for_helpers___ForZip___need_cleanup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":need_cleanup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForZip))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForZip", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForZip___need_cleanup(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "need_cleanup", 1013, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForZip___init(PyObject *cpy_r_self, PyObject *cpy_r_indexes, PyObject *cpy_r_exprs) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r__;
    int64_t cpy_r_r15;
    char cpy_r_r16;
    int64_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyTagged cpy_r_r41;
    CPyPtr cpy_r_r42;
    int64_t cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    CPyPtr cpy_r_r46;
    int64_t cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    CPyPtr cpy_r_r50;
    int64_t cpy_r_r51;
    CPyTagged cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_index;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_expr;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_next_block;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyTagged cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_gen;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyTagged cpy_r_r69;
    CPyTagged cpy_r_r70;
    char cpy_r_r71;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_indexes)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_exprs)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = cpy_r_r2 == cpy_r_r5;
    if (cpy_r_r6) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 1019, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 1022, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_indexes)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = CPyTagged_Subtract(cpy_r_r11, 2);
    cpy_r_r13 = 0;
    CPyTagged_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyTagged_StealAsObject(cpy_r_r13);
    cpy_r__ = cpy_r_r14;
    CPy_DECREF(cpy_r__);
CPyL5: ;
    cpy_r_r15 = cpy_r_r13 & 1;
    cpy_r_r16 = cpy_r_r15 == 0;
    cpy_r_r17 = cpy_r_r12 & 1;
    cpy_r_r18 = cpy_r_r17 == 0;
    cpy_r_r19 = cpy_r_r16 & cpy_r_r18;
    if (!cpy_r_r19) goto CPyL7;
    cpy_r_r20 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r12;
    cpy_r_r21 = cpy_r_r20;
    goto CPyL8;
CPyL7: ;
    cpy_r_r22 = CPyTagged_IsLt_(cpy_r_r13, cpy_r_r12);
    cpy_r_r21 = cpy_r_r22;
CPyL8: ;
    if (!cpy_r_r21) goto CPyL33;
    cpy_r_r23 = CPY_INT_TAG;
    cpy_r_r24 = CPyDef_ops___BasicBlock(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 1022, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    cpy_r_r25 = PyList_Append(cpy_r_r8, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 1022, CPyStatic_for_helpers___globals);
        goto CPyL34;
    }
    cpy_r_r27 = CPyTagged_Add(cpy_r_r13, 2);
    CPyTagged_DECREF(cpy_r_r13);
    CPyTagged_INCREF(cpy_r_r27);
    cpy_r_r13 = cpy_r_r27;
    cpy_r_r28 = CPyTagged_StealAsObject(cpy_r_r27);
    cpy_r__ = cpy_r_r28;
    CPy_DECREF(cpy_r__);
    goto CPyL5;
CPyL12: ;
    cpy_r_r29 = ((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_body_block;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = PyList_New(1);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 1022, CPyStatic_for_helpers___globals);
        goto CPyL35;
    }
    cpy_r_r31 = (CPyPtr)&((PyListObject *)cpy_r_r30)->ob_item;
    cpy_r_r32 = *(CPyPtr *)cpy_r_r31;
    *(PyObject * *)cpy_r_r32 = cpy_r_r29;
    cpy_r_r33 = PyNumber_Add(cpy_r_r8, cpy_r_r30);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 1022, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    if (likely(PyList_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "init", 1022, CPyStatic_for_helpers___globals, "list", cpy_r_r33);
        goto CPyL32;
    }
    if (((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_cond_blocks != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_cond_blocks);
    }
    ((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_cond_blocks = cpy_r_r34;
    cpy_r_r35 = 1;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 1022, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    cpy_r_r36 = PyList_New(0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 1023, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    if (((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_gens != NULL) {
        CPy_DECREF(((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_gens);
    }
    ((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_gens = cpy_r_r36;
    cpy_r_r37 = 1;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 1023, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    cpy_r_r38 = 0;
    cpy_r_r39 = 0;
    cpy_r_r40 = ((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_cond_blocks;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "init", "ForZip", "cond_blocks", 1024, CPyStatic_for_helpers___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r40);
CPyL19: ;
    cpy_r_r41 = 0;
CPyL20: ;
    cpy_r_r42 = (CPyPtr)&((PyVarObject *)cpy_r_indexes)->ob_size;
    cpy_r_r43 = *(int64_t *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 << 1;
    cpy_r_r45 = (Py_ssize_t)cpy_r_r38 < (Py_ssize_t)cpy_r_r44;
    if (!cpy_r_r45) goto CPyL36;
    cpy_r_r46 = (CPyPtr)&((PyVarObject *)cpy_r_exprs)->ob_size;
    cpy_r_r47 = *(int64_t *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 << 1;
    cpy_r_r49 = (Py_ssize_t)cpy_r_r39 < (Py_ssize_t)cpy_r_r48;
    if (!cpy_r_r49) goto CPyL36;
    cpy_r_r50 = (CPyPtr)&((PyVarObject *)cpy_r_r40)->ob_size;
    cpy_r_r51 = *(int64_t *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 << 1;
    cpy_r_r53 = (Py_ssize_t)cpy_r_r41 < (Py_ssize_t)cpy_r_r52;
    if (!cpy_r_r53) goto CPyL36;
    cpy_r_r54 = CPyList_GetItemUnsafe(cpy_r_indexes, cpy_r_r38);
    if (likely(PyObject_TypeCheck(cpy_r_r54, CPyType_nodes___Expression)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "init", 1024, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r54);
        goto CPyL37;
    }
    cpy_r_index = cpy_r_r55;
    cpy_r_r56 = CPyList_GetItemUnsafe(cpy_r_exprs, cpy_r_r39);
    if (likely(PyObject_TypeCheck(cpy_r_r56, CPyType_nodes___Expression)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "init", 1024, CPyStatic_for_helpers___globals, "mypy.nodes.Expression", cpy_r_r56);
        goto CPyL38;
    }
    cpy_r_expr = cpy_r_r57;
    cpy_r_r58 = CPyList_GetItemUnsafe(cpy_r_r40, cpy_r_r41);
    if (likely(Py_TYPE(cpy_r_r58) == CPyType_ops___BasicBlock))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "init", 1024, CPyStatic_for_helpers___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r58);
        goto CPyL39;
    }
    cpy_r_next_block = cpy_r_r59;
    cpy_r_r60 = ((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61 = ((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_loop_exit;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "init", "ForZip", "loop_exit", 1026, CPyStatic_for_helpers___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r61);
CPyL27: ;
    cpy_r_r62 = ((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r62);
    cpy_r_r63 = 2;
    cpy_r_r64 = CPyDef_for_helpers___make_for_loop_generator(cpy_r_r60, cpy_r_index, cpy_r_expr, cpy_r_next_block, cpy_r_r61, cpy_r_r62, cpy_r_r63, 1);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_index);
    CPy_DECREF(cpy_r_expr);
    CPy_DECREF(cpy_r_next_block);
    CPy_DECREF(cpy_r_r61);
    CPyTagged_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 1025, CPyStatic_for_helpers___globals);
        goto CPyL37;
    }
    cpy_r_gen = cpy_r_r64;
    cpy_r_r65 = ((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_gens;
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "init", "ForZip", "gens", 1028, CPyStatic_for_helpers___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r65);
CPyL29: ;
    cpy_r_r66 = PyList_Append(cpy_r_r65, cpy_r_gen);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_gen);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 1028, CPyStatic_for_helpers___globals);
        goto CPyL37;
    }
    cpy_r_r68 = cpy_r_r38 + 2;
    cpy_r_r38 = cpy_r_r68;
    cpy_r_r69 = cpy_r_r39 + 2;
    cpy_r_r39 = cpy_r_r69;
    cpy_r_r70 = cpy_r_r41 + 2;
    cpy_r_r41 = cpy_r_r70;
    goto CPyL20;
CPyL31: ;
    return 1;
CPyL32: ;
    cpy_r_r71 = 2;
    return cpy_r_r71;
CPyL33: ;
    CPyTagged_DECREF(cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r13);
    goto CPyL12;
CPyL34: ;
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_r12);
    CPyTagged_DecRef(cpy_r_r13);
    goto CPyL32;
CPyL35: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r29);
    goto CPyL32;
CPyL36: ;
    CPy_DECREF(cpy_r_r40);
    goto CPyL31;
CPyL37: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL32;
CPyL38: ;
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_index);
    goto CPyL32;
CPyL39: ;
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_expr);
    goto CPyL32;
CPyL40: ;
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_r60);
    goto CPyL32;
CPyL41: ;
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_gen);
    goto CPyL32;
}

PyObject *CPyPy_for_helpers___ForZip___init(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"indexes", "exprs", 0};
    static CPyArg_Parser parser = {"OO:init", kwlist, 0};
    PyObject *obj_indexes;
    PyObject *obj_exprs;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_indexes, &obj_exprs)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForZip))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForZip", obj_self); 
        goto fail;
    }
    PyObject *arg_indexes;
    if (likely(PyList_Check(obj_indexes)))
        arg_indexes = obj_indexes;
    else {
        CPy_TypeError("list", obj_indexes); 
        goto fail;
    }
    PyObject *arg_exprs;
    if (likely(PyList_Check(obj_exprs)))
        arg_exprs = obj_exprs;
    else {
        CPy_TypeError("list", obj_exprs); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForZip___init(arg_self, arg_indexes, arg_exprs);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "init", 1018, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForZip___gen_condition(PyObject *cpy_r_self) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_gen;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    int64_t cpy_r_r15;
    char cpy_r_r16;
    int64_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    cpy_r_r0 = 0;
    cpy_r_i = 0;
    cpy_r_r1 = ((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_gens;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForZip", "gens", 1031, CPyStatic_for_helpers___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL18;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_for_helpers___ForGenerator)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 1031, CPyStatic_for_helpers___globals, "mypyc.irbuild.for_helpers.ForGenerator", cpy_r_r7);
        goto CPyL19;
    }
    cpy_r_gen = cpy_r_r8;
    cpy_r_r9 = CPY_GET_METHOD(cpy_r_gen, CPyType_for_helpers___ForGenerator, 3, mypyc___irbuild___for_helpers___ForGeneratorObject, char (*)(PyObject *))(cpy_r_gen); /* gen_condition */
    CPy_DECREF(cpy_r_gen);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 1032, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
    cpy_r_r10 = ((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_gens;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForZip", "gens", 1033, CPyStatic_for_helpers___globals);
        goto CPyL19;
    }
CPyL6: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = CPyTagged_Subtract(cpy_r_r13, 2);
    cpy_r_r15 = cpy_r_i & 1;
    cpy_r_r16 = cpy_r_r15 != 0;
    if (cpy_r_r16) goto CPyL8;
    cpy_r_r17 = cpy_r_r14 & 1;
    cpy_r_r18 = cpy_r_r17 != 0;
    if (!cpy_r_r18) goto CPyL9;
CPyL8: ;
    cpy_r_r19 = CPyTagged_IsLt_(cpy_r_i, cpy_r_r14);
    CPyTagged_DECREF(cpy_r_r14);
    if (cpy_r_r19) {
        goto CPyL10;
    } else
        goto CPyL20;
CPyL9: ;
    cpy_r_r20 = (Py_ssize_t)cpy_r_i < (Py_ssize_t)cpy_r_r14;
    CPyTagged_DECREF(cpy_r_r14);
    if (!cpy_r_r20) goto CPyL20;
CPyL10: ;
    cpy_r_r21 = ((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = ((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_cond_blocks;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_condition", "ForZip", "cond_blocks", 1034, CPyStatic_for_helpers___globals);
        goto CPyL21;
    }
CPyL11: ;
    cpy_r_r23 = CPyList_GetItem(cpy_r_r22, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 1034, CPyStatic_for_helpers___globals);
        goto CPyL22;
    }
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_ops___BasicBlock))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 1034, CPyStatic_for_helpers___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r23);
        goto CPyL22;
    }
    cpy_r_r25 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r21, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 1034, CPyStatic_for_helpers___globals);
        goto CPyL23;
    }
CPyL14: ;
    cpy_r_r26 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r26;
    cpy_r_i = cpy_r_r26;
    cpy_r_r27 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r27;
    goto CPyL2;
CPyL15: ;
    return 1;
CPyL16: ;
    cpy_r_r28 = 2;
    return cpy_r_r28;
CPyL17: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL16;
CPyL18: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r1);
    goto CPyL15;
CPyL19: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r1);
    goto CPyL16;
CPyL20: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL14;
CPyL21: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r21);
    goto CPyL16;
CPyL22: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r21);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL16;
}

PyObject *CPyPy_for_helpers___ForZip___gen_condition(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_condition", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForZip))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForZip", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForZip___gen_condition(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_condition", 1030, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForZip___begin_body(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_gen;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_gens;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "begin_body", "ForZip", "gens", 1037, CPyStatic_for_helpers___globals);
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
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_for_helpers___ForGenerator)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 1037, CPyStatic_for_helpers___globals, "mypyc.irbuild.for_helpers.ForGenerator", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_gen = cpy_r_r7;
    cpy_r_r8 = CPY_GET_METHOD(cpy_r_gen, CPyType_for_helpers___ForGenerator, 4, mypyc___irbuild___for_helpers___ForGeneratorObject, char (*)(PyObject *))(cpy_r_gen); /* begin_body */
    CPy_DECREF(cpy_r_gen);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 1038, CPyStatic_for_helpers___globals);
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

PyObject *CPyPy_for_helpers___ForZip___begin_body(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":begin_body", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForZip))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForZip", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForZip___begin_body(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "begin_body", 1036, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForZip___gen_step(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_gen;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_gens;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_step", "ForZip", "gens", 1041, CPyStatic_for_helpers___globals);
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
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_for_helpers___ForGenerator)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 1041, CPyStatic_for_helpers___globals, "mypyc.irbuild.for_helpers.ForGenerator", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_gen = cpy_r_r7;
    cpy_r_r8 = CPY_GET_METHOD(cpy_r_gen, CPyType_for_helpers___ForGenerator, 5, mypyc___irbuild___for_helpers___ForGeneratorObject, char (*)(PyObject *))(cpy_r_gen); /* gen_step */
    CPy_DECREF(cpy_r_gen);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 1042, CPyStatic_for_helpers___globals);
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

PyObject *CPyPy_for_helpers___ForZip___gen_step(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_step", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForZip))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForZip", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForZip___gen_step(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_step", 1040, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers___ForZip___gen_cleanup(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_gen;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypyc___irbuild___for_helpers___ForZipObject *)cpy_r_self)->_gens;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/for_helpers.py", "gen_cleanup", "ForZip", "gens", 1045, CPyStatic_for_helpers___globals);
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
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_for_helpers___ForGenerator)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 1045, CPyStatic_for_helpers___globals, "mypyc.irbuild.for_helpers.ForGenerator", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_gen = cpy_r_r7;
    cpy_r_r8 = CPY_GET_METHOD(cpy_r_gen, CPyType_for_helpers___ForGenerator, 6, mypyc___irbuild___for_helpers___ForGeneratorObject, char (*)(PyObject *))(cpy_r_gen); /* gen_cleanup */
    CPy_DECREF(cpy_r_gen);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 1046, CPyStatic_for_helpers___globals);
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

PyObject *CPyPy_for_helpers___ForZip___gen_cleanup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":gen_cleanup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_for_helpers___ForZip))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.for_helpers.ForZip", obj_self); 
        goto fail;
    }
    char retval = CPyDef_for_helpers___ForZip___gen_cleanup(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "gen_cleanup", 1044, CPyStatic_for_helpers___globals);
    return NULL;
}

char CPyDef_for_helpers_____top_level__(void) {
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
    tuple_T2OO cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
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
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
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
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
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
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    int32_t cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    int32_t cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    int32_t cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    int32_t cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
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
    int32_t cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    int32_t cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    int32_t cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    int32_t cpy_r_r207;
    char cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    int32_t cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    int32_t cpy_r_r223;
    char cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    char cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    int32_t cpy_r_r244;
    char cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    int32_t cpy_r_r248;
    char cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    int32_t cpy_r_r256;
    char cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    int32_t cpy_r_r264;
    char cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    char cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    int32_t cpy_r_r285;
    char cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    int32_t cpy_r_r289;
    char cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    int32_t cpy_r_r297;
    char cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    int32_t cpy_r_r305;
    char cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    char cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    int32_t cpy_r_r326;
    char cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    int32_t cpy_r_r330;
    char cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    char cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    int32_t cpy_r_r347;
    char cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    int32_t cpy_r_r351;
    char cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    char cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    int32_t cpy_r_r368;
    char cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    int32_t cpy_r_r372;
    char cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    char cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    int32_t cpy_r_r389;
    char cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    int32_t cpy_r_r393;
    char cpy_r_r394;
    char cpy_r_r395;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", -1, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_for_helpers___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 8, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10115]; /* ('Callable', 'ClassVar') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_for_helpers___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 10, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10116]; /* ('ARG_POS', 'CallExpr', 'Expression', 'GeneratorExpr',
                                      'Lvalue', 'MemberExpr', 'RefExpr', 'SetExpr',
                                      'TupleExpr', 'TypeAlias') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_for_helpers___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 12, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10117]; /* ('BasicBlock', 'Branch', 'Integer', 'IntOp',
                                      'LoadAddress', 'LoadMem', 'Register', 'TupleGet',
                                      'TupleSet', 'Value') */
    cpy_r_r18 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r19 = CPyStatic_for_helpers___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 24, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10118]; /* ('RTuple', 'RType', 'bool_rprimitive', 'int_rprimitive',
                                      'is_dict_rprimitive', 'is_fixed_width_rtype',
                                      'is_list_rprimitive', 'is_sequence_rprimitive',
                                      'is_short_int_rprimitive', 'is_str_rprimitive',
                                      'is_tuple_rprimitive', 'pointer_rprimitive',
                                      'short_int_rprimitive') */
    cpy_r_r22 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r23 = CPyStatic_for_helpers___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 36, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10034]; /* ('IRBuilder',) */
    cpy_r_r26 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r27 = CPyStatic_for_helpers___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 51, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    CPyModule_mypyc___irbuild___builder = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___irbuild___builder);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[10119]; /* ('AssignmentTarget', 'AssignmentTargetTuple') */
    cpy_r_r30 = CPyStatics[8098]; /* 'mypyc.irbuild.targets' */
    cpy_r_r31 = CPyStatic_for_helpers___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 52, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    CPyModule_mypyc___irbuild___targets = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___irbuild___targets);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[10120]; /* ('dict_check_size_op', 'dict_item_iter_op',
                                      'dict_key_iter_op', 'dict_next_item_op',
                                      'dict_next_key_op', 'dict_next_value_op',
                                      'dict_value_iter_op') */
    cpy_r_r34 = CPyStatics[8102]; /* 'mypyc.primitives.dict_ops' */
    cpy_r_r35 = CPyStatic_for_helpers___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 53, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    CPyModule_mypyc___primitives___dict_ops = cpy_r_r36;
    CPy_INCREF(CPyModule_mypyc___primitives___dict_ops);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[10121]; /* ('no_err_occurred_op',) */
    cpy_r_r38 = CPyStatics[8289]; /* 'mypyc.primitives.exc_ops' */
    cpy_r_r39 = CPyStatic_for_helpers___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 62, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    CPyModule_mypyc___primitives___exc_ops = cpy_r_r40;
    CPy_INCREF(CPyModule_mypyc___primitives___exc_ops);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[10122]; /* ('aiter_op', 'anext_op', 'iter_op', 'next_op') */
    cpy_r_r42 = CPyStatics[8103]; /* 'mypyc.primitives.generic_ops' */
    cpy_r_r43 = CPyStatic_for_helpers___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 63, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    CPyModule_mypyc___primitives___generic_ops = cpy_r_r44;
    CPy_INCREF(CPyModule_mypyc___primitives___generic_ops);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[10123]; /* ('list_append_op', 'list_get_item_unsafe_op',
                                      'new_list_set_item_op') */
    cpy_r_r46 = CPyStatics[8104]; /* 'mypyc.primitives.list_ops' */
    cpy_r_r47 = CPyStatic_for_helpers___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 64, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    CPyModule_mypyc___primitives___list_ops = cpy_r_r48;
    CPy_INCREF(CPyModule_mypyc___primitives___list_ops);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[10124]; /* ('stop_async_iteration_op',) */
    cpy_r_r50 = CPyStatics[8105]; /* 'mypyc.primitives.misc_ops' */
    cpy_r_r51 = CPyStatic_for_helpers___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 65, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    CPyModule_mypyc___primitives___misc_ops = cpy_r_r52;
    CPy_INCREF(CPyModule_mypyc___primitives___misc_ops);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatics[10125]; /* ('CFunctionDescription',) */
    cpy_r_r54 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r55 = CPyStatic_for_helpers___globals;
    cpy_r_r56 = CPyImport_ImportFromMany(cpy_r_r54, cpy_r_r53, cpy_r_r53, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 66, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    CPyModule_mypyc___primitives___registry = cpy_r_r56;
    CPy_INCREF(CPyModule_mypyc___primitives___registry);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r57 = CPyStatics[10126]; /* ('set_add_op',) */
    cpy_r_r58 = CPyStatics[8260]; /* 'mypyc.primitives.set_ops' */
    cpy_r_r59 = CPyStatic_for_helpers___globals;
    cpy_r_r60 = CPyImport_ImportFromMany(cpy_r_r58, cpy_r_r57, cpy_r_r57, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 67, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    CPyModule_mypyc___primitives___set_ops = cpy_r_r60;
    CPy_INCREF(CPyModule_mypyc___primitives___set_ops);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r61 = CPyStatic_for_helpers___globals;
    cpy_r_r62 = CPyStatics[19]; /* 'Callable' */
    cpy_r_r63 = CPyDict_GetItem(cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 69, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r64 = PyList_New(0);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 69, CPyStatic_for_helpers___globals);
        goto CPyL112;
    }
    cpy_r_r65 = Py_None;
    cpy_r_r66.f0 = cpy_r_r64;
    cpy_r_r66.f1 = cpy_r_r65;
    CPy_INCREF(cpy_r_r66.f0);
    CPy_INCREF(cpy_r_r66.f1);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r67 = PyTuple_New(2);
    if (unlikely(cpy_r_r67 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10184 = cpy_r_r66.f0;
    PyTuple_SET_ITEM(cpy_r_r67, 0, __tmp10184);
    PyObject *__tmp10185 = cpy_r_r66.f1;
    PyTuple_SET_ITEM(cpy_r_r67, 1, __tmp10185);
    cpy_r_r68 = PyObject_GetItem(cpy_r_r63, cpy_r_r67);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 69, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r69 = CPyStatic_for_helpers___globals;
    cpy_r_r70 = CPyStatics[8290]; /* 'GenFunc' */
    cpy_r_r71 = CPyDict_SetItem(cpy_r_r69, cpy_r_r70, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 69, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r73 = NULL;
    cpy_r_r74 = CPyStatics[8248]; /* 'mypyc.irbuild.for_helpers' */
    cpy_r_r75 = (PyObject *)CPyType_for_helpers___ForGenerator_template;
    cpy_r_r76 = CPyType_FromTemplate(cpy_r_r75, cpy_r_r73, cpy_r_r74);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 492, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r77 = CPyDef_for_helpers___ForGenerator_trait_vtable_setup();
    if (unlikely(cpy_r_r77 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", -1, CPyStatic_for_helpers___globals);
        goto CPyL113;
    }
    cpy_r_r78 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r79 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r80 = CPyStatics[56]; /* 'index' */
    cpy_r_r81 = CPyStatics[8291]; /* 'body_block' */
    cpy_r_r82 = CPyStatics[2272]; /* 'line' */
    cpy_r_r83 = CPyStatics[8292]; /* 'loop_exit' */
    cpy_r_r84 = PyTuple_Pack(5, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 492, CPyStatic_for_helpers___globals);
        goto CPyL113;
    }
    cpy_r_r85 = PyObject_SetAttr(cpy_r_r76, cpy_r_r78, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 492, CPyStatic_for_helpers___globals);
        goto CPyL113;
    }
    CPyType_for_helpers___ForGenerator = (PyTypeObject *)cpy_r_r76;
    CPy_INCREF(CPyType_for_helpers___ForGenerator);
    cpy_r_r87 = CPyStatic_for_helpers___globals;
    cpy_r_r88 = CPyStatics[8293]; /* 'ForGenerator' */
    cpy_r_r89 = CPyDict_SetItem(cpy_r_r87, cpy_r_r88, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 492, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r91 = (PyObject *)CPyType_for_helpers___ForGenerator;
    cpy_r_r92 = PyTuple_Pack(1, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 548, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r93 = CPyStatics[8248]; /* 'mypyc.irbuild.for_helpers' */
    cpy_r_r94 = (PyObject *)CPyType_for_helpers___ForIterable_template;
    cpy_r_r95 = CPyType_FromTemplate(cpy_r_r94, cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 548, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r96 = CPyDef_for_helpers___ForIterable_trait_vtable_setup();
    if (unlikely(cpy_r_r96 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", -1, CPyStatic_for_helpers___globals);
        goto CPyL114;
    }
    cpy_r_r97 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r98 = CPyStatics[8294]; /* 'iter_target' */
    cpy_r_r99 = CPyStatics[8295]; /* 'target_type' */
    cpy_r_r100 = CPyStatics[8296]; /* 'next_reg' */
    cpy_r_r101 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r102 = CPyStatics[56]; /* 'index' */
    cpy_r_r103 = CPyStatics[8291]; /* 'body_block' */
    cpy_r_r104 = CPyStatics[2272]; /* 'line' */
    cpy_r_r105 = CPyStatics[8292]; /* 'loop_exit' */
    cpy_r_r106 = PyTuple_Pack(8, cpy_r_r98, cpy_r_r99, cpy_r_r100, cpy_r_r101, cpy_r_r102, cpy_r_r103, cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 548, CPyStatic_for_helpers___globals);
        goto CPyL114;
    }
    cpy_r_r107 = PyObject_SetAttr(cpy_r_r95, cpy_r_r97, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 548, CPyStatic_for_helpers___globals);
        goto CPyL114;
    }
    CPyType_for_helpers___ForIterable = (PyTypeObject *)cpy_r_r95;
    CPy_INCREF(CPyType_for_helpers___ForIterable);
    cpy_r_r109 = CPyStatic_for_helpers___globals;
    cpy_r_r110 = CPyStatics[8297]; /* 'ForIterable' */
    cpy_r_r111 = CPyDict_SetItem(cpy_r_r109, cpy_r_r110, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 548, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r113 = (PyObject *)CPyType_for_helpers___ForGenerator;
    cpy_r_r114 = PyTuple_Pack(1, cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 597, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r115 = CPyStatics[8248]; /* 'mypyc.irbuild.for_helpers' */
    cpy_r_r116 = (PyObject *)CPyType_for_helpers___ForAsyncIterable_template;
    cpy_r_r117 = CPyType_FromTemplate(cpy_r_r116, cpy_r_r114, cpy_r_r115);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 597, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r118 = CPyDef_for_helpers___ForAsyncIterable_trait_vtable_setup();
    if (unlikely(cpy_r_r118 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", -1, CPyStatic_for_helpers___globals);
        goto CPyL115;
    }
    cpy_r_r119 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r120 = CPyStatics[8294]; /* 'iter_target' */
    cpy_r_r121 = CPyStatics[8295]; /* 'target_type' */
    cpy_r_r122 = CPyStatics[8298]; /* 'stop_reg' */
    cpy_r_r123 = CPyStatics[8296]; /* 'next_reg' */
    cpy_r_r124 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r125 = CPyStatics[56]; /* 'index' */
    cpy_r_r126 = CPyStatics[8291]; /* 'body_block' */
    cpy_r_r127 = CPyStatics[2272]; /* 'line' */
    cpy_r_r128 = CPyStatics[8292]; /* 'loop_exit' */
    cpy_r_r129 = PyTuple_Pack(9, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124, cpy_r_r125, cpy_r_r126, cpy_r_r127, cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 597, CPyStatic_for_helpers___globals);
        goto CPyL115;
    }
    cpy_r_r130 = PyObject_SetAttr(cpy_r_r117, cpy_r_r119, cpy_r_r129);
    CPy_DECREF(cpy_r_r129);
    cpy_r_r131 = cpy_r_r130 >= 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 597, CPyStatic_for_helpers___globals);
        goto CPyL115;
    }
    CPyType_for_helpers___ForAsyncIterable = (PyTypeObject *)cpy_r_r117;
    CPy_INCREF(CPyType_for_helpers___ForAsyncIterable);
    cpy_r_r132 = CPyStatic_for_helpers___globals;
    cpy_r_r133 = CPyStatics[8299]; /* 'ForAsyncIterable' */
    cpy_r_r134 = CPyDict_SetItem(cpy_r_r132, cpy_r_r133, cpy_r_r117);
    CPy_DECREF(cpy_r_r117);
    cpy_r_r135 = cpy_r_r134 >= 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 597, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r136 = (PyObject *)CPyType_for_helpers___ForGenerator;
    cpy_r_r137 = PyTuple_Pack(1, cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 672, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r138 = CPyStatics[8248]; /* 'mypyc.irbuild.for_helpers' */
    cpy_r_r139 = (PyObject *)CPyType_for_helpers___ForSequence_template;
    cpy_r_r140 = CPyType_FromTemplate(cpy_r_r139, cpy_r_r137, cpy_r_r138);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 672, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r141 = CPyDef_for_helpers___ForSequence_trait_vtable_setup();
    if (unlikely(cpy_r_r141 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", -1, CPyStatic_for_helpers___globals);
        goto CPyL116;
    }
    cpy_r_r142 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r143 = CPyStatics[467]; /* 'reverse' */
    cpy_r_r144 = CPyStatics[8300]; /* 'expr_target' */
    cpy_r_r145 = CPyStatics[8301]; /* 'index_target' */
    cpy_r_r146 = CPyStatics[8295]; /* 'target_type' */
    cpy_r_r147 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r148 = CPyStatics[56]; /* 'index' */
    cpy_r_r149 = CPyStatics[8291]; /* 'body_block' */
    cpy_r_r150 = CPyStatics[2272]; /* 'line' */
    cpy_r_r151 = CPyStatics[8292]; /* 'loop_exit' */
    cpy_r_r152 = PyTuple_Pack(9, cpy_r_r143, cpy_r_r144, cpy_r_r145, cpy_r_r146, cpy_r_r147, cpy_r_r148, cpy_r_r149, cpy_r_r150, cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 672, CPyStatic_for_helpers___globals);
        goto CPyL116;
    }
    cpy_r_r153 = PyObject_SetAttr(cpy_r_r140, cpy_r_r142, cpy_r_r152);
    CPy_DECREF(cpy_r_r152);
    cpy_r_r154 = cpy_r_r153 >= 0;
    if (unlikely(!cpy_r_r154)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 672, CPyStatic_for_helpers___globals);
        goto CPyL116;
    }
    CPyType_for_helpers___ForSequence = (PyTypeObject *)cpy_r_r140;
    CPy_INCREF(CPyType_for_helpers___ForSequence);
    cpy_r_r155 = CPyStatic_for_helpers___globals;
    cpy_r_r156 = CPyStatics[8302]; /* 'ForSequence' */
    cpy_r_r157 = CPyDict_SetItem(cpy_r_r155, cpy_r_r156, cpy_r_r140);
    CPy_DECREF(cpy_r_r140);
    cpy_r_r158 = cpy_r_r157 >= 0;
    if (unlikely(!cpy_r_r158)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 672, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r159 = (PyObject *)CPyType_for_helpers___ForGenerator;
    cpy_r_r160 = PyTuple_Pack(1, cpy_r_r159);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 750, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r161 = CPyStatics[8248]; /* 'mypyc.irbuild.for_helpers' */
    cpy_r_r162 = (PyObject *)CPyType_for_helpers___ForDictionaryCommon_template;
    cpy_r_r163 = CPyType_FromTemplate(cpy_r_r162, cpy_r_r160, cpy_r_r161);
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 750, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r164 = CPyDef_for_helpers___ForDictionaryCommon_trait_vtable_setup();
    if (unlikely(cpy_r_r164 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", -1, CPyStatic_for_helpers___globals);
        goto CPyL117;
    }
    cpy_r_r165 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r166 = CPyStatics[8295]; /* 'target_type' */
    cpy_r_r167 = CPyStatics[8300]; /* 'expr_target' */
    cpy_r_r168 = CPyStatics[8303]; /* 'offset_target' */
    cpy_r_r169 = CPyStatics[155]; /* 'size' */
    cpy_r_r170 = CPyStatics[8294]; /* 'iter_target' */
    cpy_r_r171 = CPyStatics[8304]; /* 'next_tuple' */
    cpy_r_r172 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r173 = CPyStatics[56]; /* 'index' */
    cpy_r_r174 = CPyStatics[8291]; /* 'body_block' */
    cpy_r_r175 = CPyStatics[2272]; /* 'line' */
    cpy_r_r176 = CPyStatics[8292]; /* 'loop_exit' */
    cpy_r_r177 = PyTuple_Pack(11, cpy_r_r166, cpy_r_r167, cpy_r_r168, cpy_r_r169, cpy_r_r170, cpy_r_r171, cpy_r_r172, cpy_r_r173, cpy_r_r174, cpy_r_r175, cpy_r_r176);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 750, CPyStatic_for_helpers___globals);
        goto CPyL117;
    }
    cpy_r_r178 = PyObject_SetAttr(cpy_r_r163, cpy_r_r165, cpy_r_r177);
    CPy_DECREF(cpy_r_r177);
    cpy_r_r179 = cpy_r_r178 >= 0;
    if (unlikely(!cpy_r_r179)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 750, CPyStatic_for_helpers___globals);
        goto CPyL117;
    }
    CPyType_for_helpers___ForDictionaryCommon = (PyTypeObject *)cpy_r_r163;
    CPy_INCREF(CPyType_for_helpers___ForDictionaryCommon);
    cpy_r_r180 = CPyStatic_for_helpers___globals;
    cpy_r_r181 = CPyStatics[8305]; /* 'ForDictionaryCommon' */
    cpy_r_r182 = CPyDict_SetItem(cpy_r_r180, cpy_r_r181, cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    cpy_r_r183 = cpy_r_r182 >= 0;
    if (unlikely(!cpy_r_r183)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 750, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r184 = (PyObject *)CPyType_for_helpers___ForDictionaryCommon;
    cpy_r_r185 = PyTuple_Pack(1, cpy_r_r184);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 824, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r186 = CPyStatics[8248]; /* 'mypyc.irbuild.for_helpers' */
    cpy_r_r187 = (PyObject *)CPyType_for_helpers___ForDictionaryKeys_template;
    cpy_r_r188 = CPyType_FromTemplate(cpy_r_r187, cpy_r_r185, cpy_r_r186);
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 824, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r189 = CPyDef_for_helpers___ForDictionaryKeys_trait_vtable_setup();
    if (unlikely(cpy_r_r189 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", -1, CPyStatic_for_helpers___globals);
        goto CPyL118;
    }
    cpy_r_r190 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r191 = CPyStatics[8295]; /* 'target_type' */
    cpy_r_r192 = CPyStatics[8300]; /* 'expr_target' */
    cpy_r_r193 = CPyStatics[8303]; /* 'offset_target' */
    cpy_r_r194 = CPyStatics[155]; /* 'size' */
    cpy_r_r195 = CPyStatics[8294]; /* 'iter_target' */
    cpy_r_r196 = CPyStatics[8304]; /* 'next_tuple' */
    cpy_r_r197 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r198 = CPyStatics[56]; /* 'index' */
    cpy_r_r199 = CPyStatics[8291]; /* 'body_block' */
    cpy_r_r200 = CPyStatics[2272]; /* 'line' */
    cpy_r_r201 = CPyStatics[8292]; /* 'loop_exit' */
    cpy_r_r202 = PyTuple_Pack(11, cpy_r_r191, cpy_r_r192, cpy_r_r193, cpy_r_r194, cpy_r_r195, cpy_r_r196, cpy_r_r197, cpy_r_r198, cpy_r_r199, cpy_r_r200, cpy_r_r201);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 824, CPyStatic_for_helpers___globals);
        goto CPyL118;
    }
    cpy_r_r203 = PyObject_SetAttr(cpy_r_r188, cpy_r_r190, cpy_r_r202);
    CPy_DECREF(cpy_r_r202);
    cpy_r_r204 = cpy_r_r203 >= 0;
    if (unlikely(!cpy_r_r204)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 824, CPyStatic_for_helpers___globals);
        goto CPyL118;
    }
    CPyType_for_helpers___ForDictionaryKeys = (PyTypeObject *)cpy_r_r188;
    CPy_INCREF(CPyType_for_helpers___ForDictionaryKeys);
    cpy_r_r205 = CPyStatic_for_helpers___globals;
    cpy_r_r206 = CPyStatics[8306]; /* 'ForDictionaryKeys' */
    cpy_r_r207 = CPyDict_SetItem(cpy_r_r205, cpy_r_r206, cpy_r_r188);
    CPy_DECREF(cpy_r_r188);
    cpy_r_r208 = cpy_r_r207 >= 0;
    if (unlikely(!cpy_r_r208)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 824, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r209 = (PyObject *)CPyType_for_helpers___ForDictionaryKeys;
    cpy_r_r210 = CPyStatic_for_helpers___globals;
    cpy_r_r211 = CPyStatics[8286]; /* 'dict_next_key_op' */
    cpy_r_r212 = CPyDict_GetItem(cpy_r_r210, cpy_r_r211);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 827, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    if (likely(PyTuple_Check(cpy_r_r212)))
        cpy_r_r213 = cpy_r_r212;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "<module>", 827, CPyStatic_for_helpers___globals, "tuple", cpy_r_r212);
        goto CPyL111;
    }
    cpy_r_r214 = CPyStatics[8279]; /* 'dict_next_op' */
    cpy_r_r215 = PyObject_SetAttr(cpy_r_r209, cpy_r_r214, cpy_r_r213);
    CPy_DECREF(cpy_r_r213);
    cpy_r_r216 = cpy_r_r215 >= 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 827, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r217 = (PyObject *)CPyType_for_helpers___ForDictionaryKeys;
    cpy_r_r218 = CPyStatic_for_helpers___globals;
    cpy_r_r219 = CPyStatics[8284]; /* 'dict_key_iter_op' */
    cpy_r_r220 = CPyDict_GetItem(cpy_r_r218, cpy_r_r219);
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 828, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    if (likely(PyTuple_Check(cpy_r_r220)))
        cpy_r_r221 = cpy_r_r220;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "<module>", 828, CPyStatic_for_helpers___globals, "tuple", cpy_r_r220);
        goto CPyL111;
    }
    cpy_r_r222 = CPyStatics[8278]; /* 'dict_iter_op' */
    cpy_r_r223 = PyObject_SetAttr(cpy_r_r217, cpy_r_r222, cpy_r_r221);
    CPy_DECREF(cpy_r_r221);
    cpy_r_r224 = cpy_r_r223 >= 0;
    if (unlikely(!cpy_r_r224)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 828, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r225 = (PyObject *)CPyType_for_helpers___ForDictionaryCommon;
    cpy_r_r226 = PyTuple_Pack(1, cpy_r_r225);
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 843, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r227 = CPyStatics[8248]; /* 'mypyc.irbuild.for_helpers' */
    cpy_r_r228 = (PyObject *)CPyType_for_helpers___ForDictionaryValues_template;
    cpy_r_r229 = CPyType_FromTemplate(cpy_r_r228, cpy_r_r226, cpy_r_r227);
    CPy_DECREF(cpy_r_r226);
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 843, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r230 = CPyDef_for_helpers___ForDictionaryValues_trait_vtable_setup();
    if (unlikely(cpy_r_r230 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", -1, CPyStatic_for_helpers___globals);
        goto CPyL119;
    }
    cpy_r_r231 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r232 = CPyStatics[8295]; /* 'target_type' */
    cpy_r_r233 = CPyStatics[8300]; /* 'expr_target' */
    cpy_r_r234 = CPyStatics[8303]; /* 'offset_target' */
    cpy_r_r235 = CPyStatics[155]; /* 'size' */
    cpy_r_r236 = CPyStatics[8294]; /* 'iter_target' */
    cpy_r_r237 = CPyStatics[8304]; /* 'next_tuple' */
    cpy_r_r238 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r239 = CPyStatics[56]; /* 'index' */
    cpy_r_r240 = CPyStatics[8291]; /* 'body_block' */
    cpy_r_r241 = CPyStatics[2272]; /* 'line' */
    cpy_r_r242 = CPyStatics[8292]; /* 'loop_exit' */
    cpy_r_r243 = PyTuple_Pack(11, cpy_r_r232, cpy_r_r233, cpy_r_r234, cpy_r_r235, cpy_r_r236, cpy_r_r237, cpy_r_r238, cpy_r_r239, cpy_r_r240, cpy_r_r241, cpy_r_r242);
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 843, CPyStatic_for_helpers___globals);
        goto CPyL119;
    }
    cpy_r_r244 = PyObject_SetAttr(cpy_r_r229, cpy_r_r231, cpy_r_r243);
    CPy_DECREF(cpy_r_r243);
    cpy_r_r245 = cpy_r_r244 >= 0;
    if (unlikely(!cpy_r_r245)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 843, CPyStatic_for_helpers___globals);
        goto CPyL119;
    }
    CPyType_for_helpers___ForDictionaryValues = (PyTypeObject *)cpy_r_r229;
    CPy_INCREF(CPyType_for_helpers___ForDictionaryValues);
    cpy_r_r246 = CPyStatic_for_helpers___globals;
    cpy_r_r247 = CPyStatics[8307]; /* 'ForDictionaryValues' */
    cpy_r_r248 = CPyDict_SetItem(cpy_r_r246, cpy_r_r247, cpy_r_r229);
    CPy_DECREF(cpy_r_r229);
    cpy_r_r249 = cpy_r_r248 >= 0;
    if (unlikely(!cpy_r_r249)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 843, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r250 = (PyObject *)CPyType_for_helpers___ForDictionaryValues;
    cpy_r_r251 = CPyStatic_for_helpers___globals;
    cpy_r_r252 = CPyStatics[8287]; /* 'dict_next_value_op' */
    cpy_r_r253 = CPyDict_GetItem(cpy_r_r251, cpy_r_r252);
    if (unlikely(cpy_r_r253 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 846, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    if (likely(PyTuple_Check(cpy_r_r253)))
        cpy_r_r254 = cpy_r_r253;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "<module>", 846, CPyStatic_for_helpers___globals, "tuple", cpy_r_r253);
        goto CPyL111;
    }
    cpy_r_r255 = CPyStatics[8279]; /* 'dict_next_op' */
    cpy_r_r256 = PyObject_SetAttr(cpy_r_r250, cpy_r_r255, cpy_r_r254);
    CPy_DECREF(cpy_r_r254);
    cpy_r_r257 = cpy_r_r256 >= 0;
    if (unlikely(!cpy_r_r257)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 846, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r258 = (PyObject *)CPyType_for_helpers___ForDictionaryValues;
    cpy_r_r259 = CPyStatic_for_helpers___globals;
    cpy_r_r260 = CPyStatics[8288]; /* 'dict_value_iter_op' */
    cpy_r_r261 = CPyDict_GetItem(cpy_r_r259, cpy_r_r260);
    if (unlikely(cpy_r_r261 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 847, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    if (likely(PyTuple_Check(cpy_r_r261)))
        cpy_r_r262 = cpy_r_r261;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "<module>", 847, CPyStatic_for_helpers___globals, "tuple", cpy_r_r261);
        goto CPyL111;
    }
    cpy_r_r263 = CPyStatics[8278]; /* 'dict_iter_op' */
    cpy_r_r264 = PyObject_SetAttr(cpy_r_r258, cpy_r_r263, cpy_r_r262);
    CPy_DECREF(cpy_r_r262);
    cpy_r_r265 = cpy_r_r264 >= 0;
    if (unlikely(!cpy_r_r265)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 847, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r266 = (PyObject *)CPyType_for_helpers___ForDictionaryCommon;
    cpy_r_r267 = PyTuple_Pack(1, cpy_r_r266);
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 862, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r268 = CPyStatics[8248]; /* 'mypyc.irbuild.for_helpers' */
    cpy_r_r269 = (PyObject *)CPyType_for_helpers___ForDictionaryItems_template;
    cpy_r_r270 = CPyType_FromTemplate(cpy_r_r269, cpy_r_r267, cpy_r_r268);
    CPy_DECREF(cpy_r_r267);
    if (unlikely(cpy_r_r270 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 862, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r271 = CPyDef_for_helpers___ForDictionaryItems_trait_vtable_setup();
    if (unlikely(cpy_r_r271 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", -1, CPyStatic_for_helpers___globals);
        goto CPyL120;
    }
    cpy_r_r272 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r273 = CPyStatics[8295]; /* 'target_type' */
    cpy_r_r274 = CPyStatics[8300]; /* 'expr_target' */
    cpy_r_r275 = CPyStatics[8303]; /* 'offset_target' */
    cpy_r_r276 = CPyStatics[155]; /* 'size' */
    cpy_r_r277 = CPyStatics[8294]; /* 'iter_target' */
    cpy_r_r278 = CPyStatics[8304]; /* 'next_tuple' */
    cpy_r_r279 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r280 = CPyStatics[56]; /* 'index' */
    cpy_r_r281 = CPyStatics[8291]; /* 'body_block' */
    cpy_r_r282 = CPyStatics[2272]; /* 'line' */
    cpy_r_r283 = CPyStatics[8292]; /* 'loop_exit' */
    cpy_r_r284 = PyTuple_Pack(11, cpy_r_r273, cpy_r_r274, cpy_r_r275, cpy_r_r276, cpy_r_r277, cpy_r_r278, cpy_r_r279, cpy_r_r280, cpy_r_r281, cpy_r_r282, cpy_r_r283);
    if (unlikely(cpy_r_r284 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 862, CPyStatic_for_helpers___globals);
        goto CPyL120;
    }
    cpy_r_r285 = PyObject_SetAttr(cpy_r_r270, cpy_r_r272, cpy_r_r284);
    CPy_DECREF(cpy_r_r284);
    cpy_r_r286 = cpy_r_r285 >= 0;
    if (unlikely(!cpy_r_r286)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 862, CPyStatic_for_helpers___globals);
        goto CPyL120;
    }
    CPyType_for_helpers___ForDictionaryItems = (PyTypeObject *)cpy_r_r270;
    CPy_INCREF(CPyType_for_helpers___ForDictionaryItems);
    cpy_r_r287 = CPyStatic_for_helpers___globals;
    cpy_r_r288 = CPyStatics[8308]; /* 'ForDictionaryItems' */
    cpy_r_r289 = CPyDict_SetItem(cpy_r_r287, cpy_r_r288, cpy_r_r270);
    CPy_DECREF(cpy_r_r270);
    cpy_r_r290 = cpy_r_r289 >= 0;
    if (unlikely(!cpy_r_r290)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 862, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r291 = (PyObject *)CPyType_for_helpers___ForDictionaryItems;
    cpy_r_r292 = CPyStatic_for_helpers___globals;
    cpy_r_r293 = CPyStatics[8285]; /* 'dict_next_item_op' */
    cpy_r_r294 = CPyDict_GetItem(cpy_r_r292, cpy_r_r293);
    if (unlikely(cpy_r_r294 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 865, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    if (likely(PyTuple_Check(cpy_r_r294)))
        cpy_r_r295 = cpy_r_r294;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "<module>", 865, CPyStatic_for_helpers___globals, "tuple", cpy_r_r294);
        goto CPyL111;
    }
    cpy_r_r296 = CPyStatics[8279]; /* 'dict_next_op' */
    cpy_r_r297 = PyObject_SetAttr(cpy_r_r291, cpy_r_r296, cpy_r_r295);
    CPy_DECREF(cpy_r_r295);
    cpy_r_r298 = cpy_r_r297 >= 0;
    if (unlikely(!cpy_r_r298)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 865, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r299 = (PyObject *)CPyType_for_helpers___ForDictionaryItems;
    cpy_r_r300 = CPyStatic_for_helpers___globals;
    cpy_r_r301 = CPyStatics[8283]; /* 'dict_item_iter_op' */
    cpy_r_r302 = CPyDict_GetItem(cpy_r_r300, cpy_r_r301);
    if (unlikely(cpy_r_r302 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 866, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    if (likely(PyTuple_Check(cpy_r_r302)))
        cpy_r_r303 = cpy_r_r302;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/for_helpers.py", "<module>", 866, CPyStatic_for_helpers___globals, "tuple", cpy_r_r302);
        goto CPyL111;
    }
    cpy_r_r304 = CPyStatics[8278]; /* 'dict_iter_op' */
    cpy_r_r305 = PyObject_SetAttr(cpy_r_r299, cpy_r_r304, cpy_r_r303);
    CPy_DECREF(cpy_r_r303);
    cpy_r_r306 = cpy_r_r305 >= 0;
    if (unlikely(!cpy_r_r306)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 866, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r307 = (PyObject *)CPyType_for_helpers___ForGenerator;
    cpy_r_r308 = PyTuple_Pack(1, cpy_r_r307);
    if (unlikely(cpy_r_r308 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 892, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r309 = CPyStatics[8248]; /* 'mypyc.irbuild.for_helpers' */
    cpy_r_r310 = (PyObject *)CPyType_for_helpers___ForRange_template;
    cpy_r_r311 = CPyType_FromTemplate(cpy_r_r310, cpy_r_r308, cpy_r_r309);
    CPy_DECREF(cpy_r_r308);
    if (unlikely(cpy_r_r311 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 892, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r312 = CPyDef_for_helpers___ForRange_trait_vtable_setup();
    if (unlikely(cpy_r_r312 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", -1, CPyStatic_for_helpers___globals);
        goto CPyL121;
    }
    cpy_r_r313 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r314 = CPyStatics[8309]; /* 'start_reg' */
    cpy_r_r315 = CPyStatics[8310]; /* 'end_reg' */
    cpy_r_r316 = CPyStatics[2441]; /* 'step' */
    cpy_r_r317 = CPyStatics[8311]; /* 'end_target' */
    cpy_r_r318 = CPyStatics[8312]; /* 'index_reg' */
    cpy_r_r319 = CPyStatics[8301]; /* 'index_target' */
    cpy_r_r320 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r321 = CPyStatics[56]; /* 'index' */
    cpy_r_r322 = CPyStatics[8291]; /* 'body_block' */
    cpy_r_r323 = CPyStatics[2272]; /* 'line' */
    cpy_r_r324 = CPyStatics[8292]; /* 'loop_exit' */
    cpy_r_r325 = PyTuple_Pack(11, cpy_r_r314, cpy_r_r315, cpy_r_r316, cpy_r_r317, cpy_r_r318, cpy_r_r319, cpy_r_r320, cpy_r_r321, cpy_r_r322, cpy_r_r323, cpy_r_r324);
    if (unlikely(cpy_r_r325 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 892, CPyStatic_for_helpers___globals);
        goto CPyL121;
    }
    cpy_r_r326 = PyObject_SetAttr(cpy_r_r311, cpy_r_r313, cpy_r_r325);
    CPy_DECREF(cpy_r_r325);
    cpy_r_r327 = cpy_r_r326 >= 0;
    if (unlikely(!cpy_r_r327)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 892, CPyStatic_for_helpers___globals);
        goto CPyL121;
    }
    CPyType_for_helpers___ForRange = (PyTypeObject *)cpy_r_r311;
    CPy_INCREF(CPyType_for_helpers___ForRange);
    cpy_r_r328 = CPyStatic_for_helpers___globals;
    cpy_r_r329 = CPyStatics[8313]; /* 'ForRange' */
    cpy_r_r330 = CPyDict_SetItem(cpy_r_r328, cpy_r_r329, cpy_r_r311);
    CPy_DECREF(cpy_r_r311);
    cpy_r_r331 = cpy_r_r330 >= 0;
    if (unlikely(!cpy_r_r331)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 892, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r332 = (PyObject *)CPyType_for_helpers___ForGenerator;
    cpy_r_r333 = PyTuple_Pack(1, cpy_r_r332);
    if (unlikely(cpy_r_r333 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 949, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r334 = CPyStatics[8248]; /* 'mypyc.irbuild.for_helpers' */
    cpy_r_r335 = (PyObject *)CPyType_for_helpers___ForInfiniteCounter_template;
    cpy_r_r336 = CPyType_FromTemplate(cpy_r_r335, cpy_r_r333, cpy_r_r334);
    CPy_DECREF(cpy_r_r333);
    if (unlikely(cpy_r_r336 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 949, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r337 = CPyDef_for_helpers___ForInfiniteCounter_trait_vtable_setup();
    if (unlikely(cpy_r_r337 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", -1, CPyStatic_for_helpers___globals);
        goto CPyL122;
    }
    cpy_r_r338 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r339 = CPyStatics[8312]; /* 'index_reg' */
    cpy_r_r340 = CPyStatics[8301]; /* 'index_target' */
    cpy_r_r341 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r342 = CPyStatics[56]; /* 'index' */
    cpy_r_r343 = CPyStatics[8291]; /* 'body_block' */
    cpy_r_r344 = CPyStatics[2272]; /* 'line' */
    cpy_r_r345 = CPyStatics[8292]; /* 'loop_exit' */
    cpy_r_r346 = PyTuple_Pack(7, cpy_r_r339, cpy_r_r340, cpy_r_r341, cpy_r_r342, cpy_r_r343, cpy_r_r344, cpy_r_r345);
    if (unlikely(cpy_r_r346 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 949, CPyStatic_for_helpers___globals);
        goto CPyL122;
    }
    cpy_r_r347 = PyObject_SetAttr(cpy_r_r336, cpy_r_r338, cpy_r_r346);
    CPy_DECREF(cpy_r_r346);
    cpy_r_r348 = cpy_r_r347 >= 0;
    if (unlikely(!cpy_r_r348)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 949, CPyStatic_for_helpers___globals);
        goto CPyL122;
    }
    CPyType_for_helpers___ForInfiniteCounter = (PyTypeObject *)cpy_r_r336;
    CPy_INCREF(CPyType_for_helpers___ForInfiniteCounter);
    cpy_r_r349 = CPyStatic_for_helpers___globals;
    cpy_r_r350 = CPyStatics[8314]; /* 'ForInfiniteCounter' */
    cpy_r_r351 = CPyDict_SetItem(cpy_r_r349, cpy_r_r350, cpy_r_r336);
    CPy_DECREF(cpy_r_r336);
    cpy_r_r352 = cpy_r_r351 >= 0;
    if (unlikely(!cpy_r_r352)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 949, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r353 = (PyObject *)CPyType_for_helpers___ForGenerator;
    cpy_r_r354 = PyTuple_Pack(1, cpy_r_r353);
    if (unlikely(cpy_r_r354 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 974, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r355 = CPyStatics[8248]; /* 'mypyc.irbuild.for_helpers' */
    cpy_r_r356 = (PyObject *)CPyType_for_helpers___ForEnumerate_template;
    cpy_r_r357 = CPyType_FromTemplate(cpy_r_r356, cpy_r_r354, cpy_r_r355);
    CPy_DECREF(cpy_r_r354);
    if (unlikely(cpy_r_r357 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 974, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r358 = CPyDef_for_helpers___ForEnumerate_trait_vtable_setup();
    if (unlikely(cpy_r_r358 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", -1, CPyStatic_for_helpers___globals);
        goto CPyL123;
    }
    cpy_r_r359 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r360 = CPyStatics[8315]; /* 'index_gen' */
    cpy_r_r361 = CPyStatics[8316]; /* 'main_gen' */
    cpy_r_r362 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r363 = CPyStatics[56]; /* 'index' */
    cpy_r_r364 = CPyStatics[8291]; /* 'body_block' */
    cpy_r_r365 = CPyStatics[2272]; /* 'line' */
    cpy_r_r366 = CPyStatics[8292]; /* 'loop_exit' */
    cpy_r_r367 = PyTuple_Pack(7, cpy_r_r360, cpy_r_r361, cpy_r_r362, cpy_r_r363, cpy_r_r364, cpy_r_r365, cpy_r_r366);
    if (unlikely(cpy_r_r367 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 974, CPyStatic_for_helpers___globals);
        goto CPyL123;
    }
    cpy_r_r368 = PyObject_SetAttr(cpy_r_r357, cpy_r_r359, cpy_r_r367);
    CPy_DECREF(cpy_r_r367);
    cpy_r_r369 = cpy_r_r368 >= 0;
    if (unlikely(!cpy_r_r369)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 974, CPyStatic_for_helpers___globals);
        goto CPyL123;
    }
    CPyType_for_helpers___ForEnumerate = (PyTypeObject *)cpy_r_r357;
    CPy_INCREF(CPyType_for_helpers___ForEnumerate);
    cpy_r_r370 = CPyStatic_for_helpers___globals;
    cpy_r_r371 = CPyStatics[8317]; /* 'ForEnumerate' */
    cpy_r_r372 = CPyDict_SetItem(cpy_r_r370, cpy_r_r371, cpy_r_r357);
    CPy_DECREF(cpy_r_r357);
    cpy_r_r373 = cpy_r_r372 >= 0;
    if (unlikely(!cpy_r_r373)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 974, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r374 = (PyObject *)CPyType_for_helpers___ForGenerator;
    cpy_r_r375 = PyTuple_Pack(1, cpy_r_r374);
    if (unlikely(cpy_r_r375 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 1010, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r376 = CPyStatics[8248]; /* 'mypyc.irbuild.for_helpers' */
    cpy_r_r377 = (PyObject *)CPyType_for_helpers___ForZip_template;
    cpy_r_r378 = CPyType_FromTemplate(cpy_r_r377, cpy_r_r375, cpy_r_r376);
    CPy_DECREF(cpy_r_r375);
    if (unlikely(cpy_r_r378 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 1010, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    cpy_r_r379 = CPyDef_for_helpers___ForZip_trait_vtable_setup();
    if (unlikely(cpy_r_r379 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", -1, CPyStatic_for_helpers___globals);
        goto CPyL124;
    }
    cpy_r_r380 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r381 = CPyStatics[8318]; /* 'cond_blocks' */
    cpy_r_r382 = CPyStatics[8319]; /* 'gens' */
    cpy_r_r383 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r384 = CPyStatics[56]; /* 'index' */
    cpy_r_r385 = CPyStatics[8291]; /* 'body_block' */
    cpy_r_r386 = CPyStatics[2272]; /* 'line' */
    cpy_r_r387 = CPyStatics[8292]; /* 'loop_exit' */
    cpy_r_r388 = PyTuple_Pack(7, cpy_r_r381, cpy_r_r382, cpy_r_r383, cpy_r_r384, cpy_r_r385, cpy_r_r386, cpy_r_r387);
    if (unlikely(cpy_r_r388 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 1010, CPyStatic_for_helpers___globals);
        goto CPyL124;
    }
    cpy_r_r389 = PyObject_SetAttr(cpy_r_r378, cpy_r_r380, cpy_r_r388);
    CPy_DECREF(cpy_r_r388);
    cpy_r_r390 = cpy_r_r389 >= 0;
    if (unlikely(!cpy_r_r390)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 1010, CPyStatic_for_helpers___globals);
        goto CPyL124;
    }
    CPyType_for_helpers___ForZip = (PyTypeObject *)cpy_r_r378;
    CPy_INCREF(CPyType_for_helpers___ForZip);
    cpy_r_r391 = CPyStatic_for_helpers___globals;
    cpy_r_r392 = CPyStatics[8320]; /* 'ForZip' */
    cpy_r_r393 = CPyDict_SetItem(cpy_r_r391, cpy_r_r392, cpy_r_r378);
    CPy_DECREF(cpy_r_r378);
    cpy_r_r394 = cpy_r_r393 >= 0;
    if (unlikely(!cpy_r_r394)) {
        CPy_AddTraceback("mypyc/irbuild/for_helpers.py", "<module>", 1010, CPyStatic_for_helpers___globals);
        goto CPyL111;
    }
    return 1;
CPyL111: ;
    cpy_r_r395 = 2;
    return cpy_r_r395;
CPyL112: ;
    CPy_DecRef(cpy_r_r63);
    goto CPyL111;
CPyL113: ;
    CPy_DecRef(cpy_r_r76);
    goto CPyL111;
CPyL114: ;
    CPy_DecRef(cpy_r_r95);
    goto CPyL111;
CPyL115: ;
    CPy_DecRef(cpy_r_r117);
    goto CPyL111;
CPyL116: ;
    CPy_DecRef(cpy_r_r140);
    goto CPyL111;
CPyL117: ;
    CPy_DecRef(cpy_r_r163);
    goto CPyL111;
CPyL118: ;
    CPy_DecRef(cpy_r_r188);
    goto CPyL111;
CPyL119: ;
    CPy_DecRef(cpy_r_r229);
    goto CPyL111;
CPyL120: ;
    CPy_DecRef(cpy_r_r270);
    goto CPyL111;
CPyL121: ;
    CPy_DecRef(cpy_r_r311);
    goto CPyL111;
CPyL122: ;
    CPy_DecRef(cpy_r_r336);
    goto CPyL111;
CPyL123: ;
    CPy_DecRef(cpy_r_r357);
    goto CPyL111;
CPyL124: ;
    CPy_DecRef(cpy_r_r378);
    goto CPyL111;
}
