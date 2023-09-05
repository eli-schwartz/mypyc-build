#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *plugins___common___find_shallow_matching_overload_item_env_setup(PyTypeObject *type);
PyObject *CPyDef_plugins___common___find_shallow_matching_overload_item_env(void);

static PyObject *
plugins___common___find_shallow_matching_overload_item_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugins___common___find_shallow_matching_overload_item_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugins___common___find_shallow_matching_overload_item_env_setup(type);
}

static int
plugins___common___find_shallow_matching_overload_item_env_traverse(mypy___plugins___common___find_shallow_matching_overload_item_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_overload);
    Py_VISIT(self->_call);
    Py_VISIT(self->_item);
    return 0;
}

static int
plugins___common___find_shallow_matching_overload_item_env_clear(mypy___plugins___common___find_shallow_matching_overload_item_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_overload);
    Py_CLEAR(self->_call);
    Py_CLEAR(self->_item);
    return 0;
}

static void
plugins___common___find_shallow_matching_overload_item_env_dealloc(mypy___plugins___common___find_shallow_matching_overload_item_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugins___common___find_shallow_matching_overload_item_env_dealloc)
    plugins___common___find_shallow_matching_overload_item_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugins___common___find_shallow_matching_overload_item_env_vtable[1];
static bool
CPyDef_plugins___common___find_shallow_matching_overload_item_env_trait_vtable_setup(void)
{
    CPyVTableItem plugins___common___find_shallow_matching_overload_item_env_vtable_scratch[] = {
        NULL
    };
    memcpy(plugins___common___find_shallow_matching_overload_item_env_vtable, plugins___common___find_shallow_matching_overload_item_env_vtable_scratch, sizeof(plugins___common___find_shallow_matching_overload_item_env_vtable));
    return 1;
}

static PyMethodDef plugins___common___find_shallow_matching_overload_item_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugins___common___find_shallow_matching_overload_item_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "find_shallow_matching_overload_item_env",
    .tp_new = plugins___common___find_shallow_matching_overload_item_env_new,
    .tp_dealloc = (destructor)plugins___common___find_shallow_matching_overload_item_env_dealloc,
    .tp_traverse = (traverseproc)plugins___common___find_shallow_matching_overload_item_env_traverse,
    .tp_clear = (inquiry)plugins___common___find_shallow_matching_overload_item_env_clear,
    .tp_methods = plugins___common___find_shallow_matching_overload_item_env_methods,
    .tp_basicsize = sizeof(mypy___plugins___common___find_shallow_matching_overload_item_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugins___common___find_shallow_matching_overload_item_env_template = &CPyType_plugins___common___find_shallow_matching_overload_item_env_template_;

static PyObject *
plugins___common___find_shallow_matching_overload_item_env_setup(PyTypeObject *type)
{
    mypy___plugins___common___find_shallow_matching_overload_item_envObject *self;
    self = (mypy___plugins___common___find_shallow_matching_overload_item_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugins___common___find_shallow_matching_overload_item_env_vtable;
    self->_ok = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_plugins___common___find_shallow_matching_overload_item_env(void)
{
    PyObject *self = plugins___common___find_shallow_matching_overload_item_env_setup(CPyType_plugins___common___find_shallow_matching_overload_item_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_____get__(self, instance, owner);
}
PyMemberDef plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_setup(PyTypeObject *type);
PyObject *CPyDef_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj(void);

static PyObject *
plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_setup(type);
}

static int
plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_traverse(mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject))));
    return 0;
}

static int
plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_clear(mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject))));
    return 0;
}

static void
plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_dealloc(mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_dealloc)
    plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_vtable[2];
static bool
CPyDef_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_trait_vtable_setup(void)
{
    CPyVTableItem plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_____call__,
        (CPyVTableItem)CPyDef_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_____get__,
    };
    memcpy(plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_vtable, plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_vtable_scratch, sizeof(plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_vtable));
    return 1;
}

static PyMethodDef plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_find_shallow_matching_overload_item_obj",
    .tp_new = plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_new,
    .tp_dealloc = (destructor)plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_dealloc,
    .tp_traverse = (traverseproc)plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_traverse,
    .tp_clear = (inquiry)plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_clear,
    .tp_methods = plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj,
    .tp_members = plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_members,
    .tp_basicsize = sizeof(mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject),
    .tp_weaklistoffset = sizeof(mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_template = &CPyType_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_template_;

static PyObject *
plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_setup(PyTypeObject *type)
{
    mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject *self;
    self = (mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_vtable;
    self->vectorcall = CPyPy_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj(void)
{
    PyObject *self = plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_setup(CPyType_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef plugins___commonmodule_methods[] = {
    {"_get_decorator_bool_argument", (PyCFunction)CPyPy_plugins___common____get_decorator_bool_argument, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_get_bool_argument", (PyCFunction)CPyPy_plugins___common____get_bool_argument, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_get_argument", (PyCFunction)CPyPy_plugins___common____get_argument, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_shallow_matching_overload_item", (PyCFunction)CPyPy_plugins___common___find_shallow_matching_overload_item, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_get_callee_type", (PyCFunction)CPyPy_plugins___common____get_callee_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_method", (PyCFunction)CPyPy_plugins___common___add_method, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_method_to_class", (PyCFunction)CPyPy_plugins___common___add_method_to_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_attribute_to_class", (PyCFunction)CPyPy_plugins___common___add_attribute_to_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"deserialize_and_fixup_type", (PyCFunction)CPyPy_plugins___common___deserialize_and_fixup_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef plugins___commonmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.plugins.common",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    plugins___commonmodule_methods
};

PyObject *CPyInit_mypy___plugins___common(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___plugins___common_internal) {
        Py_INCREF(CPyModule_mypy___plugins___common_internal);
        return CPyModule_mypy___plugins___common_internal;
    }
    CPyModule_mypy___plugins___common_internal = PyModule_Create(&plugins___commonmodule);
    if (unlikely(CPyModule_mypy___plugins___common_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___plugins___common_internal, "__name__");
    CPyStatic_plugins___common___globals = PyModule_GetDict(CPyModule_mypy___plugins___common_internal);
    if (unlikely(CPyStatic_plugins___common___globals == NULL))
        goto fail;
    CPyType_plugins___common___find_shallow_matching_overload_item_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugins___common___find_shallow_matching_overload_item_env_template, NULL, modname);
    if (unlikely(!CPyType_plugins___common___find_shallow_matching_overload_item_env))
        goto fail;
    CPyType_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_template, NULL, modname);
    if (unlikely(!CPyType_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_plugins___common_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___plugins___common_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___plugins___common_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_plugins___common___find_shallow_matching_overload_item_env);
    Py_CLEAR(CPyType_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj);
    return NULL;
}

char CPyDef_plugins___common____get_decorator_bool_argument(PyObject *cpy_r_ctx, PyObject *cpy_r_name, char cpy_r_default) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_decorator_bool_argument", 56, CPyStatic_plugins___common___globals);
        goto CPyL7;
    }
    cpy_r_r1 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL6;
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_decorator_bool_argument", 57, CPyStatic_plugins___common___globals);
        goto CPyL7;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_nodes___CallExpr))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_decorator_bool_argument", 57, CPyStatic_plugins___common___globals, "mypy.nodes.CallExpr", cpy_r_r5);
        goto CPyL7;
    }
    cpy_r_r7 = CPyDef_plugins___common____get_bool_argument(cpy_r_ctx, cpy_r_r6, cpy_r_name, cpy_r_default);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_decorator_bool_argument", 57, CPyStatic_plugins___common___globals);
        goto CPyL7;
    }
    return cpy_r_r7;
CPyL6: ;
    return cpy_r_default;
CPyL7: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
}

PyObject *CPyPy_plugins___common____get_decorator_bool_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "name", "default", 0};
    static CPyArg_Parser parser = {"OOO:_get_decorator_bool_argument", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_name;
    PyObject *obj_default;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_name, &obj_default)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char arg_default;
    if (unlikely(!PyBool_Check(obj_default))) {
        CPy_TypeError("bool", obj_default); goto fail;
    } else
        arg_default = obj_default == Py_True;
    char retval = CPyDef_plugins___common____get_decorator_bool_argument(arg_ctx, arg_name, arg_default);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/common.py", "_get_decorator_bool_argument", 51, CPyStatic_plugins___common___globals);
    return NULL;
}

char CPyDef_plugins___common____get_bool_argument(PyObject *cpy_r_ctx, PyObject *cpy_r_expr, PyObject *cpy_r_name, char cpy_r_default) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_attr_value;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = CPyDef_plugins___common____get_argument(cpy_r_expr, cpy_r_name);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_bool_argument", 66, CPyStatic_plugins___common___globals);
        goto CPyL9;
    }
    cpy_r_attr_value = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_attr_value != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL10;
    cpy_r_r3 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_bool_argument", 68, CPyStatic_plugins___common___globals);
        goto CPyL11;
    }
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_bool_argument", 68, CPyStatic_plugins___common___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r3);
        goto CPyL11;
    }
    if (likely(cpy_r_attr_value != Py_None))
        cpy_r_r5 = cpy_r_attr_value;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_bool_argument", 68, CPyStatic_plugins___common___globals, "mypy.nodes.Expression", cpy_r_attr_value);
        goto CPyL12;
    }
    cpy_r_r6 = cpy_r_default ? Py_True : Py_False;
    cpy_r_r7 = CPyDef_semanal_shared___require_bool_literal_argument(cpy_r_r4, cpy_r_r5, cpy_r_name, cpy_r_r6);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_bool_argument", 68, CPyStatic_plugins___common___globals);
        goto CPyL9;
    }
    if (unlikely(!PyBool_Check(cpy_r_r7))) {
        CPy_TypeError("bool", cpy_r_r7); cpy_r_r8 = 2;
    } else
        cpy_r_r8 = cpy_r_r7 == Py_True;
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_bool_argument", 68, CPyStatic_plugins___common___globals);
        goto CPyL9;
    }
    return cpy_r_r8;
CPyL8: ;
    return cpy_r_default;
CPyL9: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL10: ;
    CPy_DECREF(cpy_r_attr_value);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_attr_value);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL9;
}

PyObject *CPyPy_plugins___common____get_bool_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "expr", "name", "default", 0};
    static CPyArg_Parser parser = {"OOOO:_get_bool_argument", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_expr;
    PyObject *obj_name;
    PyObject *obj_default;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_expr, &obj_name, &obj_default)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char arg_default;
    if (unlikely(!PyBool_Check(obj_default))) {
        CPy_TypeError("bool", obj_default); goto fail;
    } else
        arg_default = obj_default == Py_True;
    char retval = CPyDef_plugins___common____get_bool_argument(arg_ctx, arg_expr, arg_name, arg_default);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/common.py", "_get_bool_argument", 62, CPyStatic_plugins___common___globals);
    return NULL;
}

PyObject *CPyDef_plugins___common____get_argument(PyObject *cpy_r_call, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_callee_type;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_argument;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_attr_name;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_attr_value;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    int64_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    CPyTagged cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    cpy_r_r0 = CPyDef_plugins___common____get_callee_type(cpy_r_call);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_argument", 79, CPyStatic_plugins___common___globals);
        goto CPyL46;
    }
    cpy_r_callee_type = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_callee_type != cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL3;
    } else
        goto CPyL47;
CPyL2: ;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    return cpy_r_r3;
CPyL3: ;
    if (likely(cpy_r_callee_type != Py_None))
        cpy_r_r4 = cpy_r_callee_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_argument", 83, CPyStatic_plugins___common___globals, "mypy.types.CallableType", cpy_r_callee_type);
        goto CPyL46;
    }
    cpy_r_r5 = CPyDef_types___CallableType___argument_by_name(cpy_r_r4, cpy_r_name);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_argument", 83, CPyStatic_plugins___common___globals);
        goto CPyL46;
    }
    cpy_r_argument = cpy_r_r5;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_argument != cpy_r_r6;
    if (!cpy_r_r7) goto CPyL48;
    CPy_INCREF(cpy_r_argument);
    if (likely(cpy_r_argument != Py_None))
        cpy_r_r8 = cpy_r_argument;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_argument", 83, CPyStatic_plugins___common___globals, "tuple", cpy_r_argument);
        goto CPyL49;
    }
    cpy_r_r9 = PyObject_IsTrue(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_argument", 83, CPyStatic_plugins___common___globals);
        goto CPyL49;
    }
    cpy_r_r11 = cpy_r_r9;
    if (cpy_r_r11) {
        goto CPyL10;
    } else
        goto CPyL48;
CPyL9: ;
    cpy_r_r12 = Py_None;
    CPy_INCREF(cpy_r_r12);
    return cpy_r_r12;
CPyL10: ;
    CPy_INCREF(cpy_r_argument);
    if (likely(cpy_r_argument != Py_None))
        cpy_r_r13 = cpy_r_argument;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_argument", 86, CPyStatic_plugins___common___globals, "tuple", cpy_r_argument);
        goto CPyL49;
    }
    cpy_r_r14 = CPySequenceTuple_GetItem(cpy_r_r13, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_argument", 86, CPyStatic_plugins___common___globals);
        goto CPyL49;
    }
    if (PyUnicode_Check(cpy_r_r14))
        cpy_r_r15 = cpy_r_r14;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL4751;
    if (cpy_r_r14 == Py_None)
        cpy_r_r15 = cpy_r_r14;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL4751;
    CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_argument", 86, CPyStatic_plugins___common___globals, "str or None", cpy_r_r14);
    goto CPyL49;
__LL4751: ;
    cpy_r_r16 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r17 = cpy_r_r15 != cpy_r_r16;
    if (!cpy_r_r17) goto CPyL50;
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r18 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_argument", 86, CPyStatic_plugins___common___globals, "str", cpy_r_r15);
        goto CPyL49;
    }
    cpy_r_r19 = CPyStr_IsTrue(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (cpy_r_r19) {
        goto CPyL18;
    } else
        goto CPyL51;
CPyL16: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_argument", 86, CPyStatic_plugins___common___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r21 = 0;
    cpy_r_i = 0;
    cpy_r_r22 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_names;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = 0;
    cpy_r_r24 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_args;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = 0;
CPyL19: ;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_r22)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = (Py_ssize_t)cpy_r_r23 < (Py_ssize_t)cpy_r_r28;
    if (!cpy_r_r29) goto CPyL52;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r24)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r25 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL52;
    cpy_r_r34 = CPyList_GetItemUnsafe(cpy_r_r22, cpy_r_r23);
    if (PyUnicode_Check(cpy_r_r34))
        cpy_r_r35 = cpy_r_r34;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL4752;
    if (cpy_r_r34 == Py_None)
        cpy_r_r35 = cpy_r_r34;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL4752;
    CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_argument", 88, CPyStatic_plugins___common___globals, "str or None", cpy_r_r34);
    goto CPyL53;
__LL4752: ;
    cpy_r_attr_name = cpy_r_r35;
    cpy_r_r36 = CPyList_GetItemUnsafe(cpy_r_r24, cpy_r_r25);
    if (likely(PyObject_TypeCheck(cpy_r_r36, CPyType_nodes___Expression)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_argument", 88, CPyStatic_plugins___common___globals, "mypy.nodes.Expression", cpy_r_r36);
        goto CPyL54;
    }
    cpy_r_attr_value = cpy_r_r37;
    CPy_INCREF(cpy_r_argument);
    if (likely(cpy_r_argument != Py_None))
        cpy_r_r38 = cpy_r_argument;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_argument", 89, CPyStatic_plugins___common___globals, "tuple", cpy_r_argument);
        goto CPyL55;
    }
    cpy_r_r39 = CPySequenceTuple_GetItem(cpy_r_r38, 2);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_argument", 89, CPyStatic_plugins___common___globals);
        goto CPyL55;
    }
    if (PyLong_Check(cpy_r_r39))
        cpy_r_r40 = cpy_r_r39;
    else {
        cpy_r_r40 = NULL;
    }
    if (cpy_r_r40 != NULL) goto __LL4753;
    if (cpy_r_r39 == Py_None)
        cpy_r_r40 = cpy_r_r39;
    else {
        cpy_r_r40 = NULL;
    }
    if (cpy_r_r40 != NULL) goto __LL4753;
    CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_argument", 89, CPyStatic_plugins___common___globals, "int or None", cpy_r_r39);
    goto CPyL55;
