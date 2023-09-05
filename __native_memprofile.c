#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *memprofile___print_memory_profile_env_setup(PyTypeObject *type);
PyObject *CPyDef_memprofile___print_memory_profile_env(void);

static PyObject *
memprofile___print_memory_profile_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_memprofile___print_memory_profile_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return memprofile___print_memory_profile_env_setup(type);
}

static int
memprofile___print_memory_profile_env_traverse(mypy___memprofile___print_memory_profile_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    if (CPyTagged_CheckLong(self->_system_memuse)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_system_memuse));
    }
    Py_VISIT(self->_freqs);
    Py_VISIT(self->_memuse);
    if (CPyTagged_CheckLong(self->_totalmem)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_totalmem));
    }
    if (CPyTagged_CheckLong(self->_i)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_i));
    }
    return 0;
}

static int
memprofile___print_memory_profile_env_clear(mypy___memprofile___print_memory_profile_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    if (CPyTagged_CheckLong(self->_system_memuse)) {
        CPyTagged __tmp = self->_system_memuse;
        self->_system_memuse = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_freqs);
    Py_CLEAR(self->_memuse);
    if (CPyTagged_CheckLong(self->_totalmem)) {
        CPyTagged __tmp = self->_totalmem;
        self->_totalmem = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_i)) {
        CPyTagged __tmp = self->_i;
        self->_i = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
memprofile___print_memory_profile_env_dealloc(mypy___memprofile___print_memory_profile_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, memprofile___print_memory_profile_env_dealloc)
    memprofile___print_memory_profile_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem memprofile___print_memory_profile_env_vtable[1];
static bool
CPyDef_memprofile___print_memory_profile_env_trait_vtable_setup(void)
{
    CPyVTableItem memprofile___print_memory_profile_env_vtable_scratch[] = {
        NULL
    };
    memcpy(memprofile___print_memory_profile_env_vtable, memprofile___print_memory_profile_env_vtable_scratch, sizeof(memprofile___print_memory_profile_env_vtable));
    return 1;
}

static PyMethodDef memprofile___print_memory_profile_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_memprofile___print_memory_profile_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "print_memory_profile_env",
    .tp_new = memprofile___print_memory_profile_env_new,
    .tp_dealloc = (destructor)memprofile___print_memory_profile_env_dealloc,
    .tp_traverse = (traverseproc)memprofile___print_memory_profile_env_traverse,
    .tp_clear = (inquiry)memprofile___print_memory_profile_env_clear,
    .tp_methods = memprofile___print_memory_profile_env_methods,
    .tp_basicsize = sizeof(mypy___memprofile___print_memory_profile_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_memprofile___print_memory_profile_env_template = &CPyType_memprofile___print_memory_profile_env_template_;

static PyObject *
memprofile___print_memory_profile_env_setup(PyTypeObject *type)
{
    mypy___memprofile___print_memory_profile_envObject *self;
    self = (mypy___memprofile___print_memory_profile_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = memprofile___print_memory_profile_env_vtable;
    self->_run_gc = 2;
    self->_system_memuse = CPY_INT_TAG;
    self->_totalmem = CPY_INT_TAG;
    self->_i = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_memprofile___print_memory_profile_env(void)
{
    PyObject *self = memprofile___print_memory_profile_env_setup(CPyType_memprofile___print_memory_profile_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__memprofile_____mypyc_lambda__0_print_memory_profile_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_memprofile_____mypyc_lambda__0_print_memory_profile_obj_____get__(self, instance, owner);
}
PyMemberDef memprofile_____mypyc_lambda__0_print_memory_profile_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *memprofile_____mypyc_lambda__0_print_memory_profile_obj_setup(PyTypeObject *type);
PyObject *CPyDef_memprofile_____mypyc_lambda__0_print_memory_profile_obj(void);

static PyObject *
memprofile_____mypyc_lambda__0_print_memory_profile_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_memprofile_____mypyc_lambda__0_print_memory_profile_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return memprofile_____mypyc_lambda__0_print_memory_profile_obj_setup(type);
}

static int
memprofile_____mypyc_lambda__0_print_memory_profile_obj_traverse(mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject))));
    return 0;
}

static int
memprofile_____mypyc_lambda__0_print_memory_profile_obj_clear(mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject))));
    return 0;
}

static void
memprofile_____mypyc_lambda__0_print_memory_profile_obj_dealloc(mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, memprofile_____mypyc_lambda__0_print_memory_profile_obj_dealloc)
    memprofile_____mypyc_lambda__0_print_memory_profile_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem memprofile_____mypyc_lambda__0_print_memory_profile_obj_vtable[2];
static bool
CPyDef_memprofile_____mypyc_lambda__0_print_memory_profile_obj_trait_vtable_setup(void)
{
    CPyVTableItem memprofile_____mypyc_lambda__0_print_memory_profile_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_memprofile_____mypyc_lambda__0_print_memory_profile_obj_____call__,
        (CPyVTableItem)CPyDef_memprofile_____mypyc_lambda__0_print_memory_profile_obj_____get__,
    };
    memcpy(memprofile_____mypyc_lambda__0_print_memory_profile_obj_vtable, memprofile_____mypyc_lambda__0_print_memory_profile_obj_vtable_scratch, sizeof(memprofile_____mypyc_lambda__0_print_memory_profile_obj_vtable));
    return 1;
}

static PyMethodDef memprofile_____mypyc_lambda__0_print_memory_profile_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_memprofile_____mypyc_lambda__0_print_memory_profile_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_memprofile_____mypyc_lambda__0_print_memory_profile_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_memprofile_____mypyc_lambda__0_print_memory_profile_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_print_memory_profile_obj",
    .tp_new = memprofile_____mypyc_lambda__0_print_memory_profile_obj_new,
    .tp_dealloc = (destructor)memprofile_____mypyc_lambda__0_print_memory_profile_obj_dealloc,
    .tp_traverse = (traverseproc)memprofile_____mypyc_lambda__0_print_memory_profile_obj_traverse,
    .tp_clear = (inquiry)memprofile_____mypyc_lambda__0_print_memory_profile_obj_clear,
    .tp_methods = memprofile_____mypyc_lambda__0_print_memory_profile_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__memprofile_____mypyc_lambda__0_print_memory_profile_obj,
    .tp_members = memprofile_____mypyc_lambda__0_print_memory_profile_obj_members,
    .tp_basicsize = sizeof(mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject),
    .tp_weaklistoffset = sizeof(mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_memprofile_____mypyc_lambda__0_print_memory_profile_obj_template = &CPyType_memprofile_____mypyc_lambda__0_print_memory_profile_obj_template_;

static PyObject *
memprofile_____mypyc_lambda__0_print_memory_profile_obj_setup(PyTypeObject *type)
{
    mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject *self;
    self = (mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = memprofile_____mypyc_lambda__0_print_memory_profile_obj_vtable;
    self->vectorcall = CPyPy_memprofile_____mypyc_lambda__0_print_memory_profile_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_memprofile_____mypyc_lambda__0_print_memory_profile_obj(void)
{
    PyObject *self = memprofile_____mypyc_lambda__0_print_memory_profile_obj_setup(CPyType_memprofile_____mypyc_lambda__0_print_memory_profile_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *memprofile___find_recursive_objects_env_setup(PyTypeObject *type);
PyObject *CPyDef_memprofile___find_recursive_objects_env(void);

static PyObject *
memprofile___find_recursive_objects_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_memprofile___find_recursive_objects_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return memprofile___find_recursive_objects_env_setup(type);
}

static int
memprofile___find_recursive_objects_env_traverse(mypy___memprofile___find_recursive_objects_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_objs);
    Py_VISIT(self->_seen);
    Py_VISIT(self->_visit);
    Py_VISIT(self->_o);
    return 0;
}

static int
memprofile___find_recursive_objects_env_clear(mypy___memprofile___find_recursive_objects_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_objs);
    Py_CLEAR(self->_seen);
    Py_CLEAR(self->_visit);
    Py_CLEAR(self->_o);
    return 0;
}

static void
memprofile___find_recursive_objects_env_dealloc(mypy___memprofile___find_recursive_objects_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, memprofile___find_recursive_objects_env_dealloc)
    memprofile___find_recursive_objects_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem memprofile___find_recursive_objects_env_vtable[1];
static bool
CPyDef_memprofile___find_recursive_objects_env_trait_vtable_setup(void)
{
    CPyVTableItem memprofile___find_recursive_objects_env_vtable_scratch[] = {
        NULL
    };
    memcpy(memprofile___find_recursive_objects_env_vtable, memprofile___find_recursive_objects_env_vtable_scratch, sizeof(memprofile___find_recursive_objects_env_vtable));
    return 1;
}

static PyMethodDef memprofile___find_recursive_objects_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_memprofile___find_recursive_objects_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "find_recursive_objects_env",
    .tp_new = memprofile___find_recursive_objects_env_new,
    .tp_dealloc = (destructor)memprofile___find_recursive_objects_env_dealloc,
    .tp_traverse = (traverseproc)memprofile___find_recursive_objects_env_traverse,
    .tp_clear = (inquiry)memprofile___find_recursive_objects_env_clear,
    .tp_methods = memprofile___find_recursive_objects_env_methods,
    .tp_basicsize = sizeof(mypy___memprofile___find_recursive_objects_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_memprofile___find_recursive_objects_env_template = &CPyType_memprofile___find_recursive_objects_env_template_;

static PyObject *
memprofile___find_recursive_objects_env_setup(PyTypeObject *type)
{
    mypy___memprofile___find_recursive_objects_envObject *self;
    self = (mypy___memprofile___find_recursive_objects_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = memprofile___find_recursive_objects_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_memprofile___find_recursive_objects_env(void)
{
    PyObject *self = memprofile___find_recursive_objects_env_setup(CPyType_memprofile___find_recursive_objects_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__memprofile___visit_find_recursive_objects_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_memprofile___visit_find_recursive_objects_obj_____get__(self, instance, owner);
}
PyMemberDef memprofile___visit_find_recursive_objects_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___memprofile___visit_find_recursive_objects_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___memprofile___visit_find_recursive_objects_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *memprofile___visit_find_recursive_objects_obj_setup(PyTypeObject *type);
PyObject *CPyDef_memprofile___visit_find_recursive_objects_obj(void);

static PyObject *
memprofile___visit_find_recursive_objects_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_memprofile___visit_find_recursive_objects_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return memprofile___visit_find_recursive_objects_obj_setup(type);
}

static int
memprofile___visit_find_recursive_objects_obj_traverse(mypy___memprofile___visit_find_recursive_objects_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___memprofile___visit_find_recursive_objects_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___memprofile___visit_find_recursive_objects_objObject))));
    return 0;
}

static int
memprofile___visit_find_recursive_objects_obj_clear(mypy___memprofile___visit_find_recursive_objects_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___memprofile___visit_find_recursive_objects_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___memprofile___visit_find_recursive_objects_objObject))));
    return 0;
}

static void
memprofile___visit_find_recursive_objects_obj_dealloc(mypy___memprofile___visit_find_recursive_objects_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, memprofile___visit_find_recursive_objects_obj_dealloc)
    memprofile___visit_find_recursive_objects_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem memprofile___visit_find_recursive_objects_obj_vtable[2];
static bool
CPyDef_memprofile___visit_find_recursive_objects_obj_trait_vtable_setup(void)
{
    CPyVTableItem memprofile___visit_find_recursive_objects_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_memprofile___visit_find_recursive_objects_obj_____call__,
        (CPyVTableItem)CPyDef_memprofile___visit_find_recursive_objects_obj_____get__,
    };
    memcpy(memprofile___visit_find_recursive_objects_obj_vtable, memprofile___visit_find_recursive_objects_obj_vtable_scratch, sizeof(memprofile___visit_find_recursive_objects_obj_vtable));
    return 1;
}

