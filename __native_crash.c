#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *crash___catch_errors_env_setup(PyTypeObject *type);
PyObject *CPyDef_crash___catch_errors_env(void);

static PyObject *
crash___catch_errors_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_crash___catch_errors_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return crash___catch_errors_env_setup(type);
}

static int
crash___catch_errors_env_traverse(mypyc___crash___catch_errors_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_module_path);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__0.f0);
    Py_VISIT(self->___mypyc_temp__0.f1);
    Py_VISIT(self->___mypyc_temp__0.f2);
    return 0;
}

static int
crash___catch_errors_env_clear(mypyc___crash___catch_errors_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_module_path);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
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
    Py_CLEAR(self->___mypyc_temp__0.f0);
    Py_CLEAR(self->___mypyc_temp__0.f1);
    Py_CLEAR(self->___mypyc_temp__0.f2);
    return 0;
}

static void
crash___catch_errors_env_dealloc(mypyc___crash___catch_errors_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, crash___catch_errors_env_dealloc)
    crash___catch_errors_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem crash___catch_errors_env_vtable[1];
static bool
CPyDef_crash___catch_errors_env_trait_vtable_setup(void)
{
    CPyVTableItem crash___catch_errors_env_vtable_scratch[] = {
        NULL
    };
    memcpy(crash___catch_errors_env_vtable, crash___catch_errors_env_vtable_scratch, sizeof(crash___catch_errors_env_vtable));
    return 1;
}