__LL4753: ;
    cpy_r_r41 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r42 = cpy_r_r40 != cpy_r_r41;
    CPy_DECREF(cpy_r_r40);
    if (!cpy_r_r42) goto CPyL56;
    cpy_r_r43 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r44 = cpy_r_attr_name != cpy_r_r43;
    if (!cpy_r_r44) goto CPyL30;
    CPy_INCREF(cpy_r_attr_name);
    if (likely(cpy_r_attr_name != Py_None))
        cpy_r_r45 = cpy_r_attr_name;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_argument", 88, CPyStatic_plugins___common___globals, "str", cpy_r_attr_name);
        goto CPyL55;
    }
    cpy_r_r46 = CPyStr_IsTrue(cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (cpy_r_r46) goto CPyL56;
CPyL30: ;
    CPy_INCREF(cpy_r_argument);
    if (likely(cpy_r_argument != Py_None))
        cpy_r_r47 = cpy_r_argument;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_argument", 89, CPyStatic_plugins___common___globals, "tuple", cpy_r_argument);
        goto CPyL55;
    }
    cpy_r_r48 = CPySequenceTuple_GetItem(cpy_r_r47, 2);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_argument", 89, CPyStatic_plugins___common___globals);
        goto CPyL55;
    }
    if (likely(PyLong_Check(cpy_r_r48)))
        cpy_r_r49 = CPyTagged_FromObject(cpy_r_r48);
    else {
        CPy_TypeError("int", cpy_r_r48); cpy_r_r49 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_argument", 89, CPyStatic_plugins___common___globals);
        goto CPyL55;
    }
    cpy_r_r50 = cpy_r_i & 1;
    cpy_r_r51 = cpy_r_r50 != 0;
    if (!cpy_r_r51) goto CPyL35;
    cpy_r_r52 = CPyTagged_IsEq_(cpy_r_i, cpy_r_r49);
    CPyTagged_DECREF(cpy_r_i);
    CPyTagged_DECREF(cpy_r_r49);
    if (cpy_r_r52) {
        goto CPyL57;
    } else
        goto CPyL37;
CPyL35: ;
    cpy_r_r53 = cpy_r_i == cpy_r_r49;
    CPyTagged_DECREF(cpy_r_i);
    CPyTagged_DECREF(cpy_r_r49);
    if (cpy_r_r53) {
        goto CPyL57;
    } else
        goto CPyL37;
CPyL36: ;
    return cpy_r_attr_value;
CPyL37: ;
    CPy_INCREF(cpy_r_argument);
    if (likely(cpy_r_argument != Py_None))
        cpy_r_r54 = cpy_r_argument;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_argument", 91, CPyStatic_plugins___common___globals, "tuple", cpy_r_argument);
        goto CPyL58;
    }
    cpy_r_r55 = CPySequenceTuple_GetItem(cpy_r_r54, 0);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_argument", 91, CPyStatic_plugins___common___globals);
        goto CPyL58;
    }
    if (likely(PyUnicode_Check(cpy_r_r55)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_argument", 91, CPyStatic_plugins___common___globals, "str", cpy_r_r55);
        goto CPyL58;
    }
    cpy_r_r57 = PyObject_RichCompare(cpy_r_attr_name, cpy_r_r56, 2);
    CPy_DECREF(cpy_r_attr_name);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_argument", 91, CPyStatic_plugins___common___globals);
        goto CPyL59;
    }
    if (unlikely(!PyBool_Check(cpy_r_r57))) {
        CPy_TypeError("bool", cpy_r_r57); cpy_r_r58 = 2;
    } else
        cpy_r_r58 = cpy_r_r57 == Py_True;
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_argument", 91, CPyStatic_plugins___common___globals);
        goto CPyL59;
    }
    if (cpy_r_r58) {
        goto CPyL60;
    } else
        goto CPyL61;
CPyL43: ;
    return cpy_r_attr_value;
CPyL44: ;
    cpy_r_r59 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r59;
    cpy_r_i = cpy_r_r59;
    cpy_r_r60 = cpy_r_r23 + 2;
    cpy_r_r23 = cpy_r_r60;
    cpy_r_r61 = cpy_r_r25 + 2;
    cpy_r_r25 = cpy_r_r61;
    goto CPyL19;
CPyL45: ;
    cpy_r_r62 = Py_None;
    CPy_INCREF(cpy_r_r62);
    return cpy_r_r62;
CPyL46: ;
    cpy_r_r63 = NULL;
    return cpy_r_r63;
CPyL47: ;
    CPy_DECREF(cpy_r_callee_type);
    goto CPyL2;
CPyL48: ;
    CPy_DECREF(cpy_r_argument);
    goto CPyL9;
CPyL49: ;
    CPy_DecRef(cpy_r_argument);
    goto CPyL46;
CPyL50: ;
    CPy_DECREF(cpy_r_argument);
    CPy_DECREF(cpy_r_r15);
    goto CPyL16;
CPyL51: ;
    CPy_DECREF(cpy_r_argument);
    goto CPyL16;
CPyL52: ;
    CPy_DECREF(cpy_r_argument);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r24);
    goto CPyL45;
CPyL53: ;
    CPy_DecRef(cpy_r_argument);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    goto CPyL46;
CPyL54: ;
    CPy_DecRef(cpy_r_argument);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_attr_name);
    goto CPyL46;
CPyL55: ;
    CPy_DecRef(cpy_r_argument);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_attr_value);
    goto CPyL46;
CPyL56: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL37;
CPyL57: ;
    CPy_DECREF(cpy_r_argument);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_attr_name);
    goto CPyL36;
CPyL58: ;
    CPy_DecRef(cpy_r_argument);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_attr_value);
    goto CPyL46;
CPyL59: ;
    CPy_DecRef(cpy_r_argument);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_attr_value);
    goto CPyL46;
CPyL60: ;
    CPy_DECREF(cpy_r_argument);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r24);
    goto CPyL43;
CPyL61: ;
    CPy_DECREF(cpy_r_attr_value);
    goto CPyL44;
}

PyObject *CPyPy_plugins___common____get_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"call", "name", 0};
    static CPyArg_Parser parser = {"OO:_get_argument", kwlist, 0};
    PyObject *obj_call;
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_call, &obj_name)) {
        return NULL;
    }
    PyObject *arg_call;
    if (likely(Py_TYPE(obj_call) == CPyType_nodes___CallExpr))
        arg_call = obj_call;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_call); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugins___common____get_argument(arg_call, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/common.py", "_get_argument", 72, CPyStatic_plugins___common___globals);
    return NULL;
}

PyObject *CPyDef_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/common.py", "__get__", -1, CPyStatic_plugins___common___globals);
    return NULL;
}

PyObject *CPyDef_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_____call__(PyObject *cpy_r___mypyc_self__, CPyTagged cpy_r_i) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugins/common.py", "<lambda>", "__mypyc_lambda__0_find_shallow_matching_overload_item_obj", "__mypyc_env__", 119, CPyStatic_plugins___common___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL4;
CPyL1: ;
    cpy_r_r1 = NULL;
    cpy_r_r2 = NULL;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_types___AnyType(12, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "<lambda>", 119, CPyStatic_plugins___common___globals);
        goto CPyL3;
    }
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL4: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"i", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_i;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_i)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    CPyTagged arg_i;
    if (likely(PyLong_Check(obj_i)))
        arg_i = CPyTagged_BorrowFromObject(obj_i);
    else {
        CPy_TypeError("int", obj_i); goto fail;
    }
    PyObject *retval = CPyDef_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj_____call__(arg___mypyc_self__, arg_i);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/common.py", "<lambda>", 119, CPyStatic_plugins___common___globals);
    return NULL;
}

PyObject *CPyDef_plugins___common___find_shallow_matching_overload_item(PyObject *cpy_r_overload, PyObject *cpy_r_call) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_item;
    char cpy_r_ok;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_mapped;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_matched_actuals;
    CPyTagged cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_actuals;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyTagged cpy_r_i;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyPtr cpy_r_r47;
    int64_t cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    CPyPtr cpy_r_r51;
    int64_t cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    CPyPtr cpy_r_r55;
    int64_t cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_arg_type;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_kind;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject **cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    CPyPtr cpy_r_r70;
    int64_t cpy_r_r71;
    CPyTagged cpy_r_r72;
    char cpy_r_r73;
    CPyPtr cpy_r_r74;
    int64_t cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    CPyPtr cpy_r_r78;
    int64_t cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyTagged cpy_r_r81;
    CPyPtr cpy_r_r82;
    int64_t cpy_r_r83;
    CPyTagged cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyTagged cpy_r_r87;
    CPyTagged cpy_r_i_2;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    CPyTagged cpy_r_r92;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    CPyTagged cpy_r_r96;
    CPyPtr cpy_r_r97;
    int64_t cpy_r_r98;
    CPyTagged cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r103;
    CPyPtr cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    CPyTagged cpy_r_r117;
    char cpy_r_arg_none;
    PyObject *cpy_r_r118;
    CPyPtr cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    CPyPtr cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    char cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    CPyPtr cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    CPyPtr cpy_r_r143;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    char cpy_r_r150;
    char cpy_r_r151;
    CPyTagged cpy_r_r152;
    CPyPtr cpy_r_r153;
    int64_t cpy_r_r154;
    CPyTagged cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_arg_2;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    char cpy_r_r165;
    CPyTagged cpy_r_r166;
    CPyTagged cpy_r_r167;
    CPyTagged cpy_r_r168;
    CPyTagged cpy_r_r169;
    CPyTagged cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    cpy_r_r0 = CPyDef_plugins___common___find_shallow_matching_overload_item_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 97, CPyStatic_plugins___common___globals);
        goto CPyL100;
    }
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_overload, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 112, CPyStatic_plugins___common___globals);
        goto CPyL101;
    }
CPyL2: ;
    cpy_r_r2 = CPyList_GetSlice(cpy_r_r1, 0, -2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 112, CPyStatic_plugins___common___globals);
        goto CPyL101;
    }
    if (likely(PyList_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 112, CPyStatic_plugins___common___globals, "list", cpy_r_r2);
        goto CPyL101;
    }
    cpy_r_r4 = 0;
CPyL5: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL102;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_types___CallableType))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 112, CPyStatic_plugins___common___globals, "mypy.types.CallableType", cpy_r_r9);
        goto CPyL103;
    }
    cpy_r_item = cpy_r_r10;
    cpy_r_ok = 1;
    cpy_r_r11 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_kinds;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_names;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = ((mypy___types___CallableTypeObject *)cpy_r_item)->_arg_kinds;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = ((mypy___types___CallableTypeObject *)cpy_r_item)->_arg_names;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyDef_plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_obj();
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 119, CPyStatic_plugins___common___globals);
        goto CPyL104;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject *)cpy_r_r15)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject *)cpy_r_r15)->___mypyc_env__);
    }
    ((mypy___plugins___common_____mypyc_lambda__0_find_shallow_matching_overload_item_objObject *)cpy_r_r15)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 119, CPyStatic_plugins___common___globals);
        goto CPyL105;
    }
    cpy_r_r17 = CPyDef_argmap___map_actuals_to_formals(cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 114, CPyStatic_plugins___common___globals);
        goto CPyL106;
    }
    cpy_r_mapped = cpy_r_r17;
    cpy_r_r18 = PySet_New(NULL);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 123, CPyStatic_plugins___common___globals);
        goto CPyL107;
    }
    cpy_r_matched_actuals = cpy_r_r18;
    cpy_r_r19 = 0;
CPyL12: ;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_mapped)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r22;
    if (!cpy_r_r23) goto CPyL16;
    cpy_r_r24 = CPyList_GetItemUnsafe(cpy_r_mapped, cpy_r_r19);
    if (likely(PyList_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 124, CPyStatic_plugins___common___globals, "list", cpy_r_r24);
        goto CPyL108;
    }
    cpy_r_actuals = cpy_r_r25;
    cpy_r_r26 = _PySet_Update(cpy_r_matched_actuals, cpy_r_actuals);
    CPy_DECREF(cpy_r_actuals);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 125, CPyStatic_plugins___common___globals);
        goto CPyL108;
    }
    cpy_r_r28 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r28;
    goto CPyL12;
CPyL16: ;
    cpy_r_r29 = 0;
    cpy_r_r30 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_args;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_r30)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = 0;
    cpy_r_i = cpy_r_r34;
CPyL17: ;
    cpy_r_r35 = (Py_ssize_t)cpy_r_r34 < (Py_ssize_t)cpy_r_r33;
    if (!cpy_r_r35) goto CPyL109;
    cpy_r_r36 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r37 = PySet_Contains(cpy_r_matched_actuals, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 126, CPyStatic_plugins___common___globals);
        goto CPyL108;
    }
    cpy_r_r39 = cpy_r_r37;
    cpy_r_r40 = cpy_r_r39 ^ 1;
    if (cpy_r_r40) {
        goto CPyL110;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r29 = 1;
    goto CPyL22;
CPyL21: ;
    cpy_r_r41 = cpy_r_r34 + 2;
    cpy_r_r34 = cpy_r_r41;
    cpy_r_i = cpy_r_r41;
    goto CPyL17;
CPyL22: ;
    if (!cpy_r_r29) goto CPyL24;
    cpy_r_ok = 0;
CPyL24: ;
    cpy_r_r42 = ((mypy___types___CallableTypeObject *)cpy_r_item)->_arg_types;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = 0;
    cpy_r_r44 = ((mypy___types___CallableTypeObject *)cpy_r_item)->_arg_kinds;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = 0;
    cpy_r_r46 = 0;
CPyL25: ;
    cpy_r_r47 = (CPyPtr)&((PyVarObject *)cpy_r_r42)->ob_size;
    cpy_r_r48 = *(int64_t *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 << 1;
    cpy_r_r50 = (Py_ssize_t)cpy_r_r43 < (Py_ssize_t)cpy_r_r49;
    if (!cpy_r_r50) goto CPyL111;
    cpy_r_r51 = (CPyPtr)&((PyVarObject *)cpy_r_r44)->ob_size;
    cpy_r_r52 = *(int64_t *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 << 1;
    cpy_r_r54 = (Py_ssize_t)cpy_r_r45 < (Py_ssize_t)cpy_r_r53;
    if (!cpy_r_r54) goto CPyL111;
    cpy_r_r55 = (CPyPtr)&((PyVarObject *)cpy_r_mapped)->ob_size;
    cpy_r_r56 = *(int64_t *)cpy_r_r55;
    cpy_r_r57 = cpy_r_r56 << 1;
    cpy_r_r58 = (Py_ssize_t)cpy_r_r46 < (Py_ssize_t)cpy_r_r57;
    if (!cpy_r_r58) goto CPyL111;
    cpy_r_r59 = CPyList_GetItemUnsafe(cpy_r_r42, cpy_r_r43);
    if (likely(PyObject_TypeCheck(cpy_r_r59, CPyType_types___Type)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 129, CPyStatic_plugins___common___globals, "mypy.types.Type", cpy_r_r59);
        goto CPyL112;
    }
    cpy_r_arg_type = cpy_r_r60;
    cpy_r_r61 = CPyList_GetItemUnsafe(cpy_r_r44, cpy_r_r45);
    if (likely(Py_TYPE(cpy_r_r61) == CPyType_nodes___ArgKind))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 129, CPyStatic_plugins___common___globals, "mypy.nodes.ArgKind", cpy_r_r61);
        goto CPyL113;
    }
    cpy_r_kind = cpy_r_r62;
    cpy_r_r63 = CPyList_GetItemUnsafe(cpy_r_mapped, cpy_r_r46);
    if (likely(PyList_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 129, CPyStatic_plugins___common___globals, "list", cpy_r_r63);
        goto CPyL114;
    }
    cpy_r_actuals = cpy_r_r64;
    cpy_r_r65 = CPyStatics[829]; /* 'is_required' */
    PyObject *cpy_r_r66[1] = {cpy_r_kind};
    cpy_r_r67 = (PyObject **)&cpy_r_r66;
    cpy_r_r68 = PyObject_VectorcallMethod(cpy_r_r65, cpy_r_r67, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 130, CPyStatic_plugins___common___globals);
        goto CPyL115;
    }
    CPy_DECREF(cpy_r_kind);
    if (unlikely(!PyBool_Check(cpy_r_r68))) {
        CPy_TypeError("bool", cpy_r_r68); cpy_r_r69 = 2;
    } else
        cpy_r_r69 = cpy_r_r68 == Py_True;
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 130, CPyStatic_plugins___common___globals);
        goto CPyL116;
    }
    if (!cpy_r_r69) goto CPyL36;
    cpy_r_r70 = (CPyPtr)&((PyVarObject *)cpy_r_actuals)->ob_size;
    cpy_r_r71 = *(int64_t *)cpy_r_r70;
    cpy_r_r72 = cpy_r_r71 << 1;
    cpy_r_r73 = cpy_r_r72 != 0;
    if (cpy_r_r73) {
        goto CPyL36;
    } else
        goto CPyL117;