static PyMethodDef memprofile___visit_find_recursive_objects_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_memprofile___visit_find_recursive_objects_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_memprofile___visit_find_recursive_objects_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_memprofile___visit_find_recursive_objects_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "visit_find_recursive_objects_obj",
    .tp_new = memprofile___visit_find_recursive_objects_obj_new,
    .tp_dealloc = (destructor)memprofile___visit_find_recursive_objects_obj_dealloc,
    .tp_traverse = (traverseproc)memprofile___visit_find_recursive_objects_obj_traverse,
    .tp_clear = (inquiry)memprofile___visit_find_recursive_objects_obj_clear,
    .tp_methods = memprofile___visit_find_recursive_objects_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__memprofile___visit_find_recursive_objects_obj,
    .tp_members = memprofile___visit_find_recursive_objects_obj_members,
    .tp_basicsize = sizeof(mypy___memprofile___visit_find_recursive_objects_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___memprofile___visit_find_recursive_objects_objObject),
    .tp_weaklistoffset = sizeof(mypy___memprofile___visit_find_recursive_objects_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___memprofile___visit_find_recursive_objects_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_memprofile___visit_find_recursive_objects_obj_template = &CPyType_memprofile___visit_find_recursive_objects_obj_template_;

static PyObject *
memprofile___visit_find_recursive_objects_obj_setup(PyTypeObject *type)
{
    mypy___memprofile___visit_find_recursive_objects_objObject *self;
    self = (mypy___memprofile___visit_find_recursive_objects_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = memprofile___visit_find_recursive_objects_obj_vtable;
    self->vectorcall = CPyPy_memprofile___visit_find_recursive_objects_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_memprofile___visit_find_recursive_objects_obj(void)
{
    PyObject *self = memprofile___visit_find_recursive_objects_obj_setup(CPyType_memprofile___visit_find_recursive_objects_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef memprofilemodule_methods[] = {
    {"collect_memory_stats", (PyCFunction)CPyPy_memprofile___collect_memory_stats, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"print_memory_profile", (PyCFunction)CPyPy_memprofile___print_memory_profile, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_recursive_objects", (PyCFunction)CPyPy_memprofile___find_recursive_objects, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef memprofilemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.memprofile",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    memprofilemodule_methods
};

PyObject *CPyInit_mypy___memprofile(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___memprofile_internal) {
        Py_INCREF(CPyModule_mypy___memprofile_internal);
        return CPyModule_mypy___memprofile_internal;
    }
    CPyModule_mypy___memprofile_internal = PyModule_Create(&memprofilemodule);
    if (unlikely(CPyModule_mypy___memprofile_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___memprofile_internal, "__name__");
    CPyStatic_memprofile___globals = PyModule_GetDict(CPyModule_mypy___memprofile_internal);
    if (unlikely(CPyStatic_memprofile___globals == NULL))
        goto fail;
    CPyType_memprofile___print_memory_profile_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_memprofile___print_memory_profile_env_template, NULL, modname);
    if (unlikely(!CPyType_memprofile___print_memory_profile_env))
        goto fail;
    CPyType_memprofile_____mypyc_lambda__0_print_memory_profile_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_memprofile_____mypyc_lambda__0_print_memory_profile_obj_template, NULL, modname);
    if (unlikely(!CPyType_memprofile_____mypyc_lambda__0_print_memory_profile_obj))
        goto fail;
    CPyType_memprofile___find_recursive_objects_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_memprofile___find_recursive_objects_env_template, NULL, modname);
    if (unlikely(!CPyType_memprofile___find_recursive_objects_env))
        goto fail;
    CPyType_memprofile___visit_find_recursive_objects_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_memprofile___visit_find_recursive_objects_obj_template, NULL, modname);
    if (unlikely(!CPyType_memprofile___visit_find_recursive_objects_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_memprofile_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___memprofile_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___memprofile_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_memprofile___print_memory_profile_env);
    Py_CLEAR(CPyType_memprofile_____mypyc_lambda__0_print_memory_profile_obj);
    Py_CLEAR(CPyType_memprofile___find_recursive_objects_env);
    Py_CLEAR(CPyType_memprofile___visit_find_recursive_objects_obj);
    return NULL;
}

tuple_T2OO CPyDef_memprofile___collect_memory_stats(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_objs;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_inferred;
    CPyTagged cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_obj;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_n;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    int64_t cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    tuple_T3CIO cpy_r_r54;
    CPyTagged cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_k;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyTagged cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyTagged cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    CPyTagged cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_freqs;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_memuse;
    CPyTagged cpy_r_r117;
    CPyPtr cpy_r_r118;
    int64_t cpy_r_r119;
    CPyTagged cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    CPyTagged cpy_r_r123;
    PyObject *cpy_r_r124;
    int32_t cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    CPyTagged cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    CPyTagged cpy_r_r138;
    CPyTagged cpy_r_r139;
    PyObject *cpy_r_r140;
    int32_t cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    CPyTagged cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject **cpy_r_r150;
    PyObject *cpy_r_r151;
    CPyTagged cpy_r_r152;
    CPyTagged cpy_r_r153;
    PyObject *cpy_r_r154;
    int32_t cpy_r_r155;
    char cpy_r_r156;
    CPyTagged cpy_r_r157;
    tuple_T2OO cpy_r_r158;
    tuple_T2OO cpy_r_r159;
    cpy_r_r0 = CPyModule_gc;
    cpy_r_r1 = CPyStatics[3095]; /* 'get_objects' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 26, CPyStatic_memprofile___globals);
        goto CPyL86;
    }
    cpy_r_r3 = _PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 26, CPyStatic_memprofile___globals);
        goto CPyL86;
    }
    if (likely(PyList_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 26, CPyStatic_memprofile___globals, "list", cpy_r_r3);
        goto CPyL86;
    }
    cpy_r_objs = cpy_r_r4;
    cpy_r_r5 = CPyDef_memprofile___find_recursive_objects(cpy_r_objs);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 27, CPyStatic_memprofile___globals);
        goto CPyL87;
    }
    cpy_r_r6 = PyDict_New();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 29, CPyStatic_memprofile___globals);
        goto CPyL87;
    }
    cpy_r_inferred = cpy_r_r6;
    cpy_r_r7 = 0;
CPyL6: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_objs)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL63;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_objs, cpy_r_r7);
    cpy_r_obj = cpy_r_r12;
    cpy_r_r13 = PyObject_Type(cpy_r_obj);
    cpy_r_r14 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r15 = cpy_r_r13 == cpy_r_r14;
    CPy_DECREF(cpy_r_r13);
    if (cpy_r_r15) goto CPyL88;
    cpy_r_r16 = PyObject_Type(cpy_r_obj);
    cpy_r_r17 = CPyStatics[197]; /* '__name__' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 34, CPyStatic_memprofile___globals);
        goto CPyL89;
    }
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 34, CPyStatic_memprofile___globals, "str", cpy_r_r18);
        goto CPyL89;
    }
    cpy_r_n = cpy_r_r19;
    cpy_r_r20 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r21 = PyObject_HasAttr(cpy_r_obj, cpy_r_r20);
    if (!cpy_r_r21) goto CPyL14;
    cpy_r_r22 = CPyStatics[3096]; /* ' (__dict__)' */
    cpy_r_r23 = CPyStr_Build(2, cpy_r_n, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 37, CPyStatic_memprofile___globals);
        goto CPyL90;
    }
    cpy_r_r24 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_obj, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 37, CPyStatic_memprofile___globals);
        goto CPyL91;
    }
    cpy_r_r26 = CPyTagged_Id(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = CPyTagged_StealAsObject(cpy_r_r26);
    cpy_r_r28 = CPyDict_SetItem(cpy_r_inferred, cpy_r_r27, cpy_r_r23);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 37, CPyStatic_memprofile___globals);
        goto CPyL90;
    }
CPyL14: ;
    cpy_r_r30 = (PyObject *)CPyType_nodes___Node;
    cpy_r_r31 = CPy_TypeCheck(cpy_r_obj, cpy_r_r30);
    if (!cpy_r_r31) goto CPyL16;
    cpy_r_r32 = cpy_r_r31;
    goto CPyL17;
CPyL16: ;
    cpy_r_r33 = (PyObject *)CPyType_types___Type;
    cpy_r_r34 = CPy_TypeCheck(cpy_r_obj, cpy_r_r33);
    cpy_r_r32 = cpy_r_r34;
CPyL17: ;
    if (!cpy_r_r32) goto CPyL92;
    CPy_INCREF(cpy_r_obj);
    if (PyObject_TypeCheck(cpy_r_obj, CPyType_nodes___Node))
        cpy_r_r35 = cpy_r_obj;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL3255;
    if (PyObject_TypeCheck(cpy_r_obj, CPyType_types___Type))
        cpy_r_r35 = cpy_r_obj;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL3255;
    CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 39, CPyStatic_memprofile___globals, "union[mypy.nodes.Node, mypy.types.Type]", cpy_r_obj);
    goto CPyL90;
__LL3255: ;
    cpy_r_r36 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r37 = PyObject_HasAttr(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (!cpy_r_r37) goto CPyL44;
    CPy_INCREF(cpy_r_obj);
    if (PyObject_TypeCheck(cpy_r_obj, CPyType_nodes___Node))
        cpy_r_r38 = cpy_r_obj;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL3256;
    if (PyObject_TypeCheck(cpy_r_obj, CPyType_types___Type))
        cpy_r_r38 = cpy_r_obj;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL3256;
    CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 40, CPyStatic_memprofile___globals, "union[mypy.nodes.Node, mypy.types.Type]", cpy_r_obj);
    goto CPyL90;
__LL3256: ;
    cpy_r_r39 = (PyObject *)CPyType_nodes___Node;
    cpy_r_r40 = CPy_TypeCheck(cpy_r_r38, cpy_r_r39);
    if (!cpy_r_r40) goto CPyL26;
    if (likely(PyObject_TypeCheck(cpy_r_r38, CPyType_nodes___Node)))
        cpy_r_r41 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 40, CPyStatic_memprofile___globals, "mypy.nodes.Node", cpy_r_r38);
        goto CPyL90;
    }
    cpy_r_r42 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 40, CPyStatic_memprofile___globals);
        goto CPyL90;
    }
    if (likely(PyDict_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 40, CPyStatic_memprofile___globals, "dict", cpy_r_r43);
        goto CPyL90;
    }
    cpy_r_r45 = cpy_r_r44;
    goto CPyL30;
CPyL26: ;
    if (likely(PyObject_TypeCheck(cpy_r_r38, CPyType_types___Type)))
        cpy_r_r46 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 40, CPyStatic_memprofile___globals, "mypy.types.Type", cpy_r_r38);
        goto CPyL90;
    }
    cpy_r_r47 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 40, CPyStatic_memprofile___globals);
        goto CPyL90;
    }
    if (likely(PyDict_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 40, CPyStatic_memprofile___globals, "dict", cpy_r_r48);
        goto CPyL90;
    }
    cpy_r_r45 = cpy_r_r49;
CPyL30: ;
    cpy_r_r50 = 0;
    cpy_r_r51 = PyDict_Size(cpy_r_r45);
    cpy_r_r52 = cpy_r_r51 << 1;
    cpy_r_r53 = CPyDict_GetValuesIter(cpy_r_r45);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 40, CPyStatic_memprofile___globals);
        goto CPyL93;
    }
CPyL31: ;
    cpy_r_r54 = CPyDict_NextValue(cpy_r_r53, cpy_r_r50);
    cpy_r_r55 = cpy_r_r54.f1;
    cpy_r_r50 = cpy_r_r55;
    cpy_r_r56 = cpy_r_r54.f0;
    if (!cpy_r_r56) goto CPyL94;
    cpy_r_r57 = cpy_r_r54.f2;
    CPy_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r54.f2);
    cpy_r_x = cpy_r_r57;
    cpy_r_r58 = (PyObject *)&PyList_Type;
    cpy_r_r59 = PyObject_IsInstance(cpy_r_x, cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 41, CPyStatic_memprofile___globals);
        goto CPyL95;
    }
    cpy_r_r61 = cpy_r_r59;
    if (!cpy_r_r61) goto CPyL37;
    cpy_r_r62 = CPyStatics[3097]; /* ' (list)' */
    cpy_r_r63 = CPyStr_Build(2, cpy_r_n, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 43, CPyStatic_memprofile___globals);
        goto CPyL95;
    }
    CPy_INCREF(cpy_r_x);
    if (likely(PyList_Check(cpy_r_x)))
        cpy_r_r64 = cpy_r_x;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 43, CPyStatic_memprofile___globals, "list", cpy_r_x);
        goto CPyL96;
    }
    cpy_r_r65 = CPyTagged_Id(cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = CPyTagged_StealAsObject(cpy_r_r65);
    cpy_r_r67 = CPyDict_SetItem(cpy_r_inferred, cpy_r_r66, cpy_r_r63);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 43, CPyStatic_memprofile___globals);
        goto CPyL95;
    }
