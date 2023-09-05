#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef copytype___TypeShallowCopier_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___copytype___TypeShallowCopierObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___copytype___TypeShallowCopierObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *copytype___TypeShallowCopier_setup(PyTypeObject *type);
PyObject *CPyDef_copytype___TypeShallowCopier(void);

static PyObject *
copytype___TypeShallowCopier_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_copytype___TypeShallowCopier) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return copytype___TypeShallowCopier_setup(type);
}

static int
copytype___TypeShallowCopier_traverse(mypy___copytype___TypeShallowCopierObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___copytype___TypeShallowCopierObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___copytype___TypeShallowCopierObject))));
    return 0;
}

static int
copytype___TypeShallowCopier_clear(mypy___copytype___TypeShallowCopierObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___copytype___TypeShallowCopierObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___copytype___TypeShallowCopierObject))));
    return 0;
}

static void
copytype___TypeShallowCopier_dealloc(mypy___copytype___TypeShallowCopierObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, copytype___TypeShallowCopier_dealloc)
    copytype___TypeShallowCopier_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem copytype___TypeShallowCopier_vtable[25];
static CPyVTableItem copytype___TypeShallowCopier_type_visitor___TypeVisitor_trait_vtable[21];
static size_t copytype___TypeShallowCopier_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_copytype___TypeShallowCopier_trait_vtable_setup(void)
{
    CPyVTableItem copytype___TypeShallowCopier_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(copytype___TypeShallowCopier_type_visitor___TypeVisitor_trait_vtable, copytype___TypeShallowCopier_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(copytype___TypeShallowCopier_type_visitor___TypeVisitor_trait_vtable));
    size_t copytype___TypeShallowCopier_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(copytype___TypeShallowCopier_type_visitor___TypeVisitor_offset_table, copytype___TypeShallowCopier_type_visitor___TypeVisitor_offset_table_scratch, sizeof(copytype___TypeShallowCopier_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem copytype___TypeShallowCopier_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)copytype___TypeShallowCopier_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)copytype___TypeShallowCopier_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_unbound_type,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_any,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_none_type,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_erased_type,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_deleted_type,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_instance,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_type_var,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_param_spec,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_parameters,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_unpack_type,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_partial_type,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_callable_type,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_tuple_type,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_typeddict_type,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_literal_type,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_union_type,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_overloaded,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_type_type,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___visit_type_alias_type,
        (CPyVTableItem)CPyDef_copytype___TypeShallowCopier___copy_common,
    };
    memcpy(copytype___TypeShallowCopier_vtable, copytype___TypeShallowCopier_vtable_scratch, sizeof(copytype___TypeShallowCopier_vtable));
    return 1;
}