CPyL35: ;
    cpy_r_ok = 0;
    goto CPyL93;
CPyL36: ;
    cpy_r_r74 = (CPyPtr)&((PyVarObject *)cpy_r_actuals)->ob_size;
    cpy_r_r75 = *(int64_t *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 << 1;
    cpy_r_r77 = cpy_r_r76 != 0;
    if (!cpy_r_r77) goto CPyL118;
    cpy_r_r78 = (CPyPtr)&((PyVarObject *)cpy_r_actuals)->ob_size;
    cpy_r_r79 = *(int64_t *)cpy_r_r78;
    cpy_r_r80 = PyList_New(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 135, CPyStatic_plugins___common___globals);
        goto CPyL116;
    }
    cpy_r_r81 = 0;
CPyL39: ;
    cpy_r_r82 = (CPyPtr)&((PyVarObject *)cpy_r_actuals)->ob_size;
    cpy_r_r83 = *(int64_t *)cpy_r_r82;
    cpy_r_r84 = cpy_r_r83 << 1;
    cpy_r_r85 = (Py_ssize_t)cpy_r_r81 < (Py_ssize_t)cpy_r_r84;
    if (!cpy_r_r85) goto CPyL119;
    cpy_r_r86 = CPyList_GetItemUnsafe(cpy_r_actuals, cpy_r_r81);
    if (likely(PyLong_Check(cpy_r_r86)))
        cpy_r_r87 = CPyTagged_FromObject(cpy_r_r86);
    else {
        CPy_TypeError("int", cpy_r_r86); cpy_r_r87 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 135, CPyStatic_plugins___common___globals);
        goto CPyL120;
    }
    cpy_r_i_2 = cpy_r_r87;
    cpy_r_r88 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_args;
    cpy_r_r89 = CPyList_GetItem(cpy_r_r88, cpy_r_i_2);
    CPyTagged_DECREF(cpy_r_i_2);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 135, CPyStatic_plugins___common___globals);
        goto CPyL120;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r89, CPyType_nodes___Expression)))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 135, CPyStatic_plugins___common___globals, "mypy.nodes.Expression", cpy_r_r89);
        goto CPyL120;
    }
    cpy_r_r91 = CPyList_SetItemUnsafe(cpy_r_r80, cpy_r_r81, cpy_r_r90);
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 135, CPyStatic_plugins___common___globals);
        goto CPyL120;
    }
    cpy_r_r92 = cpy_r_r81 + 2;
    cpy_r_r81 = cpy_r_r92;
    goto CPyL39;
CPyL45: ;
    cpy_r_args = cpy_r_r80;
    cpy_r_r93 = CPyDef_types___get_proper_type(cpy_r_arg_type);
    CPy_DECREF(cpy_r_arg_type);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 136, CPyStatic_plugins___common___globals);
        goto CPyL121;
    }
    if (likely(cpy_r_r93 != Py_None))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 136, CPyStatic_plugins___common___globals, "mypy.types.ProperType", cpy_r_r93);
        goto CPyL121;
    }
    cpy_r_arg_type = cpy_r_r94;
    cpy_r_r95 = 0;
    cpy_r_r96 = 0;
CPyL48: ;
    cpy_r_r97 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r98 = *(int64_t *)cpy_r_r97;
    cpy_r_r99 = cpy_r_r98 << 1;
    cpy_r_r100 = (Py_ssize_t)cpy_r_r96 < (Py_ssize_t)cpy_r_r99;
    if (!cpy_r_r100) goto CPyL60;
    cpy_r_r101 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r96);
    if (likely(PyObject_TypeCheck(cpy_r_r101, CPyType_nodes___Expression)))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 137, CPyStatic_plugins___common___globals, "mypy.nodes.Expression", cpy_r_r101);
        goto CPyL122;
    }
    cpy_r_arg = cpy_r_r102;
    cpy_r_r103 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r104 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r105 = *(PyObject * *)cpy_r_r104;
    cpy_r_r106 = cpy_r_r105 == cpy_r_r103;
    if (cpy_r_r106) {
        goto CPyL52;
    } else
        goto CPyL123;
CPyL51: ;
    cpy_r_r107 = cpy_r_r106;
    goto CPyL57;
CPyL52: ;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_nodes___NameExpr))
        cpy_r_r108 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 137, CPyStatic_plugins___common___globals, "mypy.nodes.NameExpr", cpy_r_arg);
        goto CPyL124;
    }
    cpy_r_r109 = ((mypy___nodes___NameExprObject *)cpy_r_r108)->_name;
    CPy_INCREF(cpy_r_r109);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r110 = CPyStatics[423]; /* 'None' */
    cpy_r_r111 = PyUnicode_Compare(cpy_r_r109, cpy_r_r110);
    CPy_DECREF(cpy_r_r109);
    cpy_r_r112 = cpy_r_r111 == -1;
    if (!cpy_r_r112) goto CPyL56;
    cpy_r_r113 = PyErr_Occurred();
    cpy_r_r114 = cpy_r_r113 != NULL;
    if (!cpy_r_r114) goto CPyL56;
    cpy_r_r115 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 137, CPyStatic_plugins___common___globals);
        goto CPyL122;
    }
CPyL56: ;
    cpy_r_r116 = cpy_r_r111 == 0;
    cpy_r_r107 = cpy_r_r116;
CPyL57: ;
    if (!cpy_r_r107) goto CPyL59;
    cpy_r_r95 = 1;
    goto CPyL60;
CPyL59: ;
    cpy_r_r117 = cpy_r_r96 + 2;
    cpy_r_r96 = cpy_r_r117;
    goto CPyL48;
CPyL60: ;
    cpy_r_arg_none = cpy_r_r95;
    cpy_r_r118 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r119 = (CPyPtr)&((PyObject *)cpy_r_arg_type)->ob_type;
    cpy_r_r120 = *(PyObject * *)cpy_r_r119;
    cpy_r_r121 = cpy_r_r120 == cpy_r_r118;
    if (cpy_r_r121) {
        goto CPyL125;
    } else
        goto CPyL63;
CPyL61: ;
    if (cpy_r_arg_none) {
        goto CPyL92;
    } else
        goto CPyL126;
CPyL62: ;
    cpy_r_ok = 0;
    goto CPyL93;
CPyL63: ;
    if (!cpy_r_arg_none) goto CPyL76;
    CPy_INCREF(cpy_r_arg_type);
    if (likely(PyObject_TypeCheck(cpy_r_arg_type, CPyType_types___ProperType)))
        cpy_r_r122 = cpy_r_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 144, CPyStatic_plugins___common___globals, "mypy.types.ProperType", cpy_r_arg_type);
        goto CPyL122;
    }
    cpy_r_r123 = CPyDef_types_utils___is_optional(cpy_r_r122);
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r123 == 2)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 144, CPyStatic_plugins___common___globals);
        goto CPyL122;
    }
    if (cpy_r_r123) goto CPyL76;
    cpy_r_r124 = (PyObject *)CPyType_types___Instance;
    cpy_r_r125 = (CPyPtr)&((PyObject *)cpy_r_arg_type)->ob_type;
    cpy_r_r126 = *(PyObject * *)cpy_r_r125;
    cpy_r_r127 = cpy_r_r126 == cpy_r_r124;
    if (!cpy_r_r127) goto CPyL74;
    if (likely(Py_TYPE(cpy_r_arg_type) == CPyType_types___Instance))
        cpy_r_r128 = cpy_r_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 147, CPyStatic_plugins___common___globals, "mypy.types.Instance", cpy_r_arg_type);
        goto CPyL122;
    }
    cpy_r_r129 = ((mypy___types___InstanceObject *)cpy_r_r128)->_type;
    CPy_INCREF(cpy_r_r129);
    cpy_r_r130 = CPY_GET_ATTR(cpy_r_r129, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 147, CPyStatic_plugins___common___globals);
        goto CPyL122;
    }
CPyL70: ;
    cpy_r_r131 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r132 = PyUnicode_Compare(cpy_r_r130, cpy_r_r131);
    CPy_DECREF(cpy_r_r130);
    cpy_r_r133 = cpy_r_r132 == -1;
    if (!cpy_r_r133) goto CPyL73;
    cpy_r_r134 = PyErr_Occurred();
    cpy_r_r135 = cpy_r_r134 != NULL;
    if (!cpy_r_r135) goto CPyL73;
    cpy_r_r136 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 147, CPyStatic_plugins___common___globals);
        goto CPyL122;
    }
CPyL73: ;
    cpy_r_r137 = cpy_r_r132 == 0;
    if (cpy_r_r137) goto CPyL76;
CPyL74: ;
    cpy_r_r138 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r139 = (CPyPtr)&((PyObject *)cpy_r_arg_type)->ob_type;
    cpy_r_r140 = *(PyObject * *)cpy_r_r139;
    cpy_r_r141 = cpy_r_r140 == cpy_r_r138;
    if (cpy_r_r141) {
        goto CPyL76;
    } else
        goto CPyL127;
CPyL75: ;
    cpy_r_ok = 0;
    goto CPyL93;
CPyL76: ;
    cpy_r_r142 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r143 = (CPyPtr)&((PyObject *)cpy_r_arg_type)->ob_type;
    cpy_r_r144 = *(PyObject * *)cpy_r_r143;
    cpy_r_r145 = cpy_r_r144 == cpy_r_r142;
    if (!cpy_r_r145) goto CPyL128;
    if (likely(Py_TYPE(cpy_r_arg_type) == CPyType_types___LiteralType))
        cpy_r_r146 = cpy_r_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 153, CPyStatic_plugins___common___globals, "mypy.types.LiteralType", cpy_r_arg_type);
        goto CPyL122;
    }
    cpy_r_r147 = ((mypy___types___LiteralTypeObject *)cpy_r_r146)->_value;
    CPy_INCREF(cpy_r_r147);
    cpy_r_r148 = PyObject_Type(cpy_r_r147);
    CPy_DECREF(cpy_r_r147);
    cpy_r_r149 = (PyObject *)&PyBool_Type;
    cpy_r_r150 = cpy_r_r148 == cpy_r_r149;
    CPy_DECREF(cpy_r_r148);
    if (!cpy_r_r150) goto CPyL128;
    cpy_r_r151 = 0;
    cpy_r_r152 = 0;
CPyL80: ;
    cpy_r_r153 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r154 = *(int64_t *)cpy_r_r153;
    cpy_r_r155 = cpy_r_r154 << 1;
    cpy_r_r156 = (Py_ssize_t)cpy_r_r152 < (Py_ssize_t)cpy_r_r155;
    if (!cpy_r_r156) goto CPyL129;
    cpy_r_r157 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r152);
    if (likely(PyObject_TypeCheck(cpy_r_r157, CPyType_nodes___Expression)))
        cpy_r_r158 = cpy_r_r157;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 154, CPyStatic_plugins___common___globals, "mypy.nodes.Expression", cpy_r_r157);
        goto CPyL122;
    }
    cpy_r_arg_2 = cpy_r_r158;
    cpy_r_r159 = CPyDef_semanal_shared___parse_bool(cpy_r_arg_2);
    CPy_DECREF(cpy_r_arg_2);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 154, CPyStatic_plugins___common___globals);
        goto CPyL122;
    }
    if (likely(Py_TYPE(cpy_r_arg_type) == CPyType_types___LiteralType))
        cpy_r_r160 = cpy_r_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 154, CPyStatic_plugins___common___globals, "mypy.types.LiteralType", cpy_r_arg_type);
        goto CPyL130;
    }
    cpy_r_r161 = ((mypy___types___LiteralTypeObject *)cpy_r_r160)->_value;
    CPy_INCREF(cpy_r_r161);
    if (unlikely(!PyBool_Check(cpy_r_r161))) {
        CPy_TypeError("bool", cpy_r_r161); cpy_r_r162 = 2;
    } else
        cpy_r_r162 = cpy_r_r161 == Py_True;
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r162 == 2)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 154, CPyStatic_plugins___common___globals);
        goto CPyL130;
    }
    cpy_r_r163 = cpy_r_r162 ? Py_True : Py_False;
    cpy_r_r164 = PyObject_RichCompare(cpy_r_r159, cpy_r_r163, 2);
    CPy_DECREF(cpy_r_r159);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 154, CPyStatic_plugins___common___globals);
        goto CPyL122;
    }
    if (unlikely(!PyBool_Check(cpy_r_r164))) {
        CPy_TypeError("bool", cpy_r_r164); cpy_r_r165 = 2;
    } else
        cpy_r_r165 = cpy_r_r164 == Py_True;
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r165 == 2)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 154, CPyStatic_plugins___common___globals);
        goto CPyL122;
    }
    if (cpy_r_r165) {
        goto CPyL131;
    } else
        goto CPyL89;
CPyL88: ;
    cpy_r_r151 = 1;
    goto CPyL90;
CPyL89: ;
    cpy_r_r166 = cpy_r_r152 + 2;
    cpy_r_r152 = cpy_r_r166;
    goto CPyL80;
CPyL90: ;
    if (cpy_r_r151) {
        goto CPyL92;
    } else
        goto CPyL132;
CPyL91: ;
    cpy_r_ok = 0;
    goto CPyL93;
CPyL92: ;
    cpy_r_r167 = cpy_r_r43 + 2;
    cpy_r_r43 = cpy_r_r167;
    cpy_r_r168 = cpy_r_r45 + 2;
    cpy_r_r45 = cpy_r_r168;
    cpy_r_r169 = cpy_r_r46 + 2;
    cpy_r_r46 = cpy_r_r169;
    goto CPyL25;
CPyL93: ;
    if (cpy_r_ok) {
        goto CPyL133;
    } else
        goto CPyL134;
CPyL94: ;
    return cpy_r_item;
CPyL95: ;
    cpy_r_r170 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r170;
    goto CPyL5;
