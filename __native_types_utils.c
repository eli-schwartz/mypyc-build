#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *types_utils___flatten_types_env_setup(PyTypeObject *type);
PyObject *CPyDef_types_utils___flatten_types_env(void);

static PyObject *
types_utils___flatten_types_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_types_utils___flatten_types_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return types_utils___flatten_types_env_setup(type);
}

static int
types_utils___flatten_types_env_traverse(mypy___types_utils___flatten_types_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_types);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->___mypyc_temp__1);
    Py_VISIT(self->_t);
    Py_VISIT(self->_tp);
    Py_VISIT(self->___mypyc_temp__2);
    Py_VISIT(self->___mypyc_temp__3.f0);
    Py_VISIT(self->___mypyc_temp__3.f1);
    Py_VISIT(self->___mypyc_temp__3.f2);
    return 0;
}

static int
types_utils___flatten_types_env_clear(mypy___types_utils___flatten_types_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_types);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->___mypyc_temp__1);
    Py_CLEAR(self->_t);
    Py_CLEAR(self->_tp);
    Py_CLEAR(self->___mypyc_temp__2);
    Py_CLEAR(self->___mypyc_temp__3.f0);
    Py_CLEAR(self->___mypyc_temp__3.f1);
    Py_CLEAR(self->___mypyc_temp__3.f2);
    return 0;
}

static void
types_utils___flatten_types_env_dealloc(mypy___types_utils___flatten_types_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, types_utils___flatten_types_env_dealloc)
    types_utils___flatten_types_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem types_utils___flatten_types_env_vtable[1];
static bool
CPyDef_types_utils___flatten_types_env_trait_vtable_setup(void)
{
    CPyVTableItem types_utils___flatten_types_env_vtable_scratch[] = {
        NULL
    };
    memcpy(types_utils___flatten_types_env_vtable, types_utils___flatten_types_env_vtable_scratch, sizeof(types_utils___flatten_types_env_vtable));
    return 1;
}