CPyL37: ;
    cpy_r_r69 = (PyObject *)&PyTuple_Type;
    cpy_r_r70 = PyObject_IsInstance(cpy_r_x, cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 44, CPyStatic_memprofile___globals);
        goto CPyL95;
    }
    cpy_r_r72 = cpy_r_r70;
    if (!cpy_r_r72) goto CPyL97;
    cpy_r_r73 = CPyStatics[3098]; /* ' (tuple)' */
    cpy_r_r74 = CPyStr_Build(2, cpy_r_n, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 46, CPyStatic_memprofile___globals);
        goto CPyL95;
    }
    if (likely(PyTuple_Check(cpy_r_x)))
        cpy_r_r75 = cpy_r_x;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 46, CPyStatic_memprofile___globals, "tuple", cpy_r_x);
        goto CPyL98;
    }
    cpy_r_r76 = CPyTagged_Id(cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = CPyTagged_StealAsObject(cpy_r_r76);
    cpy_r_r78 = CPyDict_SetItem(cpy_r_inferred, cpy_r_r77, cpy_r_r74);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 46, CPyStatic_memprofile___globals);
        goto CPyL99;
    }
CPyL42: ;
    cpy_r_r80 = CPyDict_CheckSize(cpy_r_r45, cpy_r_r52);
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 40, CPyStatic_memprofile___globals);
        goto CPyL99;
    } else
        goto CPyL31;
CPyL43: ;
    cpy_r_r81 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 40, CPyStatic_memprofile___globals);
        goto CPyL90;
    }
CPyL44: ;
    CPy_INCREF(cpy_r_obj);
    if (PyObject_TypeCheck(cpy_r_obj, CPyType_nodes___Node))
        cpy_r_r82 = cpy_r_obj;
    else {
        cpy_r_r82 = NULL;
    }
    if (cpy_r_r82 != NULL) goto __LL3257;
    if (PyObject_TypeCheck(cpy_r_obj, CPyType_types___Type))
        cpy_r_r82 = cpy_r_obj;
    else {
        cpy_r_r82 = NULL;
    }
    if (cpy_r_r82 != NULL) goto __LL3257;
    CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 48, CPyStatic_memprofile___globals, "union[mypy.nodes.Node, mypy.types.Type]", cpy_r_obj);
    goto CPyL90;
__LL3257: ;
    cpy_r_r83 = PyObject_Type(cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r84 = CPyDef_mypy___util___get_class_descriptors(cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 48, CPyStatic_memprofile___globals);
        goto CPyL90;
    }
    cpy_r_r85 = PyObject_GetIter(cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 48, CPyStatic_memprofile___globals);
        goto CPyL90;
    }
CPyL47: ;
    cpy_r_r86 = PyIter_Next(cpy_r_r85);
    if (cpy_r_r86 == NULL) goto CPyL100;
    if (likely(PyUnicode_Check(cpy_r_r86)))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 48, CPyStatic_memprofile___globals, "str", cpy_r_r86);
        goto CPyL101;
    }
    cpy_r_k = cpy_r_r87;
    CPy_INCREF(cpy_r_obj);
    if (PyObject_TypeCheck(cpy_r_obj, CPyType_nodes___Node))
        cpy_r_r88 = cpy_r_obj;
    else {
        cpy_r_r88 = NULL;
    }
    if (cpy_r_r88 != NULL) goto __LL3258;
    if (PyObject_TypeCheck(cpy_r_obj, CPyType_types___Type))
        cpy_r_r88 = cpy_r_obj;
    else {
        cpy_r_r88 = NULL;
    }
    if (cpy_r_r88 != NULL) goto __LL3258;
    CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 49, CPyStatic_memprofile___globals, "union[mypy.nodes.Node, mypy.types.Type]", cpy_r_obj);
    goto CPyL102;
__LL3258: ;
    cpy_r_r89 = Py_None;
    cpy_r_r90 = CPyObject_GetAttr3(cpy_r_r88, cpy_r_k, cpy_r_r89);
    CPy_DECREF(cpy_r_r88);
    CPy_DECREF(cpy_r_k);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 49, CPyStatic_memprofile___globals);
        goto CPyL101;
    }
    cpy_r_x = cpy_r_r90;
    cpy_r_r91 = (PyObject *)&PyList_Type;
    cpy_r_r92 = PyObject_IsInstance(cpy_r_x, cpy_r_r91);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 50, CPyStatic_memprofile___globals);
        goto CPyL103;
    }
    cpy_r_r94 = cpy_r_r92;
    if (!cpy_r_r94) goto CPyL56;
    cpy_r_r95 = CPyStatics[3097]; /* ' (list)' */
    cpy_r_r96 = CPyStr_Build(2, cpy_r_n, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 51, CPyStatic_memprofile___globals);
        goto CPyL103;
    }
    CPy_INCREF(cpy_r_x);
    if (likely(PyList_Check(cpy_r_x)))
        cpy_r_r97 = cpy_r_x;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 51, CPyStatic_memprofile___globals, "list", cpy_r_x);
        goto CPyL104;
    }
    cpy_r_r98 = CPyTagged_Id(cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    cpy_r_r99 = CPyTagged_StealAsObject(cpy_r_r98);
    cpy_r_r100 = CPyDict_SetItem(cpy_r_inferred, cpy_r_r99, cpy_r_r96);
    CPy_DECREF(cpy_r_r99);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 51, CPyStatic_memprofile___globals);
        goto CPyL103;
    }
CPyL56: ;
    cpy_r_r102 = (PyObject *)&PyTuple_Type;
    cpy_r_r103 = PyObject_IsInstance(cpy_r_x, cpy_r_r102);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 52, CPyStatic_memprofile___globals);
        goto CPyL103;
    }
    cpy_r_r105 = cpy_r_r103;
    if (!cpy_r_r105) goto CPyL105;
    cpy_r_r106 = CPyStatics[3098]; /* ' (tuple)' */
    cpy_r_r107 = CPyStr_Build(2, cpy_r_n, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 53, CPyStatic_memprofile___globals);
        goto CPyL103;
    }
    if (likely(PyTuple_Check(cpy_r_x)))
        cpy_r_r108 = cpy_r_x;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 53, CPyStatic_memprofile___globals, "tuple", cpy_r_x);
        goto CPyL106;
    }
    cpy_r_r109 = CPyTagged_Id(cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    cpy_r_r110 = CPyTagged_StealAsObject(cpy_r_r109);
    cpy_r_r111 = CPyDict_SetItem(cpy_r_inferred, cpy_r_r110, cpy_r_r107);
    CPy_DECREF(cpy_r_r110);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 53, CPyStatic_memprofile___globals);
        goto CPyL101;
    } else
        goto CPyL47;
CPyL61: ;
    cpy_r_r113 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 48, CPyStatic_memprofile___globals);
        goto CPyL107;
    }
CPyL62: ;
    cpy_r_r114 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r114;
    goto CPyL6;
CPyL63: ;
    cpy_r_r115 = PyDict_New();
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 55, CPyStatic_memprofile___globals);
        goto CPyL107;
    }
    cpy_r_freqs = cpy_r_r115;
    cpy_r_r116 = PyDict_New();
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 56, CPyStatic_memprofile___globals);
        goto CPyL108;
    }
    cpy_r_memuse = cpy_r_r116;
    cpy_r_r117 = 0;
CPyL66: ;
    cpy_r_r118 = (CPyPtr)&((PyVarObject *)cpy_r_objs)->ob_size;
    cpy_r_r119 = *(int64_t *)cpy_r_r118;
    cpy_r_r120 = cpy_r_r119 << 1;
    cpy_r_r121 = (Py_ssize_t)cpy_r_r117 < (Py_ssize_t)cpy_r_r120;
    if (!cpy_r_r121) goto CPyL109;
    cpy_r_r122 = CPyList_GetItemUnsafe(cpy_r_objs, cpy_r_r117);
    cpy_r_obj = cpy_r_r122;
    cpy_r_r123 = CPyTagged_Id(cpy_r_obj);
    cpy_r_r124 = CPyTagged_StealAsObject(cpy_r_r123);
    cpy_r_r125 = PyDict_Contains(cpy_r_inferred, cpy_r_r124);
    CPy_DECREF(cpy_r_r124);
    cpy_r_r126 = cpy_r_r125 >= 0;
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 58, CPyStatic_memprofile___globals);
        goto CPyL110;
    }
    cpy_r_r127 = cpy_r_r125;
    if (!cpy_r_r127) goto CPyL72;
    cpy_r_r128 = CPyTagged_Id(cpy_r_obj);
    cpy_r_r129 = CPyTagged_StealAsObject(cpy_r_r128);
    cpy_r_r130 = CPyDict_GetItem(cpy_r_inferred, cpy_r_r129);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 59, CPyStatic_memprofile___globals);
        goto CPyL110;
    }
    if (likely(PyUnicode_Check(cpy_r_r130)))
        cpy_r_r131 = cpy_r_r130;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 59, CPyStatic_memprofile___globals, "str", cpy_r_r130);
        goto CPyL110;
    }
    cpy_r_name = cpy_r_r131;
    goto CPyL75;
CPyL72: ;
    cpy_r_r132 = PyObject_Type(cpy_r_obj);
    cpy_r_r133 = CPyStatics[197]; /* '__name__' */
    cpy_r_r134 = CPyObject_GetAttr(cpy_r_r132, cpy_r_r133);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 61, CPyStatic_memprofile___globals);
        goto CPyL110;
    }
    if (likely(PyUnicode_Check(cpy_r_r134)))
        cpy_r_r135 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "collect_memory_stats", 61, CPyStatic_memprofile___globals, "str", cpy_r_r134);
        goto CPyL110;
    }
    cpy_r_name = cpy_r_r135;
