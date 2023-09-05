#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *solve___solve_non_linear_env_setup(PyTypeObject *type);
PyObject *CPyDef_solve___solve_non_linear_env(void);

static PyObject *
solve___solve_non_linear_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_solve___solve_non_linear_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return solve___solve_non_linear_env_setup(type);
}

static int
solve___solve_non_linear_env_traverse(mypy___solve___solve_non_linear_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_vars);
    Py_VISIT(self->_constraints);
    Py_VISIT(self->_cmap);
    Py_VISIT(self->_extra_constraints);
    Py_VISIT(self->_tvar);
    Py_VISIT(self->_tv);
    Py_VISIT(self->_con);
    Py_VISIT(self->_dmap);
    Py_VISIT(self->_sccs);
    Py_VISIT(self->_scc);
    Py_VISIT(self->_raw_batches);
    Py_VISIT(self->_leafs);
    Py_VISIT(self->_free_vars);
    Py_VISIT(self->_c);
    return 0;
}

static int
solve___solve_non_linear_env_clear(mypy___solve___solve_non_linear_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_vars);
    Py_CLEAR(self->_constraints);
    Py_CLEAR(self->_cmap);
    Py_CLEAR(self->_extra_constraints);
    Py_CLEAR(self->_tvar);
    Py_CLEAR(self->_tv);
    Py_CLEAR(self->_con);
    Py_CLEAR(self->_dmap);
    Py_CLEAR(self->_sccs);
    Py_CLEAR(self->_scc);
    Py_CLEAR(self->_raw_batches);
    Py_CLEAR(self->_leafs);
    Py_CLEAR(self->_free_vars);
    Py_CLEAR(self->_c);
    return 0;
}

static void
solve___solve_non_linear_env_dealloc(mypy___solve___solve_non_linear_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, solve___solve_non_linear_env_dealloc)
    solve___solve_non_linear_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem solve___solve_non_linear_env_vtable[1];
static bool
CPyDef_solve___solve_non_linear_env_trait_vtable_setup(void)
{
    CPyVTableItem solve___solve_non_linear_env_vtable_scratch[] = {
        NULL
    };
    memcpy(solve___solve_non_linear_env_vtable, solve___solve_non_linear_env_vtable_scratch, sizeof(solve___solve_non_linear_env_vtable));
    return 1;
}

static PyMethodDef solve___solve_non_linear_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_solve___solve_non_linear_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "solve_non_linear_env",
    .tp_new = solve___solve_non_linear_env_new,
    .tp_dealloc = (destructor)solve___solve_non_linear_env_dealloc,
    .tp_traverse = (traverseproc)solve___solve_non_linear_env_traverse,
    .tp_clear = (inquiry)solve___solve_non_linear_env_clear,
    .tp_methods = solve___solve_non_linear_env_methods,
    .tp_basicsize = sizeof(mypy___solve___solve_non_linear_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_solve___solve_non_linear_env_template = &CPyType_solve___solve_non_linear_env_template_;

static PyObject *
solve___solve_non_linear_env_setup(PyTypeObject *type)
{
    mypy___solve___solve_non_linear_envObject *self;
    self = (mypy___solve___solve_non_linear_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = solve___solve_non_linear_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_solve___solve_non_linear_env(void)
{
    PyObject *self = solve___solve_non_linear_env_setup(CPyType_solve___solve_non_linear_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__solve_____mypyc_lambda__0_solve_non_linear_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_solve_____mypyc_lambda__0_solve_non_linear_obj_____get__(self, instance, owner);
}
PyMemberDef solve_____mypyc_lambda__0_solve_non_linear_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *solve_____mypyc_lambda__0_solve_non_linear_obj_setup(PyTypeObject *type);
PyObject *CPyDef_solve_____mypyc_lambda__0_solve_non_linear_obj(void);

static PyObject *
solve_____mypyc_lambda__0_solve_non_linear_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_solve_____mypyc_lambda__0_solve_non_linear_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return solve_____mypyc_lambda__0_solve_non_linear_obj_setup(type);
}

static int
solve_____mypyc_lambda__0_solve_non_linear_obj_traverse(mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject))));
    return 0;
}

static int
solve_____mypyc_lambda__0_solve_non_linear_obj_clear(mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject))));
    return 0;
}

static void
solve_____mypyc_lambda__0_solve_non_linear_obj_dealloc(mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, solve_____mypyc_lambda__0_solve_non_linear_obj_dealloc)
    solve_____mypyc_lambda__0_solve_non_linear_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem solve_____mypyc_lambda__0_solve_non_linear_obj_vtable[2];
static bool
CPyDef_solve_____mypyc_lambda__0_solve_non_linear_obj_trait_vtable_setup(void)
{
    CPyVTableItem solve_____mypyc_lambda__0_solve_non_linear_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_solve_____mypyc_lambda__0_solve_non_linear_obj_____call__,
        (CPyVTableItem)CPyDef_solve_____mypyc_lambda__0_solve_non_linear_obj_____get__,
    };
    memcpy(solve_____mypyc_lambda__0_solve_non_linear_obj_vtable, solve_____mypyc_lambda__0_solve_non_linear_obj_vtable_scratch, sizeof(solve_____mypyc_lambda__0_solve_non_linear_obj_vtable));
    return 1;
}

static PyMethodDef solve_____mypyc_lambda__0_solve_non_linear_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_solve_____mypyc_lambda__0_solve_non_linear_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_solve_____mypyc_lambda__0_solve_non_linear_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_solve_____mypyc_lambda__0_solve_non_linear_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_solve_non_linear_obj",
    .tp_new = solve_____mypyc_lambda__0_solve_non_linear_obj_new,
    .tp_dealloc = (destructor)solve_____mypyc_lambda__0_solve_non_linear_obj_dealloc,
    .tp_traverse = (traverseproc)solve_____mypyc_lambda__0_solve_non_linear_obj_traverse,
    .tp_clear = (inquiry)solve_____mypyc_lambda__0_solve_non_linear_obj_clear,
    .tp_methods = solve_____mypyc_lambda__0_solve_non_linear_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__solve_____mypyc_lambda__0_solve_non_linear_obj,
    .tp_members = solve_____mypyc_lambda__0_solve_non_linear_obj_members,
    .tp_basicsize = sizeof(mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject),
    .tp_weaklistoffset = sizeof(mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_solve_____mypyc_lambda__0_solve_non_linear_obj_template = &CPyType_solve_____mypyc_lambda__0_solve_non_linear_obj_template_;

static PyObject *
solve_____mypyc_lambda__0_solve_non_linear_obj_setup(PyTypeObject *type)
{
    mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject *self;
    self = (mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = solve_____mypyc_lambda__0_solve_non_linear_obj_vtable;
    self->vectorcall = CPyPy_solve_____mypyc_lambda__0_solve_non_linear_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_solve_____mypyc_lambda__0_solve_non_linear_obj(void)
{
    PyObject *self = solve_____mypyc_lambda__0_solve_non_linear_obj_setup(CPyType_solve_____mypyc_lambda__0_solve_non_linear_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef solvemodule_methods[] = {
    {"solve_constraints", (PyCFunction)CPyPy_solve___solve_constraints, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"solve_non_linear", (PyCFunction)CPyPy_solve___solve_non_linear, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"solve_iteratively", (PyCFunction)CPyPy_solve___solve_iteratively, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"solve_one", (PyCFunction)CPyPy_solve___solve_one, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"normalize_constraints", (PyCFunction)CPyPy_solve___normalize_constraints, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"propagate_constraints_for", (PyCFunction)CPyPy_solve___propagate_constraints_for, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transitive_closure", (PyCFunction)CPyPy_solve___transitive_closure, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"compute_dependencies", (PyCFunction)CPyPy_solve___compute_dependencies, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_linear", (PyCFunction)CPyPy_solve___check_linear, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_vars", (PyCFunction)CPyPy_solve___get_vars, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef solvemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.solve",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    solvemodule_methods
};

PyObject *CPyInit_mypy___solve(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___solve_internal) {
        Py_INCREF(CPyModule_mypy___solve_internal);
        return CPyModule_mypy___solve_internal;
    }
    CPyModule_mypy___solve_internal = PyModule_Create(&solvemodule);
    if (unlikely(CPyModule_mypy___solve_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___solve_internal, "__name__");
    CPyStatic_solve___globals = PyModule_GetDict(CPyModule_mypy___solve_internal);
    if (unlikely(CPyStatic_solve___globals == NULL))
        goto fail;
    CPyType_solve___solve_non_linear_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_solve___solve_non_linear_env_template, NULL, modname);
    if (unlikely(!CPyType_solve___solve_non_linear_env))
        goto fail;
    CPyType_solve_____mypyc_lambda__0_solve_non_linear_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_solve_____mypyc_lambda__0_solve_non_linear_obj_template, NULL, modname);
    if (unlikely(!CPyType_solve_____mypyc_lambda__0_solve_non_linear_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_solve_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___solve_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___solve_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_solve___solve_non_linear_env);
    Py_CLEAR(CPyType_solve_____mypyc_lambda__0_solve_non_linear_obj);
    return NULL;
}

PyObject *CPyDef_solve___solve_constraints(PyObject *cpy_r_vars, PyObject *cpy_r_constraints, char cpy_r_strict, char cpy_r_allow_polymorphic) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
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
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_cmap;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_con;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_solutions;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    tuple_T4CIOO cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_tv_2;
    PyObject *cpy_r_cs;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyPtr cpy_r_r54;
    int64_t cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_c;
    CPyTagged cpy_r_r60;
    int64_t cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    CPyTagged cpy_r_r69;
    PyObject *cpy_r_lowers;
    PyObject *cpy_r_r70;
    CPyTagged cpy_r_r71;
    CPyPtr cpy_r_r72;
    int64_t cpy_r_r73;
    CPyTagged cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_c_2;
    CPyTagged cpy_r_r78;
    int64_t cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    CPyTagged cpy_r_r87;
    PyObject *cpy_r_uppers;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_res;
    CPyTagged cpy_r_r95;
    CPyPtr cpy_r_r96;
    int64_t cpy_r_r97;
    CPyTagged cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_v;
    int32_t cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    CPyTagged cpy_r_r110;
    CPyTagged cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_candidate;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    CPyTagged cpy_r_r117;
    CPyTagged cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    CPyTagged cpy_r_r123;
    PyObject *cpy_r_r124;
    if (cpy_r_strict != 2) goto CPyL2;
    cpy_r_strict = 1;
CPyL2: ;
    if (cpy_r_allow_polymorphic != 2) goto CPyL4;
    cpy_r_allow_polymorphic = 0;
CPyL4: ;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_vars)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = cpy_r_r2 != 0;
    if (cpy_r_r3) goto CPyL7;
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 45, CPyStatic_solve___globals);
        goto CPyL79;
    }
    return cpy_r_r4;
CPyL7: ;
    if (!cpy_r_allow_polymorphic) goto CPyL80;
    cpy_r_r5 = CPyDef_solve___normalize_constraints(cpy_r_constraints, cpy_r_vars);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 49, CPyStatic_solve___globals);
        goto CPyL79;
    }
    cpy_r_constraints = cpy_r_r5;
CPyL10: ;
    cpy_r_r6 = PyDict_New();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 52, CPyStatic_solve___globals);
        goto CPyL81;
    }
    cpy_r_r7 = 0;
CPyL12: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_vars)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL17;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_vars, cpy_r_r7);
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_types___TypeVarId))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_constraints", 52, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r12);
        goto CPyL82;
    }
    cpy_r_tv = cpy_r_r13;
    cpy_r_r14 = PyList_New(0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 52, CPyStatic_solve___globals);
        goto CPyL83;
    }
    cpy_r_r15 = CPyDict_SetItem(cpy_r_r6, cpy_r_tv, cpy_r_r14);
    CPy_DECREF(cpy_r_tv);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 52, CPyStatic_solve___globals);
        goto CPyL82;
    }
    cpy_r_r17 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r17;
    goto CPyL12;
CPyL17: ;
    cpy_r_cmap = cpy_r_r6;
    cpy_r_r18 = 0;
CPyL18: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_constraints)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL26;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_constraints, cpy_r_r18);
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_constraints___Constraint))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_constraints", 53, CPyStatic_solve___globals, "mypy.constraints.Constraint", cpy_r_r23);
        goto CPyL84;
    }
    cpy_r_con = cpy_r_r24;
    cpy_r_r25 = ((mypy___constraints___ConstraintObject *)cpy_r_con)->_type_var;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = PySequence_Contains(cpy_r_vars, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 54, CPyStatic_solve___globals);
        goto CPyL85;
    }
    cpy_r_r28 = cpy_r_r26;
    if (!cpy_r_r28) goto CPyL86;
    cpy_r_r29 = ((mypy___constraints___ConstraintObject *)cpy_r_con)->_type_var;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = CPyDict_GetItem(cpy_r_cmap, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 55, CPyStatic_solve___globals);
        goto CPyL85;
    }
    if (likely(PyList_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_constraints", 55, CPyStatic_solve___globals, "list", cpy_r_r30);
        goto CPyL85;
    }
    cpy_r_r32 = PyList_Append(cpy_r_r31, cpy_r_con);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_con);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 55, CPyStatic_solve___globals);
        goto CPyL84;
    }
CPyL25: ;
    cpy_r_r34 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r34;
    goto CPyL18;
CPyL26: ;
    if (!cpy_r_allow_polymorphic) goto CPyL87;
    cpy_r_r35 = CPyDef_solve___solve_non_linear(cpy_r_vars, cpy_r_constraints, cpy_r_cmap);
    CPy_DECREF(cpy_r_constraints);
    CPy_DECREF(cpy_r_cmap);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 58, CPyStatic_solve___globals);
        goto CPyL79;
    }
    cpy_r_solutions = cpy_r_r35;
    goto CPyL60;
CPyL29: ;
    cpy_r_r36 = PyDict_New();
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 60, CPyStatic_solve___globals);
        goto CPyL88;
    }
    cpy_r_solutions = cpy_r_r36;
    cpy_r_r37 = 0;
    cpy_r_r38 = PyDict_Size(cpy_r_cmap);
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = CPyDict_GetItemsIter(cpy_r_cmap);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 61, CPyStatic_solve___globals);
        goto CPyL89;
    }
CPyL31: ;
    cpy_r_r41 = CPyDict_NextItem(cpy_r_r40, cpy_r_r37);
    cpy_r_r42 = cpy_r_r41.f1;
    cpy_r_r37 = cpy_r_r42;
    cpy_r_r43 = cpy_r_r41.f0;
    if (!cpy_r_r43) goto CPyL90;
    cpy_r_r44 = cpy_r_r41.f2;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = cpy_r_r41.f3;
    CPy_INCREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r41.f2);
    CPy_DECREF(cpy_r_r41.f3);
    if (likely(Py_TYPE(cpy_r_r44) == CPyType_types___TypeVarId))
        cpy_r_r46 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_constraints", 61, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r44);
        goto CPyL91;
    }
    if (likely(PyList_Check(cpy_r_r45)))
        cpy_r_r47 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_constraints", 61, CPyStatic_solve___globals, "list", cpy_r_r45);
        goto CPyL92;
    }
    cpy_r_tv_2 = cpy_r_r46;
    cpy_r_cs = cpy_r_r47;
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_cs)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = cpy_r_r50 != 0;
    if (!cpy_r_r51) goto CPyL93;
    cpy_r_r52 = PyList_New(0);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 64, CPyStatic_solve___globals);
        goto CPyL94;
    }
    cpy_r_r53 = 0;
CPyL37: ;
    cpy_r_r54 = (CPyPtr)&((PyVarObject *)cpy_r_cs)->ob_size;
    cpy_r_r55 = *(int64_t *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 << 1;
    cpy_r_r57 = (Py_ssize_t)cpy_r_r53 < (Py_ssize_t)cpy_r_r56;
    if (!cpy_r_r57) goto CPyL45;
    cpy_r_r58 = CPyList_GetItemUnsafe(cpy_r_cs, cpy_r_r53);
    if (likely(Py_TYPE(cpy_r_r58) == CPyType_constraints___Constraint))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_constraints", 64, CPyStatic_solve___globals, "mypy.constraints.Constraint", cpy_r_r58);
        goto CPyL95;
    }
    cpy_r_c = cpy_r_r59;
    cpy_r_r60 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_op;
    cpy_r_r61 = cpy_r_r60 & 1;
    cpy_r_r62 = cpy_r_r61 == 0;
    if (!cpy_r_r62) goto CPyL41;
    cpy_r_r63 = cpy_r_r60 == 2;
    cpy_r_r64 = cpy_r_r63;
    goto CPyL42;
CPyL41: ;
    cpy_r_r65 = CPyTagged_IsEq_(cpy_r_r60, 2);
    cpy_r_r64 = cpy_r_r65;
CPyL42: ;
    if (!cpy_r_r64) goto CPyL96;
    cpy_r_r66 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    CPy_INCREF(cpy_r_r66);
    CPy_DECREF(cpy_r_c);
    cpy_r_r67 = PyList_Append(cpy_r_r52, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 64, CPyStatic_solve___globals);
        goto CPyL95;
    }
CPyL44: ;
    cpy_r_r69 = cpy_r_r53 + 2;
    cpy_r_r53 = cpy_r_r69;
    goto CPyL37;
CPyL45: ;
    cpy_r_lowers = cpy_r_r52;
    cpy_r_r70 = PyList_New(0);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 65, CPyStatic_solve___globals);
        goto CPyL97;
    }
    cpy_r_r71 = 0;
CPyL47: ;
    cpy_r_r72 = (CPyPtr)&((PyVarObject *)cpy_r_cs)->ob_size;
    cpy_r_r73 = *(int64_t *)cpy_r_r72;
    cpy_r_r74 = cpy_r_r73 << 1;
    cpy_r_r75 = (Py_ssize_t)cpy_r_r71 < (Py_ssize_t)cpy_r_r74;
    if (!cpy_r_r75) goto CPyL98;
    cpy_r_r76 = CPyList_GetItemUnsafe(cpy_r_cs, cpy_r_r71);
    if (likely(Py_TYPE(cpy_r_r76) == CPyType_constraints___Constraint))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_constraints", 65, CPyStatic_solve___globals, "mypy.constraints.Constraint", cpy_r_r76);
        goto CPyL99;
    }
    cpy_r_c_2 = cpy_r_r77;
    cpy_r_r78 = ((mypy___constraints___ConstraintObject *)cpy_r_c_2)->_op;
    cpy_r_r79 = cpy_r_r78 & 1;
    cpy_r_r80 = cpy_r_r79 == 0;
    if (!cpy_r_r80) goto CPyL51;
    cpy_r_r81 = cpy_r_r78 == 0;
    cpy_r_r82 = cpy_r_r81;
    goto CPyL52;
CPyL51: ;
    cpy_r_r83 = CPyTagged_IsEq_(cpy_r_r78, 0);
    cpy_r_r82 = cpy_r_r83;
CPyL52: ;
    if (!cpy_r_r82) goto CPyL100;
    cpy_r_r84 = ((mypy___constraints___ConstraintObject *)cpy_r_c_2)->_target;
    CPy_INCREF(cpy_r_r84);
    CPy_DECREF(cpy_r_c_2);
    cpy_r_r85 = PyList_Append(cpy_r_r70, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 65, CPyStatic_solve___globals);
        goto CPyL99;
    }
CPyL54: ;
    cpy_r_r87 = cpy_r_r71 + 2;
    cpy_r_r71 = cpy_r_r87;
    goto CPyL47;
CPyL55: ;
    cpy_r_uppers = cpy_r_r70;
    cpy_r_r88 = PyList_New(0);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 66, CPyStatic_solve___globals);
        goto CPyL101;
    }
    cpy_r_r89 = CPyDef_solve___solve_one(cpy_r_lowers, cpy_r_uppers, cpy_r_r88);
    CPy_DECREF(cpy_r_lowers);
    CPy_DECREF(cpy_r_uppers);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 66, CPyStatic_solve___globals);
        goto CPyL102;
    }
    cpy_r_r90 = CPyDict_SetItem(cpy_r_solutions, cpy_r_tv_2, cpy_r_r89);
    CPy_DECREF(cpy_r_tv_2);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 66, CPyStatic_solve___globals);
        goto CPyL103;
    }
CPyL58: ;
    cpy_r_r92 = CPyDict_CheckSize(cpy_r_cmap, cpy_r_r39);
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 61, CPyStatic_solve___globals);
        goto CPyL103;
    } else
        goto CPyL31;
CPyL59: ;
    cpy_r_r93 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 61, CPyStatic_solve___globals);
        goto CPyL104;
    }
