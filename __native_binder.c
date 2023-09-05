#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
binder___Frame_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *binder___Frame_setup(PyTypeObject *type);
PyObject *CPyDef_binder___Frame(CPyTagged cpy_r_id, char cpy_r_conditional_frame);

static PyObject *
binder___Frame_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_binder___Frame) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = binder___Frame_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_binder___Frame_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
binder___Frame_traverse(mypy___binder___FrameObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_id)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_id));
    }
    Py_VISIT(self->_types);
    return 0;
}

static int
binder___Frame_clear(mypy___binder___FrameObject *self)
{
    if (CPyTagged_CheckLong(self->_id)) {
        CPyTagged __tmp = self->_id;
        self->_id = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_types);
    return 0;
}

static void
binder___Frame_dealloc(mypy___binder___FrameObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, binder___Frame_dealloc)
    binder___Frame_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem binder___Frame_vtable[2];
static bool
CPyDef_binder___Frame_trait_vtable_setup(void)
{
    CPyVTableItem binder___Frame_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_binder___Frame_____init__,
        (CPyVTableItem)CPyDef_binder___Frame_____repr__,
    };
    memcpy(binder___Frame_vtable, binder___Frame_vtable_scratch, sizeof(binder___Frame_vtable));
    return 1;
}

static PyObject *
binder___Frame_get_id(mypy___binder___FrameObject *self, void *closure);
static int
binder___Frame_set_id(mypy___binder___FrameObject *self, PyObject *value, void *closure);
static PyObject *
binder___Frame_get_types(mypy___binder___FrameObject *self, void *closure);
static int
binder___Frame_set_types(mypy___binder___FrameObject *self, PyObject *value, void *closure);
static PyObject *
binder___Frame_get_unreachable(mypy___binder___FrameObject *self, void *closure);
static int
binder___Frame_set_unreachable(mypy___binder___FrameObject *self, PyObject *value, void *closure);
static PyObject *
binder___Frame_get_conditional_frame(mypy___binder___FrameObject *self, void *closure);
static int
binder___Frame_set_conditional_frame(mypy___binder___FrameObject *self, PyObject *value, void *closure);
static PyObject *
binder___Frame_get_suppress_unreachable_warnings(mypy___binder___FrameObject *self, void *closure);
static int
binder___Frame_set_suppress_unreachable_warnings(mypy___binder___FrameObject *self, PyObject *value, void *closure);