CPyL75: ;
    cpy_r_r136 = CPyStatics[9015]; /* 0 */
    cpy_r_r137 = CPyDict_Get(cpy_r_freqs, cpy_r_name, cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 62, CPyStatic_memprofile___globals);
        goto CPyL111;
    }
    if (likely(PyLong_Check(cpy_r_r137)))
        cpy_r_r138 = CPyTagged_FromObject(cpy_r_r137);
    else {
        CPy_TypeError("int", cpy_r_r137); cpy_r_r138 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r138 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 62, CPyStatic_memprofile___globals);
        goto CPyL111;
    }
    cpy_r_r139 = CPyTagged_Add(cpy_r_r138, 2);
    CPyTagged_DECREF(cpy_r_r138);
    cpy_r_r140 = CPyTagged_StealAsObject(cpy_r_r139);
    cpy_r_r141 = CPyDict_SetItem(cpy_r_freqs, cpy_r_name, cpy_r_r140);
    CPy_DECREF(cpy_r_r140);
    cpy_r_r142 = cpy_r_r141 >= 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 62, CPyStatic_memprofile___globals);
        goto CPyL111;
    }
    cpy_r_r143 = CPyStatics[9015]; /* 0 */
    cpy_r_r144 = CPyDict_Get(cpy_r_memuse, cpy_r_name, cpy_r_r143);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 63, CPyStatic_memprofile___globals);
        goto CPyL111;
    }
    if (likely(PyLong_Check(cpy_r_r144)))
        cpy_r_r145 = CPyTagged_FromObject(cpy_r_r144);
    else {
        CPy_TypeError("int", cpy_r_r144); cpy_r_r145 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r145 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 63, CPyStatic_memprofile___globals);
        goto CPyL111;
    }
    cpy_r_r146 = CPyModule_sys;
    cpy_r_r147 = CPyStatics[3099]; /* 'getsizeof' */
    cpy_r_r148 = CPyObject_GetAttr(cpy_r_r146, cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 63, CPyStatic_memprofile___globals);
        goto CPyL112;
    }
    PyObject *cpy_r_r149[1] = {cpy_r_obj};
    cpy_r_r150 = (PyObject **)&cpy_r_r149;
    cpy_r_r151 = _PyObject_Vectorcall(cpy_r_r148, cpy_r_r150, 1, 0);
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 63, CPyStatic_memprofile___globals);
        goto CPyL112;
    }
    CPy_DECREF(cpy_r_obj);
    if (likely(PyLong_Check(cpy_r_r151)))
        cpy_r_r152 = CPyTagged_FromObject(cpy_r_r151);
    else {
        CPy_TypeError("int", cpy_r_r151); cpy_r_r152 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r151);
    if (unlikely(cpy_r_r152 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 63, CPyStatic_memprofile___globals);
        goto CPyL113;
    }
    cpy_r_r153 = CPyTagged_Add(cpy_r_r145, cpy_r_r152);
    CPyTagged_DECREF(cpy_r_r145);
    CPyTagged_DECREF(cpy_r_r152);
    cpy_r_r154 = CPyTagged_StealAsObject(cpy_r_r153);
    cpy_r_r155 = CPyDict_SetItem(cpy_r_memuse, cpy_r_name, cpy_r_r154);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r154);
    cpy_r_r156 = cpy_r_r155 >= 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 63, CPyStatic_memprofile___globals);
        goto CPyL114;
    }
    cpy_r_r157 = cpy_r_r117 + 2;
    cpy_r_r117 = cpy_r_r157;
    goto CPyL66;
CPyL85: ;
    cpy_r_r158.f0 = cpy_r_freqs;
    cpy_r_r158.f1 = cpy_r_memuse;
    CPy_INCREF(cpy_r_r158.f0);
    CPy_INCREF(cpy_r_r158.f1);
    CPy_DECREF(cpy_r_freqs);
    CPy_DECREF(cpy_r_memuse);
    return cpy_r_r158;
CPyL86: ;
    tuple_T2OO __tmp3259 = { NULL, NULL };
    cpy_r_r159 = __tmp3259;
    return cpy_r_r159;
CPyL87: ;
    CPy_DecRef(cpy_r_objs);
    goto CPyL86;
CPyL88: ;
    CPy_DECREF(cpy_r_obj);
    goto CPyL62;
CPyL89: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_obj);
    goto CPyL86;
CPyL90: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_n);
    goto CPyL86;
CPyL91: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r23);
    goto CPyL86;
CPyL92: ;
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_n);
    goto CPyL62;
CPyL93: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r45);
    goto CPyL86;
CPyL94: ;
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r54.f2);
    goto CPyL43;
CPyL95: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_x);
    goto CPyL86;
CPyL96: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_r63);
    goto CPyL86;
CPyL97: ;
    CPy_DECREF(cpy_r_x);
    goto CPyL42;
CPyL98: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r74);
    goto CPyL86;
CPyL99: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r53);
    goto CPyL86;
CPyL100: ;
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_n);
    CPy_DECREF(cpy_r_r85);
    goto CPyL61;
CPyL101: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r85);
    goto CPyL86;
CPyL102: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_k);
    goto CPyL86;
CPyL103: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_r85);
    goto CPyL86;
CPyL104: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r96);
    goto CPyL86;
CPyL105: ;
    CPy_DECREF(cpy_r_x);
    goto CPyL47;
CPyL106: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r107);
    goto CPyL86;
CPyL107: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    goto CPyL86;
CPyL108: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_freqs);
    goto CPyL86;
CPyL109: ;
    CPy_DECREF(cpy_r_objs);
    CPy_DECREF(cpy_r_inferred);
    goto CPyL85;
CPyL110: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_freqs);
    CPy_DecRef(cpy_r_memuse);
    goto CPyL86;
CPyL111: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_freqs);
    CPy_DecRef(cpy_r_memuse);
    CPy_DecRef(cpy_r_name);
    goto CPyL86;
CPyL112: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_freqs);
    CPy_DecRef(cpy_r_memuse);
    CPy_DecRef(cpy_r_name);
    CPyTagged_DecRef(cpy_r_r145);
    goto CPyL86;
CPyL113: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_freqs);
    CPy_DecRef(cpy_r_memuse);
    CPy_DecRef(cpy_r_name);
    CPyTagged_DecRef(cpy_r_r145);
    goto CPyL86;
CPyL114: ;
    CPy_DecRef(cpy_r_objs);
    CPy_DecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_freqs);
    CPy_DecRef(cpy_r_memuse);
    goto CPyL86;
}

PyObject *CPyPy_memprofile___collect_memory_stats(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":collect_memory_stats", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    tuple_T2OO retval = CPyDef_memprofile___collect_memory_stats();
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3260 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp3260);
    PyObject *__tmp3261 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp3261);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/memprofile.py", "collect_memory_stats", 19, CPyStatic_memprofile___globals);
    return NULL;
}

PyObject *CPyDef_memprofile_____mypyc_lambda__0_print_memory_profile_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_memprofile_____mypyc_lambda__0_print_memory_profile_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_memprofile_____mypyc_lambda__0_print_memory_profile_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/memprofile.py", "__get__", -1, CPyStatic_memprofile___globals);
    return NULL;
}

CPyTagged CPyDef_memprofile_____mypyc_lambda__0_print_memory_profile_obj_____call__(PyObject *cpy_r___mypyc_self__, tuple_T2OI cpy_r_x) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    cpy_r_r0 = ((mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/memprofile.py", "<lambda>", "__mypyc_lambda__0_print_memory_profile_obj", "__mypyc_env__", 82, CPyStatic_memprofile___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL3;
CPyL1: ;
    cpy_r_r1 = cpy_r_x.f1;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyTagged_Negate(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPY_INT_TAG;
    return cpy_r_r3;
CPyL3: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_memprofile_____mypyc_lambda__0_print_memory_profile_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"x", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_x;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_x)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    tuple_T2OI arg_x;
    PyObject *__tmp3262;
    if (unlikely(!(PyTuple_Check(obj_x) && PyTuple_GET_SIZE(obj_x) == 2))) {
        __tmp3262 = NULL;
        goto __LL3263;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(obj_x, 0))))
        __tmp3262 = PyTuple_GET_ITEM(obj_x, 0);
    else {
        __tmp3262 = NULL;
    }
    if (__tmp3262 == NULL) goto __LL3263;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_x, 1))))
        __tmp3262 = PyTuple_GET_ITEM(obj_x, 1);
    else {
        __tmp3262 = NULL;
    }
    if (__tmp3262 == NULL) goto __LL3263;
    __tmp3262 = obj_x;
__LL3263: ;
    if (unlikely(__tmp3262 == NULL)) {
        CPy_TypeError("tuple[str, int]", obj_x); goto fail;
    } else {
        PyObject *__tmp3264 = PyTuple_GET_ITEM(obj_x, 0);
        PyObject *__tmp3265;
        if (likely(PyUnicode_Check(__tmp3264)))
            __tmp3265 = __tmp3264;
        else {
            CPy_TypeError("str", __tmp3264); 
            __tmp3265 = NULL;
        }
        arg_x.f0 = __tmp3265;
        PyObject *__tmp3266 = PyTuple_GET_ITEM(obj_x, 1);
        CPyTagged __tmp3267;
        if (likely(PyLong_Check(__tmp3266)))
            __tmp3267 = CPyTagged_BorrowFromObject(__tmp3266);
        else {
            CPy_TypeError("int", __tmp3266); goto fail;
        }
        arg_x.f1 = __tmp3267;
    }
    CPyTagged retval = CPyDef_memprofile_____mypyc_lambda__0_print_memory_profile_obj_____call__(arg___mypyc_self__, arg_x);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/memprofile.py", "<lambda>", 82, CPyStatic_memprofile___globals);
    return NULL;
}

char CPyDef_memprofile___print_memory_profile(char cpy_r_run_gc) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyTagged cpy_r_system_memuse;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    tuple_T2OO cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_freqs;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_memuse;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    tuple_T4OOOO cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject **cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_totalmem;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyTagged cpy_r_r75;
    CPyPtr cpy_r_r76;
    int64_t cpy_r_r77;
    CPyTagged cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    tuple_T2OI cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_n;
    CPyTagged cpy_r_r83;
    CPyTagged cpy_r_mem;
    PyObject *cpy_r_r84;
    CPyTagged cpy_r_r85;
    CPyTagged cpy_r_f;
    int64_t cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    CPyTagged cpy_r_r91;
    double cpy_r_r92;
    char cpy_r_r93;
    tuple_T4IIFO cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyTagged cpy_r_r105;
    CPyTagged cpy_r_r106;
    CPyTagged cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    CPyTagged cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject **cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    CPyTagged cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject **cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    if (cpy_r_run_gc != 2) goto CPyL2;
    cpy_r_run_gc = 1;
CPyL2: ;
    cpy_r_r0 = CPyDef_memprofile___print_memory_profile_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 68, CPyStatic_memprofile___globals);
        goto CPyL64;
    }
    cpy_r_r1 = CPyModule_sys;
    cpy_r_r2 = CPyStatics[305]; /* 'platform' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 69, CPyStatic_memprofile___globals);
        goto CPyL65;
    }
    if (likely(PyUnicode_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "print_memory_profile", 69, CPyStatic_memprofile___globals, "str", cpy_r_r3);
        goto CPyL65;
    }
    cpy_r_r5 = CPyStatics[3100]; /* 'win' */
    cpy_r_r6 = CPyStr_Startswith(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (cpy_r_r6) goto CPyL66;
    cpy_r_r7 = CPyStatic_memprofile___globals;
    cpy_r_r8 = CPyModule_resource;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 != cpy_r_r9;
    if (cpy_r_r10) goto CPyL9;
    cpy_r_r11 = CPyStatics[1980]; /* 'resource' */
    cpy_r_r12 = PyImport_Import(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 70, CPyStatic_memprofile___globals);
        goto CPyL65;
    }
    CPyModule_resource = cpy_r_r12;
    CPy_INCREF(CPyModule_resource);
    CPy_DECREF(cpy_r_r12);