CPyL96: ;
    cpy_r_r171 = CPY_GET_ATTR(cpy_r_overload, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 159, CPyStatic_plugins___common___globals);
        goto CPyL100;
    }
CPyL97: ;
    cpy_r_r172 = CPyList_GetItemShort(cpy_r_r171, -2);
    CPy_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 159, CPyStatic_plugins___common___globals);
        goto CPyL100;
    }
    if (likely(Py_TYPE(cpy_r_r172) == CPyType_types___CallableType))
        cpy_r_r173 = cpy_r_r172;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 159, CPyStatic_plugins___common___globals, "mypy.types.CallableType", cpy_r_r172);
        goto CPyL100;
    }
    return cpy_r_r173;
CPyL100: ;
    cpy_r_r174 = NULL;
    return cpy_r_r174;
CPyL101: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL100;
CPyL102: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r3);
    goto CPyL96;
CPyL103: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL100;
CPyL104: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL100;
CPyL105: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    goto CPyL100;
CPyL106: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_item);
    goto CPyL100;
CPyL107: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_mapped);
    goto CPyL100;
CPyL108: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_matched_actuals);
    goto CPyL100;
CPyL109: ;
    CPy_DECREF(cpy_r_matched_actuals);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL22;
CPyL110: ;
    CPy_DECREF(cpy_r_matched_actuals);
    goto CPyL20;
CPyL111: ;
    CPy_DECREF(cpy_r_mapped);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r44);
    goto CPyL93;
CPyL112: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    goto CPyL100;
CPyL113: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL100;
CPyL114: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_kind);
    goto CPyL100;
CPyL115: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_actuals);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_kind);
    goto CPyL100;
CPyL116: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_actuals);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL100;
CPyL117: ;
    CPy_DECREF(cpy_r_mapped);
    CPy_DECREF(cpy_r_actuals);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL35;
CPyL118: ;
    CPy_DECREF(cpy_r_actuals);
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL92;
CPyL119: ;
    CPy_DECREF(cpy_r_actuals);
    goto CPyL45;
CPyL120: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_actuals);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r80);
    goto CPyL100;
CPyL121: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_args);
    goto CPyL100;
CPyL122: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_args);
    goto CPyL100;
CPyL123: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL51;
CPyL124: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg);
    goto CPyL100;
CPyL125: ;
    CPy_DECREF(cpy_r_arg_type);
    CPy_DECREF(cpy_r_args);
    goto CPyL61;
CPyL126: ;
    CPy_DECREF(cpy_r_mapped);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r44);
    goto CPyL62;
CPyL127: ;
    CPy_DECREF(cpy_r_mapped);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_arg_type);
    CPy_DECREF(cpy_r_args);
    goto CPyL75;
CPyL128: ;
    CPy_DECREF(cpy_r_arg_type);
    CPy_DECREF(cpy_r_args);
    goto CPyL92;
CPyL129: ;
    CPy_DECREF(cpy_r_arg_type);
    CPy_DECREF(cpy_r_args);
    goto CPyL90;
CPyL130: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_mapped);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r159);
    goto CPyL100;
CPyL131: ;
    CPy_DECREF(cpy_r_arg_type);
    CPy_DECREF(cpy_r_args);
    goto CPyL88;
CPyL132: ;
    CPy_DECREF(cpy_r_mapped);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r44);
    goto CPyL91;
CPyL133: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r3);
    goto CPyL94;
CPyL134: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL95;
}

PyObject *CPyPy_plugins___common___find_shallow_matching_overload_item(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"overload", "call", 0};
    static CPyArg_Parser parser = {"OO:find_shallow_matching_overload_item", kwlist, 0};
    PyObject *obj_overload;
    PyObject *obj_call;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_overload, &obj_call)) {
        return NULL;
    }
    PyObject *arg_overload;
    if (likely(Py_TYPE(obj_overload) == CPyType_types___Overloaded))
        arg_overload = obj_overload;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_overload); 
        goto fail;
    }
    PyObject *arg_call;
    if (likely(Py_TYPE(obj_call) == CPyType_nodes___CallExpr))
        arg_call = obj_call;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_call); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugins___common___find_shallow_matching_overload_item(arg_overload, arg_call);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/common.py", "find_shallow_matching_overload_item", 97, CPyStatic_plugins___common___globals);
    return NULL;
}

PyObject *CPyDef_plugins___common____get_callee_type(PyObject *cpy_r_call) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_callee_node;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    tuple_T2OO cpy_r_r27;
    tuple_T2OT2OO cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
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
    PyObject *cpy_r_r71;
    PyObject *cpy_r_callee_node_type;
    PyObject *cpy_r_r72;
    CPyPtr cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyPtr cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_callee;
    CPy_INCREF(cpy_r_r0);
    cpy_r_callee_node = cpy_r_r0;
    cpy_r_r1 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_callee_node)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL2;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL3;
CPyL2: ;
    cpy_r_r6 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_callee_node)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    cpy_r_r5 = cpy_r_r9;
CPyL3: ;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r10 = cpy_r_r5;
    goto CPyL6;
CPyL5: ;
    cpy_r_r11 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_callee_node)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    cpy_r_r10 = cpy_r_r14;
CPyL6: ;
    if (!cpy_r_r10) goto CPyL9;
    if (likely((Py_TYPE(cpy_r_callee_node) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_callee_node) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_callee_node) == CPyType_nodes___RefExpr)))
        cpy_r_r15 = cpy_r_callee_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_callee_type", 168, CPyStatic_plugins___common___globals, "mypy.nodes.RefExpr", cpy_r_callee_node);
        goto CPyL49;
    }
    cpy_r_r16 = ((mypy___nodes___RefExprObject *)cpy_r_r15)->_node;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_callee_node);
    cpy_r_callee_node = cpy_r_r16;
CPyL9: ;
    cpy_r_r17 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_callee_node)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (!cpy_r_r20) goto CPyL12;
    if (likely(Py_TYPE(cpy_r_callee_node) == CPyType_nodes___Decorator))
        cpy_r_r21 = cpy_r_callee_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_callee_type", 173, CPyStatic_plugins___common___globals, "mypy.nodes.Decorator", cpy_r_callee_node);
        goto CPyL49;
    }
    cpy_r_r22 = ((mypy___nodes___DecoratorObject *)cpy_r_r21)->_func;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_callee_node);
    cpy_r_callee_node = cpy_r_r22;
CPyL12: ;
    cpy_r_r23 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r24 = CPyStatic_plugins___common___globals;
    cpy_r_r25 = CPyStatics[1329]; /* 'SYMBOL_FUNCBASE_TYPES' */
    cpy_r_r26 = CPyDict_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_callee_type", 175, CPyStatic_plugins___common___globals);
        goto CPyL49;
    }
    PyObject *__tmp4754;
    if (unlikely(!(PyTuple_Check(cpy_r_r26) && PyTuple_GET_SIZE(cpy_r_r26) == 2))) {
        __tmp4754 = NULL;
        goto __LL4755;
    }
    __tmp4754 = PyTuple_GET_ITEM(cpy_r_r26, 0);
    if (__tmp4754 == NULL) goto __LL4755;
    __tmp4754 = PyTuple_GET_ITEM(cpy_r_r26, 1);
    if (__tmp4754 == NULL) goto __LL4755;
    __tmp4754 = cpy_r_r26;
__LL4755: ;
    if (unlikely(__tmp4754 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r26); cpy_r_r27 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp4756 = PyTuple_GET_ITEM(cpy_r_r26, 0);
        CPy_INCREF(__tmp4756);
        PyObject *__tmp4757;
        __tmp4757 = __tmp4756;
        cpy_r_r27.f0 = __tmp4757;
        PyObject *__tmp4758 = PyTuple_GET_ITEM(cpy_r_r26, 1);
        CPy_INCREF(__tmp4758);
        PyObject *__tmp4759;
        __tmp4759 = __tmp4758;
        cpy_r_r27.f1 = __tmp4759;
    }
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27.f0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_callee_type", 175, CPyStatic_plugins___common___globals);
        goto CPyL49;
    }
    cpy_r_r28.f0 = cpy_r_r23;
    cpy_r_r28.f1 = cpy_r_r27;
    CPy_INCREF(cpy_r_r28.f0);
    CPy_INCREF(cpy_r_r28.f1.f0);
    CPy_INCREF(cpy_r_r28.f1.f1);
    CPy_DECREF(cpy_r_r27.f0);
    CPy_DECREF(cpy_r_r27.f1);
    cpy_r_r29 = PyTuple_New(2);
    if (unlikely(cpy_r_r29 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4760 = cpy_r_r28.f0;
    PyTuple_SET_ITEM(cpy_r_r29, 0, __tmp4760);
    PyObject *__tmp4761 = PyTuple_New(2);
    if (unlikely(__tmp4761 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4762 = cpy_r_r28.f1.f0;
    PyTuple_SET_ITEM(__tmp4761, 0, __tmp4762);
    PyObject *__tmp4763 = cpy_r_r28.f1.f1;
    PyTuple_SET_ITEM(__tmp4761, 1, __tmp4763);
    PyTuple_SET_ITEM(cpy_r_r29, 1, __tmp4761);
    cpy_r_r30 = PyObject_IsInstance(cpy_r_callee_node, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_callee_type", 175, CPyStatic_plugins___common___globals);
        goto CPyL49;
    }
    cpy_r_r32 = cpy_r_r30;
    if (!cpy_r_r32) goto CPyL50;
    CPy_INCREF(cpy_r_callee_node);
    if (Py_TYPE(cpy_r_callee_node) == CPyType_nodes___Var)
        cpy_r_r33 = cpy_r_callee_node;
    else {
        cpy_r_r33 = NULL;
    }
    if (cpy_r_r33 != NULL) goto __LL4764;
    if (Py_TYPE(cpy_r_callee_node) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r33 = cpy_r_callee_node;
    else {
        cpy_r_r33 = NULL;
    }
    if (cpy_r_r33 != NULL) goto __LL4764;
    if (Py_TYPE(cpy_r_callee_node) == CPyType_nodes___FuncDef)
        cpy_r_r33 = cpy_r_callee_node;
    else {
        cpy_r_r33 = NULL;
    }
    if (cpy_r_r33 != NULL) goto __LL4764;
    CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_callee_type", 175, CPyStatic_plugins___common___globals, "union[mypy.nodes.Var, mypy.nodes.OverloadedFuncDef, mypy.nodes.FuncDef]", cpy_r_callee_node);
    goto CPyL49;
__LL4764: ;
    cpy_r_r34 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_r33)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    if (!cpy_r_r37) goto CPyL20;
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_nodes___Var))
        cpy_r_r38 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_callee_type", 175, CPyStatic_plugins___common___globals, "mypy.nodes.Var", cpy_r_r33);
        goto CPyL49;
    }
    cpy_r_r39 = ((mypy___nodes___VarObject *)cpy_r_r38)->_type;
    CPy_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39;
    goto CPyL25;
CPyL20: ;
    cpy_r_r41 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_r33)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (!cpy_r_r44) goto CPyL23;
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r45 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_callee_type", 175, CPyStatic_plugins___common___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r33);
        goto CPyL49;
    }
    cpy_r_r46 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r45)->_type;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r40 = cpy_r_r46;
    goto CPyL25;
CPyL23: ;
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_nodes___FuncDef))
        cpy_r_r47 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_callee_type", 175, CPyStatic_plugins___common___globals, "mypy.nodes.FuncDef", cpy_r_r33);
        goto CPyL49;
    }
    cpy_r_r48 = ((mypy___nodes___FuncDefObject *)cpy_r_r47)->_type;
    CPy_INCREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r40 = cpy_r_r48;
CPyL25: ;
    cpy_r_r49 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r50 = cpy_r_r40 != cpy_r_r49;
    CPy_DECREF(cpy_r_r40);
    if (!cpy_r_r50) goto CPyL50;
    if (Py_TYPE(cpy_r_callee_node) == CPyType_nodes___Var)
        cpy_r_r51 = cpy_r_callee_node;
    else {
        cpy_r_r51 = NULL;
    }
    if (cpy_r_r51 != NULL) goto __LL4765;
    if (Py_TYPE(cpy_r_callee_node) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r51 = cpy_r_callee_node;
    else {
        cpy_r_r51 = NULL;
    }
    if (cpy_r_r51 != NULL) goto __LL4765;
    if (Py_TYPE(cpy_r_callee_node) == CPyType_nodes___FuncDef)
        cpy_r_r51 = cpy_r_callee_node;
    else {
        cpy_r_r51 = NULL;
    }
    if (cpy_r_r51 != NULL) goto __LL4765;
    CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_callee_type", 176, CPyStatic_plugins___common___globals, "union[mypy.nodes.Var, mypy.nodes.OverloadedFuncDef, mypy.nodes.FuncDef]", cpy_r_callee_node);
    goto CPyL48;
__LL4765: ;
    cpy_r_r52 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r53 = (CPyPtr)&((PyObject *)cpy_r_r51)->ob_type;
    cpy_r_r54 = *(PyObject * *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 == cpy_r_r52;
    if (!cpy_r_r55) goto CPyL31;
    if (likely(Py_TYPE(cpy_r_r51) == CPyType_nodes___Var))
        cpy_r_r56 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_callee_type", 176, CPyStatic_plugins___common___globals, "mypy.nodes.Var", cpy_r_r51);
        goto CPyL48;
    }
    cpy_r_r57 = ((mypy___nodes___VarObject *)cpy_r_r56)->_type;
    CPy_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    if (likely(cpy_r_r57 != Py_None))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_callee_type", 176, CPyStatic_plugins___common___globals, "mypy.types.Type", cpy_r_r57);
        goto CPyL48;
    }
    cpy_r_r59 = cpy_r_r58;
    goto CPyL38;
CPyL31: ;
    cpy_r_r60 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r61 = (CPyPtr)&((PyObject *)cpy_r_r51)->ob_type;
    cpy_r_r62 = *(PyObject * *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 == cpy_r_r60;
    if (!cpy_r_r63) goto CPyL35;
    if (likely(Py_TYPE(cpy_r_r51) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r64 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_callee_type", 176, CPyStatic_plugins___common___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r51);
        goto CPyL48;
    }
    cpy_r_r65 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r64)->_type;
    CPy_INCREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r64);
    if (likely(PyObject_TypeCheck(cpy_r_r65, CPyType_types___Type)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_callee_type", 176, CPyStatic_plugins___common___globals, "mypy.types.Type", cpy_r_r65);
        goto CPyL48;
    }
    cpy_r_r59 = cpy_r_r66;
    goto CPyL38;
CPyL35: ;
    if (likely(Py_TYPE(cpy_r_r51) == CPyType_nodes___FuncDef))
        cpy_r_r67 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_callee_type", 176, CPyStatic_plugins___common___globals, "mypy.nodes.FuncDef", cpy_r_r51);
        goto CPyL48;
    }
    cpy_r_r68 = ((mypy___nodes___FuncDefObject *)cpy_r_r67)->_type;
    CPy_INCREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    if (likely(PyObject_TypeCheck(cpy_r_r68, CPyType_types___Type)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_callee_type", 176, CPyStatic_plugins___common___globals, "mypy.types.Type", cpy_r_r68);
        goto CPyL48;
    }
    cpy_r_r59 = cpy_r_r69;
CPyL38: ;
    cpy_r_r70 = CPyDef_types___get_proper_type(cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_callee_type", 176, CPyStatic_plugins___common___globals);
        goto CPyL48;
    }
    if (likely(cpy_r_r70 != Py_None))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_callee_type", 176, CPyStatic_plugins___common___globals, "mypy.types.ProperType", cpy_r_r70);
        goto CPyL48;
    }
    cpy_r_callee_node_type = cpy_r_r71;
    cpy_r_r72 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r73 = (CPyPtr)&((PyObject *)cpy_r_callee_node_type)->ob_type;
    cpy_r_r74 = *(PyObject * *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r74 == cpy_r_r72;
    if (!cpy_r_r75) goto CPyL44;
    if (likely(Py_TYPE(cpy_r_callee_node_type) == CPyType_types___Overloaded))
        cpy_r_r76 = cpy_r_callee_node_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_callee_type", 178, CPyStatic_plugins___common___globals, "mypy.types.Overloaded", cpy_r_callee_node_type);
        goto CPyL48;
    }
    cpy_r_r77 = CPyDef_plugins___common___find_shallow_matching_overload_item(cpy_r_r76, cpy_r_call);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "_get_callee_type", 178, CPyStatic_plugins___common___globals);
        goto CPyL48;
    }
    return cpy_r_r77;