static PyMethodDef types_utils___flatten_types_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_types_utils___flatten_types_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "flatten_types_env",
    .tp_new = types_utils___flatten_types_env_new,
    .tp_dealloc = (destructor)types_utils___flatten_types_env_dealloc,
    .tp_traverse = (traverseproc)types_utils___flatten_types_env_traverse,
    .tp_clear = (inquiry)types_utils___flatten_types_env_clear,
    .tp_methods = types_utils___flatten_types_env_methods,
    .tp_basicsize = sizeof(mypy___types_utils___flatten_types_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_types_utils___flatten_types_env_template = &CPyType_types_utils___flatten_types_env_template_;

static PyObject *
types_utils___flatten_types_env_setup(PyTypeObject *type)
{
    mypy___types_utils___flatten_types_envObject *self;
    self = (mypy___types_utils___flatten_types_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = types_utils___flatten_types_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__3 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_types_utils___flatten_types_env(void)
{
    PyObject *self = types_utils___flatten_types_env_setup(CPyType_types_utils___flatten_types_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *types_utils___flatten_types_gen_setup(PyTypeObject *type);
PyObject *CPyDef_types_utils___flatten_types_gen(void);

static PyObject *
types_utils___flatten_types_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_types_utils___flatten_types_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return types_utils___flatten_types_gen_setup(type);
}

static int
types_utils___flatten_types_gen_traverse(mypy___types_utils___flatten_types_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
types_utils___flatten_types_gen_clear(mypy___types_utils___flatten_types_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
types_utils___flatten_types_gen_dealloc(mypy___types_utils___flatten_types_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, types_utils___flatten_types_gen_dealloc)
    types_utils___flatten_types_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem types_utils___flatten_types_gen_vtable[6];
static bool
CPyDef_types_utils___flatten_types_gen_trait_vtable_setup(void)
{
    CPyVTableItem types_utils___flatten_types_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_types_utils___flatten_types_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_types_utils___flatten_types_gen_____next__,
        (CPyVTableItem)CPyDef_types_utils___flatten_types_gen___send,
        (CPyVTableItem)CPyDef_types_utils___flatten_types_gen_____iter__,
        (CPyVTableItem)CPyDef_types_utils___flatten_types_gen___throw,
        (CPyVTableItem)CPyDef_types_utils___flatten_types_gen___close,
    };
    memcpy(types_utils___flatten_types_gen_vtable, types_utils___flatten_types_gen_vtable_scratch, sizeof(types_utils___flatten_types_gen_vtable));
    return 1;
}

static PyMethodDef types_utils___flatten_types_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_types_utils___flatten_types_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_types_utils___flatten_types_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_types_utils___flatten_types_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_types_utils___flatten_types_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_types_utils___flatten_types_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_types_utils___flatten_types_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_types_utils___flatten_types_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "flatten_types_gen",
    .tp_new = types_utils___flatten_types_gen_new,
    .tp_dealloc = (destructor)types_utils___flatten_types_gen_dealloc,
    .tp_traverse = (traverseproc)types_utils___flatten_types_gen_traverse,
    .tp_clear = (inquiry)types_utils___flatten_types_gen_clear,
    .tp_methods = types_utils___flatten_types_gen_methods,
    .tp_iter = CPyDef_types_utils___flatten_types_gen_____iter__,
    .tp_iternext = CPyDef_types_utils___flatten_types_gen_____next__,
    .tp_basicsize = sizeof(mypy___types_utils___flatten_types_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_types_utils___flatten_types_gen_template = &CPyType_types_utils___flatten_types_gen_template_;

static PyObject *
types_utils___flatten_types_gen_setup(PyTypeObject *type)
{
    mypy___types_utils___flatten_types_genObject *self;
    self = (mypy___types_utils___flatten_types_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = types_utils___flatten_types_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_types_utils___flatten_types_gen(void)
{
    PyObject *self = types_utils___flatten_types_gen_setup(CPyType_types_utils___flatten_types_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef types_utilsmodule_methods[] = {
    {"flatten_types", (PyCFunction)CPyPy_types_utils___flatten_types, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"strip_type", (PyCFunction)CPyPy_types_utils___strip_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_invalid_recursive_alias", (PyCFunction)CPyPy_types_utils___is_invalid_recursive_alias, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_bad_type_type_item", (PyCFunction)CPyPy_types_utils___is_bad_type_type_item, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_union_with_any", (PyCFunction)CPyPy_types_utils___is_union_with_any, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_generic_instance", (PyCFunction)CPyPy_types_utils___is_generic_instance, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_optional", (PyCFunction)CPyPy_types_utils___is_optional, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"remove_optional", (PyCFunction)CPyPy_types_utils___remove_optional, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_self_type_like", (PyCFunction)CPyPy_types_utils___is_self_type_like, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"store_argument_type", (PyCFunction)CPyPy_types_utils___store_argument_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef types_utilsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.types_utils",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    types_utilsmodule_methods
};

PyObject *CPyInit_mypy___types_utils(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___types_utils_internal) {
        Py_INCREF(CPyModule_mypy___types_utils_internal);
        return CPyModule_mypy___types_utils_internal;
    }
    CPyModule_mypy___types_utils_internal = PyModule_Create(&types_utilsmodule);
    if (unlikely(CPyModule_mypy___types_utils_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___types_utils_internal, "__name__");
    CPyStatic_types_utils___globals = PyModule_GetDict(CPyModule_mypy___types_utils_internal);
    if (unlikely(CPyStatic_types_utils___globals == NULL))
        goto fail;
    CPyType_types_utils___flatten_types_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_types_utils___flatten_types_env_template, NULL, modname);
    if (unlikely(!CPyType_types_utils___flatten_types_env))
        goto fail;
    CPyType_types_utils___flatten_types_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_types_utils___flatten_types_gen_template, NULL, modname);
    if (unlikely(!CPyType_types_utils___flatten_types_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_types_utils_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___types_utils_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___types_utils_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_types_utils___flatten_types_env);
    Py_CLEAR(CPyType_types_utils___flatten_types_gen);
    return NULL;
}

PyObject *CPyDef_types_utils___flatten_types_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
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
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    tuple_T3OOO cpy_r_r38;
    char cpy_r_r39;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    tuple_T3OOO cpy_r_r44;
    char cpy_r_r45;
    tuple_T3OOO cpy_r_r46;
    tuple_T3OOO cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    int64_t cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    int64_t cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    int64_t cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((mypy___types_utils___flatten_types_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/types_utils.py", "flatten_types", "flatten_types_gen", "__mypyc_env__", 35, CPyStatic_types_utils___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r2);
CPyL1: ;
    cpy_r_r3 = ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_next_label__;
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/types_utils.py", "flatten_types", "flatten_types_env", "__mypyc_next_label__", 35, CPyStatic_types_utils___globals);
        goto CPyL83;
    }
    CPyTagged_INCREF(cpy_r_r3);
    goto CPyL67;
CPyL2: ;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_type != cpy_r_r4;
    if (cpy_r_r5) {
        goto CPyL84;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 35, CPyStatic_types_utils___globals);
        goto CPyL81;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r6 = ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->_types;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/types_utils.py", "flatten_types", "flatten_types_env", "types", 36, CPyStatic_types_utils___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r6);
CPyL6: ;
    cpy_r_r7 = PyObject_GetIter(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 36, CPyStatic_types_utils___globals);
        goto CPyL85;
    }
    if (((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__0);
    }
    ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__0 = cpy_r_r6;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", -1, CPyStatic_types_utils___globals);
        goto CPyL86;
    }
    if (((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__1 != NULL) {
        CPy_DECREF(((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__1);
    }
    ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__1 = cpy_r_r7;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", -1, CPyStatic_types_utils___globals);
        goto CPyL83;
    }
CPyL9: ;
    cpy_r_r10 = ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__1;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/types_utils.py", "flatten_types", "flatten_types_env", "__mypyc_temp__1", 36, CPyStatic_types_utils___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r10);
CPyL10: ;
    cpy_r_r11 = PyIter_Next(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (cpy_r_r11 == NULL) goto CPyL87;
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "flatten_types", 36, CPyStatic_types_utils___globals, "mypy.types.Type", cpy_r_r11);
        goto CPyL83;
    }
    if (((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->_t != NULL) {
        CPy_DECREF(((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->_t);
    }
    ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->_t = cpy_r_r12;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 36, CPyStatic_types_utils___globals);
        goto CPyL83;
    }
    cpy_r_r14 = ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->_t;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/types_utils.py", "flatten_types", "flatten_types_env", "t", 37, CPyStatic_types_utils___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r14);
CPyL14: ;
    cpy_r_r15 = CPyDef_types___get_proper_type(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 37, CPyStatic_types_utils___globals);
        goto CPyL83;
    }
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "flatten_types", 37, CPyStatic_types_utils___globals, "mypy.types.ProperType", cpy_r_r15);
        goto CPyL83;
    }
    if (((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->_tp != NULL) {
        CPy_DECREF(((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->_tp);
    }
    ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->_tp = cpy_r_r16;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 37, CPyStatic_types_utils___globals);
        goto CPyL83;
    }
    cpy_r_r18 = ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->_tp;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/types_utils.py", "flatten_types", "flatten_types_env", "tp", 38, CPyStatic_types_utils___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r18);
CPyL18: ;
    cpy_r_r19 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_r18)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    CPy_DECREF(cpy_r_r18);
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    if (!cpy_r_r22) goto CPyL88;
    cpy_r_r23 = ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->_tp;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/types_utils.py", "flatten_types", "flatten_types_env", "tp", 39, CPyStatic_types_utils___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r23);
CPyL20: ;
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_types___UnionType))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "flatten_types", 39, CPyStatic_types_utils___globals, "mypy.types.UnionType", cpy_r_r23);
        goto CPyL89;
    }
    cpy_r_r25 = ((mypy___types___UnionTypeObject *)cpy_r_r24)->_items;
    CPy_INCREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r26 = CPyDef_types_utils___flatten_types(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 39, CPyStatic_types_utils___globals);
        goto CPyL83;
    }
    cpy_r_r27 = PyObject_GetIter(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 39, CPyStatic_types_utils___globals);
        goto CPyL83;
    }
    if (((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__2);
    }
    ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__2 = cpy_r_r27;
    cpy_r_r28 = 1;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", -1, CPyStatic_types_utils___globals);
        goto CPyL83;
    }
    cpy_r_r29 = ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypy/types_utils.py", "flatten_types", "flatten_types_env", "__mypyc_temp__2", -1, CPyStatic_types_utils___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r29);
CPyL25: ;
    cpy_r_r30 = CPyIter_Next(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (cpy_r_r30 != NULL) goto CPyL28;
    cpy_r_r31 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 39, CPyStatic_types_utils___globals);
        goto CPyL83;
    }
    cpy_r_r32 = cpy_r_r31;
    CPy_DECREF(cpy_r_r32);
    goto CPyL9;
CPyL28: ;
    cpy_r_r33 = cpy_r_r30;
CPyL29: ;
    if (((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_next_label__ = 2;
    cpy_r_r34 = 1;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 39, CPyStatic_types_utils___globals);
        goto CPyL90;
    } else
        goto CPyL91;
CPyL30: ;
    return cpy_r_r33;
CPyL31: ;
    cpy_r_r35 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r36 = cpy_r_type != cpy_r_r35;
    if (!cpy_r_r36) goto CPyL34;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 39, CPyStatic_types_utils___globals);
        goto CPyL35;
    } else
        goto CPyL92;
CPyL33: ;
    CPy_Unreachable();
CPyL34: ;
    CPy_INCREF(cpy_r_arg);
    cpy_r_r37 = cpy_r_arg;
    goto CPyL52;
CPyL35: ;
    cpy_r_r38 = CPy_CatchError();
    if (((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__3.f0 != NULL) {
        CPy_DECREF(((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__3.f0);
        CPy_DECREF(((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__3.f1);
        CPy_DECREF(((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__3.f2);
    }
    ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__3 = cpy_r_r38;
    cpy_r_r39 = 1;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", -1, CPyStatic_types_utils___globals);
        goto CPyL93;
    }
    cpy_r_r40 = (PyObject **)&cpy_r_r1;
    cpy_r_r41 = ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/types_utils.py", "flatten_types", "flatten_types_env", "__mypyc_temp__2", -1, CPyStatic_types_utils___globals);
        goto CPyL93;
    }
    CPy_INCREF(cpy_r_r41);
CPyL37: ;
    cpy_r_r42 = CPy_YieldFromErrorHandle(cpy_r_r41, cpy_r_r40);
    CPy_DecRef(cpy_r_r41);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 39, CPyStatic_types_utils___globals);
        goto CPyL93;
    }
    if (cpy_r_r42) goto CPyL44;
    if (cpy_r_r1 != NULL) goto CPyL42;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"\" referenced before assignment");
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", -1, CPyStatic_types_utils___globals);
        goto CPyL49;
    } else
        goto CPyL94;
CPyL41: ;
    CPy_Unreachable();
CPyL42: ;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r33 = cpy_r_r1;
    cpy_r_r44 = ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r44.f0 == NULL)) {
        CPy_AttributeError("mypy/types_utils.py", "flatten_types", "flatten_types_env", "__mypyc_temp__3", -1, CPyStatic_types_utils___globals);
        goto CPyL95;
    }
    CPy_INCREF(cpy_r_r44.f0);
    CPy_INCREF(cpy_r_r44.f1);
    CPy_INCREF(cpy_r_r44.f2);
CPyL43: ;
    CPy_RestoreExcInfo(cpy_r_r44);
    CPy_DecRef(cpy_r_r44.f0);
    CPy_DecRef(cpy_r_r44.f1);
    CPy_DecRef(cpy_r_r44.f2);
    goto CPyL29;
CPyL44: ;
    if (cpy_r_r1 != NULL) goto CPyL47;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"\" referenced before assignment");
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", -1, CPyStatic_types_utils___globals);
        goto CPyL49;
    } else
        goto CPyL96;
CPyL46: ;
    CPy_Unreachable();
CPyL47: ;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r32 = cpy_r_r1;
    CPy_DecRef(cpy_r_r32);
    cpy_r_r46 = ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r46.f0 == NULL)) {
        CPy_AttributeError("mypy/types_utils.py", "flatten_types", "flatten_types_env", "__mypyc_temp__3", -1, CPyStatic_types_utils___globals);
        goto CPyL93;
    }
    CPy_INCREF(cpy_r_r46.f0);
    CPy_INCREF(cpy_r_r46.f1);
    CPy_INCREF(cpy_r_r46.f2);
CPyL48: ;
    CPy_RestoreExcInfo(cpy_r_r46);
    CPy_DecRef(cpy_r_r46.f0);
    CPy_DecRef(cpy_r_r46.f1);
    CPy_DecRef(cpy_r_r46.f2);
    goto CPyL9;
CPyL49: ;
    cpy_r_r47 = ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r47.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__3' of 'flatten_types_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r47.f0);
        CPy_INCREF(cpy_r_r47.f1);
        CPy_INCREF(cpy_r_r47.f2);
    }
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r47.f0 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", -1, CPyStatic_types_utils___globals);
        goto CPyL81;
    }