CPyL60: ;
    cpy_r_r94 = PyList_New(0);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 68, CPyStatic_solve___globals);
        goto CPyL104;
    }
    cpy_r_res = cpy_r_r94;
    cpy_r_r95 = 0;
CPyL62: ;
    cpy_r_r96 = (CPyPtr)&((PyVarObject *)cpy_r_vars)->ob_size;
    cpy_r_r97 = *(int64_t *)cpy_r_r96;
    cpy_r_r98 = cpy_r_r97 << 1;
    cpy_r_r99 = (Py_ssize_t)cpy_r_r95 < (Py_ssize_t)cpy_r_r98;
    if (!cpy_r_r99) goto CPyL105;
    cpy_r_r100 = CPyList_GetItemUnsafe(cpy_r_vars, cpy_r_r95);
    if (likely(Py_TYPE(cpy_r_r100) == CPyType_types___TypeVarId))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_constraints", 69, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r100);
        goto CPyL106;
    }
    cpy_r_v = cpy_r_r101;
    cpy_r_r102 = PyDict_Contains(cpy_r_solutions, cpy_r_v);
    cpy_r_r103 = cpy_r_r102 >= 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 70, CPyStatic_solve___globals);
        goto CPyL107;
    }
    cpy_r_r104 = cpy_r_r102;
    if (!cpy_r_r104) goto CPyL108;
    cpy_r_r105 = CPyDict_GetItem(cpy_r_solutions, cpy_r_v);
    CPy_DECREF(cpy_r_v);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 71, CPyStatic_solve___globals);
        goto CPyL106;
    }
    if (PyObject_TypeCheck(cpy_r_r105, CPyType_types___Type))
        cpy_r_r106 = cpy_r_r105;
    else {
        cpy_r_r106 = NULL;
    }
    if (cpy_r_r106 != NULL) goto __LL6830;
    if (cpy_r_r105 == Py_None)
        cpy_r_r106 = cpy_r_r105;
    else {
        cpy_r_r106 = NULL;
    }
    if (cpy_r_r106 != NULL) goto __LL6830;
    CPy_TypeErrorTraceback("mypy/solve.py", "solve_constraints", 71, CPyStatic_solve___globals, "mypy.types.Type or None", cpy_r_r105);
    goto CPyL106;
__LL6830: ;
    cpy_r_r107 = PyList_Append(cpy_r_res, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 71, CPyStatic_solve___globals);
        goto CPyL106;
    } else
        goto CPyL77;
CPyL69: ;
    if (!cpy_r_strict) goto CPyL73;
    cpy_r_r109 = 2;
    cpy_r_r110 = CPY_INT_TAG;
    cpy_r_r111 = CPY_INT_TAG;
    cpy_r_r112 = CPyDef_types___UninhabitedType(cpy_r_r109, cpy_r_r110, cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 76, CPyStatic_solve___globals);
        goto CPyL106;
    }
    cpy_r_candidate = cpy_r_r112;
    if (likely(Py_TYPE(cpy_r_candidate) == CPyType_types___UninhabitedType))
        cpy_r_r113 = cpy_r_candidate;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_constraints", 77, CPyStatic_solve___globals, "mypy.types.UninhabitedType", cpy_r_candidate);
        goto CPyL109;
    }
    ((mypy___types___UninhabitedTypeObject *)cpy_r_r113)->_ambiguous = 1;
    goto CPyL75;
CPyL73: ;
    cpy_r_r115 = NULL;
    cpy_r_r116 = NULL;
    cpy_r_r117 = CPY_INT_TAG;
    cpy_r_r118 = CPY_INT_TAG;
    cpy_r_r119 = CPyDef_types___AnyType(12, cpy_r_r115, cpy_r_r116, cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 79, CPyStatic_solve___globals);
        goto CPyL106;
    }
    cpy_r_candidate = cpy_r_r119;
CPyL75: ;
    if (likely(PyObject_TypeCheck(cpy_r_candidate, CPyType_types___ProperType)))
        cpy_r_r120 = cpy_r_candidate;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_constraints", 80, CPyStatic_solve___globals, "mypy.types.ProperType", cpy_r_candidate);
        goto CPyL106;
    }
    cpy_r_r121 = PyList_Append(cpy_r_res, cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/solve.py", "solve_constraints", 80, CPyStatic_solve___globals);
        goto CPyL106;
    }
CPyL77: ;
    cpy_r_r123 = cpy_r_r95 + 2;
    cpy_r_r95 = cpy_r_r123;
    goto CPyL62;
CPyL78: ;
    return cpy_r_res;
CPyL79: ;
    cpy_r_r124 = NULL;
    return cpy_r_r124;
CPyL80: ;
    CPy_INCREF(cpy_r_constraints);
    goto CPyL10;
CPyL81: ;
    CPy_DecRef(cpy_r_constraints);
    goto CPyL79;
CPyL82: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_r6);
    goto CPyL79;
CPyL83: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_tv);
    goto CPyL79;
CPyL84: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_cmap);
    goto CPyL79;
CPyL85: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_con);
    goto CPyL79;
CPyL86: ;
    CPy_DECREF(cpy_r_con);
    goto CPyL25;
CPyL87: ;
    CPy_DECREF(cpy_r_constraints);
    goto CPyL29;
CPyL88: ;
    CPy_DecRef(cpy_r_cmap);
    goto CPyL79;
CPyL89: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_solutions);
    goto CPyL79;
CPyL90: ;
    CPy_DECREF(cpy_r_cmap);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r41.f2);
    CPy_DECREF(cpy_r_r41.f3);
    goto CPyL59;
CPyL91: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r45);
    goto CPyL79;
CPyL92: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r46);
    goto CPyL79;
CPyL93: ;
    CPy_DECREF(cpy_r_tv_2);
    CPy_DECREF(cpy_r_cs);
    goto CPyL58;
CPyL94: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_tv_2);
    CPy_DecRef(cpy_r_cs);
    goto CPyL79;
CPyL95: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_tv_2);
    CPy_DecRef(cpy_r_cs);
    CPy_DecRef(cpy_r_r52);
    goto CPyL79;
CPyL96: ;
    CPy_DECREF(cpy_r_c);
    goto CPyL44;
CPyL97: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_tv_2);
    CPy_DecRef(cpy_r_cs);
    CPy_DecRef(cpy_r_lowers);
    goto CPyL79;
CPyL98: ;
    CPy_DECREF(cpy_r_cs);
    goto CPyL55;
CPyL99: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_tv_2);
    CPy_DecRef(cpy_r_cs);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_r70);
    goto CPyL79;
CPyL100: ;
    CPy_DECREF(cpy_r_c_2);
    goto CPyL54;
CPyL101: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_tv_2);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    goto CPyL79;
CPyL102: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_tv_2);
    goto CPyL79;
CPyL103: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_r40);
    goto CPyL79;
CPyL104: ;
    CPy_DecRef(cpy_r_solutions);
    goto CPyL79;
CPyL105: ;
    CPy_DECREF(cpy_r_solutions);
    goto CPyL78;
CPyL106: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_res);
    goto CPyL79;
CPyL107: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_v);
    goto CPyL79;
CPyL108: ;
    CPy_DECREF(cpy_r_v);
    goto CPyL69;
CPyL109: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_candidate);
    goto CPyL79;
}

PyObject *CPyPy_solve___solve_constraints(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"vars", "constraints", "strict", "allow_polymorphic", 0};
    static CPyArg_Parser parser = {"OO|OO:solve_constraints", kwlist, 0};
    PyObject *obj_vars;
    PyObject *obj_constraints;
    PyObject *obj_strict = NULL;
    PyObject *obj_allow_polymorphic = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_vars, &obj_constraints, &obj_strict, &obj_allow_polymorphic)) {
        return NULL;
    }
    PyObject *arg_vars;
    if (likely(PyList_Check(obj_vars)))
        arg_vars = obj_vars;
    else {
        CPy_TypeError("list", obj_vars); 
        goto fail;
    }
    PyObject *arg_constraints;
    if (likely(PyList_Check(obj_constraints)))
        arg_constraints = obj_constraints;
    else {
        CPy_TypeError("list", obj_constraints); 
        goto fail;
    }
    char arg_strict;
    if (obj_strict == NULL) {
        arg_strict = 2;
    } else if (unlikely(!PyBool_Check(obj_strict))) {
        CPy_TypeError("bool", obj_strict); goto fail;
    } else
        arg_strict = obj_strict == Py_True;
    char arg_allow_polymorphic;
    if (obj_allow_polymorphic == NULL) {
        arg_allow_polymorphic = 2;
    } else if (unlikely(!PyBool_Check(obj_allow_polymorphic))) {
        CPy_TypeError("bool", obj_allow_polymorphic); goto fail;
    } else
        arg_allow_polymorphic = obj_allow_polymorphic == Py_True;
    PyObject *retval = CPyDef_solve___solve_constraints(arg_vars, arg_constraints, arg_strict, arg_allow_polymorphic);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/solve.py", "solve_constraints", 29, CPyStatic_solve___globals);
    return NULL;
}

PyObject *CPyDef_solve_____mypyc_lambda__0_solve_non_linear_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_solve_____mypyc_lambda__0_solve_non_linear_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_solve_____mypyc_lambda__0_solve_non_linear_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/solve.py", "__get__", -1, CPyStatic_solve___globals);
    return NULL;
}

CPyTagged CPyDef_solve_____mypyc_lambda__0_solve_non_linear_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_x) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    cpy_r_r0 = ((mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/solve.py", "<lambda>", "__mypyc_lambda__0_solve_non_linear_obj", "__mypyc_env__", 128, CPyStatic_solve___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL3;
CPyL1: ;
    cpy_r_r1 = ((mypy___types___TypeVarIdObject *)cpy_r_x)->_raw_id;
    CPyTagged_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = CPY_INT_TAG;
    return cpy_r_r2;
CPyL3: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_solve_____mypyc_lambda__0_solve_non_linear_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"x", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_x;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_x)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_x;
    if (likely(Py_TYPE(obj_x) == CPyType_types___TypeVarId))
        arg_x = obj_x;
    else {
        CPy_TypeError("mypy.types.TypeVarId", obj_x); 
        goto fail;
    }
    CPyTagged retval = CPyDef_solve_____mypyc_lambda__0_solve_non_linear_obj_____call__(arg___mypyc_self__, arg_x);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/solve.py", "<lambda>", 128, CPyStatic_solve___globals);
    return NULL;
}

PyObject *CPyDef_solve___solve_non_linear(PyObject *cpy_r_vars, PyObject *cpy_r_constraints, PyObject *cpy_r_cmap) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_extra_constraints;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_tvar;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_con;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_dmap;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_sccs;
    char cpy_r_r50;
    CPyTagged cpy_r_r51;
    CPyPtr cpy_r_r52;
    int64_t cpy_r_r53;
    CPyTagged cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_scc;
    char cpy_r_r58;
    char cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_raw_batches;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_leafs;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_free_vars;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_scc_2;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_tv_2;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyTagged cpy_r_r75;
    CPyPtr cpy_r_r76;
    int64_t cpy_r_r77;
    CPyTagged cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    CPyPtr cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    CPyTagged cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    int32_t cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_batches;
    CPyTagged cpy_r_r113;
    CPyPtr cpy_r_r114;
    int64_t cpy_r_r115;
    CPyTagged cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_batch;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_next_bc;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    int32_t cpy_r_r126;
    char cpy_r_r127;
    CPyTagged cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_solutions;
    CPyTagged cpy_r_r130;
    CPyPtr cpy_r_r131;
    int64_t cpy_r_r132;
    CPyTagged cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_flat_batch;
    PyObject *cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    CPyTagged cpy_r_r140;
    CPyTagged cpy_r_r141;
    CPyPtr cpy_r_r142;
    int64_t cpy_r_r143;
    CPyTagged cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_tv_3;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    char cpy_r_r150;
    int32_t cpy_r_r151;
    char cpy_r_r152;
    CPyTagged cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    cpy_r_r0 = CPyDef_solve___solve_non_linear_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 84, CPyStatic_solve___globals);
        goto CPyL105;
    }
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 96, CPyStatic_solve___globals);
        goto CPyL106;
    }
    cpy_r_extra_constraints = cpy_r_r1;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_vars)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL10;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_vars, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_types___TypeVarId))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_non_linear", 97, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r7);
        goto CPyL107;
    }
    cpy_r_tvar = cpy_r_r8;
    cpy_r_r9 = CPyDef_solve___propagate_constraints_for(cpy_r_tvar, 0, cpy_r_cmap);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 98, CPyStatic_solve___globals);
        goto CPyL108;
    }
    cpy_r_r10 = CPyList_Extend(cpy_r_extra_constraints, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 98, CPyStatic_solve___globals);
        goto CPyL108;
    } else
        goto CPyL109;
CPyL7: ;
    cpy_r_r11 = CPyDef_solve___propagate_constraints_for(cpy_r_tvar, 2, cpy_r_cmap);
    CPy_DECREF(cpy_r_tvar);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 99, CPyStatic_solve___globals);
        goto CPyL107;
    }
    cpy_r_r12 = CPyList_Extend(cpy_r_extra_constraints, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 99, CPyStatic_solve___globals);
        goto CPyL107;
    } else
        goto CPyL110;
CPyL9: ;
    cpy_r_r13 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r13;
    goto CPyL3;
CPyL10: ;
    cpy_r_r14 = CPyDef_types___remove_dups(cpy_r_extra_constraints);
    CPy_DECREF(cpy_r_extra_constraints);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 100, CPyStatic_solve___globals);
        goto CPyL106;
    }
    cpy_r_r15 = PyNumber_InPlaceAdd(cpy_r_constraints, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 100, CPyStatic_solve___globals);
        goto CPyL106;
    }
    if (likely(PyList_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_non_linear", 100, CPyStatic_solve___globals, "list", cpy_r_r15);
        goto CPyL106;
    }
    cpy_r_constraints = cpy_r_r16;
    cpy_r_r17 = PyDict_New();
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 103, CPyStatic_solve___globals);
        goto CPyL111;
    }
    cpy_r_r18 = 0;
CPyL15: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_vars)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL20;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_vars, cpy_r_r18);
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_types___TypeVarId))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_non_linear", 103, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r23);
        goto CPyL112;
    }
    cpy_r_tv = cpy_r_r24;
    cpy_r_r25 = PyList_New(0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 103, CPyStatic_solve___globals);
        goto CPyL113;
    }
    cpy_r_r26 = CPyDict_SetItem(cpy_r_r17, cpy_r_tv, cpy_r_r25);
    CPy_DECREF(cpy_r_tv);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 103, CPyStatic_solve___globals);
        goto CPyL112;
    }
    cpy_r_r28 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r28;
    goto CPyL15;
CPyL20: ;
    cpy_r_cmap = cpy_r_r17;
    cpy_r_r29 = 0;
CPyL21: ;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_constraints)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r29 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL114;
    cpy_r_r34 = CPyList_GetItemUnsafe(cpy_r_constraints, cpy_r_r29);
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_constraints___Constraint))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_non_linear", 104, CPyStatic_solve___globals, "mypy.constraints.Constraint", cpy_r_r34);
        goto CPyL115;
    }
    cpy_r_con = cpy_r_r35;
    cpy_r_r36 = ((mypy___constraints___ConstraintObject *)cpy_r_con)->_type_var;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = PySequence_Contains(cpy_r_vars, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 105, CPyStatic_solve___globals);
        goto CPyL116;
    }
    cpy_r_r39 = cpy_r_r37;
    if (!cpy_r_r39) goto CPyL117;
    cpy_r_r40 = ((mypy___constraints___ConstraintObject *)cpy_r_con)->_type_var;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = CPyDict_GetItem(cpy_r_cmap, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 106, CPyStatic_solve___globals);
        goto CPyL116;
    }
    if (likely(PyList_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_non_linear", 106, CPyStatic_solve___globals, "list", cpy_r_r41);
        goto CPyL116;
    }
    cpy_r_r43 = PyList_Append(cpy_r_r42, cpy_r_con);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_con);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 106, CPyStatic_solve___globals);
        goto CPyL115;
    }
CPyL28: ;
    cpy_r_r45 = cpy_r_r29 + 2;
    cpy_r_r29 = cpy_r_r45;
    goto CPyL21;
CPyL29: ;
    cpy_r_r46 = CPyDef_solve___compute_dependencies(cpy_r_cmap);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 108, CPyStatic_solve___globals);
        goto CPyL118;
    }
    cpy_r_dmap = cpy_r_r46;
    cpy_r_r47 = PySet_New(cpy_r_vars);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 109, CPyStatic_solve___globals);
        goto CPyL119;
    }
    cpy_r_r48 = CPyDef_graph_utils___strongly_connected_components(cpy_r_r47, cpy_r_dmap);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 109, CPyStatic_solve___globals);
        goto CPyL119;
    }
    cpy_r_r49 = PySequence_List(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 109, CPyStatic_solve___globals);
        goto CPyL119;
    }
    cpy_r_sccs = cpy_r_r49;
    cpy_r_r50 = 1;
    cpy_r_r51 = 0;
CPyL34: ;
    cpy_r_r52 = (CPyPtr)&((PyVarObject *)cpy_r_sccs)->ob_size;
    cpy_r_r53 = *(int64_t *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 << 1;
    cpy_r_r55 = (Py_ssize_t)cpy_r_r51 < (Py_ssize_t)cpy_r_r54;
    if (!cpy_r_r55) goto CPyL40;
    cpy_r_r56 = CPyList_GetItemUnsafe(cpy_r_sccs, cpy_r_r51);
    if (likely(PySet_Check(cpy_r_r56)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_non_linear", 110, CPyStatic_solve___globals, "set", cpy_r_r56);
        goto CPyL120;
    }
    cpy_r_scc = cpy_r_r57;
    cpy_r_r58 = CPyDef_solve___check_linear(cpy_r_scc, cpy_r_cmap);
    CPy_DECREF(cpy_r_scc);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 110, CPyStatic_solve___globals);
        goto CPyL120;
    }
    cpy_r_r59 = cpy_r_r58 ^ 1;
    if (!cpy_r_r59) goto CPyL39;
    cpy_r_r50 = 0;
    goto CPyL40;
CPyL39: ;
    cpy_r_r60 = cpy_r_r51 + 2;
    cpy_r_r51 = cpy_r_r60;
    goto CPyL34;
CPyL40: ;
    if (!cpy_r_r50) goto CPyL121;
    cpy_r_r61 = CPyDef_graph_utils___prepare_sccs(cpy_r_sccs, cpy_r_dmap);
    CPy_DECREF(cpy_r_sccs);
    CPy_DECREF(cpy_r_dmap);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 111, CPyStatic_solve___globals);
        goto CPyL118;
    }
    cpy_r_r62 = CPyDef_graph_utils___topsort(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 111, CPyStatic_solve___globals);
        goto CPyL118;
    }
    cpy_r_r63 = PySequence_List(cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 111, CPyStatic_solve___globals);
        goto CPyL118;
    }
    cpy_r_raw_batches = cpy_r_r63;
    cpy_r_r64 = CPyList_GetItemShort(cpy_r_raw_batches, 0);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 112, CPyStatic_solve___globals);
        goto CPyL122;
    }
    if (likely(PySet_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_non_linear", 112, CPyStatic_solve___globals, "set", cpy_r_r64);
        goto CPyL122;
    }
    cpy_r_leafs = cpy_r_r65;
    cpy_r_r66 = PyList_New(0);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 113, CPyStatic_solve___globals);
        goto CPyL123;
    }
    cpy_r_free_vars = cpy_r_r66;
    cpy_r_r67 = PyObject_GetIter(cpy_r_leafs);
    CPy_DECREF(cpy_r_leafs);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 114, CPyStatic_solve___globals);
        goto CPyL124;
    }
CPyL48: ;
    cpy_r_r68 = PyIter_Next(cpy_r_r67);
    if (cpy_r_r68 == NULL) goto CPyL125;
    cpy_r_scc_2 = cpy_r_r68;
    cpy_r_r69 = 1;
    cpy_r_r70 = PyObject_GetIter(cpy_r_scc_2);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 119, CPyStatic_solve___globals);
        goto CPyL126;
    }