CPyL9: ;
    cpy_r_r13 = CPyStatics[1980]; /* 'resource' */
    cpy_r_r14 = PyImport_GetModuleDict();
    cpy_r_r15 = CPyStatics[1980]; /* 'resource' */
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 70, CPyStatic_memprofile___globals);
        goto CPyL65;
    }
    cpy_r_r17 = CPyDict_SetItem(cpy_r_r7, cpy_r_r13, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 70, CPyStatic_memprofile___globals);
        goto CPyL65;
    }
    cpy_r_r19 = CPyModule_resource;
    cpy_r_r20 = CPyStatics[1981]; /* 'RUSAGE_SELF' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 72, CPyStatic_memprofile___globals);
        goto CPyL65;
    }
    if (likely(PyLong_Check(cpy_r_r21)))
        cpy_r_r22 = CPyTagged_FromObject(cpy_r_r21);
    else {
        CPy_TypeError("int", cpy_r_r21); cpy_r_r22 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 72, CPyStatic_memprofile___globals);
        goto CPyL65;
    }
    cpy_r_r23 = CPyModule_resource;
    cpy_r_r24 = CPyStatics[1982]; /* 'getrusage' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 72, CPyStatic_memprofile___globals);
        goto CPyL67;
    }
    cpy_r_r26 = CPyTagged_StealAsObject(cpy_r_r22);
    PyObject *cpy_r_r27[1] = {cpy_r_r26};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r25, cpy_r_r28, 1, 0);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 72, CPyStatic_memprofile___globals);
        goto CPyL68;
    }
    CPy_DECREF(cpy_r_r26);
    if (likely(PyTuple_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "print_memory_profile", 72, CPyStatic_memprofile___globals, "tuple", cpy_r_r29);
        goto CPyL65;
    }
    cpy_r_r31 = CPyStatics[1984]; /* 'ru_maxrss' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 72, CPyStatic_memprofile___globals);
        goto CPyL65;
    }
    if (likely(PyLong_Check(cpy_r_r32)))
        cpy_r_r33 = CPyTagged_FromObject(cpy_r_r32);
    else {
        CPy_TypeError("int", cpy_r_r32); cpy_r_r33 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 72, CPyStatic_memprofile___globals);
        goto CPyL65;
    }
    cpy_r_system_memuse = cpy_r_r33;
    goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 74, CPyStatic_memprofile___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL21: ;
    if (!cpy_r_run_gc) goto CPyL24;
    cpy_r_r35 = CPyModule_gc;
    cpy_r_r36 = CPyStatics[3101]; /* 'collect' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 76, CPyStatic_memprofile___globals);
        goto CPyL69;
    }
    cpy_r_r38 = _PyObject_Vectorcall(cpy_r_r37, 0, 0, 0);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 76, CPyStatic_memprofile___globals);
        goto CPyL69;
    } else
        goto CPyL70;
CPyL24: ;
    cpy_r_r39 = CPyDef_memprofile___collect_memory_stats();
    if (unlikely(cpy_r_r39.f0 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 77, CPyStatic_memprofile___globals);
        goto CPyL69;
    }
    cpy_r_r40 = cpy_r_r39.f0;
    CPy_INCREF(cpy_r_r40);
    cpy_r_freqs = cpy_r_r40;
    cpy_r_r41 = cpy_r_r39.f1;
    CPy_INCREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r39.f0);
    CPy_DECREF(cpy_r_r39.f1);
    cpy_r_memuse = cpy_r_r41;
    cpy_r_r42 = CPyStatics[3102]; /* '%7s  %7s  %7s  %s' */
    cpy_r_r43 = CPyStatics[3103]; /* 'Freq' */
    cpy_r_r44 = CPyStatics[3104]; /* 'Size(k)' */
    cpy_r_r45 = CPyStatics[3105]; /* 'AvgSize' */
    cpy_r_r46 = CPyStatics[42]; /* 'Type' */
    cpy_r_r47.f0 = cpy_r_r43;
    cpy_r_r47.f1 = cpy_r_r44;
    cpy_r_r47.f2 = cpy_r_r45;
    cpy_r_r47.f3 = cpy_r_r46;
    CPy_INCREF(cpy_r_r47.f0);
    CPy_INCREF(cpy_r_r47.f1);
    CPy_INCREF(cpy_r_r47.f2);
    CPy_INCREF(cpy_r_r47.f3);
    cpy_r_r48 = PyTuple_New(4);
    if (unlikely(cpy_r_r48 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3268 = cpy_r_r47.f0;
    PyTuple_SET_ITEM(cpy_r_r48, 0, __tmp3268);
    PyObject *__tmp3269 = cpy_r_r47.f1;
    PyTuple_SET_ITEM(cpy_r_r48, 1, __tmp3269);
    PyObject *__tmp3270 = cpy_r_r47.f2;
    PyTuple_SET_ITEM(cpy_r_r48, 2, __tmp3270);
    PyObject *__tmp3271 = cpy_r_r47.f3;
    PyTuple_SET_ITEM(cpy_r_r48, 3, __tmp3271);
    cpy_r_r49 = PyNumber_Remainder(cpy_r_r42, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 78, CPyStatic_memprofile___globals);
        goto CPyL71;
    }
    if (likely(PyUnicode_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "print_memory_profile", 78, CPyStatic_memprofile___globals, "str", cpy_r_r49);
        goto CPyL71;
    }
    cpy_r_r51 = CPyModule_builtins;
    cpy_r_r52 = CPyStatics[190]; /* 'print' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 78, CPyStatic_memprofile___globals);
        goto CPyL72;
    }
    PyObject *cpy_r_r54[1] = {cpy_r_r50};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = _PyObject_Vectorcall(cpy_r_r53, cpy_r_r55, 1, 0);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 78, CPyStatic_memprofile___globals);
        goto CPyL72;
    } else
        goto CPyL73;
CPyL29: ;
    CPy_DECREF(cpy_r_r50);
    cpy_r_r57 = CPyStatics[3106]; /* '-------------------------------------------' */
    cpy_r_r58 = CPyModule_builtins;
    cpy_r_r59 = CPyStatics[190]; /* 'print' */
    cpy_r_r60 = CPyObject_GetAttr(cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 79, CPyStatic_memprofile___globals);
        goto CPyL71;
    }
    PyObject *cpy_r_r61[1] = {cpy_r_r57};
    cpy_r_r62 = (PyObject **)&cpy_r_r61;
    cpy_r_r63 = _PyObject_Vectorcall(cpy_r_r60, cpy_r_r62, 1, 0);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 79, CPyStatic_memprofile___globals);
        goto CPyL71;
    } else
        goto CPyL74;
CPyL31: ;
    cpy_r_totalmem = 0;
    cpy_r_i = 0;
    cpy_r_r64 = CPyDict_ItemsView(cpy_r_memuse);
    CPy_DECREF(cpy_r_memuse);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 82, CPyStatic_memprofile___globals);
        goto CPyL75;
    }
    cpy_r_r65 = CPyDef_memprofile_____mypyc_lambda__0_print_memory_profile_obj();
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 82, CPyStatic_memprofile___globals);
        goto CPyL76;
    }
    if (((mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject *)cpy_r_r65)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject *)cpy_r_r65)->___mypyc_env__);
    }
    ((mypy___memprofile_____mypyc_lambda__0_print_memory_profile_objObject *)cpy_r_r65)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r66 = 1;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 82, CPyStatic_memprofile___globals);
        goto CPyL77;
    }
    cpy_r_r67 = CPyModule_builtins;
    cpy_r_r68 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r69 = CPyObject_GetAttr(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 82, CPyStatic_memprofile___globals);
        goto CPyL77;
    }
    PyObject *cpy_r_r70[2] = {cpy_r_r64, cpy_r_r65};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r73 = _PyObject_Vectorcall(cpy_r_r69, cpy_r_r71, 1, cpy_r_r72);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 82, CPyStatic_memprofile___globals);
        goto CPyL77;
    }
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r65);
    if (likely(PyList_Check(cpy_r_r73)))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "print_memory_profile", 82, CPyStatic_memprofile___globals, "list", cpy_r_r73);
        goto CPyL78;
    }
    cpy_r_r75 = 0;
CPyL38: ;
    cpy_r_r76 = (CPyPtr)&((PyVarObject *)cpy_r_r74)->ob_size;
    cpy_r_r77 = *(int64_t *)cpy_r_r76;
    cpy_r_r78 = cpy_r_r77 << 1;
    cpy_r_r79 = (Py_ssize_t)cpy_r_r75 < (Py_ssize_t)cpy_r_r78;
    if (!cpy_r_r79) goto CPyL79;
    cpy_r_r80 = CPyList_GetItemUnsafe(cpy_r_r74, cpy_r_r75);
    PyObject *__tmp3272;
    if (unlikely(!(PyTuple_Check(cpy_r_r80) && PyTuple_GET_SIZE(cpy_r_r80) == 2))) {
        __tmp3272 = NULL;
        goto __LL3273;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r80, 0))))
        __tmp3272 = PyTuple_GET_ITEM(cpy_r_r80, 0);
    else {
        __tmp3272 = NULL;
    }
    if (__tmp3272 == NULL) goto __LL3273;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r80, 1))))
        __tmp3272 = PyTuple_GET_ITEM(cpy_r_r80, 1);
    else {
        __tmp3272 = NULL;
    }
    if (__tmp3272 == NULL) goto __LL3273;
    __tmp3272 = cpy_r_r80;
__LL3273: ;
    if (unlikely(__tmp3272 == NULL)) {
        CPy_TypeError("tuple[str, int]", cpy_r_r80); cpy_r_r81 = (tuple_T2OI) { NULL, CPY_INT_TAG };
    } else {
        PyObject *__tmp3274 = PyTuple_GET_ITEM(cpy_r_r80, 0);
        CPy_INCREF(__tmp3274);
        PyObject *__tmp3275;
        if (likely(PyUnicode_Check(__tmp3274)))
            __tmp3275 = __tmp3274;
        else {
            CPy_TypeError("str", __tmp3274); 
            __tmp3275 = NULL;
        }
        cpy_r_r81.f0 = __tmp3275;
        PyObject *__tmp3276 = PyTuple_GET_ITEM(cpy_r_r80, 1);
        CPyTagged __tmp3277;
        if (likely(PyLong_Check(__tmp3276)))
            __tmp3277 = CPyTagged_FromObject(__tmp3276);
        else {
            CPy_TypeError("int", __tmp3276); __tmp3277 = CPY_INT_TAG;
        }
        cpy_r_r81.f1 = __tmp3277;
    }
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81.f0 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 82, CPyStatic_memprofile___globals);
        goto CPyL80;
    }
    cpy_r_r82 = cpy_r_r81.f0;
    CPy_INCREF(cpy_r_r82);
    cpy_r_n = cpy_r_r82;
    cpy_r_r83 = cpy_r_r81.f1;
    CPyTagged_INCREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r81.f0);
    CPyTagged_DECREF(cpy_r_r81.f1);
    cpy_r_mem = cpy_r_r83;
    cpy_r_r84 = CPyDict_GetItem(cpy_r_freqs, cpy_r_n);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 83, CPyStatic_memprofile___globals);
        goto CPyL81;
    }
    if (likely(PyLong_Check(cpy_r_r84)))
        cpy_r_r85 = CPyTagged_FromObject(cpy_r_r84);
    else {
        CPy_TypeError("int", cpy_r_r84); cpy_r_r85 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 83, CPyStatic_memprofile___globals);
        goto CPyL81;
    }
    cpy_r_f = cpy_r_r85;
    cpy_r_r86 = cpy_r_i & 1;
    cpy_r_r87 = cpy_r_r86 != 0;
    if (!cpy_r_r87) goto CPyL44;
    cpy_r_r88 = CPyTagged_IsLt_(cpy_r_i, 100);
    if (cpy_r_r88) {
        goto CPyL45;
    } else
        goto CPyL82;
CPyL44: ;
    cpy_r_r89 = (Py_ssize_t)cpy_r_i < (Py_ssize_t)100;
    if (!cpy_r_r89) goto CPyL82;
CPyL45: ;
    cpy_r_r90 = CPyStatics[3107]; /* '%7d  %7d  %7.0f  %s' */
    cpy_r_r91 = CPyTagged_Rshift(cpy_r_mem, 20);
    if (unlikely(cpy_r_r91 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", -1, CPyStatic_memprofile___globals);
        goto CPyL83;
    }
    cpy_r_r92 = CPyTagged_TrueDivide(cpy_r_mem, cpy_r_f);
    cpy_r_r93 = cpy_r_r92 == -113.0;
    if (unlikely(cpy_r_r93)) goto CPyL48;
CPyL47: ;
    cpy_r_r94.f0 = cpy_r_f;
    cpy_r_r94.f1 = cpy_r_r91;
    cpy_r_r94.f2 = cpy_r_r92;
    cpy_r_r94.f3 = cpy_r_n;
    CPyTagged_INCREF(cpy_r_r94.f0);
    CPyTagged_INCREF(cpy_r_r94.f1);
    CPy_INCREF(cpy_r_r94.f3);
    CPyTagged_DECREF(cpy_r_f);
    CPyTagged_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_n);
    cpy_r_r95 = PyTuple_New(4);
    if (unlikely(cpy_r_r95 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3278 = CPyTagged_StealAsObject(cpy_r_r94.f0);
    PyTuple_SET_ITEM(cpy_r_r95, 0, __tmp3278);
    PyObject *__tmp3279 = CPyTagged_StealAsObject(cpy_r_r94.f1);
    PyTuple_SET_ITEM(cpy_r_r95, 1, __tmp3279);
    PyObject *__tmp3280 = PyFloat_FromDouble(cpy_r_r94.f2);
    PyTuple_SET_ITEM(cpy_r_r95, 2, __tmp3280);
    PyObject *__tmp3281 = cpy_r_r94.f3;
    PyTuple_SET_ITEM(cpy_r_r95, 3, __tmp3281);
    cpy_r_r96 = PyNumber_Remainder(cpy_r_r90, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 85, CPyStatic_memprofile___globals);
        goto CPyL84;
    } else
        goto CPyL49;
CPyL48: ;
    cpy_r_r97 = PyErr_Occurred();
    if (unlikely(cpy_r_r97 != NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 85, CPyStatic_memprofile___globals);
        goto CPyL85;
    } else
        goto CPyL47;
CPyL49: ;
    if (likely(PyUnicode_Check(cpy_r_r96)))
        cpy_r_r98 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "print_memory_profile", 85, CPyStatic_memprofile___globals, "str", cpy_r_r96);
        goto CPyL84;
    }
    cpy_r_r99 = CPyModule_builtins;
    cpy_r_r100 = CPyStatics[190]; /* 'print' */
    cpy_r_r101 = CPyObject_GetAttr(cpy_r_r99, cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 85, CPyStatic_memprofile___globals);
        goto CPyL86;
    }
    PyObject *cpy_r_r102[1] = {cpy_r_r98};
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = _PyObject_Vectorcall(cpy_r_r101, cpy_r_r103, 1, 0);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 85, CPyStatic_memprofile___globals);
        goto CPyL86;
    } else
        goto CPyL87;