static PyGetSetDef binder___Frame_getseters[] = {
    {"id",
     (getter)binder___Frame_get_id, (setter)binder___Frame_set_id,
     NULL, NULL},
    {"types",
     (getter)binder___Frame_get_types, (setter)binder___Frame_set_types,
     NULL, NULL},
    {"unreachable",
     (getter)binder___Frame_get_unreachable, (setter)binder___Frame_set_unreachable,
     NULL, NULL},
    {"conditional_frame",
     (getter)binder___Frame_get_conditional_frame, (setter)binder___Frame_set_conditional_frame,
     NULL, NULL},
    {"suppress_unreachable_warnings",
     (getter)binder___Frame_get_suppress_unreachable_warnings, (setter)binder___Frame_set_suppress_unreachable_warnings,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef binder___Frame_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_binder___Frame_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_binder___Frame_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_binder___Frame_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Frame",
    .tp_new = binder___Frame_new,
    .tp_dealloc = (destructor)binder___Frame_dealloc,
    .tp_traverse = (traverseproc)binder___Frame_traverse,
    .tp_clear = (inquiry)binder___Frame_clear,
    .tp_getset = binder___Frame_getseters,
    .tp_methods = binder___Frame_methods,
    .tp_init = binder___Frame_init,
    .tp_repr = CPyDef_binder___Frame_____repr__,
    .tp_basicsize = sizeof(mypy___binder___FrameObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_binder___Frame_template = &CPyType_binder___Frame_template_;

static PyObject *
binder___Frame_setup(PyTypeObject *type)
{
    mypy___binder___FrameObject *self;
    self = (mypy___binder___FrameObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = binder___Frame_vtable;
    self->_id = CPY_INT_TAG;
    self->_unreachable = 2;
    self->_conditional_frame = 2;
    self->_suppress_unreachable_warnings = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_binder___Frame(CPyTagged cpy_r_id, char cpy_r_conditional_frame)
{
    PyObject *self = binder___Frame_setup(CPyType_binder___Frame);
    if (self == NULL)
        return NULL;
    char res = CPyDef_binder___Frame_____init__(self, cpy_r_id, cpy_r_conditional_frame);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
binder___Frame_get_id(mypy___binder___FrameObject *self, void *closure)
{
    if (unlikely(self->_id == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'id' of 'Frame' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_id);
    PyObject *retval = CPyTagged_StealAsObject(self->_id);
    return retval;
}

static int
binder___Frame_set_id(mypy___binder___FrameObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Frame' object attribute 'id' cannot be deleted");
        return -1;
    }
    if (self->_id != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_id);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_id = tmp;
    return 0;
}

static PyObject *
binder___Frame_get_types(mypy___binder___FrameObject *self, void *closure)
{
    if (unlikely(self->_types == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'types' of 'Frame' undefined");
        return NULL;
    }
    CPy_INCREF(self->_types);
    PyObject *retval = self->_types;
    return retval;
}

static int
binder___Frame_set_types(mypy___binder___FrameObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Frame' object attribute 'types' cannot be deleted");
        return -1;
    }
    if (self->_types != NULL) {
        CPy_DECREF(self->_types);
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
    self->_types = tmp;
    return 0;
}

static PyObject *
binder___Frame_get_unreachable(mypy___binder___FrameObject *self, void *closure)
{
    PyObject *retval = self->_unreachable ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
binder___Frame_set_unreachable(mypy___binder___FrameObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Frame' object attribute 'unreachable' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_unreachable = tmp;
    return 0;
}

static PyObject *
binder___Frame_get_conditional_frame(mypy___binder___FrameObject *self, void *closure)
{
    PyObject *retval = self->_conditional_frame ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
binder___Frame_set_conditional_frame(mypy___binder___FrameObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Frame' object attribute 'conditional_frame' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_conditional_frame = tmp;
    return 0;
}

static PyObject *
binder___Frame_get_suppress_unreachable_warnings(mypy___binder___FrameObject *self, void *closure)
{
    PyObject *retval = self->_suppress_unreachable_warnings ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
binder___Frame_set_suppress_unreachable_warnings(mypy___binder___FrameObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Frame' object attribute 'suppress_unreachable_warnings' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_suppress_unreachable_warnings = tmp;
    return 0;
}

static int
binder___ConditionalTypeBinder_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *binder___ConditionalTypeBinder_setup(PyTypeObject *type);
PyObject *CPyDef_binder___ConditionalTypeBinder(void);

static PyObject *
binder___ConditionalTypeBinder_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_binder___ConditionalTypeBinder) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = binder___ConditionalTypeBinder_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_binder___ConditionalTypeBinder_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
binder___ConditionalTypeBinder_traverse(mypy___binder___ConditionalTypeBinderObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_type_assignments);
    if (CPyTagged_CheckLong(self->_next_id)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_next_id));
    }
    Py_VISIT(self->_frames);
    Py_VISIT(self->_options_on_return);
    Py_VISIT(self->_declarations);
    Py_VISIT(self->_dependencies);
    Py_VISIT(self->_try_frames);
    Py_VISIT(self->_break_frames);
    Py_VISIT(self->_continue_frames);
    return 0;
}

static int
binder___ConditionalTypeBinder_clear(mypy___binder___ConditionalTypeBinderObject *self)
{
    Py_CLEAR(self->_type_assignments);
    if (CPyTagged_CheckLong(self->_next_id)) {
        CPyTagged __tmp = self->_next_id;
        self->_next_id = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_frames);
    Py_CLEAR(self->_options_on_return);
    Py_CLEAR(self->_declarations);
    Py_CLEAR(self->_dependencies);
    Py_CLEAR(self->_try_frames);
    Py_CLEAR(self->_break_frames);
    Py_CLEAR(self->_continue_frames);
    return 0;
}

static void
binder___ConditionalTypeBinder_dealloc(mypy___binder___ConditionalTypeBinderObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, binder___ConditionalTypeBinder_dealloc)
    binder___ConditionalTypeBinder_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem binder___ConditionalTypeBinder_vtable[26];
static bool
CPyDef_binder___ConditionalTypeBinder_trait_vtable_setup(void)
{
    CPyVTableItem binder___ConditionalTypeBinder_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder_____init__,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder____get_id,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder____add_dependencies,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___push_frame,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder____put,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder____get,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___put,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___unreachable,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___suppress_unreachable_warnings,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___get,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___is_unreachable,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___is_unreachable_warning_suppressed,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___cleanse,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder____cleanse_key,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___update_from_options,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___pop_frame,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___accumulate_type_assignments,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___assign_type,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___invalidate_dependencies,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___most_recent_enclosing_type,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___allow_jump,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___handle_break,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___handle_continue,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___frame_context,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder___top_frame_context,
        (CPyVTableItem)CPyDef_binder___ConditionalTypeBinder_____mypyc_defaults_setup,
    };
    memcpy(binder___ConditionalTypeBinder_vtable, binder___ConditionalTypeBinder_vtable_scratch, sizeof(binder___ConditionalTypeBinder_vtable));
    return 1;
}

static PyObject *
binder___ConditionalTypeBinder_get_type_assignments(mypy___binder___ConditionalTypeBinderObject *self, void *closure);
static int
binder___ConditionalTypeBinder_set_type_assignments(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure);
static PyObject *
binder___ConditionalTypeBinder_get_next_id(mypy___binder___ConditionalTypeBinderObject *self, void *closure);
static int
binder___ConditionalTypeBinder_set_next_id(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure);
static PyObject *
binder___ConditionalTypeBinder_get_frames(mypy___binder___ConditionalTypeBinderObject *self, void *closure);
static int
binder___ConditionalTypeBinder_set_frames(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure);
static PyObject *
binder___ConditionalTypeBinder_get_options_on_return(mypy___binder___ConditionalTypeBinderObject *self, void *closure);
static int
binder___ConditionalTypeBinder_set_options_on_return(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure);
static PyObject *
binder___ConditionalTypeBinder_get_declarations(mypy___binder___ConditionalTypeBinderObject *self, void *closure);
static int
binder___ConditionalTypeBinder_set_declarations(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure);
static PyObject *
binder___ConditionalTypeBinder_get_dependencies(mypy___binder___ConditionalTypeBinderObject *self, void *closure);
static int
binder___ConditionalTypeBinder_set_dependencies(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure);
static PyObject *
binder___ConditionalTypeBinder_get_last_pop_changed(mypy___binder___ConditionalTypeBinderObject *self, void *closure);
static int
binder___ConditionalTypeBinder_set_last_pop_changed(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure);
static PyObject *
binder___ConditionalTypeBinder_get_try_frames(mypy___binder___ConditionalTypeBinderObject *self, void *closure);
static int
binder___ConditionalTypeBinder_set_try_frames(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure);
static PyObject *
binder___ConditionalTypeBinder_get_break_frames(mypy___binder___ConditionalTypeBinderObject *self, void *closure);
static int
binder___ConditionalTypeBinder_set_break_frames(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure);
static PyObject *
binder___ConditionalTypeBinder_get_continue_frames(mypy___binder___ConditionalTypeBinderObject *self, void *closure);
static int
binder___ConditionalTypeBinder_set_continue_frames(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure);

static PyGetSetDef binder___ConditionalTypeBinder_getseters[] = {
    {"type_assignments",
     (getter)binder___ConditionalTypeBinder_get_type_assignments, (setter)binder___ConditionalTypeBinder_set_type_assignments,
     NULL, NULL},
    {"next_id",
     (getter)binder___ConditionalTypeBinder_get_next_id, (setter)binder___ConditionalTypeBinder_set_next_id,
     NULL, NULL},
    {"frames",
     (getter)binder___ConditionalTypeBinder_get_frames, (setter)binder___ConditionalTypeBinder_set_frames,
     NULL, NULL},
    {"options_on_return",
     (getter)binder___ConditionalTypeBinder_get_options_on_return, (setter)binder___ConditionalTypeBinder_set_options_on_return,
     NULL, NULL},
    {"declarations",
     (getter)binder___ConditionalTypeBinder_get_declarations, (setter)binder___ConditionalTypeBinder_set_declarations,
     NULL, NULL},
    {"dependencies",
     (getter)binder___ConditionalTypeBinder_get_dependencies, (setter)binder___ConditionalTypeBinder_set_dependencies,
     NULL, NULL},
    {"last_pop_changed",
     (getter)binder___ConditionalTypeBinder_get_last_pop_changed, (setter)binder___ConditionalTypeBinder_set_last_pop_changed,
     NULL, NULL},
    {"try_frames",
     (getter)binder___ConditionalTypeBinder_get_try_frames, (setter)binder___ConditionalTypeBinder_set_try_frames,
     NULL, NULL},
    {"break_frames",
     (getter)binder___ConditionalTypeBinder_get_break_frames, (setter)binder___ConditionalTypeBinder_set_break_frames,
     NULL, NULL},
    {"continue_frames",
     (getter)binder___ConditionalTypeBinder_get_continue_frames, (setter)binder___ConditionalTypeBinder_set_continue_frames,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef binder___ConditionalTypeBinder_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_get_id",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder____get_id,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_add_dependencies",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder____add_dependencies,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"push_frame",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___push_frame,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_put",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder____put,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_get",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder____get,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"put",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___put,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"unreachable",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___unreachable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"suppress_unreachable_warnings",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___suppress_unreachable_warnings,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___get,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_unreachable",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___is_unreachable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_unreachable_warning_suppressed",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___is_unreachable_warning_suppressed,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"cleanse",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___cleanse,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_cleanse_key",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder____cleanse_key,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"update_from_options",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___update_from_options,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"pop_frame",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___pop_frame,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accumulate_type_assignments",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___accumulate_type_assignments,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"assign_type",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___assign_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"invalidate_dependencies",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___invalidate_dependencies,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"most_recent_enclosing_type",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___most_recent_enclosing_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"allow_jump",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___allow_jump,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"handle_break",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___handle_break,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"handle_continue",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___handle_continue,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"frame_context",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___frame_context,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"top_frame_context",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder___top_frame_context,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_binder___ConditionalTypeBinder_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_binder___ConditionalTypeBinder_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ConditionalTypeBinder",
    .tp_new = binder___ConditionalTypeBinder_new,
    .tp_dealloc = (destructor)binder___ConditionalTypeBinder_dealloc,
    .tp_traverse = (traverseproc)binder___ConditionalTypeBinder_traverse,
    .tp_clear = (inquiry)binder___ConditionalTypeBinder_clear,
    .tp_getset = binder___ConditionalTypeBinder_getseters,
    .tp_methods = binder___ConditionalTypeBinder_methods,
    .tp_init = binder___ConditionalTypeBinder_init,
    .tp_basicsize = sizeof(mypy___binder___ConditionalTypeBinderObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_binder___ConditionalTypeBinder_template = &CPyType_binder___ConditionalTypeBinder_template_;

static PyObject *
binder___ConditionalTypeBinder_setup(PyTypeObject *type)
{
    mypy___binder___ConditionalTypeBinderObject *self;
    self = (mypy___binder___ConditionalTypeBinderObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = binder___ConditionalTypeBinder_vtable;
    self->_next_id = CPY_INT_TAG;
    self->_last_pop_changed = 2;
    if (CPyDef_binder___ConditionalTypeBinder_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_binder___ConditionalTypeBinder(void)
{
    PyObject *self = binder___ConditionalTypeBinder_setup(CPyType_binder___ConditionalTypeBinder);
    if (self == NULL)
        return NULL;
    char res = CPyDef_binder___ConditionalTypeBinder_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
binder___ConditionalTypeBinder_get_type_assignments(mypy___binder___ConditionalTypeBinderObject *self, void *closure)
{
    if (unlikely(self->_type_assignments == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'type_assignments' of 'ConditionalTypeBinder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_type_assignments);
    PyObject *retval = self->_type_assignments;
    return retval;
}

static int
binder___ConditionalTypeBinder_set_type_assignments(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConditionalTypeBinder' object attribute 'type_assignments' cannot be deleted");
        return -1;
    }
    if (self->_type_assignments != NULL) {
        CPy_DECREF(self->_type_assignments);
    }
    PyObject *tmp;
    if (PyDict_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL22;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL22;
    CPy_TypeError("dict or None", value); 
    tmp = NULL;
__LL22: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_type_assignments = tmp;
    return 0;
}

static PyObject *
binder___ConditionalTypeBinder_get_next_id(mypy___binder___ConditionalTypeBinderObject *self, void *closure)
{
    if (unlikely(self->_next_id == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'next_id' of 'ConditionalTypeBinder' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_next_id);
    PyObject *retval = CPyTagged_StealAsObject(self->_next_id);
    return retval;
}

static int
binder___ConditionalTypeBinder_set_next_id(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConditionalTypeBinder' object attribute 'next_id' cannot be deleted");
        return -1;
    }
    if (self->_next_id != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_next_id);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_next_id = tmp;
    return 0;
}

static PyObject *
binder___ConditionalTypeBinder_get_frames(mypy___binder___ConditionalTypeBinderObject *self, void *closure)
{
    if (unlikely(self->_frames == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'frames' of 'ConditionalTypeBinder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_frames);
    PyObject *retval = self->_frames;
    return retval;
}

static int
binder___ConditionalTypeBinder_set_frames(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConditionalTypeBinder' object attribute 'frames' cannot be deleted");
        return -1;
    }
    if (self->_frames != NULL) {
        CPy_DECREF(self->_frames);
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
    self->_frames = tmp;
    return 0;
}

static PyObject *
binder___ConditionalTypeBinder_get_options_on_return(mypy___binder___ConditionalTypeBinderObject *self, void *closure)
{
    if (unlikely(self->_options_on_return == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options_on_return' of 'ConditionalTypeBinder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options_on_return);
    PyObject *retval = self->_options_on_return;
    return retval;
}

static int
binder___ConditionalTypeBinder_set_options_on_return(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConditionalTypeBinder' object attribute 'options_on_return' cannot be deleted");
        return -1;
    }
    if (self->_options_on_return != NULL) {
        CPy_DECREF(self->_options_on_return);
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
    self->_options_on_return = tmp;
    return 0;
}

static PyObject *
binder___ConditionalTypeBinder_get_declarations(mypy___binder___ConditionalTypeBinderObject *self, void *closure)
{
    if (unlikely(self->_declarations == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'declarations' of 'ConditionalTypeBinder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_declarations);
    PyObject *retval = self->_declarations;
    return retval;
}

static int
binder___ConditionalTypeBinder_set_declarations(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConditionalTypeBinder' object attribute 'declarations' cannot be deleted");
        return -1;
    }
    if (self->_declarations != NULL) {
        CPy_DECREF(self->_declarations);
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
    self->_declarations = tmp;
    return 0;
}

static PyObject *
binder___ConditionalTypeBinder_get_dependencies(mypy___binder___ConditionalTypeBinderObject *self, void *closure)
{
    if (unlikely(self->_dependencies == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'dependencies' of 'ConditionalTypeBinder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_dependencies);
    PyObject *retval = self->_dependencies;
    return retval;
}

static int
binder___ConditionalTypeBinder_set_dependencies(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConditionalTypeBinder' object attribute 'dependencies' cannot be deleted");
        return -1;
    }
    if (self->_dependencies != NULL) {
        CPy_DECREF(self->_dependencies);
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
    self->_dependencies = tmp;
    return 0;
}

static PyObject *
binder___ConditionalTypeBinder_get_last_pop_changed(mypy___binder___ConditionalTypeBinderObject *self, void *closure)
{
    if (unlikely(self->_last_pop_changed == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'last_pop_changed' of 'ConditionalTypeBinder' undefined");
        return NULL;
    }
    PyObject *retval = self->_last_pop_changed ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
binder___ConditionalTypeBinder_set_last_pop_changed(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConditionalTypeBinder' object attribute 'last_pop_changed' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_last_pop_changed = tmp;
    return 0;
}

static PyObject *
binder___ConditionalTypeBinder_get_try_frames(mypy___binder___ConditionalTypeBinderObject *self, void *closure)
{
    if (unlikely(self->_try_frames == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'try_frames' of 'ConditionalTypeBinder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_try_frames);
    PyObject *retval = self->_try_frames;
    return retval;
}

static int
binder___ConditionalTypeBinder_set_try_frames(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConditionalTypeBinder' object attribute 'try_frames' cannot be deleted");
        return -1;
    }
    if (self->_try_frames != NULL) {
        CPy_DECREF(self->_try_frames);
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
    self->_try_frames = tmp;
    return 0;
}

static PyObject *
binder___ConditionalTypeBinder_get_break_frames(mypy___binder___ConditionalTypeBinderObject *self, void *closure)
{
    if (unlikely(self->_break_frames == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'break_frames' of 'ConditionalTypeBinder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_break_frames);
    PyObject *retval = self->_break_frames;
    return retval;
}

static int
binder___ConditionalTypeBinder_set_break_frames(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConditionalTypeBinder' object attribute 'break_frames' cannot be deleted");
        return -1;
    }
    if (self->_break_frames != NULL) {
        CPy_DECREF(self->_break_frames);
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
    self->_break_frames = tmp;
    return 0;
}

static PyObject *
binder___ConditionalTypeBinder_get_continue_frames(mypy___binder___ConditionalTypeBinderObject *self, void *closure)
{
    if (unlikely(self->_continue_frames == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'continue_frames' of 'ConditionalTypeBinder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_continue_frames);
    PyObject *retval = self->_continue_frames;
    return retval;
}

static int
binder___ConditionalTypeBinder_set_continue_frames(mypy___binder___ConditionalTypeBinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConditionalTypeBinder' object attribute 'continue_frames' cannot be deleted");
        return -1;
    }
    if (self->_continue_frames != NULL) {
        CPy_DECREF(self->_continue_frames);
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
    self->_continue_frames = tmp;
    return 0;
}

static PyObject *binder___accumulate_type_assignments_ConditionalTypeBinder_env_setup(PyTypeObject *type);
PyObject *CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_env(void);

static PyObject *
binder___accumulate_type_assignments_ConditionalTypeBinder_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return binder___accumulate_type_assignments_ConditionalTypeBinder_env_setup(type);
}

static int
binder___accumulate_type_assignments_ConditionalTypeBinder_env_traverse(mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->_old_assignments);
    return 0;
}

static int
binder___accumulate_type_assignments_ConditionalTypeBinder_env_clear(mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_old_assignments);
    return 0;
}

static void
binder___accumulate_type_assignments_ConditionalTypeBinder_env_dealloc(mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, binder___accumulate_type_assignments_ConditionalTypeBinder_env_dealloc)
    binder___accumulate_type_assignments_ConditionalTypeBinder_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem binder___accumulate_type_assignments_ConditionalTypeBinder_env_vtable[1];
static bool
CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_env_trait_vtable_setup(void)
{
    CPyVTableItem binder___accumulate_type_assignments_ConditionalTypeBinder_env_vtable_scratch[] = {
        NULL
    };
    memcpy(binder___accumulate_type_assignments_ConditionalTypeBinder_env_vtable, binder___accumulate_type_assignments_ConditionalTypeBinder_env_vtable_scratch, sizeof(binder___accumulate_type_assignments_ConditionalTypeBinder_env_vtable));
    return 1;
}

static PyMethodDef binder___accumulate_type_assignments_ConditionalTypeBinder_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "accumulate_type_assignments_ConditionalTypeBinder_env",
    .tp_new = binder___accumulate_type_assignments_ConditionalTypeBinder_env_new,
    .tp_dealloc = (destructor)binder___accumulate_type_assignments_ConditionalTypeBinder_env_dealloc,
    .tp_traverse = (traverseproc)binder___accumulate_type_assignments_ConditionalTypeBinder_env_traverse,
    .tp_clear = (inquiry)binder___accumulate_type_assignments_ConditionalTypeBinder_env_clear,
    .tp_methods = binder___accumulate_type_assignments_ConditionalTypeBinder_env_methods,
    .tp_basicsize = sizeof(mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_env_template = &CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_env_template_;

static PyObject *
binder___accumulate_type_assignments_ConditionalTypeBinder_env_setup(PyTypeObject *type)
{
    mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *self;
    self = (mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = binder___accumulate_type_assignments_ConditionalTypeBinder_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_env(void)
{
    PyObject *self = binder___accumulate_type_assignments_ConditionalTypeBinder_env_setup(CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *binder___accumulate_type_assignments_ConditionalTypeBinder_gen_setup(PyTypeObject *type);
PyObject *CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen(void);

static PyObject *
binder___accumulate_type_assignments_ConditionalTypeBinder_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return binder___accumulate_type_assignments_ConditionalTypeBinder_gen_setup(type);
}

static int
binder___accumulate_type_assignments_ConditionalTypeBinder_gen_traverse(mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
binder___accumulate_type_assignments_ConditionalTypeBinder_gen_clear(mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
binder___accumulate_type_assignments_ConditionalTypeBinder_gen_dealloc(mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, binder___accumulate_type_assignments_ConditionalTypeBinder_gen_dealloc)
    binder___accumulate_type_assignments_ConditionalTypeBinder_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem binder___accumulate_type_assignments_ConditionalTypeBinder_gen_vtable[6];
static bool
CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_trait_vtable_setup(void)
{
    CPyVTableItem binder___accumulate_type_assignments_ConditionalTypeBinder_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____next__,
        (CPyVTableItem)CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen___send,
        (CPyVTableItem)CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____iter__,
        (CPyVTableItem)CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen___throw,
        (CPyVTableItem)CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen___close,
    };
    memcpy(binder___accumulate_type_assignments_ConditionalTypeBinder_gen_vtable, binder___accumulate_type_assignments_ConditionalTypeBinder_gen_vtable_scratch, sizeof(binder___accumulate_type_assignments_ConditionalTypeBinder_gen_vtable));
    return 1;
}

static PyMethodDef binder___accumulate_type_assignments_ConditionalTypeBinder_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_binder___accumulate_type_assignments_ConditionalTypeBinder_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_binder___accumulate_type_assignments_ConditionalTypeBinder_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_binder___accumulate_type_assignments_ConditionalTypeBinder_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "accumulate_type_assignments_ConditionalTypeBinder_gen",
    .tp_new = binder___accumulate_type_assignments_ConditionalTypeBinder_gen_new,
    .tp_dealloc = (destructor)binder___accumulate_type_assignments_ConditionalTypeBinder_gen_dealloc,
    .tp_traverse = (traverseproc)binder___accumulate_type_assignments_ConditionalTypeBinder_gen_traverse,
    .tp_clear = (inquiry)binder___accumulate_type_assignments_ConditionalTypeBinder_gen_clear,
    .tp_methods = binder___accumulate_type_assignments_ConditionalTypeBinder_gen_methods,
    .tp_iter = CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____iter__,
    .tp_iternext = CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____next__,
    .tp_basicsize = sizeof(mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_template = &CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_template_;

static PyObject *
binder___accumulate_type_assignments_ConditionalTypeBinder_gen_setup(PyTypeObject *type)
{
    mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_genObject *self;
    self = (mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = binder___accumulate_type_assignments_ConditionalTypeBinder_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen(void)
{
    PyObject *self = binder___accumulate_type_assignments_ConditionalTypeBinder_gen_setup(CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *binder___frame_context_ConditionalTypeBinder_env_setup(PyTypeObject *type);
PyObject *CPyDef_binder___frame_context_ConditionalTypeBinder_env(void);

static PyObject *
binder___frame_context_ConditionalTypeBinder_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_binder___frame_context_ConditionalTypeBinder_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return binder___frame_context_ConditionalTypeBinder_env_setup(type);
}

static int
binder___frame_context_ConditionalTypeBinder_env_traverse(mypy___binder___frame_context_ConditionalTypeBinder_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    if (CPyTagged_CheckLong(self->_fall_through)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_fall_through));
    }
    if (CPyTagged_CheckLong(self->_break_frame)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_break_frame));
    }
    if (CPyTagged_CheckLong(self->_continue_frame)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_continue_frame));
    }
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->_new_frame);
    return 0;
}

static int
binder___frame_context_ConditionalTypeBinder_env_clear(mypy___binder___frame_context_ConditionalTypeBinder_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    if (CPyTagged_CheckLong(self->_fall_through)) {
        CPyTagged __tmp = self->_fall_through;
        self->_fall_through = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_break_frame)) {
        CPyTagged __tmp = self->_break_frame;
        self->_break_frame = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_continue_frame)) {
        CPyTagged __tmp = self->_continue_frame;
        self->_continue_frame = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_new_frame);
    return 0;
}

static void
binder___frame_context_ConditionalTypeBinder_env_dealloc(mypy___binder___frame_context_ConditionalTypeBinder_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, binder___frame_context_ConditionalTypeBinder_env_dealloc)
    binder___frame_context_ConditionalTypeBinder_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem binder___frame_context_ConditionalTypeBinder_env_vtable[1];
static bool
CPyDef_binder___frame_context_ConditionalTypeBinder_env_trait_vtable_setup(void)
{
    CPyVTableItem binder___frame_context_ConditionalTypeBinder_env_vtable_scratch[] = {
        NULL
    };
    memcpy(binder___frame_context_ConditionalTypeBinder_env_vtable, binder___frame_context_ConditionalTypeBinder_env_vtable_scratch, sizeof(binder___frame_context_ConditionalTypeBinder_env_vtable));
    return 1;
}

static PyMethodDef binder___frame_context_ConditionalTypeBinder_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_binder___frame_context_ConditionalTypeBinder_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "frame_context_ConditionalTypeBinder_env",
    .tp_new = binder___frame_context_ConditionalTypeBinder_env_new,
    .tp_dealloc = (destructor)binder___frame_context_ConditionalTypeBinder_env_dealloc,
    .tp_traverse = (traverseproc)binder___frame_context_ConditionalTypeBinder_env_traverse,
    .tp_clear = (inquiry)binder___frame_context_ConditionalTypeBinder_env_clear,
    .tp_methods = binder___frame_context_ConditionalTypeBinder_env_methods,
    .tp_basicsize = sizeof(mypy___binder___frame_context_ConditionalTypeBinder_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_binder___frame_context_ConditionalTypeBinder_env_template = &CPyType_binder___frame_context_ConditionalTypeBinder_env_template_;

static PyObject *
binder___frame_context_ConditionalTypeBinder_env_setup(PyTypeObject *type)
{
    mypy___binder___frame_context_ConditionalTypeBinder_envObject *self;
    self = (mypy___binder___frame_context_ConditionalTypeBinder_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = binder___frame_context_ConditionalTypeBinder_env_vtable;
    self->_can_skip = 2;
    self->_fall_through = CPY_INT_TAG;
    self->_break_frame = CPY_INT_TAG;
    self->_continue_frame = CPY_INT_TAG;
    self->_conditional_frame = 2;
    self->_try_frame = 2;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_binder___frame_context_ConditionalTypeBinder_env(void)
{
    PyObject *self = binder___frame_context_ConditionalTypeBinder_env_setup(CPyType_binder___frame_context_ConditionalTypeBinder_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *binder___frame_context_ConditionalTypeBinder_gen_setup(PyTypeObject *type);
PyObject *CPyDef_binder___frame_context_ConditionalTypeBinder_gen(void);

static PyObject *
binder___frame_context_ConditionalTypeBinder_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_binder___frame_context_ConditionalTypeBinder_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return binder___frame_context_ConditionalTypeBinder_gen_setup(type);
}

static int
binder___frame_context_ConditionalTypeBinder_gen_traverse(mypy___binder___frame_context_ConditionalTypeBinder_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
binder___frame_context_ConditionalTypeBinder_gen_clear(mypy___binder___frame_context_ConditionalTypeBinder_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
binder___frame_context_ConditionalTypeBinder_gen_dealloc(mypy___binder___frame_context_ConditionalTypeBinder_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, binder___frame_context_ConditionalTypeBinder_gen_dealloc)
    binder___frame_context_ConditionalTypeBinder_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem binder___frame_context_ConditionalTypeBinder_gen_vtable[6];
static bool
CPyDef_binder___frame_context_ConditionalTypeBinder_gen_trait_vtable_setup(void)
{
    CPyVTableItem binder___frame_context_ConditionalTypeBinder_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_binder___frame_context_ConditionalTypeBinder_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_binder___frame_context_ConditionalTypeBinder_gen_____next__,
        (CPyVTableItem)CPyDef_binder___frame_context_ConditionalTypeBinder_gen___send,
        (CPyVTableItem)CPyDef_binder___frame_context_ConditionalTypeBinder_gen_____iter__,
        (CPyVTableItem)CPyDef_binder___frame_context_ConditionalTypeBinder_gen___throw,
        (CPyVTableItem)CPyDef_binder___frame_context_ConditionalTypeBinder_gen___close,
    };
    memcpy(binder___frame_context_ConditionalTypeBinder_gen_vtable, binder___frame_context_ConditionalTypeBinder_gen_vtable_scratch, sizeof(binder___frame_context_ConditionalTypeBinder_gen_vtable));
    return 1;
}

static PyMethodDef binder___frame_context_ConditionalTypeBinder_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_binder___frame_context_ConditionalTypeBinder_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_binder___frame_context_ConditionalTypeBinder_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_binder___frame_context_ConditionalTypeBinder_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_binder___frame_context_ConditionalTypeBinder_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_binder___frame_context_ConditionalTypeBinder_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_binder___frame_context_ConditionalTypeBinder_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_binder___frame_context_ConditionalTypeBinder_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "frame_context_ConditionalTypeBinder_gen",
    .tp_new = binder___frame_context_ConditionalTypeBinder_gen_new,
    .tp_dealloc = (destructor)binder___frame_context_ConditionalTypeBinder_gen_dealloc,
    .tp_traverse = (traverseproc)binder___frame_context_ConditionalTypeBinder_gen_traverse,
    .tp_clear = (inquiry)binder___frame_context_ConditionalTypeBinder_gen_clear,
    .tp_methods = binder___frame_context_ConditionalTypeBinder_gen_methods,
    .tp_iter = CPyDef_binder___frame_context_ConditionalTypeBinder_gen_____iter__,
    .tp_iternext = CPyDef_binder___frame_context_ConditionalTypeBinder_gen_____next__,
    .tp_basicsize = sizeof(mypy___binder___frame_context_ConditionalTypeBinder_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_binder___frame_context_ConditionalTypeBinder_gen_template = &CPyType_binder___frame_context_ConditionalTypeBinder_gen_template_;

static PyObject *
binder___frame_context_ConditionalTypeBinder_gen_setup(PyTypeObject *type)
{
    mypy___binder___frame_context_ConditionalTypeBinder_genObject *self;
    self = (mypy___binder___frame_context_ConditionalTypeBinder_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = binder___frame_context_ConditionalTypeBinder_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_binder___frame_context_ConditionalTypeBinder_gen(void)
{
    PyObject *self = binder___frame_context_ConditionalTypeBinder_gen_setup(CPyType_binder___frame_context_ConditionalTypeBinder_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *binder___top_frame_context_ConditionalTypeBinder_env_setup(PyTypeObject *type);
PyObject *CPyDef_binder___top_frame_context_ConditionalTypeBinder_env(void);

static PyObject *
binder___top_frame_context_ConditionalTypeBinder_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_binder___top_frame_context_ConditionalTypeBinder_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return binder___top_frame_context_ConditionalTypeBinder_env_setup(type);
}

static int
binder___top_frame_context_ConditionalTypeBinder_env_traverse(mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
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
binder___top_frame_context_ConditionalTypeBinder_env_clear(mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
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
binder___top_frame_context_ConditionalTypeBinder_env_dealloc(mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, binder___top_frame_context_ConditionalTypeBinder_env_dealloc)
    binder___top_frame_context_ConditionalTypeBinder_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem binder___top_frame_context_ConditionalTypeBinder_env_vtable[1];
static bool
CPyDef_binder___top_frame_context_ConditionalTypeBinder_env_trait_vtable_setup(void)
{
    CPyVTableItem binder___top_frame_context_ConditionalTypeBinder_env_vtable_scratch[] = {
        NULL
    };
    memcpy(binder___top_frame_context_ConditionalTypeBinder_env_vtable, binder___top_frame_context_ConditionalTypeBinder_env_vtable_scratch, sizeof(binder___top_frame_context_ConditionalTypeBinder_env_vtable));
    return 1;
}

static PyMethodDef binder___top_frame_context_ConditionalTypeBinder_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_binder___top_frame_context_ConditionalTypeBinder_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "top_frame_context_ConditionalTypeBinder_env",
    .tp_new = binder___top_frame_context_ConditionalTypeBinder_env_new,
    .tp_dealloc = (destructor)binder___top_frame_context_ConditionalTypeBinder_env_dealloc,
    .tp_traverse = (traverseproc)binder___top_frame_context_ConditionalTypeBinder_env_traverse,
    .tp_clear = (inquiry)binder___top_frame_context_ConditionalTypeBinder_env_clear,
    .tp_methods = binder___top_frame_context_ConditionalTypeBinder_env_methods,
    .tp_basicsize = sizeof(mypy___binder___top_frame_context_ConditionalTypeBinder_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_binder___top_frame_context_ConditionalTypeBinder_env_template = &CPyType_binder___top_frame_context_ConditionalTypeBinder_env_template_;

static PyObject *
binder___top_frame_context_ConditionalTypeBinder_env_setup(PyTypeObject *type)
{
    mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *self;
    self = (mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = binder___top_frame_context_ConditionalTypeBinder_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_binder___top_frame_context_ConditionalTypeBinder_env(void)
{
    PyObject *self = binder___top_frame_context_ConditionalTypeBinder_env_setup(CPyType_binder___top_frame_context_ConditionalTypeBinder_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *binder___top_frame_context_ConditionalTypeBinder_gen_setup(PyTypeObject *type);
PyObject *CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen(void);

static PyObject *
binder___top_frame_context_ConditionalTypeBinder_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_binder___top_frame_context_ConditionalTypeBinder_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return binder___top_frame_context_ConditionalTypeBinder_gen_setup(type);
}

static int
binder___top_frame_context_ConditionalTypeBinder_gen_traverse(mypy___binder___top_frame_context_ConditionalTypeBinder_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
binder___top_frame_context_ConditionalTypeBinder_gen_clear(mypy___binder___top_frame_context_ConditionalTypeBinder_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
binder___top_frame_context_ConditionalTypeBinder_gen_dealloc(mypy___binder___top_frame_context_ConditionalTypeBinder_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, binder___top_frame_context_ConditionalTypeBinder_gen_dealloc)
    binder___top_frame_context_ConditionalTypeBinder_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem binder___top_frame_context_ConditionalTypeBinder_gen_vtable[6];
static bool
CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen_trait_vtable_setup(void)
{
    CPyVTableItem binder___top_frame_context_ConditionalTypeBinder_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen_____next__,
        (CPyVTableItem)CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen___send,
        (CPyVTableItem)CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen_____iter__,
        (CPyVTableItem)CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen___throw,
        (CPyVTableItem)CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen___close,
    };
    memcpy(binder___top_frame_context_ConditionalTypeBinder_gen_vtable, binder___top_frame_context_ConditionalTypeBinder_gen_vtable_scratch, sizeof(binder___top_frame_context_ConditionalTypeBinder_gen_vtable));
    return 1;
}

static PyMethodDef binder___top_frame_context_ConditionalTypeBinder_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_binder___top_frame_context_ConditionalTypeBinder_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_binder___top_frame_context_ConditionalTypeBinder_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_binder___top_frame_context_ConditionalTypeBinder_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_binder___top_frame_context_ConditionalTypeBinder_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_binder___top_frame_context_ConditionalTypeBinder_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_binder___top_frame_context_ConditionalTypeBinder_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_binder___top_frame_context_ConditionalTypeBinder_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "top_frame_context_ConditionalTypeBinder_gen",
    .tp_new = binder___top_frame_context_ConditionalTypeBinder_gen_new,
    .tp_dealloc = (destructor)binder___top_frame_context_ConditionalTypeBinder_gen_dealloc,
    .tp_traverse = (traverseproc)binder___top_frame_context_ConditionalTypeBinder_gen_traverse,
    .tp_clear = (inquiry)binder___top_frame_context_ConditionalTypeBinder_gen_clear,
    .tp_methods = binder___top_frame_context_ConditionalTypeBinder_gen_methods,
    .tp_iter = CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen_____iter__,
    .tp_iternext = CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen_____next__,
    .tp_basicsize = sizeof(mypy___binder___top_frame_context_ConditionalTypeBinder_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_binder___top_frame_context_ConditionalTypeBinder_gen_template = &CPyType_binder___top_frame_context_ConditionalTypeBinder_gen_template_;

static PyObject *
binder___top_frame_context_ConditionalTypeBinder_gen_setup(PyTypeObject *type)
{
    mypy___binder___top_frame_context_ConditionalTypeBinder_genObject *self;
    self = (mypy___binder___top_frame_context_ConditionalTypeBinder_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = binder___top_frame_context_ConditionalTypeBinder_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen(void)
{
    PyObject *self = binder___top_frame_context_ConditionalTypeBinder_gen_setup(CPyType_binder___top_frame_context_ConditionalTypeBinder_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef bindermodule_methods[] = {
    {"get_declaration", (PyCFunction)CPyPy_binder___get_declaration, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef bindermodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.binder",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    bindermodule_methods
};

PyObject *CPyInit_mypy___binder(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___binder_internal) {
        Py_INCREF(CPyModule_mypy___binder_internal);
        return CPyModule_mypy___binder_internal;
    }
    CPyModule_mypy___binder_internal = PyModule_Create(&bindermodule);
    if (unlikely(CPyModule_mypy___binder_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___binder_internal, "__name__");
    CPyStatic_binder___globals = PyModule_GetDict(CPyModule_mypy___binder_internal);
    if (unlikely(CPyStatic_binder___globals == NULL))
        goto fail;
    CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_env_template, NULL, modname);
    if (unlikely(!CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_env))
        goto fail;
    CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_template, NULL, modname);
    if (unlikely(!CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_gen))
        goto fail;
    CPyType_binder___frame_context_ConditionalTypeBinder_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_binder___frame_context_ConditionalTypeBinder_env_template, NULL, modname);
    if (unlikely(!CPyType_binder___frame_context_ConditionalTypeBinder_env))
        goto fail;
    CPyType_binder___frame_context_ConditionalTypeBinder_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_binder___frame_context_ConditionalTypeBinder_gen_template, NULL, modname);
    if (unlikely(!CPyType_binder___frame_context_ConditionalTypeBinder_gen))
        goto fail;
    CPyType_binder___top_frame_context_ConditionalTypeBinder_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_binder___top_frame_context_ConditionalTypeBinder_env_template, NULL, modname);
    if (unlikely(!CPyType_binder___top_frame_context_ConditionalTypeBinder_env))
        goto fail;
    CPyType_binder___top_frame_context_ConditionalTypeBinder_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_binder___top_frame_context_ConditionalTypeBinder_gen_template, NULL, modname);
    if (unlikely(!CPyType_binder___top_frame_context_ConditionalTypeBinder_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_binder_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___binder_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___binder_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_binder___Frame);
    Py_CLEAR(CPyType_binder___ConditionalTypeBinder);
    Py_CLEAR(CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_env);
    Py_CLEAR(CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_gen);
    Py_CLEAR(CPyType_binder___frame_context_ConditionalTypeBinder_env);
    Py_CLEAR(CPyType_binder___frame_context_ConditionalTypeBinder_gen);
    Py_CLEAR(CPyType_binder___top_frame_context_ConditionalTypeBinder_env);
    Py_CLEAR(CPyType_binder___top_frame_context_ConditionalTypeBinder_gen);
    return NULL;
}

char CPyDef_binder___Frame_____init__(PyObject *cpy_r_self, CPyTagged cpy_r_id, char cpy_r_conditional_frame) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    if (cpy_r_conditional_frame != 2) goto CPyL2;
    cpy_r_conditional_frame = 0;
CPyL2: ;
    CPyTagged_INCREF(cpy_r_id);
    ((mypy___binder___FrameObject *)cpy_r_self)->_id = cpy_r_id;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 42, CPyStatic_binder___globals);
        goto CPyL4;
    }
    ((mypy___binder___FrameObject *)cpy_r_self)->_types = cpy_r_r0;
    ((mypy___binder___FrameObject *)cpy_r_self)->_unreachable = 0;
    ((mypy___binder___FrameObject *)cpy_r_self)->_conditional_frame = cpy_r_conditional_frame;
    ((mypy___binder___FrameObject *)cpy_r_self)->_suppress_unreachable_warnings = 0;
    return 1;
CPyL4: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_binder___Frame_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"id", "conditional_frame", 0};
    PyObject *obj_id;
    PyObject *obj_conditional_frame = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|O", "__init__", kwlist, &obj_id, &obj_conditional_frame)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___Frame))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.Frame", obj_self); 
        goto fail;
    }
    CPyTagged arg_id;
    if (likely(PyLong_Check(obj_id)))
        arg_id = CPyTagged_BorrowFromObject(obj_id);
    else {
        CPy_TypeError("int", obj_id); goto fail;
    }
    char arg_conditional_frame;
    if (obj_conditional_frame == NULL) {
        arg_conditional_frame = 2;
    } else if (unlikely(!PyBool_Check(obj_conditional_frame))) {
        CPy_TypeError("bool", obj_conditional_frame); goto fail;
    } else
        arg_conditional_frame = obj_conditional_frame == Py_True;
    char retval = CPyDef_binder___Frame_____init__(arg_self, arg_id, arg_conditional_frame);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "__init__", 40, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___Frame_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = CPyStatics[70]; /* 'Frame(' */
    cpy_r_r1 = ((mypy___binder___FrameObject *)cpy_r_self)->_id;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyTagged_Str(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "__repr__", 55, CPyStatic_binder___globals);
        goto CPyL6;
    }
    cpy_r_r3 = CPyStatics[71]; /* ', ' */
    cpy_r_r4 = ((mypy___binder___FrameObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = PyObject_Str(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "__repr__", 55, CPyStatic_binder___globals);
        goto CPyL7;
    }
    cpy_r_r6 = CPyStatics[71]; /* ', ' */
    cpy_r_r7 = ((mypy___binder___FrameObject *)cpy_r_self)->_unreachable;
    cpy_r_r8 = cpy_r_r7 ? Py_True : Py_False;
    cpy_r_r9 = PyObject_Str(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "__repr__", 55, CPyStatic_binder___globals);
        goto CPyL8;
    }
    cpy_r_r10 = CPyStatics[71]; /* ', ' */
    cpy_r_r11 = ((mypy___binder___FrameObject *)cpy_r_self)->_conditional_frame;
    cpy_r_r12 = cpy_r_r11 ? Py_True : Py_False;
    cpy_r_r13 = PyObject_Str(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "__repr__", 55, CPyStatic_binder___globals);
        goto CPyL9;
    }
    cpy_r_r14 = CPyStatics[72]; /* ')' */
    cpy_r_r15 = CPyStr_Build(9, cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r5, cpy_r_r6, cpy_r_r9, cpy_r_r10, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "__repr__", 55, CPyStatic_binder___globals);
        goto CPyL6;
    }
    return cpy_r_r15;
CPyL6: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    goto CPyL6;
}

PyObject *CPyPy_binder___Frame_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___Frame))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.Frame", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_binder___Frame_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "__repr__", 54, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder_____init__(PyObject *cpy_r_self) {
    CPyTagged cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_next_id = 2;
    cpy_r_r0 = CPyDef_binder___ConditionalTypeBinder____get_id(cpy_r_self);
    if (unlikely(cpy_r_r0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 95, CPyStatic_binder___globals);
        goto CPyL18;
    }
    cpy_r_r1 = 2;
    cpy_r_r2 = CPyDef_binder___Frame(cpy_r_r0, cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 95, CPyStatic_binder___globals);
        goto CPyL18;
    }
    cpy_r_r3 = PyList_New(1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 95, CPyStatic_binder___globals);
        goto CPyL19;
    }
    cpy_r_r4 = (CPyPtr)&((PyListObject *)cpy_r_r3)->ob_item;
    cpy_r_r5 = *(CPyPtr *)cpy_r_r4;
    *(PyObject * *)cpy_r_r5 = cpy_r_r2;
    if (((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames != NULL) {
        CPy_DECREF(((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames);
    }
    ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames = cpy_r_r3;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 95, CPyStatic_binder___globals);
        goto CPyL18;
    }
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 102, CPyStatic_binder___globals);
        goto CPyL18;
    }
    if (((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_options_on_return != NULL) {
        CPy_DECREF(((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_options_on_return);
    }
    ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_options_on_return = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 102, CPyStatic_binder___globals);
        goto CPyL18;
    }
    cpy_r_r9 = PyDict_New();
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 106, CPyStatic_binder___globals);
        goto CPyL18;
    }
    if (((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_declarations != NULL) {
        CPy_DECREF(((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_declarations);
    }
    ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_declarations = cpy_r_r9;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 106, CPyStatic_binder___globals);
        goto CPyL18;
    }
    cpy_r_r11 = PyDict_New();
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 109, CPyStatic_binder___globals);
        goto CPyL18;
    }
    if (((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_dependencies != NULL) {
        CPy_DECREF(((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_dependencies);
    }
    ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_dependencies = cpy_r_r11;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 109, CPyStatic_binder___globals);
        goto CPyL18;
    }
    ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_last_pop_changed = 0;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 112, CPyStatic_binder___globals);
        goto CPyL18;
    }
    cpy_r_r14 = PySet_New(NULL);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 114, CPyStatic_binder___globals);
        goto CPyL18;
    }
    if (((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_try_frames != NULL) {
        CPy_DECREF(((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_try_frames);
    }
    ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_try_frames = cpy_r_r14;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 114, CPyStatic_binder___globals);
        goto CPyL18;
    }
    cpy_r_r16 = PyList_New(0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 115, CPyStatic_binder___globals);
        goto CPyL18;
    }
    if (((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_break_frames != NULL) {
        CPy_DECREF(((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_break_frames);
    }
    ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_break_frames = cpy_r_r16;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 115, CPyStatic_binder___globals);
        goto CPyL18;
    }
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 116, CPyStatic_binder___globals);
        goto CPyL18;
    }
    if (((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_continue_frames != NULL) {
        CPy_DECREF(((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_continue_frames);
    }
    ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_continue_frames = cpy_r_r18;
    cpy_r_r19 = 1;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/binder.py", "__init__", 116, CPyStatic_binder___globals);
        goto CPyL18;
    }
    return 1;
CPyL18: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL19: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL18;
}

PyObject *CPyPy_binder___ConditionalTypeBinder_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    char retval = CPyDef_binder___ConditionalTypeBinder_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "__init__", 86, CPyStatic_binder___globals);
    return NULL;
}

CPyTagged CPyDef_binder___ConditionalTypeBinder____get_id(PyObject *cpy_r_self) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    CPyTagged cpy_r_r3;
    cpy_r_r0 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_next_id;
    cpy_r_r1 = CPyTagged_Add(cpy_r_r0, 2);
    CPyTagged_DECREF(((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_next_id);
    ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_next_id = cpy_r_r1;
    cpy_r_r3 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_next_id;
    CPyTagged_INCREF(cpy_r_r3);
    return cpy_r_r3;
}

PyObject *CPyPy_binder___ConditionalTypeBinder____get_id(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":_get_id", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_binder___ConditionalTypeBinder____get_id(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "_get_id", 118, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder____add_dependencies(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_elt;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    if (cpy_r_value != NULL) goto CPyL18;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_value == cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL19;
    } else
        goto CPyL4;
CPyL3: ;
    CPy_INCREF(cpy_r_key);
    cpy_r_value = cpy_r_key;
    goto CPyL9;
CPyL4: ;
    cpy_r_r3 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_dependencies;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "_add_dependencies", "ConditionalTypeBinder", "dependencies", 126, CPyStatic_binder___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r3);
CPyL5: ;
    cpy_r_r4 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r3, cpy_r_key, 3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "_add_dependencies", 126, CPyStatic_binder___globals);
        goto CPyL20;
    }
    if (likely(PySet_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "_add_dependencies", 126, CPyStatic_binder___globals, "set", cpy_r_r4);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_value);
    if (likely(cpy_r_value != Py_None))
        cpy_r_r6 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "_add_dependencies", 126, CPyStatic_binder___globals, "tuple", cpy_r_value);
        goto CPyL21;
    }
    cpy_r_r7 = PySet_Add(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/binder.py", "_add_dependencies", 126, CPyStatic_binder___globals);
        goto CPyL20;
    }
CPyL9: ;
    cpy_r_r9 = CPyDef_mypy___literals___subkeys(cpy_r_key);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "_add_dependencies", 127, CPyStatic_binder___globals);
        goto CPyL20;
    }
    cpy_r_r10 = PyObject_GetIter(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "_add_dependencies", 127, CPyStatic_binder___globals);
        goto CPyL20;
    }
CPyL11: ;
    cpy_r_r11 = PyIter_Next(cpy_r_r10);
    if (cpy_r_r11 == NULL) goto CPyL22;
    if (likely(PyTuple_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "_add_dependencies", 127, CPyStatic_binder___globals, "tuple", cpy_r_r11);
        goto CPyL23;
    }
    cpy_r_elt = cpy_r_r12;
    CPy_INCREF(cpy_r_value);
    if (likely(cpy_r_value != Py_None))
        cpy_r_r13 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "_add_dependencies", 128, CPyStatic_binder___globals, "tuple", cpy_r_value);
        goto CPyL24;
    }
    cpy_r_r14 = CPyDef_binder___ConditionalTypeBinder____add_dependencies(cpy_r_self, cpy_r_elt, cpy_r_r13);
    CPy_DECREF(cpy_r_elt);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "_add_dependencies", 128, CPyStatic_binder___globals);
        goto CPyL23;
    } else
        goto CPyL11;
CPyL15: ;
    cpy_r_r15 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/binder.py", "_add_dependencies", 127, CPyStatic_binder___globals);
        goto CPyL17;
    }
    return 1;
CPyL17: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL18: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL19: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL3;
CPyL20: ;
    CPy_DecRef(cpy_r_value);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r5);
    goto CPyL17;
CPyL22: ;
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_r10);
    goto CPyL15;
CPyL23: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r10);
    goto CPyL17;
CPyL24: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_elt);
    goto CPyL17;
}

PyObject *CPyPy_binder___ConditionalTypeBinder____add_dependencies(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", "value", 0};
    static CPyArg_Parser parser = {"O|O:_add_dependencies", kwlist, 0};
    PyObject *obj_key;
    PyObject *obj_value = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_key, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    PyObject * arg_key;
    if (likely(PyTuple_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("tuple", obj_key); 
        goto fail;
    }
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
        goto __LL23;
    }
    if (PyTuple_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL23;
    if (obj_value == Py_None)
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL23;
    CPy_TypeError("tuple or None", obj_value); 
    goto fail;
__LL23: ;
    char retval = CPyDef_binder___ConditionalTypeBinder____add_dependencies(arg_self, arg_key, arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "_add_dependencies", 122, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___ConditionalTypeBinder___push_frame(PyObject *cpy_r_self, char cpy_r_conditional_frame) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    if (cpy_r_conditional_frame != 2) goto CPyL2;
    cpy_r_conditional_frame = 0;
CPyL2: ;
    cpy_r_r0 = CPyDef_binder___ConditionalTypeBinder____get_id(cpy_r_self);
    if (unlikely(cpy_r_r0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/binder.py", "push_frame", 132, CPyStatic_binder___globals);
        goto CPyL10;
    }
    cpy_r_r1 = CPyDef_binder___Frame(cpy_r_r0, cpy_r_conditional_frame);
    CPyTagged_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "push_frame", 132, CPyStatic_binder___globals);
        goto CPyL10;
    }
    cpy_r_f = cpy_r_r1;
    cpy_r_r2 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "push_frame", "ConditionalTypeBinder", "frames", 133, CPyStatic_binder___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r2);
CPyL5: ;
    cpy_r_r3 = PyList_Append(cpy_r_r2, cpy_r_f);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/binder.py", "push_frame", 133, CPyStatic_binder___globals);
        goto CPyL11;
    }
    cpy_r_r5 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_options_on_return;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "push_frame", "ConditionalTypeBinder", "options_on_return", 134, CPyStatic_binder___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r5);
CPyL7: ;
    cpy_r_r6 = PyList_New(0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "push_frame", 134, CPyStatic_binder___globals);
        goto CPyL12;
    }
    cpy_r_r7 = PyList_Append(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/binder.py", "push_frame", 134, CPyStatic_binder___globals);
        goto CPyL11;
    }
    return cpy_r_f;
CPyL10: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL11: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_f);
    CPy_DecRef(cpy_r_r5);
    goto CPyL10;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___push_frame(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"conditional_frame", 0};
    static CPyArg_Parser parser = {"|O:push_frame", kwlist, 0};
    PyObject *obj_conditional_frame = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_conditional_frame)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    char arg_conditional_frame;
    if (obj_conditional_frame == NULL) {
        arg_conditional_frame = 2;
    } else if (unlikely(!PyBool_Check(obj_conditional_frame))) {
        CPy_TypeError("bool", obj_conditional_frame); goto fail;
    } else
        arg_conditional_frame = obj_conditional_frame == Py_True;
    PyObject *retval = CPyDef_binder___ConditionalTypeBinder___push_frame(arg_self, arg_conditional_frame);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "push_frame", 130, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder____put(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_type, CPyTagged cpy_r_index) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    if (cpy_r_index != CPY_INT_TAG) goto CPyL8;
    cpy_r_index = -2;
CPyL2: ;
    cpy_r_r0 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "_put", "ConditionalTypeBinder", "frames", 138, CPyStatic_binder___globals);
        goto CPyL9;
    }
CPyL3: ;
    cpy_r_r1 = CPyList_GetItemBorrow(cpy_r_r0, cpy_r_index);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "_put", 138, CPyStatic_binder___globals);
        goto CPyL9;
    }
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_binder___Frame))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "_put", 138, CPyStatic_binder___globals, "mypy.binder.Frame", cpy_r_r1);
        goto CPyL9;
    }
    cpy_r_r3 = ((mypy___binder___FrameObject *)cpy_r_r2)->_types;
    CPy_INCREF(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_index);
    cpy_r_r4 = CPyDict_SetItem(cpy_r_r3, cpy_r_key, cpy_r_type);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/binder.py", "_put", 138, CPyStatic_binder___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
CPyL8: ;
    CPyTagged_INCREF(cpy_r_index);
    goto CPyL2;
CPyL9: ;
    CPyTagged_DecRef(cpy_r_index);
    goto CPyL7;
}

PyObject *CPyPy_binder___ConditionalTypeBinder____put(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", "type", "index", 0};
    static CPyArg_Parser parser = {"OO|O:_put", kwlist, 0};
    PyObject *obj_key;
    PyObject *obj_type;
    PyObject *obj_index = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_key, &obj_type, &obj_index)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    PyObject * arg_key;
    if (likely(PyTuple_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("tuple", obj_key); 
        goto fail;
    }
    PyObject *arg_type;
    if (likely(PyObject_TypeCheck(obj_type, CPyType_types___Type)))
        arg_type = obj_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_type); 
        goto fail;
    }
    CPyTagged arg_index;
    if (obj_index == NULL) {
        arg_index = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_index)))
        arg_index = CPyTagged_BorrowFromObject(obj_index);
    else {
        CPy_TypeError("int", obj_index); goto fail;
    }
    char retval = CPyDef_binder___ConditionalTypeBinder____put(arg_self, arg_key, arg_type, arg_index);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "_put", 137, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___ConditionalTypeBinder____get(PyObject *cpy_r_self, PyObject *cpy_r_key, CPyTagged cpy_r_index) {
    int64_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r10;
    char cpy_r_r11;
    int64_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    if (cpy_r_index != CPY_INT_TAG) goto CPyL26;
    cpy_r_index = -2;
CPyL2: ;
    cpy_r_r0 = cpy_r_index & 1;
    cpy_r_r1 = cpy_r_r0 != 0;
    if (!cpy_r_r1) goto CPyL4;
    cpy_r_r2 = CPyTagged_IsLt_(cpy_r_index, 0);
    if (cpy_r_r2) {
        goto CPyL5;
    } else
        goto CPyL7;
CPyL4: ;
    cpy_r_r3 = (Py_ssize_t)cpy_r_index < (Py_ssize_t)0;
    if (!cpy_r_r3) goto CPyL7;
CPyL5: ;
    cpy_r_r4 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "_get", "ConditionalTypeBinder", "frames", 142, CPyStatic_binder___globals);
        goto CPyL27;
    }