CPyL50: ;
    cpy_r_r71 = PyIter_Next(cpy_r_r70);
    if (cpy_r_r71 == NULL) goto CPyL127;
    if (likely(Py_TYPE(cpy_r_r71) == CPyType_types___TypeVarId))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_non_linear", 119, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r71);
        goto CPyL128;
    }
    cpy_r_tv_2 = cpy_r_r72;
    cpy_r_r73 = CPyDict_GetItem(cpy_r_cmap, cpy_r_tv_2);
    CPy_DECREF(cpy_r_tv_2);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 122, CPyStatic_solve___globals);
        goto CPyL128;
    }
    if (likely(PyList_Check(cpy_r_r73)))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_non_linear", 122, CPyStatic_solve___globals, "list", cpy_r_r73);
        goto CPyL128;
    }
    cpy_r_r75 = 0;
CPyL55: ;
    cpy_r_r76 = (CPyPtr)&((PyVarObject *)cpy_r_r74)->ob_size;
    cpy_r_r77 = *(int64_t *)cpy_r_r76;
    cpy_r_r78 = cpy_r_r77 << 1;
    cpy_r_r79 = (Py_ssize_t)cpy_r_r75 < (Py_ssize_t)cpy_r_r78;
    if (!cpy_r_r79) goto CPyL129;
    cpy_r_r80 = CPyList_GetItemUnsafe(cpy_r_r74, cpy_r_r75);
    if (likely(Py_TYPE(cpy_r_r80) == CPyType_constraints___Constraint))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_non_linear", 119, CPyStatic_solve___globals, "mypy.constraints.Constraint", cpy_r_r80);
        goto CPyL130;
    }
    cpy_r_c = cpy_r_r81;
    cpy_r_r82 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    cpy_r_r83 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r84 = (CPyPtr)&((PyObject *)cpy_r_r82)->ob_type;
    cpy_r_r85 = *(PyObject * *)cpy_r_r84;
    cpy_r_r86 = cpy_r_r85 == cpy_r_r83;
    if (cpy_r_r86) {
        goto CPyL59;
    } else
        goto CPyL131;
CPyL58: ;
    cpy_r_r87 = cpy_r_r86;
    goto CPyL62;
CPyL59: ;
    cpy_r_r88 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    if (likely(Py_TYPE(cpy_r_r88) == CPyType_types___TypeVarType))
        cpy_r_r89 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_non_linear", 120, CPyStatic_solve___globals, "mypy.types.TypeVarType", cpy_r_r88);
        goto CPyL132;
    }
    cpy_r_r90 = ((mypy___types___TypeVarTypeObject *)cpy_r_r89)->_id;
    CPy_INCREF(cpy_r_r90);
    CPy_DECREF(cpy_r_c);
    cpy_r_r91 = PySequence_Contains(cpy_r_vars, cpy_r_r90);
    CPy_DECREF(cpy_r_r90);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 120, CPyStatic_solve___globals);
        goto CPyL130;
    }
    cpy_r_r93 = cpy_r_r91;
    cpy_r_r87 = cpy_r_r93;
CPyL62: ;
    cpy_r_r94 = cpy_r_r87 ^ 1;
    if (cpy_r_r94) {
        goto CPyL133;
    } else
        goto CPyL64;
CPyL63: ;
    cpy_r_r69 = 0;
    goto CPyL66;
CPyL64: ;
    cpy_r_r95 = cpy_r_r75 + 2;
    cpy_r_r75 = cpy_r_r95;
    goto CPyL55;
CPyL65: ;
    cpy_r_r96 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 119, CPyStatic_solve___globals);
        goto CPyL126;
    }
CPyL66: ;
    if (!cpy_r_r69) goto CPyL134;
    cpy_r_r97 = CPyDef_solve_____mypyc_lambda__0_solve_non_linear_obj();
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 128, CPyStatic_solve___globals);
        goto CPyL126;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject *)cpy_r_r97)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject *)cpy_r_r97)->___mypyc_env__);
    }
    ((mypy___solve_____mypyc_lambda__0_solve_non_linear_objObject *)cpy_r_r97)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r98 = 1;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 128, CPyStatic_solve___globals);
        goto CPyL135;
    }
    cpy_r_r99 = CPyModule_builtins;
    cpy_r_r100 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r101 = CPyObject_GetAttr(cpy_r_r99, cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 128, CPyStatic_solve___globals);
        goto CPyL135;
    }
    PyObject *cpy_r_r102[2] = {cpy_r_scc_2, cpy_r_r97};
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r105 = _PyObject_Vectorcall(cpy_r_r101, cpy_r_r103, 1, cpy_r_r104);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 128, CPyStatic_solve___globals);
        goto CPyL135;
    }
    CPy_DECREF(cpy_r_scc_2);
    CPy_DECREF(cpy_r_r97);
    if (likely(PyList_Check(cpy_r_r105)))
        cpy_r_r106 = cpy_r_r105;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_non_linear", 128, CPyStatic_solve___globals, "list", cpy_r_r105);
        goto CPyL136;
    }
    cpy_r_r107 = CPyList_GetItemShort(cpy_r_r106, 0);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 128, CPyStatic_solve___globals);
        goto CPyL136;
    }
    if (likely(Py_TYPE(cpy_r_r107) == CPyType_types___TypeVarId))
        cpy_r_r108 = cpy_r_r107;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_non_linear", 128, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r107);
        goto CPyL136;
    }
    CPy_DECREF(cpy_r_r105);
    cpy_r_r109 = PyList_Append(cpy_r_free_vars, cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    cpy_r_r110 = cpy_r_r109 >= 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 128, CPyStatic_solve___globals);
        goto CPyL137;
    } else
        goto CPyL48;
CPyL75: ;
    cpy_r_r111 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 114, CPyStatic_solve___globals);
        goto CPyL138;
    }
    cpy_r_r112 = PyList_New(0);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 132, CPyStatic_solve___globals);
        goto CPyL138;
    }
    cpy_r_batches = cpy_r_r112;
    cpy_r_r113 = 0;
CPyL78: ;
    cpy_r_r114 = (CPyPtr)&((PyVarObject *)cpy_r_raw_batches)->ob_size;
    cpy_r_r115 = *(int64_t *)cpy_r_r114;
    cpy_r_r116 = cpy_r_r115 << 1;
    cpy_r_r117 = (Py_ssize_t)cpy_r_r113 < (Py_ssize_t)cpy_r_r116;
    if (!cpy_r_r117) goto CPyL139;
    cpy_r_r118 = CPyList_GetItemUnsafe(cpy_r_raw_batches, cpy_r_r113);
    if (likely(PySet_Check(cpy_r_r118)))
        cpy_r_r119 = cpy_r_r118;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_non_linear", 133, CPyStatic_solve___globals, "set", cpy_r_r118);
        goto CPyL140;
    }
    cpy_r_batch = cpy_r_r119;
    cpy_r_r120 = PyList_New(0);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 134, CPyStatic_solve___globals);
        goto CPyL141;
    }
    cpy_r_next_bc = cpy_r_r120;
    cpy_r_r121 = PyObject_GetIter(cpy_r_batch);
    CPy_DECREF(cpy_r_batch);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 135, CPyStatic_solve___globals);
        goto CPyL142;
    }
CPyL82: ;
    cpy_r_r122 = PyIter_Next(cpy_r_r121);
    if (cpy_r_r122 == NULL) goto CPyL143;
    cpy_r_scc_2 = cpy_r_r122;
    cpy_r_r123 = PySequence_List(cpy_r_scc_2);
    CPy_DECREF(cpy_r_scc_2);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 136, CPyStatic_solve___globals);
        goto CPyL144;
    }
    cpy_r_r124 = CPyList_Extend(cpy_r_next_bc, cpy_r_r123);
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 136, CPyStatic_solve___globals);
        goto CPyL144;
    } else
        goto CPyL145;
CPyL85: ;
    cpy_r_r125 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 135, CPyStatic_solve___globals);
        goto CPyL142;
    }
    cpy_r_r126 = PyList_Append(cpy_r_batches, cpy_r_next_bc);
    CPy_DECREF(cpy_r_next_bc);
    cpy_r_r127 = cpy_r_r126 >= 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 137, CPyStatic_solve___globals);
        goto CPyL140;
    }
    cpy_r_r128 = cpy_r_r113 + 2;
    cpy_r_r113 = cpy_r_r128;
    goto CPyL78;
CPyL88: ;
    cpy_r_r129 = PyDict_New();
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 139, CPyStatic_solve___globals);
        goto CPyL146;
    }
    cpy_r_solutions = cpy_r_r129;
    cpy_r_r130 = 0;
CPyL90: ;
    cpy_r_r131 = (CPyPtr)&((PyVarObject *)cpy_r_batches)->ob_size;
    cpy_r_r132 = *(int64_t *)cpy_r_r131;
    cpy_r_r133 = cpy_r_r132 << 1;
    cpy_r_r134 = (Py_ssize_t)cpy_r_r130 < (Py_ssize_t)cpy_r_r133;
    if (!cpy_r_r134) goto CPyL147;
    cpy_r_r135 = CPyList_GetItemUnsafe(cpy_r_batches, cpy_r_r130);
    if (likely(PyList_Check(cpy_r_r135)))
        cpy_r_r136 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_non_linear", 140, CPyStatic_solve___globals, "list", cpy_r_r135);
        goto CPyL148;
    }
    cpy_r_flat_batch = cpy_r_r136;
    cpy_r_r137 = CPyDef_solve___solve_iteratively(cpy_r_flat_batch, cpy_r_cmap, cpy_r_free_vars);
    CPy_DECREF(cpy_r_flat_batch);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 141, CPyStatic_solve___globals);
        goto CPyL148;
    }
    cpy_r_r138 = CPyDict_Update(cpy_r_solutions, cpy_r_r137);
    CPy_DECREF(cpy_r_r137);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 141, CPyStatic_solve___globals);
        goto CPyL148;
    }
    cpy_r_r140 = cpy_r_r130 + 2;
    cpy_r_r130 = cpy_r_r140;
    goto CPyL90;
CPyL95: ;
    cpy_r_r141 = 0;
CPyL96: ;
    cpy_r_r142 = (CPyPtr)&((PyVarObject *)cpy_r_free_vars)->ob_size;
    cpy_r_r143 = *(int64_t *)cpy_r_r142;
    cpy_r_r144 = cpy_r_r143 << 1;
    cpy_r_r145 = (Py_ssize_t)cpy_r_r141 < (Py_ssize_t)cpy_r_r144;
    if (!cpy_r_r145) goto CPyL149;
    cpy_r_r146 = CPyList_GetItemUnsafe(cpy_r_free_vars, cpy_r_r141);
    if (likely(Py_TYPE(cpy_r_r146) == CPyType_types___TypeVarId))
        cpy_r_r147 = cpy_r_r146;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_non_linear", 146, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r146);
        goto CPyL150;
    }
    cpy_r_tv_3 = cpy_r_r147;
    cpy_r_r148 = PyDict_Contains(cpy_r_solutions, cpy_r_tv_3);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 147, CPyStatic_solve___globals);
        goto CPyL151;
    }
    cpy_r_r150 = cpy_r_r148;
    if (!cpy_r_r150) goto CPyL152;
    cpy_r_r151 = PyObject_DelItem(cpy_r_solutions, cpy_r_tv_3);
    CPy_DECREF(cpy_r_tv_3);
    cpy_r_r152 = cpy_r_r151 >= 0;
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 148, CPyStatic_solve___globals);
        goto CPyL150;
    }
CPyL101: ;
    cpy_r_r153 = cpy_r_r141 + 2;
    cpy_r_r141 = cpy_r_r153;
    goto CPyL96;
CPyL102: ;
    return cpy_r_solutions;
CPyL103: ;
    cpy_r_r154 = PyDict_New();
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 150, CPyStatic_solve___globals);
        goto CPyL105;
    }
    return cpy_r_r154;
CPyL105: ;
    cpy_r_r155 = NULL;
    return cpy_r_r155;
CPyL106: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL105;
CPyL107: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_extra_constraints);
    goto CPyL105;
CPyL108: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_extra_constraints);
    CPy_DecRef(cpy_r_tvar);
    goto CPyL105;
CPyL109: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL7;
CPyL110: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL9;
CPyL111: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_r0);
    goto CPyL105;
CPyL112: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r17);
    goto CPyL105;
CPyL113: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_tv);
    goto CPyL105;
CPyL114: ;
    CPy_DECREF(cpy_r_constraints);
    goto CPyL29;
CPyL115: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_r0);
    goto CPyL105;
CPyL116: ;
    CPy_DecRef(cpy_r_constraints);
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_con);
    goto CPyL105;
CPyL117: ;
    CPy_DECREF(cpy_r_con);
    goto CPyL28;
CPyL118: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_r0);
    goto CPyL105;
CPyL119: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_dmap);
    goto CPyL105;
CPyL120: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_dmap);
    CPy_DecRef(cpy_r_sccs);
    goto CPyL105;
CPyL121: ;
    CPy_DECREF(cpy_r_cmap);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_dmap);
    CPy_DECREF(cpy_r_sccs);
    goto CPyL103;
CPyL122: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_raw_batches);
    goto CPyL105;
CPyL123: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_raw_batches);
    CPy_DecRef(cpy_r_leafs);
    goto CPyL105;
CPyL124: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_raw_batches);
    CPy_DecRef(cpy_r_free_vars);
    goto CPyL105;
CPyL125: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r67);
    goto CPyL75;
CPyL126: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_raw_batches);
    CPy_DecRef(cpy_r_free_vars);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_scc_2);
    goto CPyL105;
CPyL127: ;
    CPy_DECREF(cpy_r_r70);
    goto CPyL65;
CPyL128: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_raw_batches);
    CPy_DecRef(cpy_r_free_vars);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_scc_2);
    CPy_DecRef(cpy_r_r70);
    goto CPyL105;
CPyL129: ;
    CPy_DECREF(cpy_r_r74);
    goto CPyL50;
CPyL130: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_raw_batches);
    CPy_DecRef(cpy_r_free_vars);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_scc_2);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r74);
    goto CPyL105;
CPyL131: ;
    CPy_DECREF(cpy_r_c);
    goto CPyL58;
CPyL132: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_raw_batches);
    CPy_DecRef(cpy_r_free_vars);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_scc_2);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_c);
    goto CPyL105;
CPyL133: ;
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r74);
    goto CPyL63;
CPyL134: ;
    CPy_DECREF(cpy_r_scc_2);
    goto CPyL48;
CPyL135: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_raw_batches);
    CPy_DecRef(cpy_r_free_vars);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_scc_2);
    CPy_DecRef(cpy_r_r97);
    goto CPyL105;
CPyL136: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_raw_batches);
    CPy_DecRef(cpy_r_free_vars);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r105);
    goto CPyL105;
CPyL137: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_raw_batches);
    CPy_DecRef(cpy_r_free_vars);
    CPy_DecRef(cpy_r_r67);
    goto CPyL105;
CPyL138: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_raw_batches);
    CPy_DecRef(cpy_r_free_vars);
    goto CPyL105;
CPyL139: ;
    CPy_DECREF(cpy_r_raw_batches);
    goto CPyL88;
CPyL140: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_raw_batches);
    CPy_DecRef(cpy_r_free_vars);
    CPy_DecRef(cpy_r_batches);
    goto CPyL105;
CPyL141: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_raw_batches);
    CPy_DecRef(cpy_r_free_vars);
    CPy_DecRef(cpy_r_batches);
    CPy_DecRef(cpy_r_batch);
    goto CPyL105;
CPyL142: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_raw_batches);
    CPy_DecRef(cpy_r_free_vars);
    CPy_DecRef(cpy_r_batches);
    CPy_DecRef(cpy_r_next_bc);
    goto CPyL105;
CPyL143: ;
    CPy_DECREF(cpy_r_r121);
    goto CPyL85;
CPyL144: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_raw_batches);
    CPy_DecRef(cpy_r_free_vars);
    CPy_DecRef(cpy_r_batches);
    CPy_DecRef(cpy_r_next_bc);
    CPy_DecRef(cpy_r_r121);
    goto CPyL105;
CPyL145: ;
    CPy_DECREF(cpy_r_r124);
    goto CPyL82;
CPyL146: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_free_vars);
    CPy_DecRef(cpy_r_batches);
    goto CPyL105;
CPyL147: ;
    CPy_DECREF(cpy_r_cmap);
    CPy_DECREF(cpy_r_batches);
    goto CPyL95;
CPyL148: ;
    CPy_DecRef(cpy_r_cmap);
    CPy_DecRef(cpy_r_free_vars);
    CPy_DecRef(cpy_r_batches);
    CPy_DecRef(cpy_r_solutions);
    goto CPyL105;
CPyL149: ;
    CPy_DECREF(cpy_r_free_vars);
    goto CPyL102;
CPyL150: ;
    CPy_DecRef(cpy_r_free_vars);
    CPy_DecRef(cpy_r_solutions);
    goto CPyL105;
CPyL151: ;
    CPy_DecRef(cpy_r_free_vars);
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_tv_3);
    goto CPyL105;
CPyL152: ;
    CPy_DECREF(cpy_r_tv_3);
    goto CPyL101;
}

PyObject *CPyPy_solve___solve_non_linear(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"vars", "constraints", "cmap", 0};
    static CPyArg_Parser parser = {"OOO:solve_non_linear", kwlist, 0};
    PyObject *obj_vars;
    PyObject *obj_constraints;
    PyObject *obj_cmap;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_vars, &obj_constraints, &obj_cmap)) {
        return NULL;
    }
    PyObject *arg_vars;
    if (likely(PyList_Check(obj_vars)))
        arg_vars = obj_vars;
    else {
        CPy_TypeError("list", obj_vars); 
        goto fail;
    }
    PyObject *arg_constraints;
    if (likely(PyList_Check(obj_constraints)))
        arg_constraints = obj_constraints;
    else {
        CPy_TypeError("list", obj_constraints); 
        goto fail;
    }
    PyObject *arg_cmap;
    if (likely(PyDict_Check(obj_cmap)))
        arg_cmap = obj_cmap;
    else {
        CPy_TypeError("dict", obj_cmap); 
        goto fail;
    }
    PyObject *retval = CPyDef_solve___solve_non_linear(arg_vars, arg_constraints, arg_cmap);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/solve.py", "solve_non_linear", 84, CPyStatic_solve___globals);
    return NULL;
}

PyObject *CPyDef_solve___solve_iteratively(PyObject *cpy_r_batch, PyObject *cpy_r_cmap, PyObject *cpy_r_free_vars) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_solutions;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_relevant_constraints;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    tuple_T2OO cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_lowers;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_uppers;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_s_batch;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_v;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_not_allowed_vars;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_l;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_u;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_solvable_tv;
    char cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_result;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_subs;
    PyObject *cpy_r_r73;
    CPyTagged cpy_r_r74;
    int64_t cpy_r_r75;
    CPyTagged cpy_r_r76;
    PyObject *cpy_r_r77;
    tuple_T3CIO cpy_r_r78;
    CPyTagged cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_tv_2;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_l_2;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyTagged cpy_r_r98;
    int64_t cpy_r_r99;
    CPyTagged cpy_r_r100;
    PyObject *cpy_r_r101;
    tuple_T3CIO cpy_r_r102;
    CPyTagged cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_tv_3;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_u_2;
    PyObject *cpy_r_r113;
    int32_t cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    char cpy_r_r120;
    CPyTagged cpy_r_r121;
    int64_t cpy_r_r122;
    CPyTagged cpy_r_r123;
    PyObject *cpy_r_r124;
    tuple_T3CIO cpy_r_r125;
    CPyTagged cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_v_2;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    CPyTagged cpy_r_r132;
    CPyPtr cpy_r_r133;
    int64_t cpy_r_r134;
    CPyTagged cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    CPyTagged cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 167, CPyStatic_solve___globals);
        goto CPyL105;
    }
    cpy_r_solutions = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 168, CPyStatic_solve___globals);
        goto CPyL106;
    }
    cpy_r_relevant_constraints = cpy_r_r1;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_batch)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL9;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_batch, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_types___TypeVarId))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 169, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r7);
        goto CPyL107;
    }
    cpy_r_tv = cpy_r_r8;
    cpy_r_r9 = PyList_New(0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 170, CPyStatic_solve___globals);
        goto CPyL108;
    }
    cpy_r_r10 = CPyDict_Get(cpy_r_cmap, cpy_r_tv, cpy_r_r9);
    CPy_DECREF(cpy_r_tv);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 170, CPyStatic_solve___globals);
        goto CPyL107;
    }
    cpy_r_r11 = CPyList_Extend(cpy_r_relevant_constraints, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 170, CPyStatic_solve___globals);
        goto CPyL107;
    } else
        goto CPyL109;
CPyL8: ;
    cpy_r_r12 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r12;
    goto CPyL3;
