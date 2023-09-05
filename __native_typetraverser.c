#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef typetraverser___TypeTraverserVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef typetraverser___TypeTraverserVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyObject *
typetraverser___TypeTraverserVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_typetraverser___TypeTraverserVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled traits");
    } else {
        PyErr_SetString(PyExc_TypeError, "traits may not be directly created");
    }
    return NULL;
}
static PyMethodDef typetraverser___TypeTraverserVisitor_methods[] = {
    {"visit_any",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_none_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_none_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_erased_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_erased_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_deleted_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_deleted_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_parameters",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_parameters,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_literal_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_type_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_argument",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_callable_argument,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unbound_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_unbound_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_list",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_type_list,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_ellipsis_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_ellipsis_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_placeholder_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_placeholder_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_partial_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_partial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_raw_expression_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_raw_expression_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"traverse_types",
     (PyCFunction)CPyPy_typetraverser___TypeTraverserVisitor___traverse_types,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_typetraverser___TypeTraverserVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeTraverserVisitor",
    .tp_new = typetraverser___TypeTraverserVisitor_new,
    .tp_getset = typetraverser___TypeTraverserVisitor_getseters,
    .tp_methods = typetraverser___TypeTraverserVisitor_methods,
    .tp_members = typetraverser___TypeTraverserVisitor_members,
    .tp_basicsize = sizeof(PyObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyObject),
    .tp_weaklistoffset = sizeof(PyObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_typetraverser___TypeTraverserVisitor_template = &CPyType_typetraverser___TypeTraverserVisitor_template_;

static PyMethodDef typetraversermodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef typetraversermodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.typetraverser",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    typetraversermodule_methods
};

PyObject *CPyInit_mypy___typetraverser(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___typetraverser_internal) {
        Py_INCREF(CPyModule_mypy___typetraverser_internal);
        return CPyModule_mypy___typetraverser_internal;
    }
    CPyModule_mypy___typetraverser_internal = PyModule_Create(&typetraversermodule);
    if (unlikely(CPyModule_mypy___typetraverser_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___typetraverser_internal, "__name__");
    CPyStatic_typetraverser___globals = PyModule_GetDict(CPyModule_mypy___typetraverser_internal);
    if (unlikely(CPyStatic_typetraverser___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_typetraverser_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___typetraverser_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___typetraverser_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_typetraverser___TypeTraverserVisitor);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    return 1;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_any(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_any", 45, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    return 1;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_uninhabited_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_uninhabited_type", 48, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_none_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    return 1;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_none_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_none_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_none_type", 51, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_none_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_none_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_none_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_none_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_none_type__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_erased_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    return 1;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_erased_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_erased_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_erased_type", 54, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_erased_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_erased_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_erased_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_erased_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_erased_type__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_deleted_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    return 1;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_deleted_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_deleted_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_deleted_type", 57, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_deleted_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_deleted_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_deleted_type__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    return 1;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_type_var", 60, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    return 1;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_param_spec(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_param_spec", 66, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_param_spec__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_param_spec(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_param_spec__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_param_spec__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_param_spec__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_parameters(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___ParametersObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_typetraverser___TypeTraverserVisitor___traverse_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_parameters", 70, CPyStatic_typetraverser___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_parameters(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_parameters", 69, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_parameters__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_parameters(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_parameters__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_parameters__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_parameters__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    return 1;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var_tuple(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_type_var_tuple", 72, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var_tuple(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var_tuple__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_type_var_tuple__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___LiteralTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_types___Instance___accept(cpy_r_r0, cpy_r_self);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_literal_type", 76, CPyStatic_typetraverser___globals);
        goto CPyL2;
    } else
        goto CPyL3;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
CPyL3: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_literal_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_literal_type", 75, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_literal_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_literal_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_literal_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_literal_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_literal_type__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_typetraverser___TypeTraverserVisitor___traverse_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_instance", 81, CPyStatic_typetraverser___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_instance(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_instance", 80, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_typetraverser___TypeTraverserVisitor___traverse_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_callable_type", 85, CPyStatic_typetraverser___globals);
        goto CPyL4;
    }
    cpy_r_r2 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_r2, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r2, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_callable_type", 86, CPyStatic_typetraverser___globals);
        goto CPyL4;
    } else
        goto CPyL5;
CPyL2: ;
    cpy_r_r4 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_types___Instance___accept(cpy_r_r4, cpy_r_self);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_callable_type", 87, CPyStatic_typetraverser___globals);
        goto CPyL4;
    } else
        goto CPyL6;
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
CPyL5: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL2;
CPyL6: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL3;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_callable_type", 83, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_typetraverser___TypeTraverserVisitor___traverse_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_tuple_type", 90, CPyStatic_typetraverser___globals);
        goto CPyL3;
    }
    cpy_r_r2 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_partial_fallback;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_types___Instance___accept(cpy_r_r2, cpy_r_self);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_tuple_type", 91, CPyStatic_typetraverser___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
CPyL4: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_tuple_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_tuple_type", 89, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_tuple_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_tuple_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_tuple_type__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDict_ValuesView(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_typeddict_type", 94, CPyStatic_typetraverser___globals);
        goto CPyL4;
    }
    cpy_r_r2 = CPyDef_typetraverser___TypeTraverserVisitor___traverse_types(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_typeddict_type", 94, CPyStatic_typetraverser___globals);
        goto CPyL4;
    }
    cpy_r_r3 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_types___Instance___accept(cpy_r_r3, cpy_r_self);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_typeddict_type", 95, CPyStatic_typetraverser___globals);
        goto CPyL4;
    } else
        goto CPyL5;
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
CPyL5: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL3;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_typeddict_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_typeddict_type", 93, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_typeddict_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_typeddict_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_typeddict_type__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_typetraverser___TypeTraverserVisitor___traverse_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_union_type", 98, CPyStatic_typetraverser___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_union_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_union_type", 97, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_union_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_t, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_overloaded", 101, CPyStatic_typetraverser___globals);
        goto CPyL3;
    }