CPyL6: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = CPyTagged_Add(cpy_r_index, cpy_r_r7);
    CPyTagged_DECREF(cpy_r_index);
    cpy_r_index = cpy_r_r8;
CPyL7: ;
    cpy_r_r9 = cpy_r_index;
    CPyTagged_INCREF(cpy_r_r9);
    cpy_r_i = cpy_r_r9;
CPyL8: ;
    cpy_r_r10 = cpy_r_r9 & 1;
    cpy_r_r11 = cpy_r_r10 == 0;
    cpy_r_r12 = -2 & 1;
    cpy_r_r13 = cpy_r_r12 == 0;
    cpy_r_r14 = cpy_r_r11 & cpy_r_r13;
    if (!cpy_r_r14) goto CPyL10;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r9 > (Py_ssize_t)-2;
    cpy_r_r16 = cpy_r_r15;
    goto CPyL11;
CPyL10: ;
    cpy_r_r17 = CPyTagged_IsLt_(-2, cpy_r_r9);
    cpy_r_r16 = cpy_r_r17;
CPyL11: ;
    if (!cpy_r_r16) goto CPyL28;
    cpy_r_r18 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "_get", "ConditionalTypeBinder", "frames", 144, CPyStatic_binder___globals);
        goto CPyL29;
    }
CPyL13: ;
    cpy_r_r19 = CPyList_GetItemBorrow(cpy_r_r18, cpy_r_i);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "_get", 144, CPyStatic_binder___globals);
        goto CPyL29;
    }
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_binder___Frame))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "_get", 144, CPyStatic_binder___globals, "mypy.binder.Frame", cpy_r_r19);
        goto CPyL29;
    }
    cpy_r_r21 = ((mypy___binder___FrameObject *)cpy_r_r20)->_types;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = PyDict_Contains(cpy_r_r21, cpy_r_key);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/binder.py", "_get", 144, CPyStatic_binder___globals);
        goto CPyL29;
    }
    cpy_r_r24 = cpy_r_r22;
    if (cpy_r_r24) {
        goto CPyL30;
    } else
        goto CPyL31;
CPyL17: ;
    cpy_r_r25 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "_get", "ConditionalTypeBinder", "frames", 145, CPyStatic_binder___globals);
        goto CPyL32;
    }
CPyL18: ;
    cpy_r_r26 = CPyList_GetItemBorrow(cpy_r_r25, cpy_r_i);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "_get", 145, CPyStatic_binder___globals);
        goto CPyL32;
    }
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_binder___Frame))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "_get", 145, CPyStatic_binder___globals, "mypy.binder.Frame", cpy_r_r26);
        goto CPyL32;
    }
    cpy_r_r28 = ((mypy___binder___FrameObject *)cpy_r_r27)->_types;
    CPy_INCREF(cpy_r_r28);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r28, cpy_r_key);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "_get", 145, CPyStatic_binder___globals);
        goto CPyL25;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r29, CPyType_types___Type)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "_get", 145, CPyStatic_binder___globals, "mypy.types.Type", cpy_r_r29);
        goto CPyL25;
    }
    return cpy_r_r30;
CPyL23: ;
    cpy_r_r31 = CPyTagged_Add(cpy_r_r9, -2);
    CPyTagged_DECREF(cpy_r_r9);
    CPyTagged_INCREF(cpy_r_r31);
    cpy_r_r9 = cpy_r_r31;
    cpy_r_i = cpy_r_r31;
    goto CPyL8;
CPyL24: ;
    cpy_r_r32 = Py_None;
    CPy_INCREF(cpy_r_r32);
    return cpy_r_r32;
CPyL25: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL26: ;
    CPyTagged_INCREF(cpy_r_index);
    goto CPyL2;
CPyL27: ;
    CPyTagged_DecRef(cpy_r_index);
    goto CPyL25;
CPyL28: ;
    CPyTagged_DECREF(cpy_r_r9);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL24;
CPyL29: ;
    CPyTagged_DecRef(cpy_r_r9);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL25;
CPyL30: ;
    CPyTagged_DECREF(cpy_r_r9);
    goto CPyL17;
CPyL31: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL23;
CPyL32: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL25;
}

PyObject *CPyPy_binder___ConditionalTypeBinder____get(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", "index", 0};
    static CPyArg_Parser parser = {"O|O:_get", kwlist, 0};
    PyObject *obj_key;
    PyObject *obj_index = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_key, &obj_index)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    PyObject * arg_key;
    if (likely(PyTuple_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("tuple", obj_key); 
        goto fail;
    }
    CPyTagged arg_index;
    if (obj_index == NULL) {
        arg_index = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_index)))
        arg_index = CPyTagged_BorrowFromObject(obj_index);
    else {
        CPy_TypeError("int", obj_index); goto fail;
    }
    PyObject *retval = CPyDef_binder___ConditionalTypeBinder____get(arg_self, arg_key, arg_index);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "_get", 140, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder___put(PyObject *cpy_r_self, PyObject *cpy_r_expr, PyObject *cpy_r_typ) {
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
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    cpy_r_r0 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    if (cpy_r_r9) goto CPyL8;
    return 1;
CPyL8: ;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr)
        cpy_r_r14 = cpy_r_expr;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL24;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr)
        cpy_r_r14 = cpy_r_expr;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL24;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr)
        cpy_r_r14 = cpy_r_expr;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL24;
    CPy_TypeErrorTraceback("mypy/binder.py", "put", 151, CPyStatic_binder___globals, "union[mypy.nodes.IndexExpr, mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", cpy_r_expr);
    goto CPyL31;
__LL24: ;
    cpy_r_r15 = CPyDef_mypy___literals___literal(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/binder.py", "put", 151, CPyStatic_binder___globals);
        goto CPyL31;
    }
    cpy_r_r16 = cpy_r_r15 != 0;
    CPyTagged_DECREF(cpy_r_r15);
    if (cpy_r_r16) goto CPyL12;
    return 1;
CPyL12: ;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr)
        cpy_r_r17 = cpy_r_expr;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL25;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr)
        cpy_r_r17 = cpy_r_expr;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL25;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr)
        cpy_r_r17 = cpy_r_expr;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL25;
    CPy_TypeErrorTraceback("mypy/binder.py", "put", 153, CPyStatic_binder___globals, "union[mypy.nodes.IndexExpr, mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", cpy_r_expr);
    goto CPyL31;
__LL25: ;
    cpy_r_r18 = CPyDef_mypy___literals___literal_hash(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "put", 153, CPyStatic_binder___globals);
        goto CPyL31;
    }
    cpy_r_key = cpy_r_r18;
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_key != cpy_r_r19;
    if (cpy_r_r20) {
        goto CPyL17;
    } else
        goto CPyL32;
CPyL15: ;
    PyErr_SetString(PyExc_AssertionError, "Internal error: binder tried to put non-literal");
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/binder.py", "put", 154, CPyStatic_binder___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL17: ;
    CPy_INCREF(cpy_r_key);
    if (likely(cpy_r_key != Py_None))
        cpy_r_r22 = cpy_r_key;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "put", 155, CPyStatic_binder___globals, "tuple", cpy_r_key);
        goto CPyL33;
    }
    cpy_r_r23 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_declarations;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "put", "ConditionalTypeBinder", "declarations", 155, CPyStatic_binder___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r23);
CPyL19: ;
    cpy_r_r24 = PyDict_Contains(cpy_r_r23, cpy_r_r22);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/binder.py", "put", 155, CPyStatic_binder___globals);
        goto CPyL33;
    }
    cpy_r_r26 = cpy_r_r24;
    cpy_r_r27 = cpy_r_r26 ^ 1;
    if (!cpy_r_r27) goto CPyL28;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr)
        cpy_r_r28 = cpy_r_expr;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL26;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr)
        cpy_r_r28 = cpy_r_expr;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL26;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr)
        cpy_r_r28 = cpy_r_expr;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL26;
    CPy_TypeErrorTraceback("mypy/binder.py", "put", 156, CPyStatic_binder___globals, "union[mypy.nodes.IndexExpr, mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", cpy_r_expr);
    goto CPyL33;
__LL26: ;
    cpy_r_r29 = CPyDef_binder___get_declaration(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "put", 156, CPyStatic_binder___globals);
        goto CPyL33;
    }
    cpy_r_r30 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_declarations;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "put", "ConditionalTypeBinder", "declarations", 156, CPyStatic_binder___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r30);
CPyL24: ;
    CPy_INCREF(cpy_r_key);
    if (likely(cpy_r_key != Py_None))
        cpy_r_r31 = cpy_r_key;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "put", 156, CPyStatic_binder___globals, "tuple", cpy_r_key);
        goto CPyL36;
    }
    cpy_r_r32 = CPyDict_SetItem(cpy_r_r30, cpy_r_r31, cpy_r_r29);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/binder.py", "put", 156, CPyStatic_binder___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_key);
    if (likely(cpy_r_key != Py_None))
        cpy_r_r34 = cpy_r_key;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "put", 157, CPyStatic_binder___globals, "tuple", cpy_r_key);
        goto CPyL33;
    }
    cpy_r_r35 = NULL;
    cpy_r_r36 = CPyDef_binder___ConditionalTypeBinder____add_dependencies(cpy_r_self, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "put", 157, CPyStatic_binder___globals);
        goto CPyL33;
    }
CPyL28: ;
    if (likely(cpy_r_key != Py_None))
        cpy_r_r37 = cpy_r_key;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "put", 158, CPyStatic_binder___globals, "tuple", cpy_r_key);
        goto CPyL31;
    }
    cpy_r_r38 = CPY_INT_TAG;
    cpy_r_r39 = CPyDef_binder___ConditionalTypeBinder____put(cpy_r_self, cpy_r_r37, cpy_r_typ, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "put", 158, CPyStatic_binder___globals);
        goto CPyL31;
    }
    return 1;
CPyL31: ;
    cpy_r_r40 = 2;
    return cpy_r_r40;
CPyL32: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL15;
CPyL33: ;
    CPy_DecRef(cpy_r_key);
    goto CPyL31;
CPyL34: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r22);
    goto CPyL31;
CPyL35: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r29);
    goto CPyL31;
CPyL36: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r30);
    goto CPyL31;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___put(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", "typ", 0};
    static CPyArg_Parser parser = {"OO:put", kwlist, 0};
    PyObject *obj_expr;
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
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
    char retval = CPyDef_binder___ConditionalTypeBinder___put(arg_self, arg_expr, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "put", 148, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder___unreachable(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "unreachable", "ConditionalTypeBinder", "frames", 161, CPyStatic_binder___globals);
        goto CPyL4;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShortBorrow(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "unreachable", 161, CPyStatic_binder___globals);
        goto CPyL4;
    }
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_binder___Frame))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "unreachable", 161, CPyStatic_binder___globals, "mypy.binder.Frame", cpy_r_r1);
        goto CPyL4;
    }
    ((mypy___binder___FrameObject *)cpy_r_r2)->_unreachable = 1;
    return 1;
CPyL4: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___unreachable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":unreachable", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    char retval = CPyDef_binder___ConditionalTypeBinder___unreachable(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "unreachable", 160, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder___suppress_unreachable_warnings(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "suppress_unreachable_warnings", "ConditionalTypeBinder", "frames", 164, CPyStatic_binder___globals);
        goto CPyL4;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShortBorrow(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "suppress_unreachable_warnings", 164, CPyStatic_binder___globals);
        goto CPyL4;
    }
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_binder___Frame))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "suppress_unreachable_warnings", 164, CPyStatic_binder___globals, "mypy.binder.Frame", cpy_r_r1);
        goto CPyL4;
    }
    ((mypy___binder___FrameObject *)cpy_r_r2)->_suppress_unreachable_warnings = 1;
    return 1;
CPyL4: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___suppress_unreachable_warnings(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":suppress_unreachable_warnings", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    char retval = CPyDef_binder___ConditionalTypeBinder___suppress_unreachable_warnings(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "suppress_unreachable_warnings", 163, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___ConditionalTypeBinder___get(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyDef_mypy___literals___literal_hash(cpy_r_expr);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "get", 167, CPyStatic_binder___globals);
        goto CPyL7;
    }
    cpy_r_key = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_key != cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL4;
    } else
        goto CPyL8;
CPyL2: ;
    PyErr_SetString(PyExc_AssertionError, "Internal error: binder tried to get non-literal");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/binder.py", "get", 168, CPyStatic_binder___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL4: ;
    if (likely(cpy_r_key != Py_None))
        cpy_r_r4 = cpy_r_key;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "get", 169, CPyStatic_binder___globals, "tuple", cpy_r_key);
        goto CPyL7;
    }
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = CPyDef_binder___ConditionalTypeBinder____get(cpy_r_self, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "get", 169, CPyStatic_binder___globals);
        goto CPyL7;
    }
    return cpy_r_r6;
CPyL7: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL8: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL2;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___get(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:get", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_binder___ConditionalTypeBinder___get(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "get", 166, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder___is_unreachable(PyObject *cpy_r_self) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_f;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = 0;
    cpy_r_r1 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "is_unreachable", "ConditionalTypeBinder", "frames", 174, CPyStatic_binder___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL9;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_binder___Frame))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "is_unreachable", 174, CPyStatic_binder___globals, "mypy.binder.Frame", cpy_r_r7);
        goto CPyL10;
    }
    cpy_r_f = cpy_r_r8;
    cpy_r_r9 = ((mypy___binder___FrameObject *)cpy_r_f)->_unreachable;
    CPy_DECREF(cpy_r_f);
    if (cpy_r_r9) {
        goto CPyL11;
    } else
        goto CPyL6;
CPyL5: ;
    cpy_r_r0 = 1;
    goto CPyL7;
CPyL6: ;
    cpy_r_r10 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r10;
    goto CPyL2;
CPyL7: ;
    return cpy_r_r0;
CPyL8: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL9: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL5;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___is_unreachable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_unreachable", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    char retval = CPyDef_binder___ConditionalTypeBinder___is_unreachable(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "is_unreachable", 171, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder___is_unreachable_warning_suppressed(PyObject *cpy_r_self) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_f;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = 0;
    cpy_r_r1 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "is_unreachable_warning_suppressed", "ConditionalTypeBinder", "frames", 178, CPyStatic_binder___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL9;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_binder___Frame))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "is_unreachable_warning_suppressed", 178, CPyStatic_binder___globals, "mypy.binder.Frame", cpy_r_r7);
        goto CPyL10;
    }
    cpy_r_f = cpy_r_r8;
    cpy_r_r9 = ((mypy___binder___FrameObject *)cpy_r_f)->_suppress_unreachable_warnings;
    CPy_DECREF(cpy_r_f);
    if (cpy_r_r9) {
        goto CPyL11;
    } else
        goto CPyL6;
CPyL5: ;
    cpy_r_r0 = 1;
    goto CPyL7;
CPyL6: ;
    cpy_r_r10 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r10;
    goto CPyL2;
CPyL7: ;
    return cpy_r_r0;
CPyL8: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL9: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL5;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___is_unreachable_warning_suppressed(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_unreachable_warning_suppressed", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    char retval = CPyDef_binder___ConditionalTypeBinder___is_unreachable_warning_suppressed(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "is_unreachable_warning_suppressed", 176, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder___cleanse(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = CPyDef_mypy___literals___literal_hash(cpy_r_expr);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "cleanse", 182, CPyStatic_binder___globals);
        goto CPyL7;
    }
    cpy_r_key = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_key != cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL4;
    } else
        goto CPyL8;
CPyL2: ;
    PyErr_SetString(PyExc_AssertionError, "Internal error: binder tried cleanse non-literal");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/binder.py", "cleanse", 183, CPyStatic_binder___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL4: ;
    if (likely(cpy_r_key != Py_None))
        cpy_r_r4 = cpy_r_key;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "cleanse", 184, CPyStatic_binder___globals, "tuple", cpy_r_key);
        goto CPyL7;
    }
    cpy_r_r5 = CPyDef_binder___ConditionalTypeBinder____cleanse_key(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "cleanse", 184, CPyStatic_binder___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
CPyL8: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL2;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___cleanse(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:cleanse", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_binder___ConditionalTypeBinder___cleanse(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "cleanse", 180, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder____cleanse_key(PyObject *cpy_r_self, PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_frame;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "_cleanse_key", "ConditionalTypeBinder", "frames", 188, CPyStatic_binder___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL10;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_binder___Frame))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "_cleanse_key", 188, CPyStatic_binder___globals, "mypy.binder.Frame", cpy_r_r6);
        goto CPyL11;
    }
    cpy_r_frame = cpy_r_r7;
    cpy_r_r8 = ((mypy___binder___FrameObject *)cpy_r_frame)->_types;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = PyDict_Contains(cpy_r_r8, cpy_r_key);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/binder.py", "_cleanse_key", 189, CPyStatic_binder___globals);
        goto CPyL12;
    }
    cpy_r_r11 = cpy_r_r9;
    if (!cpy_r_r11) goto CPyL13;
    cpy_r_r12 = ((mypy___binder___FrameObject *)cpy_r_frame)->_types;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_frame);
    cpy_r_r13 = PyObject_DelItem(cpy_r_r12, cpy_r_key);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/binder.py", "_cleanse_key", 190, CPyStatic_binder___globals);
        goto CPyL11;
    }
CPyL7: ;
    cpy_r_r15 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r15;
    goto CPyL2;
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL10: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_frame);
    goto CPyL9;
CPyL13: ;
    CPy_DECREF(cpy_r_frame);
    goto CPyL7;
}

PyObject *CPyPy_binder___ConditionalTypeBinder____cleanse_key(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", 0};
    static CPyArg_Parser parser = {"O:_cleanse_key", kwlist, 0};
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_key)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    PyObject * arg_key;
    if (likely(PyTuple_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("tuple", obj_key); 
        goto fail;
    }
    char retval = CPyDef_binder___ConditionalTypeBinder____cleanse_key(arg_self, arg_key);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "_cleanse_key", 186, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder___update_from_options(PyObject *cpy_r_self, PyObject *cpy_r_frames) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_f;
    char cpy_r_r8;
    char cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_changed;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_f_2;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    tuple_T3CIO cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_key;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_keys;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_key_2;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_current_value;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyPtr cpy_r_r45;
    int64_t cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_f_3;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_resulting_values;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    CPyPtr cpy_r_r58;
    int64_t cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_type;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_declaration_type;
    PyObject *cpy_r_r76;
    CPyPtr cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyTagged cpy_r_r83;
    CPyPtr cpy_r_r84;
    int64_t cpy_r_r85;
    CPyTagged cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    CPyTagged cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    CPyTagged cpy_r_r99;
    CPyTagged cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyTagged cpy_r_r104;
    CPyPtr cpy_r_r105;
    int64_t cpy_r_r106;
    CPyTagged cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_other;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    CPyTagged cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    CPyTagged cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    char cpy_r_r139;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 200, CPyStatic_binder___globals);
        goto CPyL92;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_frames)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL7;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_frames, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_binder___Frame))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 200, CPyStatic_binder___globals, "mypy.binder.Frame", cpy_r_r6);
        goto CPyL93;
    }
    cpy_r_f = cpy_r_r7;
    cpy_r_r8 = ((mypy___binder___FrameObject *)cpy_r_f)->_unreachable;
    cpy_r_r9 = cpy_r_r8 ^ 1;
    if (!cpy_r_r9) goto CPyL94;
    cpy_r_r10 = PyList_Append(cpy_r_r0, cpy_r_f);
    CPy_DECREF(cpy_r_f);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 200, CPyStatic_binder___globals);
        goto CPyL93;
    }
CPyL6: ;
    cpy_r_r12 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r12;
    goto CPyL2;
CPyL7: ;
    cpy_r_frames = cpy_r_r0;
    cpy_r_changed = 0;
    cpy_r_r13 = PySet_New(NULL);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 202, CPyStatic_binder___globals);
        goto CPyL95;
    }
    cpy_r_r14 = 0;
CPyL9: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_frames)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL18;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_frames, cpy_r_r14);
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_binder___Frame))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 202, CPyStatic_binder___globals, "mypy.binder.Frame", cpy_r_r19);
        goto CPyL96;
    }
    cpy_r_f_2 = cpy_r_r20;
    cpy_r_r21 = ((mypy___binder___FrameObject *)cpy_r_f_2)->_types;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_f_2);
    cpy_r_r22 = 0;
    cpy_r_r23 = PyDict_Size(cpy_r_r21);
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = CPyDict_GetKeysIter(cpy_r_r21);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 202, CPyStatic_binder___globals);
        goto CPyL97;
    }
CPyL12: ;
    cpy_r_r26 = CPyDict_NextKey(cpy_r_r25, cpy_r_r22);
    cpy_r_r27 = cpy_r_r26.f1;
    cpy_r_r22 = cpy_r_r27;
    cpy_r_r28 = cpy_r_r26.f0;
    if (!cpy_r_r28) goto CPyL98;
    cpy_r_r29 = cpy_r_r26.f2;
    CPy_INCREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r26.f2);
    if (likely(PyTuple_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 202, CPyStatic_binder___globals, "tuple", cpy_r_r29);
        goto CPyL99;
    }
    cpy_r_key = cpy_r_r30;
    cpy_r_r31 = PySet_Add(cpy_r_r13, cpy_r_key);
    CPy_DECREF(cpy_r_key);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 202, CPyStatic_binder___globals);
        goto CPyL99;
    }
    cpy_r_r33 = CPyDict_CheckSize(cpy_r_r21, cpy_r_r24);
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 202, CPyStatic_binder___globals);
        goto CPyL99;
    } else
        goto CPyL12;
CPyL16: ;
    cpy_r_r34 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 202, CPyStatic_binder___globals);
        goto CPyL96;
    }
    cpy_r_r35 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r35;
    goto CPyL9;
CPyL18: ;
    cpy_r_keys = cpy_r_r13;
    cpy_r_r36 = PyObject_GetIter(cpy_r_keys);
    CPy_DECREF(cpy_r_keys);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 204, CPyStatic_binder___globals);
        goto CPyL95;
    }
CPyL19: ;
    cpy_r_r37 = PyIter_Next(cpy_r_r36);
    if (cpy_r_r37 == NULL) goto CPyL100;
    if (likely(PyTuple_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 204, CPyStatic_binder___globals, "tuple", cpy_r_r37);
        goto CPyL101;
    }
    cpy_r_key_2 = cpy_r_r38;
    cpy_r_r39 = CPY_INT_TAG;
    cpy_r_r40 = CPyDef_binder___ConditionalTypeBinder____get(cpy_r_self, cpy_r_key_2, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 205, CPyStatic_binder___globals);
        goto CPyL102;
    }
    cpy_r_current_value = cpy_r_r40;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_frames)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    cpy_r_r43 = PyList_New(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 206, CPyStatic_binder___globals);
        goto CPyL103;
    }
    cpy_r_r44 = 0;
CPyL24: ;
    cpy_r_r45 = (CPyPtr)&((PyVarObject *)cpy_r_frames)->ob_size;
    cpy_r_r46 = *(int64_t *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 << 1;
    cpy_r_r48 = (Py_ssize_t)cpy_r_r44 < (Py_ssize_t)cpy_r_r47;
    if (!cpy_r_r48) goto CPyL30;
    cpy_r_r49 = CPyList_GetItemUnsafe(cpy_r_frames, cpy_r_r44);
    if (likely(Py_TYPE(cpy_r_r49) == CPyType_binder___Frame))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 206, CPyStatic_binder___globals, "mypy.binder.Frame", cpy_r_r49);
        goto CPyL104;
    }
    cpy_r_f_3 = cpy_r_r50;
    cpy_r_r51 = ((mypy___binder___FrameObject *)cpy_r_f_3)->_types;
    CPy_INCREF(cpy_r_r51);
    CPy_DECREF(cpy_r_f_3);
    cpy_r_r52 = CPyDict_Get(cpy_r_r51, cpy_r_key_2, cpy_r_current_value);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 206, CPyStatic_binder___globals);
        goto CPyL104;
    }
    if (PyObject_TypeCheck(cpy_r_r52, CPyType_types___Type))
        cpy_r_r53 = cpy_r_r52;
    else {
        cpy_r_r53 = NULL;
    }
    if (cpy_r_r53 != NULL) goto __LL27;
    if (cpy_r_r52 == Py_None)
        cpy_r_r53 = cpy_r_r52;
    else {
        cpy_r_r53 = NULL;
    }
    if (cpy_r_r53 != NULL) goto __LL27;
    CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 206, CPyStatic_binder___globals, "mypy.types.Type or None", cpy_r_r52);
    goto CPyL104;