CPyL50: ;
    CPy_RestoreExcInfo(cpy_r_r47);
    CPy_DecRef(cpy_r_r47.f0);
    CPy_DecRef(cpy_r_r47.f1);
    CPy_DecRef(cpy_r_r47.f2);
    cpy_r_r48 = CPy_KeepPropagating();
    if (!cpy_r_r48) goto CPyL81;
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r49 = ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypy/types_utils.py", "flatten_types", "flatten_types_env", "__mypyc_temp__2", -1, CPyStatic_types_utils___globals);
        goto CPyL97;
    }
    CPy_INCREF(cpy_r_r49);
CPyL53: ;
    cpy_r_r50 = CPyIter_Send(cpy_r_r49, cpy_r_r37);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r37);
    if (cpy_r_r50 == NULL) goto CPyL55;
    cpy_r_r33 = cpy_r_r50;
    goto CPyL29;
CPyL55: ;
    cpy_r_r51 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 39, CPyStatic_types_utils___globals);
        goto CPyL83;
    }
    cpy_r_r32 = cpy_r_r51;
    CPy_DECREF(cpy_r_r32);
    goto CPyL9;
CPyL57: ;
    cpy_r_r52 = ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->_t;
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AttributeError("mypy/types_utils.py", "flatten_types", "flatten_types_env", "t", 41, CPyStatic_types_utils___globals);
        goto CPyL98;
    }
    CPy_INCREF(cpy_r_r52);
CPyL58: ;
    if (((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_next_label__ = 4;
    cpy_r_r53 = 1;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 41, CPyStatic_types_utils___globals);
        goto CPyL99;
    }
    return cpy_r_r52;
CPyL60: ;
    cpy_r_r54 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r55 = cpy_r_type != cpy_r_r54;
    if (cpy_r_r55) {
        goto CPyL100;
    } else
        goto CPyL9;
CPyL61: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 41, CPyStatic_types_utils___globals);
        goto CPyL81;
    }
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r56 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 36, CPyStatic_types_utils___globals);
        goto CPyL98;
    }
    cpy_r_r57 = Py_None;
    if (((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___types_utils___flatten_types_envObject *)cpy_r_r2)->___mypyc_next_label__ = -2;
    cpy_r_r58 = 1;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 35, CPyStatic_types_utils___globals);
        goto CPyL81;
    }
    CPyGen_SetStopIterationValue(cpy_r_r57);
    if (!0) goto CPyL81;
    CPy_Unreachable();
CPyL67: ;
    cpy_r_r59 = cpy_r_r3 & 1;
    cpy_r_r60 = cpy_r_r59 == 0;
    if (!cpy_r_r60) goto CPyL69;
    cpy_r_r61 = cpy_r_r3 == 0;
    cpy_r_r62 = cpy_r_r61;
    goto CPyL70;
CPyL69: ;
    cpy_r_r63 = CPyTagged_IsEq_(cpy_r_r3, 0);
    cpy_r_r62 = cpy_r_r63;
CPyL70: ;
    if (cpy_r_r62) goto CPyL101;
    cpy_r_r64 = cpy_r_r3 & 1;
    cpy_r_r65 = cpy_r_r64 == 0;
    if (!cpy_r_r65) goto CPyL73;
    cpy_r_r66 = cpy_r_r3 == 2;
    cpy_r_r67 = cpy_r_r66;
    goto CPyL74;
CPyL73: ;
    cpy_r_r68 = CPyTagged_IsEq_(cpy_r_r3, 2);
    cpy_r_r67 = cpy_r_r68;
CPyL74: ;
    if (cpy_r_r67) goto CPyL102;
    cpy_r_r69 = cpy_r_r3 & 1;
    cpy_r_r70 = cpy_r_r69 == 0;
    if (!cpy_r_r70) goto CPyL77;
    cpy_r_r71 = cpy_r_r3 == 4;
    CPyTagged_DECREF(cpy_r_r3);
    cpy_r_r72 = cpy_r_r71;
    goto CPyL78;
CPyL77: ;
    cpy_r_r73 = CPyTagged_IsEq_(cpy_r_r3, 4);
    CPyTagged_DECREF(cpy_r_r3);
    cpy_r_r72 = cpy_r_r73;
CPyL78: ;
    if (cpy_r_r72) {
        goto CPyL60;
    } else
        goto CPyL103;
CPyL79: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r74 = 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 35, CPyStatic_types_utils___globals);
        goto CPyL81;
    }
    CPy_Unreachable();
CPyL81: ;
    cpy_r_r75 = NULL;
    return cpy_r_r75;
CPyL82: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL81;
CPyL83: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL81;
CPyL84: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL3;
CPyL85: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    goto CPyL81;
CPyL86: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r7);
    goto CPyL81;
CPyL87: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL63;
CPyL88: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL57;
CPyL89: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r23);
    goto CPyL81;
CPyL90: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL35;
CPyL91: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL30;
CPyL92: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL33;
CPyL93: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL49;
CPyL94: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL41;
CPyL95: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r33);
    goto CPyL49;
CPyL96: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL46;
CPyL97: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r37);
    goto CPyL81;
CPyL98: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL81;
CPyL99: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL81;
CPyL100: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL61;
CPyL101: ;
    CPyTagged_DECREF(cpy_r_r3);
    goto CPyL2;
CPyL102: ;
    CPyTagged_DECREF(cpy_r_r3);
    goto CPyL31;
CPyL103: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL79;
}

PyObject *CPyPy_types_utils___flatten_types_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_types_utils___flatten_types_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 35, CPyStatic_types_utils___globals);
    return NULL;
}

PyObject *CPyDef_types_utils___flatten_types_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_types_utils___flatten_types_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_types_utils___flatten_types_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_types_utils___flatten_types_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.types_utils.flatten_types_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_types_utils___flatten_types_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/types_utils.py", "__next__", -1, CPyStatic_types_utils___globals);
    return NULL;
}

PyObject *CPyDef_types_utils___flatten_types_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_types_utils___flatten_types_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_types_utils___flatten_types_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_types_utils___flatten_types_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.types_utils.flatten_types_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_types_utils___flatten_types_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/types_utils.py", "send", -1, CPyStatic_types_utils___globals);
    return NULL;
}

PyObject *CPyDef_types_utils___flatten_types_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_types_utils___flatten_types_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_types_utils___flatten_types_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.types_utils.flatten_types_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_types_utils___flatten_types_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/types_utils.py", "__iter__", -1, CPyStatic_types_utils___globals);
    return NULL;
}

PyObject *CPyDef_types_utils___flatten_types_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_types_utils___flatten_types_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_types_utils___flatten_types_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_types_utils___flatten_types_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.types_utils.flatten_types_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_types_utils___flatten_types_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/types_utils.py", "throw", -1, CPyStatic_types_utils___globals);
    return NULL;
}

PyObject *CPyDef_types_utils___flatten_types_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_types_utils___flatten_types_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp8062 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp8062);
    PyObject *__tmp8063 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp8063);
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

PyObject *CPyPy_types_utils___flatten_types_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_types_utils___flatten_types_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.types_utils.flatten_types_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_types_utils___flatten_types_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/types_utils.py", "close", -1, CPyStatic_types_utils___globals);
    return NULL;
}

