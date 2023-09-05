#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *functools___functools_total_ordering_maker_callback_env_setup(PyTypeObject *type);
PyObject *CPyDef_functools___functools_total_ordering_maker_callback_env(void);

static PyObject *
functools___functools_total_ordering_maker_callback_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_functools___functools_total_ordering_maker_callback_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return functools___functools_total_ordering_maker_callback_env_setup(type);
}

static int
functools___functools_total_ordering_maker_callback_env_traverse(mypy___plugins___functools___functools_total_ordering_maker_callback_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_comparison_methods);
    Py_VISIT(self->_ctx);
    return 0;
}

static int
functools___functools_total_ordering_maker_callback_env_clear(mypy___plugins___functools___functools_total_ordering_maker_callback_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_comparison_methods);
    Py_CLEAR(self->_ctx);
    return 0;
}

static void
functools___functools_total_ordering_maker_callback_env_dealloc(mypy___plugins___functools___functools_total_ordering_maker_callback_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, functools___functools_total_ordering_maker_callback_env_dealloc)
    functools___functools_total_ordering_maker_callback_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem functools___functools_total_ordering_maker_callback_env_vtable[1];
static bool
CPyDef_functools___functools_total_ordering_maker_callback_env_trait_vtable_setup(void)
{
    CPyVTableItem functools___functools_total_ordering_maker_callback_env_vtable_scratch[] = {
        NULL
    };
    memcpy(functools___functools_total_ordering_maker_callback_env_vtable, functools___functools_total_ordering_maker_callback_env_vtable_scratch, sizeof(functools___functools_total_ordering_maker_callback_env_vtable));
    return 1;
}

static PyMethodDef functools___functools_total_ordering_maker_callback_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_functools___functools_total_ordering_maker_callback_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "functools_total_ordering_maker_callback_env",
    .tp_new = functools___functools_total_ordering_maker_callback_env_new,
    .tp_dealloc = (destructor)functools___functools_total_ordering_maker_callback_env_dealloc,
    .tp_traverse = (traverseproc)functools___functools_total_ordering_maker_callback_env_traverse,
    .tp_clear = (inquiry)functools___functools_total_ordering_maker_callback_env_clear,
    .tp_methods = functools___functools_total_ordering_maker_callback_env_methods,
    .tp_basicsize = sizeof(mypy___plugins___functools___functools_total_ordering_maker_callback_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_functools___functools_total_ordering_maker_callback_env_template = &CPyType_functools___functools_total_ordering_maker_callback_env_template_;

static PyObject *
functools___functools_total_ordering_maker_callback_env_setup(PyTypeObject *type)
{
    mypy___plugins___functools___functools_total_ordering_maker_callback_envObject *self;
    self = (mypy___plugins___functools___functools_total_ordering_maker_callback_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = functools___functools_total_ordering_maker_callback_env_vtable;
    self->_None = 2;
    self->_auto_attribs_default = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_functools___functools_total_ordering_maker_callback_env(void)
{
    PyObject *self = functools___functools_total_ordering_maker_callback_env_setup(CPyType_functools___functools_total_ordering_maker_callback_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_____get__(self, instance, owner);
}
PyMemberDef functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_setup(PyTypeObject *type);
PyObject *CPyDef_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj(void);

static PyObject *
functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_setup(type);
}

static int
functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_traverse(mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject))));
    return 0;
}

static int
functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_clear(mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject))));
    return 0;
}

static void
functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_dealloc(mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_dealloc)
    functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_vtable[2];
static bool
CPyDef_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_trait_vtable_setup(void)
{
    CPyVTableItem functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_____call__,
        (CPyVTableItem)CPyDef_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_____get__,
    };
    memcpy(functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_vtable, functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_vtable_scratch, sizeof(functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_vtable));
    return 1;
}

static PyMethodDef functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_functools_total_ordering_maker_callback_obj",
    .tp_new = functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_new,
    .tp_dealloc = (destructor)functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_dealloc,
    .tp_traverse = (traverseproc)functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_traverse,
    .tp_clear = (inquiry)functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_clear,
    .tp_methods = functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj,
    .tp_members = functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_members,
    .tp_basicsize = sizeof(mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject),
    .tp_weaklistoffset = sizeof(mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_template = &CPyType_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_template_;

static PyObject *
functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_setup(PyTypeObject *type)
{
    mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject *self;
    self = (mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_vtable;
    self->vectorcall = CPyPy_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj(void)
{
    PyObject *self = functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_setup(CPyType_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef functoolsmodule_methods[] = {
    {"functools_total_ordering_maker_callback", (PyCFunction)CPyPy_functools___functools_total_ordering_maker_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_find_other_type", (PyCFunction)CPyPy_functools____find_other_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_analyze_class", (PyCFunction)CPyPy_functools____analyze_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef functoolsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.plugins.functools",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    functoolsmodule_methods
};

PyObject *CPyInit_mypy___plugins___functools(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___plugins___functools_internal) {
        Py_INCREF(CPyModule_mypy___plugins___functools_internal);
        return CPyModule_mypy___plugins___functools_internal;
    }
    CPyModule_mypy___plugins___functools_internal = PyModule_Create(&functoolsmodule);
    if (unlikely(CPyModule_mypy___plugins___functools_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___plugins___functools_internal, "__name__");
    CPyStatic_functools___globals = PyModule_GetDict(CPyModule_mypy___plugins___functools_internal);
    if (unlikely(CPyStatic_functools___globals == NULL))
        goto fail;
    CPyType_functools___functools_total_ordering_maker_callback_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_functools___functools_total_ordering_maker_callback_env_template, NULL, modname);
    if (unlikely(!CPyType_functools___functools_total_ordering_maker_callback_env))
        goto fail;
    CPyType_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_template, NULL, modname);
    if (unlikely(!CPyType_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_functools_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___plugins___functools_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___plugins___functools_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_functools___functools_total_ordering_makers);
    CPyStatic_functools___functools_total_ordering_makers = NULL;
    CPy_XDECREF(CPyStatic_functools____ORDERING_METHODS);
    CPyStatic_functools____ORDERING_METHODS = NULL;
    Py_CLEAR(CPyType_functools____MethodInfo);
    Py_CLEAR(CPyType_functools___functools_total_ordering_maker_callback_env);
    Py_CLEAR(CPyType_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj);
    return NULL;
}

PyObject *CPyDef_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/functools.py", "__get__", -1, CPyStatic_functools___globals);
    return NULL;
}

tuple_T2CO CPyDef_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_k) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    tuple_T2CO cpy_r_r6;
    tuple_T2CO cpy_r_r7;
    cpy_r_r0 = ((mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugins/functools.py", "<lambda>", "__mypyc_lambda__0_functools_total_ordering_maker_callback_obj", "__mypyc_env__", 34, CPyStatic_functools___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___plugins___functools___functools_total_ordering_maker_callback_envObject *)cpy_r_r0)->_comparison_methods;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'comparison_methods' of 'functools_total_ordering_maker_callback_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<lambda>", 34, CPyStatic_functools___globals);
        goto CPyL5;
    }
CPyL2: ;
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r1, cpy_r_k);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<lambda>", 34, CPyStatic_functools___globals);
        goto CPyL5;
    }
    if (PyTuple_Check(cpy_r_r2))
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL4932;
    if (cpy_r_r2 == Py_None)
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL4932;
    CPy_TypeErrorTraceback("mypy/plugins/functools.py", "<lambda>", 34, CPyStatic_functools___globals, "tuple or None", cpy_r_r2);
    goto CPyL5;
__LL4932: ;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 == cpy_r_r4;
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6.f0 = cpy_r_r5;
    cpy_r_r6.f1 = cpy_r_k;
    CPy_INCREF(cpy_r_r6.f1);
    return cpy_r_r6;
CPyL5: ;
    tuple_T2CO __tmp4933 = { 2, NULL };
    cpy_r_r7 = __tmp4933;
    return cpy_r_r7;
}