__LL27: ;
    cpy_r_r54 = CPyList_SetItemUnsafe(cpy_r_r43, cpy_r_r44, cpy_r_r53);
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 206, CPyStatic_binder___globals);
        goto CPyL104;
    }
    cpy_r_r55 = cpy_r_r44 + 2;
    cpy_r_r44 = cpy_r_r55;
    goto CPyL24;
CPyL30: ;
    cpy_r_resulting_values = cpy_r_r43;
    cpy_r_r56 = 0;
    cpy_r_r57 = 0;
CPyL31: ;
    cpy_r_r58 = (CPyPtr)&((PyVarObject *)cpy_r_resulting_values)->ob_size;
    cpy_r_r59 = *(int64_t *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 << 1;
    cpy_r_r61 = (Py_ssize_t)cpy_r_r57 < (Py_ssize_t)cpy_r_r60;
    if (!cpy_r_r61) goto CPyL36;
    cpy_r_r62 = CPyList_GetItemUnsafe(cpy_r_resulting_values, cpy_r_r57);
    if (PyObject_TypeCheck(cpy_r_r62, CPyType_types___Type))
        cpy_r_r63 = cpy_r_r62;
    else {
        cpy_r_r63 = NULL;
    }
    if (cpy_r_r63 != NULL) goto __LL28;
    if (cpy_r_r62 == Py_None)
        cpy_r_r63 = cpy_r_r62;
    else {
        cpy_r_r63 = NULL;
    }
    if (cpy_r_r63 != NULL) goto __LL28;
    CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 207, CPyStatic_binder___globals, "mypy.types.Type or None", cpy_r_r62);
    goto CPyL105;
__LL28: ;
    cpy_r_x = cpy_r_r63;
    cpy_r_r64 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r65 = cpy_r_x == cpy_r_r64;
    CPy_DECREF(cpy_r_x);
    if (!cpy_r_r65) goto CPyL35;
    cpy_r_r56 = 1;
    goto CPyL36;
CPyL35: ;
    cpy_r_r66 = cpy_r_r57 + 2;
    cpy_r_r57 = cpy_r_r66;
    goto CPyL31;
CPyL36: ;
    if (cpy_r_r56) goto CPyL106;
    cpy_r_r67 = CPyList_GetItemShort(cpy_r_resulting_values, 0);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 213, CPyStatic_binder___globals);
        goto CPyL105;
    }
    if (PyObject_TypeCheck(cpy_r_r67, CPyType_types___Type))
        cpy_r_r68 = cpy_r_r67;
    else {
        cpy_r_r68 = NULL;
    }
    if (cpy_r_r68 != NULL) goto __LL29;
    if (cpy_r_r67 == Py_None)
        cpy_r_r68 = cpy_r_r67;
    else {
        cpy_r_r68 = NULL;
    }
    if (cpy_r_r68 != NULL) goto __LL29;
    CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 213, CPyStatic_binder___globals, "mypy.types.Type or None", cpy_r_r67);
    goto CPyL105;
__LL29: ;
    cpy_r_type = cpy_r_r68;
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = cpy_r_type != cpy_r_r69;
    if (cpy_r_r70) {
        goto CPyL42;
    } else
        goto CPyL107;
CPyL40: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r71 = 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 214, CPyStatic_binder___globals);
        goto CPyL92;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r72 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_declarations;
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "update_from_options", "ConditionalTypeBinder", "declarations", 215, CPyStatic_binder___globals);
        goto CPyL108;
    }
    CPy_INCREF(cpy_r_r72);
CPyL43: ;
    cpy_r_r73 = CPyDict_GetWithNone(cpy_r_r72, cpy_r_key_2);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 215, CPyStatic_binder___globals);
        goto CPyL108;
    }
    if (PyObject_TypeCheck(cpy_r_r73, CPyType_types___Type))
        cpy_r_r74 = cpy_r_r73;
    else {
        cpy_r_r74 = NULL;
    }
    if (cpy_r_r74 != NULL) goto __LL30;
    if (cpy_r_r73 == Py_None)
        cpy_r_r74 = cpy_r_r73;
    else {
        cpy_r_r74 = NULL;
    }
    if (cpy_r_r74 != NULL) goto __LL30;
    CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 215, CPyStatic_binder___globals, "mypy.types.Type or None", cpy_r_r73);
    goto CPyL108;
__LL30: ;
    cpy_r_r75 = CPyDef_types___get_proper_type(cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 215, CPyStatic_binder___globals);
        goto CPyL108;
    }
    cpy_r_declaration_type = cpy_r_r75;
    cpy_r_r76 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r77 = (CPyPtr)&((PyObject *)cpy_r_declaration_type)->ob_type;
    cpy_r_r78 = *(PyObject * *)cpy_r_r77;
    cpy_r_r79 = cpy_r_r78 == cpy_r_r76;
    if (!cpy_r_r79) goto CPyL109;
    cpy_r_r80 = 1;
    cpy_r_r81 = CPyList_GetSlice(cpy_r_resulting_values, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_resulting_values);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 218, CPyStatic_binder___globals);
        goto CPyL110;
    }
    if (likely(PyList_Check(cpy_r_r81)))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 218, CPyStatic_binder___globals, "list", cpy_r_r81);
        goto CPyL110;
    }
    cpy_r_r83 = 0;
CPyL50: ;
    cpy_r_r84 = (CPyPtr)&((PyVarObject *)cpy_r_r82)->ob_size;
    cpy_r_r85 = *(int64_t *)cpy_r_r84;
    cpy_r_r86 = cpy_r_r85 << 1;
    cpy_r_r87 = (Py_ssize_t)cpy_r_r83 < (Py_ssize_t)cpy_r_r86;
    if (!cpy_r_r87) goto CPyL111;
    cpy_r_r88 = CPyList_GetItemUnsafe(cpy_r_r82, cpy_r_r83);
    if (PyObject_TypeCheck(cpy_r_r88, CPyType_types___Type))
        cpy_r_r89 = cpy_r_r88;
    else {
        cpy_r_r89 = NULL;
    }
    if (cpy_r_r89 != NULL) goto __LL31;
    if (cpy_r_r88 == Py_None)
        cpy_r_r89 = cpy_r_r88;
    else {
        cpy_r_r89 = NULL;
    }
    if (cpy_r_r89 != NULL) goto __LL31;
    CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 218, CPyStatic_binder___globals, "mypy.types.Type or None", cpy_r_r88);
    goto CPyL112;
__LL31: ;
    cpy_r_t = cpy_r_r89;
    CPy_INCREF(cpy_r_type);
    if (likely(cpy_r_type != Py_None))
        cpy_r_r90 = cpy_r_type;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 218, CPyStatic_binder___globals, "mypy.types.Type", cpy_r_type);
        goto CPyL113;
    }
    if (likely(cpy_r_t != Py_None))
        cpy_r_r91 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 218, CPyStatic_binder___globals, "mypy.types.Type", cpy_r_t);
        goto CPyL114;
    }
    cpy_r_r92 = 2;
    cpy_r_r93 = NULL;
    cpy_r_r94 = CPyDef_subtypes___is_same_type(cpy_r_r90, cpy_r_r91, cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_r90);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r94 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 218, CPyStatic_binder___globals);
        goto CPyL112;
    }
    cpy_r_r95 = cpy_r_r94 ^ 1;
    if (cpy_r_r95) {
        goto CPyL115;
    } else
        goto CPyL57;
CPyL56: ;
    cpy_r_r80 = 0;
    goto CPyL58;
CPyL57: ;
    cpy_r_r96 = cpy_r_r83 + 2;
    cpy_r_r83 = cpy_r_r96;
    goto CPyL50;
CPyL58: ;
    if (cpy_r_r80) {
        goto CPyL116;
    } else
        goto CPyL117;
CPyL59: ;
    if (likely(Py_TYPE(cpy_r_declaration_type) == CPyType_types___AnyType))
        cpy_r_r97 = cpy_r_declaration_type;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 219, CPyStatic_binder___globals, "mypy.types.AnyType", cpy_r_declaration_type);
        goto CPyL103;
    }
    cpy_r_r98 = NULL;
    cpy_r_r99 = CPY_INT_TAG;
    cpy_r_r100 = CPY_INT_TAG;
    cpy_r_r101 = CPyDef_types___AnyType(14, cpy_r_r97, cpy_r_r98, cpy_r_r99, cpy_r_r100);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 219, CPyStatic_binder___globals);
        goto CPyL103;
    }
    cpy_r_type = cpy_r_r101;
    goto CPyL78;
CPyL62: ;
    cpy_r_r102 = CPyList_GetSlice(cpy_r_resulting_values, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_resulting_values);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 221, CPyStatic_binder___globals);
        goto CPyL118;
    }
    if (likely(PyList_Check(cpy_r_r102)))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 221, CPyStatic_binder___globals, "list", cpy_r_r102);
        goto CPyL118;
    }
    cpy_r_r104 = 0;
CPyL65: ;
    cpy_r_r105 = (CPyPtr)&((PyVarObject *)cpy_r_r103)->ob_size;
    cpy_r_r106 = *(int64_t *)cpy_r_r105;
    cpy_r_r107 = cpy_r_r106 << 1;
    cpy_r_r108 = (Py_ssize_t)cpy_r_r104 < (Py_ssize_t)cpy_r_r107;
    if (!cpy_r_r108) goto CPyL119;
    cpy_r_r109 = CPyList_GetItemUnsafe(cpy_r_r103, cpy_r_r104);
    if (PyObject_TypeCheck(cpy_r_r109, CPyType_types___Type))
        cpy_r_r110 = cpy_r_r109;
    else {
        cpy_r_r110 = NULL;
    }
    if (cpy_r_r110 != NULL) goto __LL32;
    if (cpy_r_r109 == Py_None)
        cpy_r_r110 = cpy_r_r109;
    else {
        cpy_r_r110 = NULL;
    }
    if (cpy_r_r110 != NULL) goto __LL32;
    CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 221, CPyStatic_binder___globals, "mypy.types.Type or None", cpy_r_r109);
    goto CPyL120;
__LL32: ;
    cpy_r_other = cpy_r_r110;
    cpy_r_r111 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r112 = cpy_r_other != cpy_r_r111;
    if (cpy_r_r112) {
        goto CPyL70;
    } else
        goto CPyL121;
CPyL68: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r113 = 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 222, CPyStatic_binder___globals);
        goto CPyL92;
    }
    CPy_Unreachable();
CPyL70: ;
    cpy_r_r114 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_declarations;
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "update_from_options", "ConditionalTypeBinder", "declarations", 223, CPyStatic_binder___globals);
        goto CPyL122;
    }
    CPy_INCREF(cpy_r_r114);
CPyL71: ;
    cpy_r_r115 = CPyDict_GetItem(cpy_r_r114, cpy_r_key_2);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 223, CPyStatic_binder___globals);
        goto CPyL122;
    }
    if (PyObject_TypeCheck(cpy_r_r115, CPyType_types___Type))
        cpy_r_r116 = cpy_r_r115;
    else {
        cpy_r_r116 = NULL;
    }
    if (cpy_r_r116 != NULL) goto __LL33;
    if (cpy_r_r115 == Py_None)
        cpy_r_r116 = cpy_r_r115;
    else {
        cpy_r_r116 = NULL;
    }
    if (cpy_r_r116 != NULL) goto __LL33;
    CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 223, CPyStatic_binder___globals, "mypy.types.Type or None", cpy_r_r115);
    goto CPyL122;
__LL33: ;
    if (likely(cpy_r_type != Py_None))
        cpy_r_r117 = cpy_r_type;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 223, CPyStatic_binder___globals, "mypy.types.Type", cpy_r_type);
        goto CPyL123;
    }
    if (likely(cpy_r_other != Py_None))
        cpy_r_r118 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 223, CPyStatic_binder___globals, "mypy.types.Type", cpy_r_other);
        goto CPyL124;
    }
    cpy_r_r119 = CPyDef_join___join_simple(cpy_r_r116, cpy_r_r117, cpy_r_r118);
    CPy_DECREF(cpy_r_r116);
    CPy_DECREF(cpy_r_r117);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 223, CPyStatic_binder___globals);
        goto CPyL125;
    }
    cpy_r_type = cpy_r_r119;
    cpy_r_r120 = cpy_r_r104 + 2;
    cpy_r_r104 = cpy_r_r120;
    goto CPyL65;
CPyL78: ;
    cpy_r_r121 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r122 = cpy_r_current_value == cpy_r_r121;
    if (cpy_r_r122) goto CPyL126;
    CPy_INCREF(cpy_r_type);
    if (likely(cpy_r_type != Py_None))
        cpy_r_r123 = cpy_r_type;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 224, CPyStatic_binder___globals, "mypy.types.Type", cpy_r_type);
        goto CPyL118;
    }
    if (likely(cpy_r_current_value != Py_None))
        cpy_r_r124 = cpy_r_current_value;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 224, CPyStatic_binder___globals, "mypy.types.Type", cpy_r_current_value);
        goto CPyL127;
    }
    cpy_r_r125 = 2;
    cpy_r_r126 = NULL;
    cpy_r_r127 = CPyDef_subtypes___is_same_type(cpy_r_r123, cpy_r_r124, cpy_r_r125, cpy_r_r126);
    CPy_DECREF(cpy_r_r123);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r127 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 224, CPyStatic_binder___globals);
        goto CPyL128;
    }
    if (cpy_r_r127) goto CPyL129;
CPyL83: ;
    if (likely(cpy_r_type != Py_None))
        cpy_r_r128 = cpy_r_type;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 225, CPyStatic_binder___globals, "mypy.types.Type", cpy_r_type);
        goto CPyL102;
    }
    cpy_r_r129 = CPY_INT_TAG;
    cpy_r_r130 = CPyDef_binder___ConditionalTypeBinder____put(cpy_r_self, cpy_r_key_2, cpy_r_r128, cpy_r_r129);
    CPy_DECREF(cpy_r_key_2);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r130 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 225, CPyStatic_binder___globals);
        goto CPyL101;
    }
    cpy_r_changed = 1;
    goto CPyL19;
CPyL86: ;
    cpy_r_r131 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 204, CPyStatic_binder___globals);
        goto CPyL95;
    }
    cpy_r_r132 = PyObject_Not(cpy_r_frames);
    CPy_DECREF(cpy_r_frames);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 228, CPyStatic_binder___globals);
        goto CPyL92;
    }
    cpy_r_r134 = cpy_r_r132;
    cpy_r_r135 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames;
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "update_from_options", "ConditionalTypeBinder", "frames", 228, CPyStatic_binder___globals);
        goto CPyL92;
    }
CPyL89: ;
    cpy_r_r136 = CPyList_GetItemShortBorrow(cpy_r_r135, -2);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "update_from_options", 228, CPyStatic_binder___globals);
        goto CPyL92;
    }
    if (likely(Py_TYPE(cpy_r_r136) == CPyType_binder___Frame))
        cpy_r_r137 = cpy_r_r136;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "update_from_options", 228, CPyStatic_binder___globals, "mypy.binder.Frame", cpy_r_r136);
        goto CPyL92;
    }
    ((mypy___binder___FrameObject *)cpy_r_r137)->_unreachable = cpy_r_r134;
    return cpy_r_changed;
CPyL92: ;
    cpy_r_r139 = 2;
    return cpy_r_r139;
CPyL93: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL92;
CPyL94: ;
    CPy_DECREF(cpy_r_f);
    goto CPyL6;
CPyL95: ;
    CPy_DecRef(cpy_r_frames);
    goto CPyL92;
CPyL96: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r13);
    goto CPyL92;
CPyL97: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r21);
    goto CPyL92;
CPyL98: ;
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r26.f2);
    goto CPyL16;
CPyL99: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r25);
    goto CPyL92;
CPyL100: ;
    CPy_DECREF(cpy_r_r36);
    goto CPyL86;
CPyL101: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    goto CPyL92;
CPyL102: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    goto CPyL92;
CPyL103: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_current_value);
    goto CPyL92;
CPyL104: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_current_value);
    CPy_DecRef(cpy_r_r43);
    goto CPyL92;
CPyL105: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_current_value);
    CPy_DecRef(cpy_r_resulting_values);
    goto CPyL92;
CPyL106: ;
    CPy_DECREF(cpy_r_key_2);
    CPy_DECREF(cpy_r_current_value);
    CPy_DECREF(cpy_r_resulting_values);
    goto CPyL19;
CPyL107: ;
    CPy_DECREF(cpy_r_frames);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_key_2);
    CPy_DECREF(cpy_r_current_value);
    CPy_DECREF(cpy_r_resulting_values);
    CPy_DECREF(cpy_r_type);
    goto CPyL40;
CPyL108: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_current_value);
    CPy_DecRef(cpy_r_resulting_values);
    CPy_DecRef(cpy_r_type);
    goto CPyL92;
CPyL109: ;
    CPy_DECREF(cpy_r_declaration_type);
    goto CPyL62;
CPyL110: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_current_value);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_declaration_type);
    goto CPyL92;
CPyL111: ;
    CPy_DECREF(cpy_r_r82);
    goto CPyL58;
CPyL112: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_current_value);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_declaration_type);
    CPy_DecRef(cpy_r_r82);
    goto CPyL92;
CPyL113: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_current_value);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_declaration_type);
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_t);
    goto CPyL92;
CPyL114: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_current_value);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_declaration_type);
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r90);
    goto CPyL92;
CPyL115: ;
    CPy_DECREF(cpy_r_r82);
    goto CPyL56;
CPyL116: ;
    CPy_DECREF(cpy_r_declaration_type);
    goto CPyL78;
CPyL117: ;
    CPy_DECREF(cpy_r_type);
    goto CPyL59;
CPyL118: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_current_value);
    CPy_DecRef(cpy_r_type);
    goto CPyL92;
CPyL119: ;
    CPy_DECREF(cpy_r_r103);
    goto CPyL78;
CPyL120: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_current_value);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_r103);
    goto CPyL92;
CPyL121: ;
    CPy_DECREF(cpy_r_frames);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_key_2);
    CPy_DECREF(cpy_r_current_value);
    CPy_DECREF(cpy_r_type);
    CPy_DECREF(cpy_r_r103);
    CPy_DECREF(cpy_r_other);
    goto CPyL68;
CPyL122: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_current_value);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_other);
    goto CPyL92;
CPyL123: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_current_value);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_other);
    CPy_DecRef(cpy_r_r116);
    goto CPyL92;
CPyL124: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_current_value);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r117);
    goto CPyL92;
CPyL125: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_current_value);
    CPy_DecRef(cpy_r_r103);
    goto CPyL92;
CPyL126: ;
    CPy_DECREF(cpy_r_current_value);
    goto CPyL83;
CPyL127: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_r123);
    goto CPyL92;
CPyL128: ;
    CPy_DecRef(cpy_r_frames);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_type);
    goto CPyL92;
CPyL129: ;
    CPy_DECREF(cpy_r_key_2);
    CPy_DECREF(cpy_r_type);
    goto CPyL19;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___update_from_options(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"frames", 0};
    static CPyArg_Parser parser = {"O:update_from_options", kwlist, 0};
    PyObject *obj_frames;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_frames)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    PyObject *arg_frames;
    if (likely(PyList_Check(obj_frames)))
        arg_frames = obj_frames;
    else {
        CPy_TypeError("list", obj_frames); 
        goto fail;
    }
    char retval = CPyDef_binder___ConditionalTypeBinder___update_from_options(arg_self, arg_frames);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "update_from_options", 192, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___ConditionalTypeBinder___pop_frame(PyObject *cpy_r_self, char cpy_r_can_skip, CPyTagged cpy_r_fall_through) {
    int64_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_options;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = cpy_r_fall_through & 1;
    cpy_r_r1 = cpy_r_r0 != 0;
    if (!cpy_r_r1) goto CPyL2;
    cpy_r_r2 = CPyTagged_IsLt_(0, cpy_r_fall_through);
    if (cpy_r_r2) {
        goto CPyL3;
    } else
        goto CPyL4;
CPyL2: ;
    cpy_r_r3 = (Py_ssize_t)cpy_r_fall_through > (Py_ssize_t)0;
    if (!cpy_r_r3) goto CPyL4;
CPyL3: ;
    cpy_r_r4 = CPyTagged_Negate(cpy_r_fall_through);
    cpy_r_r5 = CPyDef_binder___ConditionalTypeBinder___allow_jump(cpy_r_self, cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "pop_frame", 239, CPyStatic_binder___globals);
        goto CPyL18;
    }
CPyL4: ;
    cpy_r_r6 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "pop_frame", "ConditionalTypeBinder", "frames", 241, CPyStatic_binder___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    cpy_r_r7 = CPyList_PopLast(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "pop_frame", 241, CPyStatic_binder___globals);
        goto CPyL18;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_binder___Frame))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "pop_frame", 241, CPyStatic_binder___globals, "mypy.binder.Frame", cpy_r_r7);
        goto CPyL18;
    }
    cpy_r_result = cpy_r_r8;
    cpy_r_r9 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_options_on_return;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "pop_frame", "ConditionalTypeBinder", "options_on_return", 242, CPyStatic_binder___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r9);
CPyL8: ;
    cpy_r_r10 = CPyList_PopLast(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "pop_frame", 242, CPyStatic_binder___globals);
        goto CPyL19;
    }
    if (likely(PyList_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "pop_frame", 242, CPyStatic_binder___globals, "list", cpy_r_r10);
        goto CPyL19;
    }
    cpy_r_options = cpy_r_r11;
    if (!cpy_r_can_skip) goto CPyL15;
    cpy_r_r12 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "pop_frame", "ConditionalTypeBinder", "frames", 245, CPyStatic_binder___globals);
        goto CPyL20;
    }
CPyL12: ;
    cpy_r_r13 = CPyList_GetItemShort(cpy_r_r12, -2);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "pop_frame", 245, CPyStatic_binder___globals);
        goto CPyL20;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_binder___Frame))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "pop_frame", 245, CPyStatic_binder___globals, "mypy.binder.Frame", cpy_r_r13);
        goto CPyL20;
    }
    cpy_r_r15 = CPyList_Insert(cpy_r_options, 0, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/binder.py", "pop_frame", 245, CPyStatic_binder___globals);
        goto CPyL20;
    }
CPyL15: ;
    cpy_r_r17 = CPyDef_binder___ConditionalTypeBinder___update_from_options(cpy_r_self, cpy_r_options);
    CPy_DECREF(cpy_r_options);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "pop_frame", 247, CPyStatic_binder___globals);
        goto CPyL19;
    }
    ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_last_pop_changed = cpy_r_r17;
    cpy_r_r18 = 1;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/binder.py", "pop_frame", 247, CPyStatic_binder___globals);
        goto CPyL19;
    }
    return cpy_r_result;
CPyL18: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL19: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_options);
    goto CPyL18;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___pop_frame(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"can_skip", "fall_through", 0};
    static CPyArg_Parser parser = {"OO:pop_frame", kwlist, 0};
    PyObject *obj_can_skip;
    PyObject *obj_fall_through;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_can_skip, &obj_fall_through)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    char arg_can_skip;
    if (unlikely(!PyBool_Check(obj_can_skip))) {
        CPy_TypeError("bool", obj_can_skip); goto fail;
    } else
        arg_can_skip = obj_can_skip == Py_True;
    CPyTagged arg_fall_through;
    if (likely(PyLong_Check(obj_fall_through)))
        arg_fall_through = CPyTagged_BorrowFromObject(obj_fall_through);
    else {
        CPy_TypeError("int", obj_fall_through); goto fail;
    }
    PyObject *retval = CPyDef_binder___ConditionalTypeBinder___pop_frame(arg_self, arg_can_skip, arg_fall_through);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "pop_frame", 232, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    int64_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    int64_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    cpy_r_r0 = ((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "accumulate_type_assignments", "accumulate_type_assignments_ConditionalTypeBinder_gen", "__mypyc_env__", 252, CPyStatic_binder___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/binder.py", "accumulate_type_assignments", "accumulate_type_assignments_ConditionalTypeBinder_env", "__mypyc_next_label__", 252, CPyStatic_binder___globals);
        goto CPyL38;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL27;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL39;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/binder.py", "accumulate_type_assignments", 252, CPyStatic_binder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    if (((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->_old_assignments != NULL) {
        CPy_DECREF(((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->_old_assignments);
    }
    ((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->_old_assignments = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/binder.py", "accumulate_type_assignments", 259, CPyStatic_binder___globals);
        goto CPyL38;
    }
    cpy_r_r6 = ((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "accumulate_type_assignments", "accumulate_type_assignments_ConditionalTypeBinder_env", "self", 260, CPyStatic_binder___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r6)->_type_assignments;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_r7 != cpy_r_r8;
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r9) goto CPyL11;
    cpy_r_r10 = ((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "accumulate_type_assignments", "accumulate_type_assignments_ConditionalTypeBinder_env", "self", 261, CPyStatic_binder___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r10);
CPyL9: ;
    cpy_r_r11 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r10)->_type_assignments;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (likely(cpy_r_r11 != Py_None))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "accumulate_type_assignments", 261, CPyStatic_binder___globals, "dict", cpy_r_r11);
        goto CPyL38;
    }
    if (((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->_old_assignments != NULL) {
        CPy_DECREF(((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->_old_assignments);
    }
    ((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->_old_assignments = cpy_r_r12;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/binder.py", "accumulate_type_assignments", 261, CPyStatic_binder___globals);
        goto CPyL38;
    }
CPyL11: ;
    cpy_r_r14 = (PyObject *)&PyList_Type;
    cpy_r_r15 = CPyStatic_binder___globals;
    cpy_r_r16 = CPyStatics[73]; /* 'defaultdict' */
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "accumulate_type_assignments", 262, CPyStatic_binder___globals);
        goto CPyL38;
    }
    PyObject *cpy_r_r18[1] = {cpy_r_r14};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "accumulate_type_assignments", 262, CPyStatic_binder___globals);
        goto CPyL38;
    }
    if (likely(PyDict_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "accumulate_type_assignments", 262, CPyStatic_binder___globals, "dict", cpy_r_r20);
        goto CPyL38;
    }
    cpy_r_r22 = ((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "accumulate_type_assignments", "accumulate_type_assignments_ConditionalTypeBinder_env", "self", 262, CPyStatic_binder___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r22);
CPyL15: ;
    CPy_DECREF(((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r22)->_type_assignments);
    ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r22)->_type_assignments = cpy_r_r21;
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = ((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "accumulate_type_assignments", "accumulate_type_assignments_ConditionalTypeBinder_env", "self", 263, CPyStatic_binder___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r24);
CPyL16: ;
    cpy_r_r25 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r24)->_type_assignments;
    CPy_INCREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "accumulate_type_assignments", 263, CPyStatic_binder___globals, "dict", cpy_r_r25);
        goto CPyL38;
    }
    if (((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r27 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/binder.py", "accumulate_type_assignments", 263, CPyStatic_binder___globals);
        goto CPyL41;
    }
    return cpy_r_r26;
CPyL19: ;
    cpy_r_r28 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r29 = cpy_r_type != cpy_r_r28;
    if (cpy_r_r29) {
        goto CPyL42;
    } else
        goto CPyL22;
CPyL20: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/binder.py", "accumulate_type_assignments", 263, CPyStatic_binder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r30 = ((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->_old_assignments;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "accumulate_type_assignments", "accumulate_type_assignments_ConditionalTypeBinder_env", "old_assignments", 264, CPyStatic_binder___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r30);
CPyL23: ;
    cpy_r_r31 = ((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "accumulate_type_assignments", "accumulate_type_assignments_ConditionalTypeBinder_env", "self", 264, CPyStatic_binder___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r31);
CPyL24: ;
    CPy_DECREF(((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r31)->_type_assignments);
    ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r31)->_type_assignments = cpy_r_r30;
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = Py_None;
    if (((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r34 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/binder.py", "accumulate_type_assignments", 252, CPyStatic_binder___globals);
        goto CPyL37;
    }
    CPyGen_SetStopIterationValue(cpy_r_r33);
    if (!0) goto CPyL37;
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r35 = cpy_r_r1 & 1;
    cpy_r_r36 = cpy_r_r35 == 0;
    if (!cpy_r_r36) goto CPyL29;
    cpy_r_r37 = cpy_r_r1 == 0;
    cpy_r_r38 = cpy_r_r37;
    goto CPyL30;
CPyL29: ;
    cpy_r_r39 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r38 = cpy_r_r39;
CPyL30: ;
    if (cpy_r_r38) goto CPyL44;
    cpy_r_r40 = cpy_r_r1 & 1;
    cpy_r_r41 = cpy_r_r40 == 0;
    if (!cpy_r_r41) goto CPyL33;
    cpy_r_r42 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r43 = cpy_r_r42;
    goto CPyL34;
CPyL33: ;
    cpy_r_r44 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r43 = cpy_r_r44;
CPyL34: ;
    if (cpy_r_r43) {
        goto CPyL19;
    } else
        goto CPyL45;
CPyL35: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/binder.py", "accumulate_type_assignments", 252, CPyStatic_binder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r46 = NULL;
    return cpy_r_r46;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL37;
CPyL39: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    goto CPyL37;
CPyL41: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL37;
CPyL42: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL20;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r30);
    goto CPyL37;
CPyL44: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL45: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL35;
}

PyObject *CPyPy_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "accumulate_type_assignments", 252, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.binder.accumulate_type_assignments_ConditionalTypeBinder_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "__next__", -1, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_binder___accumulate_type_assignments_ConditionalTypeBinder_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.binder.accumulate_type_assignments_ConditionalTypeBinder_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "send", -1, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.binder.accumulate_type_assignments_ConditionalTypeBinder_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "__iter__", -1, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_binder___accumulate_type_assignments_ConditionalTypeBinder_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.binder.accumulate_type_assignments_ConditionalTypeBinder_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "throw", -1, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp34 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp34);
    PyObject *__tmp35 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp35);
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

PyObject *CPyPy_binder___accumulate_type_assignments_ConditionalTypeBinder_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_binder___accumulate_type_assignments_ConditionalTypeBinder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.binder.accumulate_type_assignments_ConditionalTypeBinder_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "close", -1, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___ConditionalTypeBinder___accumulate_type_assignments(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "accumulate_type_assignments", 252, CPyStatic_binder___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/binder.py", "accumulate_type_assignments", 252, CPyStatic_binder___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_binder___accumulate_type_assignments_ConditionalTypeBinder_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "accumulate_type_assignments", 252, CPyStatic_binder___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/binder.py", "accumulate_type_assignments", 252, CPyStatic_binder___globals);
        goto CPyL8;
    }
    if (((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___binder___accumulate_type_assignments_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/binder.py", "accumulate_type_assignments", 252, CPyStatic_binder___globals);
        goto CPyL9;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___accumulate_type_assignments(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":accumulate_type_assignments", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_binder___ConditionalTypeBinder___accumulate_type_assignments(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "accumulate_type_assignments", 252, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder___assign_type(PyObject *cpy_r_self, PyObject *cpy_r_expr, PyObject *cpy_r_type, PyObject *cpy_r_declared_type, char cpy_r_restrict_any) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
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
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_p_declared;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_p_type;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_enclosing_type;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyPtr cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyPtr cpy_r_r69;
    int64_t cpy_r_r70;
    CPyTagged cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyPtr cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyTagged cpy_r_r82;
    CPyTagged cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyPtr cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyPtr cpy_r_r93;
    int64_t cpy_r_r94;
    PyObject *cpy_r_r95;
    CPyTagged cpy_r_r96;
    CPyPtr cpy_r_r97;
    int64_t cpy_r_r98;
    CPyTagged cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_item_2;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyPtr cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    CPyTagged cpy_r_r110;
    PyObject *cpy_r_new_items;
    PyObject *cpy_r_r111;
    CPyTagged cpy_r_r112;
    CPyTagged cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    CPyPtr cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    CPyPtr cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    CPyTagged cpy_r_r129;
    CPyPtr cpy_r_r130;
    int64_t cpy_r_r131;
    CPyTagged cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_item_3;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    CPyPtr cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    CPyTagged cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    CPyTagged cpy_r_r150;
    CPyTagged cpy_r_i;
    char cpy_r_r151;
    char cpy_r_r152;
    char cpy_r_r153;
    if (cpy_r_restrict_any != 2) goto CPyL2;
    cpy_r_restrict_any = 0;
CPyL2: ;
    cpy_r_r0 = CPyDef_erasetype___remove_instance_last_known_values(cpy_r_type);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 271, CPyStatic_binder___globals);
        goto CPyL95;
    }
    cpy_r_type = cpy_r_r0;
    cpy_r_r1 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_type_assignments;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL9;
    cpy_r_r4 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_type_assignments;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 276, CPyStatic_binder___globals, "dict", cpy_r_r4);
        goto CPyL96;
    }
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r5, cpy_r_expr);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 276, CPyStatic_binder___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 276, CPyStatic_binder___globals, "list", cpy_r_r6);
        goto CPyL96;
    }
    cpy_r_r8.f0 = cpy_r_type;
    cpy_r_r8.f1 = cpy_r_declared_type;
    CPy_INCREF(cpy_r_r8.f0);
    CPy_INCREF(cpy_r_r8.f1);
    CPy_DECREF(cpy_r_type);
    cpy_r_r9 = PyTuple_New(2);
    if (unlikely(cpy_r_r9 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp36 = cpy_r_r8.f0;
    PyTuple_SET_ITEM(cpy_r_r9, 0, __tmp36);
    PyObject *__tmp37 = cpy_r_r8.f1;
    PyTuple_SET_ITEM(cpy_r_r9, 1, __tmp37);
    cpy_r_r10 = PyList_Append(cpy_r_r7, cpy_r_r9);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 276, CPyStatic_binder___globals);
        goto CPyL95;
    }
    return 1;