static PyMethodDef crash___catch_errors_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_crash___catch_errors_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "catch_errors_env",
    .tp_new = crash___catch_errors_env_new,
    .tp_dealloc = (destructor)crash___catch_errors_env_dealloc,
    .tp_traverse = (traverseproc)crash___catch_errors_env_traverse,
    .tp_clear = (inquiry)crash___catch_errors_env_clear,
    .tp_methods = crash___catch_errors_env_methods,
    .tp_basicsize = sizeof(mypyc___crash___catch_errors_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_crash___catch_errors_env_template = &CPyType_crash___catch_errors_env_template_;

static PyObject *
crash___catch_errors_env_setup(PyTypeObject *type)
{
    mypyc___crash___catch_errors_envObject *self;
    self = (mypyc___crash___catch_errors_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = crash___catch_errors_env_vtable;
    self->_line = CPY_INT_TAG;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__0 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_crash___catch_errors_env(void)
{
    PyObject *self = crash___catch_errors_env_setup(CPyType_crash___catch_errors_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *crash___catch_errors_gen_setup(PyTypeObject *type);
PyObject *CPyDef_crash___catch_errors_gen(void);

static PyObject *
crash___catch_errors_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_crash___catch_errors_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return crash___catch_errors_gen_setup(type);
}

static int
crash___catch_errors_gen_traverse(mypyc___crash___catch_errors_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
crash___catch_errors_gen_clear(mypyc___crash___catch_errors_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
crash___catch_errors_gen_dealloc(mypyc___crash___catch_errors_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, crash___catch_errors_gen_dealloc)
    crash___catch_errors_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem crash___catch_errors_gen_vtable[6];
static bool
CPyDef_crash___catch_errors_gen_trait_vtable_setup(void)
{
    CPyVTableItem crash___catch_errors_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_crash___catch_errors_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_crash___catch_errors_gen_____next__,
        (CPyVTableItem)CPyDef_crash___catch_errors_gen___send,
        (CPyVTableItem)CPyDef_crash___catch_errors_gen_____iter__,
        (CPyVTableItem)CPyDef_crash___catch_errors_gen___throw,
        (CPyVTableItem)CPyDef_crash___catch_errors_gen___close,
    };
    memcpy(crash___catch_errors_gen_vtable, crash___catch_errors_gen_vtable_scratch, sizeof(crash___catch_errors_gen_vtable));
    return 1;
}

static PyMethodDef crash___catch_errors_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_crash___catch_errors_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_crash___catch_errors_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_crash___catch_errors_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_crash___catch_errors_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_crash___catch_errors_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_crash___catch_errors_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_crash___catch_errors_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "catch_errors_gen",
    .tp_new = crash___catch_errors_gen_new,
    .tp_dealloc = (destructor)crash___catch_errors_gen_dealloc,
    .tp_traverse = (traverseproc)crash___catch_errors_gen_traverse,
    .tp_clear = (inquiry)crash___catch_errors_gen_clear,
    .tp_methods = crash___catch_errors_gen_methods,
    .tp_iter = CPyDef_crash___catch_errors_gen_____iter__,
    .tp_iternext = CPyDef_crash___catch_errors_gen_____next__,
    .tp_basicsize = sizeof(mypyc___crash___catch_errors_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_crash___catch_errors_gen_template = &CPyType_crash___catch_errors_gen_template_;

static PyObject *
crash___catch_errors_gen_setup(PyTypeObject *type)
{
    mypyc___crash___catch_errors_genObject *self;
    self = (mypyc___crash___catch_errors_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = crash___catch_errors_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_crash___catch_errors_gen(void)
{
    PyObject *self = crash___catch_errors_gen_setup(CPyType_crash___catch_errors_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef crashmodule_methods[] = {
    {"catch_errors", (PyCFunction)CPyPy_crash___catch_errors, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"crash_report", (PyCFunction)CPyPy_crash___crash_report, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef crashmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.crash",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    crashmodule_methods
};

PyObject *CPyInit_mypyc___crash(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___crash_internal) {
        Py_INCREF(CPyModule_mypyc___crash_internal);
        return CPyModule_mypyc___crash_internal;
    }
    CPyModule_mypyc___crash_internal = PyModule_Create(&crashmodule);
    if (unlikely(CPyModule_mypyc___crash_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___crash_internal, "__name__");
    CPyStatic_crash___globals = PyModule_GetDict(CPyModule_mypyc___crash_internal);
    if (unlikely(CPyStatic_crash___globals == NULL))
        goto fail;
    CPyType_crash___catch_errors_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_crash___catch_errors_env_template, NULL, modname);
    if (unlikely(!CPyType_crash___catch_errors_env))
        goto fail;
    CPyType_crash___catch_errors_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_crash___catch_errors_gen_template, NULL, modname);
    if (unlikely(!CPyType_crash___catch_errors_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_crash_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___crash_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___crash_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_crash___catch_errors_env);
    Py_CLEAR(CPyType_crash___catch_errors_gen);
    return NULL;
}

PyObject *CPyDef_crash___catch_errors_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    tuple_T3OOO cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    tuple_T3OOO cpy_r_r17;
    tuple_T3OOO cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    int64_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    int64_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_r0 = ((mypyc___crash___catch_errors_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/crash.py", "catch_errors", "catch_errors_gen", "__mypyc_env__", 10, CPyStatic_crash___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/crash.py", "catch_errors", "catch_errors_env", "__mypyc_next_label__", 10, CPyStatic_crash___globals);
        goto CPyL37;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL26;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL38;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/crash.py", "catch_errors", 10, CPyStatic_crash___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = Py_None;
    if (((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/crash.py", "catch_errors", 12, CPyStatic_crash___globals);
        goto CPyL10;
    } else
        goto CPyL39;
CPyL6: ;
    CPy_INCREF(cpy_r_r4);
    return cpy_r_r4;
CPyL7: ;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_type != cpy_r_r6;
    if (!cpy_r_r7) goto CPyL23;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/crash.py", "catch_errors", 12, CPyStatic_crash___globals);
        goto CPyL10;
    } else
        goto CPyL40;
CPyL9: ;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r8 = CPy_CatchError();
    if (((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_temp__0.f0 != NULL) {
        CPy_DECREF(((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_temp__0.f0);
        CPy_DECREF(((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_temp__0.f1);
        CPy_DECREF(((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_temp__0.f2);
    }
    ((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_temp__0 = cpy_r_r8;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/crash.py", "catch_errors", -1, CPyStatic_crash___globals);
        goto CPyL20;
    }
    cpy_r_r10 = CPyModule_builtins;
    cpy_r_r11 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "catch_errors", 13, CPyStatic_crash___globals);
        goto CPyL20;
    }
    cpy_r_r13 = CPy_ExceptionMatches(cpy_r_r12);
    CPy_DecRef(cpy_r_r12);
    if (!cpy_r_r13) goto CPyL16;
    cpy_r_r14 = ((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->_module_path;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/crash.py", "catch_errors", "catch_errors_env", "module_path", 14, CPyStatic_crash___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r14);
CPyL14: ;
    cpy_r_r15 = ((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/crash.py", "catch_errors", "catch_errors_env", "line", 14, CPyStatic_crash___globals);
        goto CPyL41;
    }
    CPyTagged_INCREF(cpy_r_r15);
CPyL15: ;
    cpy_r_r16 = CPyDef_crash___crash_report(cpy_r_r14, cpy_r_r15);
    CPy_DecRef(cpy_r_r14);
    CPyTagged_DecRef(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "catch_errors", 14, CPyStatic_crash___globals);
        goto CPyL20;
    } else
        goto CPyL42;
CPyL16: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL20;
    } else
        goto CPyL43;
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r17 = ((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_temp__0;
    if (unlikely(cpy_r_r17.f0 == NULL)) {
        CPy_AttributeError("mypyc/crash.py", "catch_errors", "catch_errors_env", "__mypyc_temp__0", -1, CPyStatic_crash___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r17.f0);
    CPy_INCREF(cpy_r_r17.f1);
    CPy_INCREF(cpy_r_r17.f2);
CPyL19: ;
    CPy_RestoreExcInfo(cpy_r_r17);
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    CPy_DecRef(cpy_r_r17.f2);
    goto CPyL23;
CPyL20: ;
    cpy_r_r18 = ((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_temp__0;
    if (unlikely(cpy_r_r18.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__0' of 'catch_errors_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r18.f0);
        CPy_INCREF(cpy_r_r18.f1);
        CPy_INCREF(cpy_r_r18.f2);
    }
    CPy_DecRef(cpy_r_r0);
    if (unlikely(cpy_r_r18.f0 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "catch_errors", -1, CPyStatic_crash___globals);
        goto CPyL36;
    }
CPyL21: ;
    CPy_RestoreExcInfo(cpy_r_r18);
    CPy_DecRef(cpy_r_r18.f0);
    CPy_DecRef(cpy_r_r18.f1);
    CPy_DecRef(cpy_r_r18.f2);
    cpy_r_r19 = CPy_KeepPropagating();
    if (!cpy_r_r19) goto CPyL36;
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r20 = Py_None;
    if (((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r21 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/crash.py", "catch_errors", 10, CPyStatic_crash___globals);
        goto CPyL36;
    }
    CPyGen_SetStopIterationValue(cpy_r_r20);
    if (!0) goto CPyL36;
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r22 = cpy_r_r1 & 1;
    cpy_r_r23 = cpy_r_r22 == 0;
    if (!cpy_r_r23) goto CPyL28;
    cpy_r_r24 = cpy_r_r1 == 0;
    cpy_r_r25 = cpy_r_r24;
    goto CPyL29;
CPyL28: ;
    cpy_r_r26 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r25 = cpy_r_r26;
CPyL29: ;
    if (cpy_r_r25) goto CPyL44;
    cpy_r_r27 = cpy_r_r1 & 1;
    cpy_r_r28 = cpy_r_r27 == 0;
    if (!cpy_r_r28) goto CPyL32;
    cpy_r_r29 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r30 = cpy_r_r29;
    goto CPyL33;
CPyL32: ;
    cpy_r_r31 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r30 = cpy_r_r31;
CPyL33: ;
    if (cpy_r_r30) {
        goto CPyL7;
    } else
        goto CPyL45;
CPyL34: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/crash.py", "catch_errors", 10, CPyStatic_crash___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL36: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL36;
CPyL38: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL39: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL6;
CPyL40: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL9;
CPyL41: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL20;
CPyL42: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL18;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL17;
CPyL44: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL45: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL34;
}

PyObject *CPyPy_crash___catch_errors_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_crash___catch_errors_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/crash.py", "catch_errors", 10, CPyStatic_crash___globals);
    return NULL;
}

PyObject *CPyDef_crash___catch_errors_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_crash___catch_errors_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_crash___catch_errors_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_crash___catch_errors_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.crash.catch_errors_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_crash___catch_errors_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/crash.py", "__next__", -1, CPyStatic_crash___globals);
    return NULL;
}

PyObject *CPyDef_crash___catch_errors_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_crash___catch_errors_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_crash___catch_errors_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_crash___catch_errors_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.crash.catch_errors_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_crash___catch_errors_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/crash.py", "send", -1, CPyStatic_crash___globals);
    return NULL;
}

PyObject *CPyDef_crash___catch_errors_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_crash___catch_errors_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_crash___catch_errors_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.crash.catch_errors_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_crash___catch_errors_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/crash.py", "__iter__", -1, CPyStatic_crash___globals);
    return NULL;
}

PyObject *CPyDef_crash___catch_errors_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_crash___catch_errors_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_crash___catch_errors_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_crash___catch_errors_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.crash.catch_errors_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_crash___catch_errors_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/crash.py", "throw", -1, CPyStatic_crash___globals);
    return NULL;
}

PyObject *CPyDef_crash___catch_errors_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_crash___catch_errors_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp9759 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp9759);
    PyObject *__tmp9760 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp9760);
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

PyObject *CPyPy_crash___catch_errors_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_crash___catch_errors_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.crash.catch_errors_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_crash___catch_errors_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/crash.py", "close", -1, CPyStatic_crash___globals);
    return NULL;
}

PyObject *CPyDef_crash___catch_errors(PyObject *cpy_r_module_path, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_crash___catch_errors_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "catch_errors", 10, CPyStatic_crash___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_module_path);
    if (((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->_module_path != NULL) {
        CPy_DECREF(((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->_module_path);
    }
    ((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->_module_path = cpy_r_module_path;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/crash.py", "catch_errors", 10, CPyStatic_crash___globals);
        goto CPyL8;
    }
    CPyTagged_INCREF(cpy_r_line);
    if (((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->_line);
    }
    ((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->_line = cpy_r_line;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/crash.py", "catch_errors", 10, CPyStatic_crash___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_crash___catch_errors_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "catch_errors", 10, CPyStatic_crash___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___crash___catch_errors_genObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___crash___catch_errors_genObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypyc___crash___catch_errors_genObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/crash.py", "catch_errors", 10, CPyStatic_crash___globals);
        goto CPyL9;
    }
    if (((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypyc___crash___catch_errors_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/crash.py", "catch_errors", 10, CPyStatic_crash___globals);
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

PyObject *CPyPy_crash___catch_errors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"module_path", "line", 0};
    static CPyArg_Parser parser = {"OO:catch_errors", kwlist, 0};
    PyObject *obj_module_path;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module_path, &obj_line)) {
        return NULL;
    }
    PyObject *arg_module_path;
    if (likely(PyUnicode_Check(obj_module_path)))
        arg_module_path = obj_module_path;
    else {
        CPy_TypeError("str", obj_module_path); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_crash___catch_errors(arg_module_path, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/crash.py", "catch_errors", 10, CPyStatic_crash___globals);
    return NULL;
}

PyObject *CPyDef_crash___crash_report(PyObject *cpy_r_module_path, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_err;
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
    PyObject *cpy_r_tb;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    CPyTagged cpy_r_r36;
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
    PyObject *cpy_r_r52;
    PyObject **cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_tb2;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject **cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject **cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    CPyPtr cpy_r_r79;
    int64_t cpy_r_r80;
    CPyTagged cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject **cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyTagged cpy_r_r97;
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
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject **cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject **cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[1940]; /* 'exc_info' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 19, CPyStatic_crash___globals);
        goto CPyL59;
    }
    cpy_r_r3 = _PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 19, CPyStatic_crash___globals);
        goto CPyL59;
    }
    if (unlikely(!(PyTuple_Check(cpy_r_r3) && PyTuple_GET_SIZE(cpy_r_r3) == 3))) {
        cpy_r_r4 = NULL;
        goto __LL9762;
    }
    cpy_r_r4 = PyTuple_GET_ITEM(cpy_r_r3, 0);
    if (cpy_r_r4 == NULL) goto __LL9762;
    cpy_r_r4 = PyTuple_GET_ITEM(cpy_r_r3, 1);
    if (cpy_r_r4 == NULL) goto __LL9762;
    cpy_r_r4 = PyTuple_GET_ITEM(cpy_r_r3, 2);
    if (cpy_r_r4 == NULL) goto __LL9762;
    cpy_r_r4 = cpy_r_r3;
__LL9762: ;
    if (cpy_r_r4 != NULL) goto __LL9761;
    if (unlikely(!(PyTuple_Check(cpy_r_r3) && PyTuple_GET_SIZE(cpy_r_r3) == 3))) {
        cpy_r_r4 = NULL;
        goto __LL9763;
    }
    if (likely(PyTuple_GET_ITEM(cpy_r_r3, 0) == Py_None))
        cpy_r_r4 = PyTuple_GET_ITEM(cpy_r_r3, 0);
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto __LL9763;
    if (likely(PyTuple_GET_ITEM(cpy_r_r3, 1) == Py_None))
        cpy_r_r4 = PyTuple_GET_ITEM(cpy_r_r3, 1);
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto __LL9763;
    if (likely(PyTuple_GET_ITEM(cpy_r_r3, 2) == Py_None))
        cpy_r_r4 = PyTuple_GET_ITEM(cpy_r_r3, 2);
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto __LL9763;
    cpy_r_r4 = cpy_r_r3;
__LL9763: ;
    if (cpy_r_r4 != NULL) goto __LL9761;
    CPy_TypeErrorTraceback("mypyc/crash.py", "crash_report", 19, CPyStatic_crash___globals, "union[tuple[object, object, object], tuple[None, None, None]]", cpy_r_r3);
    goto CPyL59;
__LL9761: ;
    cpy_r_r5 = cpy_r_r4;
    cpy_r_r6 = CPyStatics[9016]; /* 1 */
    cpy_r_r7 = PyObject_GetItem(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 19, CPyStatic_crash___globals);
        goto CPyL59;
    }
    cpy_r_r8 = cpy_r_r7;
    cpy_r_err = cpy_r_r8;
    cpy_r_r9 = CPyModule_traceback;
    cpy_r_r10 = CPyStatics[2256]; /* 'extract_stack' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 20, CPyStatic_crash___globals);
        goto CPyL60;
    }
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_r11, 0, 0, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 20, CPyStatic_crash___globals);
        goto CPyL60;
    }
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = CPyStatics[9047]; /* -4 */
    cpy_r_r16 = PySlice_New(cpy_r_r13, cpy_r_r15, cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 20, CPyStatic_crash___globals);
        goto CPyL61;
    }
    cpy_r_r17 = PyObject_GetItem(cpy_r_r12, cpy_r_r16);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 20, CPyStatic_crash___globals);
        goto CPyL60;
    }
    if (likely(PyList_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/crash.py", "crash_report", 20, CPyStatic_crash___globals, "list", cpy_r_r17);
        goto CPyL60;
    }
    cpy_r_tb = cpy_r_r18;
    cpy_r_r19 = 0;
    cpy_r_i = 0;
    cpy_r_r20 = 0;
CPyL11: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_tb)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r23;
    if (!cpy_r_r24) goto CPyL62;
    cpy_r_r25 = CPyList_GetItemUnsafe(cpy_r_tb, cpy_r_r20);
    cpy_r_x = cpy_r_r25;
    cpy_r_r26 = CPyStatics[2329]; /* 'name' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_x, cpy_r_r26);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 23, CPyStatic_crash___globals);
        goto CPyL63;
    }
    if (likely(PyUnicode_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/crash.py", "crash_report", 23, CPyStatic_crash___globals, "str", cpy_r_r27);
        goto CPyL63;
    }
    cpy_r_r29 = CPyStatics[7741]; /* 'pytest_runtest_call' */
    cpy_r_r30 = PyUnicode_Compare(cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r31 = cpy_r_r30 == -1;
    if (!cpy_r_r31) goto CPyL17;
    cpy_r_r32 = PyErr_Occurred();
    cpy_r_r33 = cpy_r_r32 != NULL;
    if (!cpy_r_r33) goto CPyL17;
    cpy_r_r34 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 23, CPyStatic_crash___globals);
        goto CPyL63;
    }
CPyL17: ;
    cpy_r_r35 = cpy_r_r30 == 0;
    if (!cpy_r_r35) goto CPyL64;
    cpy_r_r36 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r37 = CPyList_GetSlice(cpy_r_tb, cpy_r_r36, 9223372036854775806LL);
    CPy_DECREF(cpy_r_tb);
    CPyTagged_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 24, CPyStatic_crash___globals);
        goto CPyL60;
    }
    if (likely(PyList_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypyc/crash.py", "crash_report", 24, CPyStatic_crash___globals, "list", cpy_r_r37);
        goto CPyL60;
    }
    cpy_r_tb = cpy_r_r38;
    goto CPyL22;
CPyL21: ;
    cpy_r_r39 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r39;
    cpy_r_i = cpy_r_r39;
    cpy_r_r40 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r40;
    goto CPyL11;
CPyL22: ;
    cpy_r_r41 = CPyModule_sys;
    cpy_r_r42 = CPyStatics[1940]; /* 'exc_info' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 26, CPyStatic_crash___globals);
        goto CPyL65;
    }
    cpy_r_r44 = _PyObject_Vectorcall(cpy_r_r43, 0, 0, 0);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 26, CPyStatic_crash___globals);
        goto CPyL65;
    }
    if (unlikely(!(PyTuple_Check(cpy_r_r44) && PyTuple_GET_SIZE(cpy_r_r44) == 3))) {
        cpy_r_r45 = NULL;
        goto __LL9765;
    }
    cpy_r_r45 = PyTuple_GET_ITEM(cpy_r_r44, 0);
    if (cpy_r_r45 == NULL) goto __LL9765;
    cpy_r_r45 = PyTuple_GET_ITEM(cpy_r_r44, 1);
    if (cpy_r_r45 == NULL) goto __LL9765;
    cpy_r_r45 = PyTuple_GET_ITEM(cpy_r_r44, 2);
    if (cpy_r_r45 == NULL) goto __LL9765;
    cpy_r_r45 = cpy_r_r44;
__LL9765: ;
    if (cpy_r_r45 != NULL) goto __LL9764;
    if (unlikely(!(PyTuple_Check(cpy_r_r44) && PyTuple_GET_SIZE(cpy_r_r44) == 3))) {
        cpy_r_r45 = NULL;
        goto __LL9766;
    }
    if (likely(PyTuple_GET_ITEM(cpy_r_r44, 0) == Py_None))
        cpy_r_r45 = PyTuple_GET_ITEM(cpy_r_r44, 0);
    else {
        cpy_r_r45 = NULL;
    }
    if (cpy_r_r45 == NULL) goto __LL9766;
    if (likely(PyTuple_GET_ITEM(cpy_r_r44, 1) == Py_None))
        cpy_r_r45 = PyTuple_GET_ITEM(cpy_r_r44, 1);
    else {
        cpy_r_r45 = NULL;
    }
    if (cpy_r_r45 == NULL) goto __LL9766;
    if (likely(PyTuple_GET_ITEM(cpy_r_r44, 2) == Py_None))
        cpy_r_r45 = PyTuple_GET_ITEM(cpy_r_r44, 2);
    else {
        cpy_r_r45 = NULL;
    }
    if (cpy_r_r45 == NULL) goto __LL9766;
    cpy_r_r45 = cpy_r_r44;
__LL9766: ;
    if (cpy_r_r45 != NULL) goto __LL9764;
    CPy_TypeErrorTraceback("mypyc/crash.py", "crash_report", 26, CPyStatic_crash___globals, "union[tuple[object, object, object], tuple[None, None, None]]", cpy_r_r44);
    goto CPyL65;
__LL9764: ;
    cpy_r_r46 = cpy_r_r45;
    cpy_r_r47 = CPyStatics[9018]; /* 2 */
    cpy_r_r48 = PyObject_GetItem(cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 26, CPyStatic_crash___globals);
        goto CPyL65;
    }
    cpy_r_r49 = cpy_r_r48;
    cpy_r_r50 = CPyModule_traceback;
    cpy_r_r51 = CPyStatics[2257]; /* 'extract_tb' */
    cpy_r_r52 = CPyObject_GetAttr(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 26, CPyStatic_crash___globals);
        goto CPyL66;
    }
    PyObject *cpy_r_r53[1] = {cpy_r_r49};
    cpy_r_r54 = (PyObject **)&cpy_r_r53;
    cpy_r_r55 = _PyObject_Vectorcall(cpy_r_r52, cpy_r_r54, 1, 0);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 26, CPyStatic_crash___globals);
        goto CPyL66;
    }
    CPy_DECREF(cpy_r_r49);
    cpy_r_r56 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r57 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r58 = CPyStatics[9016]; /* 1 */
    cpy_r_r59 = PySlice_New(cpy_r_r58, cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 26, CPyStatic_crash___globals);
        goto CPyL67;
    }
    cpy_r_r60 = PyObject_GetItem(cpy_r_r55, cpy_r_r59);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 26, CPyStatic_crash___globals);
        goto CPyL65;
    }
    if (likely(PyList_Check(cpy_r_r60)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypyc/crash.py", "crash_report", 26, CPyStatic_crash___globals, "list", cpy_r_r60);
        goto CPyL65;
    }
    cpy_r_tb2 = cpy_r_r61;
    cpy_r_r62 = CPyStatics[2258]; /* 'Traceback (most recent call last):' */
    cpy_r_r63 = CPyModule_builtins;
    cpy_r_r64 = CPyStatics[190]; /* 'print' */
    cpy_r_r65 = CPyObject_GetAttr(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 27, CPyStatic_crash___globals);
        goto CPyL68;
    }
    PyObject *cpy_r_r66[1] = {cpy_r_r62};
    cpy_r_r67 = (PyObject **)&cpy_r_r66;
    cpy_r_r68 = _PyObject_Vectorcall(cpy_r_r65, cpy_r_r67, 1, 0);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 27, CPyStatic_crash___globals);
        goto CPyL68;
    } else
        goto CPyL69;
CPyL34: ;
    cpy_r_r69 = PyNumber_Add(cpy_r_tb, cpy_r_tb2);
    CPy_DECREF(cpy_r_tb);
    CPy_DECREF(cpy_r_tb2);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 28, CPyStatic_crash___globals);
        goto CPyL60;
    }
    if (likely(PyList_Check(cpy_r_r69)))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypyc/crash.py", "crash_report", 28, CPyStatic_crash___globals, "list", cpy_r_r69);
        goto CPyL60;
    }
    cpy_r_r71 = CPyModule_traceback;
    cpy_r_r72 = CPyStatics[2259]; /* 'format_list' */
    cpy_r_r73 = CPyObject_GetAttr(cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 28, CPyStatic_crash___globals);
        goto CPyL70;
    }
    PyObject *cpy_r_r74[1] = {cpy_r_r70};
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = _PyObject_Vectorcall(cpy_r_r73, cpy_r_r75, 1, 0);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 28, CPyStatic_crash___globals);
        goto CPyL70;
    }
    CPy_DECREF(cpy_r_r70);
    if (likely(PyList_Check(cpy_r_r76)))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypyc/crash.py", "crash_report", 28, CPyStatic_crash___globals, "list", cpy_r_r76);
        goto CPyL60;
    }
    cpy_r_r78 = 0;
CPyL40: ;
    cpy_r_r79 = (CPyPtr)&((PyVarObject *)cpy_r_r77)->ob_size;
    cpy_r_r80 = *(int64_t *)cpy_r_r79;
    cpy_r_r81 = cpy_r_r80 << 1;
    cpy_r_r82 = (Py_ssize_t)cpy_r_r78 < (Py_ssize_t)cpy_r_r81;
    if (!cpy_r_r82) goto CPyL71;
    cpy_r_r83 = CPyList_GetItemUnsafe(cpy_r_r77, cpy_r_r78);
    if (likely(PyUnicode_Check(cpy_r_r83)))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypyc/crash.py", "crash_report", 28, CPyStatic_crash___globals, "str", cpy_r_r83);
        goto CPyL72;
    }
    cpy_r_s = cpy_r_r84;
    cpy_r_r85 = CPyStatics[189]; /* '\n' */
    cpy_r_r86 = CPyStatics[272]; /* 'rstrip' */
    PyObject *cpy_r_r87[2] = {cpy_r_s, cpy_r_r85};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = PyObject_VectorcallMethod(cpy_r_r86, cpy_r_r88, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 29, CPyStatic_crash___globals);
        goto CPyL73;
    }
    CPy_DECREF(cpy_r_s);
    if (likely(PyUnicode_Check(cpy_r_r89)))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypyc/crash.py", "crash_report", 29, CPyStatic_crash___globals, "str", cpy_r_r89);
        goto CPyL72;
    }
    cpy_r_r91 = CPyModule_builtins;
    cpy_r_r92 = CPyStatics[190]; /* 'print' */
    cpy_r_r93 = CPyObject_GetAttr(cpy_r_r91, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 29, CPyStatic_crash___globals);
        goto CPyL74;
    }
    PyObject *cpy_r_r94[1] = {cpy_r_r90};
    cpy_r_r95 = (PyObject **)&cpy_r_r94;
    cpy_r_r96 = _PyObject_Vectorcall(cpy_r_r93, cpy_r_r95, 1, 0);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 29, CPyStatic_crash___globals);
        goto CPyL74;
    } else
        goto CPyL75;