PyObject *CPyPy_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"k", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_k;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_k)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_k;
    if (likely(PyUnicode_Check(obj_k)))
        arg_k = obj_k;
    else {
        CPy_TypeError("str", obj_k); 
        goto fail;
    }
    tuple_T2CO retval = CPyDef_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj_____call__(arg___mypyc_self__, arg_k);
    if (retval.f0 == 2) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4934 = retval.f0 ? Py_True : Py_False;
    CPy_INCREF(__tmp4934);
    PyTuple_SET_ITEM(retbox, 0, __tmp4934);
    PyObject *__tmp4935 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp4935);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/functools.py", "<lambda>", 34, CPyStatic_functools___globals);
    return NULL;
}

char CPyDef_functools___functools_total_ordering_maker_callback(PyObject *cpy_r_ctx, char cpy_r_auto_attribs_default) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_root;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_root_method;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_other_type;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_bool_type;
    PyObject *cpy_r_ret_type;
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
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_proper_ret_type;
    PyObject *cpy_r_r60;
    CPyPtr cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyTagged cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_additional_op;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyPtr cpy_r_r104;
    CPyPtr cpy_r_r105;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    if (cpy_r_auto_attribs_default != 2) goto CPyL2;
    cpy_r_auto_attribs_default = 0;
CPyL2: ;
    cpy_r_r0 = CPyDef_functools___functools_total_ordering_maker_callback_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 21, CPyStatic_functools___globals);
        goto CPyL83;
    }
    cpy_r_r1 = CPyDef_functools____analyze_class(cpy_r_ctx);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 25, CPyStatic_functools___globals);
        goto CPyL84;
    }
    if (((mypy___plugins___functools___functools_total_ordering_maker_callback_envObject *)cpy_r_r0)->_comparison_methods != NULL) {
        CPy_DECREF(((mypy___plugins___functools___functools_total_ordering_maker_callback_envObject *)cpy_r_r0)->_comparison_methods);
    }
    ((mypy___plugins___functools___functools_total_ordering_maker_callback_envObject *)cpy_r_r0)->_comparison_methods = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 25, CPyStatic_functools___globals);
        goto CPyL84;
    }
    cpy_r_r3 = ((mypy___plugins___functools___functools_total_ordering_maker_callback_envObject *)cpy_r_r0)->_comparison_methods;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", "functools_total_ordering_maker_callback_env", "comparison_methods", 26, CPyStatic_functools___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r3);
CPyL6: ;
    cpy_r_r4 = PyDict_Size(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = cpy_r_r5 != 0;
    if (cpy_r_r6) {
        goto CPyL13;
    } else
        goto CPyL85;
CPyL7: ;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 27, CPyStatic_functools___globals);
        goto CPyL83;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 27, CPyStatic_functools___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r7);
        goto CPyL83;
    }
    cpy_r_r9 = CPyStatics[4620]; /* ('No ordering operation defined when using '
                                    '"functools.total_ordering": < > <= >=') */
    cpy_r_r10 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 29, CPyStatic_functools___globals);
        goto CPyL86;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_nodes___Expression)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 29, CPyStatic_functools___globals, "mypy.nodes.Expression", cpy_r_r10);
        goto CPyL86;
    }
    cpy_r_r12 = 2;
    cpy_r_r13 = 2;
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPY_GET_METHOD_TRAIT(cpy_r_r8, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r8, cpy_r_r9, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14); /* fail */
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 27, CPyStatic_functools___globals);
        goto CPyL83;
    }
    return 1;
CPyL13: ;
    cpy_r_r16 = ((mypy___plugins___functools___functools_total_ordering_maker_callback_envObject *)cpy_r_r0)->_comparison_methods;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", "functools_total_ordering_maker_callback_env", "comparison_methods", 34, CPyStatic_functools___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r16);