CPyL9: ;
    cpy_r_r13 = CPyDef_solve___transitive_closure(cpy_r_batch, cpy_r_relevant_constraints);
    CPy_DECREF(cpy_r_relevant_constraints);
    if (unlikely(cpy_r_r13.f0 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 171, CPyStatic_solve___globals);
        goto CPyL106;
    }
    cpy_r_r14 = cpy_r_r13.f0;
    CPy_INCREF(cpy_r_r14);
    cpy_r_lowers = cpy_r_r14;
    cpy_r_r15 = cpy_r_r13.f1;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r13.f0);
    CPy_DECREF(cpy_r_r13.f1);
    cpy_r_uppers = cpy_r_r15;
    cpy_r_r16 = PySet_New(cpy_r_batch);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 172, CPyStatic_solve___globals);
        goto CPyL110;
    }
    cpy_r_s_batch = cpy_r_r16;
    cpy_r_r17 = PyList_New(0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 173, CPyStatic_solve___globals);
        goto CPyL111;
    }
    cpy_r_r18 = 0;
CPyL13: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_batch)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL19;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_batch, cpy_r_r18);
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_types___TypeVarId))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 173, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r23);
        goto CPyL112;
    }
    cpy_r_v = cpy_r_r24;
    cpy_r_r25 = PySequence_Contains(cpy_r_free_vars, cpy_r_v);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 173, CPyStatic_solve___globals);
        goto CPyL113;
    }
    cpy_r_r27 = cpy_r_r25;
    cpy_r_r28 = cpy_r_r27 ^ 1;
    if (!cpy_r_r28) goto CPyL114;
    cpy_r_r29 = PyList_Append(cpy_r_r17, cpy_r_v);
    CPy_DECREF(cpy_r_v);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 173, CPyStatic_solve___globals);
        goto CPyL112;
    }
CPyL18: ;
    cpy_r_r31 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r31;
    goto CPyL13;
CPyL19: ;
    cpy_r_not_allowed_vars = cpy_r_r17;
CPyL20: ;
    cpy_r_r32 = PyObject_IsTrue(cpy_r_s_batch);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 172, CPyStatic_solve___globals);
        goto CPyL115;
    }
    cpy_r_r34 = cpy_r_r32;
    if (!cpy_r_r34) goto CPyL116;
    cpy_r_r35 = PyObject_GetIter(cpy_r_s_batch);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 175, CPyStatic_solve___globals);
        goto CPyL115;
    }
CPyL23: ;
    cpy_r_r36 = PyIter_Next(cpy_r_r35);
    if (cpy_r_r36 == NULL) goto CPyL117;
    if (likely(Py_TYPE(cpy_r_r36) == CPyType_types___TypeVarId))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 175, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r36);
        goto CPyL118;
    }
    cpy_r_tv = cpy_r_r37;
    cpy_r_r38 = 0;
    cpy_r_r39 = CPyDict_GetItem(cpy_r_lowers, cpy_r_tv);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 176, CPyStatic_solve___globals);
        goto CPyL119;
    }
    if (likely(PySet_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 176, CPyStatic_solve___globals, "set", cpy_r_r39);
        goto CPyL119;
    }
    cpy_r_r41 = PyObject_GetIter(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 176, CPyStatic_solve___globals);
        goto CPyL119;
    }
CPyL28: ;
    cpy_r_r42 = PyIter_Next(cpy_r_r41);
    if (cpy_r_r42 == NULL) goto CPyL120;
    if (likely(PyObject_TypeCheck(cpy_r_r42, CPyType_types___Type)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 176, CPyStatic_solve___globals, "mypy.types.Type", cpy_r_r42);
        goto CPyL121;
    }
    cpy_r_l = cpy_r_r43;
    cpy_r_r44 = CPyDef_solve___get_vars(cpy_r_l, cpy_r_not_allowed_vars);
    CPy_DECREF(cpy_r_l);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 176, CPyStatic_solve___globals);
        goto CPyL121;
    }
    cpy_r_r45 = PyObject_Not(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 176, CPyStatic_solve___globals);
        goto CPyL121;
    }
    cpy_r_r47 = cpy_r_r45;
    if (cpy_r_r47) {
        goto CPyL122;
    } else
        goto CPyL28;
CPyL33: ;
    cpy_r_r38 = 1;
    goto CPyL35;
CPyL34: ;
    cpy_r_r48 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 176, CPyStatic_solve___globals);
        goto CPyL119;
    }
CPyL35: ;
    if (cpy_r_r38) goto CPyL123;
    cpy_r_r49 = 0;
    cpy_r_r50 = CPyDict_GetItem(cpy_r_uppers, cpy_r_tv);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 177, CPyStatic_solve___globals);
        goto CPyL119;
    }
    if (likely(PySet_Check(cpy_r_r50)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 177, CPyStatic_solve___globals, "set", cpy_r_r50);
        goto CPyL119;
    }
    cpy_r_r52 = PyObject_GetIter(cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 176, CPyStatic_solve___globals);
        goto CPyL119;
    }
CPyL39: ;
    cpy_r_r53 = PyIter_Next(cpy_r_r52);
    if (cpy_r_r53 == NULL) goto CPyL124;
    if (likely(PyObject_TypeCheck(cpy_r_r53, CPyType_types___Type)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 176, CPyStatic_solve___globals, "mypy.types.Type", cpy_r_r53);
        goto CPyL125;
    }
    cpy_r_u = cpy_r_r54;
    cpy_r_r55 = CPyDef_solve___get_vars(cpy_r_u, cpy_r_not_allowed_vars);
    CPy_DECREF(cpy_r_u);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 177, CPyStatic_solve___globals);
        goto CPyL125;
    }
    cpy_r_r56 = PyObject_Not(cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 177, CPyStatic_solve___globals);
        goto CPyL125;
    }
    cpy_r_r58 = cpy_r_r56;
    if (cpy_r_r58) {
        goto CPyL126;
    } else
        goto CPyL39;
CPyL44: ;
    cpy_r_r49 = 1;
    goto CPyL46;
CPyL45: ;
    cpy_r_r59 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 176, CPyStatic_solve___globals);
        goto CPyL119;
    }
CPyL46: ;
    if (cpy_r_r49) {
        goto CPyL123;
    } else
        goto CPyL127;
CPyL47: ;
    cpy_r_solvable_tv = cpy_r_tv;
    goto CPyL49;
CPyL48: ;
    cpy_r_r60 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 175, CPyStatic_solve___globals);
        goto CPyL106;
    } else
        goto CPyL104;
CPyL49: ;
    cpy_r_r61 = CPySet_Remove(cpy_r_s_batch, cpy_r_solvable_tv);
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 184, CPyStatic_solve___globals);
        goto CPyL128;
    }
    cpy_r_r62 = CPyDict_GetItem(cpy_r_lowers, cpy_r_solvable_tv);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 185, CPyStatic_solve___globals);
        goto CPyL128;
    }
    if (likely(PySet_Check(cpy_r_r62)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 185, CPyStatic_solve___globals, "set", cpy_r_r62);
        goto CPyL128;
    }
    cpy_r_r64 = CPyDict_GetItem(cpy_r_uppers, cpy_r_solvable_tv);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 185, CPyStatic_solve___globals);
        goto CPyL129;
    }
    if (likely(PySet_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 185, CPyStatic_solve___globals, "set", cpy_r_r64);
        goto CPyL129;
    }
    cpy_r_r66 = CPyDef_solve___solve_one(cpy_r_r63, cpy_r_r65, cpy_r_not_allowed_vars);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 185, CPyStatic_solve___globals);
        goto CPyL128;
    }
    cpy_r_result = cpy_r_r66;
    cpy_r_r67 = CPyDict_SetItem(cpy_r_solutions, cpy_r_solvable_tv, cpy_r_result);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 186, CPyStatic_solve___globals);
        goto CPyL130;
    }
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = cpy_r_result == cpy_r_r69;
    if (cpy_r_r70) goto CPyL131;
    if (likely(cpy_r_result != Py_None))
        cpy_r_r71 = cpy_r_result;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 192, CPyStatic_solve___globals, "mypy.types.Type", cpy_r_result);
        goto CPyL128;
    }
    cpy_r_r72 = CPyDict_Build(1, cpy_r_solvable_tv, cpy_r_r71);
    CPy_DECREF(cpy_r_solvable_tv);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 192, CPyStatic_solve___globals);
        goto CPyL115;
    }
    cpy_r_subs = cpy_r_r72;
    cpy_r_r73 = PyDict_New();
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 193, CPyStatic_solve___globals);
        goto CPyL132;
    }
    cpy_r_r74 = 0;
    cpy_r_r75 = PyDict_Size(cpy_r_lowers);
    cpy_r_r76 = cpy_r_r75 << 1;
    cpy_r_r77 = CPyDict_GetKeysIter(cpy_r_lowers);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 193, CPyStatic_solve___globals);
        goto CPyL133;
    }
CPyL61: ;
    cpy_r_r78 = CPyDict_NextKey(cpy_r_r77, cpy_r_r74);
    cpy_r_r79 = cpy_r_r78.f1;
    cpy_r_r74 = cpy_r_r79;
    cpy_r_r80 = cpy_r_r78.f0;
    if (!cpy_r_r80) goto CPyL134;
    cpy_r_r81 = cpy_r_r78.f2;
    CPy_INCREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r78.f2);
    if (likely(Py_TYPE(cpy_r_r81) == CPyType_types___TypeVarId))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 193, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r81);
        goto CPyL135;
    }
    cpy_r_tv_2 = cpy_r_r82;
    cpy_r_r83 = PySet_New(NULL);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 193, CPyStatic_solve___globals);
        goto CPyL136;
    }
    cpy_r_r84 = CPyDict_GetItem(cpy_r_lowers, cpy_r_tv_2);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 193, CPyStatic_solve___globals);
        goto CPyL137;
    }
    if (likely(PySet_Check(cpy_r_r84)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 193, CPyStatic_solve___globals, "set", cpy_r_r84);
        goto CPyL137;
    }
    cpy_r_r86 = PyObject_GetIter(cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 193, CPyStatic_solve___globals);
        goto CPyL137;
    }
CPyL67: ;
    cpy_r_r87 = PyIter_Next(cpy_r_r86);
    if (cpy_r_r87 == NULL) goto CPyL138;
    if (likely(PyObject_TypeCheck(cpy_r_r87, CPyType_types___Type)))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 193, CPyStatic_solve___globals, "mypy.types.Type", cpy_r_r87);
        goto CPyL139;
    }
    cpy_r_l_2 = cpy_r_r88;
    cpy_r_r89 = CPyDef_expandtype___expand_type(cpy_r_l_2, cpy_r_subs);
    CPy_DECREF(cpy_r_l_2);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 193, CPyStatic_solve___globals);
        goto CPyL139;
    }
    cpy_r_r90 = PySet_Add(cpy_r_r83, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 193, CPyStatic_solve___globals);
        goto CPyL139;
    } else
        goto CPyL67;
CPyL71: ;
    cpy_r_r92 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 193, CPyStatic_solve___globals);
        goto CPyL137;
    }
    cpy_r_r93 = CPyDict_SetItem(cpy_r_r73, cpy_r_tv_2, cpy_r_r83);
    CPy_DECREF(cpy_r_tv_2);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 193, CPyStatic_solve___globals);
        goto CPyL135;
    }
    cpy_r_r95 = CPyDict_CheckSize(cpy_r_lowers, cpy_r_r76);
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 193, CPyStatic_solve___globals);
        goto CPyL135;
    } else
        goto CPyL61;
CPyL74: ;
    cpy_r_r96 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 193, CPyStatic_solve___globals);
        goto CPyL140;
    }
    cpy_r_lowers = cpy_r_r73;
    cpy_r_r97 = PyDict_New();
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 194, CPyStatic_solve___globals);
        goto CPyL132;
    }
    cpy_r_r98 = 0;
    cpy_r_r99 = PyDict_Size(cpy_r_uppers);
    cpy_r_r100 = cpy_r_r99 << 1;
    cpy_r_r101 = CPyDict_GetKeysIter(cpy_r_uppers);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 194, CPyStatic_solve___globals);
        goto CPyL141;
    }
CPyL77: ;
    cpy_r_r102 = CPyDict_NextKey(cpy_r_r101, cpy_r_r98);
    cpy_r_r103 = cpy_r_r102.f1;
    cpy_r_r98 = cpy_r_r103;
    cpy_r_r104 = cpy_r_r102.f0;
    if (!cpy_r_r104) goto CPyL142;
    cpy_r_r105 = cpy_r_r102.f2;
    CPy_INCREF(cpy_r_r105);
    CPy_DECREF(cpy_r_r102.f2);
    if (likely(Py_TYPE(cpy_r_r105) == CPyType_types___TypeVarId))
        cpy_r_r106 = cpy_r_r105;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 194, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r105);
        goto CPyL143;
    }
    cpy_r_tv_3 = cpy_r_r106;
    cpy_r_r107 = PySet_New(NULL);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 194, CPyStatic_solve___globals);
        goto CPyL144;
    }
    cpy_r_r108 = CPyDict_GetItem(cpy_r_uppers, cpy_r_tv_3);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 194, CPyStatic_solve___globals);
        goto CPyL145;
    }
    if (likely(PySet_Check(cpy_r_r108)))
        cpy_r_r109 = cpy_r_r108;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 194, CPyStatic_solve___globals, "set", cpy_r_r108);
        goto CPyL145;
    }
    cpy_r_r110 = PyObject_GetIter(cpy_r_r109);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 194, CPyStatic_solve___globals);
        goto CPyL145;
    }
CPyL83: ;
    cpy_r_r111 = PyIter_Next(cpy_r_r110);
    if (cpy_r_r111 == NULL) goto CPyL146;
    if (likely(PyObject_TypeCheck(cpy_r_r111, CPyType_types___Type)))
        cpy_r_r112 = cpy_r_r111;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 194, CPyStatic_solve___globals, "mypy.types.Type", cpy_r_r111);
        goto CPyL147;
    }
    cpy_r_u_2 = cpy_r_r112;
    cpy_r_r113 = CPyDef_expandtype___expand_type(cpy_r_u_2, cpy_r_subs);
    CPy_DECREF(cpy_r_u_2);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 194, CPyStatic_solve___globals);
        goto CPyL147;
    }
    cpy_r_r114 = PySet_Add(cpy_r_r107, cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r115 = cpy_r_r114 >= 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 194, CPyStatic_solve___globals);
        goto CPyL147;
    } else
        goto CPyL83;
CPyL87: ;
    cpy_r_r116 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 194, CPyStatic_solve___globals);
        goto CPyL145;
    }
    cpy_r_r117 = CPyDict_SetItem(cpy_r_r97, cpy_r_tv_3, cpy_r_r107);
    CPy_DECREF(cpy_r_tv_3);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 194, CPyStatic_solve___globals);
        goto CPyL143;
    }
    cpy_r_r119 = CPyDict_CheckSize(cpy_r_uppers, cpy_r_r100);
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 194, CPyStatic_solve___globals);
        goto CPyL143;
    } else
        goto CPyL77;
CPyL90: ;
    cpy_r_r120 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 194, CPyStatic_solve___globals);
        goto CPyL148;
    }
    cpy_r_uppers = cpy_r_r97;
    cpy_r_r121 = 0;
    cpy_r_r122 = PyDict_Size(cpy_r_cmap);
    cpy_r_r123 = cpy_r_r122 << 1;
    cpy_r_r124 = CPyDict_GetKeysIter(cpy_r_cmap);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 195, CPyStatic_solve___globals);
        goto CPyL132;
    }
CPyL92: ;
    cpy_r_r125 = CPyDict_NextKey(cpy_r_r124, cpy_r_r121);
    cpy_r_r126 = cpy_r_r125.f1;
    cpy_r_r121 = cpy_r_r126;
    cpy_r_r127 = cpy_r_r125.f0;
    if (!cpy_r_r127) goto CPyL149;
    cpy_r_r128 = cpy_r_r125.f2;
    CPy_INCREF(cpy_r_r128);
    CPy_DECREF(cpy_r_r125.f2);
    if (likely(Py_TYPE(cpy_r_r128) == CPyType_types___TypeVarId))
        cpy_r_r129 = cpy_r_r128;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 195, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r128);
        goto CPyL150;
    }
    cpy_r_v_2 = cpy_r_r129;
    cpy_r_r130 = CPyDict_GetItem(cpy_r_cmap, cpy_r_v_2);
    CPy_DECREF(cpy_r_v_2);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 196, CPyStatic_solve___globals);
        goto CPyL150;
    }
    if (likely(PyList_Check(cpy_r_r130)))
        cpy_r_r131 = cpy_r_r130;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 196, CPyStatic_solve___globals, "list", cpy_r_r130);
        goto CPyL150;
    }
    cpy_r_r132 = 0;
CPyL97: ;
    cpy_r_r133 = (CPyPtr)&((PyVarObject *)cpy_r_r131)->ob_size;
    cpy_r_r134 = *(int64_t *)cpy_r_r133;
    cpy_r_r135 = cpy_r_r134 << 1;
    cpy_r_r136 = (Py_ssize_t)cpy_r_r132 < (Py_ssize_t)cpy_r_r135;
    if (!cpy_r_r136) goto CPyL151;
    cpy_r_r137 = CPyList_GetItemUnsafe(cpy_r_r131, cpy_r_r132);
    if (likely(Py_TYPE(cpy_r_r137) == CPyType_constraints___Constraint))
        cpy_r_r138 = cpy_r_r137;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_iteratively", 196, CPyStatic_solve___globals, "mypy.constraints.Constraint", cpy_r_r137);
        goto CPyL152;
    }
    cpy_r_c = cpy_r_r138;
    cpy_r_r139 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    CPy_INCREF(cpy_r_r139);
    cpy_r_r140 = CPyDef_expandtype___expand_type(cpy_r_r139, cpy_r_subs);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 197, CPyStatic_solve___globals);
        goto CPyL153;
    }
    CPy_DECREF(((mypy___constraints___ConstraintObject *)cpy_r_c)->_target);
    ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target = cpy_r_r140;
    CPy_DECREF(cpy_r_c);
    cpy_r_r142 = cpy_r_r132 + 2;
    cpy_r_r132 = cpy_r_r142;
    goto CPyL97;
CPyL102: ;
    cpy_r_r143 = CPyDict_CheckSize(cpy_r_cmap, cpy_r_r123);
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 195, CPyStatic_solve___globals);
        goto CPyL150;
    } else
        goto CPyL92;
CPyL103: ;
    cpy_r_r144 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 195, CPyStatic_solve___globals);
        goto CPyL115;
    } else
        goto CPyL20;
CPyL104: ;
    return cpy_r_solutions;
CPyL105: ;
    cpy_r_r145 = NULL;
    return cpy_r_r145;
CPyL106: ;
    CPy_DecRef(cpy_r_solutions);
    goto CPyL105;
CPyL107: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_relevant_constraints);
    goto CPyL105;
CPyL108: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_relevant_constraints);
    CPy_DecRef(cpy_r_tv);
    goto CPyL105;
CPyL109: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL8;
CPyL110: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    goto CPyL105;
CPyL111: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    goto CPyL105;
CPyL112: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_r17);
    goto CPyL105;
CPyL113: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_v);
    goto CPyL105;
CPyL114: ;
    CPy_DECREF(cpy_r_v);
    goto CPyL18;
CPyL115: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    goto CPyL105;
CPyL116: ;
    CPy_DECREF(cpy_r_lowers);
    CPy_DECREF(cpy_r_uppers);
    CPy_DECREF(cpy_r_s_batch);
    CPy_DECREF(cpy_r_not_allowed_vars);
    goto CPyL104;
CPyL117: ;
    CPy_DECREF(cpy_r_lowers);
    CPy_DECREF(cpy_r_uppers);
    CPy_DECREF(cpy_r_s_batch);
    CPy_DECREF(cpy_r_not_allowed_vars);
    CPy_DECREF(cpy_r_r35);
    goto CPyL48;
CPyL118: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_r35);
    goto CPyL105;
CPyL119: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_r35);
    goto CPyL105;
CPyL120: ;
    CPy_DECREF(cpy_r_r41);
    goto CPyL34;
CPyL121: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r41);
    goto CPyL105;
CPyL122: ;
    CPy_DECREF(cpy_r_r41);
    goto CPyL33;
CPyL123: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL47;
CPyL124: ;
    CPy_DECREF(cpy_r_r52);
    goto CPyL45;
CPyL125: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r52);
    goto CPyL105;
CPyL126: ;
    CPy_DECREF(cpy_r_r52);
    goto CPyL44;
CPyL127: ;
    CPy_DECREF(cpy_r_tv);
    goto CPyL23;