CPyL44: ;
    cpy_r_r78 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r79 = (CPyPtr)&((PyObject *)cpy_r_callee_node_type)->ob_type;
    cpy_r_r80 = *(PyObject * *)cpy_r_r79;
    cpy_r_r81 = cpy_r_r80 == cpy_r_r78;
    if (!cpy_r_r81) goto CPyL51;
    if (likely(Py_TYPE(cpy_r_callee_node_type) == CPyType_types___CallableType))
        cpy_r_r82 = cpy_r_callee_node_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "_get_callee_type", 180, CPyStatic_plugins___common___globals, "mypy.types.CallableType", cpy_r_callee_node_type);
        goto CPyL48;
    }
    return cpy_r_r82;
CPyL47: ;
    cpy_r_r83 = Py_None;
    CPy_INCREF(cpy_r_r83);
    return cpy_r_r83;
CPyL48: ;
    cpy_r_r84 = NULL;
    return cpy_r_r84;
CPyL49: ;
    CPy_DecRef(cpy_r_callee_node);
    goto CPyL48;
CPyL50: ;
    CPy_DECREF(cpy_r_callee_node);
    goto CPyL47;
CPyL51: ;
    CPy_DECREF(cpy_r_callee_node_type);
    goto CPyL47;
}

PyObject *CPyPy_plugins___common____get_callee_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"call", 0};
    static CPyArg_Parser parser = {"O:_get_callee_type", kwlist, 0};
    PyObject *obj_call;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_call)) {
        return NULL;
    }
    PyObject *arg_call;
    if (likely(Py_TYPE(obj_call) == CPyType_nodes___CallExpr))
        arg_call = obj_call;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_call); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugins___common____get_callee_type(arg_call);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/common.py", "_get_callee_type", 162, CPyStatic_plugins___common___globals);
    return NULL;
}

char CPyDef_plugins___common___add_method(PyObject *cpy_r_ctx, PyObject *cpy_r_name, PyObject *cpy_r_args, PyObject *cpy_r_return_type, PyObject *cpy_r_self_type, PyObject *cpy_r_tvar_def, char cpy_r_is_classmethod, char cpy_r_is_staticmethod) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    if (cpy_r_self_type != NULL) goto CPyL15;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_self_type = cpy_r_r0;
CPyL2: ;
    if (cpy_r_tvar_def != NULL) goto CPyL16;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_tvar_def = cpy_r_r1;
CPyL4: ;
    if (cpy_r_is_classmethod != 2) goto CPyL6;
    cpy_r_is_classmethod = 0;
CPyL6: ;
    if (cpy_r_is_staticmethod != 2) goto CPyL8;
    cpy_r_is_staticmethod = 0;
CPyL8: ;
    cpy_r_r2 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method", 200, CPyStatic_plugins___common___globals);
        goto CPyL17;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_method", 200, CPyStatic_plugins___common___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r2);
        goto CPyL17;
    }
    cpy_r_r4 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method", 201, CPyStatic_plugins___common___globals);
        goto CPyL18;
    }
    if (likely(Py_TYPE(cpy_r_r4) == CPyType_nodes___ClassDef))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_method", 201, CPyStatic_plugins___common___globals, "mypy.nodes.ClassDef", cpy_r_r4);
        goto CPyL18;
    }
    cpy_r_r6 = CPyDef_plugins___common___add_method_to_class(cpy_r_r3, cpy_r_r5, cpy_r_name, cpy_r_args, cpy_r_return_type, cpy_r_self_type, cpy_r_tvar_def, cpy_r_is_classmethod, cpy_r_is_staticmethod);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_self_type);
    CPy_DECREF(cpy_r_tvar_def);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method", 199, CPyStatic_plugins___common___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL15: ;
    CPy_INCREF(cpy_r_self_type);
    goto CPyL2;
CPyL16: ;
    CPy_INCREF(cpy_r_tvar_def);
    goto CPyL4;
CPyL17: ;
    CPy_DecRef(cpy_r_self_type);
    CPy_DecRef(cpy_r_tvar_def);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_self_type);
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_r3);
    goto CPyL14;
}

PyObject *CPyPy_plugins___common___add_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "name", "args", "return_type", "self_type", "tvar_def", "is_classmethod", "is_staticmethod", 0};
    static CPyArg_Parser parser = {"OOOO|OOOO:add_method", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_name;
    PyObject *obj_args;
    PyObject *obj_return_type;
    PyObject *obj_self_type = NULL;
    PyObject *obj_tvar_def = NULL;
    PyObject *obj_is_classmethod = NULL;
    PyObject *obj_is_staticmethod = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_name, &obj_args, &obj_return_type, &obj_self_type, &obj_tvar_def, &obj_is_classmethod, &obj_is_staticmethod)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    PyObject *arg_return_type;
    if (likely(PyObject_TypeCheck(obj_return_type, CPyType_types___Type)))
        arg_return_type = obj_return_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_return_type); 
        goto fail;
    }
    PyObject *arg_self_type;
    if (obj_self_type == NULL) {
        arg_self_type = NULL;
        goto __LL4766;
    }
    if (PyObject_TypeCheck(obj_self_type, CPyType_types___Type))
        arg_self_type = obj_self_type;
    else {
        arg_self_type = NULL;
    }
    if (arg_self_type != NULL) goto __LL4766;
    if (obj_self_type == Py_None)
        arg_self_type = obj_self_type;
    else {
        arg_self_type = NULL;
    }
    if (arg_self_type != NULL) goto __LL4766;
    CPy_TypeError("mypy.types.Type or None", obj_self_type); 
    goto fail;
__LL4766: ;
    PyObject *arg_tvar_def;
    if (obj_tvar_def == NULL) {
        arg_tvar_def = NULL;
        goto __LL4767;
    }
    if (Py_TYPE(obj_tvar_def) == CPyType_types___TypeVarType)
        arg_tvar_def = obj_tvar_def;
    else {
        arg_tvar_def = NULL;
    }
    if (arg_tvar_def != NULL) goto __LL4767;
    if (obj_tvar_def == Py_None)
        arg_tvar_def = obj_tvar_def;
    else {
        arg_tvar_def = NULL;
    }
    if (arg_tvar_def != NULL) goto __LL4767;
    CPy_TypeError("mypy.types.TypeVarType or None", obj_tvar_def); 
    goto fail;
__LL4767: ;
    char arg_is_classmethod;
    if (obj_is_classmethod == NULL) {
        arg_is_classmethod = 2;
    } else if (unlikely(!PyBool_Check(obj_is_classmethod))) {
        CPy_TypeError("bool", obj_is_classmethod); goto fail;
    } else
        arg_is_classmethod = obj_is_classmethod == Py_True;
    char arg_is_staticmethod;
    if (obj_is_staticmethod == NULL) {
        arg_is_staticmethod = 2;
    } else if (unlikely(!PyBool_Check(obj_is_staticmethod))) {
        CPy_TypeError("bool", obj_is_staticmethod); goto fail;
    } else
        arg_is_staticmethod = obj_is_staticmethod == Py_True;
    char retval = CPyDef_plugins___common___add_method(arg_ctx, arg_name, arg_args, arg_return_type, arg_self_type, arg_tvar_def, arg_is_classmethod, arg_is_staticmethod);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/common.py", "add_method", 185, CPyStatic_plugins___common___globals);
    return NULL;
}

char CPyDef_plugins___common___add_method_to_class(PyObject *cpy_r_api, PyObject *cpy_r_cls, PyObject *cpy_r_name, PyObject *cpy_r_args, PyObject *cpy_r_return_type, PyObject *cpy_r_self_type, PyObject *cpy_r_tvar_def, char cpy_r_is_classmethod, char cpy_r_is_staticmethod) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_sym;
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
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_function_type;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyPtr cpy_r_r60;
    CPyPtr cpy_r_r61;
    PyObject *cpy_r_first;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
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
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyPtr cpy_r_r78;
    CPyPtr cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_arg_types;
    PyObject *cpy_r_arg_names;
    PyObject *cpy_r_arg_kinds;
    CPyTagged cpy_r_r88;
    CPyPtr cpy_r_r89;
    int64_t cpy_r_r90;
    CPyTagged cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    int32_t cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    CPyTagged cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    CPyTagged cpy_r_r114;
    CPyTagged cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_signature;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    CPyPtr cpy_r_r130;
    CPyPtr cpy_r_r131;
    char cpy_r_r132;
    CPyTagged cpy_r_r133;
    CPyTagged cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    CPyPtr cpy_r_r137;
    CPyPtr cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_func;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    CPyTagged cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    int32_t cpy_r_r155;
    char cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r_name;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    int32_t cpy_r_r164;
    char cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_v;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_dec;
    CPyTagged cpy_r_r176;
    char cpy_r_r177;
    char cpy_r_r178;
    char cpy_r_r179;
    char cpy_r_r180;
    char cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    char cpy_r_r184;
    char cpy_r_r185;
    char cpy_r_r186;
    char cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    int32_t cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    int32_t cpy_r_r197;
    char cpy_r_r198;
    char cpy_r_r199;
    if (cpy_r_self_type != NULL) goto CPyL121;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_self_type = cpy_r_r0;
CPyL2: ;
    if (cpy_r_tvar_def != NULL) goto CPyL122;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_tvar_def = cpy_r_r1;
CPyL4: ;
    if (cpy_r_is_classmethod != 2) goto CPyL6;
    cpy_r_is_classmethod = 0;
CPyL6: ;
    if (cpy_r_is_staticmethod != 2) goto CPyL8;
    cpy_r_is_staticmethod = 0;
CPyL8: ;
    cpy_r_r2 = cpy_r_is_classmethod ? Py_True : Py_False;
    cpy_r_r3 = 1 ? Py_True : Py_False;
    cpy_r_r4 = cpy_r_r2 == cpy_r_r3;
    if (cpy_r_r4) goto CPyL10;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL11;
CPyL10: ;
    cpy_r_r6 = cpy_r_is_staticmethod ? Py_True : Py_False;
    cpy_r_r7 = 1 ? Py_True : Py_False;
    cpy_r_r8 = cpy_r_r6 == cpy_r_r7;
    cpy_r_r5 = cpy_r_r8;
CPyL11: ;
    cpy_r_r9 = cpy_r_r5 ^ 1;
    if (cpy_r_r9) {
        goto CPyL14;
    } else
        goto CPyL123;
CPyL12: ;
    PyErr_SetString(PyExc_AssertionError, "Can't add a new method that's both staticmethod and classmethod.");
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 225, CPyStatic_plugins___common___globals);
        goto CPyL120;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r11 = ((mypy___nodes___ClassDefObject *)cpy_r_cls)->_info;
    CPy_INCREF(cpy_r_r11);
    cpy_r_info = cpy_r_r11;
    cpy_r_r12 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/plugins/common.py", "add_method_to_class", "TypeInfo", "names", 233, CPyStatic_plugins___common___globals);
        goto CPyL124;
    }
    CPy_INCREF(cpy_r_r12);
CPyL15: ;
    cpy_r_r13 = PyDict_Contains(cpy_r_r12, cpy_r_name);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 233, CPyStatic_plugins___common___globals);
        goto CPyL124;
    }
    cpy_r_r15 = cpy_r_r13;
    if (!cpy_r_r15) goto CPyL24;
    cpy_r_r16 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/plugins/common.py", "add_method_to_class", "TypeInfo", "names", 234, CPyStatic_plugins___common___globals);
        goto CPyL124;
    }
    CPy_INCREF(cpy_r_r16);
CPyL18: ;
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r16, cpy_r_name);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 234, CPyStatic_plugins___common___globals);
        goto CPyL124;
    }
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_nodes___SymbolTableNode))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_method_to_class", 234, CPyStatic_plugins___common___globals, "mypy.nodes.SymbolTableNode", cpy_r_r17);
        goto CPyL124;
    }
    cpy_r_sym = cpy_r_r18;
    cpy_r_r19 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_sym)->_plugin_generated;
    if (!cpy_r_r19) goto CPyL125;
CPyL21: ;
    cpy_r_r20 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_sym)->_node;
    cpy_r_r21 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_r20)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL125;
    cpy_r_r25 = ((mypy___nodes___ClassDefObject *)cpy_r_cls)->_defs;
    cpy_r_r26 = ((mypy___nodes___BlockObject *)cpy_r_r25)->_body;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_sym)->_node;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_sym);
    if (likely(Py_TYPE(cpy_r_r27) == CPyType_nodes___FuncDef))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_method_to_class", 236, CPyStatic_plugins___common___globals, "mypy.nodes.FuncDef", cpy_r_r27);
        goto CPyL126;
    }
    cpy_r_r29 = CPyList_Remove(cpy_r_r26, cpy_r_r28);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 236, CPyStatic_plugins___common___globals);
        goto CPyL124;
    }
CPyL24: ;
    cpy_r_r31 = (PyObject *)CPyType_semanal___SemanticAnalyzer;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_api)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL28;
    CPy_INCREF(cpy_r_api);
    if (likely(Py_TYPE(cpy_r_api) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r35 = cpy_r_api;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_method_to_class", 239, CPyStatic_plugins___common___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_api);
        goto CPyL124;
    }
    cpy_r_r36 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r37 = NULL;
    cpy_r_r38 = CPY_GET_METHOD_TRAIT(cpy_r_r35, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r35, cpy_r_r36, cpy_r_r37); /* named_type */
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 239, CPyStatic_plugins___common___globals);
        goto CPyL124;
    }
    cpy_r_function_type = cpy_r_r38;
    goto CPyL32;
CPyL28: ;
    CPy_INCREF(cpy_r_api);
    if (likely(Py_TYPE(cpy_r_api) == CPyType_checker___TypeChecker))
        cpy_r_r39 = cpy_r_api;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_method_to_class", 241, CPyStatic_plugins___common___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_api);
        goto CPyL124;
    }
    cpy_r_r40 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r41 = PyList_New(0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 241, CPyStatic_plugins___common___globals);
        goto CPyL127;
    }
    cpy_r_r42 = CPY_GET_METHOD_TRAIT(cpy_r_r39, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r39, cpy_r_r40, cpy_r_r41); /* named_generic_type */
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 241, CPyStatic_plugins___common___globals);
        goto CPyL124;
    }
    cpy_r_function_type = cpy_r_r42;
CPyL32: ;
    if (!cpy_r_is_classmethod) goto CPyL47;
    cpy_r_r43 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r44 = cpy_r_self_type != cpy_r_r43;
    if (!cpy_r_r44) goto CPyL128;
    if (likely(cpy_r_self_type != Py_None))
        cpy_r_r45 = cpy_r_self_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_method_to_class", 244, CPyStatic_plugins___common___globals, "mypy.types.Type", cpy_r_self_type);
        goto CPyL129;
    }
    cpy_r_r46 = cpy_r_r45;
    goto CPyL39;