CPyL14: ;
    cpy_r_r17 = CPyDef_functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_obj();
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 34, CPyStatic_functools___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject *)cpy_r_r17)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject *)cpy_r_r17)->___mypyc_env__);
    }
    ((mypy___plugins___functools_____mypyc_lambda__0_functools_total_ordering_maker_callback_objObject *)cpy_r_r17)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r18 = 1;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 34, CPyStatic_functools___globals);
        goto CPyL88;
    }
    cpy_r_r19 = CPyModule_builtins;
    cpy_r_r20 = CPyStatics[463]; /* 'max' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 34, CPyStatic_functools___globals);
        goto CPyL88;
    }
    PyObject *cpy_r_r22[2] = {cpy_r_r16, cpy_r_r17};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r25 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r23, 1, cpy_r_r24);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 34, CPyStatic_functools___globals);
        goto CPyL88;
    }
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r17);
    if (likely(PyUnicode_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 34, CPyStatic_functools___globals, "str", cpy_r_r25);
        goto CPyL84;
    }
    cpy_r_root = cpy_r_r26;
    cpy_r_r27 = ((mypy___plugins___functools___functools_total_ordering_maker_callback_envObject *)cpy_r_r0)->_comparison_methods;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", "functools_total_ordering_maker_callback_env", "comparison_methods", 35, CPyStatic_functools___globals);
        goto CPyL89;
    }
    CPy_INCREF(cpy_r_r27);
CPyL20: ;
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r27, cpy_r_root);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_root);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 35, CPyStatic_functools___globals);
        goto CPyL84;
    }
    if (PyTuple_Check(cpy_r_r28))
        cpy_r_r29 = cpy_r_r28;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL4936;
    if (cpy_r_r28 == Py_None)
        cpy_r_r29 = cpy_r_r28;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL4936;
    CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 35, CPyStatic_functools___globals, "tuple or None", cpy_r_r28);
    goto CPyL84;
__LL4936: ;
    cpy_r_root_method = cpy_r_r29;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_root_method != cpy_r_r30;
    if (!cpy_r_r31) goto CPyL90;
    CPy_INCREF(cpy_r_root_method);
    if (likely(cpy_r_root_method != Py_None))
        cpy_r_r32 = cpy_r_root_method;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 35, CPyStatic_functools___globals, "tuple", cpy_r_root_method);
        goto CPyL91;
    }
    cpy_r_r33 = PyObject_IsTrue(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 35, CPyStatic_functools___globals);
        goto CPyL91;
    }
    cpy_r_r35 = cpy_r_r33;
    if (cpy_r_r35) {
        goto CPyL27;
    } else
        goto CPyL90;
CPyL26: ;
    return 1;
CPyL27: ;
    CPy_INCREF(cpy_r_root_method);
    if (likely(cpy_r_root_method != Py_None))
        cpy_r_r36 = cpy_r_root_method;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 40, CPyStatic_functools___globals, "tuple", cpy_r_root_method);
        goto CPyL91;
    }
    cpy_r_r37 = CPyDef_functools____find_other_type(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 40, CPyStatic_functools___globals);
        goto CPyL91;
    }
    cpy_r_other_type = cpy_r_r37;
    cpy_r_r38 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 41, CPyStatic_functools___globals);
        goto CPyL92;
    }
    if (likely(Py_TYPE(cpy_r_r38) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 41, CPyStatic_functools___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r38);
        goto CPyL92;
    }
    cpy_r_r40 = CPyStatics[831]; /* 'builtins.bool' */
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPY_GET_METHOD_TRAIT(cpy_r_r39, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r39, cpy_r_r40, cpy_r_r41); /* named_type */
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 41, CPyStatic_functools___globals);
        goto CPyL92;
    }
    cpy_r_bool_type = cpy_r_r42;
    cpy_r_ret_type = cpy_r_bool_type;
    CPy_INCREF(cpy_r_root_method);
    if (likely(cpy_r_root_method != Py_None))
        cpy_r_r43 = cpy_r_root_method;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 43, CPyStatic_functools___globals, "tuple", cpy_r_root_method);
        goto CPyL93;
    }
    cpy_r_r44 = CPySequenceTuple_GetItem(cpy_r_r43, 2);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 43, CPyStatic_functools___globals);
        goto CPyL93;
    }
    if (likely(Py_TYPE(cpy_r_r44) == CPyType_types___CallableType))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 43, CPyStatic_functools___globals, "mypy.types.CallableType", cpy_r_r44);
        goto CPyL93;
    }
    cpy_r_r46 = ((mypy___types___CallableTypeObject *)cpy_r_r45)->_ret_type;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 43, CPyStatic_functools___globals);
        goto CPyL94;
    }
    if (likely(Py_TYPE(cpy_r_r47) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 43, CPyStatic_functools___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r47);
        goto CPyL94;
    }
    cpy_r_r49 = CPyStatics[831]; /* 'builtins.bool' */
    cpy_r_r50 = NULL;
    cpy_r_r51 = CPY_GET_METHOD_TRAIT(cpy_r_r48, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r48, cpy_r_r49, cpy_r_r50); /* named_type */
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 43, CPyStatic_functools___globals);
        goto CPyL94;
    }
    cpy_r_r52 = PyObject_RichCompare(cpy_r_r46, cpy_r_r51, 3);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 43, CPyStatic_functools___globals);
        goto CPyL93;
    }
    if (unlikely(!PyBool_Check(cpy_r_r52))) {
        CPy_TypeError("bool", cpy_r_r52); cpy_r_r53 = 2;
    } else
        cpy_r_r53 = cpy_r_r52 == Py_True;
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 43, CPyStatic_functools___globals);
        goto CPyL93;
    }
    if (!cpy_r_r53) goto CPyL95;
    if (likely(cpy_r_root_method != Py_None))
        cpy_r_r54 = cpy_r_root_method;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 44, CPyStatic_functools___globals, "tuple", cpy_r_root_method);
        goto CPyL96;
    }
    cpy_r_r55 = CPySequenceTuple_GetItem(cpy_r_r54, 2);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 44, CPyStatic_functools___globals);
        goto CPyL96;
    }
    if (likely(Py_TYPE(cpy_r_r55) == CPyType_types___CallableType))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 44, CPyStatic_functools___globals, "mypy.types.CallableType", cpy_r_r55);
        goto CPyL96;
    }
    cpy_r_r57 = ((mypy___types___CallableTypeObject *)cpy_r_r56)->_ret_type;
    CPy_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r58 = CPyDef_types___get_proper_type(cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 44, CPyStatic_functools___globals);
        goto CPyL96;
    }
    if (likely(cpy_r_r58 != Py_None))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 44, CPyStatic_functools___globals, "mypy.types.ProperType", cpy_r_r58);
        goto CPyL96;
    }
    cpy_r_proper_ret_type = cpy_r_r59;
    cpy_r_r60 = (PyObject *)CPyType_types___UnboundType;
    cpy_r_r61 = (CPyPtr)&((PyObject *)cpy_r_proper_ret_type)->ob_type;
    cpy_r_r62 = *(PyObject * *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 == cpy_r_r60;
    if (!cpy_r_r63) goto CPyL97;
    if (likely(Py_TYPE(cpy_r_proper_ret_type) == CPyType_types___UnboundType))
        cpy_r_r64 = cpy_r_proper_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 47, CPyStatic_functools___globals, "mypy.types.UnboundType", cpy_r_proper_ret_type);
        goto CPyL98;
    }
    cpy_r_r65 = ((mypy___types___UnboundTypeObject *)cpy_r_r64)->_name;
    CPy_INCREF(cpy_r_r65);
    CPy_DECREF(cpy_r_proper_ret_type);
    cpy_r_r66 = CPyStatics[224]; /* '.' */
    cpy_r_r67 = PyUnicode_Split(cpy_r_r65, cpy_r_r66, -1);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 47, CPyStatic_functools___globals);
        goto CPyL96;
    }
    cpy_r_r68 = CPyList_GetItemShort(cpy_r_r67, -2);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 47, CPyStatic_functools___globals);
        goto CPyL96;
    }
    if (likely(PyUnicode_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 47, CPyStatic_functools___globals, "str", cpy_r_r68);
        goto CPyL96;
    }
    cpy_r_r70 = CPyStatics[4621]; /* 'bool' */
    cpy_r_r71 = PyUnicode_Compare(cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r72 = cpy_r_r71 == -1;
    if (!cpy_r_r72) goto CPyL54;
    cpy_r_r73 = PyErr_Occurred();
    cpy_r_r74 = cpy_r_r73 != NULL;
    if (!cpy_r_r74) goto CPyL54;
    cpy_r_r75 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 47, CPyStatic_functools___globals);
        goto CPyL96;
    }
CPyL54: ;
    cpy_r_r76 = cpy_r_r71 == 0;
    if (cpy_r_r76) {
        goto CPyL57;
    } else
        goto CPyL99;
CPyL55: ;
    cpy_r_r77 = NULL;
    cpy_r_r78 = NULL;
    cpy_r_r79 = CPY_INT_TAG;
    cpy_r_r80 = CPY_INT_TAG;
    cpy_r_r81 = CPyDef_types___AnyType(16, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 49, CPyStatic_functools___globals);
        goto CPyL100;
    }
    cpy_r_ret_type = cpy_r_r81;
CPyL57: ;
    cpy_r_r82 = CPyStatic_functools____ORDERING_METHODS;
    if (unlikely(cpy_r_r82 == NULL)) {
        goto CPyL101;
    } else
        goto CPyL60;
CPyL58: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_ORDERING_METHODS\" was not set");
    cpy_r_r83 = 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 50, CPyStatic_functools___globals);
        goto CPyL83;
    }
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r84 = PyObject_GetIter(cpy_r_r82);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 50, CPyStatic_functools___globals);
        goto CPyL96;
    }
CPyL61: ;
    cpy_r_r85 = PyIter_Next(cpy_r_r84);
    if (cpy_r_r85 == NULL) goto CPyL102;
    if (likely(PyUnicode_Check(cpy_r_r85)))
        cpy_r_r86 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 50, CPyStatic_functools___globals, "str", cpy_r_r85);
        goto CPyL103;
    }
    cpy_r_additional_op = cpy_r_r86;
    cpy_r_r87 = ((mypy___plugins___functools___functools_total_ordering_maker_callback_envObject *)cpy_r_r0)->_comparison_methods;
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AttributeError("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", "functools_total_ordering_maker_callback_env", "comparison_methods", 53, CPyStatic_functools___globals);
        goto CPyL104;
    }
    CPy_INCREF(cpy_r_r87);
CPyL64: ;
    cpy_r_r88 = CPyDict_GetWithNone(cpy_r_r87, cpy_r_additional_op);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 53, CPyStatic_functools___globals);
        goto CPyL104;
    }
    if (PyTuple_Check(cpy_r_r88))
        cpy_r_r89 = cpy_r_r88;
    else {
        cpy_r_r89 = NULL;
    }
    if (cpy_r_r89 != NULL) goto __LL4937;
    if (cpy_r_r88 == Py_None)
        cpy_r_r89 = cpy_r_r88;
    else {
        cpy_r_r89 = NULL;
    }
    if (cpy_r_r89 != NULL) goto __LL4937;
    CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 53, CPyStatic_functools___globals, "tuple or None", cpy_r_r88);
    goto CPyL104;
__LL4937: ;
    cpy_r_r90 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r91 = cpy_r_r89 != cpy_r_r90;
    if (!cpy_r_r91) goto CPyL105;
    if (likely(cpy_r_r89 != Py_None))
        cpy_r_r92 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 53, CPyStatic_functools___globals, "tuple", cpy_r_r89);
        goto CPyL104;
    }
    cpy_r_r93 = PyObject_IsTrue(cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 53, CPyStatic_functools___globals);
        goto CPyL104;
    }
    cpy_r_r95 = cpy_r_r93;
    if (cpy_r_r95) goto CPyL106;
