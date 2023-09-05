#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
state___StrictOptionalState_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *state___StrictOptionalState_setup(PyTypeObject *type);
PyObject *CPyDef_state___StrictOptionalState(char cpy_r_strict_optional);

static PyObject *
state___StrictOptionalState_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_state___StrictOptionalState) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = state___StrictOptionalState_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_state___StrictOptionalState_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
state___StrictOptionalState_traverse(mypy___state___StrictOptionalStateObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
state___StrictOptionalState_clear(mypy___state___StrictOptionalStateObject *self)
{
    return 0;
}

static void
state___StrictOptionalState_dealloc(mypy___state___StrictOptionalStateObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, state___StrictOptionalState_dealloc)
    state___StrictOptionalState_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem state___StrictOptionalState_vtable[2];
static bool
CPyDef_state___StrictOptionalState_trait_vtable_setup(void)
{
    CPyVTableItem state___StrictOptionalState_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_state___StrictOptionalState_____init__,
        (CPyVTableItem)CPyDef_state___StrictOptionalState___strict_optional_set,
    };
    memcpy(state___StrictOptionalState_vtable, state___StrictOptionalState_vtable_scratch, sizeof(state___StrictOptionalState_vtable));
    return 1;
}

static PyObject *
state___StrictOptionalState_get_strict_optional(mypy___state___StrictOptionalStateObject *self, void *closure);
static int
state___StrictOptionalState_set_strict_optional(mypy___state___StrictOptionalStateObject *self, PyObject *value, void *closure);