CPyL46: ;
    CPy_DECREF(cpy_r_r90);
    cpy_r_r97 = cpy_r_r78 + 2;
    cpy_r_r78 = cpy_r_r97;
    goto CPyL40;
CPyL48: ;
    cpy_r_r98 = CPyStatics[171]; /* ':' */
    cpy_r_r99 = CPyTagged_Str(cpy_r_line);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 30, CPyStatic_crash___globals);
        goto CPyL60;
    }
    cpy_r_r100 = CPyStatics[297]; /* ': ' */
    cpy_r_r101 = PyObject_Type(cpy_r_err);
    cpy_r_r102 = CPyStatics[197]; /* '__name__' */
    cpy_r_r103 = CPyObject_GetAttr(cpy_r_r101, cpy_r_r102);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 30, CPyStatic_crash___globals);
        goto CPyL76;
    }
    if (likely(PyUnicode_Check(cpy_r_r103)))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypyc/crash.py", "crash_report", 30, CPyStatic_crash___globals, "str", cpy_r_r103);
        goto CPyL76;
    }
    cpy_r_r105 = CPyStatics[297]; /* ': ' */
    cpy_r_r106 = PyObject_Str(cpy_r_err);
    CPy_DECREF(cpy_r_err);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 30, CPyStatic_crash___globals);
        goto CPyL77;
    }
    cpy_r_r107 = CPyStr_Build(7, cpy_r_module_path, cpy_r_r98, cpy_r_r99, cpy_r_r100, cpy_r_r104, cpy_r_r105, cpy_r_r106);
    CPy_DECREF(cpy_r_r99);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 30, CPyStatic_crash___globals);
        goto CPyL59;
    }
    cpy_r_r108 = CPyModule_builtins;
    cpy_r_r109 = CPyStatics[190]; /* 'print' */
    cpy_r_r110 = CPyObject_GetAttr(cpy_r_r108, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 30, CPyStatic_crash___globals);
        goto CPyL78;
    }
    PyObject *cpy_r_r111[1] = {cpy_r_r107};
    cpy_r_r112 = (PyObject **)&cpy_r_r111;
    cpy_r_r113 = _PyObject_Vectorcall(cpy_r_r110, cpy_r_r112, 1, 0);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 30, CPyStatic_crash___globals);
        goto CPyL78;
    } else
        goto CPyL79;