CPyL9: ;
    cpy_r_r12 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (!cpy_r_r15) goto CPyL11;
    cpy_r_r16 = cpy_r_r15;
    goto CPyL12;
CPyL11: ;
    cpy_r_r17 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    cpy_r_r16 = cpy_r_r20;
CPyL12: ;
    if (!cpy_r_r16) goto CPyL14;
    cpy_r_r21 = cpy_r_r16;
    goto CPyL15;
CPyL14: ;
    cpy_r_r22 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r23 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r24 = *(PyObject * *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 == cpy_r_r22;
    cpy_r_r21 = cpy_r_r25;
CPyL15: ;
    if (cpy_r_r21) {
        goto CPyL17;
    } else
        goto CPyL97;
CPyL16: ;
    return 1;
CPyL17: ;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr)
        cpy_r_r26 = cpy_r_expr;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL38;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr)
        cpy_r_r26 = cpy_r_expr;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL38;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr)
        cpy_r_r26 = cpy_r_expr;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL38;
    CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 280, CPyStatic_binder___globals, "union[mypy.nodes.IndexExpr, mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", cpy_r_expr);
    goto CPyL96;
__LL38: ;
    cpy_r_r27 = CPyDef_mypy___literals___literal(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 280, CPyStatic_binder___globals);
        goto CPyL96;
    }
    cpy_r_r28 = cpy_r_r27 != 0;
    CPyTagged_DECREF(cpy_r_r27);
    if (cpy_r_r28) {
        goto CPyL21;
    } else
        goto CPyL98;
CPyL20: ;
    return 1;
CPyL21: ;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr)
        cpy_r_r29 = cpy_r_expr;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL39;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr)
        cpy_r_r29 = cpy_r_expr;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL39;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr)
        cpy_r_r29 = cpy_r_expr;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL39;
    CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 282, CPyStatic_binder___globals, "union[mypy.nodes.IndexExpr, mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", cpy_r_expr);
    goto CPyL96;
__LL39: ;
    cpy_r_r30 = CPyDef_binder___ConditionalTypeBinder___invalidate_dependencies(cpy_r_self, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 282, CPyStatic_binder___globals);
        goto CPyL96;
    }
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_declared_type == cpy_r_r31;
    if (cpy_r_r32) {
        goto CPyL99;
    } else
        goto CPyL25;
CPyL24: ;
    return 1;
CPyL25: ;
    CPy_INCREF(cpy_r_declared_type);
    if (likely(cpy_r_declared_type != Py_None))
        cpy_r_r33 = cpy_r_declared_type;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 288, CPyStatic_binder___globals, "mypy.types.Type", cpy_r_declared_type);
        goto CPyL96;
    }
    cpy_r_r34 = NULL;
    cpy_r_r35 = 2;
    cpy_r_r36 = 2;
    cpy_r_r37 = 2;
    cpy_r_r38 = 2;
    cpy_r_r39 = 2;
    cpy_r_r40 = NULL;
    cpy_r_r41 = CPyDef_subtypes___is_subtype(cpy_r_type, cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 288, CPyStatic_binder___globals);
        goto CPyL96;
    }
    if (cpy_r_r41) {
        goto CPyL29;
    } else
        goto CPyL100;
CPyL28: ;
    return 1;
CPyL29: ;
    CPy_INCREF(cpy_r_declared_type);
    if (likely(cpy_r_declared_type != Py_None))
        cpy_r_r42 = cpy_r_declared_type;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 297, CPyStatic_binder___globals, "mypy.types.Type", cpy_r_declared_type);
        goto CPyL96;
    }
    cpy_r_r43 = CPyDef_types___get_proper_type(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 297, CPyStatic_binder___globals);
        goto CPyL96;
    }
    if (likely(cpy_r_r43 != Py_None))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 297, CPyStatic_binder___globals, "mypy.types.ProperType", cpy_r_r43);
        goto CPyL96;
    }
    cpy_r_p_declared = cpy_r_r44;
    cpy_r_r45 = CPyDef_types___get_proper_type(cpy_r_type);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 298, CPyStatic_binder___globals);
        goto CPyL101;
    }
    if (likely(cpy_r_r45 != Py_None))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 298, CPyStatic_binder___globals, "mypy.types.ProperType", cpy_r_r45);
        goto CPyL101;
    }
    cpy_r_p_type = cpy_r_r46;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr)
        cpy_r_r47 = cpy_r_expr;
    else {
        cpy_r_r47 = NULL;
    }
    if (cpy_r_r47 != NULL) goto __LL40;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr)
        cpy_r_r47 = cpy_r_expr;
    else {
        cpy_r_r47 = NULL;
    }
    if (cpy_r_r47 != NULL) goto __LL40;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr)
        cpy_r_r47 = cpy_r_expr;
    else {
        cpy_r_r47 = NULL;
    }
    if (cpy_r_r47 != NULL) goto __LL40;
    CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 299, CPyStatic_binder___globals, "union[mypy.nodes.IndexExpr, mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", cpy_r_expr);
    goto CPyL102;
__LL40: ;
    cpy_r_r48 = CPyDef_binder___ConditionalTypeBinder___most_recent_enclosing_type(cpy_r_self, cpy_r_r47, cpy_r_type);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 299, CPyStatic_binder___globals);
        goto CPyL102;
    }
    cpy_r_r49 = CPyDef_types___get_proper_type(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 299, CPyStatic_binder___globals);
        goto CPyL102;
    }
    cpy_r_enclosing_type = cpy_r_r49;
    cpy_r_r50 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r51 = (CPyPtr)&((PyObject *)cpy_r_enclosing_type)->ob_type;
    cpy_r_r52 = *(PyObject * *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 == cpy_r_r50;
    if (!cpy_r_r53) goto CPyL103;
    if (cpy_r_restrict_any) {
        goto CPyL103;
    } else
        goto CPyL104;
CPyL39: ;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr)
        cpy_r_r54 = cpy_r_expr;
    else {
        cpy_r_r54 = NULL;
    }
    if (cpy_r_r54 != NULL) goto __LL41;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr)
        cpy_r_r54 = cpy_r_expr;
    else {
        cpy_r_r54 = NULL;
    }
    if (cpy_r_r54 != NULL) goto __LL41;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr)
        cpy_r_r54 = cpy_r_expr;
    else {
        cpy_r_r54 = NULL;
    }
    if (cpy_r_r54 != NULL) goto __LL41;
    CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 306, CPyStatic_binder___globals, "union[mypy.nodes.IndexExpr, mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", cpy_r_expr);
    goto CPyL105;
__LL41: ;
    if (likely(Py_TYPE(cpy_r_enclosing_type) == CPyType_types___AnyType))
        cpy_r_r55 = cpy_r_enclosing_type;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 306, CPyStatic_binder___globals, "mypy.types.AnyType", cpy_r_enclosing_type);
        goto CPyL106;
    }
    cpy_r_r56 = CPyDef_binder___ConditionalTypeBinder___put(cpy_r_self, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 306, CPyStatic_binder___globals);
        goto CPyL95;
    } else
        goto CPyL88;
CPyL42: ;
    cpy_r_r57 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r58 = (CPyPtr)&((PyObject *)cpy_r_p_type)->ob_type;
    cpy_r_r59 = *(PyObject * *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 == cpy_r_r57;
    if (!cpy_r_r60) goto CPyL72;
    cpy_r_r61 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r62 = (CPyPtr)&((PyObject *)cpy_r_p_declared)->ob_type;
    cpy_r_r63 = *(PyObject * *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 == cpy_r_r61;
    if (!cpy_r_r64) goto CPyL72;
    cpy_r_r65 = 0;
    if (likely(Py_TYPE(cpy_r_p_declared) == CPyType_types___UnionType))
        cpy_r_r66 = cpy_r_p_declared;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 316, CPyStatic_binder___globals, "mypy.types.UnionType", cpy_r_p_declared);
        goto CPyL102;
    }
    cpy_r_r67 = ((mypy___types___UnionTypeObject *)cpy_r_r66)->_items;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = 0;
CPyL46: ;
    cpy_r_r69 = (CPyPtr)&((PyVarObject *)cpy_r_r67)->ob_size;
    cpy_r_r70 = *(int64_t *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 << 1;
    cpy_r_r72 = (Py_ssize_t)cpy_r_r68 < (Py_ssize_t)cpy_r_r71;
    if (!cpy_r_r72) goto CPyL107;
    cpy_r_r73 = CPyList_GetItemUnsafe(cpy_r_r67, cpy_r_r68);
    if (likely(PyObject_TypeCheck(cpy_r_r73, CPyType_types___Type)))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 316, CPyStatic_binder___globals, "mypy.types.Type", cpy_r_r73);
        goto CPyL108;
    }
    cpy_r_item = cpy_r_r74;
    cpy_r_r75 = CPyDef_types___get_proper_type(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 316, CPyStatic_binder___globals);
        goto CPyL108;
    }
    cpy_r_r76 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r77 = (CPyPtr)&((PyObject *)cpy_r_r75)->ob_type;
    cpy_r_r78 = *(PyObject * *)cpy_r_r77;
    CPy_DECREF(cpy_r_r75);
    cpy_r_r79 = cpy_r_r78 == cpy_r_r76;
    if (cpy_r_r79) {
        goto CPyL109;
    } else
        goto CPyL51;
CPyL50: ;
    cpy_r_r65 = 1;
    goto CPyL52;
CPyL51: ;
    cpy_r_r80 = cpy_r_r68 + 2;
    cpy_r_r68 = cpy_r_r80;
    goto CPyL46;
CPyL52: ;
    if (!cpy_r_r65) goto CPyL72;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr)
        cpy_r_r81 = cpy_r_expr;
    else {
        cpy_r_r81 = NULL;
    }
    if (cpy_r_r81 != NULL) goto __LL42;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr)
        cpy_r_r81 = cpy_r_expr;
    else {
        cpy_r_r81 = NULL;
    }
    if (cpy_r_r81 != NULL) goto __LL42;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr)
        cpy_r_r81 = cpy_r_expr;
    else {
        cpy_r_r81 = NULL;
    }
    if (cpy_r_r81 != NULL) goto __LL42;
    CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 318, CPyStatic_binder___globals, "union[mypy.nodes.IndexExpr, mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", cpy_r_expr);
    goto CPyL102;
__LL42: ;
    cpy_r_r82 = CPY_INT_TAG;
    cpy_r_r83 = CPY_INT_TAG;
    cpy_r_r84 = CPyDef_types___NoneType(cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 318, CPyStatic_binder___globals);
        goto CPyL110;
    }
    cpy_r_r85 = CPyDef_binder___ConditionalTypeBinder___most_recent_enclosing_type(cpy_r_self, cpy_r_r81, cpy_r_r84);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 318, CPyStatic_binder___globals);
        goto CPyL102;
    }
    cpy_r_r86 = CPyDef_types___get_proper_type(cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 318, CPyStatic_binder___globals);
        goto CPyL102;
    }
    cpy_r_r87 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r88 = (CPyPtr)&((PyObject *)cpy_r_r86)->ob_type;
    cpy_r_r89 = *(PyObject * *)cpy_r_r88;
    CPy_DECREF(cpy_r_r86);
    cpy_r_r90 = cpy_r_r89 == cpy_r_r87;
    if (cpy_r_r90) {
        goto CPyL111;
    } else
        goto CPyL72;
CPyL58: ;
    if (likely(Py_TYPE(cpy_r_p_declared) == CPyType_types___UnionType))
        cpy_r_r91 = cpy_r_p_declared;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 324, CPyStatic_binder___globals, "mypy.types.UnionType", cpy_r_p_declared);
        goto CPyL101;
    }
    cpy_r_r92 = ((mypy___types___UnionTypeObject *)cpy_r_r91)->_items;
    CPy_INCREF(cpy_r_r92);
    CPy_DECREF(cpy_r_p_declared);
    cpy_r_r93 = (CPyPtr)&((PyVarObject *)cpy_r_r92)->ob_size;
    cpy_r_r94 = *(int64_t *)cpy_r_r93;
    cpy_r_r95 = PyList_New(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 322, CPyStatic_binder___globals);
        goto CPyL112;
    }
    cpy_r_r96 = 0;
CPyL61: ;
    cpy_r_r97 = (CPyPtr)&((PyVarObject *)cpy_r_r92)->ob_size;
    cpy_r_r98 = *(int64_t *)cpy_r_r97;
    cpy_r_r99 = cpy_r_r98 << 1;
    cpy_r_r100 = (Py_ssize_t)cpy_r_r96 < (Py_ssize_t)cpy_r_r99;
    if (!cpy_r_r100) goto CPyL113;
    cpy_r_r101 = CPyList_GetItemUnsafe(cpy_r_r92, cpy_r_r96);
    if (likely(PyObject_TypeCheck(cpy_r_r101, CPyType_types___Type)))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 322, CPyStatic_binder___globals, "mypy.types.Type", cpy_r_r101);
        goto CPyL114;
    }
    cpy_r_item_2 = cpy_r_r102;
    cpy_r_r103 = CPyDef_types___get_proper_type(cpy_r_item_2);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 323, CPyStatic_binder___globals);
        goto CPyL115;
    }
    cpy_r_r104 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r105 = (CPyPtr)&((PyObject *)cpy_r_r103)->ob_type;
    cpy_r_r106 = *(PyObject * *)cpy_r_r105;
    CPy_DECREF(cpy_r_r103);
    cpy_r_r107 = cpy_r_r106 == cpy_r_r104;
    if (cpy_r_r107) {
        goto CPyL116;
    } else
        goto CPyL66;
CPyL65: ;
    CPy_INCREF(cpy_r_type);
    cpy_r_r108 = cpy_r_type;
    goto CPyL67;
CPyL66: ;
    cpy_r_r108 = cpy_r_item_2;
CPyL67: ;
    cpy_r_r109 = CPyList_SetItemUnsafe(cpy_r_r95, cpy_r_r96, cpy_r_r108);
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 322, CPyStatic_binder___globals);
        goto CPyL114;
    }
    cpy_r_r110 = cpy_r_r96 + 2;
    cpy_r_r96 = cpy_r_r110;
    goto CPyL61;
CPyL69: ;
    cpy_r_new_items = cpy_r_r95;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr)
        cpy_r_r111 = cpy_r_expr;
    else {
        cpy_r_r111 = NULL;
    }
    if (cpy_r_r111 != NULL) goto __LL43;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr)
        cpy_r_r111 = cpy_r_expr;
    else {
        cpy_r_r111 = NULL;
    }
    if (cpy_r_r111 != NULL) goto __LL43;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr)
        cpy_r_r111 = cpy_r_expr;
    else {
        cpy_r_r111 = NULL;
    }
    if (cpy_r_r111 != NULL) goto __LL43;
    CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 326, CPyStatic_binder___globals, "union[mypy.nodes.IndexExpr, mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", cpy_r_expr);
    goto CPyL117;
__LL43: ;
    cpy_r_r112 = CPY_INT_TAG;
    cpy_r_r113 = CPY_INT_TAG;
    cpy_r_r114 = 2;
    cpy_r_r115 = 2;
    cpy_r_r116 = CPyDef_types___UnionType(cpy_r_new_items, cpy_r_r112, cpy_r_r113, cpy_r_r114, cpy_r_r115);
    CPy_DECREF(cpy_r_new_items);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 326, CPyStatic_binder___globals);
        goto CPyL118;
    }
    cpy_r_r117 = CPyDef_binder___ConditionalTypeBinder___put(cpy_r_self, cpy_r_r111, cpy_r_r116);
    CPy_DECREF(cpy_r_r111);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 326, CPyStatic_binder___globals);
        goto CPyL95;
    } else
        goto CPyL88;
CPyL72: ;
    cpy_r_r118 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r119 = (CPyPtr)&((PyObject *)cpy_r_p_type)->ob_type;
    cpy_r_r120 = *(PyObject * *)cpy_r_r119;
    CPy_DECREF(cpy_r_p_type);
    cpy_r_r121 = cpy_r_r120 == cpy_r_r118;
    if (!cpy_r_r121) goto CPyL119;
    cpy_r_r122 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r123 = (CPyPtr)&((PyObject *)cpy_r_p_declared)->ob_type;
    cpy_r_r124 = *(PyObject * *)cpy_r_r123;
    cpy_r_r125 = cpy_r_r124 == cpy_r_r122;
    if (!cpy_r_r125) goto CPyL120;
    cpy_r_r126 = 0;
    if (likely(Py_TYPE(cpy_r_p_declared) == CPyType_types___UnionType))
        cpy_r_r127 = cpy_r_p_declared;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 329, CPyStatic_binder___globals, "mypy.types.UnionType", cpy_r_p_declared);
        goto CPyL101;
    }
    cpy_r_r128 = ((mypy___types___UnionTypeObject *)cpy_r_r127)->_items;
    CPy_INCREF(cpy_r_r128);
    CPy_DECREF(cpy_r_p_declared);
    cpy_r_r129 = 0;
CPyL76: ;
    cpy_r_r130 = (CPyPtr)&((PyVarObject *)cpy_r_r128)->ob_size;
    cpy_r_r131 = *(int64_t *)cpy_r_r130;
    cpy_r_r132 = cpy_r_r131 << 1;
    cpy_r_r133 = (Py_ssize_t)cpy_r_r129 < (Py_ssize_t)cpy_r_r132;
    if (!cpy_r_r133) goto CPyL121;
    cpy_r_r134 = CPyList_GetItemUnsafe(cpy_r_r128, cpy_r_r129);
    if (likely(PyObject_TypeCheck(cpy_r_r134, CPyType_types___Type)))
        cpy_r_r135 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 329, CPyStatic_binder___globals, "mypy.types.Type", cpy_r_r134);
        goto CPyL122;
    }
    cpy_r_item_3 = cpy_r_r135;
    cpy_r_r136 = CPyDef_types___get_proper_type(cpy_r_item_3);
    CPy_DECREF(cpy_r_item_3);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 329, CPyStatic_binder___globals);
        goto CPyL122;
    }
    cpy_r_r137 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r138 = (CPyPtr)&((PyObject *)cpy_r_r136)->ob_type;
    cpy_r_r139 = *(PyObject * *)cpy_r_r138;
    CPy_DECREF(cpy_r_r136);
    cpy_r_r140 = cpy_r_r139 == cpy_r_r137;
    if (cpy_r_r140) {
        goto CPyL123;
    } else
        goto CPyL81;
CPyL80: ;
    cpy_r_r126 = 1;
    goto CPyL82;
CPyL81: ;
    cpy_r_r141 = cpy_r_r129 + 2;
    cpy_r_r129 = cpy_r_r141;
    goto CPyL76;
CPyL82: ;
    if (cpy_r_r126) {
        goto CPyL86;
    } else
        goto CPyL124;
CPyL83: ;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr)
        cpy_r_r142 = cpy_r_expr;
    else {
        cpy_r_r142 = NULL;
    }
    if (cpy_r_r142 != NULL) goto __LL44;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr)
        cpy_r_r142 = cpy_r_expr;
    else {
        cpy_r_r142 = NULL;
    }
    if (cpy_r_r142 != NULL) goto __LL44;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr)
        cpy_r_r142 = cpy_r_expr;
    else {
        cpy_r_r142 = NULL;
    }
    if (cpy_r_r142 != NULL) goto __LL44;
    CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 333, CPyStatic_binder___globals, "union[mypy.nodes.IndexExpr, mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", cpy_r_expr);
    goto CPyL95;
__LL44: ;
    CPy_INCREF(cpy_r_declared_type);
    if (likely(cpy_r_declared_type != Py_None))
        cpy_r_r143 = cpy_r_declared_type;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 333, CPyStatic_binder___globals, "mypy.types.Type", cpy_r_declared_type);
        goto CPyL125;
    }
    cpy_r_r144 = CPyDef_binder___ConditionalTypeBinder___put(cpy_r_self, cpy_r_r142, cpy_r_r143);
    CPy_DECREF(cpy_r_r142);
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r144 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 333, CPyStatic_binder___globals);
        goto CPyL95;
    } else
        goto CPyL88;
CPyL86: ;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr)
        cpy_r_r145 = cpy_r_expr;
    else {
        cpy_r_r145 = NULL;
    }
    if (cpy_r_r145 != NULL) goto __LL45;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr)
        cpy_r_r145 = cpy_r_expr;
    else {
        cpy_r_r145 = NULL;
    }
    if (cpy_r_r145 != NULL) goto __LL45;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr)
        cpy_r_r145 = cpy_r_expr;
    else {
        cpy_r_r145 = NULL;
    }
    if (cpy_r_r145 != NULL) goto __LL45;
    CPy_TypeErrorTraceback("mypy/binder.py", "assign_type", 335, CPyStatic_binder___globals, "union[mypy.nodes.IndexExpr, mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", cpy_r_expr);
    goto CPyL96;
__LL45: ;
    cpy_r_r146 = CPyDef_binder___ConditionalTypeBinder___put(cpy_r_self, cpy_r_r145, cpy_r_type);
    CPy_DECREF(cpy_r_r145);
    CPy_DECREF(cpy_r_type);
    if (unlikely(cpy_r_r146 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 335, CPyStatic_binder___globals);
        goto CPyL95;
    }
CPyL88: ;
    cpy_r_r147 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_try_frames;
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "assign_type", "ConditionalTypeBinder", "try_frames", 337, CPyStatic_binder___globals);
        goto CPyL95;
    }
    CPy_INCREF(cpy_r_r147);
CPyL89: ;
    cpy_r_r148 = PyObject_GetIter(cpy_r_r147);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 337, CPyStatic_binder___globals);
        goto CPyL95;
    }
CPyL90: ;
    cpy_r_r149 = PyIter_Next(cpy_r_r148);
    if (cpy_r_r149 == NULL) goto CPyL126;
    if (likely(PyLong_Check(cpy_r_r149)))
        cpy_r_r150 = CPyTagged_FromObject(cpy_r_r149);
    else {
        CPy_TypeError("int", cpy_r_r149); cpy_r_r150 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r150 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 337, CPyStatic_binder___globals);
        goto CPyL127;
    }
    cpy_r_i = cpy_r_r150;
    cpy_r_r151 = CPyDef_binder___ConditionalTypeBinder___allow_jump(cpy_r_self, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r151 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 340, CPyStatic_binder___globals);
        goto CPyL127;
    } else
        goto CPyL90;
CPyL93: ;
    cpy_r_r152 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("mypy/binder.py", "assign_type", 337, CPyStatic_binder___globals);
        goto CPyL95;
    }
    return 1;
CPyL95: ;
    cpy_r_r153 = 2;
    return cpy_r_r153;
CPyL96: ;
    CPy_DecRef(cpy_r_type);
    goto CPyL95;
CPyL97: ;
    CPy_DECREF(cpy_r_type);
    goto CPyL16;
CPyL98: ;
    CPy_DECREF(cpy_r_type);
    goto CPyL20;
CPyL99: ;
    CPy_DECREF(cpy_r_type);
    goto CPyL24;