PyObject *CPyDef_types_utils___flatten_types(PyObject *cpy_r_types) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_types_utils___flatten_types_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 35, CPyStatic_types_utils___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_types);
    if (((mypy___types_utils___flatten_types_envObject *)cpy_r_r0)->_types != NULL) {
        CPy_DECREF(((mypy___types_utils___flatten_types_envObject *)cpy_r_r0)->_types);
    }
    ((mypy___types_utils___flatten_types_envObject *)cpy_r_r0)->_types = cpy_r_types;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 35, CPyStatic_types_utils___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_types_utils___flatten_types_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 35, CPyStatic_types_utils___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___types_utils___flatten_types_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___types_utils___flatten_types_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___types_utils___flatten_types_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 35, CPyStatic_types_utils___globals);
        goto CPyL8;
    }
    if (((mypy___types_utils___flatten_types_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___types_utils___flatten_types_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___types_utils___flatten_types_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 35, CPyStatic_types_utils___globals);
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

PyObject *CPyPy_types_utils___flatten_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:flatten_types", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_types = obj_types;
    PyObject *retval = CPyDef_types_utils___flatten_types(arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/types_utils.py", "flatten_types", 35, CPyStatic_types_utils___globals);
    return NULL;
}

PyObject *CPyDef_types_utils___strip_type(PyObject *cpy_r_typ) {
    PyObject *cpy_r_orig_typ;
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
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_r16;
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
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    int64_t cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPy_INCREF(cpy_r_typ);
    cpy_r_orig_typ = cpy_r_typ;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "strip_type", 47, CPyStatic_types_utils___globals);
        goto CPyL21;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "strip_type", 47, CPyStatic_types_utils___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL21;
    }
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL22;
    } else
        goto CPyL6;
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___CallableType))
        cpy_r_r6 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "strip_type", 49, CPyStatic_types_utils___globals, "mypy.types.CallableType", cpy_r_typ);
        goto CPyL20;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = NULL;
    cpy_r_r9 = NULL;
    cpy_r_r10 = NULL;
    cpy_r_r11 = NULL;
    cpy_r_r12 = Py_None;
    cpy_r_r13 = NULL;
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPY_INT_TAG;
    cpy_r_r16 = CPY_INT_TAG;
    cpy_r_r17 = NULL;
    cpy_r_r18 = NULL;
    cpy_r_r19 = NULL;
    cpy_r_r20 = NULL;
    cpy_r_r21 = NULL;
    cpy_r_r22 = NULL;
    cpy_r_r23 = NULL;
    cpy_r_r24 = NULL;
    cpy_r_r25 = NULL;
    cpy_r_r26 = CPyDef_types___CallableType___copy_modified(cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "strip_type", 49, CPyStatic_types_utils___globals);
        goto CPyL20;
    }
    return cpy_r_r26;
CPyL6: ;
    cpy_r_r27 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r28 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r29 = *(PyObject * *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 == cpy_r_r27;
    if (cpy_r_r30) {
        goto CPyL23;
    } else
        goto CPyL24;
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded))
        cpy_r_r31 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "strip_type", 51, CPyStatic_types_utils___globals, "mypy.types.Overloaded", cpy_r_typ);
        goto CPyL20;
    }
    cpy_r_r32 = CPY_GET_ATTR(cpy_r_r31, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "strip_type", 51, CPyStatic_types_utils___globals);
        goto CPyL20;
    }
CPyL9: ;
    cpy_r_r33 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r34 = *(int64_t *)cpy_r_r33;
    cpy_r_r35 = PyList_New(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "strip_type", 51, CPyStatic_types_utils___globals);
        goto CPyL25;
    }
    cpy_r_r36 = 0;
CPyL11: ;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = (Py_ssize_t)cpy_r_r36 < (Py_ssize_t)cpy_r_r39;
    if (!cpy_r_r40) goto CPyL26;
    cpy_r_r41 = CPyList_GetItemUnsafe(cpy_r_r32, cpy_r_r36);
    if (likely(Py_TYPE(cpy_r_r41) == CPyType_types___CallableType))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "strip_type", 51, CPyStatic_types_utils___globals, "mypy.types.CallableType", cpy_r_r41);
        goto CPyL27;
    }
    cpy_r_item = cpy_r_r42;
    cpy_r_r43 = CPyDef_types_utils___strip_type(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "strip_type", 51, CPyStatic_types_utils___globals);
        goto CPyL27;
    }
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_types___CallableType))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "strip_type", 51, CPyStatic_types_utils___globals, "mypy.types.CallableType", cpy_r_r43);
        goto CPyL27;
    }
    cpy_r_r45 = CPyList_SetItemUnsafe(cpy_r_r35, cpy_r_r36, cpy_r_r44);
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/types_utils.py", "strip_type", 51, CPyStatic_types_utils___globals);
        goto CPyL27;
    }
    cpy_r_r46 = cpy_r_r36 + 2;
    cpy_r_r36 = cpy_r_r46;
    goto CPyL11;
CPyL17: ;
    cpy_r_r47 = CPyDef_types___Overloaded(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "strip_type", 51, CPyStatic_types_utils___globals);
        goto CPyL20;
    }
    return cpy_r_r47;
CPyL19: ;
    return cpy_r_orig_typ;
CPyL20: ;
    cpy_r_r48 = NULL;
    return cpy_r_r48;
CPyL21: ;
    CPy_DecRef(cpy_r_orig_typ);
    goto CPyL20;
CPyL22: ;
    CPy_DECREF(cpy_r_orig_typ);
    goto CPyL3;
CPyL23: ;
    CPy_DECREF(cpy_r_orig_typ);
    goto CPyL7;
CPyL24: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL19;
CPyL25: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL20;
CPyL26: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL17;
CPyL27: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r35);
    goto CPyL20;
}

PyObject *CPyPy_types_utils___strip_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:strip_type", kwlist, 0};
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
    PyObject *retval = CPyDef_types_utils___strip_type(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/types_utils.py", "strip_type", 44, CPyStatic_types_utils___globals);
    return NULL;
}

char CPyDef_types_utils___is_invalid_recursive_alias(PyObject *cpy_r_seen_nodes, PyObject *cpy_r_target) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
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
    CPyTagged cpy_r_r46;
    CPyPtr cpy_r_r47;
    int64_t cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_item;
    char cpy_r_r53;
    CPyTagged cpy_r_r54;
    char cpy_r_r55;
    cpy_r_r0 = (PyObject *)CPyType_types___TypeAliasType;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL25;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_types___TypeAliasType))
        cpy_r_r4 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 62, CPyStatic_types_utils___globals, "mypy.types.TypeAliasType", cpy_r_target);
        goto CPyL39;
    }
    cpy_r_r5 = ((mypy___types___TypeAliasTypeObject *)cpy_r_r4)->_alias;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = PySet_Contains(cpy_r_seen_nodes, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 62, CPyStatic_types_utils___globals);
        goto CPyL39;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL5;
    return 1;
CPyL5: ;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_types___TypeAliasType))
        cpy_r_r9 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 64, CPyStatic_types_utils___globals, "mypy.types.TypeAliasType", cpy_r_target);
        goto CPyL39;
    }
    cpy_r_r10 = ((mypy___types___TypeAliasTypeObject *)cpy_r_r9)->_alias;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_r10 != cpy_r_r11;
    CPy_DECREF(cpy_r_r10);
    if (cpy_r_r12) goto CPyL14;
    cpy_r_r13 = CPyStatics[5254]; /* 'Unfixed type alias ' */
    if (likely(Py_TYPE(cpy_r_target) == CPyType_types___TypeAliasType))
        cpy_r_r14 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 64, CPyStatic_types_utils___globals, "mypy.types.TypeAliasType", cpy_r_target);
        goto CPyL39;
    }
    cpy_r_r15 = ((mypy___types___TypeAliasTypeObject *)cpy_r_r14)->_type_ref;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = PyObject_Str(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 64, CPyStatic_types_utils___globals);
        goto CPyL39;
    }
    cpy_r_r17 = CPyStr_Build(2, cpy_r_r13, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 64, CPyStatic_types_utils___globals);
        goto CPyL39;
    }
    cpy_r_r18 = CPyModule_builtins;
    cpy_r_r19 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 64, CPyStatic_types_utils___globals);
        goto CPyL40;
    }
    PyObject *cpy_r_r21[1] = {cpy_r_r17};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r20, cpy_r_r22, 1, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 64, CPyStatic_types_utils___globals);
        goto CPyL40;
    }
    CPy_DECREF(cpy_r_r17);
    CPy_Raise(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 64, CPyStatic_types_utils___globals);
        goto CPyL39;
    }
    CPy_Unreachable();
CPyL14: ;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_types___TypeAliasType))
        cpy_r_r24 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 65, CPyStatic_types_utils___globals, "mypy.types.TypeAliasType", cpy_r_target);
        goto CPyL39;
    }
    cpy_r_r25 = ((mypy___types___TypeAliasTypeObject *)cpy_r_r24)->_alias;
    CPy_INCREF(cpy_r_r25);
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 65, CPyStatic_types_utils___globals, "mypy.nodes.TypeAlias", cpy_r_r25);
        goto CPyL39;
    }
    cpy_r_r27 = PySet_New(NULL);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 65, CPyStatic_types_utils___globals);
        goto CPyL41;
    }
    cpy_r_r28 = PySet_Add(cpy_r_r27, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 65, CPyStatic_types_utils___globals);
        goto CPyL42;
    }
    cpy_r_r30 = PyNumber_Or(cpy_r_seen_nodes, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 65, CPyStatic_types_utils___globals);
        goto CPyL39;
    }
    if (likely(PySet_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 65, CPyStatic_types_utils___globals, "set", cpy_r_r30);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_target);
    if (likely(Py_TYPE(cpy_r_target) == CPyType_types___TypeAliasType))
        cpy_r_r32 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 65, CPyStatic_types_utils___globals, "mypy.types.TypeAliasType", cpy_r_target);
        goto CPyL43;
    }
    cpy_r_r33 = CPyDef_types___get_proper_type(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 65, CPyStatic_types_utils___globals);
        goto CPyL43;
    }
    if (likely(cpy_r_r33 != Py_None))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 65, CPyStatic_types_utils___globals, "mypy.types.ProperType", cpy_r_r33);
        goto CPyL43;
    }
    cpy_r_r35 = CPyDef_types_utils___is_invalid_recursive_alias(cpy_r_r31, cpy_r_r34);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 65, CPyStatic_types_utils___globals);
        goto CPyL39;
    }
    return cpy_r_r35;