CPyL1: ;
    cpy_r_r1 = CPyDef_typetraverser___TypeTraverserVisitor___traverse_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_overloaded", 101, CPyStatic_typetraverser___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_overloaded(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_overloaded", 100, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_overloaded__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_overloaded(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_overloaded__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_overloaded__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_overloaded__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_type_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___TypeTypeObject *)cpy_r_t)->_item;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_type_type", 104, CPyStatic_typetraverser___globals);
        goto CPyL2;
    } else
        goto CPyL3;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
CPyL3: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_type_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_type_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_type_type", 103, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_type_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_type_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_type_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_type_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_type_type__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_argument(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___CallableArgumentObject *)cpy_r_t)->_typ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_callable_argument", 109, CPyStatic_typetraverser___globals);
        goto CPyL2;
    } else
        goto CPyL3;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
CPyL3: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_callable_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_argument", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableArgument))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableArgument", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_argument(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_callable_argument", 108, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_argument__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_argument(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_callable_argument__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_argument__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableArgument))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableArgument", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_argument__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_callable_argument__SyntheticTypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_unbound_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___UnboundTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_typetraverser___TypeTraverserVisitor___traverse_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_unbound_type", 112, CPyStatic_typetraverser___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_unbound_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_unbound_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_unbound_type", 111, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_unbound_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_unbound_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_unbound_type__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_type_list(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___TypeListObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_typetraverser___TypeTraverserVisitor___traverse_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_type_list", 115, CPyStatic_typetraverser___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_type_list(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_list", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeList))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeList", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_type_list(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_type_list", 114, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_type_list__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_type_list(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_type_list__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_list__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeList))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeList", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_type_list__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_type_list__SyntheticTypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_ellipsis_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    return 1;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_ellipsis_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___EllipsisType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.EllipsisType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_ellipsis_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_ellipsis_type", 117, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_ellipsis_type__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_ellipsis_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_ellipsis_type__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis_type__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___EllipsisType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.EllipsisType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_ellipsis_type__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_ellipsis_type__SyntheticTypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_placeholder_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___PlaceholderTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_typetraverser___TypeTraverserVisitor___traverse_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_placeholder_type", 121, CPyStatic_typetraverser___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_placeholder_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_placeholder_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PlaceholderType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PlaceholderType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_placeholder_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_placeholder_type", 120, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_placeholder_type__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_placeholder_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_placeholder_type__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_placeholder_type__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PlaceholderType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PlaceholderType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_placeholder_type__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_placeholder_type__SyntheticTypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_partial_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    return 1;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_partial_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_partial_type", 123, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_partial_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_partial_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_partial_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_partial_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_partial_type__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_raw_expression_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    return 1;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_raw_expression_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_raw_expression_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___RawExpressionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.RawExpressionType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_raw_expression_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_raw_expression_type", 126, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_raw_expression_type__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_raw_expression_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_raw_expression_type__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_raw_expression_type__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___RawExpressionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.RawExpressionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_raw_expression_type__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_raw_expression_type__SyntheticTypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_typetraverser___TypeTraverserVisitor___traverse_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_type_alias_type", 133, CPyStatic_typetraverser___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_type_alias_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_type_alias_type", 129, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___UnpackTypeObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "visit_unpack_type", 136, CPyStatic_typetraverser___globals);
        goto CPyL2;
    } else
        goto CPyL3;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
CPyL3: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_unpack_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_unpack_type", 135, CPyStatic_typetraverser___globals);
    return NULL;
}