CPyL36: ;
    cpy_r_r47 = CPyDef_typevars___fill_typevars(cpy_r_info);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 244, CPyStatic_plugins___common___globals);
        goto CPyL129;
    }
    cpy_r_r48 = CPY_INT_TAG;
    cpy_r_r49 = CPY_INT_TAG;
    cpy_r_r50 = CPyDef_types___TypeType(cpy_r_r47, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 244, CPyStatic_plugins___common___globals);
        goto CPyL129;
    }
    cpy_r_r46 = cpy_r_r50;
CPyL39: ;
    cpy_r_self_type = cpy_r_r46;
    cpy_r_r51 = CPyStatics[4474]; /* '_cls' */
    cpy_r_r52 = NULL;
    cpy_r_r53 = CPyDef_nodes___Var(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 245, CPyStatic_plugins___common___globals);
        goto CPyL130;
    }
    if (likely(cpy_r_self_type != Py_None))
        cpy_r_r54 = cpy_r_self_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_method_to_class", 245, CPyStatic_plugins___common___globals, "mypy.types.Type", cpy_r_self_type);
        goto CPyL131;
    }
    cpy_r_r55 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r55 == NULL)) {
        goto CPyL132;
    } else
        goto CPyL44;
CPyL42: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r56 = 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 245, CPyStatic_plugins___common___globals);
        goto CPyL120;
    }
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r57 = Py_None;
    cpy_r_r58 = CPyDef_nodes___Argument(cpy_r_r53, cpy_r_r54, cpy_r_r57, cpy_r_r55, 1);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 245, CPyStatic_plugins___common___globals);
        goto CPyL129;
    }
    cpy_r_r59 = PyList_New(1);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 245, CPyStatic_plugins___common___globals);
        goto CPyL133;
    }
    cpy_r_r60 = (CPyPtr)&((PyListObject *)cpy_r_r59)->ob_item;
    cpy_r_r61 = *(CPyPtr *)cpy_r_r60;
    *(PyObject * *)cpy_r_r61 = cpy_r_r58;
    cpy_r_first = cpy_r_r59;
    goto CPyL63;
CPyL47: ;
    if (cpy_r_is_staticmethod) {
        goto CPyL134;
    } else
        goto CPyL50;
CPyL48: ;
    cpy_r_r62 = PyList_New(0);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 247, CPyStatic_plugins___common___globals);
        goto CPyL129;
    }
    cpy_r_first = cpy_r_r62;
    goto CPyL63;
CPyL50: ;
    cpy_r_r63 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r64 = cpy_r_self_type != cpy_r_r63;
    if (!cpy_r_r64) goto CPyL135;
    if (likely(cpy_r_self_type != Py_None))
        cpy_r_r65 = cpy_r_self_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_method_to_class", 249, CPyStatic_plugins___common___globals, "mypy.types.Type", cpy_r_self_type);
        goto CPyL129;
    }
    cpy_r_r66 = cpy_r_r65;
    goto CPyL55;
CPyL53: ;
    cpy_r_r67 = CPyDef_typevars___fill_typevars(cpy_r_info);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 249, CPyStatic_plugins___common___globals);
        goto CPyL129;
    }
    cpy_r_r66 = cpy_r_r67;
CPyL55: ;
    cpy_r_self_type = cpy_r_r66;
    cpy_r_r68 = CPyStatics[730]; /* 'self' */
    cpy_r_r69 = NULL;
    cpy_r_r70 = CPyDef_nodes___Var(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 250, CPyStatic_plugins___common___globals);
        goto CPyL130;
    }
    if (likely(cpy_r_self_type != Py_None))
        cpy_r_r71 = cpy_r_self_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_method_to_class", 250, CPyStatic_plugins___common___globals, "mypy.types.Type", cpy_r_self_type);
        goto CPyL136;
    }
    cpy_r_r72 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r72 == NULL)) {
        goto CPyL137;
    } else
        goto CPyL60;
CPyL58: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r73 = 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 250, CPyStatic_plugins___common___globals);
        goto CPyL120;
    }
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r74 = Py_None;
    cpy_r_r75 = 2;
    cpy_r_r76 = CPyDef_nodes___Argument(cpy_r_r70, cpy_r_r71, cpy_r_r74, cpy_r_r72, cpy_r_r75);
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 250, CPyStatic_plugins___common___globals);
        goto CPyL129;
    }
    cpy_r_r77 = PyList_New(1);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 250, CPyStatic_plugins___common___globals);
        goto CPyL138;
    }
    cpy_r_r78 = (CPyPtr)&((PyListObject *)cpy_r_r77)->ob_item;
    cpy_r_r79 = *(CPyPtr *)cpy_r_r78;
    *(PyObject * *)cpy_r_r79 = cpy_r_r76;
    cpy_r_first = cpy_r_r77;
CPyL63: ;
    cpy_r_r80 = PyNumber_Add(cpy_r_first, cpy_r_args);
    CPy_DECREF(cpy_r_first);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 251, CPyStatic_plugins___common___globals);
        goto CPyL129;
    }
    if (likely(PyList_Check(cpy_r_r80)))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_method_to_class", 251, CPyStatic_plugins___common___globals, "list", cpy_r_r80);
        goto CPyL129;
    }
    cpy_r_args = cpy_r_r81;
    cpy_r_r82 = PyList_New(0);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 253, CPyStatic_plugins___common___globals);
        goto CPyL139;
    }
    cpy_r_r83 = cpy_r_r82;
    cpy_r_r84 = PyList_New(0);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 253, CPyStatic_plugins___common___globals);
        goto CPyL140;
    }
    cpy_r_r85 = cpy_r_r84;
    cpy_r_r86 = PyList_New(0);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 253, CPyStatic_plugins___common___globals);
        goto CPyL141;
    }
    cpy_r_r87 = cpy_r_r86;
    cpy_r_arg_types = cpy_r_r83;
    cpy_r_arg_names = cpy_r_r85;
    cpy_r_arg_kinds = cpy_r_r87;
    cpy_r_r88 = 0;
CPyL69: ;
    cpy_r_r89 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r90 = *(int64_t *)cpy_r_r89;
    cpy_r_r91 = cpy_r_r90 << 1;
    cpy_r_r92 = (Py_ssize_t)cpy_r_r88 < (Py_ssize_t)cpy_r_r91;
    if (!cpy_r_r92) goto CPyL80;
    cpy_r_r93 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r88);
    if (likely(Py_TYPE(cpy_r_r93) == CPyType_nodes___Argument))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_method_to_class", 254, CPyStatic_plugins___common___globals, "mypy.nodes.Argument", cpy_r_r93);
        goto CPyL142;
    }
    cpy_r_arg = cpy_r_r94;
    cpy_r_r95 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_type_annotation;
    CPy_INCREF(cpy_r_r95);
    cpy_r_r96 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r97 = cpy_r_r95 != cpy_r_r96;
    CPy_DECREF(cpy_r_r95);
    if (cpy_r_r97) {
        goto CPyL74;
    } else
        goto CPyL143;
CPyL72: ;
    PyErr_SetString(PyExc_AssertionError, "All arguments must be fully typed.");
    cpy_r_r98 = 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 255, CPyStatic_plugins___common___globals);
        goto CPyL120;
    }
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r99 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_type_annotation;
    CPy_INCREF(cpy_r_r99);
    if (likely(cpy_r_r99 != Py_None))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_method_to_class", 256, CPyStatic_plugins___common___globals, "mypy.types.Type", cpy_r_r99);
        goto CPyL144;
    }
    cpy_r_r101 = PyList_Append(cpy_r_arg_types, cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 256, CPyStatic_plugins___common___globals);
        goto CPyL144;
    }
    cpy_r_r103 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    CPy_INCREF(cpy_r_r103);
    cpy_r_r104 = CPY_GET_ATTR(cpy_r_r103, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 257, CPyStatic_plugins___common___globals);
        goto CPyL144;
    }
CPyL77: ;
    cpy_r_r105 = PyList_Append(cpy_r_arg_names, cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    cpy_r_r106 = cpy_r_r105 >= 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 257, CPyStatic_plugins___common___globals);
        goto CPyL144;
    }
    cpy_r_r107 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_kind;
    CPy_INCREF(cpy_r_r107);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r108 = PyList_Append(cpy_r_arg_kinds, cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 258, CPyStatic_plugins___common___globals);
        goto CPyL142;
    }
    cpy_r_r110 = cpy_r_r88 + 2;
    cpy_r_r88 = cpy_r_r110;
    goto CPyL69;
CPyL80: ;
    cpy_r_r111 = NULL;
    cpy_r_r112 = NULL;
    cpy_r_r113 = NULL;
    cpy_r_r114 = CPY_INT_TAG;
    cpy_r_r115 = CPY_INT_TAG;
    cpy_r_r116 = 2;
    cpy_r_r117 = 2;
    cpy_r_r118 = NULL;
    cpy_r_r119 = 2;
    cpy_r_r120 = NULL;
    cpy_r_r121 = NULL;
    cpy_r_r122 = NULL;
    cpy_r_r123 = 2;
    cpy_r_r124 = 2;
    cpy_r_r125 = CPyDef_types___CallableType(cpy_r_arg_types, cpy_r_arg_kinds, cpy_r_arg_names, cpy_r_return_type, cpy_r_function_type, cpy_r_r111, cpy_r_r112, cpy_r_r113, cpy_r_r114, cpy_r_r115, cpy_r_r116, cpy_r_r117, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124);
    CPy_DECREF(cpy_r_arg_types);
    CPy_DECREF(cpy_r_arg_kinds);
    CPy_DECREF(cpy_r_arg_names);
    CPy_DECREF(cpy_r_function_type);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 260, CPyStatic_plugins___common___globals);
        goto CPyL145;
    }
    cpy_r_signature = cpy_r_r125;
    cpy_r_r126 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r127 = cpy_r_tvar_def != cpy_r_r126;
    if (!cpy_r_r127) goto CPyL146;
    if (likely(cpy_r_tvar_def != Py_None))
        cpy_r_r128 = cpy_r_tvar_def;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_method_to_class", 262, CPyStatic_plugins___common___globals, "mypy.types.TypeVarType", cpy_r_tvar_def);
        goto CPyL147;
    }
    cpy_r_r129 = PyList_New(1);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 262, CPyStatic_plugins___common___globals);
        goto CPyL148;
    }
    cpy_r_r130 = (CPyPtr)&((PyListObject *)cpy_r_r129)->ob_item;
    cpy_r_r131 = *(CPyPtr *)cpy_r_r130;
    *(PyObject * *)cpy_r_r131 = cpy_r_r128;
    CPy_DECREF(((mypy___types___CallableTypeObject *)cpy_r_signature)->_variables);
    ((mypy___types___CallableTypeObject *)cpy_r_signature)->_variables = cpy_r_r129;
CPyL85: ;
    cpy_r_r133 = CPY_INT_TAG;
    cpy_r_r134 = CPY_INT_TAG;
    cpy_r_r135 = CPyDef_nodes___PassStmt(cpy_r_r133, cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 264, CPyStatic_plugins___common___globals);
        goto CPyL147;
    }
    cpy_r_r136 = PyList_New(1);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 264, CPyStatic_plugins___common___globals);
        goto CPyL149;
    }
    cpy_r_r137 = (CPyPtr)&((PyListObject *)cpy_r_r136)->ob_item;
    cpy_r_r138 = *(CPyPtr *)cpy_r_r137;
    *(PyObject * *)cpy_r_r138 = cpy_r_r135;
    cpy_r_r139 = CPyDef_nodes___Block(cpy_r_r136);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 264, CPyStatic_plugins___common___globals);
        goto CPyL147;
    }
    cpy_r_r140 = NULL;
    cpy_r_r141 = CPyDef_nodes___FuncDef(cpy_r_name, cpy_r_args, cpy_r_r139, cpy_r_r140);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 264, CPyStatic_plugins___common___globals);
        goto CPyL150;
    }
    cpy_r_func = cpy_r_r141;
    CPy_INCREF(cpy_r_info);
    CPy_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_func)->_info);
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->_info = cpy_r_info;
    cpy_r_r143 = CPyDef_semanal_shared___set_callable_name(cpy_r_signature, cpy_r_func);
    CPy_DECREF(cpy_r_signature);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 266, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
    CPy_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_func)->_type);
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->_type = cpy_r_r143;
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->_is_class = cpy_r_is_classmethod;
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->_is_static = cpy_r_is_staticmethod;
    cpy_r_r147 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 269, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
CPyL91: ;
    cpy_r_r148 = CPyStatics[224]; /* '.' */
    cpy_r_r149 = PyUnicode_Concat(cpy_r_r147, cpy_r_r148);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 269, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
    cpy_r_r150 = PyUnicode_Concat(cpy_r_r149, cpy_r_name);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 269, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
    CPy_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_func)->__fullname);
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->__fullname = cpy_r_r150;
    cpy_r_r152 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_line;
    if (unlikely(cpy_r_r152 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/common.py", "add_method_to_class", "TypeInfo", "line", 270, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
    CPyTagged_INCREF(cpy_r_r152);
CPyL94: ;
    CPyTagged_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_func)->_line);
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->_line = cpy_r_r152;
    cpy_r_r154 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AttributeError("mypy/plugins/common.py", "add_method_to_class", "TypeInfo", "names", 274, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
    CPy_INCREF(cpy_r_r154);
CPyL95: ;
    cpy_r_r155 = PyDict_Contains(cpy_r_r154, cpy_r_name);
    CPy_DECREF(cpy_r_r154);
    cpy_r_r156 = cpy_r_r155 >= 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 274, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
    cpy_r_r157 = cpy_r_r155;
    if (!cpy_r_r157) goto CPyL104;
    cpy_r_r158 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AttributeError("mypy/plugins/common.py", "add_method_to_class", "TypeInfo", "names", 276, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
    CPy_INCREF(cpy_r_r158);
CPyL98: ;
    cpy_r_r159 = CPyDef_mypy___util___get_unique_redefinition_name(cpy_r_name, cpy_r_r158);
    CPy_DECREF(cpy_r_r158);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 276, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
    cpy_r_r_name = cpy_r_r159;
    cpy_r_r160 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AttributeError("mypy/plugins/common.py", "add_method_to_class", "TypeInfo", "names", 277, CPyStatic_plugins___common___globals);
        goto CPyL152;
    }
    CPy_INCREF(cpy_r_r160);
CPyL100: ;
    cpy_r_r161 = CPyDict_GetItem(cpy_r_r160, cpy_r_name);
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 277, CPyStatic_plugins___common___globals);
        goto CPyL152;
    }
    if (likely(Py_TYPE(cpy_r_r161) == CPyType_nodes___SymbolTableNode))
        cpy_r_r162 = cpy_r_r161;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_method_to_class", 277, CPyStatic_plugins___common___globals, "mypy.nodes.SymbolTableNode", cpy_r_r161);
        goto CPyL152;
    }
    cpy_r_r163 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AttributeError("mypy/plugins/common.py", "add_method_to_class", "TypeInfo", "names", 277, CPyStatic_plugins___common___globals);
        goto CPyL153;
    }
    CPy_INCREF(cpy_r_r163);
CPyL103: ;
    cpy_r_r164 = CPyDict_SetItem(cpy_r_r163, cpy_r_r_name, cpy_r_r162);
    CPy_DECREF(cpy_r_r163);
    CPy_DECREF(cpy_r_r_name);
    CPy_DECREF(cpy_r_r162);
    cpy_r_r165 = cpy_r_r164 >= 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 277, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