CPyL25: ;
    cpy_r_r36 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r37 = CPy_TypeCheck(cpy_r_target, cpy_r_r36);
    if (cpy_r_r37) goto CPyL28;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 66, CPyStatic_types_utils___globals);
        goto CPyL39;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r39 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    if (cpy_r_r42) goto CPyL30;
    return 0;
CPyL30: ;
    cpy_r_r43 = 0;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_types___UnionType))
        cpy_r_r44 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 69, CPyStatic_types_utils___globals, "mypy.types.UnionType", cpy_r_target);
        goto CPyL39;
    }
    cpy_r_r45 = ((mypy___types___UnionTypeObject *)cpy_r_r44)->_items;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = 0;
CPyL32: ;
    cpy_r_r47 = (CPyPtr)&((PyVarObject *)cpy_r_r45)->ob_size;
    cpy_r_r48 = *(int64_t *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 << 1;
    cpy_r_r50 = (Py_ssize_t)cpy_r_r46 < (Py_ssize_t)cpy_r_r49;
    if (!cpy_r_r50) goto CPyL44;
    cpy_r_r51 = CPyList_GetItemUnsafe(cpy_r_r45, cpy_r_r46);
    if (likely(PyObject_TypeCheck(cpy_r_r51, CPyType_types___Type)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 69, CPyStatic_types_utils___globals, "mypy.types.Type", cpy_r_r51);
        goto CPyL45;
    }
    cpy_r_item = cpy_r_r52;
    cpy_r_r53 = CPyDef_types_utils___is_invalid_recursive_alias(cpy_r_seen_nodes, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 69, CPyStatic_types_utils___globals);
        goto CPyL45;
    }
    if (cpy_r_r53) {
        goto CPyL46;
    } else
        goto CPyL37;
CPyL36: ;
    cpy_r_r43 = 1;
    goto CPyL38;
CPyL37: ;
    cpy_r_r54 = cpy_r_r46 + 2;
    cpy_r_r46 = cpy_r_r54;
    goto CPyL32;
CPyL38: ;
    return cpy_r_r43;
CPyL39: ;
    cpy_r_r55 = 2;
    return cpy_r_r55;
CPyL40: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL39;
CPyL41: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL39;
CPyL42: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL39;
CPyL43: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL39;
CPyL44: ;
    CPy_DECREF(cpy_r_r45);
    goto CPyL38;
CPyL45: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL39;
CPyL46: ;
    CPy_DECREF(cpy_r_r45);
    goto CPyL36;
}

PyObject *CPyPy_types_utils___is_invalid_recursive_alias(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"seen_nodes", "target", 0};
    static CPyArg_Parser parser = {"OO:is_invalid_recursive_alias", kwlist, 0};
    PyObject *obj_seen_nodes;
    PyObject *obj_target;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_seen_nodes, &obj_target)) {
        return NULL;
    }
    PyObject *arg_seen_nodes;
    if (likely(PySet_Check(obj_seen_nodes)))
        arg_seen_nodes = obj_seen_nodes;
    else {
        CPy_TypeError("set", obj_seen_nodes); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(PyObject_TypeCheck(obj_target, CPyType_types___Type)))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypy.types.Type", obj_target); 
        goto fail;
    }
    char retval = CPyDef_types_utils___is_invalid_recursive_alias(arg_seen_nodes, arg_target);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/types_utils.py", "is_invalid_recursive_alias", 56, CPyStatic_types_utils___globals);
    return NULL;
}

char CPyDef_types_utils___is_bad_type_type_item(PyObject *cpy_r_item) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_i;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_item);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_bad_type_type_item", 79, CPyStatic_types_utils___globals);
        goto CPyL16;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_bad_type_type_item", 79, CPyStatic_types_utils___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL16;
    }
    cpy_r_item = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL17;
    } else
        goto CPyL4;
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r6 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL18;
    cpy_r_r10 = 0;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_types___UnionType))
        cpy_r_r11 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_bad_type_type_item", 84, CPyStatic_types_utils___globals, "mypy.types.UnionType", cpy_r_item);
        goto CPyL19;
    }
    cpy_r_r12 = ((mypy___types___UnionTypeObject *)cpy_r_r11)->_items;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_item);
    cpy_r_r13 = 2;
    cpy_r_r14 = CPyDef_types___flatten_nested_unions(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_bad_type_type_item", 84, CPyStatic_types_utils___globals);
        goto CPyL16;
    }
    cpy_r_r15 = 0;
CPyL8: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL20;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r15);
    if (likely(PyObject_TypeCheck(cpy_r_r20, CPyType_types___Type)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_bad_type_type_item", 83, CPyStatic_types_utils___globals, "mypy.types.Type", cpy_r_r20);
        goto CPyL21;
    }
    cpy_r_i = cpy_r_r21;
    cpy_r_r22 = CPyDef_types___get_proper_type(cpy_r_i);
    CPy_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_bad_type_type_item", 84, CPyStatic_types_utils___globals);
        goto CPyL21;
    }
    cpy_r_r23 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r22)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    CPy_DECREF(cpy_r_r22);
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (cpy_r_r26) {
        goto CPyL22;
    } else
        goto CPyL13;
CPyL12: ;
    cpy_r_r10 = 1;
    goto CPyL14;
CPyL13: ;
    cpy_r_r27 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r27;
    goto CPyL8;
CPyL14: ;
    return cpy_r_r10;
CPyL15: ;
    return 0;
CPyL16: ;
    cpy_r_r28 = 2;
    return cpy_r_r28;
CPyL17: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL3;
CPyL18: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_item);
    goto CPyL16;
CPyL20: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL14;
CPyL21: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL16;
CPyL22: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL12;
}

PyObject *CPyPy_types_utils___is_bad_type_type_item(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"item", 0};
    static CPyArg_Parser parser = {"O:is_bad_type_type_item", kwlist, 0};
    PyObject *obj_item;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_item)) {
        return NULL;
    }
    PyObject *arg_item;
    if (likely(PyObject_TypeCheck(obj_item, CPyType_types___Type)))
        arg_item = obj_item;
    else {
        CPy_TypeError("mypy.types.Type", obj_item); 
        goto fail;
    }
    char retval = CPyDef_types_utils___is_bad_type_type_item(arg_item);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/types_utils.py", "is_bad_type_type_item", 72, CPyStatic_types_utils___globals);
    return NULL;
}

char CPyDef_types_utils___is_union_with_any(PyObject *cpy_r_tp) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_t;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_tp);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_union_with_any", 91, CPyStatic_types_utils___globals);
        goto CPyL16;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_union_with_any", 91, CPyStatic_types_utils___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL16;
    }
    cpy_r_tp = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_tp)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL17;
    } else
        goto CPyL4;
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r6 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_tp)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (cpy_r_r9) {
        goto CPyL6;
    } else
        goto CPyL18;
CPyL5: ;
    return 0;
CPyL6: ;
    cpy_r_r10 = 0;
    if (likely(Py_TYPE(cpy_r_tp) == CPyType_types___UnionType))
        cpy_r_r11 = cpy_r_tp;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_union_with_any", 96, CPyStatic_types_utils___globals, "mypy.types.UnionType", cpy_r_tp);
        goto CPyL19;
    }
    cpy_r_r12 = ((mypy___types___UnionTypeObject *)cpy_r_r11)->_items;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_tp);
    cpy_r_r13 = CPyDef_types___get_proper_types(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_union_with_any", 96, CPyStatic_types_utils___globals);
        goto CPyL16;
    }
    cpy_r_r14 = 0;
CPyL9: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL20;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_types___ProperType)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_union_with_any", 96, CPyStatic_types_utils___globals, "mypy.types.ProperType", cpy_r_r19);
        goto CPyL21;
    }
    cpy_r_t = cpy_r_r20;
    cpy_r_r21 = CPyDef_types_utils___is_union_with_any(cpy_r_t);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_union_with_any", 96, CPyStatic_types_utils___globals);
        goto CPyL21;
    }
    if (cpy_r_r21) {
        goto CPyL22;
    } else
        goto CPyL14;