CPyL100: ;
    CPy_DECREF(cpy_r_type);
    goto CPyL28;
CPyL101: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_p_declared);
    goto CPyL95;
CPyL102: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_p_declared);
    CPy_DecRef(cpy_r_p_type);
    goto CPyL95;
CPyL103: ;
    CPy_DECREF(cpy_r_enclosing_type);
    goto CPyL42;
CPyL104: ;
    CPy_DECREF(cpy_r_type);
    CPy_DECREF(cpy_r_p_declared);
    CPy_DECREF(cpy_r_p_type);
    goto CPyL39;
CPyL105: ;
    CPy_DecRef(cpy_r_enclosing_type);
    goto CPyL95;
CPyL106: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL95;
CPyL107: ;
    CPy_DECREF(cpy_r_r67);
    goto CPyL52;
CPyL108: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_p_declared);
    CPy_DecRef(cpy_r_p_type);
    CPy_DecRef(cpy_r_r67);
    goto CPyL95;
CPyL109: ;
    CPy_DECREF(cpy_r_r67);
    goto CPyL50;
CPyL110: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_p_declared);
    CPy_DecRef(cpy_r_p_type);
    CPy_DecRef(cpy_r_r81);
    goto CPyL95;
CPyL111: ;
    CPy_DECREF(cpy_r_p_type);
    goto CPyL58;
CPyL112: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_r92);
    goto CPyL95;
CPyL113: ;
    CPy_DECREF(cpy_r_type);
    CPy_DECREF(cpy_r_r92);
    goto CPyL69;
CPyL114: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r95);
    goto CPyL95;
CPyL115: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_item_2);
    goto CPyL95;
CPyL116: ;
    CPy_DECREF(cpy_r_item_2);
    goto CPyL65;
CPyL117: ;
    CPy_DecRef(cpy_r_new_items);
    goto CPyL95;
CPyL118: ;
    CPy_DecRef(cpy_r_r111);
    goto CPyL95;
CPyL119: ;
    CPy_DECREF(cpy_r_p_declared);
    goto CPyL86;
CPyL120: ;
    CPy_DECREF(cpy_r_type);
    CPy_DECREF(cpy_r_p_declared);
    goto CPyL83;
CPyL121: ;
    CPy_DECREF(cpy_r_r128);
    goto CPyL82;
CPyL122: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_r128);
    goto CPyL95;
CPyL123: ;
    CPy_DECREF(cpy_r_r128);
    goto CPyL80;
CPyL124: ;
    CPy_DECREF(cpy_r_type);
    goto CPyL83;
CPyL125: ;
    CPy_DecRef(cpy_r_r142);
    goto CPyL95;
CPyL126: ;
    CPy_DECREF(cpy_r_r148);
    goto CPyL93;
CPyL127: ;
    CPy_DecRef(cpy_r_r148);
    goto CPyL95;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___assign_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", "type", "declared_type", "restrict_any", 0};
    static CPyArg_Parser parser = {"OOO|O:assign_type", kwlist, 0};
    PyObject *obj_expr;
    PyObject *obj_type;
    PyObject *obj_declared_type;
    PyObject *obj_restrict_any = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr, &obj_type, &obj_declared_type, &obj_restrict_any)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *arg_type;
    if (likely(PyObject_TypeCheck(obj_type, CPyType_types___Type)))
        arg_type = obj_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_type); 
        goto fail;
    }
    PyObject *arg_declared_type;
    if (PyObject_TypeCheck(obj_declared_type, CPyType_types___Type))
        arg_declared_type = obj_declared_type;
    else {
        arg_declared_type = NULL;
    }
    if (arg_declared_type != NULL) goto __LL46;
    if (obj_declared_type == Py_None)
        arg_declared_type = obj_declared_type;
    else {
        arg_declared_type = NULL;
    }
    if (arg_declared_type != NULL) goto __LL46;
    CPy_TypeError("mypy.types.Type or None", obj_declared_type); 
    goto fail;
__LL46: ;
    char arg_restrict_any;
    if (obj_restrict_any == NULL) {
        arg_restrict_any = 2;
    } else if (unlikely(!PyBool_Check(obj_restrict_any))) {
        CPy_TypeError("bool", obj_restrict_any); goto fail;
    } else
        arg_restrict_any = obj_restrict_any == Py_True;
    char retval = CPyDef_binder___ConditionalTypeBinder___assign_type(arg_self, arg_expr, arg_type, arg_declared_type, arg_restrict_any);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "assign_type", 266, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder___invalidate_dependencies(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_dep;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = CPyDef_mypy___literals___literal_hash(cpy_r_expr);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "invalidate_dependencies", 350, CPyStatic_binder___globals);
        goto CPyL15;
    }
    cpy_r_key = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_key != cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL4;
    } else
        goto CPyL16;
CPyL2: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/binder.py", "invalidate_dependencies", 351, CPyStatic_binder___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r4 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_dependencies;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "invalidate_dependencies", "ConditionalTypeBinder", "dependencies", 352, CPyStatic_binder___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    if (likely(cpy_r_key != Py_None))
        cpy_r_r5 = cpy_r_key;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "invalidate_dependencies", 352, CPyStatic_binder___globals, "tuple", cpy_r_key);
        goto CPyL18;
    }
    cpy_r_r6 = PySet_New(NULL);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "invalidate_dependencies", 352, CPyStatic_binder___globals);
        goto CPyL19;
    }
    cpy_r_r7 = CPyDict_Get(cpy_r_r4, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "invalidate_dependencies", 352, CPyStatic_binder___globals);
        goto CPyL15;
    }
    if (likely(PySet_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "invalidate_dependencies", 352, CPyStatic_binder___globals, "set", cpy_r_r7);
        goto CPyL15;
    }
    cpy_r_r9 = PyObject_GetIter(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "invalidate_dependencies", 352, CPyStatic_binder___globals);
        goto CPyL15;
    }
CPyL10: ;
    cpy_r_r10 = PyIter_Next(cpy_r_r9);
    if (cpy_r_r10 == NULL) goto CPyL20;
    if (likely(PyTuple_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "invalidate_dependencies", 352, CPyStatic_binder___globals, "tuple", cpy_r_r10);
        goto CPyL21;
    }
    cpy_r_dep = cpy_r_r11;
    cpy_r_r12 = CPyDef_binder___ConditionalTypeBinder____cleanse_key(cpy_r_self, cpy_r_dep);
    CPy_DECREF(cpy_r_dep);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "invalidate_dependencies", 353, CPyStatic_binder___globals);
        goto CPyL21;
    } else
        goto CPyL10;
CPyL13: ;
    cpy_r_r13 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/binder.py", "invalidate_dependencies", 352, CPyStatic_binder___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL16: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL2;
CPyL17: ;
    CPy_DecRef(cpy_r_key);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL15;
CPyL20: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL13;
CPyL21: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL15;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___invalidate_dependencies(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:invalidate_dependencies", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (Py_TYPE(obj_expr) == CPyType_nodes___IndexExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL47;
    if (Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL47;
    if (Py_TYPE(obj_expr) == CPyType_nodes___NameExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL47;
    CPy_TypeError("union[mypy.nodes.IndexExpr, mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", obj_expr); 
    goto fail;
__LL47: ;
    char retval = CPyDef_binder___ConditionalTypeBinder___invalidate_dependencies(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "invalidate_dependencies", 342, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___ConditionalTypeBinder___most_recent_enclosing_type(PyObject *cpy_r_self, PyObject *cpy_r_expr, PyObject *cpy_r_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r24;
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
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_enclosers;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_type);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "most_recent_enclosing_type", 356, CPyStatic_binder___globals);
        goto CPyL37;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "most_recent_enclosing_type", 356, CPyStatic_binder___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL37;
    }
    cpy_r_type = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_type)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL38;
    } else
        goto CPyL5;
CPyL3: ;
    cpy_r_r6 = CPyDef_binder___get_declaration(cpy_r_expr);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "most_recent_enclosing_type", 358, CPyStatic_binder___globals);
        goto CPyL37;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = CPyDef_mypy___literals___literal_hash(cpy_r_expr);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "most_recent_enclosing_type", 359, CPyStatic_binder___globals);
        goto CPyL39;
    }
    cpy_r_key = cpy_r_r7;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_key != cpy_r_r8;
    if (cpy_r_r9) {
        goto CPyL9;
    } else
        goto CPyL40;
CPyL7: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/binder.py", "most_recent_enclosing_type", 360, CPyStatic_binder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r11 = CPyDef_binder___get_declaration(cpy_r_expr);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "most_recent_enclosing_type", 361, CPyStatic_binder___globals);
        goto CPyL41;
    }
    cpy_r_r12 = PyList_New(1);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "most_recent_enclosing_type", 361, CPyStatic_binder___globals);
        goto CPyL42;
    }
    cpy_r_r13 = (CPyPtr)&((PyListObject *)cpy_r_r12)->ob_item;
    cpy_r_r14 = *(CPyPtr *)cpy_r_r13;
    *(PyObject * *)cpy_r_r14 = cpy_r_r11;
    cpy_r_r15 = PyList_New(0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "most_recent_enclosing_type", 361, CPyStatic_binder___globals);
        goto CPyL43;
    }
    cpy_r_r16 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "most_recent_enclosing_type", "ConditionalTypeBinder", "frames", 362, CPyStatic_binder___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r16);
CPyL13: ;
    cpy_r_r17 = 0;
CPyL14: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL45;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r17);
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_binder___Frame))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "most_recent_enclosing_type", 361, CPyStatic_binder___globals, "mypy.binder.Frame", cpy_r_r22);
        goto CPyL46;
    }
    cpy_r_f = cpy_r_r23;
    CPy_INCREF(cpy_r_key);
    if (likely(cpy_r_key != Py_None))
        cpy_r_r24 = cpy_r_key;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "most_recent_enclosing_type", 362, CPyStatic_binder___globals, "tuple", cpy_r_key);
        goto CPyL47;
    }
    cpy_r_r25 = ((mypy___binder___FrameObject *)cpy_r_f)->_types;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = PyDict_Contains(cpy_r_r25, cpy_r_r24);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/binder.py", "most_recent_enclosing_type", 362, CPyStatic_binder___globals);
        goto CPyL47;
    }
    cpy_r_r28 = cpy_r_r26;
    if (cpy_r_r28) goto CPyL20;
    cpy_r_r29 = cpy_r_r28;
    goto CPyL26;
CPyL20: ;
    CPy_INCREF(cpy_r_type);
    if (likely(PyObject_TypeCheck(cpy_r_type, CPyType_types___ProperType)))
        cpy_r_r30 = cpy_r_type;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "most_recent_enclosing_type", 362, CPyStatic_binder___globals, "mypy.types.ProperType", cpy_r_type);
        goto CPyL47;
    }
    cpy_r_r31 = ((mypy___binder___FrameObject *)cpy_r_f)->_types;
    CPy_INCREF(cpy_r_r31);
    CPy_INCREF(cpy_r_key);
    if (likely(cpy_r_key != Py_None))
        cpy_r_r32 = cpy_r_key;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "most_recent_enclosing_type", 362, CPyStatic_binder___globals, "tuple", cpy_r_key);
        goto CPyL48;
    }
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "most_recent_enclosing_type", 362, CPyStatic_binder___globals);
        goto CPyL49;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r33, CPyType_types___Type)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "most_recent_enclosing_type", 362, CPyStatic_binder___globals, "mypy.types.Type", cpy_r_r33);
        goto CPyL49;
    }
    cpy_r_r35 = NULL;
    cpy_r_r36 = 2;
    cpy_r_r37 = 2;
    cpy_r_r38 = 2;
    cpy_r_r39 = 2;
    cpy_r_r40 = 2;
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPyDef_subtypes___is_subtype(cpy_r_r30, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "most_recent_enclosing_type", 362, CPyStatic_binder___globals);
        goto CPyL47;
    }
    cpy_r_r29 = cpy_r_r42;
CPyL26: ;
    if (!cpy_r_r29) goto CPyL50;
    cpy_r_r43 = ((mypy___binder___FrameObject *)cpy_r_f)->_types;
    CPy_INCREF(cpy_r_r43);
    CPy_DECREF(cpy_r_f);
    CPy_INCREF(cpy_r_key);
    if (likely(cpy_r_key != Py_None))
        cpy_r_r44 = cpy_r_key;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "most_recent_enclosing_type", 362, CPyStatic_binder___globals, "tuple", cpy_r_key);
        goto CPyL51;
    }
    cpy_r_r45 = CPyDict_GetItem(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "most_recent_enclosing_type", 362, CPyStatic_binder___globals);
        goto CPyL46;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r45, CPyType_types___Type)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "most_recent_enclosing_type", 362, CPyStatic_binder___globals, "mypy.types.Type", cpy_r_r45);
        goto CPyL46;
    }
    cpy_r_r47 = PyList_Append(cpy_r_r15, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/binder.py", "most_recent_enclosing_type", 361, CPyStatic_binder___globals);
        goto CPyL46;
    }
CPyL31: ;
    cpy_r_r49 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r49;
    goto CPyL14;
CPyL32: ;
    cpy_r_r50 = PyNumber_Add(cpy_r_r12, cpy_r_r15);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "most_recent_enclosing_type", 361, CPyStatic_binder___globals);
        goto CPyL37;
    }
    if (likely(PyList_Check(cpy_r_r50)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "most_recent_enclosing_type", 361, CPyStatic_binder___globals, "list", cpy_r_r50);
        goto CPyL37;
    }
    cpy_r_enclosers = cpy_r_r51;
    cpy_r_r52 = CPyList_GetItemShort(cpy_r_enclosers, -2);
    CPy_DECREF(cpy_r_enclosers);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "most_recent_enclosing_type", 364, CPyStatic_binder___globals);
        goto CPyL37;
    }
    if (PyObject_TypeCheck(cpy_r_r52, CPyType_types___Type))
        cpy_r_r53 = cpy_r_r52;
    else {
        cpy_r_r53 = NULL;
    }
    if (cpy_r_r53 != NULL) goto __LL48;
    if (cpy_r_r52 == Py_None)
        cpy_r_r53 = cpy_r_r52;
    else {
        cpy_r_r53 = NULL;
    }
    if (cpy_r_r53 != NULL) goto __LL48;
    CPy_TypeErrorTraceback("mypy/binder.py", "most_recent_enclosing_type", 364, CPyStatic_binder___globals, "mypy.types.Type or None", cpy_r_r52);
    goto CPyL37;
__LL48: ;
    return cpy_r_r53;
CPyL37: ;
    cpy_r_r54 = NULL;
    return cpy_r_r54;
CPyL38: ;
    CPy_DECREF(cpy_r_type);
    goto CPyL3;
CPyL39: ;
    CPy_DecRef(cpy_r_type);
    goto CPyL37;
CPyL40: ;
    CPy_DECREF(cpy_r_type);
    CPy_DECREF(cpy_r_key);
    goto CPyL7;
CPyL41: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_key);
    goto CPyL37;
CPyL42: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r11);
    goto CPyL37;
CPyL43: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r12);
    goto CPyL37;
CPyL44: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    goto CPyL37;
CPyL45: ;
    CPy_DECREF(cpy_r_type);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r16);
    goto CPyL32;
CPyL46: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    goto CPyL37;
CPyL47: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_f);
    goto CPyL37;
CPyL48: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_f);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    goto CPyL37;
CPyL49: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_f);
    CPy_DecRef(cpy_r_r30);
    goto CPyL37;
CPyL50: ;
    CPy_DECREF(cpy_r_f);
    goto CPyL31;
CPyL51: ;
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r43);
    goto CPyL37;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___most_recent_enclosing_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", "type", 0};
    static CPyArg_Parser parser = {"OO:most_recent_enclosing_type", kwlist, 0};
    PyObject *obj_expr;
    PyObject *obj_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr, &obj_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (Py_TYPE(obj_expr) == CPyType_nodes___IndexExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL49;
    if (Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL49;
    if (Py_TYPE(obj_expr) == CPyType_nodes___NameExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL49;
    CPy_TypeError("union[mypy.nodes.IndexExpr, mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", obj_expr); 
    goto fail;
__LL49: ;
    PyObject *arg_type;
    if (likely(PyObject_TypeCheck(obj_type, CPyType_types___Type)))
        arg_type = obj_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_type); 
        goto fail;
    }
    PyObject *retval = CPyDef_binder___ConditionalTypeBinder___most_recent_enclosing_type(arg_self, arg_expr, arg_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "most_recent_enclosing_type", 355, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder___allow_jump(PyObject *cpy_r_self, CPyTagged cpy_r_index) {
    int64_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_frame;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    cpy_r_r0 = cpy_r_index & 1;
    cpy_r_r1 = cpy_r_r0 != 0;
    if (!cpy_r_r1) goto CPyL2;
    cpy_r_r2 = CPyTagged_IsLt_(cpy_r_index, 0);
    if (cpy_r_r2) {
        goto CPyL3;
    } else
        goto CPyL23;
CPyL2: ;
    cpy_r_r3 = (Py_ssize_t)cpy_r_index < (Py_ssize_t)0;
    if (!cpy_r_r3) goto CPyL23;
CPyL3: ;
    cpy_r_r4 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_options_on_return;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "allow_jump", "ConditionalTypeBinder", "options_on_return", 370, CPyStatic_binder___globals);
        goto CPyL22;
    }
CPyL4: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = CPyTagged_Add(cpy_r_index, cpy_r_r7);
    cpy_r_index = cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = CPyDef_binder___ConditionalTypeBinder____get_id(cpy_r_self);
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/binder.py", "allow_jump", 371, CPyStatic_binder___globals);
        goto CPyL24;
    }
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_binder___Frame(cpy_r_r9, cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "allow_jump", 371, CPyStatic_binder___globals);
        goto CPyL24;
    }
    cpy_r_frame = cpy_r_r11;
    cpy_r_r12 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_frames;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "allow_jump", "ConditionalTypeBinder", "frames", 372, CPyStatic_binder___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r12);
CPyL8: ;
    cpy_r_r13 = CPyTagged_Add(cpy_r_index, 2);
    cpy_r_r14 = CPyList_GetSlice(cpy_r_r12, cpy_r_r13, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "allow_jump", 372, CPyStatic_binder___globals);
        goto CPyL25;
    }
    if (likely(PyList_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "allow_jump", 372, CPyStatic_binder___globals, "list", cpy_r_r14);
        goto CPyL25;
    }
    cpy_r_r16 = 0;
CPyL11: ;
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_r15)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = (Py_ssize_t)cpy_r_r16 < (Py_ssize_t)cpy_r_r19;
    if (!cpy_r_r20) goto CPyL26;
    cpy_r_r21 = CPyList_GetItemUnsafe(cpy_r_r15, cpy_r_r16);
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_binder___Frame))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "allow_jump", 372, CPyStatic_binder___globals, "mypy.binder.Frame", cpy_r_r21);
        goto CPyL27;
    }
    cpy_r_f = cpy_r_r22;
    cpy_r_r23 = ((mypy___binder___FrameObject *)cpy_r_frame)->_types;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = ((mypy___binder___FrameObject *)cpy_r_f)->_types;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyDict_Update(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/binder.py", "allow_jump", 373, CPyStatic_binder___globals);
        goto CPyL28;
    }
    cpy_r_r27 = ((mypy___binder___FrameObject *)cpy_r_f)->_unreachable;
    CPy_DECREF(cpy_r_f);
    if (!cpy_r_r27) goto CPyL16;
CPyL15: ;
    ((mypy___binder___FrameObject *)cpy_r_frame)->_unreachable = 1;
CPyL16: ;
    cpy_r_r29 = cpy_r_r16 + 2;
    cpy_r_r16 = cpy_r_r29;
    goto CPyL11;
CPyL17: ;
    cpy_r_r30 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_options_on_return;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "allow_jump", "ConditionalTypeBinder", "options_on_return", 376, CPyStatic_binder___globals);
        goto CPyL25;
    }
CPyL18: ;
    cpy_r_r31 = CPyList_GetItem(cpy_r_r30, cpy_r_index);
    CPyTagged_DECREF(cpy_r_index);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "allow_jump", 376, CPyStatic_binder___globals);
        goto CPyL29;
    }
    if (likely(PyList_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "allow_jump", 376, CPyStatic_binder___globals, "list", cpy_r_r31);
        goto CPyL29;
    }
    cpy_r_r33 = PyList_Append(cpy_r_r32, cpy_r_frame);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_frame);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/binder.py", "allow_jump", 376, CPyStatic_binder___globals);
        goto CPyL22;
    }
    return 1;
CPyL22: ;
    cpy_r_r35 = 2;
    return cpy_r_r35;
CPyL23: ;
    CPyTagged_INCREF(cpy_r_index);
    goto CPyL5;
CPyL24: ;
    CPyTagged_DecRef(cpy_r_index);
    goto CPyL22;
CPyL25: ;
    CPyTagged_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_frame);
    goto CPyL22;
CPyL26: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL17;
CPyL27: ;
    CPyTagged_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_frame);
    CPy_DecRef(cpy_r_r15);
    goto CPyL22;
CPyL28: ;
    CPyTagged_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_frame);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_f);
    goto CPyL22;
CPyL29: ;
    CPy_DecRef(cpy_r_frame);
    goto CPyL22;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___allow_jump(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"index", 0};
    static CPyArg_Parser parser = {"O:allow_jump", kwlist, 0};
    PyObject *obj_index;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_index)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    CPyTagged arg_index;
    if (likely(PyLong_Check(obj_index)))
        arg_index = CPyTagged_BorrowFromObject(obj_index);
    else {
        CPy_TypeError("int", obj_index); goto fail;
    }
    char retval = CPyDef_binder___ConditionalTypeBinder___allow_jump(arg_self, arg_index);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "allow_jump", 366, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder___handle_break(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_break_frames;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "handle_break", "ConditionalTypeBinder", "break_frames", 379, CPyStatic_binder___globals);
        goto CPyL6;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "handle_break", 379, CPyStatic_binder___globals);
        goto CPyL6;
    }
    if (likely(PyLong_Check(cpy_r_r1)))
        cpy_r_r2 = CPyTagged_FromObject(cpy_r_r1);
    else {
        CPy_TypeError("int", cpy_r_r1); cpy_r_r2 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/binder.py", "handle_break", 379, CPyStatic_binder___globals);
        goto CPyL6;
    }
    cpy_r_r3 = CPyDef_binder___ConditionalTypeBinder___allow_jump(cpy_r_self, cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "handle_break", 379, CPyStatic_binder___globals);
        goto CPyL6;
    }
    cpy_r_r4 = CPyDef_binder___ConditionalTypeBinder___unreachable(cpy_r_self);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "handle_break", 380, CPyStatic_binder___globals);
        goto CPyL6;
    }
    return 1;
CPyL6: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___handle_break(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":handle_break", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    char retval = CPyDef_binder___ConditionalTypeBinder___handle_break(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "handle_break", 378, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder___handle_continue(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_self)->_continue_frames;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "handle_continue", "ConditionalTypeBinder", "continue_frames", 383, CPyStatic_binder___globals);
        goto CPyL6;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "handle_continue", 383, CPyStatic_binder___globals);
        goto CPyL6;
    }
    if (likely(PyLong_Check(cpy_r_r1)))
        cpy_r_r2 = CPyTagged_FromObject(cpy_r_r1);
    else {
        CPy_TypeError("int", cpy_r_r1); cpy_r_r2 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/binder.py", "handle_continue", 383, CPyStatic_binder___globals);
        goto CPyL6;
    }
    cpy_r_r3 = CPyDef_binder___ConditionalTypeBinder___allow_jump(cpy_r_self, cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "handle_continue", 383, CPyStatic_binder___globals);
        goto CPyL6;
    }
    cpy_r_r4 = CPyDef_binder___ConditionalTypeBinder___unreachable(cpy_r_self);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "handle_continue", 384, CPyStatic_binder___globals);
        goto CPyL6;
    }
    return 1;
CPyL6: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___handle_continue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":handle_continue", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    char retval = CPyDef_binder___ConditionalTypeBinder___handle_continue(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "handle_continue", 382, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___frame_context_ConditionalTypeBinder_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    int64_t cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyTagged cpy_r_r71;
    CPyTagged cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyTagged cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyPtr cpy_r_r83;
    int64_t cpy_r_r84;
    CPyTagged cpy_r_r85;
    CPyTagged cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    int64_t cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    int64_t cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    cpy_r_r0 = ((mypy___binder___frame_context_ConditionalTypeBinder_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_gen", "__mypyc_env__", 387, CPyStatic_binder___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "__mypyc_next_label__", 387, CPyStatic_binder___globals);
        goto CPyL84;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL73;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL85;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 387, CPyStatic_binder___globals);
        goto CPyL83;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "self", 421, CPyStatic_binder___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r4)->_frames;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "ConditionalTypeBinder", "frames", 421, CPyStatic_binder___globals);
        goto CPyL86;
    }
CPyL7: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r8 > (Py_ssize_t)2;
    CPy_DECREF(cpy_r_r4);
    if (cpy_r_r9) {
        goto CPyL10;
    } else
        goto CPyL87;
CPyL8: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 421, CPyStatic_binder___globals);
        goto CPyL83;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r11 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_break_frame;
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "break_frame", 423, CPyStatic_binder___globals);
        goto CPyL84;
    }
    CPyTagged_INCREF(cpy_r_r11);
CPyL11: ;
    cpy_r_r12 = cpy_r_r11 != 0;
    CPyTagged_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL18;
    cpy_r_r13 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "self", 424, CPyStatic_binder___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r13);
CPyL13: ;
    cpy_r_r14 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r13)->_break_frames;
    if (unlikely(cpy_r_r14 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'break_frames' of 'ConditionalTypeBinder' undefined");
    } else {
        CPy_INCREF(cpy_r_r14);
    }
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 424, CPyStatic_binder___globals);
        goto CPyL84;
    }
CPyL14: ;
    cpy_r_r15 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "self", 424, CPyStatic_binder___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r15);
CPyL15: ;
    cpy_r_r16 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r15)->_frames;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "ConditionalTypeBinder", "frames", 424, CPyStatic_binder___globals);
        goto CPyL89;
    }
CPyL16: ;
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_break_frame;
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "break_frame", 424, CPyStatic_binder___globals);
        goto CPyL89;
    }
    CPyTagged_INCREF(cpy_r_r20);
CPyL17: ;
    cpy_r_r21 = CPyTagged_Subtract(cpy_r_r19, cpy_r_r20);
    CPyTagged_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r22 = CPyTagged_StealAsObject(cpy_r_r21);
    cpy_r_r23 = PyList_Append(cpy_r_r14, cpy_r_r22);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 424, CPyStatic_binder___globals);
        goto CPyL84;
    }
CPyL18: ;
    cpy_r_r25 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_continue_frame;
    if (unlikely(cpy_r_r25 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "continue_frame", 425, CPyStatic_binder___globals);
        goto CPyL84;
    }
    CPyTagged_INCREF(cpy_r_r25);
CPyL19: ;
    cpy_r_r26 = cpy_r_r25 != 0;
    CPyTagged_DECREF(cpy_r_r25);
    if (!cpy_r_r26) goto CPyL26;
    cpy_r_r27 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "self", 426, CPyStatic_binder___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r27);
CPyL21: ;
    cpy_r_r28 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r27)->_continue_frames;
    if (unlikely(cpy_r_r28 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'continue_frames' of 'ConditionalTypeBinder' undefined");
    } else {
        CPy_INCREF(cpy_r_r28);
    }
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 426, CPyStatic_binder___globals);
        goto CPyL84;
    }
CPyL22: ;
    cpy_r_r29 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "self", 426, CPyStatic_binder___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r29);
CPyL23: ;
    cpy_r_r30 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r29)->_frames;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "ConditionalTypeBinder", "frames", 426, CPyStatic_binder___globals);
        goto CPyL91;
    }
CPyL24: ;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_r30)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_continue_frame;
    if (unlikely(cpy_r_r34 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "continue_frame", 426, CPyStatic_binder___globals);
        goto CPyL91;
    }
    CPyTagged_INCREF(cpy_r_r34);
CPyL25: ;
    cpy_r_r35 = CPyTagged_Subtract(cpy_r_r33, cpy_r_r34);
    CPyTagged_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r36 = CPyTagged_StealAsObject(cpy_r_r35);
    cpy_r_r37 = PyList_Append(cpy_r_r28, cpy_r_r36);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 426, CPyStatic_binder___globals);
        goto CPyL84;
    }