PyObject *CPyDef_typetraverser___TypeTraverserVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_unpack_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_typetraverser___TypeTraverserVisitor___visit_unpack_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "visit_unpack_type__TypeVisitor_glue", -1, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser___TypeTraverserVisitor___traverse_types(PyObject *cpy_r_self, PyObject *cpy_r_types) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = PyObject_GetIter(cpy_r_types);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "traverse_types", 141, CPyStatic_typetraverser___globals);
        goto CPyL6;
    }
CPyL1: ;
    cpy_r_r1 = PyIter_Next(cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL7;
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/typetraverser.py", "traverse_types", 141, CPyStatic_typetraverser___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL8;
    }
    cpy_r_typ = cpy_r_r2;
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_typ, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_typ, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "traverse_types", 142, CPyStatic_typetraverser___globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL4: ;
    cpy_r_r4 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/typetraverser.py", "traverse_types", 141, CPyStatic_typetraverser___globals);
        goto CPyL6;
    }
    return 1;
CPyL6: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
CPyL7: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL9: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL1;
}

PyObject *CPyPy_typetraverser___TypeTraverserVisitor___traverse_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:traverse_types", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_typetraverser___TypeTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typetraverser.TypeTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_types = obj_types;
    char retval = CPyDef_typetraverser___TypeTraverserVisitor___traverse_types(arg_self, arg_types);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typetraverser.py", "traverse_types", 140, CPyStatic_typetraverser___globals);
    return NULL;
}

char CPyDef_typetraverser_____top_level__(void) {
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
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "<module>", -1, CPyStatic_typetraverser___globals);
        goto CPyL14;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_typetraverser___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "<module>", 1, CPyStatic_typetraverser___globals);
        goto CPyL14;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9766]; /* ('Iterable',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_typetraverser___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "<module>", 3, CPyStatic_typetraverser___globals);
        goto CPyL14;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9554]; /* ('trait',) */
    cpy_r_r14 = CPyStatics[599]; /* 'mypy_extensions' */
    cpy_r_r15 = CPyStatic_typetraverser___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "<module>", 5, CPyStatic_typetraverser___globals);
        goto CPyL14;
    }
    CPyModule_mypy_extensions = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9750]; /* ('AnyType', 'CallableArgument', 'CallableType',
                                     'DeletedType', 'EllipsisType', 'ErasedType', 'Instance',
                                     'LiteralType', 'NoneType', 'Overloaded', 'Parameters',
                                     'ParamSpecType', 'PartialType', 'PlaceholderType',
                                     'RawExpressionType', 'SyntheticTypeVisitor',
                                     'TupleType', 'Type', 'TypeAliasType', 'TypedDictType',
                                     'TypeList', 'TypeType', 'TypeVarTupleType',
                                     'TypeVarType', 'UnboundType', 'UninhabitedType',
                                     'UnionType', 'UnpackType') */
    cpy_r_r18 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r19 = CPyStatic_typetraverser___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "<module>", 7, CPyStatic_typetraverser___globals);
        goto CPyL14;
    }
    CPyModule_mypy___types = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = (PyObject *)CPyType_type_visitor___SyntheticTypeVisitor;
    cpy_r_r22 = Py_None;
    cpy_r_r23 = PyObject_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "<module>", 40, CPyStatic_typetraverser___globals);
        goto CPyL14;
    }
    cpy_r_r24 = PyTuple_Pack(1, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "<module>", 40, CPyStatic_typetraverser___globals);
        goto CPyL14;
    }
    cpy_r_r25 = CPyStatics[1081]; /* 'mypy.typetraverser' */
    cpy_r_r26 = (PyObject *)CPyType_typetraverser___TypeTraverserVisitor_template;
    cpy_r_r27 = CPyType_FromTemplate(cpy_r_r26, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "<module>", 40, CPyStatic_typetraverser___globals);
        goto CPyL14;
    }
    cpy_r_r28 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r29 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r30 = PyTuple_Pack(1, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/typetraverser.py", "<module>", 40, CPyStatic_typetraverser___globals);
        goto CPyL15;
    }
    cpy_r_r31 = PyObject_SetAttr(cpy_r_r27, cpy_r_r28, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/typetraverser.py", "<module>", 40, CPyStatic_typetraverser___globals);
        goto CPyL15;
    }
    CPyType_typetraverser___TypeTraverserVisitor = (PyTypeObject *)cpy_r_r27;
    CPy_INCREF(CPyType_typetraverser___TypeTraverserVisitor);
    cpy_r_r33 = CPyStatic_typetraverser___globals;
    cpy_r_r34 = CPyStatics[1080]; /* 'TypeTraverserVisitor' */
    cpy_r_r35 = CPyDict_SetItem(cpy_r_r33, cpy_r_r34, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/typetraverser.py", "<module>", 40, CPyStatic_typetraverser___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r37 = 2;
    return cpy_r_r37;
CPyL15: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL14;
}