CPyL128: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_solvable_tv);
    goto CPyL105;
CPyL129: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_solvable_tv);
    CPy_DecRef(cpy_r_r63);
    goto CPyL105;
CPyL130: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_solvable_tv);
    CPy_DecRef(cpy_r_result);
    goto CPyL105;
CPyL131: ;
    CPy_DECREF(cpy_r_solvable_tv);
    CPy_DECREF(cpy_r_result);
    goto CPyL20;
CPyL132: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_subs);
    goto CPyL105;
CPyL133: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_subs);
    CPy_DecRef(cpy_r_r73);
    goto CPyL105;
CPyL134: ;
    CPy_DECREF(cpy_r_lowers);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r78.f2);
    goto CPyL74;
CPyL135: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_subs);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r77);
    goto CPyL105;
CPyL136: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_subs);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_tv_2);
    goto CPyL105;
CPyL137: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_subs);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_tv_2);
    CPy_DecRef(cpy_r_r83);
    goto CPyL105;
CPyL138: ;
    CPy_DECREF(cpy_r_r86);
    goto CPyL71;
CPyL139: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_subs);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_tv_2);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r86);
    goto CPyL105;
CPyL140: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_subs);
    CPy_DecRef(cpy_r_r73);
    goto CPyL105;
CPyL141: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_subs);
    CPy_DecRef(cpy_r_r97);
    goto CPyL105;
CPyL142: ;
    CPy_DECREF(cpy_r_uppers);
    CPy_DECREF(cpy_r_r101);
    CPy_DECREF(cpy_r_r102.f2);
    goto CPyL90;
CPyL143: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_subs);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r101);
    goto CPyL105;
CPyL144: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_subs);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_tv_3);
    goto CPyL105;
CPyL145: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_subs);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_tv_3);
    CPy_DecRef(cpy_r_r107);
    goto CPyL105;
CPyL146: ;
    CPy_DECREF(cpy_r_r110);
    goto CPyL87;
CPyL147: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_subs);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_tv_3);
    CPy_DecRef(cpy_r_r107);
    CPy_DecRef(cpy_r_r110);
    goto CPyL105;
CPyL148: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_subs);
    CPy_DecRef(cpy_r_r97);
    goto CPyL105;
CPyL149: ;
    CPy_DECREF(cpy_r_subs);
    CPy_DECREF(cpy_r_r124);
    CPy_DECREF(cpy_r_r125.f2);
    goto CPyL103;
CPyL150: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_subs);
    CPy_DecRef(cpy_r_r124);
    goto CPyL105;
CPyL151: ;
    CPy_DECREF(cpy_r_r131);
    goto CPyL102;
CPyL152: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_subs);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r131);
    goto CPyL105;
CPyL153: ;
    CPy_DecRef(cpy_r_solutions);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_s_batch);
    CPy_DecRef(cpy_r_not_allowed_vars);
    CPy_DecRef(cpy_r_subs);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_c);
    goto CPyL105;
}

PyObject *CPyPy_solve___solve_iteratively(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"batch", "cmap", "free_vars", 0};
    static CPyArg_Parser parser = {"OOO:solve_iteratively", kwlist, 0};
    PyObject *obj_batch;
    PyObject *obj_cmap;
    PyObject *obj_free_vars;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_batch, &obj_cmap, &obj_free_vars)) {
        return NULL;
    }
    PyObject *arg_batch;
    if (likely(PyList_Check(obj_batch)))
        arg_batch = obj_batch;
    else {
        CPy_TypeError("list", obj_batch); 
        goto fail;
    }
    PyObject *arg_cmap;
    if (likely(PyDict_Check(obj_cmap)))
        arg_cmap = obj_cmap;
    else {
        CPy_TypeError("dict", obj_cmap); 
        goto fail;
    }
    PyObject *arg_free_vars;
    if (likely(PyList_Check(obj_free_vars)))
        arg_free_vars = obj_free_vars;
    else {
        CPy_TypeError("list", obj_free_vars); 
        goto fail;
    }
    PyObject *retval = CPyDef_solve___solve_iteratively(arg_batch, arg_cmap, arg_free_vars);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/solve.py", "solve_iteratively", 153, CPyStatic_solve___globals);
    return NULL;
}

PyObject *CPyDef_solve___solve_one(PyObject *cpy_r_lowers, PyObject *cpy_r_uppers, PyObject *cpy_r_not_allowed_vars) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_bottom;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_top;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_candidate;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
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
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_p_top;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_p_bottom;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyPtr cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_source_any;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_bottom = cpy_r_r0;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_top = cpy_r_r1;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_candidate = cpy_r_r2;
    CPy_DECREF(cpy_r_candidate);
    cpy_r_r3 = PyObject_GetIter(cpy_r_lowers);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 212, CPyStatic_solve___globals);
        goto CPyL65;
    }
CPyL1: ;
    cpy_r_r4 = PyIter_Next(cpy_r_r3);
    if (cpy_r_r4 == NULL) goto CPyL66;
    if (likely(PyObject_TypeCheck(cpy_r_r4, CPyType_types___Type)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_one", 212, CPyStatic_solve___globals, "mypy.types.Type", cpy_r_r4);
        goto CPyL67;
    }
    cpy_r_target = cpy_r_r5;
    cpy_r_r6 = CPyDef_solve___get_vars(cpy_r_target, cpy_r_not_allowed_vars);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 215, CPyStatic_solve___globals);
        goto CPyL68;
    }
    cpy_r_r7 = PyObject_IsTrue(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 215, CPyStatic_solve___globals);
        goto CPyL68;
    }
    cpy_r_r9 = cpy_r_r7;
    if (cpy_r_r9) goto CPyL69;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_bottom == cpy_r_r10;
    if (cpy_r_r11) {
        goto CPyL70;
    } else
        goto CPyL8;
CPyL7: ;
    cpy_r_bottom = cpy_r_target;
    goto CPyL1;
CPyL8: ;
    cpy_r_r12 = CPyStatic_typestate___type_state;
    if (unlikely(cpy_r_r12 == NULL)) {
        goto CPyL71;
    } else
        goto CPyL11;
CPyL9: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"type_state\" was not set");
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 220, CPyStatic_solve___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r14 = ((mypy___typestate___TypeStateObject *)cpy_r_r12)->_infer_unions;
    if (!cpy_r_r14) goto CPyL16;
CPyL12: ;
    if (likely(cpy_r_bottom != Py_None))
        cpy_r_r15 = cpy_r_bottom;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_one", 223, CPyStatic_solve___globals, "mypy.types.Type", cpy_r_bottom);
        goto CPyL72;
    }
    cpy_r_r16 = PyList_New(2);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 223, CPyStatic_solve___globals);
        goto CPyL73;
    }
    cpy_r_r17 = (CPyPtr)&((PyListObject *)cpy_r_r16)->ob_item;
    cpy_r_r18 = *(CPyPtr *)cpy_r_r17;
    *(PyObject * *)cpy_r_r18 = cpy_r_r15;
    cpy_r_r19 = cpy_r_r18 + 8;
    *(PyObject * *)cpy_r_r19 = cpy_r_target;
    cpy_r_r20 = CPY_INT_TAG;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPyDef_types___UnionType___make_union(cpy_r_r16, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 223, CPyStatic_solve___globals);
        goto CPyL74;
    }
    cpy_r_bottom = cpy_r_r22;
    goto CPyL1;
CPyL16: ;
    if (likely(cpy_r_bottom != Py_None))
        cpy_r_r23 = cpy_r_bottom;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_one", 225, CPyStatic_solve___globals, "mypy.types.Type", cpy_r_bottom);
        goto CPyL72;
    }
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyDef_join___join_types(cpy_r_r23, cpy_r_target, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_target);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 225, CPyStatic_solve___globals);
        goto CPyL74;
    }
    cpy_r_bottom = cpy_r_r25;
    goto CPyL1;
CPyL19: ;
    cpy_r_r26 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 212, CPyStatic_solve___globals);
        goto CPyL65;
    }
    cpy_r_r27 = PyObject_GetIter(cpy_r_uppers);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 227, CPyStatic_solve___globals);
        goto CPyL65;
    }
CPyL21: ;
    cpy_r_r28 = PyIter_Next(cpy_r_r27);
    if (cpy_r_r28 == NULL) goto CPyL75;
    if (likely(PyObject_TypeCheck(cpy_r_r28, CPyType_types___Type)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_one", 227, CPyStatic_solve___globals, "mypy.types.Type", cpy_r_r28);
        goto CPyL76;
    }
    cpy_r_target = cpy_r_r29;
    cpy_r_r30 = CPyDef_solve___get_vars(cpy_r_target, cpy_r_not_allowed_vars);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 229, CPyStatic_solve___globals);
        goto CPyL77;
    }
    cpy_r_r31 = PyObject_IsTrue(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 229, CPyStatic_solve___globals);
        goto CPyL77;
    }
    cpy_r_r33 = cpy_r_r31;
    if (cpy_r_r33) goto CPyL78;
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = cpy_r_top == cpy_r_r34;
    if (cpy_r_r35) {
        goto CPyL79;
    } else
        goto CPyL28;
CPyL27: ;
    cpy_r_top = cpy_r_target;
    goto CPyL21;
CPyL28: ;
    if (likely(cpy_r_top != Py_None))
        cpy_r_r36 = cpy_r_top;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_one", 234, CPyStatic_solve___globals, "mypy.types.Type", cpy_r_top);
        goto CPyL80;
    }
    cpy_r_r37 = CPyDef_meet___meet_types(cpy_r_r36, cpy_r_target);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_target);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 234, CPyStatic_solve___globals);
        goto CPyL81;
    }
    cpy_r_top = cpy_r_r37;
    goto CPyL21;
CPyL31: ;
    cpy_r_r38 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 227, CPyStatic_solve___globals);
        goto CPyL65;
    }
    cpy_r_r39 = CPyDef_types___get_proper_type(cpy_r_top);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 236, CPyStatic_solve___globals);
        goto CPyL65;
    }
    cpy_r_p_top = cpy_r_r39;
    cpy_r_r40 = CPyDef_types___get_proper_type(cpy_r_bottom);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 237, CPyStatic_solve___globals);
        goto CPyL82;
    }
    cpy_r_p_bottom = cpy_r_r40;
    cpy_r_r41 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_p_top)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (cpy_r_r44) goto CPyL83;
    cpy_r_r45 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r46 = (CPyPtr)&((PyObject *)cpy_r_p_bottom)->ob_type;
    cpy_r_r47 = *(PyObject * *)cpy_r_r46;
    CPy_DECREF(cpy_r_p_bottom);
    cpy_r_r48 = cpy_r_r47 == cpy_r_r45;
    if (!cpy_r_r48) goto CPyL84;
CPyL36: ;
    cpy_r_r49 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_p_top)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    CPy_DECREF(cpy_r_p_top);
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    if (cpy_r_r52) {
        goto CPyL85;
    } else
        goto CPyL86;
CPyL37: ;
    cpy_r_r53 = cpy_r_top;
    goto CPyL39;
CPyL38: ;
    cpy_r_r53 = cpy_r_bottom;
CPyL39: ;
    cpy_r_source_any = cpy_r_r53;
    cpy_r_r54 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r55 = CPy_TypeCheck(cpy_r_source_any, cpy_r_r54);
    if (cpy_r_r55) goto CPyL41;
    cpy_r_r56 = cpy_r_r55;
    goto CPyL42;
CPyL41: ;
    cpy_r_r57 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r58 = (CPyPtr)&((PyObject *)cpy_r_source_any)->ob_type;
    cpy_r_r59 = *(PyObject * *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 == cpy_r_r57;
    cpy_r_r56 = cpy_r_r60;
CPyL42: ;
    if (cpy_r_r56) {
        goto CPyL45;
    } else
        goto CPyL87;
CPyL43: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r61 = 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 240, CPyStatic_solve___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL45: ;
    if (likely(Py_TYPE(cpy_r_source_any) == CPyType_types___AnyType))
        cpy_r_r62 = cpy_r_source_any;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_one", 241, CPyStatic_solve___globals, "mypy.types.AnyType", cpy_r_source_any);
        goto CPyL64;
    }
    cpy_r_r63 = NULL;
    cpy_r_r64 = CPY_INT_TAG;
    cpy_r_r65 = CPY_INT_TAG;
    cpy_r_r66 = CPyDef_types___AnyType(14, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 241, CPyStatic_solve___globals);
        goto CPyL64;
    }
    return cpy_r_r66;
CPyL48: ;
    cpy_r_r67 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r68 = cpy_r_bottom == cpy_r_r67;
    if (cpy_r_r68) {
        goto CPyL88;
    } else
        goto CPyL53;
CPyL49: ;
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = cpy_r_top != cpy_r_r69;
    if (!cpy_r_r70) goto CPyL89;
    if (likely(cpy_r_top != Py_None))
        cpy_r_r71 = cpy_r_top;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_one", 244, CPyStatic_solve___globals, "mypy.types.Type", cpy_r_top);
        goto CPyL64;
    }
    cpy_r_candidate = cpy_r_r71;
    goto CPyL63;
CPyL52: ;
    cpy_r_r72 = Py_None;
    CPy_INCREF(cpy_r_r72);
    return cpy_r_r72;
CPyL53: ;
    cpy_r_r73 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r74 = cpy_r_top == cpy_r_r73;
    if (cpy_r_r74) {
        goto CPyL90;
    } else
        goto CPyL56;
CPyL54: ;
    if (likely(cpy_r_bottom != Py_None))
        cpy_r_r75 = cpy_r_bottom;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_one", 249, CPyStatic_solve___globals, "mypy.types.Type", cpy_r_bottom);
        goto CPyL64;
    }
    cpy_r_candidate = cpy_r_r75;
    goto CPyL63;
CPyL56: ;
    CPy_INCREF(cpy_r_bottom);
    if (likely(cpy_r_bottom != Py_None))
        cpy_r_r76 = cpy_r_bottom;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_one", 250, CPyStatic_solve___globals, "mypy.types.Type", cpy_r_bottom);
        goto CPyL65;
    }
    if (likely(cpy_r_top != Py_None))
        cpy_r_r77 = cpy_r_top;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_one", 250, CPyStatic_solve___globals, "mypy.types.Type", cpy_r_top);
        goto CPyL91;
    }
    cpy_r_r78 = NULL;
    cpy_r_r79 = 2;
    cpy_r_r80 = 2;
    cpy_r_r81 = 2;
    cpy_r_r82 = 2;
    cpy_r_r83 = 2;
    cpy_r_r84 = NULL;
    cpy_r_r85 = CPyDef_subtypes___is_subtype(cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r82, cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("mypy/solve.py", "solve_one", 250, CPyStatic_solve___globals);
        goto CPyL92;
    }
    if (!cpy_r_r85) goto CPyL93;
    if (likely(cpy_r_bottom != Py_None))
        cpy_r_r86 = cpy_r_bottom;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "solve_one", 251, CPyStatic_solve___globals, "mypy.types.Type", cpy_r_bottom);
        goto CPyL64;
    }
    cpy_r_candidate = cpy_r_r86;
    goto CPyL63;
CPyL62: ;
    cpy_r_r87 = Py_None;
    CPy_INCREF(cpy_r_r87);
    cpy_r_candidate = cpy_r_r87;
CPyL63: ;
    return cpy_r_candidate;
CPyL64: ;
    cpy_r_r88 = NULL;
    return cpy_r_r88;
CPyL65: ;
    CPy_DecRef(cpy_r_bottom);
    CPy_DecRef(cpy_r_top);
    goto CPyL64;
CPyL66: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL19;
CPyL67: ;
    CPy_DecRef(cpy_r_bottom);
    CPy_DecRef(cpy_r_top);
    CPy_DecRef(cpy_r_r3);
    goto CPyL64;
CPyL68: ;
    CPy_DecRef(cpy_r_bottom);
    CPy_DecRef(cpy_r_top);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_target);
    goto CPyL64;
CPyL69: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL1;
CPyL70: ;
    CPy_DECREF(cpy_r_bottom);
    goto CPyL7;
CPyL71: ;
    CPy_DecRef(cpy_r_bottom);
    CPy_DecRef(cpy_r_top);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_target);
    goto CPyL9;
CPyL72: ;
    CPy_DecRef(cpy_r_top);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_target);
    goto CPyL64;
CPyL73: ;
    CPy_DecRef(cpy_r_top);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r15);
    goto CPyL64;
CPyL74: ;
    CPy_DecRef(cpy_r_top);
    CPy_DecRef(cpy_r_r3);
    goto CPyL64;
CPyL75: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL31;
CPyL76: ;
    CPy_DecRef(cpy_r_bottom);
    CPy_DecRef(cpy_r_top);
    CPy_DecRef(cpy_r_r27);
    goto CPyL64;
CPyL77: ;
    CPy_DecRef(cpy_r_bottom);
    CPy_DecRef(cpy_r_top);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r27);
    goto CPyL64;
CPyL78: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL21;
CPyL79: ;
    CPy_DECREF(cpy_r_top);
    goto CPyL27;
CPyL80: ;
    CPy_DecRef(cpy_r_bottom);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r27);
    goto CPyL64;
CPyL81: ;
    CPy_DecRef(cpy_r_bottom);
    CPy_DecRef(cpy_r_r27);
    goto CPyL64;
CPyL82: ;
    CPy_DecRef(cpy_r_bottom);
    CPy_DecRef(cpy_r_top);
    CPy_DecRef(cpy_r_p_top);
    goto CPyL64;
CPyL83: ;
    CPy_DECREF(cpy_r_p_bottom);
    goto CPyL36;
CPyL84: ;
    CPy_DECREF(cpy_r_p_top);
    goto CPyL48;
CPyL85: ;
    CPy_DECREF(cpy_r_bottom);
    goto CPyL37;
CPyL86: ;
    CPy_DECREF(cpy_r_top);
    goto CPyL38;
CPyL87: ;
    CPy_DECREF(cpy_r_source_any);
    goto CPyL43;
CPyL88: ;
    CPy_DECREF(cpy_r_bottom);
    goto CPyL49;
CPyL89: ;
    CPy_DECREF(cpy_r_top);
    goto CPyL52;
CPyL90: ;
    CPy_DECREF(cpy_r_top);
    goto CPyL54;
CPyL91: ;
    CPy_DecRef(cpy_r_bottom);
    CPy_DecRef(cpy_r_r76);
    goto CPyL64;
CPyL92: ;
    CPy_DecRef(cpy_r_bottom);
    goto CPyL64;
CPyL93: ;
    CPy_DECREF(cpy_r_bottom);
    goto CPyL62;
}

PyObject *CPyPy_solve___solve_one(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"lowers", "uppers", "not_allowed_vars", 0};
    static CPyArg_Parser parser = {"OOO:solve_one", kwlist, 0};
    PyObject *obj_lowers;
    PyObject *obj_uppers;
    PyObject *obj_not_allowed_vars;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_lowers, &obj_uppers, &obj_not_allowed_vars)) {
        return NULL;
    }
    PyObject *arg_lowers = obj_lowers;
    PyObject *arg_uppers = obj_uppers;
    PyObject *arg_not_allowed_vars;
    if (likely(PyList_Check(obj_not_allowed_vars)))
        arg_not_allowed_vars = obj_not_allowed_vars;
    else {
        CPy_TypeError("list", obj_not_allowed_vars); 
        goto fail;
    }
    PyObject *retval = CPyDef_solve___solve_one(arg_lowers, arg_uppers, arg_not_allowed_vars);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/solve.py", "solve_one", 201, CPyStatic_solve___globals);
    return NULL;
}

PyObject *CPyDef_solve___normalize_constraints(PyObject *cpy_r_constraints, PyObject *cpy_r_vars) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_res;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_c_2;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    cpy_r_r0 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r1[1] = {cpy_r_constraints};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "normalize_constraints", 266, CPyStatic_solve___globals);
        goto CPyL21;
    }
    if (likely(PyList_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "normalize_constraints", 266, CPyStatic_solve___globals, "list", cpy_r_r3);
        goto CPyL21;
    }
    cpy_r_res = cpy_r_r4;
    cpy_r_r5 = 0;