CPyL70: ;
    cpy_r_r96 = CPyStatics[4414]; /* 'other' */
    cpy_r_r97 = CPyDef_nodes___Var(cpy_r_r96, cpy_r_other_type);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 54, CPyStatic_functools___globals);
        goto CPyL104;
    }
    cpy_r_r98 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r98 == NULL)) {
        goto CPyL107;
    } else
        goto CPyL74;
CPyL72: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r99 = 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 54, CPyStatic_functools___globals);
        goto CPyL83;
    }
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r100 = Py_None;
    cpy_r_r101 = 2;
    cpy_r_r102 = CPyDef_nodes___Argument(cpy_r_r97, cpy_r_other_type, cpy_r_r100, cpy_r_r98, cpy_r_r101);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 54, CPyStatic_functools___globals);
        goto CPyL104;
    }
    cpy_r_r103 = PyList_New(1);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 54, CPyStatic_functools___globals);
        goto CPyL108;
    }
    cpy_r_r104 = (CPyPtr)&((PyListObject *)cpy_r_r103)->ob_item;
    cpy_r_r105 = *(CPyPtr *)cpy_r_r104;
    *(PyObject * *)cpy_r_r105 = cpy_r_r102;
    cpy_r_args = cpy_r_r103;
    cpy_r_r106 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 55, CPyStatic_functools___globals);
        goto CPyL109;
    }
    if (likely(Py_TYPE(cpy_r_r106) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r107 = cpy_r_r106;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 55, CPyStatic_functools___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r106);
        goto CPyL109;
    }
    cpy_r_r108 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 55, CPyStatic_functools___globals);
        goto CPyL110;
    }
    if (likely(Py_TYPE(cpy_r_r108) == CPyType_nodes___ClassDef))
        cpy_r_r109 = cpy_r_r108;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 55, CPyStatic_functools___globals, "mypy.nodes.ClassDef", cpy_r_r108);
        goto CPyL110;
    }
    cpy_r_r110 = NULL;
    cpy_r_r111 = NULL;
    cpy_r_r112 = 2;
    cpy_r_r113 = 2;
    cpy_r_r114 = CPyDef_plugins___common___add_method_to_class(cpy_r_r107, cpy_r_r109, cpy_r_additional_op, cpy_r_args, cpy_r_ret_type, cpy_r_r110, cpy_r_r111, cpy_r_r112, cpy_r_r113);
    CPy_DECREF(cpy_r_r107);
    CPy_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_additional_op);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r114 == 2)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 55, CPyStatic_functools___globals);
        goto CPyL103;
    } else
        goto CPyL61;
CPyL81: ;
    cpy_r_r115 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 50, CPyStatic_functools___globals);
        goto CPyL83;
    }
    return 1;
CPyL83: ;
    cpy_r_r116 = 2;
    return cpy_r_r116;
CPyL84: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL83;
CPyL85: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL7;
CPyL86: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL83;
CPyL87: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16);
    goto CPyL83;
CPyL88: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    goto CPyL83;
CPyL89: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_root);
    goto CPyL83;
CPyL90: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_root_method);
    goto CPyL26;
CPyL91: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_root_method);
    goto CPyL83;
CPyL92: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_root_method);
    CPy_DecRef(cpy_r_other_type);
    goto CPyL83;
CPyL93: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_root_method);
    CPy_DecRef(cpy_r_other_type);
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL83;
CPyL94: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_root_method);
    CPy_DecRef(cpy_r_other_type);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r46);
    goto CPyL83;
CPyL95: ;
    CPy_DECREF(cpy_r_root_method);
    goto CPyL57;
CPyL96: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_other_type);
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL83;
CPyL97: ;
    CPy_DECREF(cpy_r_ret_type);
    CPy_DECREF(cpy_r_proper_ret_type);
    goto CPyL55;
CPyL98: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_other_type);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_proper_ret_type);
    goto CPyL83;
CPyL99: ;
    CPy_DECREF(cpy_r_ret_type);
    goto CPyL55;
CPyL100: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_other_type);
    goto CPyL83;
CPyL101: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_other_type);
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL58;
CPyL102: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_other_type);
    CPy_DECREF(cpy_r_ret_type);
    CPy_DECREF(cpy_r_r84);
    goto CPyL81;
CPyL103: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_other_type);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r84);
    goto CPyL83;
CPyL104: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_other_type);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_additional_op);
    goto CPyL83;
CPyL105: ;
    CPy_DECREF(cpy_r_r89);
    goto CPyL70;
CPyL106: ;
    CPy_DECREF(cpy_r_additional_op);
    goto CPyL61;
CPyL107: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_other_type);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_additional_op);
    CPy_DecRef(cpy_r_r97);
    goto CPyL72;
CPyL108: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_other_type);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_additional_op);
    CPy_DecRef(cpy_r_r102);
    goto CPyL83;
CPyL109: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_other_type);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_additional_op);
    CPy_DecRef(cpy_r_args);
    goto CPyL83;
CPyL110: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_other_type);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_additional_op);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r107);
    goto CPyL83;
}

PyObject *CPyPy_functools___functools_total_ordering_maker_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "auto_attribs_default", 0};
    static CPyArg_Parser parser = {"O|O:functools_total_ordering_maker_callback", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_auto_attribs_default = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_auto_attribs_default)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    char arg_auto_attribs_default;
    if (obj_auto_attribs_default == NULL) {
        arg_auto_attribs_default = 2;
    } else if (unlikely(!PyBool_Check(obj_auto_attribs_default))) {
        CPy_TypeError("bool", obj_auto_attribs_default); goto fail;
    } else
        arg_auto_attribs_default = obj_auto_attribs_default == Py_True;
    char retval = CPyDef_functools___functools_total_ordering_maker_callback(arg_ctx, arg_auto_attribs_default);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/functools.py", "functools_total_ordering_maker_callback", 21, CPyStatic_functools___globals);
    return NULL;
}

PyObject *CPyDef_functools____find_other_type(PyObject *cpy_r_method) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_first_arg_pos;
    CPyTagged cpy_r_cur_pos_arg;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_other_arg;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_arg_kind;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_arg_type;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    int64_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_method, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_find_other_type", 62, CPyStatic_functools___globals);
        goto CPyL33;
    }
    if (unlikely(!PyBool_Check(cpy_r_r0))) {
        CPy_TypeError("bool", cpy_r_r0); cpy_r_r1 = 2;
    } else
        cpy_r_r1 = cpy_r_r0 == Py_True;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_find_other_type", 62, CPyStatic_functools___globals);
        goto CPyL33;
    }
    if (!cpy_r_r1) goto CPyL4;
    cpy_r_r2 = 0;
    goto CPyL5;
CPyL4: ;
    cpy_r_r2 = 2;
CPyL5: ;
    cpy_r_first_arg_pos = cpy_r_r2;
    cpy_r_cur_pos_arg = 0;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    cpy_r_other_arg = cpy_r_r3;
    cpy_r_r4 = CPySequenceTuple_GetItem(cpy_r_method, 2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_find_other_type", 65, CPyStatic_functools___globals);
        goto CPyL34;
    }
    if (likely(Py_TYPE(cpy_r_r4) == CPyType_types___CallableType))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_find_other_type", 65, CPyStatic_functools___globals, "mypy.types.CallableType", cpy_r_r4);
        goto CPyL34;
    }
    cpy_r_r6 = ((mypy___types___CallableTypeObject *)cpy_r_r5)->_arg_kinds;
    CPy_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = 0;
    cpy_r_r8 = CPySequenceTuple_GetItem(cpy_r_method, 2);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_find_other_type", 65, CPyStatic_functools___globals);
        goto CPyL35;
    }
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_types___CallableType))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_find_other_type", 65, CPyStatic_functools___globals, "mypy.types.CallableType", cpy_r_r8);
        goto CPyL35;
    }
    cpy_r_r10 = ((mypy___types___CallableTypeObject *)cpy_r_r9)->_arg_types;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = 0;