CPyL52: ;
    CPy_DECREF(cpy_r_r98);
CPyL53: ;
    cpy_r_r105 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r105;
    cpy_r_r106 = CPyTagged_Add(cpy_r_totalmem, cpy_r_mem);
    CPyTagged_DECREF(cpy_r_totalmem);
    CPyTagged_DECREF(cpy_r_mem);
    cpy_r_totalmem = cpy_r_r106;
    cpy_r_r107 = cpy_r_r75 + 2;
    cpy_r_r75 = cpy_r_r107;
    goto CPyL38;
CPyL55: ;
    cpy_r_r108 = CPyModule_builtins;
    cpy_r_r109 = CPyStatics[190]; /* 'print' */
    cpy_r_r110 = CPyObject_GetAttr(cpy_r_r108, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 88, CPyStatic_memprofile___globals);
        goto CPyL88;
    }
    cpy_r_r111 = _PyObject_Vectorcall(cpy_r_r110, 0, 0, 0);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 88, CPyStatic_memprofile___globals);
        goto CPyL88;
    } else
        goto CPyL89;
CPyL57: ;
    cpy_r_r112 = CPyStatics[3108]; /* 'Mem usage RSS   ' */
    cpy_r_r113 = CPyTagged_Rshift(cpy_r_system_memuse, 20);
    CPyTagged_DECREF(cpy_r_system_memuse);
    if (unlikely(cpy_r_r113 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", -1, CPyStatic_memprofile___globals);
        goto CPyL90;
    }
    cpy_r_r114 = CPyModule_builtins;
    cpy_r_r115 = CPyStatics[190]; /* 'print' */
    cpy_r_r116 = CPyObject_GetAttr(cpy_r_r114, cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 89, CPyStatic_memprofile___globals);
        goto CPyL91;
    }
    cpy_r_r117 = CPyTagged_StealAsObject(cpy_r_r113);
    PyObject *cpy_r_r118[2] = {cpy_r_r112, cpy_r_r117};
    cpy_r_r119 = (PyObject **)&cpy_r_r118;
    cpy_r_r120 = _PyObject_Vectorcall(cpy_r_r116, cpy_r_r119, 2, 0);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 89, CPyStatic_memprofile___globals);
        goto CPyL92;
    } else
        goto CPyL93;
CPyL60: ;
    CPy_DECREF(cpy_r_r117);
    cpy_r_r121 = CPyStatics[3109]; /* 'Total reachable ' */
    cpy_r_r122 = CPyTagged_Rshift(cpy_r_totalmem, 20);
    CPyTagged_DECREF(cpy_r_totalmem);
    if (unlikely(cpy_r_r122 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", -1, CPyStatic_memprofile___globals);
        goto CPyL64;
    }
    cpy_r_r123 = CPyModule_builtins;
    cpy_r_r124 = CPyStatics[190]; /* 'print' */
    cpy_r_r125 = CPyObject_GetAttr(cpy_r_r123, cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 90, CPyStatic_memprofile___globals);
        goto CPyL94;
    }
    cpy_r_r126 = CPyTagged_StealAsObject(cpy_r_r122);
    PyObject *cpy_r_r127[2] = {cpy_r_r121, cpy_r_r126};
    cpy_r_r128 = (PyObject **)&cpy_r_r127;
    cpy_r_r129 = _PyObject_Vectorcall(cpy_r_r125, cpy_r_r128, 2, 0);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 90, CPyStatic_memprofile___globals);
        goto CPyL95;
    } else
        goto CPyL96;
CPyL63: ;
    CPy_DECREF(cpy_r_r126);
    return 1;
CPyL64: ;
    cpy_r_r130 = 2;
    return cpy_r_r130;
CPyL65: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL64;
CPyL66: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL19;
CPyL67: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r22);
    goto CPyL64;
CPyL68: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r26);
    goto CPyL64;
CPyL69: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_system_memuse);
    goto CPyL64;
CPyL70: ;
    CPy_DECREF(cpy_r_r38);
    goto CPyL24;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_system_memuse);
    CPy_DecRef(cpy_r_freqs);
    CPy_DecRef(cpy_r_memuse);
    goto CPyL64;
CPyL72: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_system_memuse);
    CPy_DecRef(cpy_r_freqs);
    CPy_DecRef(cpy_r_memuse);
    CPy_DecRef(cpy_r_r50);
    goto CPyL64;
CPyL73: ;
    CPy_DECREF(cpy_r_r56);
    goto CPyL29;
CPyL74: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL31;
CPyL75: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_system_memuse);
    CPy_DecRef(cpy_r_freqs);
    CPyTagged_DecRef(cpy_r_totalmem);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL64;
CPyL76: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_system_memuse);
    CPy_DecRef(cpy_r_freqs);
    CPyTagged_DecRef(cpy_r_totalmem);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r64);
    goto CPyL64;
CPyL77: ;
    CPyTagged_DecRef(cpy_r_system_memuse);
    CPy_DecRef(cpy_r_freqs);
    CPyTagged_DecRef(cpy_r_totalmem);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r65);
    goto CPyL64;
CPyL78: ;
    CPyTagged_DecRef(cpy_r_system_memuse);
    CPy_DecRef(cpy_r_freqs);
    CPyTagged_DecRef(cpy_r_totalmem);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL64;
CPyL79: ;
    CPy_DECREF(cpy_r_freqs);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r74);
    goto CPyL55;
CPyL80: ;
    CPyTagged_DecRef(cpy_r_system_memuse);
    CPy_DecRef(cpy_r_freqs);
    CPyTagged_DecRef(cpy_r_totalmem);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r74);
    goto CPyL64;
CPyL81: ;
    CPyTagged_DecRef(cpy_r_system_memuse);
    CPy_DecRef(cpy_r_freqs);
    CPyTagged_DecRef(cpy_r_totalmem);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_n);
    CPyTagged_DecRef(cpy_r_mem);
    goto CPyL64;
CPyL82: ;
    CPy_DECREF(cpy_r_n);
    CPyTagged_DECREF(cpy_r_f);
    goto CPyL53;
CPyL83: ;
    CPyTagged_DecRef(cpy_r_system_memuse);
    CPy_DecRef(cpy_r_freqs);
    CPyTagged_DecRef(cpy_r_totalmem);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_n);
    CPyTagged_DecRef(cpy_r_mem);
    CPyTagged_DecRef(cpy_r_f);
    goto CPyL64;
CPyL84: ;
    CPyTagged_DecRef(cpy_r_system_memuse);
    CPy_DecRef(cpy_r_freqs);
    CPyTagged_DecRef(cpy_r_totalmem);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r74);
    CPyTagged_DecRef(cpy_r_mem);
    goto CPyL64;
CPyL85: ;
    CPyTagged_DecRef(cpy_r_system_memuse);
    CPy_DecRef(cpy_r_freqs);
    CPyTagged_DecRef(cpy_r_totalmem);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_n);
    CPyTagged_DecRef(cpy_r_mem);
    CPyTagged_DecRef(cpy_r_f);
    CPyTagged_DecRef(cpy_r_r91);
    goto CPyL64;
CPyL86: ;
    CPyTagged_DecRef(cpy_r_system_memuse);
    CPy_DecRef(cpy_r_freqs);
    CPyTagged_DecRef(cpy_r_totalmem);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r74);
    CPyTagged_DecRef(cpy_r_mem);
    CPy_DecRef(cpy_r_r98);
    goto CPyL64;
CPyL87: ;
    CPy_DECREF(cpy_r_r104);
    goto CPyL52;
CPyL88: ;
    CPyTagged_DecRef(cpy_r_system_memuse);
    CPyTagged_DecRef(cpy_r_totalmem);
    goto CPyL64;
CPyL89: ;
    CPy_DECREF(cpy_r_r111);
    goto CPyL57;
CPyL90: ;
    CPyTagged_DecRef(cpy_r_totalmem);
    goto CPyL64;
CPyL91: ;
    CPyTagged_DecRef(cpy_r_totalmem);
    CPyTagged_DecRef(cpy_r_r113);
    goto CPyL64;
CPyL92: ;
    CPyTagged_DecRef(cpy_r_totalmem);
    CPy_DecRef(cpy_r_r117);
    goto CPyL64;
CPyL93: ;
    CPy_DECREF(cpy_r_r120);
    goto CPyL60;
CPyL94: ;
    CPyTagged_DecRef(cpy_r_r122);
    goto CPyL64;
CPyL95: ;
    CPy_DecRef(cpy_r_r126);
    goto CPyL64;
CPyL96: ;
    CPy_DECREF(cpy_r_r129);
    goto CPyL63;
}

PyObject *CPyPy_memprofile___print_memory_profile(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"run_gc", 0};
    static CPyArg_Parser parser = {"|O:print_memory_profile", kwlist, 0};
    PyObject *obj_run_gc = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_run_gc)) {
        return NULL;
    }
    char arg_run_gc;
    if (obj_run_gc == NULL) {
        arg_run_gc = 2;
    } else if (unlikely(!PyBool_Check(obj_run_gc))) {
        CPy_TypeError("bool", obj_run_gc); goto fail;
    } else
        arg_run_gc = obj_run_gc == Py_True;
    char retval = CPyDef_memprofile___print_memory_profile(arg_run_gc);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/memprofile.py", "print_memory_profile", 68, CPyStatic_memprofile___globals);
    return NULL;
}

PyObject *CPyDef_memprofile___visit_find_recursive_objects_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_memprofile___visit_find_recursive_objects_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_memprofile___visit_find_recursive_objects_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/memprofile.py", "__get__", -1, CPyStatic_memprofile___globals);
    return NULL;
}