CPyL3: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_constraints)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL22;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_constraints, cpy_r_r5);
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_constraints___Constraint))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "normalize_constraints", 267, CPyStatic_solve___globals, "mypy.constraints.Constraint", cpy_r_r10);
        goto CPyL23;
    }
    cpy_r_c = cpy_r_r11;
    cpy_r_r12 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    cpy_r_r13 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_r12)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL24;
    cpy_r_r17 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    CPy_INCREF(cpy_r_r17);
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_types___TypeVarType))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "normalize_constraints", 269, CPyStatic_solve___globals, "mypy.types.TypeVarType", cpy_r_r17);
        goto CPyL25;
    }
    cpy_r_r19 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_op;
    CPyTagged_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyDef_constraints___neg_op(cpy_r_r19);
    CPyTagged_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/solve.py", "normalize_constraints", 269, CPyStatic_solve___globals);
        goto CPyL26;
    }
    cpy_r_r21 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_origin_type_var;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_c);
    cpy_r_r22 = CPyDef_constraints___Constraint(cpy_r_r18, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r18);
    CPyTagged_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "normalize_constraints", 269, CPyStatic_solve___globals);
        goto CPyL23;
    }
    cpy_r_r23 = PyList_Append(cpy_r_res, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/solve.py", "normalize_constraints", 269, CPyStatic_solve___globals);
        goto CPyL23;
    }
CPyL10: ;
    cpy_r_r25 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r25;
    goto CPyL3;
CPyL11: ;
    cpy_r_r26 = PyList_New(0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "normalize_constraints", 270, CPyStatic_solve___globals);
        goto CPyL21;
    }
    cpy_r_r27 = CPyDef_types___remove_dups(cpy_r_constraints);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "normalize_constraints", 270, CPyStatic_solve___globals);
        goto CPyL27;
    }
    cpy_r_r28 = 0;
CPyL14: ;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_r27)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = (Py_ssize_t)cpy_r_r28 < (Py_ssize_t)cpy_r_r31;
    if (!cpy_r_r32) goto CPyL28;
    cpy_r_r33 = CPyList_GetItemUnsafe(cpy_r_r27, cpy_r_r28);
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_constraints___Constraint))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "normalize_constraints", 270, CPyStatic_solve___globals, "mypy.constraints.Constraint", cpy_r_r33);
        goto CPyL29;
    }
    cpy_r_c_2 = cpy_r_r34;
    cpy_r_r35 = ((mypy___constraints___ConstraintObject *)cpy_r_c_2)->_type_var;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = PySequence_Contains(cpy_r_vars, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/solve.py", "normalize_constraints", 270, CPyStatic_solve___globals);
        goto CPyL30;
    }
    cpy_r_r38 = cpy_r_r36;
    if (!cpy_r_r38) goto CPyL31;
    cpy_r_r39 = PyList_Append(cpy_r_r26, cpy_r_c_2);
    CPy_DECREF(cpy_r_c_2);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/solve.py", "normalize_constraints", 270, CPyStatic_solve___globals);
        goto CPyL29;
    }
CPyL19: ;
    cpy_r_r41 = cpy_r_r28 + 2;
    cpy_r_r28 = cpy_r_r41;
    goto CPyL14;
CPyL20: ;
    return cpy_r_r26;
CPyL21: ;
    cpy_r_r42 = NULL;
    return cpy_r_r42;
CPyL22: ;
    CPy_DECREF(cpy_r_res);
    goto CPyL11;
CPyL23: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL21;
CPyL24: ;
    CPy_DECREF(cpy_r_c);
    goto CPyL10;
CPyL25: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_c);
    goto CPyL21;
CPyL26: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_c);
    CPy_DecRef(cpy_r_r18);
    goto CPyL21;
CPyL27: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL21;
CPyL28: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL20;
CPyL29: ;
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    goto CPyL21;
CPyL30: ;
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_c_2);
    goto CPyL21;
CPyL31: ;
    CPy_DECREF(cpy_r_c_2);
    goto CPyL19;
}

PyObject *CPyPy_solve___normalize_constraints(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"constraints", "vars", 0};
    static CPyArg_Parser parser = {"OO:normalize_constraints", kwlist, 0};
    PyObject *obj_constraints;
    PyObject *obj_vars;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_constraints, &obj_vars)) {
        return NULL;
    }
    PyObject *arg_constraints;
    if (likely(PyList_Check(obj_constraints)))
        arg_constraints = obj_constraints;
    else {
        CPy_TypeError("list", obj_constraints); 
        goto fail;
    }
    PyObject *arg_vars;
    if (likely(PyList_Check(obj_vars)))
        arg_vars = obj_vars;
    else {
        CPy_TypeError("list", obj_vars); 
        goto fail;
    }
    PyObject *retval = CPyDef_solve___normalize_constraints(arg_constraints, arg_vars);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/solve.py", "normalize_constraints", 257, CPyStatic_solve___globals);
    return NULL;
}

PyObject *CPyDef_solve___propagate_constraints_for(PyObject *cpy_r_var, CPyTagged cpy_r_direction, PyObject *cpy_r_cmap) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_extra_constraints;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_seen;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_front;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_var_def;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    CPyTagged cpy_r_r50;
    int64_t cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    CPyTagged cpy_r_r65;
    int64_t cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_new_c;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_r81;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 283, CPyStatic_solve___globals);
        goto CPyL46;
    }
    cpy_r_extra_constraints = cpy_r_r0;
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 284, CPyStatic_solve___globals);
        goto CPyL47;
    }
    cpy_r_seen = cpy_r_r1;
    cpy_r_r2 = PyList_New(1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 285, CPyStatic_solve___globals);
        goto CPyL48;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    CPy_INCREF(cpy_r_var);
    *(PyObject * *)cpy_r_r4 = cpy_r_var;
    cpy_r_front = cpy_r_r2;
    cpy_r_r5 = CPyDict_GetItem(cpy_r_cmap, cpy_r_var);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 286, CPyStatic_solve___globals);
        goto CPyL49;
    }
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "propagate_constraints_for", 286, CPyStatic_solve___globals, "list", cpy_r_r5);
        goto CPyL49;
    }
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = cpy_r_r9 != 0;
    if (!cpy_r_r10) goto CPyL50;
    cpy_r_r11 = CPyDict_GetItem(cpy_r_cmap, cpy_r_var);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 287, CPyStatic_solve___globals);
        goto CPyL49;
    }
    if (likely(PyList_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "propagate_constraints_for", 287, CPyStatic_solve___globals, "list", cpy_r_r11);
        goto CPyL49;
    }
    cpy_r_r13 = CPyList_GetItemShortBorrow(cpy_r_r12, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 287, CPyStatic_solve___globals);
        goto CPyL51;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_constraints___Constraint))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "propagate_constraints_for", 287, CPyStatic_solve___globals, "mypy.constraints.Constraint", cpy_r_r13);
        goto CPyL51;
    }
    cpy_r_r15 = ((mypy___constraints___ConstraintObject *)cpy_r_r14)->_origin_type_var;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r12);
    cpy_r_var_def = cpy_r_r15;
    goto CPyL13;
CPyL11: ;
    cpy_r_r16 = PyList_New(0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 289, CPyStatic_solve___globals);
        goto CPyL46;
    }
    return cpy_r_r16;
CPyL13: ;
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_front)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = cpy_r_r19 != 0;
    if (!cpy_r_r20) goto CPyL52;
    cpy_r_r21 = CPyList_Pop(cpy_r_front, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 291, CPyStatic_solve___globals);
        goto CPyL53;
    }
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_types___TypeVarId))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "propagate_constraints_for", 291, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r21);
        goto CPyL53;
    }
    cpy_r_tv = cpy_r_r22;
    cpy_r_r23 = CPyDict_GetItem(cpy_r_cmap, cpy_r_tv);
    CPy_DECREF(cpy_r_tv);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 292, CPyStatic_solve___globals);
        goto CPyL53;
    }
    if (likely(PyList_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "propagate_constraints_for", 292, CPyStatic_solve___globals, "list", cpy_r_r23);
        goto CPyL53;
    }
    cpy_r_r25 = 0;
CPyL19: ;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_r24)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = (Py_ssize_t)cpy_r_r25 < (Py_ssize_t)cpy_r_r28;
    if (!cpy_r_r29) goto CPyL54;
    cpy_r_r30 = CPyList_GetItemUnsafe(cpy_r_r24, cpy_r_r25);
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_constraints___Constraint))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "propagate_constraints_for", 292, CPyStatic_solve___globals, "mypy.constraints.Constraint", cpy_r_r30);
        goto CPyL55;
    }
    cpy_r_c = cpy_r_r31;
    cpy_r_r32 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    cpy_r_r33 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_r32)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    if (!cpy_r_r36) goto CPyL35;
    cpy_r_r37 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_types___TypeVarType))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "propagate_constraints_for", 295, CPyStatic_solve___globals, "mypy.types.TypeVarType", cpy_r_r37);
        goto CPyL56;
    }
    cpy_r_r39 = ((mypy___types___TypeVarTypeObject *)cpy_r_r38)->_id;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = PySet_Contains(cpy_r_seen, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 295, CPyStatic_solve___globals);
        goto CPyL56;
    }
    cpy_r_r42 = cpy_r_r40;
    cpy_r_r43 = cpy_r_r42 ^ 1;
    if (!cpy_r_r43) goto CPyL35;
    cpy_r_r44 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    if (likely(Py_TYPE(cpy_r_r44) == CPyType_types___TypeVarType))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "propagate_constraints_for", 296, CPyStatic_solve___globals, "mypy.types.TypeVarType", cpy_r_r44);
        goto CPyL56;
    }
    cpy_r_r46 = ((mypy___types___TypeVarTypeObject *)cpy_r_r45)->_id;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = PyDict_Contains(cpy_r_cmap, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 296, CPyStatic_solve___globals);
        goto CPyL56;
    }
    cpy_r_r49 = cpy_r_r47;
    if (!cpy_r_r49) goto CPyL35;
    cpy_r_r50 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_op;
    cpy_r_r51 = cpy_r_r50 & 1;
    cpy_r_r52 = cpy_r_r51 != 0;
    if (!cpy_r_r52) goto CPyL30;
    cpy_r_r53 = CPyTagged_IsEq_(cpy_r_r50, cpy_r_direction);
    if (cpy_r_r53) {
        goto CPyL31;
    } else
        goto CPyL35;
CPyL30: ;
    cpy_r_r54 = cpy_r_r50 == cpy_r_direction;
    if (!cpy_r_r54) goto CPyL35;
CPyL31: ;
    cpy_r_r55 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    if (likely(Py_TYPE(cpy_r_r55) == CPyType_types___TypeVarType))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "propagate_constraints_for", 299, CPyStatic_solve___globals, "mypy.types.TypeVarType", cpy_r_r55);
        goto CPyL56;
    }
    cpy_r_r57 = ((mypy___types___TypeVarTypeObject *)cpy_r_r56)->_id;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = PyList_Append(cpy_r_front, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 299, CPyStatic_solve___globals);
        goto CPyL56;
    }
    cpy_r_r60 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    if (likely(Py_TYPE(cpy_r_r60) == CPyType_types___TypeVarType))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "propagate_constraints_for", 300, CPyStatic_solve___globals, "mypy.types.TypeVarType", cpy_r_r60);
        goto CPyL56;
    }
    cpy_r_r62 = ((mypy___types___TypeVarTypeObject *)cpy_r_r61)->_id;
    CPy_INCREF(cpy_r_r62);
    CPy_DECREF(cpy_r_c);
    cpy_r_r63 = PySet_Add(cpy_r_seen, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 300, CPyStatic_solve___globals);
        goto CPyL55;
    } else
        goto CPyL44;
CPyL35: ;
    cpy_r_r65 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_op;
    cpy_r_r66 = cpy_r_r65 & 1;
    cpy_r_r67 = cpy_r_r66 != 0;
    if (!cpy_r_r67) goto CPyL37;
    cpy_r_r68 = CPyTagged_IsEq_(cpy_r_r65, cpy_r_direction);
    if (cpy_r_r68) {
        goto CPyL38;
    } else
        goto CPyL57;
CPyL37: ;
    cpy_r_r69 = cpy_r_r65 == cpy_r_direction;
    if (!cpy_r_r69) goto CPyL57;
CPyL38: ;
    cpy_r_r70 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    CPy_INCREF(cpy_r_r70);
    CPy_DECREF(cpy_r_c);
    cpy_r_r71 = CPyDef_constraints___Constraint(cpy_r_var_def, cpy_r_direction, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 302, CPyStatic_solve___globals);
        goto CPyL55;
    }
    cpy_r_new_c = cpy_r_r71;
    cpy_r_r72 = CPyDict_GetItem(cpy_r_cmap, cpy_r_var);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 303, CPyStatic_solve___globals);
        goto CPyL58;
    }
    if (likely(PyList_Check(cpy_r_r72)))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "propagate_constraints_for", 303, CPyStatic_solve___globals, "list", cpy_r_r72);
        goto CPyL58;
    }
    cpy_r_r74 = PySequence_Contains(cpy_r_r73, cpy_r_new_c);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 303, CPyStatic_solve___globals);
        goto CPyL58;
    }
    cpy_r_r76 = cpy_r_r74;
    cpy_r_r77 = cpy_r_r76 ^ 1;
    if (!cpy_r_r77) goto CPyL59;
    cpy_r_r78 = PyList_Append(cpy_r_extra_constraints, cpy_r_new_c);
    CPy_DECREF(cpy_r_new_c);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 304, CPyStatic_solve___globals);
        goto CPyL55;
    }
CPyL44: ;
    cpy_r_r80 = cpy_r_r25 + 2;
    cpy_r_r25 = cpy_r_r80;
    goto CPyL19;
CPyL45: ;
    return cpy_r_extra_constraints;
CPyL46: ;
    cpy_r_r81 = NULL;
    return cpy_r_r81;
CPyL47: ;
    CPy_DecRef(cpy_r_extra_constraints);
    goto CPyL46;
CPyL48: ;
    CPy_DecRef(cpy_r_extra_constraints);
    CPy_DecRef(cpy_r_seen);
    goto CPyL46;
CPyL49: ;
    CPy_DecRef(cpy_r_extra_constraints);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_front);
    goto CPyL46;
CPyL50: ;
    CPy_DECREF(cpy_r_extra_constraints);
    CPy_DECREF(cpy_r_seen);
    CPy_DECREF(cpy_r_front);
    goto CPyL11;
CPyL51: ;
    CPy_DecRef(cpy_r_extra_constraints);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_front);
    CPy_DecRef(cpy_r_r12);
    goto CPyL46;
CPyL52: ;
    CPy_DECREF(cpy_r_seen);
    CPy_DECREF(cpy_r_front);
    CPy_DECREF(cpy_r_var_def);
    goto CPyL45;
CPyL53: ;
    CPy_DecRef(cpy_r_extra_constraints);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_front);
    CPy_DecRef(cpy_r_var_def);
    goto CPyL46;
CPyL54: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL13;
CPyL55: ;
    CPy_DecRef(cpy_r_extra_constraints);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_front);
    CPy_DecRef(cpy_r_var_def);
    CPy_DecRef(cpy_r_r24);
    goto CPyL46;
CPyL56: ;
    CPy_DecRef(cpy_r_extra_constraints);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_front);
    CPy_DecRef(cpy_r_var_def);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_c);
    goto CPyL46;
CPyL57: ;
    CPy_DECREF(cpy_r_c);
    goto CPyL44;
CPyL58: ;
    CPy_DecRef(cpy_r_extra_constraints);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_front);
    CPy_DecRef(cpy_r_var_def);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_new_c);
    goto CPyL46;
CPyL59: ;
    CPy_DECREF(cpy_r_new_c);
    goto CPyL44;
}

PyObject *CPyPy_solve___propagate_constraints_for(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"var", "direction", "cmap", 0};
    static CPyArg_Parser parser = {"OOO:propagate_constraints_for", kwlist, 0};
    PyObject *obj_var;
    PyObject *obj_direction;
    PyObject *obj_cmap;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_var, &obj_direction, &obj_cmap)) {
        return NULL;
    }
    PyObject *arg_var;
    if (likely(Py_TYPE(obj_var) == CPyType_types___TypeVarId))
        arg_var = obj_var;
    else {
        CPy_TypeError("mypy.types.TypeVarId", obj_var); 
        goto fail;
    }
    CPyTagged arg_direction;
    if (likely(PyLong_Check(obj_direction)))
        arg_direction = CPyTagged_BorrowFromObject(obj_direction);
    else {
        CPy_TypeError("int", obj_direction); goto fail;
    }
    PyObject *arg_cmap;
    if (likely(PyDict_Check(obj_cmap)))
        arg_cmap = obj_cmap;
    else {
        CPy_TypeError("dict", obj_cmap); 
        goto fail;
    }
    PyObject *retval = CPyDef_solve___propagate_constraints_for(arg_var, arg_direction, arg_cmap);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/solve.py", "propagate_constraints_for", 273, CPyStatic_solve___globals);
    return NULL;
}

tuple_T2OO CPyDef_solve___transitive_closure(PyObject *cpy_r_tvars, PyObject *cpy_r_constraints) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_uppers;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_tv_2;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_lowers;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_graph;
    CPyTagged cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    tuple_T2OO cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    tuple_T2OO cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    CPyTagged cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    CPyTagged cpy_r_r75;
    CPyTagged cpy_r_r76;
    CPyPtr cpy_r_r77;
    int64_t cpy_r_r78;
    CPyTagged cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    CPyPtr cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    CPyTagged cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_lower;
    PyObject *cpy_r_upper;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyTagged cpy_r_r109;
    CPyPtr cpy_r_r110;
    int64_t cpy_r_r111;
    CPyTagged cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_l;
    CPyTagged cpy_r_r116;
    CPyPtr cpy_r_r117;
    int64_t cpy_r_r118;
    CPyTagged cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_u;
    tuple_T2OO cpy_r_r123;
    PyObject *cpy_r_r124;
    int32_t cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    char cpy_r_r128;
    tuple_T2OO cpy_r_r129;
    PyObject *cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    char cpy_r_r133;
    tuple_T2OO cpy_r_r134;
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    CPyTagged cpy_r_r138;
    CPyTagged cpy_r_r139;
    PyObject *cpy_r_extras;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    CPyTagged cpy_r_r142;
    CPyPtr cpy_r_r143;
    int64_t cpy_r_r144;
    CPyTagged cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_u_2;
    tuple_T2OO cpy_r_r149;
    PyObject *cpy_r_r150;
    int32_t cpy_r_r151;
    char cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    CPyTagged cpy_r_r160;
    CPyTagged cpy_r_r161;
    CPyPtr cpy_r_r162;
    int64_t cpy_r_r163;
    CPyTagged cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_l_2;
    tuple_T2OO cpy_r_r168;
    PyObject *cpy_r_r169;
    int32_t cpy_r_r170;
    char cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    int32_t cpy_r_r177;
    char cpy_r_r178;
    CPyTagged cpy_r_r179;
    CPyTagged cpy_r_r180;
    tuple_T2OO cpy_r_r181;
    tuple_T2OO cpy_r_r182;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 324, CPyStatic_solve___globals);
        goto CPyL89;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_tvars)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL7;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_tvars, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_types___TypeVarId))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 324, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r6);
        goto CPyL90;
    }
    cpy_r_tv = cpy_r_r7;
    cpy_r_r8 = PySet_New(NULL);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 324, CPyStatic_solve___globals);
        goto CPyL91;
    }
    cpy_r_r9 = CPyDict_SetItem(cpy_r_r0, cpy_r_tv, cpy_r_r8);
    CPy_DECREF(cpy_r_tv);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 324, CPyStatic_solve___globals);
        goto CPyL90;
    }
    cpy_r_r11 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r11;
    goto CPyL2;
CPyL7: ;
    cpy_r_uppers = cpy_r_r0;
    cpy_r_r12 = PyDict_New();
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 325, CPyStatic_solve___globals);
        goto CPyL92;
    }
    cpy_r_r13 = 0;
CPyL9: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_tvars)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL14;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_tvars, cpy_r_r13);
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_types___TypeVarId))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 325, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r18);
        goto CPyL93;
    }
    cpy_r_tv_2 = cpy_r_r19;
    cpy_r_r20 = PySet_New(NULL);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 325, CPyStatic_solve___globals);
        goto CPyL94;
    }
    cpy_r_r21 = CPyDict_SetItem(cpy_r_r12, cpy_r_tv_2, cpy_r_r20);
    CPy_DECREF(cpy_r_tv_2);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 325, CPyStatic_solve___globals);
        goto CPyL93;
    }
    cpy_r_r23 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r23;
    goto CPyL9;
CPyL14: ;
    cpy_r_lowers = cpy_r_r12;
    cpy_r_r24 = PySet_New(NULL);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 326, CPyStatic_solve___globals);
        goto CPyL95;
    }
    cpy_r_graph = cpy_r_r24;
    cpy_r_r25 = 0;