CPyL26: ;
    cpy_r_r39 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_try_frame;
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "try_frame", 427, CPyStatic_binder___globals);
        goto CPyL84;
    }
CPyL27: ;
    if (!cpy_r_r39) goto CPyL33;
CPyL28: ;
    cpy_r_r40 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "self", 428, CPyStatic_binder___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r40);
CPyL29: ;
    cpy_r_r41 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r40)->_try_frames;
    if (unlikely(cpy_r_r41 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'try_frames' of 'ConditionalTypeBinder' undefined");
    } else {
        CPy_INCREF(cpy_r_r41);
    }
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 428, CPyStatic_binder___globals);
        goto CPyL84;
    }
CPyL30: ;
    cpy_r_r42 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "self", 428, CPyStatic_binder___globals);
        goto CPyL92;
    }
    CPy_INCREF(cpy_r_r42);
CPyL31: ;
    cpy_r_r43 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r42)->_frames;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "ConditionalTypeBinder", "frames", 428, CPyStatic_binder___globals);
        goto CPyL93;
    }
CPyL32: ;
    cpy_r_r44 = (CPyPtr)&((PyVarObject *)cpy_r_r43)->ob_size;
    cpy_r_r45 = *(int64_t *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 << 1;
    cpy_r_r47 = CPyTagged_Subtract(cpy_r_r46, 2);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r48 = CPyTagged_StealAsObject(cpy_r_r47);
    cpy_r_r49 = PySet_Add(cpy_r_r41, cpy_r_r48);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 428, CPyStatic_binder___globals);
        goto CPyL84;
    }
CPyL33: ;
    cpy_r_r51 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "self", 430, CPyStatic_binder___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r51);
CPyL34: ;
    cpy_r_r52 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_conditional_frame;
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "conditional_frame", 430, CPyStatic_binder___globals);
        goto CPyL94;
    }
CPyL35: ;
    cpy_r_r53 = CPyDef_binder___ConditionalTypeBinder___push_frame(cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 430, CPyStatic_binder___globals);
        goto CPyL84;
    }
    if (((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_new_frame != NULL) {
        CPy_DECREF(((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_new_frame);
    }
    ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_new_frame = cpy_r_r53;
    cpy_r_r54 = 1;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 430, CPyStatic_binder___globals);
        goto CPyL84;
    }
    cpy_r_r55 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_try_frame;
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "try_frame", 431, CPyStatic_binder___globals);
        goto CPyL84;
    }
CPyL38: ;
    if (!cpy_r_r55) goto CPyL41;
CPyL39: ;
    cpy_r_r56 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "self", 433, CPyStatic_binder___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r56);
CPyL40: ;
    cpy_r_r57 = CPyDef_binder___ConditionalTypeBinder___allow_jump(cpy_r_r56, -2);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 433, CPyStatic_binder___globals);
        goto CPyL84;
    }
CPyL41: ;
    cpy_r_r58 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_new_frame;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "new_frame", 434, CPyStatic_binder___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r58);
CPyL42: ;
    if (((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r59 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 434, CPyStatic_binder___globals);
        goto CPyL95;
    }
    return cpy_r_r58;
CPyL44: ;
    cpy_r_r60 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r61 = cpy_r_type != cpy_r_r60;
    if (cpy_r_r61) {
        goto CPyL96;
    } else
        goto CPyL47;
CPyL45: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 434, CPyStatic_binder___globals);
        goto CPyL83;
    }
    CPy_Unreachable();
CPyL47: ;
    cpy_r_r62 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "self", 435, CPyStatic_binder___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r62);
CPyL48: ;
    cpy_r_r63 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_can_skip;
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "can_skip", 435, CPyStatic_binder___globals);
        goto CPyL97;
    }
CPyL49: ;
    cpy_r_r64 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_fall_through;
    if (unlikely(cpy_r_r64 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "fall_through", 435, CPyStatic_binder___globals);
        goto CPyL97;
    }
    CPyTagged_INCREF(cpy_r_r64);
CPyL50: ;
    cpy_r_r65 = CPyDef_binder___ConditionalTypeBinder___pop_frame(cpy_r_r62, cpy_r_r63, cpy_r_r64);
    CPyTagged_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 435, CPyStatic_binder___globals);
        goto CPyL84;
    } else
        goto CPyL98;
CPyL51: ;
    cpy_r_r66 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_break_frame;
    if (unlikely(cpy_r_r66 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "break_frame", 437, CPyStatic_binder___globals);
        goto CPyL84;
    }
    CPyTagged_INCREF(cpy_r_r66);
CPyL52: ;
    cpy_r_r67 = cpy_r_r66 != 0;
    CPyTagged_DECREF(cpy_r_r66);
    if (!cpy_r_r67) goto CPyL57;
    cpy_r_r68 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "self", 438, CPyStatic_binder___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r68);
CPyL54: ;
    cpy_r_r69 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r68)->_break_frames;
    if (unlikely(cpy_r_r69 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'break_frames' of 'ConditionalTypeBinder' undefined");
    } else {
        CPy_INCREF(cpy_r_r69);
    }
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 438, CPyStatic_binder___globals);
        goto CPyL84;
    }
CPyL55: ;
    cpy_r_r70 = CPyList_PopLast(cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 438, CPyStatic_binder___globals);
        goto CPyL84;
    }
    if (likely(PyLong_Check(cpy_r_r70)))
        cpy_r_r71 = CPyTagged_FromObject(cpy_r_r70);
    else {
        CPy_TypeError("int", cpy_r_r70); cpy_r_r71 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 438, CPyStatic_binder___globals);
        goto CPyL84;
    } else
        goto CPyL99;
CPyL57: ;
    cpy_r_r72 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_continue_frame;
    if (unlikely(cpy_r_r72 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "continue_frame", 439, CPyStatic_binder___globals);
        goto CPyL84;
    }
    CPyTagged_INCREF(cpy_r_r72);
CPyL58: ;
    cpy_r_r73 = cpy_r_r72 != 0;
    CPyTagged_DECREF(cpy_r_r72);
    if (!cpy_r_r73) goto CPyL63;
    cpy_r_r74 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "self", 440, CPyStatic_binder___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r74);
CPyL60: ;
    cpy_r_r75 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r74)->_continue_frames;
    if (unlikely(cpy_r_r75 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'continue_frames' of 'ConditionalTypeBinder' undefined");
    } else {
        CPy_INCREF(cpy_r_r75);
    }
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 440, CPyStatic_binder___globals);
        goto CPyL84;
    }
CPyL61: ;
    cpy_r_r76 = CPyList_PopLast(cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 440, CPyStatic_binder___globals);
        goto CPyL84;
    }
    if (likely(PyLong_Check(cpy_r_r76)))
        cpy_r_r77 = CPyTagged_FromObject(cpy_r_r76);
    else {
        CPy_TypeError("int", cpy_r_r76); cpy_r_r77 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 440, CPyStatic_binder___globals);
        goto CPyL84;
    } else
        goto CPyL100;
CPyL63: ;
    cpy_r_r78 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_try_frame;
    if (unlikely(cpy_r_r78 == 2)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "try_frame", 441, CPyStatic_binder___globals);
        goto CPyL84;
    }
CPyL64: ;
    if (!cpy_r_r78) goto CPyL70;
CPyL65: ;
    cpy_r_r79 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "self", 442, CPyStatic_binder___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r79);
CPyL66: ;
    cpy_r_r80 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r79)->_try_frames;
    if (unlikely(cpy_r_r80 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'try_frames' of 'ConditionalTypeBinder' undefined");
    } else {
        CPy_INCREF(cpy_r_r80);
    }
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 442, CPyStatic_binder___globals);
        goto CPyL84;
    }
CPyL67: ;
    cpy_r_r81 = ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "frame_context_ConditionalTypeBinder_env", "self", 442, CPyStatic_binder___globals);
        goto CPyL101;
    }
    CPy_INCREF(cpy_r_r81);
CPyL68: ;
    cpy_r_r82 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r81)->_frames;
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "frame_context", "ConditionalTypeBinder", "frames", 442, CPyStatic_binder___globals);
        goto CPyL102;
    }
CPyL69: ;
    cpy_r_r83 = (CPyPtr)&((PyVarObject *)cpy_r_r82)->ob_size;
    cpy_r_r84 = *(int64_t *)cpy_r_r83;
    cpy_r_r85 = cpy_r_r84 << 1;
    cpy_r_r86 = CPyTagged_Subtract(cpy_r_r85, 2);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r87 = CPyTagged_StealAsObject(cpy_r_r86);
    cpy_r_r88 = CPySet_Remove(cpy_r_r80, cpy_r_r87);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 442, CPyStatic_binder___globals);
        goto CPyL84;
    }
CPyL70: ;
    cpy_r_r89 = Py_None;
    if (((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r90 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 387, CPyStatic_binder___globals);
        goto CPyL83;
    }
    CPyGen_SetStopIterationValue(cpy_r_r89);
    if (!0) goto CPyL83;
    CPy_Unreachable();
CPyL73: ;
    cpy_r_r91 = cpy_r_r1 & 1;
    cpy_r_r92 = cpy_r_r91 == 0;
    if (!cpy_r_r92) goto CPyL75;
    cpy_r_r93 = cpy_r_r1 == 0;
    cpy_r_r94 = cpy_r_r93;
    goto CPyL76;
CPyL75: ;
    cpy_r_r95 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r94 = cpy_r_r95;
CPyL76: ;
    if (cpy_r_r94) goto CPyL103;
    cpy_r_r96 = cpy_r_r1 & 1;
    cpy_r_r97 = cpy_r_r96 == 0;
    if (!cpy_r_r97) goto CPyL79;
    cpy_r_r98 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r99 = cpy_r_r98;
    goto CPyL80;
CPyL79: ;
    cpy_r_r100 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r99 = cpy_r_r100;
CPyL80: ;
    if (cpy_r_r99) {
        goto CPyL44;
    } else
        goto CPyL104;
CPyL81: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r101 = 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 387, CPyStatic_binder___globals);
        goto CPyL83;
    }
    CPy_Unreachable();
CPyL83: ;
    cpy_r_r102 = NULL;
    return cpy_r_r102;
CPyL84: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL83;
CPyL85: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL86: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL83;
CPyL87: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL8;
CPyL88: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r14);
    goto CPyL83;
CPyL89: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    goto CPyL83;
CPyL90: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r28);
    goto CPyL83;
CPyL91: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r29);
    goto CPyL83;
CPyL92: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r41);
    goto CPyL83;
CPyL93: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    goto CPyL83;
CPyL94: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r51);
    goto CPyL83;
CPyL95: ;
    CPy_DecRef(cpy_r_r58);
    goto CPyL83;
CPyL96: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL45;
CPyL97: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r62);
    goto CPyL83;
CPyL98: ;
    CPy_DECREF(cpy_r_r65);
    goto CPyL51;
CPyL99: ;
    CPyTagged_DECREF(cpy_r_r71);
    goto CPyL57;
CPyL100: ;
    CPyTagged_DECREF(cpy_r_r77);
    goto CPyL63;
CPyL101: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r80);
    goto CPyL83;
CPyL102: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r81);
    goto CPyL83;
CPyL103: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL104: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL81;
}

PyObject *CPyPy_binder___frame_context_ConditionalTypeBinder_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_binder___frame_context_ConditionalTypeBinder_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "frame_context", 387, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___frame_context_ConditionalTypeBinder_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_binder___frame_context_ConditionalTypeBinder_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_binder___frame_context_ConditionalTypeBinder_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_binder___frame_context_ConditionalTypeBinder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.binder.frame_context_ConditionalTypeBinder_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_binder___frame_context_ConditionalTypeBinder_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "__next__", -1, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___frame_context_ConditionalTypeBinder_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_binder___frame_context_ConditionalTypeBinder_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_binder___frame_context_ConditionalTypeBinder_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_binder___frame_context_ConditionalTypeBinder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.binder.frame_context_ConditionalTypeBinder_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_binder___frame_context_ConditionalTypeBinder_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "send", -1, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___frame_context_ConditionalTypeBinder_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_binder___frame_context_ConditionalTypeBinder_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_binder___frame_context_ConditionalTypeBinder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.binder.frame_context_ConditionalTypeBinder_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_binder___frame_context_ConditionalTypeBinder_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "__iter__", -1, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___frame_context_ConditionalTypeBinder_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_binder___frame_context_ConditionalTypeBinder_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_binder___frame_context_ConditionalTypeBinder_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_binder___frame_context_ConditionalTypeBinder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.binder.frame_context_ConditionalTypeBinder_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_binder___frame_context_ConditionalTypeBinder_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "throw", -1, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___frame_context_ConditionalTypeBinder_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_binder___frame_context_ConditionalTypeBinder_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp50 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp50);
    PyObject *__tmp51 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp51);
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

PyObject *CPyPy_binder___frame_context_ConditionalTypeBinder_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_binder___frame_context_ConditionalTypeBinder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.binder.frame_context_ConditionalTypeBinder_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_binder___frame_context_ConditionalTypeBinder_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "close", -1, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___ConditionalTypeBinder___frame_context(PyObject *cpy_r_self, char cpy_r_can_skip, CPyTagged cpy_r_fall_through, CPyTagged cpy_r_break_frame, CPyTagged cpy_r_continue_frame, char cpy_r_conditional_frame, char cpy_r_try_frame) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    if (cpy_r_fall_through != CPY_INT_TAG) goto CPyL23;
    cpy_r_fall_through = 2;
CPyL2: ;
    if (cpy_r_break_frame != CPY_INT_TAG) goto CPyL24;
    cpy_r_break_frame = 0;
CPyL4: ;
    if (cpy_r_continue_frame != CPY_INT_TAG) goto CPyL25;
    cpy_r_continue_frame = 0;
CPyL6: ;
    if (cpy_r_conditional_frame != 2) goto CPyL8;
    cpy_r_conditional_frame = 0;
CPyL8: ;
    if (cpy_r_try_frame != 2) goto CPyL10;
    cpy_r_try_frame = 0;
CPyL10: ;
    cpy_r_r0 = CPyDef_binder___frame_context_ConditionalTypeBinder_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 387, CPyStatic_binder___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 387, CPyStatic_binder___globals);
        goto CPyL27;
    }
    ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_can_skip = cpy_r_can_skip;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 387, CPyStatic_binder___globals);
        goto CPyL27;
    }
    if (((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_fall_through != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_fall_through);
    }
    ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_fall_through = cpy_r_fall_through;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 387, CPyStatic_binder___globals);
        goto CPyL28;
    }
    if (((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_break_frame != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_break_frame);
    }
    ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_break_frame = cpy_r_break_frame;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 387, CPyStatic_binder___globals);
        goto CPyL29;
    }
    if (((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_continue_frame != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_continue_frame);
    }
    ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_continue_frame = cpy_r_continue_frame;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 387, CPyStatic_binder___globals);
        goto CPyL30;
    }
    ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_conditional_frame = cpy_r_conditional_frame;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 387, CPyStatic_binder___globals);
        goto CPyL30;
    }
    ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_try_frame = cpy_r_try_frame;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 387, CPyStatic_binder___globals);
        goto CPyL30;
    }
    cpy_r_r8 = CPyDef_binder___frame_context_ConditionalTypeBinder_gen();
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 387, CPyStatic_binder___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___binder___frame_context_ConditionalTypeBinder_genObject *)cpy_r_r8)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___binder___frame_context_ConditionalTypeBinder_genObject *)cpy_r_r8)->___mypyc_env__);
    }
    ((mypy___binder___frame_context_ConditionalTypeBinder_genObject *)cpy_r_r8)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 387, CPyStatic_binder___globals);
        goto CPyL31;
    }
    if (((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___binder___frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r10 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/binder.py", "frame_context", 387, CPyStatic_binder___globals);
        goto CPyL32;
    }
    return cpy_r_r8;
CPyL22: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL23: ;
    CPyTagged_INCREF(cpy_r_fall_through);
    goto CPyL2;
CPyL24: ;
    CPyTagged_INCREF(cpy_r_break_frame);
    goto CPyL4;
CPyL25: ;
    CPyTagged_INCREF(cpy_r_continue_frame);
    goto CPyL6;
CPyL26: ;
    CPyTagged_DecRef(cpy_r_fall_through);
    CPyTagged_DecRef(cpy_r_break_frame);
    CPyTagged_DecRef(cpy_r_continue_frame);
    goto CPyL22;
CPyL27: ;
    CPyTagged_DecRef(cpy_r_fall_through);
    CPyTagged_DecRef(cpy_r_break_frame);
    CPyTagged_DecRef(cpy_r_continue_frame);
    CPy_DecRef(cpy_r_r0);
    goto CPyL22;
CPyL28: ;
    CPyTagged_DecRef(cpy_r_break_frame);
    CPyTagged_DecRef(cpy_r_continue_frame);
    CPy_DecRef(cpy_r_r0);
    goto CPyL22;
CPyL29: ;
    CPyTagged_DecRef(cpy_r_continue_frame);
    CPy_DecRef(cpy_r_r0);
    goto CPyL22;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL22;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r8);
    goto CPyL22;
CPyL32: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL22;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___frame_context(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fall_through", "break_frame", "continue_frame", "conditional_frame", "try_frame", "can_skip", 0};
    static CPyArg_Parser parser = {"|$OOOOO@O:frame_context", kwlist, 0};
    PyObject *obj_can_skip;
    PyObject *obj_fall_through = NULL;
    PyObject *obj_break_frame = NULL;
    PyObject *obj_continue_frame = NULL;
    PyObject *obj_conditional_frame = NULL;
    PyObject *obj_try_frame = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_fall_through, &obj_break_frame, &obj_continue_frame, &obj_conditional_frame, &obj_try_frame, &obj_can_skip)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    char arg_can_skip;
    if (unlikely(!PyBool_Check(obj_can_skip))) {
        CPy_TypeError("bool", obj_can_skip); goto fail;
    } else
        arg_can_skip = obj_can_skip == Py_True;
    CPyTagged arg_fall_through;
    if (obj_fall_through == NULL) {
        arg_fall_through = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_fall_through)))
        arg_fall_through = CPyTagged_BorrowFromObject(obj_fall_through);
    else {
        CPy_TypeError("int", obj_fall_through); goto fail;
    }
    CPyTagged arg_break_frame;
    if (obj_break_frame == NULL) {
        arg_break_frame = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_break_frame)))
        arg_break_frame = CPyTagged_BorrowFromObject(obj_break_frame);
    else {
        CPy_TypeError("int", obj_break_frame); goto fail;
    }
    CPyTagged arg_continue_frame;
    if (obj_continue_frame == NULL) {
        arg_continue_frame = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_continue_frame)))
        arg_continue_frame = CPyTagged_BorrowFromObject(obj_continue_frame);
    else {
        CPy_TypeError("int", obj_continue_frame); goto fail;
    }
    char arg_conditional_frame;
    if (obj_conditional_frame == NULL) {
        arg_conditional_frame = 2;
    } else if (unlikely(!PyBool_Check(obj_conditional_frame))) {
        CPy_TypeError("bool", obj_conditional_frame); goto fail;
    } else
        arg_conditional_frame = obj_conditional_frame == Py_True;
    char arg_try_frame;
    if (obj_try_frame == NULL) {
        arg_try_frame = 2;
    } else if (unlikely(!PyBool_Check(obj_try_frame))) {
        CPy_TypeError("bool", obj_try_frame); goto fail;
    } else
        arg_try_frame = obj_try_frame == Py_True;
    PyObject *retval = CPyDef_binder___ConditionalTypeBinder___frame_context(arg_self, arg_can_skip, arg_fall_through, arg_break_frame, arg_continue_frame, arg_conditional_frame, arg_try_frame);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "frame_context", 387, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    int64_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    int64_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    cpy_r_r0 = ((mypy___binder___top_frame_context_ConditionalTypeBinder_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "top_frame_context", "top_frame_context_ConditionalTypeBinder_gen", "__mypyc_env__", 445, CPyStatic_binder___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/binder.py", "top_frame_context", "top_frame_context_ConditionalTypeBinder_env", "__mypyc_next_label__", 445, CPyStatic_binder___globals);
        goto CPyL38;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL27;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL39;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/binder.py", "top_frame_context", 445, CPyStatic_binder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "top_frame_context", "top_frame_context_ConditionalTypeBinder_env", "self", 449, CPyStatic_binder___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r4)->_frames;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "top_frame_context", "ConditionalTypeBinder", "frames", 449, CPyStatic_binder___globals);
        goto CPyL40;
    }
CPyL7: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = cpy_r_r8 == 2;
    CPy_DECREF(cpy_r_r4);
    if (cpy_r_r9) {
        goto CPyL10;
    } else
        goto CPyL41;
CPyL8: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/binder.py", "top_frame_context", 449, CPyStatic_binder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r11 = ((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "top_frame_context", "top_frame_context_ConditionalTypeBinder_env", "self", 450, CPyStatic_binder___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r11);
CPyL11: ;
    cpy_r_r12 = 2;
    cpy_r_r13 = CPyDef_binder___ConditionalTypeBinder___push_frame(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "top_frame_context", 450, CPyStatic_binder___globals);
        goto CPyL38;
    }
    if (((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r14 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/binder.py", "top_frame_context", 450, CPyStatic_binder___globals);
        goto CPyL42;
    }
    return cpy_r_r13;
CPyL14: ;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_type != cpy_r_r15;
    if (cpy_r_r16) {
        goto CPyL43;
    } else
        goto CPyL17;
CPyL15: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/binder.py", "top_frame_context", 450, CPyStatic_binder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r17 = ((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "top_frame_context", "top_frame_context_ConditionalTypeBinder_env", "self", 451, CPyStatic_binder___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r17);
CPyL18: ;
    cpy_r_r18 = CPyDef_binder___ConditionalTypeBinder___pop_frame(cpy_r_r17, 1, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "top_frame_context", 451, CPyStatic_binder___globals);
        goto CPyL38;
    } else
        goto CPyL44;
CPyL19: ;
    cpy_r_r19 = ((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "top_frame_context", "top_frame_context_ConditionalTypeBinder_env", "self", 452, CPyStatic_binder___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r19);
CPyL20: ;
    cpy_r_r20 = ((mypy___binder___ConditionalTypeBinderObject *)cpy_r_r19)->_frames;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/binder.py", "top_frame_context", "ConditionalTypeBinder", "frames", 452, CPyStatic_binder___globals);
        goto CPyL45;
    }
CPyL21: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = cpy_r_r23 == 2;
    CPy_DECREF(cpy_r_r19);
    if (cpy_r_r24) {
        goto CPyL24;
    } else
        goto CPyL46;
CPyL22: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/binder.py", "top_frame_context", 452, CPyStatic_binder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r26 = Py_None;
    if (((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r27 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/binder.py", "top_frame_context", 445, CPyStatic_binder___globals);
        goto CPyL37;
    }
    CPyGen_SetStopIterationValue(cpy_r_r26);
    if (!0) goto CPyL37;
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r28 = cpy_r_r1 & 1;
    cpy_r_r29 = cpy_r_r28 == 0;
    if (!cpy_r_r29) goto CPyL29;
    cpy_r_r30 = cpy_r_r1 == 0;
    cpy_r_r31 = cpy_r_r30;
    goto CPyL30;
CPyL29: ;
    cpy_r_r32 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r31 = cpy_r_r32;
CPyL30: ;
    if (cpy_r_r31) goto CPyL47;
    cpy_r_r33 = cpy_r_r1 & 1;
    cpy_r_r34 = cpy_r_r33 == 0;
    if (!cpy_r_r34) goto CPyL33;
    cpy_r_r35 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r36 = cpy_r_r35;
    goto CPyL34;
CPyL33: ;
    cpy_r_r37 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r36 = cpy_r_r37;
CPyL34: ;
    if (cpy_r_r36) {
        goto CPyL14;
    } else
        goto CPyL48;
CPyL35: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/binder.py", "top_frame_context", 445, CPyStatic_binder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r39 = NULL;
    return cpy_r_r39;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL37;
CPyL39: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL37;
CPyL41: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL8;
CPyL42: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL37;
CPyL43: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL15;
CPyL44: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL19;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r19);
    goto CPyL37;
CPyL46: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL22;
CPyL47: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL48: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL35;
}

PyObject *CPyPy_binder___top_frame_context_ConditionalTypeBinder_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "top_frame_context", 445, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_binder___top_frame_context_ConditionalTypeBinder_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_binder___top_frame_context_ConditionalTypeBinder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.binder.top_frame_context_ConditionalTypeBinder_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "__next__", -1, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_binder___top_frame_context_ConditionalTypeBinder_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_binder___top_frame_context_ConditionalTypeBinder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.binder.top_frame_context_ConditionalTypeBinder_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "send", -1, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_binder___top_frame_context_ConditionalTypeBinder_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_binder___top_frame_context_ConditionalTypeBinder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.binder.top_frame_context_ConditionalTypeBinder_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "__iter__", -1, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_binder___top_frame_context_ConditionalTypeBinder_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_binder___top_frame_context_ConditionalTypeBinder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.binder.top_frame_context_ConditionalTypeBinder_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "throw", -1, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp52 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp52);
    PyObject *__tmp53 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp53);
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

PyObject *CPyPy_binder___top_frame_context_ConditionalTypeBinder_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_binder___top_frame_context_ConditionalTypeBinder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.binder.top_frame_context_ConditionalTypeBinder_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "close", -1, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___ConditionalTypeBinder___top_frame_context(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_binder___top_frame_context_ConditionalTypeBinder_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "top_frame_context", 445, CPyStatic_binder___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/binder.py", "top_frame_context", 445, CPyStatic_binder___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_binder___top_frame_context_ConditionalTypeBinder_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "top_frame_context", 445, CPyStatic_binder___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___binder___top_frame_context_ConditionalTypeBinder_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___binder___top_frame_context_ConditionalTypeBinder_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___binder___top_frame_context_ConditionalTypeBinder_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/binder.py", "top_frame_context", 445, CPyStatic_binder___globals);
        goto CPyL8;
    }
    if (((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___binder___top_frame_context_ConditionalTypeBinder_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/binder.py", "top_frame_context", 445, CPyStatic_binder___globals);
        goto CPyL9;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_binder___ConditionalTypeBinder___top_frame_context(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":top_frame_context", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_binder___ConditionalTypeBinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_binder___ConditionalTypeBinder___top_frame_context(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "top_frame_context", 445, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder___ConditionalTypeBinder_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    ((mypy___binder___ConditionalTypeBinderObject *)cpy_r___mypyc_self__)->_type_assignments = cpy_r_r0;
    return 1;
}

PyObject *CPyPy_binder___ConditionalTypeBinder_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_binder___ConditionalTypeBinder))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.binder.ConditionalTypeBinder", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_binder___ConditionalTypeBinder_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "__mypyc_defaults_setup", -1, CPyStatic_binder___globals);
    return NULL;
}

PyObject *CPyDef_binder___get_declaration(PyObject *cpy_r_expr) {
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
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_type;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyPtr cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    cpy_r_r0 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    if (!cpy_r_r9) goto CPyL46;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr)
        cpy_r_r14 = cpy_r_expr;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL54;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr)
        cpy_r_r14 = cpy_r_expr;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL54;
    CPy_TypeErrorTraceback("mypy/binder.py", "get_declaration", 457, CPyStatic_binder___globals, "union[mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", cpy_r_expr);
    goto CPyL47;
__LL54: ;
    cpy_r_r15 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_r14)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (!cpy_r_r18) goto CPyL11;
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_nodes___MemberExpr))
        cpy_r_r19 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "get_declaration", 457, CPyStatic_binder___globals, "mypy.nodes.MemberExpr", cpy_r_r14);
        goto CPyL47;
    }
    cpy_r_r20 = ((mypy___nodes___MemberExprObject *)cpy_r_r19)->_node;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20;
    goto CPyL13;
CPyL11: ;
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_nodes___NameExpr))
        cpy_r_r22 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "get_declaration", 457, CPyStatic_binder___globals, "mypy.nodes.NameExpr", cpy_r_r14);
        goto CPyL47;
    }
    cpy_r_r23 = ((mypy___nodes___NameExprObject *)cpy_r_r22)->_node;
    CPy_INCREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r21 = cpy_r_r23;
CPyL13: ;
    cpy_r_r24 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_r21)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    CPy_DECREF(cpy_r_r21);
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL25;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr)
        cpy_r_r28 = cpy_r_expr;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL55;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr)
        cpy_r_r28 = cpy_r_expr;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL55;
    CPy_TypeErrorTraceback("mypy/binder.py", "get_declaration", 458, CPyStatic_binder___globals, "union[mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", cpy_r_expr);
    goto CPyL47;