static PyGetSetDef copytype___TypeShallowCopier_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef copytype___TypeShallowCopier_methods[] = {
    {"visit_unbound_type",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_unbound_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_none_type",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_none_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_erased_type",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_erased_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_deleted_type",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_deleted_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_parameters",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_parameters,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_partial_type",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_partial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_literal_type",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_type",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_type_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"copy_common",
     (PyCFunction)CPyPy_copytype___TypeShallowCopier___copy_common,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_copytype___TypeShallowCopier_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeShallowCopier",
    .tp_new = copytype___TypeShallowCopier_new,
    .tp_dealloc = (destructor)copytype___TypeShallowCopier_dealloc,
    .tp_traverse = (traverseproc)copytype___TypeShallowCopier_traverse,
    .tp_clear = (inquiry)copytype___TypeShallowCopier_clear,
    .tp_getset = copytype___TypeShallowCopier_getseters,
    .tp_methods = copytype___TypeShallowCopier_methods,
    .tp_members = copytype___TypeShallowCopier_members,
    .tp_basicsize = sizeof(mypy___copytype___TypeShallowCopierObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___copytype___TypeShallowCopierObject),
    .tp_weaklistoffset = sizeof(mypy___copytype___TypeShallowCopierObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_copytype___TypeShallowCopier_template = &CPyType_copytype___TypeShallowCopier_template_;

static PyObject *
copytype___TypeShallowCopier_setup(PyTypeObject *type)
{
    mypy___copytype___TypeShallowCopierObject *self;
    self = (mypy___copytype___TypeShallowCopierObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = copytype___TypeShallowCopier_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_copytype___TypeShallowCopier(void)
{
    PyObject *self = copytype___TypeShallowCopier_setup(CPyType_copytype___TypeShallowCopier);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef copytypemodule_methods[] = {
    {"copy_type", (PyCFunction)CPyPy_copytype___copy_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef copytypemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.copytype",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    copytypemodule_methods
};

PyObject *CPyInit_mypy___copytype(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___copytype_internal) {
        Py_INCREF(CPyModule_mypy___copytype_internal);
        return CPyModule_mypy___copytype_internal;
    }
    CPyModule_mypy___copytype_internal = PyModule_Create(&copytypemodule);
    if (unlikely(CPyModule_mypy___copytype_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___copytype_internal, "__name__");
    CPyStatic_copytype___globals = PyModule_GetDict(CPyModule_mypy___copytype_internal);
    if (unlikely(CPyStatic_copytype___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_copytype_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___copytype_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___copytype_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_copytype___TypeShallowCopier);
    return NULL;
}

PyObject *CPyDef_copytype___copy_type(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "copy_type", 42, CPyStatic_copytype___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_t, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t, cpy_r_r0); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "copy_type", 42, CPyStatic_copytype___globals);
        goto CPyL4;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___ProperType)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/copytype.py", "copy_type", 42, CPyStatic_copytype___globals, "mypy.types.ProperType", cpy_r_r1);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_copytype___copy_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:copy_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___ProperType)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___copy_type(arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "copy_type", 34, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_unbound_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_unbound_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_unbound_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_unbound_type", 46, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_unbound_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_unbound_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_unbound_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_unbound_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_unbound_type__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___types___AnyTypeObject *)cpy_r_t)->_type_of_any;
    CPyTagged_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___AnyTypeObject *)cpy_r_t)->_source_any;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___types___AnyTypeObject *)cpy_r_t)->_missing_import_name;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_types___AnyType(cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_any", 50, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_r6 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_any", 50, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_any(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_any", 49, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_none_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_types___NoneType(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_none_type", 53, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_none_type", 53, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_none_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_none_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_none_type", 52, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_none_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_none_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_none_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_none_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_none_type__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_dup;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___types___UninhabitedTypeObject *)cpy_r_t)->_is_noreturn;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPyDef_types___UninhabitedType(cpy_r_r0, cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_uninhabited_type", 56, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_dup = cpy_r_r3;
    cpy_r_r4 = ((mypy___types___UninhabitedTypeObject *)cpy_r_t)->_ambiguous;
    ((mypy___types___UninhabitedTypeObject *)cpy_r_dup)->_ambiguous = cpy_r_r4;
    cpy_r_r6 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_dup);
    CPy_DECREF(cpy_r_dup);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_uninhabited_type", 58, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_uninhabited_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_uninhabited_type", 55, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_erased_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_types___ErasedType(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_erased_type", 61, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_erased_type", 61, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_erased_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_erased_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_erased_type", 60, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_erased_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_erased_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_erased_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_erased_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_erased_type__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_deleted_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___types___DeletedTypeObject *)cpy_r_t)->_source;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPyDef_types___DeletedType(cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_deleted_type", 64, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_r4 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_deleted_type", 64, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_deleted_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_deleted_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_deleted_type", 63, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_deleted_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_deleted_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_deleted_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_deleted_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_deleted_type__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_dup;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___types___InstanceObject *)cpy_r_t)->_last_known_value;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_types___Instance(cpy_r_r0, cpy_r_r1, cpy_r_r3, cpy_r_r4, cpy_r_r2, cpy_r_r5);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_instance", 67, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_dup = cpy_r_r6;
    cpy_r_r7 = ((mypy___types___InstanceObject *)cpy_r_t)->_invalid;
    ((mypy___types___InstanceObject *)cpy_r_dup)->_invalid = cpy_r_r7;
    cpy_r_r9 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_dup);
    CPy_DECREF(cpy_r_dup);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_instance", 69, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r9;