CPyL104: ;
    if (!cpy_r_is_staticmethod) goto CPyL113;
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->_is_decorated = 1;
    cpy_r_r166 = 1;
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 281, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
    cpy_r_r167 = ((mypy___nodes___FuncDefObject *)cpy_r_func)->_type;
    CPy_INCREF(cpy_r_r167);
    if (likely(cpy_r_r167 != Py_None))
        cpy_r_r168 = cpy_r_r167;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_method_to_class", 282, CPyStatic_plugins___common___globals, "mypy.types.ProperType", cpy_r_r167);
        goto CPyL151;
    }
    cpy_r_r169 = CPyDef_nodes___Var(cpy_r_name, cpy_r_r168);
    CPy_DECREF(cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 282, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
    cpy_r_v = cpy_r_r169;
    CPy_INCREF(cpy_r_info);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_v)->_info);
    ((mypy___nodes___VarObject *)cpy_r_v)->_info = cpy_r_info;
    cpy_r_r171 = ((mypy___nodes___FuncDefObject *)cpy_r_func)->__fullname;
    CPy_INCREF(cpy_r_r171);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_v)->__fullname);
    ((mypy___nodes___VarObject *)cpy_r_v)->__fullname = cpy_r_r171;
    ((mypy___nodes___VarObject *)cpy_r_v)->_is_staticmethod = 1;
    cpy_r_r174 = PyList_New(0);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 286, CPyStatic_plugins___common___globals);
        goto CPyL154;
    }
    cpy_r_r175 = CPyDef_nodes___Decorator(cpy_r_func, cpy_r_r174, cpy_r_v);
    CPy_DECREF(cpy_r_r174);
    CPy_DECREF(cpy_r_v);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 286, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
    cpy_r_dec = cpy_r_r175;
    cpy_r_r176 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_line;
    if (unlikely(cpy_r_r176 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/common.py", "add_method_to_class", "TypeInfo", "line", 287, CPyStatic_plugins___common___globals);
        goto CPyL155;
    }
    CPyTagged_INCREF(cpy_r_r176);
CPyL111: ;
    CPyTagged_DECREF(((mypy___nodes___DecoratorObject *)cpy_r_dec)->_line);
    ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_line = cpy_r_r176;
    cpy_r_r178 = 2;
    cpy_r_r179 = 2;
    cpy_r_r180 = 2;
    cpy_r_r181 = 2;
    cpy_r_r182 = 2;
    cpy_r_r183 = CPyDef_nodes___SymbolTableNode(4, cpy_r_dec, cpy_r_r178, cpy_r_r179, cpy_r_r180, cpy_r_r181, cpy_r_r182);
    CPy_DECREF(cpy_r_dec);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 288, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
    cpy_r_sym = cpy_r_r183;
    goto CPyL115;
CPyL113: ;
    cpy_r_r184 = 2;
    cpy_r_r185 = 2;
    cpy_r_r186 = 2;
    cpy_r_r187 = 2;
    cpy_r_r188 = 2;
    cpy_r_r189 = CPyDef_nodes___SymbolTableNode(4, cpy_r_func, cpy_r_r184, cpy_r_r185, cpy_r_r186, cpy_r_r187, cpy_r_r188);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 290, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
    cpy_r_sym = cpy_r_r189;
CPyL115: ;
    ((mypy___nodes___SymbolTableNodeObject *)cpy_r_sym)->_plugin_generated = 1;
    cpy_r_r191 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AttributeError("mypy/plugins/common.py", "add_method_to_class", "TypeInfo", "names", 292, CPyStatic_plugins___common___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r191);
CPyL116: ;
    cpy_r_r192 = CPyDict_SetItem(cpy_r_r191, cpy_r_name, cpy_r_sym);
    CPy_DECREF(cpy_r_r191);
    CPy_DECREF(cpy_r_sym);
    cpy_r_r193 = cpy_r_r192 >= 0;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 292, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
    cpy_r_r194 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_defn;
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AttributeError("mypy/plugins/common.py", "add_method_to_class", "TypeInfo", "defn", 294, CPyStatic_plugins___common___globals);
        goto CPyL151;
    }
CPyL118: ;
    cpy_r_r195 = ((mypy___nodes___ClassDefObject *)cpy_r_r194)->_defs;
    cpy_r_r196 = ((mypy___nodes___BlockObject *)cpy_r_r195)->_body;
    CPy_INCREF(cpy_r_r196);
    CPy_DECREF(cpy_r_info);
    cpy_r_r197 = PyList_Append(cpy_r_r196, cpy_r_func);
    CPy_DECREF(cpy_r_r196);
    CPy_DECREF(cpy_r_func);
    cpy_r_r198 = cpy_r_r197 >= 0;
    if (unlikely(!cpy_r_r198)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 294, CPyStatic_plugins___common___globals);
        goto CPyL120;
    }
    return 1;
CPyL120: ;
    cpy_r_r199 = 2;
    return cpy_r_r199;
CPyL121: ;
    CPy_INCREF(cpy_r_self_type);
    goto CPyL2;
CPyL122: ;
    CPy_INCREF(cpy_r_tvar_def);
    goto CPyL4;
CPyL123: ;
    CPy_DECREF(cpy_r_self_type);
    CPy_DECREF(cpy_r_tvar_def);
    goto CPyL12;
CPyL124: ;
    CPy_DecRef(cpy_r_self_type);
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    goto CPyL120;
CPyL125: ;
    CPy_DECREF(cpy_r_sym);
    goto CPyL24;
CPyL126: ;
    CPy_DecRef(cpy_r_self_type);
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r26);
    goto CPyL120;
CPyL127: ;
    CPy_DecRef(cpy_r_self_type);
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r39);
    goto CPyL120;
CPyL128: ;
    CPy_DECREF(cpy_r_self_type);
    goto CPyL36;
CPyL129: ;
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_function_type);
    goto CPyL120;
CPyL130: ;
    CPy_DecRef(cpy_r_self_type);
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_function_type);
    goto CPyL120;
CPyL131: ;
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_function_type);
    CPy_DecRef(cpy_r_r53);
    goto CPyL120;
CPyL132: ;
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_function_type);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    goto CPyL42;
CPyL133: ;
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_function_type);
    CPy_DecRef(cpy_r_r58);
    goto CPyL120;
CPyL134: ;
    CPy_DECREF(cpy_r_self_type);
    goto CPyL48;
CPyL135: ;
    CPy_DECREF(cpy_r_self_type);
    goto CPyL53;
CPyL136: ;
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_function_type);
    CPy_DecRef(cpy_r_r70);
    goto CPyL120;
CPyL137: ;
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_function_type);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r71);
    goto CPyL58;
CPyL138: ;
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_function_type);
    CPy_DecRef(cpy_r_r76);
    goto CPyL120;
CPyL139: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_function_type);
    goto CPyL120;
CPyL140: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_function_type);
    CPy_DecRef(cpy_r_r83);
    goto CPyL120;
CPyL141: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_function_type);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r85);
    goto CPyL120;
CPyL142: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_function_type);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_kinds);
    goto CPyL120;
CPyL143: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_tvar_def);
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_function_type);
    CPy_DECREF(cpy_r_arg_types);
    CPy_DECREF(cpy_r_arg_names);
    CPy_DECREF(cpy_r_arg_kinds);
    CPy_DECREF(cpy_r_arg);
    goto CPyL72;
CPyL144: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_function_type);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg);
    goto CPyL120;
CPyL145: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_info);
    goto CPyL120;
CPyL146: ;
    CPy_DECREF(cpy_r_tvar_def);
    goto CPyL85;
CPyL147: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_signature);
    goto CPyL120;
CPyL148: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_r128);
    goto CPyL120;
CPyL149: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_r135);
    goto CPyL120;
CPyL150: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_signature);
    goto CPyL120;
CPyL151: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_func);
    goto CPyL120;
CPyL152: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r_name);
    goto CPyL120;
CPyL153: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r_name);
    CPy_DecRef(cpy_r_r162);
    goto CPyL120;
CPyL154: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_v);
    goto CPyL120;
CPyL155: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_dec);
    goto CPyL120;
CPyL156: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_func);
    goto CPyL120;
}

PyObject *CPyPy_plugins___common___add_method_to_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"api", "cls", "name", "args", "return_type", "self_type", "tvar_def", "is_classmethod", "is_staticmethod", 0};
    static CPyArg_Parser parser = {"OOOOO|OOOO:add_method_to_class", kwlist, 0};
    PyObject *obj_api;
    PyObject *obj_cls;
    PyObject *obj_name;
    PyObject *obj_args;
    PyObject *obj_return_type;
    PyObject *obj_self_type = NULL;
    PyObject *obj_tvar_def = NULL;
    PyObject *obj_is_classmethod = NULL;
    PyObject *obj_is_staticmethod = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_api, &obj_cls, &obj_name, &obj_args, &obj_return_type, &obj_self_type, &obj_tvar_def, &obj_is_classmethod, &obj_is_staticmethod)) {
        return NULL;
    }
    PyObject *arg_api;
    if (Py_TYPE(obj_api) == CPyType_semanal___SemanticAnalyzer)
        arg_api = obj_api;
    else {
        arg_api = NULL;
    }
    if (arg_api != NULL) goto __LL4768;
    if (Py_TYPE(obj_api) == CPyType_checker___TypeChecker)
        arg_api = obj_api;
    else {
        arg_api = NULL;
    }
    if (arg_api != NULL) goto __LL4768;
    CPy_TypeError("union[mypy.plugin.SemanticAnalyzerPluginInterface, mypy.plugin.CheckerPluginInterface]", obj_api); 
    goto fail;
__LL4768: ;
    PyObject *arg_cls;
    if (likely(Py_TYPE(obj_cls) == CPyType_nodes___ClassDef))
        arg_cls = obj_cls;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cls); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    PyObject *arg_return_type;
    if (likely(PyObject_TypeCheck(obj_return_type, CPyType_types___Type)))
        arg_return_type = obj_return_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_return_type); 
        goto fail;
    }
    PyObject *arg_self_type;
    if (obj_self_type == NULL) {
        arg_self_type = NULL;
        goto __LL4769;
    }
    if (PyObject_TypeCheck(obj_self_type, CPyType_types___Type))
        arg_self_type = obj_self_type;
    else {
        arg_self_type = NULL;
    }
    if (arg_self_type != NULL) goto __LL4769;
    if (obj_self_type == Py_None)
        arg_self_type = obj_self_type;
    else {
        arg_self_type = NULL;
    }
    if (arg_self_type != NULL) goto __LL4769;
    CPy_TypeError("mypy.types.Type or None", obj_self_type); 
    goto fail;
__LL4769: ;
    PyObject *arg_tvar_def;
    if (obj_tvar_def == NULL) {
        arg_tvar_def = NULL;
        goto __LL4770;
    }
    if (Py_TYPE(obj_tvar_def) == CPyType_types___TypeVarType)
        arg_tvar_def = obj_tvar_def;
    else {
        arg_tvar_def = NULL;
    }
    if (arg_tvar_def != NULL) goto __LL4770;
    if (obj_tvar_def == Py_None)
        arg_tvar_def = obj_tvar_def;
    else {
        arg_tvar_def = NULL;
    }
    if (arg_tvar_def != NULL) goto __LL4770;
    CPy_TypeError("mypy.types.TypeVarType or None", obj_tvar_def); 
    goto fail;
__LL4770: ;
    char arg_is_classmethod;
    if (obj_is_classmethod == NULL) {
        arg_is_classmethod = 2;
    } else if (unlikely(!PyBool_Check(obj_is_classmethod))) {
        CPy_TypeError("bool", obj_is_classmethod); goto fail;
    } else
        arg_is_classmethod = obj_is_classmethod == Py_True;
    char arg_is_staticmethod;
    if (obj_is_staticmethod == NULL) {
        arg_is_staticmethod = 2;
    } else if (unlikely(!PyBool_Check(obj_is_staticmethod))) {
        CPy_TypeError("bool", obj_is_staticmethod); goto fail;
    } else
        arg_is_staticmethod = obj_is_staticmethod == Py_True;
    char retval = CPyDef_plugins___common___add_method_to_class(arg_api, arg_cls, arg_name, arg_args, arg_return_type, arg_self_type, arg_tvar_def, arg_is_classmethod, arg_is_staticmethod);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/common.py", "add_method_to_class", 212, CPyStatic_plugins___common___globals);
    return NULL;
}

char CPyDef_plugins___common___add_attribute_to_class(PyObject *cpy_r_api, PyObject *cpy_r_cls, PyObject *cpy_r_name, PyObject *cpy_r_typ, char cpy_r_final, char cpy_r_no_serialize, char cpy_r_override_allow_incompatible, PyObject *cpy_r_fullname, char cpy_r_is_classvar) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r_name;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_node;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    tuple_T3OOO cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    if (cpy_r_final != 2) goto CPyL2;
    cpy_r_final = 0;
CPyL2: ;
    if (cpy_r_no_serialize != 2) goto CPyL4;
    cpy_r_no_serialize = 0;
CPyL4: ;
    if (cpy_r_override_allow_incompatible != 2) goto CPyL6;
    cpy_r_override_allow_incompatible = 0;
CPyL6: ;
    if (cpy_r_fullname != NULL) goto CPyL42;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_fullname = cpy_r_r0;
CPyL8: ;
    if (cpy_r_is_classvar != 2) goto CPyL10;
    cpy_r_is_classvar = 0;
CPyL10: ;
    cpy_r_r1 = ((mypy___nodes___ClassDefObject *)cpy_r_cls)->_info;
    CPy_INCREF(cpy_r_r1);
    cpy_r_info = cpy_r_r1;
    cpy_r_r2 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/plugins/common.py", "add_attribute_to_class", "TypeInfo", "names", 316, CPyStatic_plugins___common___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r2);
CPyL11: ;
    cpy_r_r3 = PyDict_Contains(cpy_r_r2, cpy_r_name);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_attribute_to_class", 316, CPyStatic_plugins___common___globals);
        goto CPyL43;
    }
    cpy_r_r5 = cpy_r_r3;
    if (!cpy_r_r5) goto CPyL20;
    cpy_r_r6 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/plugins/common.py", "add_attribute_to_class", "TypeInfo", "names", 318, CPyStatic_plugins___common___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r6);
CPyL14: ;
    cpy_r_r7 = CPyDef_mypy___util___get_unique_redefinition_name(cpy_r_name, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_attribute_to_class", 318, CPyStatic_plugins___common___globals);
        goto CPyL43;
    }
    cpy_r_r_name = cpy_r_r7;
    cpy_r_r8 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/plugins/common.py", "add_attribute_to_class", "TypeInfo", "names", 319, CPyStatic_plugins___common___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r8);
CPyL16: ;
    cpy_r_r9 = CPyDict_GetItem(cpy_r_r8, cpy_r_name);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_attribute_to_class", 319, CPyStatic_plugins___common___globals);
        goto CPyL44;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_nodes___SymbolTableNode))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_attribute_to_class", 319, CPyStatic_plugins___common___globals, "mypy.nodes.SymbolTableNode", cpy_r_r9);
        goto CPyL44;
    }
    cpy_r_r11 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/plugins/common.py", "add_attribute_to_class", "TypeInfo", "names", 319, CPyStatic_plugins___common___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_r11);
CPyL19: ;
    cpy_r_r12 = CPyDict_SetItem(cpy_r_r11, cpy_r_r_name, cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r_name);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_attribute_to_class", 319, CPyStatic_plugins___common___globals);
        goto CPyL43;
    }
CPyL20: ;
    cpy_r_r14 = CPyDef_nodes___Var(cpy_r_name, cpy_r_typ);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_attribute_to_class", 321, CPyStatic_plugins___common___globals);
        goto CPyL43;
    }
    cpy_r_node = cpy_r_r14;
    CPy_INCREF(cpy_r_info);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_node)->_info);
    ((mypy___nodes___VarObject *)cpy_r_node)->_info = cpy_r_info;
    ((mypy___nodes___VarObject *)cpy_r_node)->_is_final = cpy_r_final;
    ((mypy___nodes___VarObject *)cpy_r_node)->_is_classvar = cpy_r_is_classvar;
    cpy_r_r18 = CPyStatic_semanal_shared___ALLOW_INCOMPATIBLE_OVERRIDE;
    if (unlikely(cpy_r_r18.f0 == NULL)) {
        goto CPyL46;
    } else
        goto CPyL24;