CPyL55: ;
    CPy_DECREF(cpy_r_r107);
    cpy_r_r114 = CPyModule_builtins;
    cpy_r_r115 = CPyStatics[5]; /* 'SystemExit' */
    cpy_r_r116 = CPyObject_GetAttr(cpy_r_r114, cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 31, CPyStatic_crash___globals);
        goto CPyL59;
    }
    cpy_r_r117 = CPyStatics[9018]; /* 2 */
    PyObject *cpy_r_r118[1] = {cpy_r_r117};
    cpy_r_r119 = (PyObject **)&cpy_r_r118;
    cpy_r_r120 = _PyObject_Vectorcall(cpy_r_r116, cpy_r_r119, 1, 0);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 31, CPyStatic_crash___globals);
        goto CPyL59;
    }
    CPy_Raise(cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/crash.py", "crash_report", 31, CPyStatic_crash___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL59: ;
    cpy_r_r121 = NULL;
    return cpy_r_r121;
CPyL60: ;
    CPy_DecRef(cpy_r_err);
    goto CPyL59;
CPyL61: ;
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_r12);
    goto CPyL59;
CPyL62: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL22;
CPyL63: ;
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_tb);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL59;
CPyL64: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL21;
CPyL65: ;
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_tb);
    goto CPyL59;