CPyL13: ;
    cpy_r_r10 = 1;
    goto CPyL15;
CPyL14: ;
    cpy_r_r22 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r22;
    goto CPyL9;
CPyL15: ;
    return cpy_r_r10;
CPyL16: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL17: ;
    CPy_DECREF(cpy_r_tp);
    goto CPyL3;
CPyL18: ;
    CPy_DECREF(cpy_r_tp);
    goto CPyL5;
CPyL19: ;
    CPy_DecRef(cpy_r_tp);
    goto CPyL16;
CPyL20: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL15;
CPyL21: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL16;
CPyL22: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL13;
}

PyObject *CPyPy_types_utils___is_union_with_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tp", 0};
    static CPyArg_Parser parser = {"O:is_union_with_any", kwlist, 0};
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
    char retval = CPyDef_types_utils___is_union_with_any(arg_tp);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/types_utils.py", "is_union_with_any", 89, CPyStatic_types_utils___globals);
    return NULL;
}

char CPyDef_types_utils___is_generic_instance(PyObject *cpy_r_tp) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_tp);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_generic_instance", 100, CPyStatic_types_utils___globals);
        goto CPyL8;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_generic_instance", 100, CPyStatic_types_utils___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL8;
    }
    cpy_r_tp = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___Instance;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_tp)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL4;
    } else
        goto CPyL9;
CPyL3: ;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL7;
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_tp) == CPyType_types___Instance))
        cpy_r_r7 = cpy_r_tp;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_generic_instance", 101, CPyStatic_types_utils___globals, "mypy.types.Instance", cpy_r_tp);
        goto CPyL10;
    }
    cpy_r_r8 = ((mypy___types___InstanceObject *)cpy_r_r7)->_args;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_tp);
    cpy_r_r9 = PyObject_IsTrue(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_generic_instance", 101, CPyStatic_types_utils___globals);
        goto CPyL8;
    }
    cpy_r_r11 = cpy_r_r9;
    cpy_r_r6 = cpy_r_r11;
CPyL7: ;
    return cpy_r_r6;
CPyL8: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL9: ;
    CPy_DECREF(cpy_r_tp);
    goto CPyL3;
CPyL10: ;
    CPy_DecRef(cpy_r_tp);
    goto CPyL8;
}

PyObject *CPyPy_types_utils___is_generic_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tp", 0};
    static CPyArg_Parser parser = {"O:is_generic_instance", kwlist, 0};
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
    char retval = CPyDef_types_utils___is_generic_instance(arg_tp);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/types_utils.py", "is_generic_instance", 99, CPyStatic_types_utils___globals);
    return NULL;
}

char CPyDef_types_utils___is_optional(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_optional", 105, CPyStatic_types_utils___globals);
        goto CPyL14;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_optional", 105, CPyStatic_types_utils___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL14;
    }
    cpy_r_t = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL4;
    } else
        goto CPyL15;
CPyL3: ;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL13;
CPyL4: ;
    cpy_r_r7 = 0;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r8 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_optional", 107, CPyStatic_types_utils___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL16;
    }
    cpy_r_r9 = ((mypy___types___UnionTypeObject *)cpy_r_r8)->_items;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_t);
    cpy_r_r10 = 0;
CPyL6: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL17;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r9, cpy_r_r10);
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_types___Type)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_optional", 106, CPyStatic_types_utils___globals, "mypy.types.Type", cpy_r_r15);
        goto CPyL18;
    }
    cpy_r_e = cpy_r_r16;
    cpy_r_r17 = CPyDef_types___get_proper_type(cpy_r_e);
    CPy_DECREF(cpy_r_e);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_optional", 107, CPyStatic_types_utils___globals);
        goto CPyL18;
    }
    cpy_r_r18 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_r17)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    CPy_DECREF(cpy_r_r17);
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (cpy_r_r21) {
        goto CPyL19;
    } else
        goto CPyL11;
CPyL10: ;
    cpy_r_r7 = 1;
    goto CPyL12;
CPyL11: ;
    cpy_r_r22 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r22;
    goto CPyL6;
CPyL12: ;
    cpy_r_r6 = cpy_r_r7;
CPyL13: ;
    return cpy_r_r6;
CPyL14: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL15: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL3;
CPyL16: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL14;
CPyL17: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL12;
CPyL18: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL14;
CPyL19: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL10;
}

PyObject *CPyPy_types_utils___is_optional(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:is_optional", kwlist, 0};
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
    char retval = CPyDef_types_utils___is_optional(arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/types_utils.py", "is_optional", 104, CPyStatic_types_utils___globals);
    return NULL;
}

PyObject *CPyDef_types_utils___remove_optional(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "remove_optional", 112, CPyStatic_types_utils___globals);
        goto CPyL16;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "remove_optional", 112, CPyStatic_types_utils___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL16;
    }
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL14;
    cpy_r_r6 = PyList_New(0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "remove_optional", 115, CPyStatic_types_utils___globals);
        goto CPyL17;
    }
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r7 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "remove_optional", 115, CPyStatic_types_utils___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL18;
    }
    cpy_r_r8 = ((mypy___types___UnionTypeObject *)cpy_r_r7)->_items;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r9 = 0;
CPyL6: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL19;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r8, cpy_r_r9);
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_types___Type)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "remove_optional", 115, CPyStatic_types_utils___globals, "mypy.types.Type", cpy_r_r14);
        goto CPyL20;
    }
    cpy_r_t = cpy_r_r15;
    cpy_r_r16 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "remove_optional", 115, CPyStatic_types_utils___globals);
        goto CPyL21;
    }
    cpy_r_r17 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_r16)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    CPy_DECREF(cpy_r_r16);
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    cpy_r_r21 = cpy_r_r20 ^ 1;
    if (!cpy_r_r21) goto CPyL22;
    cpy_r_r22 = PyList_Append(cpy_r_r6, cpy_r_t);
    CPy_DECREF(cpy_r_t);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/types_utils.py", "remove_optional", 115, CPyStatic_types_utils___globals);
        goto CPyL20;
    }
CPyL11: ;
    cpy_r_r24 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r24;
    goto CPyL6;
CPyL12: ;
    cpy_r_r25 = CPY_INT_TAG;
    cpy_r_r26 = CPY_INT_TAG;
    cpy_r_r27 = CPyDef_types___UnionType___make_union(cpy_r_r6, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "remove_optional", 114, CPyStatic_types_utils___globals);
        goto CPyL16;
    }
    return cpy_r_r27;
CPyL14: ;
    if (likely(PyObject_TypeCheck(cpy_r_typ, CPyType_types___ProperType)))
        cpy_r_r28 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "remove_optional", 118, CPyStatic_types_utils___globals, "mypy.types.ProperType", cpy_r_typ);
        goto CPyL16;
    }
    return cpy_r_r28;
CPyL16: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL17: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r6);
    goto CPyL16;
CPyL19: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL12;
CPyL20: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_t);
    goto CPyL16;
CPyL22: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL11;
}

PyObject *CPyPy_types_utils___remove_optional(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:remove_optional", kwlist, 0};
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
    PyObject *retval = CPyDef_types_utils___remove_optional(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/types_utils.py", "remove_optional", 111, CPyStatic_types_utils___globals);
    return NULL;
}

char CPyDef_types_utils___is_self_type_like(PyObject *cpy_r_typ, char cpy_r_is_classmethod) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "is_self_type_like", 123, CPyStatic_types_utils___globals);
        goto CPyL8;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_self_type_like", 123, CPyStatic_types_utils___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL8;
    }
    cpy_r_typ = cpy_r_r1;
    if (cpy_r_is_classmethod) goto CPyL4;
    cpy_r_r2 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    CPy_DECREF(cpy_r_typ);
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (cpy_r_r9) {
        goto CPyL6;
    } else
        goto CPyL9;
CPyL5: ;
    return 0;
CPyL6: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeType))
        cpy_r_r10 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "is_self_type_like", 128, CPyStatic_types_utils___globals, "mypy.types.TypeType", cpy_r_typ);
        goto CPyL10;
    }
    cpy_r_r11 = ((mypy___types___TypeTypeObject *)cpy_r_r10)->_item;
    cpy_r_r12 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_r11)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    CPy_DECREF(cpy_r_typ);
    return cpy_r_r15;
CPyL8: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL9: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL5;
CPyL10: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL8;
}