CPyL10: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL36;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL36;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_r6, cpy_r_r7);
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_nodes___ArgKind))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_find_other_type", 65, CPyStatic_functools___globals, "mypy.nodes.ArgKind", cpy_r_r20);
        goto CPyL37;
    }
    cpy_r_arg_kind = cpy_r_r21;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r10, cpy_r_r11);
    if (likely(PyObject_TypeCheck(cpy_r_r22, CPyType_types___Type)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_find_other_type", 65, CPyStatic_functools___globals, "mypy.types.Type", cpy_r_r22);
        goto CPyL38;
    }
    cpy_r_arg_type = cpy_r_r23;
    cpy_r_r24 = CPyStatics[1166]; /* 'is_positional' */
    PyObject *cpy_r_r25[1] = {cpy_r_arg_kind};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = PyObject_VectorcallMethod(cpy_r_r24, cpy_r_r26, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_find_other_type", 66, CPyStatic_functools___globals);
        goto CPyL39;
    }
    if (unlikely(!PyBool_Check(cpy_r_r27))) {
        CPy_TypeError("bool", cpy_r_r27); cpy_r_r28 = 2;
    } else
        cpy_r_r28 = cpy_r_r27 == Py_True;
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_find_other_type", 66, CPyStatic_functools___globals);
        goto CPyL39;
    }
    if (cpy_r_r28) {
        goto CPyL40;
    } else
        goto CPyL22;
CPyL17: ;
    cpy_r_r29 = cpy_r_cur_pos_arg & 1;
    cpy_r_r30 = cpy_r_r29 != 0;
    if (!cpy_r_r30) goto CPyL19;
    cpy_r_r31 = CPyTagged_IsEq_(cpy_r_cur_pos_arg, cpy_r_first_arg_pos);
    if (cpy_r_r31) {
        goto CPyL41;
    } else
        goto CPyL42;
CPyL19: ;
    cpy_r_r32 = cpy_r_cur_pos_arg == cpy_r_first_arg_pos;
    if (cpy_r_r32) {
        goto CPyL41;
    } else
        goto CPyL42;
CPyL20: ;
    cpy_r_other_arg = cpy_r_arg_type;
    goto CPyL28;
CPyL21: ;
    cpy_r_r33 = CPyTagged_Add(cpy_r_cur_pos_arg, 2);
    CPyTagged_DECREF(cpy_r_cur_pos_arg);
    cpy_r_cur_pos_arg = cpy_r_r33;
    goto CPyL27;
CPyL22: ;
    cpy_r_r34 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r34 == NULL)) {
        goto CPyL43;
    } else
        goto CPyL25;
CPyL23: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r35 = 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_find_other_type", 72, CPyStatic_functools___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r36 = cpy_r_arg_kind != cpy_r_r34;
    CPy_DECREF(cpy_r_arg_kind);
    if (cpy_r_r36) {
        goto CPyL44;
    } else
        goto CPyL45;
CPyL26: ;
    cpy_r_other_arg = cpy_r_arg_type;
    goto CPyL28;
CPyL27: ;
    cpy_r_r37 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r37;
    cpy_r_r38 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r38;
    goto CPyL10;
CPyL28: ;
    cpy_r_r39 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r40 = cpy_r_other_arg == cpy_r_r39;
    if (cpy_r_r40) {
        goto CPyL46;
    } else
        goto CPyL31;
CPyL29: ;
    cpy_r_r41 = NULL;
    cpy_r_r42 = NULL;
    cpy_r_r43 = CPY_INT_TAG;
    cpy_r_r44 = CPY_INT_TAG;
    cpy_r_r45 = CPyDef_types___AnyType(16, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_find_other_type", 77, CPyStatic_functools___globals);
        goto CPyL33;
    }
    return cpy_r_r45;
CPyL31: ;
    if (likely(cpy_r_other_arg != Py_None))
        cpy_r_r46 = cpy_r_other_arg;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_find_other_type", 79, CPyStatic_functools___globals, "mypy.types.Type", cpy_r_other_arg);
        goto CPyL33;
    }
    return cpy_r_r46;
CPyL33: ;
    cpy_r_r47 = NULL;
    return cpy_r_r47;
CPyL34: ;
    CPyTagged_DecRef(cpy_r_first_arg_pos);
    CPyTagged_DecRef(cpy_r_cur_pos_arg);
    CPy_DecRef(cpy_r_other_arg);
    goto CPyL33;
CPyL35: ;
    CPyTagged_DecRef(cpy_r_first_arg_pos);
    CPyTagged_DecRef(cpy_r_cur_pos_arg);
    CPy_DecRef(cpy_r_other_arg);
    CPy_DecRef(cpy_r_r6);
    goto CPyL33;
CPyL36: ;
    CPyTagged_DECREF(cpy_r_first_arg_pos);
    CPyTagged_DECREF(cpy_r_cur_pos_arg);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r10);
    goto CPyL28;
CPyL37: ;
    CPyTagged_DecRef(cpy_r_first_arg_pos);
    CPyTagged_DecRef(cpy_r_cur_pos_arg);
    CPy_DecRef(cpy_r_other_arg);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    goto CPyL33;
CPyL38: ;
    CPyTagged_DecRef(cpy_r_first_arg_pos);
    CPyTagged_DecRef(cpy_r_cur_pos_arg);
    CPy_DecRef(cpy_r_other_arg);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_arg_kind);
    goto CPyL33;
CPyL39: ;
    CPyTagged_DecRef(cpy_r_first_arg_pos);
    CPyTagged_DecRef(cpy_r_cur_pos_arg);
    CPy_DecRef(cpy_r_other_arg);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_arg_kind);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL33;
CPyL40: ;
    CPy_DECREF(cpy_r_arg_kind);
    goto CPyL17;
CPyL41: ;
    CPyTagged_DECREF(cpy_r_first_arg_pos);
    CPyTagged_DECREF(cpy_r_cur_pos_arg);
    CPy_DECREF(cpy_r_other_arg);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r10);
    goto CPyL20;
CPyL42: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL21;
CPyL43: ;
    CPyTagged_DecRef(cpy_r_first_arg_pos);
    CPyTagged_DecRef(cpy_r_cur_pos_arg);
    CPy_DecRef(cpy_r_other_arg);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_arg_kind);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL23;
CPyL44: ;
    CPyTagged_DECREF(cpy_r_first_arg_pos);
    CPyTagged_DECREF(cpy_r_cur_pos_arg);
    CPy_DECREF(cpy_r_other_arg);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r10);
    goto CPyL26;
CPyL45: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL27;
CPyL46: ;
    CPy_DECREF(cpy_r_other_arg);
    goto CPyL29;
}

PyObject *CPyPy_functools____find_other_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"method", 0};
    static CPyArg_Parser parser = {"O:_find_other_type", kwlist, 0};
    PyObject *obj_method;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_method)) {
        return NULL;
    }
    PyObject * arg_method;
    if (likely(PyTuple_Check(obj_method)))
        arg_method = obj_method;
    else {
        CPy_TypeError("tuple", obj_method); 
        goto fail;
    }
    PyObject *retval = CPyDef_functools____find_other_type(arg_method);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/functools.py", "_find_other_type", 60, CPyStatic_functools___globals);
    return NULL;
}