char CPyDef_memprofile___visit_find_recursive_objects_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_visit;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = ((mypy___memprofile___visit_find_recursive_objects_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/memprofile.py", "visit", "visit_find_recursive_objects_obj", "__mypyc_env__", 101, CPyStatic_memprofile___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_visit;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/memprofile.py", "visit", "find_recursive_objects_env", "visit", -1, CPyStatic_memprofile___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_visit = cpy_r_r1;
    CPy_DECREF(cpy_r_visit);
    cpy_r_r2 = CPyTagged_Id(cpy_r_o);
    cpy_r_r3 = ((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_seen;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/memprofile.py", "visit", "find_recursive_objects_env", "seen", 102, CPyStatic_memprofile___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r3);
CPyL3: ;
    cpy_r_r4 = CPyTagged_StealAsObject(cpy_r_r2);
    cpy_r_r5 = PySet_Contains(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/memprofile.py", "visit", 102, CPyStatic_memprofile___globals);
        goto CPyL11;
    }
    cpy_r_r7 = cpy_r_r5;
    cpy_r_r8 = cpy_r_r7 ^ 1;
    if (!cpy_r_r8) goto CPyL13;
    cpy_r_r9 = ((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_objs;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/memprofile.py", "visit", "find_recursive_objects_env", "objs", 103, CPyStatic_memprofile___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r9);
CPyL6: ;
    cpy_r_r10 = PyList_Append(cpy_r_r9, cpy_r_o);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/memprofile.py", "visit", 103, CPyStatic_memprofile___globals);
        goto CPyL11;
    }
    cpy_r_r12 = ((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_seen;
    if (unlikely(cpy_r_r12 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'seen' of 'find_recursive_objects_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r12);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "visit", 104, CPyStatic_memprofile___globals);
        goto CPyL10;
    }
CPyL8: ;
    cpy_r_r13 = CPyTagged_Id(cpy_r_o);
    cpy_r_r14 = CPyTagged_StealAsObject(cpy_r_r13);
    cpy_r_r15 = PySet_Add(cpy_r_r12, cpy_r_r14);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/memprofile.py", "visit", 104, CPyStatic_memprofile___globals);
        goto CPyL10;
    }
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL9;
}

PyObject *CPyPy_memprofile___visit_find_recursive_objects_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_o = obj_o;
    char retval = CPyDef_memprofile___visit_find_recursive_objects_obj_____call__(arg___mypyc_self__, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/memprofile.py", "visit", 101, CPyStatic_memprofile___globals);
    return NULL;
}

char CPyDef_memprofile___find_recursive_objects(PyObject *cpy_r_objs) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_o;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_obj;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    int64_t cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    tuple_T4CIOO cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_key;
    PyObject *cpy_r_val;
    PyObject *cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject **cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r81;
    PyObject **cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject **cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyTagged cpy_r_r95;
    CPyPtr cpy_r_r96;
    int64_t cpy_r_r97;
    CPyTagged cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r101;
    tuple_T0 cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_slot;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject **cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    CPyTagged cpy_r_r114;
    CPyTagged cpy_r_r115;
    char cpy_r_r116;
    cpy_r_r0 = CPyDef_memprofile___find_recursive_objects_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 93, CPyStatic_memprofile___globals);
        goto CPyL73;
    }
    CPy_INCREF(cpy_r_objs);
    if (((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_objs != NULL) {
        CPy_DECREF(((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_objs);
    }
    ((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_objs = cpy_r_objs;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 93, CPyStatic_memprofile___globals);
        goto CPyL74;
    }
    cpy_r_r2 = PySet_New(NULL);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 99, CPyStatic_memprofile___globals);
        goto CPyL74;
    }
    cpy_r_r3 = ((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_objs;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/memprofile.py", "find_recursive_objects", "find_recursive_objects_env", "objs", 99, CPyStatic_memprofile___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = 0;
CPyL5: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL76;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    cpy_r_o = cpy_r_r9;
    cpy_r_r10 = CPyTagged_Id(cpy_r_o);
    CPy_DECREF(cpy_r_o);
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_r12 = PySet_Add(cpy_r_r2, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 99, CPyStatic_memprofile___globals);
        goto CPyL77;
    }
    cpy_r_r14 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r14;
    goto CPyL5;
CPyL8: ;
    if (((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_seen != NULL) {
        CPy_DECREF(((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_seen);
    }
    ((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_seen = cpy_r_r2;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 99, CPyStatic_memprofile___globals);
        goto CPyL74;
    }
    cpy_r_r16 = CPyDef_memprofile___visit_find_recursive_objects_obj();
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 101, CPyStatic_memprofile___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___memprofile___visit_find_recursive_objects_objObject *)cpy_r_r16)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___memprofile___visit_find_recursive_objects_objObject *)cpy_r_r16)->___mypyc_env__);
    }
    ((mypy___memprofile___visit_find_recursive_objects_objObject *)cpy_r_r16)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 101, CPyStatic_memprofile___globals);
        goto CPyL78;
    }
    if (((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_visit != NULL) {
        CPy_DECREF(((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_visit);
    }
    ((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_visit = cpy_r_r16;
    cpy_r_r18 = 1;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 101, CPyStatic_memprofile___globals);
        goto CPyL74;
    }
    cpy_r_r19 = ((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_objs;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/memprofile.py", "find_recursive_objects", "find_recursive_objects_env", "objs", 106, CPyStatic_memprofile___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r19);
CPyL13: ;
    cpy_r_r20 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r21[1] = {cpy_r_r19};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = PyObject_VectorcallMethod(cpy_r_r20, cpy_r_r22, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 106, CPyStatic_memprofile___globals);
        goto CPyL79;
    }
    CPy_DECREF(cpy_r_r19);
    if (likely(PyList_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "find_recursive_objects", 106, CPyStatic_memprofile___globals, "list", cpy_r_r23);
        goto CPyL74;
    }
    cpy_r_r25 = 0;
CPyL16: ;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_r24)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = (Py_ssize_t)cpy_r_r25 < (Py_ssize_t)cpy_r_r28;
    if (!cpy_r_r29) goto CPyL80;
    cpy_r_r30 = CPyList_GetItemUnsafe(cpy_r_r24, cpy_r_r25);
    cpy_r_obj = cpy_r_r30;
    cpy_r_r31 = PyObject_Type(cpy_r_obj);
    cpy_r_r32 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r33 = cpy_r_r31 == cpy_r_r32;
    CPy_DECREF(cpy_r_r31);
    if (cpy_r_r33) goto CPyL81;
    cpy_r_r34 = PyObject_Type(cpy_r_obj);
    cpy_r_r35 = (PyObject *)&PyDict_Type;
    cpy_r_r36 = PyObject_RichCompare(cpy_r_r34, cpy_r_r35, 2);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", -1, CPyStatic_memprofile___globals);
        goto CPyL82;
    }
    if (unlikely(!PyBool_Check(cpy_r_r36))) {
        CPy_TypeError("bool", cpy_r_r36); cpy_r_r37 = 2;
    } else
        cpy_r_r37 = cpy_r_r36 == Py_True;
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", -1, CPyStatic_memprofile___globals);
        goto CPyL82;
    }
    if (!cpy_r_r37) goto CPyL22;
    cpy_r_r38 = cpy_r_r37;
    goto CPyL26;
CPyL22: ;
    cpy_r_r39 = PyObject_Type(cpy_r_obj);
    cpy_r_r40 = CPyStatic_memprofile___globals;
    cpy_r_r41 = CPyStatics[73]; /* 'defaultdict' */
    cpy_r_r42 = CPyDict_GetItem(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 110, CPyStatic_memprofile___globals);
        goto CPyL83;
    }
    cpy_r_r43 = PyObject_RichCompare(cpy_r_r39, cpy_r_r42, 2);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", -1, CPyStatic_memprofile___globals);
        goto CPyL82;
    }
    if (unlikely(!PyBool_Check(cpy_r_r43))) {
        CPy_TypeError("bool", cpy_r_r43); cpy_r_r44 = 2;
    } else
        cpy_r_r44 = cpy_r_r43 == Py_True;
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", -1, CPyStatic_memprofile___globals);
        goto CPyL82;
    }
    cpy_r_r38 = cpy_r_r44;
CPyL26: ;
    if (!cpy_r_r38) goto CPyL37;
    CPy_INCREF(cpy_r_obj);
    if (likely(PyDict_Check(cpy_r_obj)))
        cpy_r_r45 = cpy_r_obj;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "find_recursive_objects", 111, CPyStatic_memprofile___globals, "dict", cpy_r_obj);
        goto CPyL82;
    }
    cpy_r_r46 = 0;
    cpy_r_r47 = PyDict_Size(cpy_r_r45);
    cpy_r_r48 = cpy_r_r47 << 1;
    cpy_r_r49 = CPyDict_GetItemsIter(cpy_r_r45);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 111, CPyStatic_memprofile___globals);
        goto CPyL84;
    }
CPyL29: ;
    cpy_r_r50 = CPyDict_NextItem(cpy_r_r49, cpy_r_r46);
    cpy_r_r51 = cpy_r_r50.f1;
    cpy_r_r46 = cpy_r_r51;
    cpy_r_r52 = cpy_r_r50.f0;
    if (!cpy_r_r52) goto CPyL85;
    cpy_r_r53 = cpy_r_r50.f2;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = cpy_r_r50.f3;
    CPy_INCREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r50.f2);
    CPy_DECREF(cpy_r_r50.f3);
    cpy_r_key = cpy_r_r53;
    cpy_r_val = cpy_r_r54;
    cpy_r_r55 = ((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_visit;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("mypy/memprofile.py", "find_recursive_objects", "find_recursive_objects_env", "visit", 112, CPyStatic_memprofile___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r55);
CPyL31: ;
    PyObject *cpy_r_r56[1] = {cpy_r_key};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = _PyObject_Vectorcall(cpy_r_r55, cpy_r_r57, 1, 0);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 112, CPyStatic_memprofile___globals);
        goto CPyL86;
    } else
        goto CPyL87;
CPyL32: ;
    CPy_DECREF(cpy_r_key);
    cpy_r_r59 = ((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_visit;
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AttributeError("mypy/memprofile.py", "find_recursive_objects", "find_recursive_objects_env", "visit", 113, CPyStatic_memprofile___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r59);
CPyL33: ;
    PyObject *cpy_r_r60[1] = {cpy_r_val};
    cpy_r_r61 = (PyObject **)&cpy_r_r60;
    cpy_r_r62 = _PyObject_Vectorcall(cpy_r_r59, cpy_r_r61, 1, 0);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 113, CPyStatic_memprofile___globals);
        goto CPyL88;
    } else
        goto CPyL89;
CPyL34: ;
    CPy_DECREF(cpy_r_val);
    cpy_r_r63 = CPyDict_CheckSize(cpy_r_r45, cpy_r_r48);
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 111, CPyStatic_memprofile___globals);
        goto CPyL90;
    } else
        goto CPyL29;
CPyL36: ;
    cpy_r_r64 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 111, CPyStatic_memprofile___globals);
        goto CPyL82;
    }
CPyL37: ;
    cpy_r_r65 = PyObject_Type(cpy_r_obj);
    cpy_r_r66 = (PyObject *)&PyList_Type;
    cpy_r_r67 = PyObject_RichCompare(cpy_r_r65, cpy_r_r66, 2);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", -1, CPyStatic_memprofile___globals);
        goto CPyL82;
    }
    if (unlikely(!PyBool_Check(cpy_r_r67))) {
        CPy_TypeError("bool", cpy_r_r67); cpy_r_r68 = 2;
    } else
        cpy_r_r68 = cpy_r_r67 == Py_True;
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", -1, CPyStatic_memprofile___globals);
        goto CPyL82;
    }
    if (!cpy_r_r68) goto CPyL41;
    cpy_r_r69 = cpy_r_r68;
    goto CPyL44;
CPyL41: ;
    cpy_r_r70 = PyObject_Type(cpy_r_obj);
    cpy_r_r71 = (PyObject *)&PyTuple_Type;
    cpy_r_r72 = PyObject_RichCompare(cpy_r_r70, cpy_r_r71, 2);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", -1, CPyStatic_memprofile___globals);
        goto CPyL82;
    }
    if (unlikely(!PyBool_Check(cpy_r_r72))) {
        CPy_TypeError("bool", cpy_r_r72); cpy_r_r73 = 2;
    } else
        cpy_r_r73 = cpy_r_r72 == Py_True;
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", -1, CPyStatic_memprofile___globals);
        goto CPyL82;
    }
    cpy_r_r69 = cpy_r_r73;
CPyL44: ;
    if (!cpy_r_r69) goto CPyL46;
    cpy_r_r74 = cpy_r_r69;
    goto CPyL49;
CPyL46: ;
    cpy_r_r75 = PyObject_Type(cpy_r_obj);
    cpy_r_r76 = (PyObject *)&PySet_Type;
    cpy_r_r77 = PyObject_RichCompare(cpy_r_r75, cpy_r_r76, 2);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", -1, CPyStatic_memprofile___globals);
        goto CPyL82;
    }
    if (unlikely(!PyBool_Check(cpy_r_r77))) {
        CPy_TypeError("bool", cpy_r_r77); cpy_r_r78 = 2;
    } else
        cpy_r_r78 = cpy_r_r77 == Py_True;
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == 2)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", -1, CPyStatic_memprofile___globals);
        goto CPyL82;
    }
    cpy_r_r74 = cpy_r_r78;