__LL55: ;
    cpy_r_r29 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_r28)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL19;
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_nodes___MemberExpr))
        cpy_r_r33 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "get_declaration", 458, CPyStatic_binder___globals, "mypy.nodes.MemberExpr", cpy_r_r28);
        goto CPyL47;
    }
    cpy_r_r34 = ((mypy___nodes___MemberExprObject *)cpy_r_r33)->_node;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_nodes___Var))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "get_declaration", 458, CPyStatic_binder___globals, "mypy.nodes.Var", cpy_r_r34);
        goto CPyL47;
    }
    cpy_r_r36 = cpy_r_r35;
    goto CPyL22;
CPyL19: ;
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_nodes___NameExpr))
        cpy_r_r37 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "get_declaration", 458, CPyStatic_binder___globals, "mypy.nodes.NameExpr", cpy_r_r28);
        goto CPyL47;
    }
    cpy_r_r38 = ((mypy___nodes___NameExprObject *)cpy_r_r37)->_node;
    CPy_INCREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (likely(Py_TYPE(cpy_r_r38) == CPyType_nodes___Var))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "get_declaration", 458, CPyStatic_binder___globals, "mypy.nodes.Var", cpy_r_r38);
        goto CPyL47;
    }
    cpy_r_r36 = cpy_r_r39;
CPyL22: ;
    cpy_r_r40 = ((mypy___nodes___VarObject *)cpy_r_r36)->_type;
    CPy_INCREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r36);
    cpy_r_type = cpy_r_r40;
    cpy_r_r41 = CPyDef_types___get_proper_type(cpy_r_type);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "get_declaration", 459, CPyStatic_binder___globals);
        goto CPyL48;
    }
    cpy_r_r42 = (PyObject *)CPyType_types___PartialType;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_r41)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    CPy_DECREF(cpy_r_r41);
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    if (cpy_r_r45) goto CPyL49;
    return cpy_r_type;
CPyL25: ;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr)
        cpy_r_r46 = cpy_r_expr;
    else {
        cpy_r_r46 = NULL;
    }
    if (cpy_r_r46 != NULL) goto __LL56;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr)
        cpy_r_r46 = cpy_r_expr;
    else {
        cpy_r_r46 = NULL;
    }
    if (cpy_r_r46 != NULL) goto __LL56;
    CPy_TypeErrorTraceback("mypy/binder.py", "get_declaration", 461, CPyStatic_binder___globals, "union[mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", cpy_r_expr);
    goto CPyL47;
__LL56: ;
    cpy_r_r47 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r48 = (CPyPtr)&((PyObject *)cpy_r_r46)->ob_type;
    cpy_r_r49 = *(PyObject * *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 == cpy_r_r47;
    if (!cpy_r_r50) goto CPyL29;
    if (likely(Py_TYPE(cpy_r_r46) == CPyType_nodes___MemberExpr))
        cpy_r_r51 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "get_declaration", 461, CPyStatic_binder___globals, "mypy.nodes.MemberExpr", cpy_r_r46);
        goto CPyL47;
    }
    cpy_r_r52 = ((mypy___nodes___MemberExprObject *)cpy_r_r51)->_node;
    CPy_INCREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52;
    goto CPyL31;
CPyL29: ;
    if (likely(Py_TYPE(cpy_r_r46) == CPyType_nodes___NameExpr))
        cpy_r_r54 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "get_declaration", 461, CPyStatic_binder___globals, "mypy.nodes.NameExpr", cpy_r_r46);
        goto CPyL47;
    }
    cpy_r_r55 = ((mypy___nodes___NameExprObject *)cpy_r_r54)->_node;
    CPy_INCREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r53 = cpy_r_r55;
CPyL31: ;
    cpy_r_r56 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_r53)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    if (cpy_r_r59) {
        goto CPyL50;
    } else
        goto CPyL33;
CPyL32: ;
    cpy_r_r60 = cpy_r_r59;
    goto CPyL34;
CPyL33: ;
    cpy_r_r61 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r62 = (CPyPtr)&((PyObject *)cpy_r_r53)->ob_type;
    cpy_r_r63 = *(PyObject * *)cpy_r_r62;
    CPy_DECREF(cpy_r_r53);
    cpy_r_r64 = cpy_r_r63 == cpy_r_r61;
    cpy_r_r60 = cpy_r_r64;
CPyL34: ;
    if (!cpy_r_r60) goto CPyL46;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr)
        cpy_r_r65 = cpy_r_expr;
    else {
        cpy_r_r65 = NULL;
    }
    if (cpy_r_r65 != NULL) goto __LL57;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr)
        cpy_r_r65 = cpy_r_expr;
    else {
        cpy_r_r65 = NULL;
    }
    if (cpy_r_r65 != NULL) goto __LL57;
    CPy_TypeErrorTraceback("mypy/binder.py", "get_declaration", 462, CPyStatic_binder___globals, "union[mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", cpy_r_expr);
    goto CPyL47;
__LL57: ;
    cpy_r_r66 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r67 = (CPyPtr)&((PyObject *)cpy_r_r65)->ob_type;
    cpy_r_r68 = *(PyObject * *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 == cpy_r_r66;
    if (!cpy_r_r69) goto CPyL40;
    if (likely(Py_TYPE(cpy_r_r65) == CPyType_nodes___MemberExpr))
        cpy_r_r70 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "get_declaration", 462, CPyStatic_binder___globals, "mypy.nodes.MemberExpr", cpy_r_r65);
        goto CPyL47;
    }
    cpy_r_r71 = ((mypy___nodes___MemberExprObject *)cpy_r_r70)->_node;
    CPy_INCREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r70);
    if (likely((Py_TYPE(cpy_r_r71) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r71) == CPyType_nodes___TypeInfo)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "get_declaration", 462, CPyStatic_binder___globals, "mypy.nodes.TypeInfo", cpy_r_r71);
        goto CPyL47;
    }
    cpy_r_r73 = cpy_r_r72;
    goto CPyL43;
CPyL40: ;
    if (likely(Py_TYPE(cpy_r_r65) == CPyType_nodes___NameExpr))
        cpy_r_r74 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "get_declaration", 462, CPyStatic_binder___globals, "mypy.nodes.NameExpr", cpy_r_r65);
        goto CPyL47;
    }
    cpy_r_r75 = ((mypy___nodes___NameExprObject *)cpy_r_r74)->_node;
    CPy_INCREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r74);
    if (likely((Py_TYPE(cpy_r_r75) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r75) == CPyType_nodes___TypeInfo)))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypy/binder.py", "get_declaration", 462, CPyStatic_binder___globals, "mypy.nodes.TypeInfo", cpy_r_r75);
        goto CPyL47;
    }
    cpy_r_r73 = cpy_r_r76;
CPyL43: ;
    cpy_r_r77 = CPyDef_typevars___fill_typevars_with_any(cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "get_declaration", 462, CPyStatic_binder___globals);
        goto CPyL47;
    }
    cpy_r_r78 = CPY_INT_TAG;
    cpy_r_r79 = CPY_INT_TAG;
    cpy_r_r80 = CPyDef_types___TypeType(cpy_r_r77, cpy_r_r78, cpy_r_r79);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "get_declaration", 462, CPyStatic_binder___globals);
        goto CPyL47;
    }
    return cpy_r_r80;
CPyL46: ;
    cpy_r_r81 = Py_None;
    CPy_INCREF(cpy_r_r81);
    return cpy_r_r81;
CPyL47: ;
    cpy_r_r82 = NULL;
    return cpy_r_r82;
CPyL48: ;
    CPy_DecRef(cpy_r_type);
    goto CPyL47;
CPyL49: ;
    CPy_DECREF(cpy_r_type);
    goto CPyL46;
CPyL50: ;
    CPy_DECREF(cpy_r_r53);
    goto CPyL32;
}

PyObject *CPyPy_binder___get_declaration(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:get_declaration", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (Py_TYPE(obj_expr) == CPyType_nodes___IndexExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL58;
    if (Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL58;
    if (Py_TYPE(obj_expr) == CPyType_nodes___NameExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL58;
    CPy_TypeError("union[mypy.nodes.IndexExpr, mypy.nodes.MemberExpr, mypy.nodes.NameExpr]", obj_expr); 
    goto fail;
__LL58: ;
    PyObject *retval = CPyDef_binder___get_declaration(arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/binder.py", "get_declaration", 455, CPyStatic_binder___globals);
    return NULL;
}

char CPyDef_binder_____top_level__(void) {
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
    tuple_T3OOO cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    int32_t cpy_r_r83;
    char cpy_r_r84;
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
    tuple_T2OO cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    int32_t cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
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
    int32_t cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    int32_t cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject **cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject **cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    int32_t cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject **cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    int32_t cpy_r_r169;
    char cpy_r_r170;
    char cpy_r_r171;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", -1, CPyStatic_binder___globals);
        goto CPyL50;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_binder___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 1, CPyStatic_binder___globals);
        goto CPyL50;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9083]; /* ('defaultdict',) */
    cpy_r_r10 = CPyStatics[76]; /* 'collections' */
    cpy_r_r11 = CPyStatic_binder___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 3, CPyStatic_binder___globals);
        goto CPyL50;
    }
    CPyModule_collections = cpy_r_r12;
    CPy_INCREF(CPyModule_collections);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9084]; /* ('contextmanager',) */
    cpy_r_r14 = CPyStatics[78]; /* 'contextlib' */
    cpy_r_r15 = CPyStatic_binder___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 4, CPyStatic_binder___globals);
        goto CPyL50;
    }
    CPyModule_contextlib = cpy_r_r16;
    CPy_INCREF(CPyModule_contextlib);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9085]; /* ('DefaultDict', 'Iterator', 'List', 'Optional', 'Tuple',
                                     'Union', 'cast') */
    cpy_r_r18 = CPyStatics[21]; /* 'typing' */
    cpy_r_r19 = CPyStatic_binder___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 5, CPyStatic_binder___globals);
        goto CPyL50;
    }
    CPyModule_typing = cpy_r_r20;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9086]; /* ('TypeAlias',) */
    cpy_r_r22 = CPyStatics[9087]; /* ('_TypeAlias',) */
    cpy_r_r23 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r24 = CPyStatic_binder___globals;
    cpy_r_r25 = CPyImport_ImportFromMany(cpy_r_r23, cpy_r_r21, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 6, CPyStatic_binder___globals);
        goto CPyL50;
    }
    CPyModule_typing_extensions = cpy_r_r25;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r26 = CPyStatics[9088]; /* ('remove_instance_last_known_values',) */
    cpy_r_r27 = CPyStatics[90]; /* 'mypy.erasetype' */
    cpy_r_r28 = CPyStatic_binder___globals;
    cpy_r_r29 = CPyImport_ImportFromMany(cpy_r_r27, cpy_r_r26, cpy_r_r26, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 8, CPyStatic_binder___globals);
        goto CPyL50;
    }
    CPyModule_mypy___erasetype = cpy_r_r29;
    CPy_INCREF(CPyModule_mypy___erasetype);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r30 = CPyStatics[9089]; /* ('join_simple',) */
    cpy_r_r31 = CPyStatics[92]; /* 'mypy.join' */
    cpy_r_r32 = CPyStatic_binder___globals;
    cpy_r_r33 = CPyImport_ImportFromMany(cpy_r_r31, cpy_r_r30, cpy_r_r30, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 9, CPyStatic_binder___globals);
        goto CPyL50;
    }
    CPyModule_mypy___join = cpy_r_r33;
    CPy_INCREF(CPyModule_mypy___join);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r34 = CPyStatics[9090]; /* ('Key', 'literal', 'literal_hash', 'subkeys') */
    cpy_r_r35 = CPyStatics[97]; /* 'mypy.literals' */
    cpy_r_r36 = CPyStatic_binder___globals;
    cpy_r_r37 = CPyImport_ImportFromMany(cpy_r_r35, cpy_r_r34, cpy_r_r34, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 10, CPyStatic_binder___globals);
        goto CPyL50;
    }
    CPyModule_mypy___literals = cpy_r_r37;
    CPy_INCREF(CPyModule_mypy___literals);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r38 = CPyStatics[9091]; /* ('Expression', 'IndexExpr', 'MemberExpr', 'NameExpr',
                                     'RefExpr', 'TypeInfo', 'Var') */
    cpy_r_r39 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r40 = CPyStatic_binder___globals;
    cpy_r_r41 = CPyImport_ImportFromMany(cpy_r_r39, cpy_r_r38, cpy_r_r38, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 11, CPyStatic_binder___globals);
        goto CPyL50;
    }
    CPyModule_mypy___nodes = cpy_r_r41;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r42 = CPyStatics[9092]; /* ('is_same_type', 'is_subtype') */
    cpy_r_r43 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r44 = CPyStatic_binder___globals;
    cpy_r_r45 = CPyImport_ImportFromMany(cpy_r_r43, cpy_r_r42, cpy_r_r42, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 12, CPyStatic_binder___globals);
        goto CPyL50;
    }
    CPyModule_mypy___subtypes = cpy_r_r45;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r46 = CPyStatics[9093]; /* ('AnyType', 'NoneType', 'PartialType', 'Type',
                                     'TypeOfAny', 'TypeType', 'UnionType',
                                     'get_proper_type') */
    cpy_r_r47 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r48 = CPyStatic_binder___globals;
    cpy_r_r49 = CPyImport_ImportFromMany(cpy_r_r47, cpy_r_r46, cpy_r_r46, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 13, CPyStatic_binder___globals);
        goto CPyL50;
    }
    CPyModule_mypy___types = cpy_r_r49;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r50 = CPyStatics[9094]; /* ('fill_typevars_with_any',) */
    cpy_r_r51 = CPyStatics[110]; /* 'mypy.typevars' */
    cpy_r_r52 = CPyStatic_binder___globals;
    cpy_r_r53 = CPyImport_ImportFromMany(cpy_r_r51, cpy_r_r50, cpy_r_r50, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 23, CPyStatic_binder___globals);
        goto CPyL50;
    }
    CPyModule_mypy___typevars = cpy_r_r53;
    CPy_INCREF(CPyModule_mypy___typevars);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r54 = CPyStatic_binder___globals;
    cpy_r_r55 = CPyStatics[84]; /* 'Union' */
    cpy_r_r56 = CPyDict_GetItem(cpy_r_r54, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 25, CPyStatic_binder___globals);
        goto CPyL50;
    }
    cpy_r_r57 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r58 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r59 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r60.f0 = cpy_r_r57;
    cpy_r_r60.f1 = cpy_r_r58;
    cpy_r_r60.f2 = cpy_r_r59;
    CPy_INCREF(cpy_r_r60.f0);
    CPy_INCREF(cpy_r_r60.f1);
    CPy_INCREF(cpy_r_r60.f2);
    cpy_r_r61 = PyTuple_New(3);
    if (unlikely(cpy_r_r61 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp59 = cpy_r_r60.f0;
    PyTuple_SET_ITEM(cpy_r_r61, 0, __tmp59);
    PyObject *__tmp60 = cpy_r_r60.f1;
    PyTuple_SET_ITEM(cpy_r_r61, 1, __tmp60);
    PyObject *__tmp61 = cpy_r_r60.f2;
    PyTuple_SET_ITEM(cpy_r_r61, 2, __tmp61);
    cpy_r_r62 = PyObject_GetItem(cpy_r_r56, cpy_r_r61);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 25, CPyStatic_binder___globals);
        goto CPyL50;
    }
    cpy_r_r63 = CPyStatic_binder___globals;
    cpy_r_r64 = CPyStatics[111]; /* 'BindableExpression' */
    cpy_r_r65 = CPyDict_SetItem(cpy_r_r63, cpy_r_r64, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 25, CPyStatic_binder___globals);
        goto CPyL50;
    }
    cpy_r_r67 = NULL;
    cpy_r_r68 = CPyStatics[112]; /* 'mypy.binder' */
    cpy_r_r69 = (PyObject *)CPyType_binder___Frame_template;
    cpy_r_r70 = CPyType_FromTemplate(cpy_r_r69, cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 28, CPyStatic_binder___globals);
        goto CPyL50;
    }
    cpy_r_r71 = CPyDef_binder___Frame_trait_vtable_setup();
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", -1, CPyStatic_binder___globals);
        goto CPyL51;
    }
    cpy_r_r72 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r73 = CPyStatics[113]; /* 'id' */
    cpy_r_r74 = CPyStatics[114]; /* 'types' */
    cpy_r_r75 = CPyStatics[115]; /* 'unreachable' */
    cpy_r_r76 = CPyStatics[116]; /* 'conditional_frame' */
    cpy_r_r77 = CPyStatics[117]; /* 'suppress_unreachable_warnings' */
    cpy_r_r78 = PyTuple_Pack(5, cpy_r_r73, cpy_r_r74, cpy_r_r75, cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 28, CPyStatic_binder___globals);
        goto CPyL51;
    }
    cpy_r_r79 = PyObject_SetAttr(cpy_r_r70, cpy_r_r72, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r80 = cpy_r_r79 >= 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 28, CPyStatic_binder___globals);
        goto CPyL51;
    }
    CPyType_binder___Frame = (PyTypeObject *)cpy_r_r70;
    CPy_INCREF(CPyType_binder___Frame);
    cpy_r_r81 = CPyStatic_binder___globals;
    cpy_r_r82 = CPyStatics[118]; /* 'Frame' */
    cpy_r_r83 = CPyDict_SetItem(cpy_r_r81, cpy_r_r82, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r84 = cpy_r_r83 >= 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 28, CPyStatic_binder___globals);
        goto CPyL50;
    }
    cpy_r_r85 = CPyStatic_binder___globals;
    cpy_r_r86 = CPyStatics[79]; /* 'DefaultDict' */
    cpy_r_r87 = CPyDict_GetItem(cpy_r_r85, cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 58, CPyStatic_binder___globals);
        goto CPyL50;
    }
    cpy_r_r88 = (PyObject *)CPyType_nodes___Expression;
    cpy_r_r89 = CPyStatic_binder___globals;
    cpy_r_r90 = CPyStatics[81]; /* 'List' */
    cpy_r_r91 = CPyDict_GetItem(cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 58, CPyStatic_binder___globals);
        goto CPyL52;
    }
    cpy_r_r92 = CPyStatic_binder___globals;
    cpy_r_r93 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r94 = CPyDict_GetItem(cpy_r_r92, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 58, CPyStatic_binder___globals);
        goto CPyL53;
    }
    cpy_r_r95 = (PyObject *)CPyType_types___Type;
    cpy_r_r96 = CPyStatic_binder___globals;
    cpy_r_r97 = CPyStatics[82]; /* 'Optional' */
    cpy_r_r98 = CPyDict_GetItem(cpy_r_r96, cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 58, CPyStatic_binder___globals);
        goto CPyL54;
    }
    cpy_r_r99 = (PyObject *)CPyType_types___Type;
    cpy_r_r100 = PyObject_GetItem(cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 58, CPyStatic_binder___globals);
        goto CPyL54;
    }
    cpy_r_r101.f0 = cpy_r_r95;
    cpy_r_r101.f1 = cpy_r_r100;
    CPy_INCREF(cpy_r_r101.f0);
    CPy_INCREF(cpy_r_r101.f1);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r102 = PyTuple_New(2);
    if (unlikely(cpy_r_r102 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp62 = cpy_r_r101.f0;
    PyTuple_SET_ITEM(cpy_r_r102, 0, __tmp62);
    PyObject *__tmp63 = cpy_r_r101.f1;
    PyTuple_SET_ITEM(cpy_r_r102, 1, __tmp63);
    cpy_r_r103 = PyObject_GetItem(cpy_r_r94, cpy_r_r102);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 58, CPyStatic_binder___globals);
        goto CPyL53;
    }
    cpy_r_r104 = PyObject_GetItem(cpy_r_r91, cpy_r_r103);
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 58, CPyStatic_binder___globals);
        goto CPyL52;
    }
    cpy_r_r105.f0 = cpy_r_r88;
    cpy_r_r105.f1 = cpy_r_r104;
    CPy_INCREF(cpy_r_r105.f0);
    CPy_INCREF(cpy_r_r105.f1);
    CPy_DECREF(cpy_r_r104);
    cpy_r_r106 = PyTuple_New(2);
    if (unlikely(cpy_r_r106 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp64 = cpy_r_r105.f0;
    PyTuple_SET_ITEM(cpy_r_r106, 0, __tmp64);
    PyObject *__tmp65 = cpy_r_r105.f1;
    PyTuple_SET_ITEM(cpy_r_r106, 1, __tmp65);
    cpy_r_r107 = PyObject_GetItem(cpy_r_r87, cpy_r_r106);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 58, CPyStatic_binder___globals);
        goto CPyL50;
    }
    cpy_r_r108 = CPyStatic_binder___globals;
    cpy_r_r109 = CPyStatics[119]; /* 'Assigns' */
    cpy_r_r110 = CPyDict_SetItem(cpy_r_r108, cpy_r_r109, cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r111 = cpy_r_r110 >= 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 58, CPyStatic_binder___globals);
        goto CPyL50;
    }
    cpy_r_r112 = NULL;
    cpy_r_r113 = CPyStatics[112]; /* 'mypy.binder' */
    cpy_r_r114 = (PyObject *)CPyType_binder___ConditionalTypeBinder_template;
    cpy_r_r115 = CPyType_FromTemplate(cpy_r_r114, cpy_r_r112, cpy_r_r113);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 61, CPyStatic_binder___globals);
        goto CPyL50;
    }
    cpy_r_r116 = CPyDef_binder___ConditionalTypeBinder_trait_vtable_setup();
    if (unlikely(cpy_r_r116 == 2)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", -1, CPyStatic_binder___globals);
        goto CPyL55;
    }
    cpy_r_r117 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r118 = CPyStatics[120]; /* 'type_assignments' */
    cpy_r_r119 = CPyStatics[121]; /* 'next_id' */
    cpy_r_r120 = CPyStatics[122]; /* 'frames' */
    cpy_r_r121 = CPyStatics[123]; /* 'options_on_return' */
    cpy_r_r122 = CPyStatics[124]; /* 'declarations' */
    cpy_r_r123 = CPyStatics[125]; /* 'dependencies' */
    cpy_r_r124 = CPyStatics[126]; /* 'last_pop_changed' */
    cpy_r_r125 = CPyStatics[127]; /* 'try_frames' */
    cpy_r_r126 = CPyStatics[128]; /* 'break_frames' */
    cpy_r_r127 = CPyStatics[129]; /* 'continue_frames' */
    cpy_r_r128 = PyTuple_Pack(10, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124, cpy_r_r125, cpy_r_r126, cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 61, CPyStatic_binder___globals);
        goto CPyL55;
    }
    cpy_r_r129 = PyObject_SetAttr(cpy_r_r115, cpy_r_r117, cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 61, CPyStatic_binder___globals);
        goto CPyL55;
    }
    CPyType_binder___ConditionalTypeBinder = (PyTypeObject *)cpy_r_r115;
    CPy_INCREF(CPyType_binder___ConditionalTypeBinder);
    cpy_r_r131 = CPyStatic_binder___globals;
    cpy_r_r132 = CPyStatics[130]; /* 'ConditionalTypeBinder' */
    cpy_r_r133 = CPyDict_SetItem(cpy_r_r131, cpy_r_r132, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r134 = cpy_r_r133 >= 0;
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 61, CPyStatic_binder___globals);
        goto CPyL50;
    }
    cpy_r_r135 = (PyObject *)CPyType_binder___ConditionalTypeBinder;
    cpy_r_r136 = CPyStatics[131]; /* 'accumulate_type_assignments' */
    cpy_r_r137 = CPyObject_GetAttr(cpy_r_r135, cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 252, CPyStatic_binder___globals);
        goto CPyL50;
    }
    cpy_r_r138 = CPyStatic_binder___globals;
    cpy_r_r139 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r140 = CPyDict_GetItem(cpy_r_r138, cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 251, CPyStatic_binder___globals);
        goto CPyL56;
    }
    PyObject *cpy_r_r141[1] = {cpy_r_r137};
    cpy_r_r142 = (PyObject **)&cpy_r_r141;
    cpy_r_r143 = _PyObject_Vectorcall(cpy_r_r140, cpy_r_r142, 1, 0);
    CPy_DECREF(cpy_r_r140);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 252, CPyStatic_binder___globals);
        goto CPyL56;
    }
    CPy_DECREF(cpy_r_r137);
    cpy_r_r144 = CPyStatics[131]; /* 'accumulate_type_assignments' */
    cpy_r_r145 = PyObject_SetAttr(cpy_r_r135, cpy_r_r144, cpy_r_r143);
    CPy_DECREF(cpy_r_r143);
    cpy_r_r146 = cpy_r_r145 >= 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 252, CPyStatic_binder___globals);
        goto CPyL50;
    }
    cpy_r_r147 = (PyObject *)CPyType_binder___ConditionalTypeBinder;
    cpy_r_r148 = CPyStatics[132]; /* 'frame_context' */
    cpy_r_r149 = CPyObject_GetAttr(cpy_r_r147, cpy_r_r148);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 387, CPyStatic_binder___globals);
        goto CPyL50;
    }
    cpy_r_r150 = CPyStatic_binder___globals;
    cpy_r_r151 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r152 = CPyDict_GetItem(cpy_r_r150, cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 386, CPyStatic_binder___globals);
        goto CPyL57;
    }
    PyObject *cpy_r_r153[1] = {cpy_r_r149};
    cpy_r_r154 = (PyObject **)&cpy_r_r153;
    cpy_r_r155 = _PyObject_Vectorcall(cpy_r_r152, cpy_r_r154, 1, 0);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 387, CPyStatic_binder___globals);
        goto CPyL57;
    }
    CPy_DECREF(cpy_r_r149);
    cpy_r_r156 = CPyStatics[132]; /* 'frame_context' */
    cpy_r_r157 = PyObject_SetAttr(cpy_r_r147, cpy_r_r156, cpy_r_r155);
    CPy_DECREF(cpy_r_r155);
    cpy_r_r158 = cpy_r_r157 >= 0;
    if (unlikely(!cpy_r_r158)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 387, CPyStatic_binder___globals);
        goto CPyL50;
    }
    cpy_r_r159 = (PyObject *)CPyType_binder___ConditionalTypeBinder;
    cpy_r_r160 = CPyStatics[133]; /* 'top_frame_context' */
    cpy_r_r161 = CPyObject_GetAttr(cpy_r_r159, cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 445, CPyStatic_binder___globals);
        goto CPyL50;
    }
    cpy_r_r162 = CPyStatic_binder___globals;
    cpy_r_r163 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r164 = CPyDict_GetItem(cpy_r_r162, cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 444, CPyStatic_binder___globals);
        goto CPyL58;
    }
    PyObject *cpy_r_r165[1] = {cpy_r_r161};
    cpy_r_r166 = (PyObject **)&cpy_r_r165;
    cpy_r_r167 = _PyObject_Vectorcall(cpy_r_r164, cpy_r_r166, 1, 0);
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 445, CPyStatic_binder___globals);
        goto CPyL58;
    }
    CPy_DECREF(cpy_r_r161);
    cpy_r_r168 = CPyStatics[133]; /* 'top_frame_context' */
    cpy_r_r169 = PyObject_SetAttr(cpy_r_r159, cpy_r_r168, cpy_r_r167);
    CPy_DECREF(cpy_r_r167);
    cpy_r_r170 = cpy_r_r169 >= 0;
    if (unlikely(!cpy_r_r170)) {
        CPy_AddTraceback("mypy/binder.py", "<module>", 445, CPyStatic_binder___globals);
        goto CPyL50;
    }
    return 1;
CPyL50: ;
    cpy_r_r171 = 2;
    return cpy_r_r171;
CPyL51: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL50;
CPyL52: ;
    CPy_DecRef(cpy_r_r87);
    goto CPyL50;
CPyL53: ;
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r91);
    goto CPyL50;
CPyL54: ;
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r94);
    goto CPyL50;
CPyL55: ;
    CPy_DecRef(cpy_r_r115);
    goto CPyL50;
CPyL56: ;
    CPy_DecRef(cpy_r_r137);
    goto CPyL50;
CPyL57: ;
    CPy_DecRef(cpy_r_r149);
    goto CPyL50;
CPyL58: ;
    CPy_DecRef(cpy_r_r161);
    goto CPyL50;
}