PyObject *CPyDef_functools____analyze_class(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_comparison_methods;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_cls;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_node;
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
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject **cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyPtr cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_proper_type;
    PyObject *cpy_r_r86;
    CPyPtr cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject **cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    int32_t cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    CPyTagged cpy_r_r107;
    PyObject *cpy_r_r108;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 85, CPyStatic_functools___globals);
        goto CPyL63;
    }
    cpy_r_comparison_methods = cpy_r_r0;
    cpy_r_r1 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 87, CPyStatic_functools___globals);
        goto CPyL64;
    }
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_nodes___ClassDef))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_analyze_class", 87, CPyStatic_functools___globals, "mypy.nodes.ClassDef", cpy_r_r1);
        goto CPyL64;
    }
    cpy_r_r3 = ((mypy___nodes___ClassDefObject *)cpy_r_r2)->_info;
    cpy_r_r4 = ((mypy___nodes___TypeInfoObject *)cpy_r_r3)->_mro;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/plugins/functools.py", "_analyze_class", "TypeInfo", "mro", 87, CPyStatic_functools___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = CPyList_GetSlice(cpy_r_r4, 0, -2);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 87, CPyStatic_functools___globals);
        goto CPyL64;
    }
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_analyze_class", 87, CPyStatic_functools___globals, "list", cpy_r_r5);
        goto CPyL64;
    }
    cpy_r_r7 = 0;
CPyL7: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL66;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r6, cpy_r_r7);
    if (likely((Py_TYPE(cpy_r_r12) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r12) == CPyType_nodes___TypeInfo)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_analyze_class", 87, CPyStatic_functools___globals, "mypy.nodes.TypeInfo", cpy_r_r12);
        goto CPyL67;
    }
    cpy_r_cls = cpy_r_r13;
    cpy_r_r14 = CPyStatic_functools____ORDERING_METHODS;
    if (unlikely(cpy_r_r14 == NULL)) {
        goto CPyL68;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_ORDERING_METHODS\" was not set");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 88, CPyStatic_functools___globals);
        goto CPyL63;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r16 = PyObject_GetIter(cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 88, CPyStatic_functools___globals);
        goto CPyL69;
    }
CPyL13: ;
    cpy_r_r17 = PyIter_Next(cpy_r_r16);
    if (cpy_r_r17 == NULL) goto CPyL70;
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_analyze_class", 88, CPyStatic_functools___globals, "str", cpy_r_r17);
        goto CPyL71;
    }
    cpy_r_name = cpy_r_r18;
    cpy_r_r19 = ((mypy___nodes___TypeInfoObject *)cpy_r_cls)->_names;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/plugins/functools.py", "_analyze_class", "TypeInfo", "names", 89, CPyStatic_functools___globals);
        goto CPyL72;
    }
    CPy_INCREF(cpy_r_r19);
CPyL16: ;
    cpy_r_r20 = PyDict_Contains(cpy_r_r19, cpy_r_name);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 89, CPyStatic_functools___globals);
        goto CPyL72;
    }
    cpy_r_r22 = cpy_r_r20;
    if (!cpy_r_r22) goto CPyL73;
    cpy_r_r23 = PyDict_Contains(cpy_r_comparison_methods, cpy_r_name);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 89, CPyStatic_functools___globals);
        goto CPyL72;
    }
    cpy_r_r25 = cpy_r_r23;
    cpy_r_r26 = cpy_r_r25 ^ 1;
    if (!cpy_r_r26) goto CPyL73;
    cpy_r_r27 = ((mypy___nodes___TypeInfoObject *)cpy_r_cls)->_names;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/plugins/functools.py", "_analyze_class", "TypeInfo", "names", 90, CPyStatic_functools___globals);
        goto CPyL72;
    }
    CPy_INCREF(cpy_r_r27);
CPyL21: ;
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r27, cpy_r_name);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 90, CPyStatic_functools___globals);
        goto CPyL72;
    }
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_nodes___SymbolTableNode))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_analyze_class", 90, CPyStatic_functools___globals, "mypy.nodes.SymbolTableNode", cpy_r_r28);
        goto CPyL72;
    }
    cpy_r_r30 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r29)->_node;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    cpy_r_node = cpy_r_r30;
    cpy_r_r31 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL25;
    cpy_r_r35 = cpy_r_r34;
    goto CPyL26;
CPyL25: ;
    cpy_r_r36 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    cpy_r_r35 = cpy_r_r39;
CPyL26: ;
    if (!cpy_r_r35) goto CPyL49;
    cpy_r_r40 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r41 = CPy_TypeCheck(cpy_r_node, cpy_r_r40);
    if (!cpy_r_r41) goto CPyL31;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r42 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_analyze_class", 91, CPyStatic_functools___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL74;
    }
    cpy_r_r43 = CPyStatics[802]; /* 'type' */
    cpy_r_r44 = CPyObject_GetAttr(cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 91, CPyStatic_functools___globals);
        goto CPyL74;
    }
    cpy_r_r45 = cpy_r_r44;
    goto CPyL33;
CPyL31: ;
    CPy_INCREF(cpy_r_node);
    cpy_r_r46 = cpy_r_node;
    cpy_r_r47 = CPyStatics[802]; /* 'type' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 91, CPyStatic_functools___globals);
        goto CPyL74;
    }
    cpy_r_r45 = cpy_r_r48;
CPyL33: ;
    cpy_r_r49 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_r45)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    CPy_DECREF(cpy_r_r45);
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    if (!cpy_r_r52) goto CPyL49;
    cpy_r_r53 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r54 = CPy_TypeCheck(cpy_r_node, cpy_r_r53);
    if (!cpy_r_r54) goto CPyL38;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r55 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_analyze_class", 92, CPyStatic_functools___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL74;
    }
    cpy_r_r56 = CPyStatics[4094]; /* 'is_static' */
    cpy_r_r57 = CPyObject_GetAttr(cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 92, CPyStatic_functools___globals);
        goto CPyL74;
    }
    cpy_r_r58 = cpy_r_r57;
    goto CPyL40;
CPyL38: ;
    CPy_INCREF(cpy_r_node);
    cpy_r_r59 = cpy_r_node;
    cpy_r_r60 = CPyStatics[4094]; /* 'is_static' */
    cpy_r_r61 = CPyObject_GetAttr(cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 92, CPyStatic_functools___globals);
        goto CPyL74;
    }
    cpy_r_r58 = cpy_r_r61;
CPyL40: ;
    cpy_r_r62 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r63 = CPy_TypeCheck(cpy_r_node, cpy_r_r62);
    if (!cpy_r_r63) goto CPyL44;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r64 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_analyze_class", 92, CPyStatic_functools___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL75;
    }
    cpy_r_r65 = CPyStatics[802]; /* 'type' */
    cpy_r_r66 = CPyObject_GetAttr(cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 92, CPyStatic_functools___globals);
        goto CPyL75;
    }
    cpy_r_r67 = cpy_r_r66;
    goto CPyL46;
CPyL44: ;
    cpy_r_r68 = cpy_r_node;
    cpy_r_r69 = CPyStatics[802]; /* 'type' */
    cpy_r_r70 = CPyObject_GetAttr(cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 92, CPyStatic_functools___globals);
        goto CPyL75;
    }
    cpy_r_r67 = cpy_r_r70;
CPyL46: ;
    cpy_r_r71 = CPyStatic_functools___globals;
    cpy_r_r72 = CPyStatics[4622]; /* '_MethodInfo' */
    cpy_r_r73 = CPyDict_GetItem(cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 92, CPyStatic_functools___globals);
        goto CPyL76;
    }
    PyObject *cpy_r_r74[2] = {cpy_r_r58, cpy_r_r67};
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = _PyObject_Vectorcall(cpy_r_r73, cpy_r_r75, 2, 0);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 92, CPyStatic_functools___globals);
        goto CPyL76;
    }
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r77 = CPyDict_SetItem(cpy_r_comparison_methods, cpy_r_name, cpy_r_r76);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 92, CPyStatic_functools___globals);
        goto CPyL71;
    } else
        goto CPyL13;