PyObject *CPyPy_types_utils___is_self_type_like(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", "is_classmethod", 0};
    static CPyArg_Parser parser = {"O|$@O:is_self_type_like", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_is_classmethod;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_typ, &obj_is_classmethod)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    char arg_is_classmethod;
    if (unlikely(!PyBool_Check(obj_is_classmethod))) {
        CPy_TypeError("bool", obj_is_classmethod); goto fail;
    } else
        arg_is_classmethod = obj_is_classmethod == Py_True;
    char retval = CPyDef_types_utils___is_self_type_like(arg_typ, arg_is_classmethod);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/types_utils.py", "is_self_type_like", 121, CPyStatic_types_utils___globals);
    return NULL;
}

char CPyDef_types_utils___store_argument_type(PyObject *cpy_r_defn, CPyTagged cpy_r_i, PyObject *cpy_r_typ, PyObject *cpy_r_named_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_arg_type;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_unpacked_type;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    CPyPtr cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyPtr cpy_r_r65;
    CPyPtr cpy_r_r66;
    PyObject **cpy_r_r68;
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
    PyObject *cpy_r_r84;
    PyObject **cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyPtr cpy_r_r90;
    CPyPtr cpy_r_r91;
    CPyPtr cpy_r_r92;
    PyObject **cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_arg_types;
    cpy_r_r1 = CPyList_GetItem(cpy_r_r0, cpy_r_i);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 134, CPyStatic_types_utils___globals);
        goto CPyL58;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "store_argument_type", 134, CPyStatic_types_utils___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL58;
    }
    cpy_r_arg_type = cpy_r_r2;
    cpy_r_r3 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_arg_kinds;
    cpy_r_r4 = CPyList_GetItem(cpy_r_r3, cpy_r_i);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 135, CPyStatic_types_utils___globals);
        goto CPyL59;
    }
    if (likely(Py_TYPE(cpy_r_r4) == CPyType_nodes___ArgKind))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "store_argument_type", 135, CPyStatic_types_utils___globals, "mypy.nodes.ArgKind", cpy_r_r4);
        goto CPyL59;
    }
    cpy_r_r6 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r6 == NULL)) {
        goto CPyL60;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 135, CPyStatic_types_utils___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r8 = cpy_r_r5 == cpy_r_r6;
    CPy_DECREF(cpy_r_r5);
    if (!cpy_r_r8) goto CPyL39;
    cpy_r_r9 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_arg_type)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (cpy_r_r12) goto CPyL54;
    cpy_r_r13 = (PyObject *)CPyType_types___UnpackType;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_arg_type)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL35;
    if (likely(Py_TYPE(cpy_r_arg_type) == CPyType_types___UnpackType))
        cpy_r_r17 = cpy_r_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "store_argument_type", 139, CPyStatic_types_utils___globals, "mypy.types.UnpackType", cpy_r_arg_type);
        goto CPyL59;
    }
    cpy_r_r18 = ((mypy___types___UnpackTypeObject *)cpy_r_r17)->_type;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_types___get_proper_type(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 139, CPyStatic_types_utils___globals);
        goto CPyL59;
    }
    if (likely(cpy_r_r19 != Py_None))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "store_argument_type", 139, CPyStatic_types_utils___globals, "mypy.types.ProperType", cpy_r_r19);
        goto CPyL59;
    }
    cpy_r_unpacked_type = cpy_r_r20;
    cpy_r_r21 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_unpacked_type)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (cpy_r_r24) {
        goto CPyL61;
    } else
        goto CPyL16;
CPyL14: ;
    if (likely(Py_TYPE(cpy_r_unpacked_type) == CPyType_types___TupleType))
        cpy_r_r25 = cpy_r_unpacked_type;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "store_argument_type", 143, CPyStatic_types_utils___globals, "mypy.types.TupleType", cpy_r_unpacked_type);
        goto CPyL58;
    }
    cpy_r_arg_type = cpy_r_r25;
    goto CPyL54;
CPyL16: ;
    cpy_r_r26 = (PyObject *)CPyType_types___Instance;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_unpacked_type)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    if (!cpy_r_r29) goto CPyL62;
    if (likely(Py_TYPE(cpy_r_unpacked_type) == CPyType_types___Instance))
        cpy_r_r30 = cpy_r_unpacked_type;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "store_argument_type", 146, CPyStatic_types_utils___globals, "mypy.types.Instance", cpy_r_unpacked_type);
        goto CPyL63;
    }
    cpy_r_r31 = ((mypy___types___InstanceObject *)cpy_r_r30)->_type;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = CPY_GET_ATTR(cpy_r_r31, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 146, CPyStatic_types_utils___globals);
        goto CPyL63;
    }
CPyL19: ;
    cpy_r_r33 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r34 = PyUnicode_Compare(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r35 = cpy_r_r34 == -1;
    if (!cpy_r_r35) goto CPyL22;
    cpy_r_r36 = PyErr_Occurred();
    cpy_r_r37 = cpy_r_r36 != NULL;
    if (!cpy_r_r37) goto CPyL22;
    cpy_r_r38 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 146, CPyStatic_types_utils___globals);
        goto CPyL63;
    }
CPyL22: ;
    cpy_r_r39 = cpy_r_r34 == 0;
    if (cpy_r_r39) {
        goto CPyL64;
    } else
        goto CPyL62;
CPyL23: ;
    if (likely(Py_TYPE(cpy_r_unpacked_type) == CPyType_types___Instance))
        cpy_r_r40 = cpy_r_unpacked_type;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "store_argument_type", 148, CPyStatic_types_utils___globals, "mypy.types.Instance", cpy_r_unpacked_type);
        goto CPyL58;
    }
    cpy_r_arg_type = cpy_r_r40;
    goto CPyL54;
CPyL25: ;
    if (likely(Py_TYPE(cpy_r_arg_type) == CPyType_types___UnpackType))
        cpy_r_r41 = cpy_r_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "store_argument_type", 151, CPyStatic_types_utils___globals, "mypy.types.UnpackType", cpy_r_arg_type);
        goto CPyL58;
    }
    cpy_r_r42 = PyList_New(1);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 151, CPyStatic_types_utils___globals);
        goto CPyL65;
    }
    cpy_r_r43 = (CPyPtr)&((PyListObject *)cpy_r_r42)->ob_item;
    cpy_r_r44 = *(CPyPtr *)cpy_r_r43;
    *(PyObject * *)cpy_r_r44 = cpy_r_r41;
    cpy_r_r45 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r46 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r47 = PyList_New(0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 152, CPyStatic_types_utils___globals);
        goto CPyL66;
    }
    PyObject *cpy_r_r48[2] = {cpy_r_r46, cpy_r_r47};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = _PyObject_Vectorcall(cpy_r_named_type, cpy_r_r49, 2, 0);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 152, CPyStatic_types_utils___globals);
        goto CPyL67;
    }
    CPy_DECREF(cpy_r_r47);
    if (likely(Py_TYPE(cpy_r_r50) == CPyType_types___Instance))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "store_argument_type", 152, CPyStatic_types_utils___globals, "mypy.types.Instance", cpy_r_r50);
        goto CPyL66;
    }
    cpy_r_r52 = PyList_New(1);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 152, CPyStatic_types_utils___globals);
        goto CPyL68;
    }
    cpy_r_r53 = (CPyPtr)&((PyListObject *)cpy_r_r52)->ob_item;
    cpy_r_r54 = *(CPyPtr *)cpy_r_r53;
    *(PyObject * *)cpy_r_r54 = cpy_r_r51;
    PyObject *cpy_r_r55[2] = {cpy_r_r45, cpy_r_r52};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = _PyObject_Vectorcall(cpy_r_named_type, cpy_r_r56, 2, 0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 152, CPyStatic_types_utils___globals);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_r52);
    if (likely(Py_TYPE(cpy_r_r57) == CPyType_types___Instance))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "store_argument_type", 152, CPyStatic_types_utils___globals, "mypy.types.Instance", cpy_r_r57);
        goto CPyL66;
    }
    cpy_r_r59 = CPY_INT_TAG;
    cpy_r_r60 = CPY_INT_TAG;
    cpy_r_r61 = 2;
    cpy_r_r62 = CPyDef_types___TupleType(cpy_r_r42, cpy_r_r58, cpy_r_r59, cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 150, CPyStatic_types_utils___globals);
        goto CPyL58;
    }
    cpy_r_arg_type = cpy_r_r62;
    goto CPyL54;