CPyL49: ;
    if (!cpy_r_r74) goto CPyL56;
    cpy_r_r79 = PyObject_GetIter(cpy_r_obj);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 115, CPyStatic_memprofile___globals);
        goto CPyL82;
    }
CPyL51: ;
    cpy_r_r80 = PyIter_Next(cpy_r_r79);
    if (cpy_r_r80 == NULL) goto CPyL91;
    cpy_r_x = cpy_r_r80;
    cpy_r_r81 = ((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_visit;
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AttributeError("mypy/memprofile.py", "find_recursive_objects", "find_recursive_objects_env", "visit", 116, CPyStatic_memprofile___globals);
        goto CPyL92;
    }
    CPy_INCREF(cpy_r_r81);
CPyL53: ;
    PyObject *cpy_r_r82[1] = {cpy_r_x};
    cpy_r_r83 = (PyObject **)&cpy_r_r82;
    cpy_r_r84 = _PyObject_Vectorcall(cpy_r_r81, cpy_r_r83, 1, 0);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 116, CPyStatic_memprofile___globals);
        goto CPyL92;
    } else
        goto CPyL93;
CPyL54: ;
    CPy_DECREF(cpy_r_x);
    goto CPyL51;
CPyL55: ;
    cpy_r_r85 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 115, CPyStatic_memprofile___globals);
        goto CPyL82;
    }
CPyL56: ;
    cpy_r_r86 = CPyStatics[785]; /* '__slots__' */
    cpy_r_r87 = PyObject_HasAttr(cpy_r_obj, cpy_r_r86);
    if (!cpy_r_r87) goto CPyL81;
    cpy_r_r88 = (PyObject *)&PyType_Type;
    cpy_r_r89 = PyObject_Type(cpy_r_obj);
    cpy_r_r90 = CPyStatics[3110]; /* 'mro' */
    PyObject *cpy_r_r91[2] = {cpy_r_r88, cpy_r_r89};
    cpy_r_r92 = (PyObject **)&cpy_r_r91;
    cpy_r_r93 = PyObject_VectorcallMethod(cpy_r_r90, cpy_r_r92, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 118, CPyStatic_memprofile___globals);
        goto CPyL94;
    }
    CPy_DECREF(cpy_r_r89);
    if (likely(PyList_Check(cpy_r_r93)))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/memprofile.py", "find_recursive_objects", 118, CPyStatic_memprofile___globals, "list", cpy_r_r93);
        goto CPyL82;
    }
    cpy_r_r95 = 0;
CPyL60: ;
    cpy_r_r96 = (CPyPtr)&((PyVarObject *)cpy_r_r94)->ob_size;
    cpy_r_r97 = *(int64_t *)cpy_r_r96;
    cpy_r_r98 = cpy_r_r97 << 1;
    cpy_r_r99 = (Py_ssize_t)cpy_r_r95 < (Py_ssize_t)cpy_r_r98;
    if (!cpy_r_r99) goto CPyL95;
    cpy_r_r100 = CPyList_GetItemUnsafe(cpy_r_r94, cpy_r_r95);
    cpy_r_base = cpy_r_r100;
    cpy_r_r101 = CPyStatics[785]; /* '__slots__' */
    cpy_r_r102.empty_struct_error_flag = 0;
    cpy_r_r103 = PyTuple_New(0);
    if (unlikely(cpy_r_r103 == NULL))
        CPyError_OutOfMemory();
    cpy_r_r104 = CPyObject_GetAttr3(cpy_r_base, cpy_r_r101, cpy_r_r103);
    CPy_DECREF(cpy_r_base);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 119, CPyStatic_memprofile___globals);
        goto CPyL96;
    }
    cpy_r_r105 = PyObject_GetIter(cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 119, CPyStatic_memprofile___globals);
        goto CPyL96;
    }
CPyL63: ;
    cpy_r_r106 = PyIter_Next(cpy_r_r105);
    if (cpy_r_r106 == NULL) goto CPyL97;
    cpy_r_slot = cpy_r_r106;
    cpy_r_r107 = PyObject_HasAttr(cpy_r_obj, cpy_r_slot);
    if (!cpy_r_r107) goto CPyL98;
    cpy_r_r108 = CPyObject_GetAttr(cpy_r_obj, cpy_r_slot);
    CPy_DECREF(cpy_r_slot);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 121, CPyStatic_memprofile___globals);
        goto CPyL99;
    }
    cpy_r_r109 = ((mypy___memprofile___find_recursive_objects_envObject *)cpy_r_r0)->_visit;
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AttributeError("mypy/memprofile.py", "find_recursive_objects", "find_recursive_objects_env", "visit", 121, CPyStatic_memprofile___globals);
        goto CPyL100;
    }
    CPy_INCREF(cpy_r_r109);
CPyL67: ;
    PyObject *cpy_r_r110[1] = {cpy_r_r108};
    cpy_r_r111 = (PyObject **)&cpy_r_r110;
    cpy_r_r112 = _PyObject_Vectorcall(cpy_r_r109, cpy_r_r111, 1, 0);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 121, CPyStatic_memprofile___globals);
        goto CPyL100;
    } else
        goto CPyL101;
CPyL68: ;
    CPy_DECREF(cpy_r_r108);
    goto CPyL63;
CPyL69: ;
    cpy_r_r113 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 119, CPyStatic_memprofile___globals);
        goto CPyL96;
    }
    cpy_r_r114 = cpy_r_r95 + 2;
    cpy_r_r95 = cpy_r_r114;
    goto CPyL60;
CPyL71: ;
    cpy_r_r115 = cpy_r_r25 + 2;
    cpy_r_r25 = cpy_r_r115;
    goto CPyL16;
CPyL72: ;
    return 1;
CPyL73: ;
    cpy_r_r116 = 2;
    return cpy_r_r116;
CPyL74: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL73;
CPyL75: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL73;
CPyL76: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL8;
CPyL77: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL73;
CPyL78: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16);
    goto CPyL73;
CPyL79: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r19);
    goto CPyL73;
CPyL80: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r24);
    goto CPyL72;
CPyL81: ;
    CPy_DECREF(cpy_r_obj);
    goto CPyL71;
CPyL82: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_obj);
    goto CPyL73;
CPyL83: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r39);
    goto CPyL73;
CPyL84: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r45);
    goto CPyL73;
CPyL85: ;
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r50.f2);
    CPy_DECREF(cpy_r_r50.f3);
    goto CPyL36;
CPyL86: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_val);
    goto CPyL73;
CPyL87: ;
    CPy_DECREF(cpy_r_r58);
    goto CPyL32;
CPyL88: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_val);
    goto CPyL73;
CPyL89: ;
    CPy_DECREF(cpy_r_r62);
    goto CPyL34;
CPyL90: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r49);
    goto CPyL73;
CPyL91: ;
    CPy_DECREF(cpy_r_r79);
    goto CPyL55;
CPyL92: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_x);
    goto CPyL73;
CPyL93: ;
    CPy_DECREF(cpy_r_r84);
    goto CPyL54;
CPyL94: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r89);
    goto CPyL73;
CPyL95: ;
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_r94);
    goto CPyL71;
CPyL96: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r94);
    goto CPyL73;
CPyL97: ;
    CPy_DECREF(cpy_r_r105);
    goto CPyL69;
CPyL98: ;
    CPy_DECREF(cpy_r_slot);
    goto CPyL63;
CPyL99: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r105);
    goto CPyL73;
CPyL100: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r105);
    CPy_DecRef(cpy_r_r108);
    goto CPyL73;
CPyL101: ;
    CPy_DECREF(cpy_r_r112);
    goto CPyL68;
}

PyObject *CPyPy_memprofile___find_recursive_objects(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"objs", 0};
    static CPyArg_Parser parser = {"O:find_recursive_objects", kwlist, 0};
    PyObject *obj_objs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_objs)) {
        return NULL;
    }
    PyObject *arg_objs;
    if (likely(PyList_Check(obj_objs)))
        arg_objs = obj_objs;
    else {
        CPy_TypeError("list", obj_objs); 
        goto fail;
    }
    char retval = CPyDef_memprofile___find_recursive_objects(arg_objs);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/memprofile.py", "find_recursive_objects", 93, CPyStatic_memprofile___globals);
    return NULL;
}

char CPyDef_memprofile_____top_level__(void) {
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
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "<module>", -1, CPyStatic_memprofile___globals);
        goto CPyL11;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_memprofile___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "<module>", 7, CPyStatic_memprofile___globals);
        goto CPyL11;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_gc;
    cpy_r_r10 = (PyObject **)&CPyModule_sys;
    PyObject **cpy_r_r11[2] = {cpy_r_r9, cpy_r_r10};
    cpy_r_r12 = (void *)&cpy_r_r11;
    int64_t cpy_r_r13[2] = {9, 10};
    cpy_r_r14 = (void *)&cpy_r_r13;
    cpy_r_r15 = CPyStatics[9502]; /* (('gc', 'gc', 'gc'), ('sys', 'sys', 'sys')) */
    cpy_r_r16 = CPyStatic_memprofile___globals;
    cpy_r_r17 = CPyStatics[3111]; /* 'mypy/memprofile.py' */
    cpy_r_r18 = CPyStatics[17]; /* '<module>' */
    cpy_r_r19 = CPyImport_ImportMany(cpy_r_r15, cpy_r_r12, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r14);
    if (!cpy_r_r19) goto CPyL11;
    cpy_r_r20 = CPyStatics[9083]; /* ('defaultdict',) */
    cpy_r_r21 = CPyStatics[76]; /* 'collections' */
    cpy_r_r22 = CPyStatic_memprofile___globals;
    cpy_r_r23 = CPyImport_ImportFromMany(cpy_r_r21, cpy_r_r20, cpy_r_r20, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "<module>", 11, CPyStatic_memprofile___globals);
        goto CPyL11;
    }
    CPyModule_collections = cpy_r_r23;
    CPy_INCREF(CPyModule_collections);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r24 = CPyStatics[9503]; /* ('Dict', 'Iterable', 'cast') */
    cpy_r_r25 = CPyStatics[21]; /* 'typing' */
    cpy_r_r26 = CPyStatic_memprofile___globals;
    cpy_r_r27 = CPyImport_ImportFromMany(cpy_r_r25, cpy_r_r24, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "<module>", 12, CPyStatic_memprofile___globals);
        goto CPyL11;
    }
    CPyModule_typing = cpy_r_r27;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r28 = CPyStatics[9504]; /* ('FakeInfo', 'Node') */
    cpy_r_r29 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r30 = CPyStatic_memprofile___globals;
    cpy_r_r31 = CPyImport_ImportFromMany(cpy_r_r29, cpy_r_r28, cpy_r_r28, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "<module>", 14, CPyStatic_memprofile___globals);
        goto CPyL11;
    }
    CPyModule_mypy___nodes = cpy_r_r31;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r32 = CPyStatics[9157]; /* ('Type',) */
    cpy_r_r33 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r34 = CPyStatic_memprofile___globals;
    cpy_r_r35 = CPyImport_ImportFromMany(cpy_r_r33, cpy_r_r32, cpy_r_r32, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "<module>", 15, CPyStatic_memprofile___globals);
        goto CPyL11;
    }
    CPyModule_mypy___types = cpy_r_r35;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r36 = CPyStatics[9505]; /* ('get_class_descriptors',) */
    cpy_r_r37 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r38 = CPyStatic_memprofile___globals;
    cpy_r_r39 = CPyImport_ImportFromMany(cpy_r_r37, cpy_r_r36, cpy_r_r36, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/memprofile.py", "<module>", 16, CPyStatic_memprofile___globals);
        goto CPyL11;
    }
    CPyModule_mypy___util = cpy_r_r39;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r39);
    return 1;
CPyL11: ;
    cpy_r_r40 = 2;
    return cpy_r_r40;
}