CPyL3: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_instance(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_instance", 66, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_type_var", 72, CPyStatic_copytype___globals);
        goto CPyL4;
    }
    cpy_r_r1 = NULL;
    cpy_r_r2 = NULL;
    cpy_r_r3 = NULL;
    cpy_r_r4 = NULL;
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPyDef_types___TypeVarType___copy_modified(cpy_r_t, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_type_var", 72, CPyStatic_copytype___globals);
        goto CPyL4;
    }
    cpy_r_r8 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_type_var", 72, CPyStatic_copytype___globals);
        goto CPyL4;
    }
    return cpy_r_r8;
CPyL4: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_type_var(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_type_var", 71, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_dup;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_fullname;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_id;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_flavor;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_upper_bound;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_default;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_prefix;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = CPyDef_types___ParamSpecType(cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r7, cpy_r_r8, cpy_r_r6);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_param_spec", 75, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_dup = cpy_r_r9;
    cpy_r_r10 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_dup);
    CPy_DECREF(cpy_r_dup);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_param_spec", 78, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r10;
CPyL3: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_param_spec(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_param_spec", 74, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_param_spec__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_param_spec(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_param_spec__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_param_spec__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_param_spec__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_parameters(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_dup;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((mypy___types___ParametersObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___ParametersObject *)cpy_r_t)->_arg_kinds;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___types___ParametersObject *)cpy_r_t)->_arg_names;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___types___ParametersObject *)cpy_r_t)->_variables;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___types___ParametersObject *)cpy_r_t)->_is_ellipsis_args;
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPyDef_types___Parameters(cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_parameters", 81, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_dup = cpy_r_r7;
    cpy_r_r8 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_dup);
    CPy_DECREF(cpy_r_dup);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_parameters", 88, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r8;
CPyL3: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_parameters(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_parameters", 80, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_parameters__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_parameters(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_parameters__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_parameters__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_parameters__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_dup;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_t)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_t)->_fullname;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_t)->_id;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_t)->_upper_bound;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_t)->_tuple_fallback;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_t)->_default;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = CPyDef_types___TypeVarTupleType(cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_type_var_tuple", 91, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_dup = cpy_r_r8;
    cpy_r_r9 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_dup);
    CPy_DECREF(cpy_r_dup);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_type_var_tuple", 94, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r9;
CPyL3: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_type_var_tuple(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_type_var_tuple", 90, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_type_var_tuple__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_type_var_tuple(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_type_var_tuple__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_type_var_tuple__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_type_var_tuple__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_dup;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___types___UnpackTypeObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPyDef_types___UnpackType(cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_unpack_type", 97, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_dup = cpy_r_r3;
    cpy_r_r4 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_dup);
    CPy_DECREF(cpy_r_dup);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_unpack_type", 98, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_unpack_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_unpack_type", 96, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_unpack_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_unpack_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_unpack_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_unpack_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_unpack_type__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_partial_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___types___PartialTypeObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___PartialTypeObject *)cpy_r_t)->_var;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___types___PartialTypeObject *)cpy_r_t)->_value_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_types___PartialType(cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_partial_type", 101, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_r4 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_partial_type", 101, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_partial_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_partial_type", 100, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_partial_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_partial_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_partial_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_partial_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_partial_type__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_r9;
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
    cpy_r_r0 = NULL;
    cpy_r_r1 = NULL;
    cpy_r_r2 = NULL;
    cpy_r_r3 = NULL;
    cpy_r_r4 = NULL;
    cpy_r_r5 = NULL;
    cpy_r_r6 = NULL;
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = NULL;
    cpy_r_r11 = NULL;
    cpy_r_r12 = NULL;
    cpy_r_r13 = NULL;
    cpy_r_r14 = NULL;
    cpy_r_r15 = NULL;
    cpy_r_r16 = NULL;
    cpy_r_r17 = NULL;
    cpy_r_r18 = NULL;
    cpy_r_r19 = CPyDef_types___CallableType___copy_modified(cpy_r_t, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_callable_type", 104, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_r20 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_callable_type", 104, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r20;
CPyL3: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_callable_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_callable_type", 103, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_partial_fallback;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_implicit;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_types___TupleType(cpy_r_r0, cpy_r_r1, cpy_r_r3, cpy_r_r4, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_tuple_type", 107, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_r6 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_tuple_type", 107, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_tuple_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_tuple_type", 106, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_tuple_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_tuple_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_tuple_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_tuple_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_tuple_type__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_required_keys;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_types___TypedDictType(cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_typeddict_type", 110, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_r6 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_typeddict_type", 110, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_typeddict_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_typeddict_type", 109, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_typeddict_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_typeddict_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_typeddict_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_typeddict_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_typeddict_type__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___types___LiteralTypeObject *)cpy_r_t)->_value;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___LiteralTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_types___LiteralType(cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_literal_type", 113, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_r5 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_literal_type", 113, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_literal_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_literal_type", 112, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_literal_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_literal_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_literal_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_literal_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_literal_type__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = 2;
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_types___UnionType(cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_union_type", 116, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_r6 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_union_type", 116, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_union_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_union_type", 115, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_union_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_t, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_overloaded", 119, CPyStatic_copytype___globals);
        goto CPyL4;
    }
CPyL1: ;
    cpy_r_r1 = CPyDef_types___Overloaded(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_overloaded", 119, CPyStatic_copytype___globals);
        goto CPyL4;
    }
    cpy_r_r2 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_overloaded", 119, CPyStatic_copytype___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_overloaded(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_overloaded", 118, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_overloaded__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_overloaded(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_overloaded__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_overloaded__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_overloaded__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_type_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___types___TypeTypeObject *)cpy_r_t)->_item;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPyDef_types___TypeType(cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_type_type", 123, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    cpy_r_r4 = CPyDef_copytype___TypeShallowCopier___copy_common(cpy_r_self, cpy_r_t, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_type_type", 123, CPyStatic_copytype___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_type_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_type_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_type_type", 121, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_type_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_type_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_type_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_type_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_type_type__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "only ProperTypes supported");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/copytype.py", "visit_type_alias_type", 126, CPyStatic_copytype___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_type_alias_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_type_alias_type", 125, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_copytype___TypeShallowCopier___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_copytype___TypeShallowCopier___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_copytype___globals);
    return NULL;
}

PyObject *CPyDef_copytype___TypeShallowCopier___copy_common(PyObject *cpy_r_self, PyObject *cpy_r_t, PyObject *cpy_r_t2) {
    CPyTagged cpy_r_r0;
    char cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypy___types___ProperTypeObject *)cpy_r_t)->_line;
    CPyTagged_INCREF(cpy_r_r0);
    CPyTagged_DECREF(((mypy___types___ProperTypeObject *)cpy_r_t2)->_line);
    ((mypy___types___ProperTypeObject *)cpy_r_t2)->_line = cpy_r_r0;
    cpy_r_r2 = ((mypy___types___ProperTypeObject *)cpy_r_t)->_column;
    CPyTagged_INCREF(cpy_r_r2);
    CPyTagged_DECREF(((mypy___types___ProperTypeObject *)cpy_r_t2)->_column);
    ((mypy___types___ProperTypeObject *)cpy_r_t2)->_column = cpy_r_r2;
    cpy_r_r4 = CPY_GET_ATTR(cpy_r_t, CPyType_types___ProperType, 5, mypy___types___ProperTypeObject, char); /* can_be_false */
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/copytype.py", "copy_common", 131, CPyStatic_copytype___globals);
        goto CPyL5;
    }