CPyL35: ;
    cpy_r_r63 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r64 = PyList_New(1);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 156, CPyStatic_types_utils___globals);
        goto CPyL59;
    }
    cpy_r_r65 = (CPyPtr)&((PyListObject *)cpy_r_r64)->ob_item;
    cpy_r_r66 = *(CPyPtr *)cpy_r_r65;
    *(PyObject * *)cpy_r_r66 = cpy_r_arg_type;
    PyObject *cpy_r_r67[2] = {cpy_r_r63, cpy_r_r64};
    cpy_r_r68 = (PyObject **)&cpy_r_r67;
    cpy_r_r69 = _PyObject_Vectorcall(cpy_r_named_type, cpy_r_r68, 2, 0);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 156, CPyStatic_types_utils___globals);
        goto CPyL70;
    }
    CPy_DECREF(cpy_r_r64);
    if (likely(Py_TYPE(cpy_r_r69) == CPyType_types___Instance))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "store_argument_type", 156, CPyStatic_types_utils___globals, "mypy.types.Instance", cpy_r_r69);
        goto CPyL58;
    }
    cpy_r_arg_type = cpy_r_r70;
    goto CPyL54;
CPyL39: ;
    cpy_r_r71 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_arg_kinds;
    cpy_r_r72 = CPyList_GetItem(cpy_r_r71, cpy_r_i);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 157, CPyStatic_types_utils___globals);
        goto CPyL59;
    }
    if (likely(Py_TYPE(cpy_r_r72) == CPyType_nodes___ArgKind))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "store_argument_type", 157, CPyStatic_types_utils___globals, "mypy.nodes.ArgKind", cpy_r_r72);
        goto CPyL59;
    }
    cpy_r_r74 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r74 == NULL)) {
        goto CPyL71;
    } else
        goto CPyL44;
CPyL42: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r75 = 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 157, CPyStatic_types_utils___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r76 = cpy_r_r73 == cpy_r_r74;
    CPy_DECREF(cpy_r_r73);
    if (!cpy_r_r76) goto CPyL54;
    cpy_r_r77 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r78 = (CPyPtr)&((PyObject *)cpy_r_arg_type)->ob_type;
    cpy_r_r79 = *(PyObject * *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 == cpy_r_r77;
    if (cpy_r_r80) goto CPyL54;
    cpy_r_r81 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_unpack_kwargs;
    if (cpy_r_r81) goto CPyL54;
CPyL47: ;
    cpy_r_r82 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r83 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r84 = PyList_New(0);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 159, CPyStatic_types_utils___globals);
        goto CPyL59;
    }
    PyObject *cpy_r_r85[2] = {cpy_r_r83, cpy_r_r84};
    cpy_r_r86 = (PyObject **)&cpy_r_r85;
    cpy_r_r87 = _PyObject_Vectorcall(cpy_r_named_type, cpy_r_r86, 2, 0);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 159, CPyStatic_types_utils___globals);
        goto CPyL72;
    }
    CPy_DECREF(cpy_r_r84);
    if (likely(Py_TYPE(cpy_r_r87) == CPyType_types___Instance))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "store_argument_type", 159, CPyStatic_types_utils___globals, "mypy.types.Instance", cpy_r_r87);
        goto CPyL59;
    }
    cpy_r_r89 = PyList_New(2);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 159, CPyStatic_types_utils___globals);
        goto CPyL73;
    }
    cpy_r_r90 = (CPyPtr)&((PyListObject *)cpy_r_r89)->ob_item;
    cpy_r_r91 = *(CPyPtr *)cpy_r_r90;
    *(PyObject * *)cpy_r_r91 = cpy_r_r88;
    cpy_r_r92 = cpy_r_r91 + 8;
    *(PyObject * *)cpy_r_r92 = cpy_r_arg_type;
    PyObject *cpy_r_r93[2] = {cpy_r_r82, cpy_r_r89};
    cpy_r_r94 = (PyObject **)&cpy_r_r93;
    cpy_r_r95 = _PyObject_Vectorcall(cpy_r_named_type, cpy_r_r94, 2, 0);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 159, CPyStatic_types_utils___globals);
        goto CPyL74;
    }
    CPy_DECREF(cpy_r_r89);
    if (likely(Py_TYPE(cpy_r_r95) == CPyType_types___Instance))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "store_argument_type", 159, CPyStatic_types_utils___globals, "mypy.types.Instance", cpy_r_r95);
        goto CPyL58;
    }
    cpy_r_arg_type = cpy_r_r96;
CPyL54: ;
    cpy_r_r97 = ((mypy___nodes___FuncItemObject *)cpy_r_defn)->_arguments;
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AttributeError("mypy/types_utils.py", "store_argument_type", "FuncItem", "arguments", 160, CPyStatic_types_utils___globals);
        goto CPyL59;
    }
CPyL55: ;
    cpy_r_r98 = CPyList_GetItemBorrow(cpy_r_r97, cpy_r_i);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 160, CPyStatic_types_utils___globals);
        goto CPyL59;
    }
    if (likely(Py_TYPE(cpy_r_r98) == CPyType_nodes___Argument))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypy/types_utils.py", "store_argument_type", 160, CPyStatic_types_utils___globals, "mypy.nodes.Argument", cpy_r_r98);
        goto CPyL59;
    }
    cpy_r_r100 = ((mypy___nodes___ArgumentObject *)cpy_r_r99)->_variable;
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r100)->_type);
    ((mypy___nodes___VarObject *)cpy_r_r100)->_type = cpy_r_arg_type;
    return 1;
CPyL58: ;
    cpy_r_r102 = 2;
    return cpy_r_r102;
CPyL59: ;
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL58;
CPyL60: ;
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r5);
    goto CPyL5;
CPyL61: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL14;
CPyL62: ;
    CPy_DECREF(cpy_r_unpacked_type);
    goto CPyL25;
CPyL63: ;
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_unpacked_type);
    goto CPyL58;
CPyL64: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL23;
CPyL65: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL58;
CPyL66: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL58;
CPyL67: ;
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r47);
    goto CPyL58;
CPyL68: ;
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r51);
    goto CPyL58;
CPyL69: ;
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r52);
    goto CPyL58;
CPyL70: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL58;
CPyL71: ;
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r73);
    goto CPyL42;
CPyL72: ;
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r84);
    goto CPyL58;
CPyL73: ;
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r88);
    goto CPyL58;
CPyL74: ;
    CPy_DecRef(cpy_r_r89);
    goto CPyL58;
}

PyObject *CPyPy_types_utils___store_argument_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"defn", "i", "typ", "named_type", 0};
    static CPyArg_Parser parser = {"OOOO:store_argument_type", kwlist, 0};
    PyObject *obj_defn;
    PyObject *obj_i;
    PyObject *obj_typ;
    PyObject *obj_named_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_defn, &obj_i, &obj_typ, &obj_named_type)) {
        return NULL;
    }
    PyObject *arg_defn;
    if (likely((Py_TYPE(obj_defn) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_defn) == CPyType_nodes___LambdaExpr)))
        arg_defn = obj_defn;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_defn); 
        goto fail;
    }
    CPyTagged arg_i;
    if (likely(PyLong_Check(obj_i)))
        arg_i = CPyTagged_BorrowFromObject(obj_i);
    else {
        CPy_TypeError("int", obj_i); goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___CallableType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_typ); 
        goto fail;
    }
    PyObject *arg_named_type = obj_named_type;
    char retval = CPyDef_types_utils___store_argument_type(arg_defn, arg_i, arg_typ, arg_named_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/types_utils.py", "store_argument_type", 131, CPyStatic_types_utils___globals);
    return NULL;
}

char CPyDef_types_utils_____top_level__(void) {
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
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "<module>", -1, CPyStatic_types_utils___globals);
        goto CPyL8;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_types_utils___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "<module>", 9, CPyStatic_types_utils___globals);
        goto CPyL8;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9878]; /* ('Callable', 'Iterable', 'cast') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_types_utils___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "<module>", 11, CPyStatic_types_utils___globals);
        goto CPyL8;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9879]; /* ('ARG_STAR', 'ARG_STAR2', 'FuncItem', 'TypeAlias') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_types_utils___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "<module>", 13, CPyStatic_types_utils___globals);
        goto CPyL8;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9880]; /* ('AnyType', 'CallableType', 'Instance', 'NoneType',
                                     'Overloaded', 'ParamSpecType', 'ProperType',
                                     'TupleType', 'Type', 'TypeAliasType', 'TypeType',
                                     'TypeVarType', 'UnionType', 'UnpackType',
                                     'flatten_nested_unions', 'get_proper_type',
                                     'get_proper_types') */
    cpy_r_r18 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r19 = CPyStatic_types_utils___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/types_utils.py", "<module>", 14, CPyStatic_types_utils___globals);
        goto CPyL8;
    }
    CPyModule_mypy___types = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r20);
    return 1;
CPyL8: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
}