static PyGetSetDef state___StrictOptionalState_getseters[] = {
    {"strict_optional",
     (getter)state___StrictOptionalState_get_strict_optional, (setter)state___StrictOptionalState_set_strict_optional,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef state___StrictOptionalState_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_state___StrictOptionalState_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"strict_optional_set",
     (PyCFunction)CPyPy_state___StrictOptionalState___strict_optional_set,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_state___StrictOptionalState_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "StrictOptionalState",
    .tp_new = state___StrictOptionalState_new,
    .tp_dealloc = (destructor)state___StrictOptionalState_dealloc,
    .tp_traverse = (traverseproc)state___StrictOptionalState_traverse,
    .tp_clear = (inquiry)state___StrictOptionalState_clear,
    .tp_getset = state___StrictOptionalState_getseters,
    .tp_methods = state___StrictOptionalState_methods,
    .tp_init = state___StrictOptionalState_init,
    .tp_basicsize = sizeof(mypy___state___StrictOptionalStateObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_state___StrictOptionalState_template = &CPyType_state___StrictOptionalState_template_;

static PyObject *
state___StrictOptionalState_setup(PyTypeObject *type)
{
    mypy___state___StrictOptionalStateObject *self;
    self = (mypy___state___StrictOptionalStateObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = state___StrictOptionalState_vtable;
    self->_strict_optional = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_state___StrictOptionalState(char cpy_r_strict_optional)
{
    PyObject *self = state___StrictOptionalState_setup(CPyType_state___StrictOptionalState);
    if (self == NULL)
        return NULL;
    char res = CPyDef_state___StrictOptionalState_____init__(self, cpy_r_strict_optional);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
state___StrictOptionalState_get_strict_optional(mypy___state___StrictOptionalStateObject *self, void *closure)
{
    PyObject *retval = self->_strict_optional ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
state___StrictOptionalState_set_strict_optional(mypy___state___StrictOptionalStateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StrictOptionalState' object attribute 'strict_optional' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_strict_optional = tmp;
    return 0;
}

static PyObject *state___strict_optional_set_StrictOptionalState_env_setup(PyTypeObject *type);
PyObject *CPyDef_state___strict_optional_set_StrictOptionalState_env(void);

static PyObject *
state___strict_optional_set_StrictOptionalState_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_state___strict_optional_set_StrictOptionalState_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return state___strict_optional_set_StrictOptionalState_env_setup(type);
}

static int
state___strict_optional_set_StrictOptionalState_env_traverse(mypy___state___strict_optional_set_StrictOptionalState_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_type);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    return 0;
}

static int
state___strict_optional_set_StrictOptionalState_env_clear(mypy___state___strict_optional_set_StrictOptionalState_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_type);
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
state___strict_optional_set_StrictOptionalState_env_dealloc(mypy___state___strict_optional_set_StrictOptionalState_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, state___strict_optional_set_StrictOptionalState_env_dealloc)
    state___strict_optional_set_StrictOptionalState_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem state___strict_optional_set_StrictOptionalState_env_vtable[1];
static bool
CPyDef_state___strict_optional_set_StrictOptionalState_env_trait_vtable_setup(void)
{
    CPyVTableItem state___strict_optional_set_StrictOptionalState_env_vtable_scratch[] = {
        NULL
    };
    memcpy(state___strict_optional_set_StrictOptionalState_env_vtable, state___strict_optional_set_StrictOptionalState_env_vtable_scratch, sizeof(state___strict_optional_set_StrictOptionalState_env_vtable));
    return 1;
}

static PyMethodDef state___strict_optional_set_StrictOptionalState_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_state___strict_optional_set_StrictOptionalState_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "strict_optional_set_StrictOptionalState_env",
    .tp_new = state___strict_optional_set_StrictOptionalState_env_new,
    .tp_dealloc = (destructor)state___strict_optional_set_StrictOptionalState_env_dealloc,
    .tp_traverse = (traverseproc)state___strict_optional_set_StrictOptionalState_env_traverse,
    .tp_clear = (inquiry)state___strict_optional_set_StrictOptionalState_env_clear,
    .tp_methods = state___strict_optional_set_StrictOptionalState_env_methods,
    .tp_basicsize = sizeof(mypy___state___strict_optional_set_StrictOptionalState_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_state___strict_optional_set_StrictOptionalState_env_template = &CPyType_state___strict_optional_set_StrictOptionalState_env_template_;

static PyObject *
state___strict_optional_set_StrictOptionalState_env_setup(PyTypeObject *type)
{
    mypy___state___strict_optional_set_StrictOptionalState_envObject *self;
    self = (mypy___state___strict_optional_set_StrictOptionalState_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = state___strict_optional_set_StrictOptionalState_env_vtable;
    self->_value = 2;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->_saved = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_state___strict_optional_set_StrictOptionalState_env(void)
{
    PyObject *self = state___strict_optional_set_StrictOptionalState_env_setup(CPyType_state___strict_optional_set_StrictOptionalState_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *state___strict_optional_set_StrictOptionalState_gen_setup(PyTypeObject *type);
PyObject *CPyDef_state___strict_optional_set_StrictOptionalState_gen(void);

static PyObject *
state___strict_optional_set_StrictOptionalState_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_state___strict_optional_set_StrictOptionalState_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return state___strict_optional_set_StrictOptionalState_gen_setup(type);
}

static int
state___strict_optional_set_StrictOptionalState_gen_traverse(mypy___state___strict_optional_set_StrictOptionalState_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
state___strict_optional_set_StrictOptionalState_gen_clear(mypy___state___strict_optional_set_StrictOptionalState_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
state___strict_optional_set_StrictOptionalState_gen_dealloc(mypy___state___strict_optional_set_StrictOptionalState_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, state___strict_optional_set_StrictOptionalState_gen_dealloc)
    state___strict_optional_set_StrictOptionalState_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem state___strict_optional_set_StrictOptionalState_gen_vtable[6];
static bool
CPyDef_state___strict_optional_set_StrictOptionalState_gen_trait_vtable_setup(void)
{
    CPyVTableItem state___strict_optional_set_StrictOptionalState_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_state___strict_optional_set_StrictOptionalState_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_state___strict_optional_set_StrictOptionalState_gen_____next__,
        (CPyVTableItem)CPyDef_state___strict_optional_set_StrictOptionalState_gen___send,
        (CPyVTableItem)CPyDef_state___strict_optional_set_StrictOptionalState_gen_____iter__,
        (CPyVTableItem)CPyDef_state___strict_optional_set_StrictOptionalState_gen___throw,
        (CPyVTableItem)CPyDef_state___strict_optional_set_StrictOptionalState_gen___close,
    };
    memcpy(state___strict_optional_set_StrictOptionalState_gen_vtable, state___strict_optional_set_StrictOptionalState_gen_vtable_scratch, sizeof(state___strict_optional_set_StrictOptionalState_gen_vtable));
    return 1;
}

static PyMethodDef state___strict_optional_set_StrictOptionalState_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_state___strict_optional_set_StrictOptionalState_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_state___strict_optional_set_StrictOptionalState_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_state___strict_optional_set_StrictOptionalState_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_state___strict_optional_set_StrictOptionalState_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_state___strict_optional_set_StrictOptionalState_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_state___strict_optional_set_StrictOptionalState_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_state___strict_optional_set_StrictOptionalState_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "strict_optional_set_StrictOptionalState_gen",
    .tp_new = state___strict_optional_set_StrictOptionalState_gen_new,
    .tp_dealloc = (destructor)state___strict_optional_set_StrictOptionalState_gen_dealloc,
    .tp_traverse = (traverseproc)state___strict_optional_set_StrictOptionalState_gen_traverse,
    .tp_clear = (inquiry)state___strict_optional_set_StrictOptionalState_gen_clear,
    .tp_methods = state___strict_optional_set_StrictOptionalState_gen_methods,
    .tp_iter = CPyDef_state___strict_optional_set_StrictOptionalState_gen_____iter__,
    .tp_iternext = CPyDef_state___strict_optional_set_StrictOptionalState_gen_____next__,
    .tp_basicsize = sizeof(mypy___state___strict_optional_set_StrictOptionalState_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_state___strict_optional_set_StrictOptionalState_gen_template = &CPyType_state___strict_optional_set_StrictOptionalState_gen_template_;

static PyObject *
state___strict_optional_set_StrictOptionalState_gen_setup(PyTypeObject *type)
{
    mypy___state___strict_optional_set_StrictOptionalState_genObject *self;
    self = (mypy___state___strict_optional_set_StrictOptionalState_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = state___strict_optional_set_StrictOptionalState_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_state___strict_optional_set_StrictOptionalState_gen(void)
{
    PyObject *self = state___strict_optional_set_StrictOptionalState_gen_setup(CPyType_state___strict_optional_set_StrictOptionalState_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef statemodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef statemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.state",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    statemodule_methods
};

PyObject *CPyInit_mypy___state(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___state_internal) {
        Py_INCREF(CPyModule_mypy___state_internal);
        return CPyModule_mypy___state_internal;
    }
    CPyModule_mypy___state_internal = PyModule_Create(&statemodule);
    if (unlikely(CPyModule_mypy___state_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___state_internal, "__name__");
    CPyStatic_state___globals = PyModule_GetDict(CPyModule_mypy___state_internal);
    if (unlikely(CPyStatic_state___globals == NULL))
        goto fail;
    CPyType_state___strict_optional_set_StrictOptionalState_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_state___strict_optional_set_StrictOptionalState_env_template, NULL, modname);
    if (unlikely(!CPyType_state___strict_optional_set_StrictOptionalState_env))
        goto fail;
    CPyType_state___strict_optional_set_StrictOptionalState_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_state___strict_optional_set_StrictOptionalState_gen_template, NULL, modname);
    if (unlikely(!CPyType_state___strict_optional_set_StrictOptionalState_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_state_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___state_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___state_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_state___state);
    CPyStatic_state___state = NULL;
    Py_CLEAR(CPyType_state___StrictOptionalState);
    Py_CLEAR(CPyType_state___strict_optional_set_StrictOptionalState_env);
    Py_CLEAR(CPyType_state___strict_optional_set_StrictOptionalState_gen);
    return NULL;
}

char CPyDef_state___StrictOptionalState_____init__(PyObject *cpy_r_self, char cpy_r_strict_optional) {
    ((mypy___state___StrictOptionalStateObject *)cpy_r_self)->_strict_optional = cpy_r_strict_optional;
    return 1;
}

PyObject *CPyPy_state___StrictOptionalState_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"strict_optional", 0};
    PyObject *obj_strict_optional;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_strict_optional)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_state___StrictOptionalState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.state.StrictOptionalState", obj_self); 
        goto fail;
    }
    char arg_strict_optional;
    if (unlikely(!PyBool_Check(obj_strict_optional))) {
        CPy_TypeError("bool", obj_strict_optional); goto fail;
    } else
        arg_strict_optional = obj_strict_optional == Py_True;
    char retval = CPyDef_state___StrictOptionalState_____init__(arg_self, arg_strict_optional);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/state.py", "__init__", 13, CPyStatic_state___globals);
    return NULL;
}

PyObject *CPyDef_state___strict_optional_set_StrictOptionalState_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    tuple_T3OOO cpy_r_r14;
    tuple_T3OOO cpy_r_r15;
    tuple_T3OOO cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    int64_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    int64_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    cpy_r_r0 = ((mypy___state___strict_optional_set_StrictOptionalState_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/state.py", "strict_optional_set", "strict_optional_set_StrictOptionalState_gen", "__mypyc_env__", 18, CPyStatic_state___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/state.py", "strict_optional_set", "strict_optional_set_StrictOptionalState_env", "__mypyc_next_label__", 18, CPyStatic_state___globals);
        goto CPyL40;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL29;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL41;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/state.py", "strict_optional_set", 18, CPyStatic_state___globals);
        goto CPyL39;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/state.py", "strict_optional_set", "strict_optional_set_StrictOptionalState_env", "self", 19, CPyStatic_state___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___state___StrictOptionalStateObject *)cpy_r_r4)->_strict_optional;
    CPy_DECREF(cpy_r_r4);
    ((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->_saved = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/state.py", "strict_optional_set", 19, CPyStatic_state___globals);
        goto CPyL40;
    }
    cpy_r_r7 = ((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->_value;
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AttributeError("mypy/state.py", "strict_optional_set", "strict_optional_set_StrictOptionalState_env", "value", 20, CPyStatic_state___globals);
        goto CPyL40;
    }
CPyL8: ;
    cpy_r_r8 = ((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/state.py", "strict_optional_set", "strict_optional_set_StrictOptionalState_env", "self", 20, CPyStatic_state___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r8);
CPyL9: ;
    ((mypy___state___StrictOptionalStateObject *)cpy_r_r8)->_strict_optional = cpy_r_r7;
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = Py_None;
    if (((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/state.py", "strict_optional_set", 22, CPyStatic_state___globals);
        goto CPyL16;
    } else
        goto CPyL42;
CPyL11: ;
    CPy_INCREF(cpy_r_r10);
    return cpy_r_r10;
CPyL12: ;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_type != cpy_r_r12;
    if (!cpy_r_r13) goto CPyL15;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/state.py", "strict_optional_set", 22, CPyStatic_state___globals);
        goto CPyL16;
    } else
        goto CPyL43;
CPyL14: ;
    CPy_Unreachable();
CPyL15: ;
    tuple_T3OOO __tmp6848 = { NULL, NULL, NULL };
    cpy_r_r14 = __tmp6848;
    cpy_r_r15 = cpy_r_r14;
    goto CPyL17;
CPyL16: ;
    cpy_r_r16 = CPy_CatchError();
    cpy_r_r15 = cpy_r_r16;
CPyL17: ;
    cpy_r_r17 = ((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->_saved;
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AttributeError("mypy/state.py", "strict_optional_set", "strict_optional_set_StrictOptionalState_env", "saved", 24, CPyStatic_state___globals);
        goto CPyL44;
    }
CPyL18: ;
    cpy_r_r18 = ((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/state.py", "strict_optional_set", "strict_optional_set_StrictOptionalState_env", "self", 24, CPyStatic_state___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r18);
CPyL19: ;
    ((mypy___state___StrictOptionalStateObject *)cpy_r_r18)->_strict_optional = cpy_r_r17;
    CPy_DECREF(cpy_r_r18);
    if (cpy_r_r15.f0 == NULL) {
        goto CPyL26;
    } else
        goto CPyL45;
CPyL20: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL22;
    } else
        goto CPyL46;
CPyL21: ;
    CPy_Unreachable();
CPyL22: ;
    if (cpy_r_r15.f0 == NULL) goto CPyL24;
    CPy_RestoreExcInfo(cpy_r_r15);
    CPy_XDECREF(cpy_r_r15.f0);
    CPy_XDECREF(cpy_r_r15.f1);
    CPy_XDECREF(cpy_r_r15.f2);
CPyL24: ;
    cpy_r_r20 = CPy_KeepPropagating();
    if (!cpy_r_r20) goto CPyL39;
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r21 = Py_None;
    if (((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r22 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/state.py", "strict_optional_set", 18, CPyStatic_state___globals);
        goto CPyL39;
    }
    CPyGen_SetStopIterationValue(cpy_r_r21);
    if (!0) goto CPyL39;
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r23 = cpy_r_r1 & 1;
    cpy_r_r24 = cpy_r_r23 == 0;
    if (!cpy_r_r24) goto CPyL31;
    cpy_r_r25 = cpy_r_r1 == 0;
    cpy_r_r26 = cpy_r_r25;
    goto CPyL32;
CPyL31: ;
    cpy_r_r27 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r26 = cpy_r_r27;
CPyL32: ;
    if (cpy_r_r26) goto CPyL47;
    cpy_r_r28 = cpy_r_r1 & 1;
    cpy_r_r29 = cpy_r_r28 == 0;
    if (!cpy_r_r29) goto CPyL35;
    cpy_r_r30 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r31 = cpy_r_r30;
    goto CPyL36;
CPyL35: ;
    cpy_r_r32 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r31 = cpy_r_r32;
CPyL36: ;
    if (cpy_r_r31) {
        goto CPyL12;
    } else
        goto CPyL48;
CPyL37: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/state.py", "strict_optional_set", 18, CPyStatic_state___globals);
        goto CPyL39;
    }
    CPy_Unreachable();
CPyL39: ;
    cpy_r_r34 = NULL;
    return cpy_r_r34;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL39;
CPyL41: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL42: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL11;
CPyL43: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL14;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL22;
CPyL45: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL20;
CPyL46: ;
    CPy_XDECREF(cpy_r_r15.f0);
    CPy_XDECREF(cpy_r_r15.f1);
    CPy_XDECREF(cpy_r_r15.f2);
    goto CPyL21;
CPyL47: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL48: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL37;
}

PyObject *CPyPy_state___strict_optional_set_StrictOptionalState_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_state___strict_optional_set_StrictOptionalState_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/state.py", "strict_optional_set", 18, CPyStatic_state___globals);
    return NULL;
}

PyObject *CPyDef_state___strict_optional_set_StrictOptionalState_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_state___strict_optional_set_StrictOptionalState_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_state___strict_optional_set_StrictOptionalState_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_state___strict_optional_set_StrictOptionalState_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.state.strict_optional_set_StrictOptionalState_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_state___strict_optional_set_StrictOptionalState_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/state.py", "__next__", -1, CPyStatic_state___globals);
    return NULL;
}

PyObject *CPyDef_state___strict_optional_set_StrictOptionalState_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_state___strict_optional_set_StrictOptionalState_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_state___strict_optional_set_StrictOptionalState_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_state___strict_optional_set_StrictOptionalState_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.state.strict_optional_set_StrictOptionalState_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_state___strict_optional_set_StrictOptionalState_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/state.py", "send", -1, CPyStatic_state___globals);
    return NULL;
}

PyObject *CPyDef_state___strict_optional_set_StrictOptionalState_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_state___strict_optional_set_StrictOptionalState_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_state___strict_optional_set_StrictOptionalState_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.state.strict_optional_set_StrictOptionalState_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_state___strict_optional_set_StrictOptionalState_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/state.py", "__iter__", -1, CPyStatic_state___globals);
    return NULL;
}

PyObject *CPyDef_state___strict_optional_set_StrictOptionalState_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_state___strict_optional_set_StrictOptionalState_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_state___strict_optional_set_StrictOptionalState_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_state___strict_optional_set_StrictOptionalState_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.state.strict_optional_set_StrictOptionalState_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_state___strict_optional_set_StrictOptionalState_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/state.py", "throw", -1, CPyStatic_state___globals);
    return NULL;
}

PyObject *CPyDef_state___strict_optional_set_StrictOptionalState_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_state___strict_optional_set_StrictOptionalState_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp6849 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp6849);
    PyObject *__tmp6850 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp6850);
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

PyObject *CPyPy_state___strict_optional_set_StrictOptionalState_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_state___strict_optional_set_StrictOptionalState_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.state.strict_optional_set_StrictOptionalState_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_state___strict_optional_set_StrictOptionalState_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/state.py", "close", -1, CPyStatic_state___globals);
    return NULL;
}

PyObject *CPyDef_state___StrictOptionalState___strict_optional_set(PyObject *cpy_r_self, char cpy_r_value) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_state___strict_optional_set_StrictOptionalState_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/state.py", "strict_optional_set", 18, CPyStatic_state___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/state.py", "strict_optional_set", 18, CPyStatic_state___globals);
        goto CPyL8;
    }
    ((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->_value = cpy_r_value;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/state.py", "strict_optional_set", 18, CPyStatic_state___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_state___strict_optional_set_StrictOptionalState_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/state.py", "strict_optional_set", 18, CPyStatic_state___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___state___strict_optional_set_StrictOptionalState_genObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___state___strict_optional_set_StrictOptionalState_genObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypy___state___strict_optional_set_StrictOptionalState_genObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/state.py", "strict_optional_set", 18, CPyStatic_state___globals);
        goto CPyL9;
    }
    if (((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___state___strict_optional_set_StrictOptionalState_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/state.py", "strict_optional_set", 18, CPyStatic_state___globals);
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

PyObject *CPyPy_state___StrictOptionalState___strict_optional_set(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:strict_optional_set", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_state___StrictOptionalState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.state.StrictOptionalState", obj_self); 
        goto fail;
    }
    char arg_value;
    if (unlikely(!PyBool_Check(obj_value))) {
        CPy_TypeError("bool", obj_value); goto fail;
    } else
        arg_value = obj_value == Py_True;
    PyObject *retval = CPyDef_state___StrictOptionalState___strict_optional_set(arg_self, arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/state.py", "strict_optional_set", 18, CPyStatic_state___globals);
    return NULL;
}

char CPyDef_state_____top_level__(void) {
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
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/state.py", "<module>", -1, CPyStatic_state___globals);
        goto CPyL19;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_state___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/state.py", "<module>", 1, CPyStatic_state___globals);
        goto CPyL19;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9084]; /* ('contextmanager',) */
    cpy_r_r10 = CPyStatics[78]; /* 'contextlib' */
    cpy_r_r11 = CPyStatic_state___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/state.py", "<module>", 3, CPyStatic_state___globals);
        goto CPyL19;
    }
    CPyModule_contextlib = cpy_r_r12;
    CPy_INCREF(CPyModule_contextlib);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9641]; /* ('Final', 'Iterator') */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_state___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/state.py", "<module>", 4, CPyStatic_state___globals);
        goto CPyL19;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPyStatics[1020]; /* 'mypy.state' */
    cpy_r_r19 = (PyObject *)CPyType_state___StrictOptionalState_template;
    cpy_r_r20 = CPyType_FromTemplate(cpy_r_r19, cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/state.py", "<module>", 10, CPyStatic_state___globals);
        goto CPyL19;
    }
    cpy_r_r21 = CPyDef_state___StrictOptionalState_trait_vtable_setup();
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/state.py", "<module>", -1, CPyStatic_state___globals);
        goto CPyL20;
    }
    cpy_r_r22 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r23 = CPyStatics[2842]; /* 'strict_optional' */
    cpy_r_r24 = PyTuple_Pack(1, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/state.py", "<module>", 10, CPyStatic_state___globals);
        goto CPyL20;
    }
    cpy_r_r25 = PyObject_SetAttr(cpy_r_r20, cpy_r_r22, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/state.py", "<module>", 10, CPyStatic_state___globals);
        goto CPyL20;
    }
    CPyType_state___StrictOptionalState = (PyTypeObject *)cpy_r_r20;
    CPy_INCREF(CPyType_state___StrictOptionalState);
    cpy_r_r27 = CPyStatic_state___globals;
    cpy_r_r28 = CPyStatics[5452]; /* 'StrictOptionalState' */
    cpy_r_r29 = CPyDict_SetItem(cpy_r_r27, cpy_r_r28, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/state.py", "<module>", 10, CPyStatic_state___globals);
        goto CPyL19;
    }
    cpy_r_r31 = (PyObject *)CPyType_state___StrictOptionalState;
    cpy_r_r32 = CPyStatics[692]; /* 'strict_optional_set' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/state.py", "<module>", 18, CPyStatic_state___globals);
        goto CPyL19;
    }
    cpy_r_r34 = CPyStatic_state___globals;
    cpy_r_r35 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r36 = CPyDict_GetItem(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/state.py", "<module>", 17, CPyStatic_state___globals);
        goto CPyL21;
    }
    PyObject *cpy_r_r37[1] = {cpy_r_r33};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = _PyObject_Vectorcall(cpy_r_r36, cpy_r_r38, 1, 0);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/state.py", "<module>", 18, CPyStatic_state___globals);
        goto CPyL21;
    }
    CPy_DECREF(cpy_r_r33);
    cpy_r_r40 = CPyStatics[692]; /* 'strict_optional_set' */
    cpy_r_r41 = PyObject_SetAttr(cpy_r_r31, cpy_r_r40, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/state.py", "<module>", 18, CPyStatic_state___globals);
        goto CPyL19;
    }
    cpy_r_r43 = CPyDef_state___StrictOptionalState(0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/state.py", "<module>", 27, CPyStatic_state___globals);
        goto CPyL19;
    }
    CPyStatic_state___state = cpy_r_r43;
    CPy_INCREF(CPyStatic_state___state);
    cpy_r_r44 = CPyStatic_state___globals;
    cpy_r_r45 = CPyStatics[1019]; /* 'state' */
    cpy_r_r46 = CPyDict_SetItem(cpy_r_r44, cpy_r_r45, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/state.py", "<module>", 27, CPyStatic_state___globals);
        goto CPyL19;
    }
    cpy_r_r48 = CPyStatic_state___globals;
    cpy_r_r49 = CPyStatics[1320]; /* 'find_occurrences' */
    cpy_r_r50 = Py_None;
    cpy_r_r51 = CPyDict_SetItem(cpy_r_r48, cpy_r_r49, cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/state.py", "<module>", 28, CPyStatic_state___globals);
        goto CPyL19;
    }
    return 1;
CPyL19: ;
    cpy_r_r53 = 2;
    return cpy_r_r53;
CPyL20: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL19;
CPyL21: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL19;
}