CPyL49: ;
    cpy_r_r79 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r80 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r81 = *(PyObject * *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 == cpy_r_r79;
    if (!cpy_r_r82) goto CPyL77;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r83 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_analyze_class", 96, CPyStatic_functools___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL74;
    }
    cpy_r_r84 = ((mypy___nodes___VarObject *)cpy_r_r83)->_type;
    CPy_INCREF(cpy_r_r84);
    cpy_r_r85 = CPyDef_types___get_proper_type(cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 96, CPyStatic_functools___globals);
        goto CPyL74;
    }
    cpy_r_proper_type = cpy_r_r85;
    cpy_r_r86 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r87 = (CPyPtr)&((PyObject *)cpy_r_proper_type)->ob_type;
    cpy_r_r88 = *(PyObject * *)cpy_r_r87;
    cpy_r_r89 = cpy_r_r88 == cpy_r_r86;
    if (!cpy_r_r89) goto CPyL78;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r90 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_analyze_class", 98, CPyStatic_functools___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL79;
    }
    cpy_r_r91 = ((mypy___nodes___VarObject *)cpy_r_r90)->_is_staticmethod;
    CPy_DECREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_proper_type) == CPyType_types___CallableType))
        cpy_r_r92 = cpy_r_proper_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_analyze_class", 98, CPyStatic_functools___globals, "mypy.types.CallableType", cpy_r_proper_type);
        goto CPyL72;
    }
    cpy_r_r93 = CPyStatic_functools___globals;
    cpy_r_r94 = CPyStatics[4622]; /* '_MethodInfo' */
    cpy_r_r95 = CPyDict_GetItem(cpy_r_r93, cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 98, CPyStatic_functools___globals);
        goto CPyL80;
    }
    cpy_r_r96 = cpy_r_r91 ? Py_True : Py_False;
    PyObject *cpy_r_r97[2] = {cpy_r_r96, cpy_r_r92};
    cpy_r_r98 = (PyObject **)&cpy_r_r97;
    cpy_r_r99 = _PyObject_Vectorcall(cpy_r_r95, cpy_r_r98, 2, 0);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 98, CPyStatic_functools___globals);
        goto CPyL80;
    }
    CPy_DECREF(cpy_r_r92);
    if (likely(PyTuple_Check(cpy_r_r99)))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "_analyze_class", 98, CPyStatic_functools___globals, "tuple", cpy_r_r99);
        goto CPyL72;
    }
    cpy_r_r101 = CPyDict_SetItem(cpy_r_comparison_methods, cpy_r_name, cpy_r_r100);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 98, CPyStatic_functools___globals);
        goto CPyL71;
    } else
        goto CPyL13;
CPyL59: ;
    cpy_r_r103 = Py_None;
    cpy_r_r104 = CPyDict_SetItem(cpy_r_comparison_methods, cpy_r_name, cpy_r_r103);
    CPy_DECREF(cpy_r_name);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 101, CPyStatic_functools___globals);
        goto CPyL71;
    } else
        goto CPyL13;
CPyL60: ;
    cpy_r_r106 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 88, CPyStatic_functools___globals);
        goto CPyL67;
    }
    cpy_r_r107 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r107;
    goto CPyL7;
CPyL62: ;
    return cpy_r_comparison_methods;
CPyL63: ;
    cpy_r_r108 = NULL;
    return cpy_r_r108;
CPyL64: ;
    CPy_DecRef(cpy_r_comparison_methods);
    goto CPyL63;
CPyL65: ;
    CPy_DecRef(cpy_r_comparison_methods);
    CPy_DecRef(cpy_r_r2);
    goto CPyL63;
CPyL66: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL62;
CPyL67: ;
    CPy_DecRef(cpy_r_comparison_methods);
    CPy_DecRef(cpy_r_r6);
    goto CPyL63;
CPyL68: ;
    CPy_DecRef(cpy_r_comparison_methods);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_cls);
    goto CPyL10;
CPyL69: ;
    CPy_DecRef(cpy_r_comparison_methods);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_cls);
    goto CPyL63;
CPyL70: ;
    CPy_DECREF(cpy_r_cls);
    CPy_DECREF(cpy_r_r16);
    goto CPyL60;
CPyL71: ;
    CPy_DecRef(cpy_r_comparison_methods);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_r16);
    goto CPyL63;
CPyL72: ;
    CPy_DecRef(cpy_r_comparison_methods);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_name);
    goto CPyL63;
CPyL73: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL13;
CPyL74: ;
    CPy_DecRef(cpy_r_comparison_methods);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    goto CPyL63;
CPyL75: ;
    CPy_DecRef(cpy_r_comparison_methods);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r58);
    goto CPyL63;
CPyL76: ;
    CPy_DecRef(cpy_r_comparison_methods);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r67);
    goto CPyL63;
CPyL77: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL59;
CPyL78: ;
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_proper_type);
    goto CPyL59;
CPyL79: ;
    CPy_DecRef(cpy_r_comparison_methods);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_proper_type);
    goto CPyL63;
CPyL80: ;
    CPy_DecRef(cpy_r_comparison_methods);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r92);
    goto CPyL63;
}

PyObject *CPyPy_functools____analyze_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:_analyze_class", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_functools____analyze_class(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/functools.py", "_analyze_class", 82, CPyStatic_functools___globals);
    return NULL;
}

char CPyDef_functools_____top_level__(void) {
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
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject **cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    PyObject **cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    int32_t cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", -1, CPyStatic_functools___globals);
        goto CPyL45;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_functools___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 2, CPyStatic_functools___globals);
        goto CPyL45;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9254]; /* ('Final', 'NamedTuple') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_functools___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 4, CPyStatic_functools___globals);
        goto CPyL45;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = (PyObject **)&CPyModule_mypy___plugin;
    PyObject **cpy_r_r14[1] = {cpy_r_r13};
    cpy_r_r15 = (void *)&cpy_r_r14;
    int64_t cpy_r_r16[1] = {6};
    cpy_r_r17 = (void *)&cpy_r_r16;
    cpy_r_r18 = CPyStatics[9582]; /* (('mypy.plugin', 'mypy', 'mypy'),) */
    cpy_r_r19 = CPyStatic_functools___globals;
    cpy_r_r20 = CPyStatics[4623]; /* 'mypy/plugins/functools.py' */
    cpy_r_r21 = CPyStatics[17]; /* '<module>' */
    cpy_r_r22 = CPyImport_ImportMany(cpy_r_r18, cpy_r_r15, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r17);
    if (!cpy_r_r22) goto CPyL45;
    cpy_r_r23 = CPyStatics[9629]; /* ('ARG_POS', 'ARG_STAR2', 'Argument', 'FuncItem', 'Var') */
    cpy_r_r24 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r25 = CPyStatic_functools___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 7, CPyStatic_functools___globals);
        goto CPyL45;
    }
    CPyModule_mypy___nodes = cpy_r_r26;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[9630]; /* ('add_method_to_class',) */
    cpy_r_r28 = CPyStatics[4441]; /* 'mypy.plugins.common' */
    cpy_r_r29 = CPyStatic_functools___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 8, CPyStatic_functools___globals);
        goto CPyL45;
    }
    CPyModule_mypy___plugins___common = cpy_r_r30;
    CPy_INCREF(CPyModule_mypy___plugins___common);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[9631]; /* ('AnyType', 'CallableType', 'Type', 'TypeOfAny',
                                     'UnboundType', 'get_proper_type') */
    cpy_r_r32 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r33 = CPyStatic_functools___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 9, CPyStatic_functools___globals);
        goto CPyL45;
    }
    CPyModule_mypy___types = cpy_r_r34;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[4624]; /* 'functools.total_ordering' */
    cpy_r_r36 = PySet_New(NULL);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 11, CPyStatic_functools___globals);
        goto CPyL45;
    }
    cpy_r_r37 = PySet_Add(cpy_r_r36, cpy_r_r35);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 11, CPyStatic_functools___globals);
        goto CPyL46;
    }
    CPyStatic_functools___functools_total_ordering_makers = cpy_r_r36;
    CPy_INCREF(CPyStatic_functools___functools_total_ordering_makers);
    cpy_r_r39 = CPyStatic_functools___globals;
    cpy_r_r40 = CPyStatics[4625]; /* 'functools_total_ordering_makers' */
    cpy_r_r41 = CPyDict_SetItem(cpy_r_r39, cpy_r_r40, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 11, CPyStatic_functools___globals);
        goto CPyL45;
    }
    cpy_r_r43 = CPyStatics[4196]; /* '__lt__' */
    cpy_r_r44 = CPyStatics[4199]; /* '__le__' */
    cpy_r_r45 = CPyStatics[4198]; /* '__gt__' */
    cpy_r_r46 = CPyStatics[4197]; /* '__ge__' */
    cpy_r_r47 = PySet_New(NULL);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 13, CPyStatic_functools___globals);
        goto CPyL45;
    }
    cpy_r_r48 = PySet_Add(cpy_r_r47, cpy_r_r43);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 13, CPyStatic_functools___globals);
        goto CPyL47;
    }
    cpy_r_r50 = PySet_Add(cpy_r_r47, cpy_r_r44);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 13, CPyStatic_functools___globals);
        goto CPyL47;
    }
    cpy_r_r52 = PySet_Add(cpy_r_r47, cpy_r_r45);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 13, CPyStatic_functools___globals);
        goto CPyL47;
    }
    cpy_r_r54 = PySet_Add(cpy_r_r47, cpy_r_r46);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 13, CPyStatic_functools___globals);
        goto CPyL47;
    }
    CPyStatic_functools____ORDERING_METHODS = cpy_r_r47;
    CPy_INCREF(CPyStatic_functools____ORDERING_METHODS);
    cpy_r_r56 = CPyStatic_functools___globals;
    cpy_r_r57 = CPyStatics[4626]; /* '_ORDERING_METHODS' */
    cpy_r_r58 = CPyDict_SetItem(cpy_r_r56, cpy_r_r57, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 13, CPyStatic_functools___globals);
        goto CPyL45;
    }
    cpy_r_r60 = CPyModule_typing;
    cpy_r_r61 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r62 = cpy_r_r60 != cpy_r_r61;
    if (cpy_r_r62) goto CPyL21;
    cpy_r_r63 = CPyStatics[21]; /* 'typing' */
    cpy_r_r64 = PyImport_Import(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals);
        goto CPyL45;
    }
    CPyModule_typing = cpy_r_r64;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r64);