CPyL16: ;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_constraints)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = (Py_ssize_t)cpy_r_r25 < (Py_ssize_t)cpy_r_r28;
    if (!cpy_r_r29) goto CPyL35;
    cpy_r_r30 = CPyList_GetItemUnsafe(cpy_r_constraints, cpy_r_r25);
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_constraints___Constraint))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 329, CPyStatic_solve___globals, "mypy.constraints.Constraint", cpy_r_r30);
        goto CPyL96;
    }
    cpy_r_c = cpy_r_r31;
    cpy_r_r32 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    cpy_r_r33 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_r32)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    if (!cpy_r_r36) goto CPyL27;
    cpy_r_r37 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_types___TypeVarType))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 330, CPyStatic_solve___globals, "mypy.types.TypeVarType", cpy_r_r37);
        goto CPyL97;
    }
    cpy_r_r39 = ((mypy___types___TypeVarTypeObject *)cpy_r_r38)->_id;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = PySequence_Contains(cpy_r_tvars, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 330, CPyStatic_solve___globals);
        goto CPyL97;
    }
    cpy_r_r42 = cpy_r_r40;
    if (!cpy_r_r42) goto CPyL27;
    cpy_r_r43 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_op;
    cpy_r_r44 = cpy_r_r43 == 0;
    if (!cpy_r_r44) goto CPyL25;
    cpy_r_r45 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_type_var;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    if (likely(Py_TYPE(cpy_r_r46) == CPyType_types___TypeVarType))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 332, CPyStatic_solve___globals, "mypy.types.TypeVarType", cpy_r_r46);
        goto CPyL98;
    }
    cpy_r_r48 = ((mypy___types___TypeVarTypeObject *)cpy_r_r47)->_id;
    CPy_INCREF(cpy_r_r48);
    cpy_r_r49.f0 = cpy_r_r45;
    cpy_r_r49.f1 = cpy_r_r48;
    CPy_INCREF(cpy_r_r49.f0);
    CPy_INCREF(cpy_r_r49.f1);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = PyTuple_New(2);
    if (unlikely(cpy_r_r50 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6831 = cpy_r_r49.f0;
    PyTuple_SET_ITEM(cpy_r_r50, 0, __tmp6831);
    PyObject *__tmp6832 = cpy_r_r49.f1;
    PyTuple_SET_ITEM(cpy_r_r50, 1, __tmp6832);
    cpy_r_r51 = PySet_Add(cpy_r_graph, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 332, CPyStatic_solve___globals);
        goto CPyL97;
    } else
        goto CPyL27;
CPyL25: ;
    cpy_r_r53 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    if (likely(Py_TYPE(cpy_r_r53) == CPyType_types___TypeVarType))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 334, CPyStatic_solve___globals, "mypy.types.TypeVarType", cpy_r_r53);
        goto CPyL97;
    }
    cpy_r_r55 = ((mypy___types___TypeVarTypeObject *)cpy_r_r54)->_id;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_type_var;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57.f0 = cpy_r_r55;
    cpy_r_r57.f1 = cpy_r_r56;
    CPy_INCREF(cpy_r_r57.f0);
    CPy_INCREF(cpy_r_r57.f1);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r58 = PyTuple_New(2);
    if (unlikely(cpy_r_r58 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6833 = cpy_r_r57.f0;
    PyTuple_SET_ITEM(cpy_r_r58, 0, __tmp6833);
    PyObject *__tmp6834 = cpy_r_r57.f1;
    PyTuple_SET_ITEM(cpy_r_r58, 1, __tmp6834);
    cpy_r_r59 = PySet_Add(cpy_r_graph, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 334, CPyStatic_solve___globals);
        goto CPyL97;
    }
CPyL27: ;
    cpy_r_r61 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_op;
    cpy_r_r62 = cpy_r_r61 == 0;
    if (!cpy_r_r62) goto CPyL31;
    cpy_r_r63 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_type_var;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = CPyDict_GetItem(cpy_r_uppers, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 336, CPyStatic_solve___globals);
        goto CPyL97;
    }
    if (likely(PySet_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 336, CPyStatic_solve___globals, "set", cpy_r_r64);
        goto CPyL97;
    }
    cpy_r_r66 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    CPy_INCREF(cpy_r_r66);
    CPy_DECREF(cpy_r_c);
    cpy_r_r67 = PySet_Add(cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 336, CPyStatic_solve___globals);
        goto CPyL96;
    } else
        goto CPyL34;
CPyL31: ;
    cpy_r_r69 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_type_var;
    CPy_INCREF(cpy_r_r69);
    cpy_r_r70 = CPyDict_GetItem(cpy_r_lowers, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 338, CPyStatic_solve___globals);
        goto CPyL97;
    }
    if (likely(PySet_Check(cpy_r_r70)))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 338, CPyStatic_solve___globals, "set", cpy_r_r70);
        goto CPyL97;
    }
    cpy_r_r72 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    CPy_INCREF(cpy_r_r72);
    CPy_DECREF(cpy_r_c);
    cpy_r_r73 = PySet_Add(cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 338, CPyStatic_solve___globals);
        goto CPyL96;
    }
CPyL34: ;
    cpy_r_r75 = cpy_r_r25 + 2;
    cpy_r_r25 = cpy_r_r75;
    goto CPyL16;
CPyL35: ;
    cpy_r_r76 = 0;
CPyL36: ;
    cpy_r_r77 = (CPyPtr)&((PyVarObject *)cpy_r_constraints)->ob_size;
    cpy_r_r78 = *(int64_t *)cpy_r_r77;
    cpy_r_r79 = cpy_r_r78 << 1;
    cpy_r_r80 = (Py_ssize_t)cpy_r_r76 < (Py_ssize_t)cpy_r_r79;
    if (!cpy_r_r80) goto CPyL99;
    cpy_r_r81 = CPyList_GetItemUnsafe(cpy_r_constraints, cpy_r_r76);
    if (likely(Py_TYPE(cpy_r_r81) == CPyType_constraints___Constraint))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 342, CPyStatic_solve___globals, "mypy.constraints.Constraint", cpy_r_r81);
        goto CPyL96;
    }
    cpy_r_c = cpy_r_r82;
    cpy_r_r83 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    cpy_r_r84 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r85 = (CPyPtr)&((PyObject *)cpy_r_r83)->ob_type;
    cpy_r_r86 = *(PyObject * *)cpy_r_r85;
    cpy_r_r87 = cpy_r_r86 == cpy_r_r84;
    if (!cpy_r_r87) goto CPyL100;
    cpy_r_r88 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    if (likely(Py_TYPE(cpy_r_r88) == CPyType_types___TypeVarType))
        cpy_r_r89 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 343, CPyStatic_solve___globals, "mypy.types.TypeVarType", cpy_r_r88);
        goto CPyL97;
    }
    cpy_r_r90 = ((mypy___types___TypeVarTypeObject *)cpy_r_r89)->_id;
    CPy_INCREF(cpy_r_r90);
    cpy_r_r91 = PySequence_Contains(cpy_r_tvars, cpy_r_r90);
    CPy_DECREF(cpy_r_r90);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 343, CPyStatic_solve___globals);
        goto CPyL97;
    }
    cpy_r_r93 = cpy_r_r91;
    if (!cpy_r_r93) goto CPyL100;
    cpy_r_r94 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_op;
    cpy_r_r95 = cpy_r_r94 == 0;
    if (!cpy_r_r95) goto CPyL45;
    cpy_r_r96 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_type_var;
    CPy_INCREF(cpy_r_r96);
    cpy_r_r97 = cpy_r_r96;
    cpy_r_r98 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    if (likely(Py_TYPE(cpy_r_r98) == CPyType_types___TypeVarType))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 345, CPyStatic_solve___globals, "mypy.types.TypeVarType", cpy_r_r98);
        goto CPyL101;
    }
    cpy_r_r100 = ((mypy___types___TypeVarTypeObject *)cpy_r_r99)->_id;
    CPy_INCREF(cpy_r_r100);
    CPy_DECREF(cpy_r_c);
    cpy_r_r101 = cpy_r_r100;
    cpy_r_lower = cpy_r_r97;
    cpy_r_upper = cpy_r_r101;
    goto CPyL47;
CPyL45: ;
    cpy_r_r102 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    if (likely(Py_TYPE(cpy_r_r102) == CPyType_types___TypeVarType))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 347, CPyStatic_solve___globals, "mypy.types.TypeVarType", cpy_r_r102);
        goto CPyL97;
    }
    cpy_r_r104 = ((mypy___types___TypeVarTypeObject *)cpy_r_r103)->_id;
    CPy_INCREF(cpy_r_r104);
    cpy_r_r105 = cpy_r_r104;
    cpy_r_r106 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_type_var;
    CPy_INCREF(cpy_r_r106);
    CPy_DECREF(cpy_r_c);
    cpy_r_r107 = cpy_r_r106;
    cpy_r_lower = cpy_r_r105;
    cpy_r_upper = cpy_r_r107;
CPyL47: ;
    cpy_r_r108 = PySet_New(NULL);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 348, CPyStatic_solve___globals);
        goto CPyL102;
    }
    cpy_r_r109 = 0;
CPyL49: ;
    cpy_r_r110 = (CPyPtr)&((PyVarObject *)cpy_r_tvars)->ob_size;
    cpy_r_r111 = *(int64_t *)cpy_r_r110;
    cpy_r_r112 = cpy_r_r111 << 1;
    cpy_r_r113 = (Py_ssize_t)cpy_r_r109 < (Py_ssize_t)cpy_r_r112;
    if (!cpy_r_r113) goto CPyL63;
    cpy_r_r114 = CPyList_GetItemUnsafe(cpy_r_tvars, cpy_r_r109);
    if (likely(Py_TYPE(cpy_r_r114) == CPyType_types___TypeVarId))
        cpy_r_r115 = cpy_r_r114;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 348, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r114);
        goto CPyL103;
    }
    cpy_r_l = cpy_r_r115;
    cpy_r_r116 = 0;
CPyL52: ;
    cpy_r_r117 = (CPyPtr)&((PyVarObject *)cpy_r_tvars)->ob_size;
    cpy_r_r118 = *(int64_t *)cpy_r_r117;
    cpy_r_r119 = cpy_r_r118 << 1;
    cpy_r_r120 = (Py_ssize_t)cpy_r_r116 < (Py_ssize_t)cpy_r_r119;
    if (!cpy_r_r120) goto CPyL104;
    cpy_r_r121 = CPyList_GetItemUnsafe(cpy_r_tvars, cpy_r_r116);
    if (likely(Py_TYPE(cpy_r_r121) == CPyType_types___TypeVarId))
        cpy_r_r122 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 348, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r121);
        goto CPyL105;
    }
    cpy_r_u = cpy_r_r122;
    cpy_r_r123.f0 = cpy_r_l;
    cpy_r_r123.f1 = cpy_r_lower;
    CPy_INCREF(cpy_r_r123.f0);
    CPy_INCREF(cpy_r_r123.f1);
    cpy_r_r124 = PyTuple_New(2);
    if (unlikely(cpy_r_r124 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6835 = cpy_r_r123.f0;
    PyTuple_SET_ITEM(cpy_r_r124, 0, __tmp6835);
    PyObject *__tmp6836 = cpy_r_r123.f1;
    PyTuple_SET_ITEM(cpy_r_r124, 1, __tmp6836);
    cpy_r_r125 = PySet_Contains(cpy_r_graph, cpy_r_r124);
    CPy_DECREF(cpy_r_r124);
    cpy_r_r126 = cpy_r_r125 >= 0;
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 349, CPyStatic_solve___globals);
        goto CPyL106;
    }
    cpy_r_r127 = cpy_r_r125;
    if (cpy_r_r127) goto CPyL57;
    cpy_r_r128 = cpy_r_r127;
    goto CPyL59;
CPyL57: ;
    cpy_r_r129.f0 = cpy_r_upper;
    cpy_r_r129.f1 = cpy_r_u;
    CPy_INCREF(cpy_r_r129.f0);
    CPy_INCREF(cpy_r_r129.f1);
    cpy_r_r130 = PyTuple_New(2);
    if (unlikely(cpy_r_r130 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6837 = cpy_r_r129.f0;
    PyTuple_SET_ITEM(cpy_r_r130, 0, __tmp6837);
    PyObject *__tmp6838 = cpy_r_r129.f1;
    PyTuple_SET_ITEM(cpy_r_r130, 1, __tmp6838);
    cpy_r_r131 = PySet_Contains(cpy_r_graph, cpy_r_r130);
    CPy_DECREF(cpy_r_r130);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 349, CPyStatic_solve___globals);
        goto CPyL106;
    }
    cpy_r_r133 = cpy_r_r131;
    cpy_r_r128 = cpy_r_r133;
CPyL59: ;
    if (!cpy_r_r128) goto CPyL107;
    cpy_r_r134.f0 = cpy_r_l;
    cpy_r_r134.f1 = cpy_r_u;
    CPy_INCREF(cpy_r_r134.f0);
    CPy_INCREF(cpy_r_r134.f1);
    CPy_DECREF(cpy_r_u);
    cpy_r_r135 = PyTuple_New(2);
    if (unlikely(cpy_r_r135 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6839 = cpy_r_r134.f0;
    PyTuple_SET_ITEM(cpy_r_r135, 0, __tmp6839);
    PyObject *__tmp6840 = cpy_r_r134.f1;
    PyTuple_SET_ITEM(cpy_r_r135, 1, __tmp6840);
    cpy_r_r136 = PySet_Add(cpy_r_r108, cpy_r_r135);
    CPy_DECREF(cpy_r_r135);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 348, CPyStatic_solve___globals);
        goto CPyL105;
    }
CPyL61: ;
    cpy_r_r138 = cpy_r_r116 + 2;
    cpy_r_r116 = cpy_r_r138;
    goto CPyL52;
CPyL62: ;
    cpy_r_r139 = cpy_r_r109 + 2;
    cpy_r_r109 = cpy_r_r139;
    goto CPyL49;
CPyL63: ;
    cpy_r_extras = cpy_r_r108;
    cpy_r_r140 = PyNumber_InPlaceOr(cpy_r_graph, cpy_r_extras);
    CPy_DECREF(cpy_r_graph);
    CPy_DECREF(cpy_r_extras);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 351, CPyStatic_solve___globals);
        goto CPyL108;
    }
    if (likely(PySet_Check(cpy_r_r140)))
        cpy_r_r141 = cpy_r_r140;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 351, CPyStatic_solve___globals, "set", cpy_r_r140);
        goto CPyL108;
    }
    cpy_r_graph = cpy_r_r141;
    cpy_r_r142 = 0;
CPyL66: ;
    cpy_r_r143 = (CPyPtr)&((PyVarObject *)cpy_r_tvars)->ob_size;
    cpy_r_r144 = *(int64_t *)cpy_r_r143;
    cpy_r_r145 = cpy_r_r144 << 1;
    cpy_r_r146 = (Py_ssize_t)cpy_r_r142 < (Py_ssize_t)cpy_r_r145;
    if (!cpy_r_r146) goto CPyL76;
    cpy_r_r147 = CPyList_GetItemUnsafe(cpy_r_tvars, cpy_r_r142);
    if (likely(Py_TYPE(cpy_r_r147) == CPyType_types___TypeVarId))
        cpy_r_r148 = cpy_r_r147;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 352, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r147);
        goto CPyL102;
    }
    cpy_r_u_2 = cpy_r_r148;
    cpy_r_r149.f0 = cpy_r_upper;
    cpy_r_r149.f1 = cpy_r_u_2;
    CPy_INCREF(cpy_r_r149.f0);
    CPy_INCREF(cpy_r_r149.f1);
    cpy_r_r150 = PyTuple_New(2);
    if (unlikely(cpy_r_r150 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6841 = cpy_r_r149.f0;
    PyTuple_SET_ITEM(cpy_r_r150, 0, __tmp6841);
    PyObject *__tmp6842 = cpy_r_r149.f1;
    PyTuple_SET_ITEM(cpy_r_r150, 1, __tmp6842);
    cpy_r_r151 = PySet_Contains(cpy_r_graph, cpy_r_r150);
    CPy_DECREF(cpy_r_r150);
    cpy_r_r152 = cpy_r_r151 >= 0;
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 353, CPyStatic_solve___globals);
        goto CPyL109;
    }
    cpy_r_r153 = cpy_r_r151;
    if (!cpy_r_r153) goto CPyL110;
    cpy_r_r154 = CPyDict_GetItem(cpy_r_lowers, cpy_r_u_2);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 354, CPyStatic_solve___globals);
        goto CPyL109;
    }
    cpy_r_r155 = CPyDict_GetItem(cpy_r_lowers, cpy_r_lower);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 354, CPyStatic_solve___globals);
        goto CPyL111;
    }
    if (likely(PySet_Check(cpy_r_r155)))
        cpy_r_r156 = cpy_r_r155;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 354, CPyStatic_solve___globals, "set", cpy_r_r155);
        goto CPyL111;
    }
    cpy_r_r157 = PyNumber_InPlaceOr(cpy_r_r154, cpy_r_r156);
    CPy_DECREF(cpy_r_r154);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 354, CPyStatic_solve___globals);
        goto CPyL109;
    }
    cpy_r_r158 = CPyDict_SetItem(cpy_r_lowers, cpy_r_u_2, cpy_r_r157);
    CPy_DECREF(cpy_r_u_2);
    CPy_DECREF(cpy_r_r157);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 354, CPyStatic_solve___globals);
        goto CPyL102;
    }
CPyL75: ;
    cpy_r_r160 = cpy_r_r142 + 2;
    cpy_r_r142 = cpy_r_r160;
    goto CPyL66;
CPyL76: ;
    cpy_r_r161 = 0;
CPyL77: ;
    cpy_r_r162 = (CPyPtr)&((PyVarObject *)cpy_r_tvars)->ob_size;
    cpy_r_r163 = *(int64_t *)cpy_r_r162;
    cpy_r_r164 = cpy_r_r163 << 1;
    cpy_r_r165 = (Py_ssize_t)cpy_r_r161 < (Py_ssize_t)cpy_r_r164;
    if (!cpy_r_r165) goto CPyL112;
    cpy_r_r166 = CPyList_GetItemUnsafe(cpy_r_tvars, cpy_r_r161);
    if (likely(Py_TYPE(cpy_r_r166) == CPyType_types___TypeVarId))
        cpy_r_r167 = cpy_r_r166;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 355, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r166);
        goto CPyL102;
    }
    cpy_r_l_2 = cpy_r_r167;
    cpy_r_r168.f0 = cpy_r_l_2;
    cpy_r_r168.f1 = cpy_r_lower;
    CPy_INCREF(cpy_r_r168.f0);
    CPy_INCREF(cpy_r_r168.f1);
    cpy_r_r169 = PyTuple_New(2);
    if (unlikely(cpy_r_r169 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6843 = cpy_r_r168.f0;
    PyTuple_SET_ITEM(cpy_r_r169, 0, __tmp6843);
    PyObject *__tmp6844 = cpy_r_r168.f1;
    PyTuple_SET_ITEM(cpy_r_r169, 1, __tmp6844);
    cpy_r_r170 = PySet_Contains(cpy_r_graph, cpy_r_r169);
    CPy_DECREF(cpy_r_r169);
    cpy_r_r171 = cpy_r_r170 >= 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 356, CPyStatic_solve___globals);
        goto CPyL113;
    }
    cpy_r_r172 = cpy_r_r170;
    if (!cpy_r_r172) goto CPyL114;
    cpy_r_r173 = CPyDict_GetItem(cpy_r_uppers, cpy_r_l_2);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 357, CPyStatic_solve___globals);
        goto CPyL113;
    }
    cpy_r_r174 = CPyDict_GetItem(cpy_r_uppers, cpy_r_upper);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 357, CPyStatic_solve___globals);
        goto CPyL115;
    }
    if (likely(PySet_Check(cpy_r_r174)))
        cpy_r_r175 = cpy_r_r174;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "transitive_closure", 357, CPyStatic_solve___globals, "set", cpy_r_r174);
        goto CPyL115;
    }
    cpy_r_r176 = PyNumber_InPlaceOr(cpy_r_r173, cpy_r_r175);
    CPy_DECREF(cpy_r_r173);
    CPy_DECREF(cpy_r_r175);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 357, CPyStatic_solve___globals);
        goto CPyL113;
    }
    cpy_r_r177 = CPyDict_SetItem(cpy_r_uppers, cpy_r_l_2, cpy_r_r176);
    CPy_DECREF(cpy_r_l_2);
    CPy_DECREF(cpy_r_r176);
    cpy_r_r178 = cpy_r_r177 >= 0;
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("mypy/solve.py", "transitive_closure", 357, CPyStatic_solve___globals);
        goto CPyL102;
    }