CPyL22: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ALLOW_INCOMPATIBLE_OVERRIDE\" was not set");
    cpy_r_r19 = 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_attribute_to_class", 325, CPyStatic_plugins___common___globals);
        goto CPyL41;
    }
    CPy_Unreachable();
CPyL24: ;
    CPy_INCREF(cpy_r_r18.f0);
    CPy_INCREF(cpy_r_r18.f1);
    CPy_INCREF(cpy_r_r18.f2);
    cpy_r_r20 = PyTuple_New(3);
    if (unlikely(cpy_r_r20 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4771 = cpy_r_r18.f0;
    PyTuple_SET_ITEM(cpy_r_r20, 0, __tmp4771);
    PyObject *__tmp4772 = cpy_r_r18.f1;
    PyTuple_SET_ITEM(cpy_r_r20, 1, __tmp4772);
    PyObject *__tmp4773 = cpy_r_r18.f2;
    PyTuple_SET_ITEM(cpy_r_r20, 2, __tmp4773);
    cpy_r_r21 = PySequence_Contains(cpy_r_r20, cpy_r_name);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_attribute_to_class", 325, CPyStatic_plugins___common___globals);
        goto CPyL47;
    }
    cpy_r_r23 = cpy_r_r21;
    if (!cpy_r_r23) goto CPyL27;
    ((mypy___nodes___VarObject *)cpy_r_node)->_allow_incompatible_override = 1;
    goto CPyL28;
CPyL27: ;
    ((mypy___nodes___VarObject *)cpy_r_node)->_allow_incompatible_override = cpy_r_override_allow_incompatible;
CPyL28: ;
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_fullname != cpy_r_r26;
    if (!cpy_r_r27) goto CPyL48;
    CPy_INCREF(cpy_r_fullname);
    if (likely(cpy_r_fullname != Py_None))
        cpy_r_r28 = cpy_r_fullname;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_attribute_to_class", 305, CPyStatic_plugins___common___globals, "str", cpy_r_fullname);
        goto CPyL47;
    }
    cpy_r_r29 = CPyStr_IsTrue(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (!cpy_r_r29) goto CPyL48;
    if (likely(cpy_r_fullname != Py_None))
        cpy_r_r30 = cpy_r_fullname;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/common.py", "add_attribute_to_class", 331, CPyStatic_plugins___common___globals, "str", cpy_r_fullname);
        goto CPyL49;
    }
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_node)->__fullname);
    ((mypy___nodes___VarObject *)cpy_r_node)->__fullname = cpy_r_r30;
    goto CPyL37;
CPyL33: ;
    cpy_r_r32 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_attribute_to_class", 333, CPyStatic_plugins___common___globals);
        goto CPyL49;
    }
CPyL34: ;
    cpy_r_r33 = CPyStatics[224]; /* '.' */
    cpy_r_r34 = PyUnicode_Concat(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_attribute_to_class", 333, CPyStatic_plugins___common___globals);
        goto CPyL49;
    }
    cpy_r_r35 = PyUnicode_Concat(cpy_r_r34, cpy_r_name);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_attribute_to_class", 333, CPyStatic_plugins___common___globals);
        goto CPyL49;
    }
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_node)->__fullname);
    ((mypy___nodes___VarObject *)cpy_r_node)->__fullname = cpy_r_r35;
CPyL37: ;
    cpy_r_r37 = 2;
    cpy_r_r38 = 2;
    cpy_r_r39 = 2;
    cpy_r_r40 = CPyDef_nodes___SymbolTableNode(4, cpy_r_node, cpy_r_r37, cpy_r_r38, cpy_r_r39, 1, cpy_r_no_serialize);
    CPy_DECREF(cpy_r_node);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_attribute_to_class", 335, CPyStatic_plugins___common___globals);
        goto CPyL50;
    }
    cpy_r_r41 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r41 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r41);
    }
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_attribute_to_class", 335, CPyStatic_plugins___common___globals);
        goto CPyL51;
    }
CPyL39: ;
    cpy_r_r42 = CPyDict_SetItem(cpy_r_r41, cpy_r_name, cpy_r_r40);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/plugins/common.py", "add_attribute_to_class", 335, CPyStatic_plugins___common___globals);
        goto CPyL41;
    }
    return 1;
CPyL41: ;
    cpy_r_r44 = 2;
    return cpy_r_r44;
CPyL42: ;
    CPy_INCREF(cpy_r_fullname);
    goto CPyL8;
CPyL43: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_info);
    goto CPyL41;
CPyL44: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r_name);
    goto CPyL41;
CPyL45: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r_name);
    CPy_DecRef(cpy_r_r10);
    goto CPyL41;
CPyL46: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_node);
    goto CPyL22;
CPyL47: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_node);
    goto CPyL41;
CPyL48: ;
    CPy_DECREF(cpy_r_fullname);
    goto CPyL33;
CPyL49: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_node);
    goto CPyL41;
CPyL50: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL41;
CPyL51: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL41;
}

PyObject *CPyPy_plugins___common___add_attribute_to_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"api", "cls", "name", "typ", "final", "no_serialize", "override_allow_incompatible", "fullname", "is_classvar", 0};
    static CPyArg_Parser parser = {"OOOO|OOOOO:add_attribute_to_class", kwlist, 0};
    PyObject *obj_api;
    PyObject *obj_cls;
    PyObject *obj_name;
    PyObject *obj_typ;
    PyObject *obj_final = NULL;
    PyObject *obj_no_serialize = NULL;
    PyObject *obj_override_allow_incompatible = NULL;
    PyObject *obj_fullname = NULL;
    PyObject *obj_is_classvar = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_api, &obj_cls, &obj_name, &obj_typ, &obj_final, &obj_no_serialize, &obj_override_allow_incompatible, &obj_fullname, &obj_is_classvar)) {
        return NULL;
    }
    PyObject *arg_api;
    if (likely(Py_TYPE(obj_api) == CPyType_semanal___SemanticAnalyzer))
        arg_api = obj_api;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_api); 
        goto fail;
    }
    PyObject *arg_cls;
    if (likely(Py_TYPE(obj_cls) == CPyType_nodes___ClassDef))
        arg_cls = obj_cls;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cls); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    char arg_final;
    if (obj_final == NULL) {
        arg_final = 2;
    } else if (unlikely(!PyBool_Check(obj_final))) {
        CPy_TypeError("bool", obj_final); goto fail;
    } else
        arg_final = obj_final == Py_True;
    char arg_no_serialize;
    if (obj_no_serialize == NULL) {
        arg_no_serialize = 2;
    } else if (unlikely(!PyBool_Check(obj_no_serialize))) {
        CPy_TypeError("bool", obj_no_serialize); goto fail;
    } else
        arg_no_serialize = obj_no_serialize == Py_True;
    char arg_override_allow_incompatible;
    if (obj_override_allow_incompatible == NULL) {
        arg_override_allow_incompatible = 2;
    } else if (unlikely(!PyBool_Check(obj_override_allow_incompatible))) {
        CPy_TypeError("bool", obj_override_allow_incompatible); goto fail;
    } else
        arg_override_allow_incompatible = obj_override_allow_incompatible == Py_True;
    PyObject *arg_fullname;
    if (obj_fullname == NULL) {
        arg_fullname = NULL;
        goto __LL4774;
    }
    if (PyUnicode_Check(obj_fullname))
        arg_fullname = obj_fullname;
    else {
        arg_fullname = NULL;
    }
    if (arg_fullname != NULL) goto __LL4774;
    if (obj_fullname == Py_None)
        arg_fullname = obj_fullname;
    else {
        arg_fullname = NULL;
    }
    if (arg_fullname != NULL) goto __LL4774;
    CPy_TypeError("str or None", obj_fullname); 
    goto fail;
__LL4774: ;
    char arg_is_classvar;
    if (obj_is_classvar == NULL) {
        arg_is_classvar = 2;
    } else if (unlikely(!PyBool_Check(obj_is_classvar))) {
        CPy_TypeError("bool", obj_is_classvar); goto fail;
    } else
        arg_is_classvar = obj_is_classvar == Py_True;
    char retval = CPyDef_plugins___common___add_attribute_to_class(arg_api, arg_cls, arg_name, arg_typ, arg_final, arg_no_serialize, arg_override_allow_incompatible, arg_fullname, arg_is_classvar);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/common.py", "add_attribute_to_class", 297, CPyStatic_plugins___common___globals);
    return NULL;
}

PyObject *CPyDef_plugins___common___deserialize_and_fixup_type(PyObject *cpy_r_data, PyObject *cpy_r_api) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    size_t __tmp4775;
    cpy_r_r0 = CPyDef_types___deserialize_type(cpy_r_data);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "deserialize_and_fixup_type", 341, CPyStatic_plugins___common___globals);
        goto CPyL5;
    }
    cpy_r_typ = cpy_r_r0;
    __tmp4775 = CPy_FindAttrOffset(CPyType_plugin___SemanticAnalyzerPluginInterface, ((mypy___plugin___SemanticAnalyzerPluginInterfaceObject *)cpy_r_api)->vtable, 0);
    cpy_r_r1 = *(PyObject * *)((char *)cpy_r_api + __tmp4775);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/plugins/common.py", "deserialize_and_fixup_type", "SemanticAnalyzerPluginInterface", "modules", 342, CPyStatic_plugins___common___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = CPyDef_fixup___TypeFixer(cpy_r_r1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "deserialize_and_fixup_type", 342, CPyStatic_plugins___common___globals);
        goto CPyL6;
    }
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_typ, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_typ, cpy_r_r2); /* accept */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "deserialize_and_fixup_type", 342, CPyStatic_plugins___common___globals);
        goto CPyL6;
    } else
        goto CPyL7;
CPyL4: ;
    return cpy_r_typ;
CPyL5: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL6: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL5;
CPyL7: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL4;
}

PyObject *CPyPy_plugins___common___deserialize_and_fixup_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"data", "api", 0};
    static CPyArg_Parser parser = {"OO:deserialize_and_fixup_type", kwlist, 0};
    PyObject *obj_data;
    PyObject *obj_api;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_data, &obj_api)) {
        return NULL;
    }
    PyObject *arg_data;
    if (PyUnicode_Check(obj_data))
        arg_data = obj_data;
    else {
        arg_data = NULL;
    }
    if (arg_data != NULL) goto __LL4776;
    if (PyDict_Check(obj_data))
        arg_data = obj_data;
    else {
        arg_data = NULL;
    }
    if (arg_data != NULL) goto __LL4776;
    CPy_TypeError("union[str, dict]", obj_data); 
    goto fail;
__LL4776: ;
    PyObject *arg_api;
    if (likely(Py_TYPE(obj_api) == CPyType_semanal___SemanticAnalyzer))
        arg_api = obj_api;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_api); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugins___common___deserialize_and_fixup_type(arg_data, arg_api);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/common.py", "deserialize_and_fixup_type", 340, CPyStatic_plugins___common___globals);
    return NULL;
}

char CPyDef_plugins___common_____top_level__(void) {
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
        CPy_AddTraceback("mypy/plugins/common.py", "<module>", -1, CPyStatic_plugins___common___globals);
        goto CPyL15;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_plugins___common___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "<module>", 1, CPyStatic_plugins___common___globals);
        goto CPyL15;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9595]; /* ('map_actuals_to_formals',) */
    cpy_r_r10 = CPyStatics[64]; /* 'mypy.argmap' */
    cpy_r_r11 = CPyStatic_plugins___common___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "<module>", 3, CPyStatic_plugins___common___globals);
        goto CPyL15;
    }
    CPyModule_mypy___argmap = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___argmap);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9596]; /* ('TypeFixer',) */
    cpy_r_r14 = CPyStatics[560]; /* 'mypy.fixup' */
    cpy_r_r15 = CPyStatic_plugins___common___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "<module>", 4, CPyStatic_plugins___common___globals);
        goto CPyL15;
    }
    CPyModule_mypy___fixup = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___fixup);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9597]; /* ('ARG_POS', 'MDEF', 'SYMBOL_FUNCBASE_TYPES', 'Argument',
                                     'Block', 'CallExpr', 'ClassDef', 'Decorator',
                                     'Expression', 'FuncDef', 'JsonDict', 'NameExpr', 'Node',
                                     'PassStmt', 'RefExpr', 'SymbolTableNode', 'Var') */
    cpy_r_r18 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r19 = CPyStatic_plugins___common___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "<module>", 5, CPyStatic_plugins___common___globals);
        goto CPyL15;
    }
    CPyModule_mypy___nodes = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9598]; /* ('CheckerPluginInterface', 'ClassDefContext',
                                     'SemanticAnalyzerPluginInterface') */
    cpy_r_r22 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r23 = CPyStatic_plugins___common___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "<module>", 24, CPyStatic_plugins___common___globals);
        goto CPyL15;
    }
    CPyModule_mypy___plugin = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___plugin);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9599]; /* ('ALLOW_INCOMPATIBLE_OVERRIDE', 'parse_bool',
                                     'require_bool_literal_argument', 'set_callable_name') */
    cpy_r_r26 = CPyStatics[4478]; /* 'mypy.semanal_shared' */
    cpy_r_r27 = CPyStatic_plugins___common___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "<module>", 25, CPyStatic_plugins___common___globals);
        goto CPyL15;
    }
    CPyModule_mypy___semanal_shared = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___semanal_shared);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9600]; /* ('try_getting_str_literals',) */
    cpy_r_r30 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r31 = CPyStatic_plugins___common___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "<module>", 31, CPyStatic_plugins___common___globals);
        goto CPyL15;
    }
    CPyModule_mypy___typeops = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9601]; /* ('AnyType', 'CallableType', 'Instance', 'LiteralType',
                                     'NoneType', 'Overloaded', 'Type', 'TypeOfAny',
                                     'TypeType', 'TypeVarType', 'deserialize_type',
                                     'get_proper_type') */
    cpy_r_r34 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r35 = CPyStatic_plugins___common___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "<module>", 32, CPyStatic_plugins___common___globals);
        goto CPyL15;
    }
    CPyModule_mypy___types = cpy_r_r36;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9602]; /* ('is_optional',) */
    cpy_r_r38 = CPyStatics[1079]; /* 'mypy.types_utils' */
    cpy_r_r39 = CPyStatic_plugins___common___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "<module>", 46, CPyStatic_plugins___common___globals);
        goto CPyL15;
    }
    CPyModule_mypy___types_utils = cpy_r_r40;
    CPy_INCREF(CPyModule_mypy___types_utils);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[9242]; /* ('fill_typevars',) */
    cpy_r_r42 = CPyStatics[110]; /* 'mypy.typevars' */
    cpy_r_r43 = CPyStatic_plugins___common___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "<module>", 47, CPyStatic_plugins___common___globals);
        goto CPyL15;
    }
    CPyModule_mypy___typevars = cpy_r_r44;
    CPy_INCREF(CPyModule_mypy___typevars);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[9603]; /* ('get_unique_redefinition_name',) */
    cpy_r_r46 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r47 = CPyStatic_plugins___common___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugins/common.py", "<module>", 48, CPyStatic_plugins___common___globals);
        goto CPyL15;
    }
    CPyModule_mypy___util = cpy_r_r48;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r48);
    return 1;
CPyL15: ;
    cpy_r_r49 = 2;
    return cpy_r_r49;
}