CPyL21: ;
    cpy_r_r65 = PyImport_GetModuleDict();
    cpy_r_r66 = CPyStatics[21]; /* 'typing' */
    cpy_r_r67 = CPyDict_GetItem(cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals);
        goto CPyL45;
    }
    cpy_r_r68 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r69 = CPyObject_GetAttr(cpy_r_r67, cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals);
        goto CPyL45;
    }
    cpy_r_r70 = PyTuple_Pack(1, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals);
        goto CPyL45;
    }
    cpy_r_r71 = CPyModule_typing;
    cpy_r_r72 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r73 = cpy_r_r71 != cpy_r_r72;
    if (cpy_r_r73) goto CPyL27;
    cpy_r_r74 = CPyStatics[21]; /* 'typing' */
    cpy_r_r75 = PyImport_Import(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals);
        goto CPyL48;
    }
    CPyModule_typing = cpy_r_r75;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r75);
CPyL27: ;
    cpy_r_r76 = PyImport_GetModuleDict();
    cpy_r_r77 = CPyStatics[21]; /* 'typing' */
    cpy_r_r78 = CPyDict_GetItem(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals);
        goto CPyL48;
    }
    cpy_r_r79 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r80 = CPyObject_GetAttr(cpy_r_r78, cpy_r_r79);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals);
        goto CPyL48;
    }
    cpy_r_r81 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r82 = PyObject_HasAttr(cpy_r_r80, cpy_r_r81);
    if (!cpy_r_r82) goto CPyL34;
    cpy_r_r83 = CPyStatics[4622]; /* '_MethodInfo' */
    cpy_r_r84 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r85 = CPyObject_GetAttr(cpy_r_r80, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals);
        goto CPyL49;
    }
    PyObject *cpy_r_r86[2] = {cpy_r_r83, cpy_r_r70};
    cpy_r_r87 = (PyObject **)&cpy_r_r86;
    cpy_r_r88 = _PyObject_Vectorcall(cpy_r_r85, cpy_r_r87, 2, 0);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals);
        goto CPyL49;
    }
    if (likely(PyDict_Check(cpy_r_r88)))
        cpy_r_r89 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals, "dict", cpy_r_r88);
        goto CPyL49;
    }
    cpy_r_r90 = cpy_r_r89;
    goto CPyL36;
CPyL34: ;
    cpy_r_r91 = PyDict_New();
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals);
        goto CPyL49;
    }
    cpy_r_r90 = cpy_r_r91;
CPyL36: ;
    cpy_r_r92 = PyDict_New();
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals);
        goto CPyL50;
    }
    cpy_r_r93 = (PyObject *)&PyBool_Type;
    cpy_r_r94 = CPyStatics[4094]; /* 'is_static' */
    cpy_r_r95 = CPyDict_SetItem(cpy_r_r92, cpy_r_r94, cpy_r_r93);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 17, CPyStatic_functools___globals);
        goto CPyL51;
    }
    cpy_r_r97 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r98 = CPyStatics[802]; /* 'type' */
    cpy_r_r99 = CPyDict_SetItem(cpy_r_r92, cpy_r_r98, cpy_r_r97);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 18, CPyStatic_functools___globals);
        goto CPyL51;
    }
    cpy_r_r101 = CPyStatics[4622]; /* '_MethodInfo' */
    cpy_r_r102 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r103 = CPyDict_SetItem(cpy_r_r90, cpy_r_r102, cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals);
        goto CPyL50;
    }
    cpy_r_r105 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r106 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r107 = CPyDict_SetItem(cpy_r_r90, cpy_r_r106, cpy_r_r105);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals);
        goto CPyL50;
    }
    cpy_r_r109 = CPyStatics[4600]; /* 'mypy.plugins.functools' */
    cpy_r_r110 = CPyStatics[619]; /* '__module__' */
    cpy_r_r111 = CPyDict_SetItem(cpy_r_r90, cpy_r_r110, cpy_r_r109);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals);
        goto CPyL50;
    }
    PyObject *cpy_r_r113[3] = {cpy_r_r101, cpy_r_r70, cpy_r_r90};
    cpy_r_r114 = (PyObject **)&cpy_r_r113;
    cpy_r_r115 = _PyObject_Vectorcall(cpy_r_r80, cpy_r_r114, 3, 0);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r90);
    CPyType_functools____MethodInfo = (PyTypeObject *)cpy_r_r115;
    CPy_INCREF(CPyType_functools____MethodInfo);
    cpy_r_r116 = CPyStatic_functools___globals;
    cpy_r_r117 = CPyStatics[4622]; /* '_MethodInfo' */
    cpy_r_r118 = CPyDict_SetItem(cpy_r_r116, cpy_r_r117, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r119 = cpy_r_r118 >= 0;
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("mypy/plugins/functools.py", "<module>", 16, CPyStatic_functools___globals);
        goto CPyL45;
    }
    cpy_r_r120 = (PyObject *)CPyType_functools____MethodInfo;
    return 1;
CPyL45: ;
    cpy_r_r121 = 2;
    return cpy_r_r121;
CPyL46: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL45;
CPyL47: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL45;
CPyL48: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL45;
CPyL49: ;
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r80);
    goto CPyL45;
CPyL50: ;
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r90);
    goto CPyL45;
CPyL51: ;
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_r92);
    goto CPyL45;
CPyL52: ;
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r90);
    goto CPyL45;
}