CPyL1: ;
    cpy_r_r5 = CPY_SET_ATTR(cpy_r_t2, CPyType_types___ProperType, 6, cpy_r_r4, mypy___types___ProperTypeObject, char); /* can_be_false */
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/copytype.py", "copy_common", 131, CPyStatic_copytype___globals);
        goto CPyL5;
    }
    cpy_r_r6 = CPY_GET_ATTR(cpy_r_t, CPyType_types___ProperType, 3, mypy___types___ProperTypeObject, char); /* can_be_true */
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/copytype.py", "copy_common", 132, CPyStatic_copytype___globals);
        goto CPyL5;
    }
CPyL3: ;
    cpy_r_r7 = CPY_SET_ATTR(cpy_r_t2, CPyType_types___ProperType, 4, cpy_r_r6, mypy___types___ProperTypeObject, char); /* can_be_true */
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/copytype.py", "copy_common", 132, CPyStatic_copytype___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_t2);
    return cpy_r_t2;
CPyL5: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_copytype___TypeShallowCopier___copy_common(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", "t2", 0};
    static CPyArg_Parser parser = {"OO:copy_common", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_t2;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_t, &obj_t2)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_copytype___TypeShallowCopier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.copytype.TypeShallowCopier", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___ProperType)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_t); 
        goto fail;
    }
    PyObject *arg_t2;
    if (likely(PyObject_TypeCheck(obj_t2, CPyType_types___ProperType)))
        arg_t2 = obj_t2;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_t2); 
        goto fail;
    }
    PyObject *retval = CPyDef_copytype___TypeShallowCopier___copy_common(arg_self, arg_t, arg_t2);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/copytype.py", "copy_common", 128, CPyStatic_copytype___globals);
    return NULL;
}