CPyL66: ;
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_tb);
    CPy_DecRef(cpy_r_r49);
    goto CPyL59;
CPyL67: ;
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_tb);
    CPy_DecRef(cpy_r_r55);
    goto CPyL59;
CPyL68: ;
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_tb);
    CPy_DecRef(cpy_r_tb2);
    goto CPyL59;
CPyL69: ;
    CPy_DECREF(cpy_r_r68);
    goto CPyL34;
CPyL70: ;
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_r70);
    goto CPyL59;
CPyL71: ;
    CPy_DECREF(cpy_r_r77);
    goto CPyL48;
CPyL72: ;
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_r77);
    goto CPyL59;
CPyL73: ;
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_s);
    goto CPyL59;
CPyL74: ;
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r90);
    goto CPyL59;
CPyL75: ;
    CPy_DECREF(cpy_r_r96);
    goto CPyL46;
CPyL76: ;
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_r99);
    goto CPyL59;
CPyL77: ;
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r104);
    goto CPyL59;
CPyL78: ;
    CPy_DecRef(cpy_r_r107);
    goto CPyL59;
CPyL79: ;
    CPy_DECREF(cpy_r_r113);
    goto CPyL55;
}

PyObject *CPyPy_crash___crash_report(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"module_path", "line", 0};
    static CPyArg_Parser parser = {"OO:crash_report", kwlist, 0};
    PyObject *obj_module_path;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module_path, &obj_line)) {
        return NULL;
    }
    PyObject *arg_module_path;
    if (likely(PyUnicode_Check(obj_module_path)))
        arg_module_path = obj_module_path;
    else {
        CPy_TypeError("str", obj_module_path); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_crash___crash_report(arg_module_path, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/crash.py", "crash_report", 17, CPyStatic_crash___globals);
    return NULL;
}

char CPyDef_crash_____top_level__(void) {
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
    PyObject **cpy_r_r10;
    void *cpy_r_r12;
    void *cpy_r_r14;
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
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "<module>", -1, CPyStatic_crash___globals);
        goto CPyL12;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_crash___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "<module>", 1, CPyStatic_crash___globals);
        goto CPyL12;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_sys;
    cpy_r_r10 = (PyObject **)&CPyModule_traceback;
    PyObject **cpy_r_r11[2] = {cpy_r_r9, cpy_r_r10};
    cpy_r_r12 = (void *)&cpy_r_r11;
    int64_t cpy_r_r13[2] = {3, 4};
    cpy_r_r14 = (void *)&cpy_r_r13;
    cpy_r_r15 = CPyStatics[10002]; /* (('sys', 'sys', 'sys'),
                                      ('traceback', 'traceback', 'traceback')) */
    cpy_r_r16 = CPyStatic_crash___globals;
    cpy_r_r17 = CPyStatics[7742]; /* 'mypyc/crash.py' */
    cpy_r_r18 = CPyStatics[17]; /* '<module>' */
    cpy_r_r19 = CPyImport_ImportMany(cpy_r_r15, cpy_r_r12, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r14);
    if (!cpy_r_r19) goto CPyL12;
    cpy_r_r20 = CPyStatics[9084]; /* ('contextmanager',) */
    cpy_r_r21 = CPyStatics[78]; /* 'contextlib' */
    cpy_r_r22 = CPyStatic_crash___globals;
    cpy_r_r23 = CPyImport_ImportFromMany(cpy_r_r21, cpy_r_r20, cpy_r_r20, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "<module>", 5, CPyStatic_crash___globals);
        goto CPyL12;
    }
    CPyModule_contextlib = cpy_r_r23;
    CPy_INCREF(CPyModule_contextlib);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r24 = CPyStatics[10003]; /* ('Iterator', 'NoReturn') */
    cpy_r_r25 = CPyStatics[21]; /* 'typing' */
    cpy_r_r26 = CPyStatic_crash___globals;
    cpy_r_r27 = CPyImport_ImportFromMany(cpy_r_r25, cpy_r_r24, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "<module>", 6, CPyStatic_crash___globals);
        goto CPyL12;
    }
    CPyModule_typing = cpy_r_r27;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r28 = CPyStatic_crash___globals;
    cpy_r_r29 = CPyStatics[7743]; /* 'catch_errors' */
    cpy_r_r30 = CPyDict_GetItem(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "<module>", 9, CPyStatic_crash___globals);
        goto CPyL12;
    }
    cpy_r_r31 = CPyStatic_crash___globals;
    cpy_r_r32 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "<module>", 9, CPyStatic_crash___globals);
        goto CPyL13;
    }
    PyObject *cpy_r_r34[1] = {cpy_r_r30};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = _PyObject_Vectorcall(cpy_r_r33, cpy_r_r35, 1, 0);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/crash.py", "<module>", 9, CPyStatic_crash___globals);
        goto CPyL13;
    }
    CPy_DECREF(cpy_r_r30);
    cpy_r_r37 = CPyStatic_crash___globals;
    cpy_r_r38 = CPyStatics[7743]; /* 'catch_errors' */
    cpy_r_r39 = CPyDict_SetItem(cpy_r_r37, cpy_r_r38, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/crash.py", "<module>", 9, CPyStatic_crash___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r41 = 2;
    return cpy_r_r41;
CPyL13: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL12;
}