CPyL86: ;
    cpy_r_r179 = cpy_r_r161 + 2;
    cpy_r_r161 = cpy_r_r179;
    goto CPyL77;
CPyL87: ;
    cpy_r_r180 = cpy_r_r76 + 2;
    cpy_r_r76 = cpy_r_r180;
    goto CPyL36;
CPyL88: ;
    cpy_r_r181.f0 = cpy_r_lowers;
    cpy_r_r181.f1 = cpy_r_uppers;
    CPy_INCREF(cpy_r_r181.f0);
    CPy_INCREF(cpy_r_r181.f1);
    CPy_DECREF(cpy_r_lowers);
    CPy_DECREF(cpy_r_uppers);
    return cpy_r_r181;
CPyL89: ;
    tuple_T2OO __tmp6845 = { NULL, NULL };
    cpy_r_r182 = __tmp6845;
    return cpy_r_r182;
CPyL90: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL89;
CPyL91: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_tv);
    goto CPyL89;
CPyL92: ;
    CPy_DecRef(cpy_r_uppers);
    goto CPyL89;
CPyL93: ;
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_r12);
    goto CPyL89;
CPyL94: ;
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_tv_2);
    goto CPyL89;
CPyL95: ;
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_lowers);
    goto CPyL89;
CPyL96: ;
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_graph);
    goto CPyL89;
CPyL97: ;
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_c);
    goto CPyL89;
CPyL98: ;
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_c);
    CPy_DecRef(cpy_r_r45);
    goto CPyL89;
CPyL99: ;
    CPy_DECREF(cpy_r_graph);
    goto CPyL88;
CPyL100: ;
    CPy_DECREF(cpy_r_c);
    goto CPyL87;
CPyL101: ;
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_c);
    CPy_DecRef(cpy_r_r97);
    goto CPyL89;
CPyL102: ;
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_lower);
    CPy_DecRef(cpy_r_upper);
    goto CPyL89;
CPyL103: ;
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_lower);
    CPy_DecRef(cpy_r_upper);
    CPy_DecRef(cpy_r_r108);
    goto CPyL89;
CPyL104: ;
    CPy_DECREF(cpy_r_l);
    goto CPyL62;
CPyL105: ;
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_lower);
    CPy_DecRef(cpy_r_upper);
    CPy_DecRef(cpy_r_r108);
    CPy_DecRef(cpy_r_l);
    goto CPyL89;
CPyL106: ;
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_lower);
    CPy_DecRef(cpy_r_upper);
    CPy_DecRef(cpy_r_r108);
    CPy_DecRef(cpy_r_l);
    CPy_DecRef(cpy_r_u);
    goto CPyL89;
CPyL107: ;
    CPy_DECREF(cpy_r_u);
    goto CPyL61;
CPyL108: ;
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_lower);
    CPy_DecRef(cpy_r_upper);
    goto CPyL89;
CPyL109: ;
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_lower);
    CPy_DecRef(cpy_r_upper);
    CPy_DecRef(cpy_r_u_2);
    goto CPyL89;
CPyL110: ;
    CPy_DECREF(cpy_r_u_2);
    goto CPyL75;
CPyL111: ;
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_lower);
    CPy_DecRef(cpy_r_upper);
    CPy_DecRef(cpy_r_u_2);
    CPy_DecRef(cpy_r_r154);
    goto CPyL89;
CPyL112: ;
    CPy_DECREF(cpy_r_lower);
    CPy_DECREF(cpy_r_upper);
    goto CPyL87;
CPyL113: ;
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_lower);
    CPy_DecRef(cpy_r_upper);
    CPy_DecRef(cpy_r_l_2);
    goto CPyL89;
CPyL114: ;
    CPy_DECREF(cpy_r_l_2);
    goto CPyL86;
CPyL115: ;
    CPy_DecRef(cpy_r_uppers);
    CPy_DecRef(cpy_r_lowers);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_lower);
    CPy_DecRef(cpy_r_upper);
    CPy_DecRef(cpy_r_l_2);
    CPy_DecRef(cpy_r_r173);
    goto CPyL89;
}

PyObject *CPyPy_solve___transitive_closure(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tvars", "constraints", 0};
    static CPyArg_Parser parser = {"OO:transitive_closure", kwlist, 0};
    PyObject *obj_tvars;
    PyObject *obj_constraints;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_tvars, &obj_constraints)) {
        return NULL;
    }
    PyObject *arg_tvars;
    if (likely(PyList_Check(obj_tvars)))
        arg_tvars = obj_tvars;
    else {
        CPy_TypeError("list", obj_tvars); 
        goto fail;
    }
    PyObject *arg_constraints;
    if (likely(PyList_Check(obj_constraints)))
        arg_constraints = obj_constraints;
    else {
        CPy_TypeError("list", obj_constraints); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_solve___transitive_closure(arg_tvars, arg_constraints);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6846 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp6846);
    PyObject *__tmp6847 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp6847);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/solve.py", "transitive_closure", 308, CPyStatic_solve___globals);
    return NULL;
}

PyObject *CPyDef_solve___compute_dependencies(PyObject *cpy_r_cmap) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_vars;
    CPyTagged cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3CIO cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_deps;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "compute_dependencies", 369, CPyStatic_solve___globals);
        goto CPyL21;
    }
    cpy_r_res = cpy_r_r0;
    cpy_r_r1 = CPyDict_Keys(cpy_r_cmap);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "compute_dependencies", 370, CPyStatic_solve___globals);
        goto CPyL22;
    }
    cpy_r_vars = cpy_r_r1;
    cpy_r_r2 = 0;
    cpy_r_r3 = PyDict_Size(cpy_r_cmap);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = CPyDict_GetKeysIter(cpy_r_cmap);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "compute_dependencies", 371, CPyStatic_solve___globals);
        goto CPyL23;
    }
CPyL3: ;
    cpy_r_r6 = CPyDict_NextKey(cpy_r_r5, cpy_r_r2);
    cpy_r_r7 = cpy_r_r6.f1;
    cpy_r_r2 = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f0;
    if (!cpy_r_r8) goto CPyL24;
    cpy_r_r9 = cpy_r_r6.f2;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r6.f2);
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_types___TypeVarId))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "compute_dependencies", 371, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r9);
        goto CPyL25;
    }
    cpy_r_tv = cpy_r_r10;
    cpy_r_r11 = PySet_New(NULL);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "compute_dependencies", 372, CPyStatic_solve___globals);
        goto CPyL26;
    }
    cpy_r_deps = cpy_r_r11;
    cpy_r_r12 = CPyDict_GetItem(cpy_r_cmap, cpy_r_tv);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "compute_dependencies", 373, CPyStatic_solve___globals);
        goto CPyL27;
    }
    if (likely(PyList_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "compute_dependencies", 373, CPyStatic_solve___globals, "list", cpy_r_r12);
        goto CPyL27;
    }
    cpy_r_r14 = 0;
CPyL9: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL28;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r14);
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_constraints___Constraint))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "compute_dependencies", 373, CPyStatic_solve___globals, "mypy.constraints.Constraint", cpy_r_r19);
        goto CPyL29;
    }
    cpy_r_c = cpy_r_r20;
    cpy_r_r21 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_c);
    cpy_r_r22 = CPyDef_solve___get_vars(cpy_r_r21, cpy_r_vars);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "compute_dependencies", 374, CPyStatic_solve___globals);
        goto CPyL29;
    }
    cpy_r_r23 = PyNumber_InPlaceOr(cpy_r_deps, cpy_r_r22);
    CPy_DECREF(cpy_r_deps);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "compute_dependencies", 374, CPyStatic_solve___globals);
        goto CPyL30;
    }
    if (likely(PySet_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "compute_dependencies", 374, CPyStatic_solve___globals, "set", cpy_r_r23);
        goto CPyL30;
    }
    cpy_r_deps = cpy_r_r24;
    cpy_r_r25 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r25;
    goto CPyL9;
CPyL16: ;
    cpy_r_r26 = PySequence_List(cpy_r_deps);
    CPy_DECREF(cpy_r_deps);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "compute_dependencies", 375, CPyStatic_solve___globals);
        goto CPyL26;
    }
    cpy_r_r27 = CPyDict_SetItem(cpy_r_res, cpy_r_tv, cpy_r_r26);
    CPy_DECREF(cpy_r_tv);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/solve.py", "compute_dependencies", 375, CPyStatic_solve___globals);
        goto CPyL25;
    }
    cpy_r_r29 = CPyDict_CheckSize(cpy_r_cmap, cpy_r_r4);
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/solve.py", "compute_dependencies", 371, CPyStatic_solve___globals);
        goto CPyL25;
    } else
        goto CPyL3;
CPyL19: ;
    cpy_r_r30 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/solve.py", "compute_dependencies", 371, CPyStatic_solve___globals);
        goto CPyL22;
    }
    return cpy_r_res;
CPyL21: ;
    cpy_r_r31 = NULL;
    return cpy_r_r31;
CPyL22: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL21;
CPyL23: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_vars);
    goto CPyL21;
CPyL24: ;
    CPy_DECREF(cpy_r_vars);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL19;
CPyL25: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r5);
    goto CPyL21;
CPyL26: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_tv);
    goto CPyL21;
CPyL27: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_deps);
    goto CPyL21;
CPyL28: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL16;
CPyL29: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r13);
    goto CPyL21;
CPyL30: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_vars);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_r13);
    goto CPyL21;
}

PyObject *CPyPy_solve___compute_dependencies(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cmap", 0};
    static CPyArg_Parser parser = {"O:compute_dependencies", kwlist, 0};
    PyObject *obj_cmap;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_cmap)) {
        return NULL;
    }
    PyObject *arg_cmap;
    if (likely(PyDict_Check(obj_cmap)))
        arg_cmap = obj_cmap;
    else {
        CPy_TypeError("dict", obj_cmap); 
        goto fail;
    }
    PyObject *retval = CPyDef_solve___compute_dependencies(arg_cmap);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/solve.py", "compute_dependencies", 361, CPyStatic_solve___globals);
    return NULL;
}

char CPyDef_solve___check_linear(PyObject *cpy_r_scc, PyObject *cpy_r_cmap) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_tv;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = PyObject_GetIter(cpy_r_scc);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "check_linear", 384, CPyStatic_solve___globals);
        goto CPyL22;
    }
CPyL1: ;
    cpy_r_r1 = PyIter_Next(cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL23;
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_types___TypeVarId))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "check_linear", 384, CPyStatic_solve___globals, "mypy.types.TypeVarId", cpy_r_r1);
        goto CPyL24;
    }
    cpy_r_tv = cpy_r_r2;
    cpy_r_r3 = 0;
    cpy_r_r4 = CPyDict_GetItem(cpy_r_cmap, cpy_r_tv);
    CPy_DECREF(cpy_r_tv);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "check_linear", 387, CPyStatic_solve___globals);
        goto CPyL24;
    }
    if (likely(PyList_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "check_linear", 387, CPyStatic_solve___globals, "list", cpy_r_r4);
        goto CPyL24;
    }
    cpy_r_r6 = 0;
CPyL6: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL25;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_constraints___Constraint))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "check_linear", 385, CPyStatic_solve___globals, "mypy.constraints.Constraint", cpy_r_r11);
        goto CPyL26;
    }
    cpy_r_c = cpy_r_r12;
    cpy_r_r13 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = PySequence_List(cpy_r_scc);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "check_linear", 386, CPyStatic_solve___globals);
        goto CPyL27;
    }
    cpy_r_r15 = CPyDef_solve___get_vars(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "check_linear", 386, CPyStatic_solve___globals);
        goto CPyL28;
    }
    cpy_r_r16 = PyObject_IsTrue(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/solve.py", "check_linear", 386, CPyStatic_solve___globals);
        goto CPyL29;
    }
    cpy_r_r18 = cpy_r_r16;
    if (cpy_r_r18) {
        goto CPyL30;
    } else
        goto CPyL31;
CPyL12: ;
    cpy_r_r19 = cpy_r_r15;
    goto CPyL14;
CPyL13: ;
    cpy_r_r20 = ((mypy___constraints___ConstraintObject *)cpy_r_c)->_target;
    cpy_r_r21 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_r20)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    CPy_DECREF(cpy_r_c);
    cpy_r_r25 = cpy_r_r24 ^ 1;
    cpy_r_r26 = cpy_r_r25 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r19 = cpy_r_r26;
CPyL14: ;
    cpy_r_r27 = PyObject_IsTrue(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/solve.py", "check_linear", -1, CPyStatic_solve___globals);
        goto CPyL26;
    }
    cpy_r_r29 = cpy_r_r27;
    if (cpy_r_r29) {
        goto CPyL32;
    } else
        goto CPyL17;
CPyL16: ;
    cpy_r_r3 = 1;
    goto CPyL18;
CPyL17: ;
    cpy_r_r30 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r30;
    goto CPyL6;
CPyL18: ;
    if (cpy_r_r3) {
        goto CPyL33;
    } else
        goto CPyL1;
CPyL19: ;
    return 0;
CPyL20: ;
    cpy_r_r31 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/solve.py", "check_linear", 384, CPyStatic_solve___globals);
        goto CPyL22;
    }
    return 1;
CPyL22: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL23: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL20;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL22;
CPyL25: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL18;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    goto CPyL22;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_c);
    CPy_DecRef(cpy_r_r13);
    goto CPyL22;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_c);
    goto CPyL22;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_c);
    CPy_DecRef(cpy_r_r15);
    goto CPyL22;
CPyL30: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL13;
CPyL31: ;
    CPy_DECREF(cpy_r_c);
    goto CPyL12;
CPyL32: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL16;
CPyL33: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL19;
}

PyObject *CPyPy_solve___check_linear(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"scc", "cmap", 0};
    static CPyArg_Parser parser = {"OO:check_linear", kwlist, 0};
    PyObject *obj_scc;
    PyObject *obj_cmap;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_scc, &obj_cmap)) {
        return NULL;
    }
    PyObject *arg_scc;
    if (likely(PySet_Check(obj_scc)))
        arg_scc = obj_scc;
    else {
        CPy_TypeError("set", obj_scc); 
        goto fail;
    }
    PyObject *arg_cmap;
    if (likely(PyDict_Check(obj_cmap)))
        arg_cmap = obj_cmap;
    else {
        CPy_TypeError("dict", obj_cmap); 
        goto fail;
    }
    char retval = CPyDef_solve___check_linear(arg_scc, arg_cmap);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/solve.py", "check_linear", 379, CPyStatic_solve___globals);
    return NULL;
}

PyObject *CPyDef_solve___get_vars(PyObject *cpy_r_target, PyObject *cpy_r_vars) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "get_vars", 395, CPyStatic_solve___globals);
        goto CPyL11;
    }
    cpy_r_r1 = CPyDef_typeops___get_type_vars(cpy_r_target);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "get_vars", 395, CPyStatic_solve___globals);
        goto CPyL12;
    }
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL13;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_types___TypeVarType))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "get_vars", 395, CPyStatic_solve___globals, "mypy.types.TypeVarType", cpy_r_r7);
        goto CPyL14;
    }
    cpy_r_tv = cpy_r_r8;
    cpy_r_r9 = ((mypy___types___TypeVarTypeObject *)cpy_r_tv)->_id;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_tv);
    cpy_r_r10 = PySet_Add(cpy_r_r0, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/solve.py", "get_vars", 395, CPyStatic_solve___globals);
        goto CPyL14;
    }
    cpy_r_r12 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r12;
    goto CPyL3;
CPyL7: ;
    cpy_r_r13 = PySet_New(cpy_r_vars);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "get_vars", 395, CPyStatic_solve___globals);
        goto CPyL12;
    }
    cpy_r_r14 = PyNumber_And(cpy_r_r0, cpy_r_r13);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "get_vars", 395, CPyStatic_solve___globals);
        goto CPyL11;
    }
    if (likely(PySet_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/solve.py", "get_vars", 395, CPyStatic_solve___globals, "set", cpy_r_r14);
        goto CPyL11;
    }
    return cpy_r_r15;
CPyL11: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
}

PyObject *CPyPy_solve___get_vars(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"target", "vars", 0};
    static CPyArg_Parser parser = {"OO:get_vars", kwlist, 0};
    PyObject *obj_target;
    PyObject *obj_vars;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_target, &obj_vars)) {
        return NULL;
    }
    PyObject *arg_target;
    if (likely(PyObject_TypeCheck(obj_target, CPyType_types___Type)))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypy.types.Type", obj_target); 
        goto fail;
    }
    PyObject *arg_vars;
    if (likely(PyList_Check(obj_vars)))
        arg_vars = obj_vars;
    else {
        CPy_TypeError("list", obj_vars); 
        goto fail;
    }
    PyObject *retval = CPyDef_solve___get_vars(arg_target, arg_vars);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/solve.py", "get_vars", 393, CPyStatic_solve___globals);
    return NULL;
}

char CPyDef_solve_____top_level__(void) {
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
    char cpy_r_r49;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "<module>", -1, CPyStatic_solve___globals);
        goto CPyL15;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_solve___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "<module>", 3, CPyStatic_solve___globals);
        goto CPyL15;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9766]; /* ('Iterable',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_solve___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "<module>", 5, CPyStatic_solve___globals);
        goto CPyL15;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9781]; /* ('SUBTYPE_OF', 'SUPERTYPE_OF', 'Constraint', 'neg_op') */
    cpy_r_r14 = CPyStatics[917]; /* 'mypy.constraints' */
    cpy_r_r15 = CPyStatic_solve___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "<module>", 7, CPyStatic_solve___globals);
        goto CPyL15;
    }
    CPyModule_mypy___constraints = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___constraints);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9494]; /* ('expand_type',) */
    cpy_r_r18 = CPyStatics[31]; /* 'mypy.expandtype' */
    cpy_r_r19 = CPyStatic_solve___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "<module>", 8, CPyStatic_solve___globals);
        goto CPyL15;
    }
    CPyModule_mypy___expandtype = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___expandtype);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9133]; /* ('prepare_sccs', 'strongly_connected_components',
                                     'topsort') */
    cpy_r_r22 = CPyStatics[526]; /* 'mypy.graph_utils' */
    cpy_r_r23 = CPyStatic_solve___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "<module>", 9, CPyStatic_solve___globals);
        goto CPyL15;
    }
    CPyModule_mypy___graph_utils = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___graph_utils);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9186]; /* ('join_types',) */
    cpy_r_r26 = CPyStatics[92]; /* 'mypy.join' */
    cpy_r_r27 = CPyStatic_solve___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "<module>", 10, CPyStatic_solve___globals);
        goto CPyL15;
    }
    CPyModule_mypy___join = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___join);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9446]; /* ('meet_types',) */
    cpy_r_r30 = CPyStatics[932]; /* 'mypy.meet' */
    cpy_r_r31 = CPyStatic_solve___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "<module>", 11, CPyStatic_solve___globals);
        goto CPyL15;
    }
    CPyModule_mypy___meet = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___meet);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9078]; /* ('is_subtype',) */
    cpy_r_r34 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r35 = CPyStatic_solve___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "<module>", 12, CPyStatic_solve___globals);
        goto CPyL15;
    }
    CPyModule_mypy___subtypes = cpy_r_r36;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9782]; /* ('get_type_vars',) */
    cpy_r_r38 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r39 = CPyStatic_solve___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "<module>", 13, CPyStatic_solve___globals);
        goto CPyL15;
    }
    CPyModule_mypy___typeops = cpy_r_r40;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[9783]; /* ('AnyType', 'ProperType', 'Type', 'TypeOfAny',
                                     'TypeVarId', 'TypeVarType', 'UninhabitedType',
                                     'UnionType', 'get_proper_type', 'remove_dups') */
    cpy_r_r42 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r43 = CPyStatic_solve___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "<module>", 14, CPyStatic_solve___globals);
        goto CPyL15;
    }
    CPyModule_mypy___types = cpy_r_r44;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[9241]; /* ('type_state',) */
    cpy_r_r46 = CPyStatics[596]; /* 'mypy.typestate' */
    cpy_r_r47 = CPyStatic_solve___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/solve.py", "<module>", 26, CPyStatic_solve___globals);
        goto CPyL15;
    }
    CPyModule_mypy___typestate = cpy_r_r48;
    CPy_INCREF(CPyModule_mypy___typestate);
    CPy_DECREF(cpy_r_r48);
    return 1;
CPyL15: ;
    cpy_r_r49 = 2;
    return cpy_r_r49;
}