char CPyDef_copytype_____top_level__(void) {
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
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "<module>", -1, CPyStatic_copytype___globals);
        goto CPyL15;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_copytype___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "<module>", 1, CPyStatic_copytype___globals);
        goto CPyL15;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9297]; /* ('Any', 'cast') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_copytype___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "<module>", 3, CPyStatic_copytype___globals);
        goto CPyL15;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9298]; /* ('AnyType', 'CallableType', 'DeletedType', 'ErasedType',
                                     'Instance', 'LiteralType', 'NoneType', 'Overloaded',
                                     'Parameters', 'ParamSpecType', 'PartialType',
                                     'ProperType', 'TupleType', 'TypeAliasType',
                                     'TypedDictType', 'TypeType', 'TypeVarTupleType',
                                     'TypeVarType', 'UnboundType', 'UninhabitedType',
                                     'UnionType', 'UnpackType') */
    cpy_r_r14 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r15 = CPyStatic_copytype___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "<module>", 5, CPyStatic_copytype___globals);
        goto CPyL15;
    }
    CPyModule_mypy___types = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9299]; /* ('TypeVisitor',) */
    cpy_r_r18 = CPyStatics[1267]; /* 'mypy.type_visitor' */
    cpy_r_r19 = CPyStatic_copytype___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "<module>", 31, CPyStatic_copytype___globals);
        goto CPyL15;
    }
    CPyModule_mypy___type_visitor = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___type_visitor);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = (PyObject *)CPyType_type_visitor___TypeVisitor;
    cpy_r_r22 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r23 = PyObject_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "<module>", 45, CPyStatic_copytype___globals);
        goto CPyL15;
    }
    cpy_r_r24 = PyTuple_Pack(1, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "<module>", 45, CPyStatic_copytype___globals);
        goto CPyL15;
    }
    cpy_r_r25 = CPyStatics[1636]; /* 'mypy.copytype' */
    cpy_r_r26 = (PyObject *)CPyType_copytype___TypeShallowCopier_template;
    cpy_r_r27 = CPyType_FromTemplate(cpy_r_r26, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "<module>", 45, CPyStatic_copytype___globals);
        goto CPyL15;
    }
    cpy_r_r28 = CPyDef_copytype___TypeShallowCopier_trait_vtable_setup();
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/copytype.py", "<module>", -1, CPyStatic_copytype___globals);
        goto CPyL16;
    }
    cpy_r_r29 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r30 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r31 = PyTuple_Pack(1, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/copytype.py", "<module>", 45, CPyStatic_copytype___globals);
        goto CPyL16;
    }
    cpy_r_r32 = PyObject_SetAttr(cpy_r_r27, cpy_r_r29, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/copytype.py", "<module>", 45, CPyStatic_copytype___globals);
        goto CPyL16;
    }
    CPyType_copytype___TypeShallowCopier = (PyTypeObject *)cpy_r_r27;
    CPy_INCREF(CPyType_copytype___TypeShallowCopier);
    cpy_r_r34 = CPyStatic_copytype___globals;
    cpy_r_r35 = CPyStatics[1637]; /* 'TypeShallowCopier' */
    cpy_r_r36 = CPyDict_SetItem(cpy_r_r34, cpy_r_r35, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/copytype.py", "<module>", 45, CPyStatic_copytype___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r38 = 2;
    return cpy_r_r38;
CPyL16: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL15;
}
