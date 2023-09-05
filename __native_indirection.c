#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
indirection___TypeIndirectionVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef indirection___TypeIndirectionVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___indirection___TypeIndirectionVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___indirection___TypeIndirectionVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *indirection___TypeIndirectionVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_indirection___TypeIndirectionVisitor(void);

static PyObject *
indirection___TypeIndirectionVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_indirection___TypeIndirectionVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = indirection___TypeIndirectionVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_indirection___TypeIndirectionVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
indirection___TypeIndirectionVisitor_traverse(mypy___indirection___TypeIndirectionVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_cache);
    Py_VISIT(self->_seen_aliases);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___indirection___TypeIndirectionVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___indirection___TypeIndirectionVisitorObject))));
    return 0;
}

static int
indirection___TypeIndirectionVisitor_clear(mypy___indirection___TypeIndirectionVisitorObject *self)
{
    Py_CLEAR(self->_cache);
    Py_CLEAR(self->_seen_aliases);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___indirection___TypeIndirectionVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___indirection___TypeIndirectionVisitorObject))));
    return 0;
}

static void
indirection___TypeIndirectionVisitor_dealloc(mypy___indirection___TypeIndirectionVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, indirection___TypeIndirectionVisitor_dealloc)
    indirection___TypeIndirectionVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem indirection___TypeIndirectionVisitor_vtable[27];
static CPyVTableItem indirection___TypeIndirectionVisitor_type_visitor___TypeVisitor_trait_vtable[21];
static size_t indirection___TypeIndirectionVisitor_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_indirection___TypeIndirectionVisitor_trait_vtable_setup(void)
{
    CPyVTableItem indirection___TypeIndirectionVisitor_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(indirection___TypeIndirectionVisitor_type_visitor___TypeVisitor_trait_vtable, indirection___TypeIndirectionVisitor_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(indirection___TypeIndirectionVisitor_type_visitor___TypeVisitor_trait_vtable));
    size_t indirection___TypeIndirectionVisitor_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(indirection___TypeIndirectionVisitor_type_visitor___TypeVisitor_offset_table, indirection___TypeIndirectionVisitor_type_visitor___TypeVisitor_offset_table_scratch, sizeof(indirection___TypeIndirectionVisitor_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem indirection___TypeIndirectionVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)indirection___TypeIndirectionVisitor_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)indirection___TypeIndirectionVisitor_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor_____init__,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___find_modules,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor____visit,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_unbound_type,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_any,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_none_type,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_erased_type,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_deleted_type,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_type_var,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_param_spec,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_unpack_type,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_parameters,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_instance,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_callable_type,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_overloaded,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_tuple_type,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_typeddict_type,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_literal_type,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_union_type,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_partial_type,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_type_type,
        (CPyVTableItem)CPyDef_indirection___TypeIndirectionVisitor___visit_type_alias_type,
    };
    memcpy(indirection___TypeIndirectionVisitor_vtable, indirection___TypeIndirectionVisitor_vtable_scratch, sizeof(indirection___TypeIndirectionVisitor_vtable));
    return 1;
}

static PyObject *
indirection___TypeIndirectionVisitor_get_cache(mypy___indirection___TypeIndirectionVisitorObject *self, void *closure);
static int
indirection___TypeIndirectionVisitor_set_cache(mypy___indirection___TypeIndirectionVisitorObject *self, PyObject *value, void *closure);
static PyObject *
indirection___TypeIndirectionVisitor_get_seen_aliases(mypy___indirection___TypeIndirectionVisitorObject *self, void *closure);
static int
indirection___TypeIndirectionVisitor_set_seen_aliases(mypy___indirection___TypeIndirectionVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef indirection___TypeIndirectionVisitor_getseters[] = {
    {"cache",
     (getter)indirection___TypeIndirectionVisitor_get_cache, (setter)indirection___TypeIndirectionVisitor_set_cache,
     NULL, NULL},
    {"seen_aliases",
     (getter)indirection___TypeIndirectionVisitor_get_seen_aliases, (setter)indirection___TypeIndirectionVisitor_set_seen_aliases,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef indirection___TypeIndirectionVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"find_modules",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___find_modules,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_visit",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor____visit,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unbound_type",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_unbound_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_none_type",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_none_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_erased_type",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_erased_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_deleted_type",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_deleted_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_parameters",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_parameters,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_literal_type",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_partial_type",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_partial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_type",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_type_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_indirection___TypeIndirectionVisitor___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_indirection___TypeIndirectionVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeIndirectionVisitor",
    .tp_new = indirection___TypeIndirectionVisitor_new,
    .tp_dealloc = (destructor)indirection___TypeIndirectionVisitor_dealloc,
    .tp_traverse = (traverseproc)indirection___TypeIndirectionVisitor_traverse,
    .tp_clear = (inquiry)indirection___TypeIndirectionVisitor_clear,
    .tp_getset = indirection___TypeIndirectionVisitor_getseters,
    .tp_methods = indirection___TypeIndirectionVisitor_methods,
    .tp_init = indirection___TypeIndirectionVisitor_init,
    .tp_members = indirection___TypeIndirectionVisitor_members,
    .tp_basicsize = sizeof(mypy___indirection___TypeIndirectionVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___indirection___TypeIndirectionVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___indirection___TypeIndirectionVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_indirection___TypeIndirectionVisitor_template = &CPyType_indirection___TypeIndirectionVisitor_template_;

static PyObject *
indirection___TypeIndirectionVisitor_setup(PyTypeObject *type)
{
    mypy___indirection___TypeIndirectionVisitorObject *self;
    self = (mypy___indirection___TypeIndirectionVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = indirection___TypeIndirectionVisitor_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor(void)
{
    PyObject *self = indirection___TypeIndirectionVisitor_setup(CPyType_indirection___TypeIndirectionVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_indirection___TypeIndirectionVisitor_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
indirection___TypeIndirectionVisitor_get_cache(mypy___indirection___TypeIndirectionVisitorObject *self, void *closure)
{
    if (unlikely(self->_cache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'cache' of 'TypeIndirectionVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_cache);
    PyObject *retval = self->_cache;
    return retval;
}

static int
indirection___TypeIndirectionVisitor_set_cache(mypy___indirection___TypeIndirectionVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeIndirectionVisitor' object attribute 'cache' cannot be deleted");
        return -1;
    }
    if (self->_cache != NULL) {
        CPy_DECREF(self->_cache);
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
    self->_cache = tmp;
    return 0;
}

static PyObject *
indirection___TypeIndirectionVisitor_get_seen_aliases(mypy___indirection___TypeIndirectionVisitorObject *self, void *closure)
{
    if (unlikely(self->_seen_aliases == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'seen_aliases' of 'TypeIndirectionVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_seen_aliases);
    PyObject *retval = self->_seen_aliases;
    return retval;
}

static int
indirection___TypeIndirectionVisitor_set_seen_aliases(mypy___indirection___TypeIndirectionVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeIndirectionVisitor' object attribute 'seen_aliases' cannot be deleted");
        return -1;
    }
    if (self->_seen_aliases != NULL) {
        CPy_DECREF(self->_seen_aliases);
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
    self->_seen_aliases = tmp;
    return 0;
}
static PyMethodDef indirectionmodule_methods[] = {
    {"extract_module_names", (PyCFunction)CPyPy_indirection___extract_module_names, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef indirectionmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.indirection",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    indirectionmodule_methods
};

PyObject *CPyInit_mypy___indirection(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___indirection_internal) {
        Py_INCREF(CPyModule_mypy___indirection_internal);
        return CPyModule_mypy___indirection_internal;
    }
    CPyModule_mypy___indirection_internal = PyModule_Create(&indirectionmodule);
    if (unlikely(CPyModule_mypy___indirection_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___indirection_internal, "__name__");
    CPyStatic_indirection___globals = PyModule_GetDict(CPyModule_mypy___indirection_internal);
    if (unlikely(CPyStatic_indirection___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_indirection_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___indirection_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___indirection_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_indirection___TypeIndirectionVisitor);
    return NULL;
}

PyObject *CPyDef_indirection___extract_module_names(PyObject *cpy_r_type_name) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_possible_module_names;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_type_name != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL6;
    CPy_INCREF(cpy_r_type_name);
    if (likely(cpy_r_type_name != Py_None))
        cpy_r_r2 = cpy_r_type_name;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "extract_module_names", 14, CPyStatic_indirection___globals, "str", cpy_r_type_name);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_mypy___util___split_module_names(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "extract_module_names", 14, CPyStatic_indirection___globals);
        goto CPyL8;
    }
    cpy_r_possible_module_names = cpy_r_r3;
    cpy_r_r4 = CPyList_GetSlice(cpy_r_possible_module_names, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_possible_module_names);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "extract_module_names", 15, CPyStatic_indirection___globals);
        goto CPyL8;
    }
    if (likely(PyList_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "extract_module_names", 15, CPyStatic_indirection___globals, "list", cpy_r_r4);
        goto CPyL8;
    }
    return cpy_r_r5;
CPyL6: ;
    cpy_r_r6 = PyList_New(0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "extract_module_names", 17, CPyStatic_indirection___globals);
        goto CPyL8;
    }
    return cpy_r_r6;
CPyL8: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_indirection___extract_module_names(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"type_name", 0};
    static CPyArg_Parser parser = {"O:extract_module_names", kwlist, 0};
    PyObject *obj_type_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_type_name)) {
        return NULL;
    }
    PyObject *arg_type_name;
    if (PyUnicode_Check(obj_type_name))
        arg_type_name = obj_type_name;
    else {
        arg_type_name = NULL;
    }
    if (arg_type_name != NULL) goto __LL2931;
    if (obj_type_name == Py_None)
        arg_type_name = obj_type_name;
    else {
        arg_type_name = NULL;
    }
    if (arg_type_name != NULL) goto __LL2931;
    CPy_TypeError("str or None", obj_type_name); 
    goto fail;
__LL2931: ;
    PyObject *retval = CPyDef_indirection___extract_module_names(arg_type_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "extract_module_names", 10, CPyStatic_indirection___globals);
    return NULL;
}

char CPyDef_indirection___TypeIndirectionVisitor_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "__init__", 24, CPyStatic_indirection___globals);
        goto CPyL5;
    }
    if (((mypy___indirection___TypeIndirectionVisitorObject *)cpy_r_self)->_cache != NULL) {
        CPy_DECREF(((mypy___indirection___TypeIndirectionVisitorObject *)cpy_r_self)->_cache);
    }
    ((mypy___indirection___TypeIndirectionVisitorObject *)cpy_r_self)->_cache = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/indirection.py", "__init__", 24, CPyStatic_indirection___globals);
        goto CPyL5;
    }
    cpy_r_r2 = PySet_New(NULL);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "__init__", 25, CPyStatic_indirection___globals);
        goto CPyL5;
    }
    if (((mypy___indirection___TypeIndirectionVisitorObject *)cpy_r_self)->_seen_aliases != NULL) {
        CPy_DECREF(((mypy___indirection___TypeIndirectionVisitorObject *)cpy_r_self)->_seen_aliases);
    }
    ((mypy___indirection___TypeIndirectionVisitorObject *)cpy_r_self)->_seen_aliases = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/indirection.py", "__init__", 25, CPyStatic_indirection___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    char retval = CPyDef_indirection___TypeIndirectionVisitor_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "__init__", 23, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___find_modules(PyObject *cpy_r_self, PyObject *cpy_r_typs) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = ((mypy___indirection___TypeIndirectionVisitorObject *)cpy_r_self)->_seen_aliases;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/indirection.py", "find_modules", "TypeIndirectionVisitor", "seen_aliases", 28, CPyStatic_indirection___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PySet_Clear(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/indirection.py", "find_modules", 28, CPyStatic_indirection___globals);
        goto CPyL4;
    }
    cpy_r_r3 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_typs);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "find_modules", 29, CPyStatic_indirection___globals);
        goto CPyL4;
    }
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___find_modules(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typs", 0};
    static CPyArg_Parser parser = {"O:find_modules", kwlist, 0};
    PyObject *obj_typs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typs)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typs = obj_typs;
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___find_modules(arg_self, arg_typs);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "find_modules", 27, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor____visit(PyObject *cpy_r_self, PyObject *cpy_r_typ_or_typs) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_typs;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_output;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_modules;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    cpy_r_r0 = (PyObject *)CPyType_types___Type;
    cpy_r_r1 = CPy_TypeCheck(cpy_r_typ_or_typs, cpy_r_r0);
    if (!cpy_r_r1) goto CPyL4;
    CPy_INCREF(cpy_r_typ_or_typs);
    if (likely(PyObject_TypeCheck(cpy_r_typ_or_typs, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_typ_or_typs;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "_visit", 32, CPyStatic_indirection___globals, "mypy.types.Type", cpy_r_typ_or_typs);
        goto CPyL32;
    }
    cpy_r_r3 = PyList_New(1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "_visit", 32, CPyStatic_indirection___globals);
        goto CPyL33;
    }
    cpy_r_r4 = (CPyPtr)&((PyListObject *)cpy_r_r3)->ob_item;
    cpy_r_r5 = *(CPyPtr *)cpy_r_r4;
    *(PyObject * *)cpy_r_r5 = cpy_r_r2;
    cpy_r_r6 = cpy_r_r3;
    goto CPyL5;
CPyL4: ;
    CPy_INCREF(cpy_r_typ_or_typs);
    cpy_r_r6 = cpy_r_typ_or_typs;
CPyL5: ;
    cpy_r_typs = cpy_r_r6;
    cpy_r_r7 = PySet_New(NULL);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "_visit", 33, CPyStatic_indirection___globals);
        goto CPyL34;
    }
    cpy_r_output = cpy_r_r7;
    cpy_r_r8 = PyObject_GetIter(cpy_r_typs);
    CPy_DECREF(cpy_r_typs);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "_visit", 34, CPyStatic_indirection___globals);
        goto CPyL35;
    }
CPyL7: ;
    cpy_r_r9 = PyIter_Next(cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL36;
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_types___Type)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "_visit", 34, CPyStatic_indirection___globals, "mypy.types.Type", cpy_r_r9);
        goto CPyL37;
    }
    cpy_r_typ = cpy_r_r10;
    cpy_r_r11 = (PyObject *)CPyType_types___TypeAliasType;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL17;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeAliasType))
        cpy_r_r15 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "_visit", 37, CPyStatic_indirection___globals, "mypy.types.TypeAliasType", cpy_r_typ);
        goto CPyL38;
    }
    cpy_r_r16 = ((mypy___indirection___TypeIndirectionVisitorObject *)cpy_r_self)->_seen_aliases;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/indirection.py", "_visit", "TypeIndirectionVisitor", "seen_aliases", 37, CPyStatic_indirection___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r16);
CPyL12: ;
    cpy_r_r17 = PySet_Contains(cpy_r_r16, cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/indirection.py", "_visit", 37, CPyStatic_indirection___globals);
        goto CPyL38;
    }
    cpy_r_r19 = cpy_r_r17;
    if (cpy_r_r19) goto CPyL40;
    cpy_r_r20 = ((mypy___indirection___TypeIndirectionVisitorObject *)cpy_r_self)->_seen_aliases;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/indirection.py", "_visit", "TypeIndirectionVisitor", "seen_aliases", 39, CPyStatic_indirection___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r20);
CPyL15: ;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeAliasType))
        cpy_r_r21 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "_visit", 39, CPyStatic_indirection___globals, "mypy.types.TypeAliasType", cpy_r_typ);
        goto CPyL41;
    }
    cpy_r_r22 = PySet_Add(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/indirection.py", "_visit", 39, CPyStatic_indirection___globals);
        goto CPyL38;
    }
CPyL17: ;
    cpy_r_r24 = ((mypy___indirection___TypeIndirectionVisitorObject *)cpy_r_self)->_cache;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/indirection.py", "_visit", "TypeIndirectionVisitor", "cache", 40, CPyStatic_indirection___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r24);
CPyL18: ;
    cpy_r_r25 = PyDict_Contains(cpy_r_r24, cpy_r_typ);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/indirection.py", "_visit", 40, CPyStatic_indirection___globals);
        goto CPyL38;
    }
    cpy_r_r27 = cpy_r_r25;
    if (!cpy_r_r27) goto CPyL24;
    cpy_r_r28 = ((mypy___indirection___TypeIndirectionVisitorObject *)cpy_r_self)->_cache;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/indirection.py", "_visit", "TypeIndirectionVisitor", "cache", 41, CPyStatic_indirection___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r28);
CPyL21: ;
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r28, cpy_r_typ);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "_visit", 41, CPyStatic_indirection___globals);
        goto CPyL37;
    }
    if (likely(PySet_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "_visit", 41, CPyStatic_indirection___globals, "set", cpy_r_r29);
        goto CPyL37;
    }
    cpy_r_modules = cpy_r_r30;
    goto CPyL29;
CPyL24: ;
    cpy_r_r31 = CPY_GET_METHOD(cpy_r_typ, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_typ, cpy_r_self); /* accept */
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "_visit", 43, CPyStatic_indirection___globals);
        goto CPyL38;
    }
    if (likely(PySet_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "_visit", 43, CPyStatic_indirection___globals, "set", cpy_r_r31);
        goto CPyL38;
    }
    cpy_r_modules = cpy_r_r32;
    cpy_r_r33 = PySet_New(cpy_r_modules);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "_visit", 44, CPyStatic_indirection___globals);
        goto CPyL42;
    }
    cpy_r_r34 = ((mypy___indirection___TypeIndirectionVisitorObject *)cpy_r_self)->_cache;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypy/indirection.py", "_visit", "TypeIndirectionVisitor", "cache", 44, CPyStatic_indirection___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r34);
CPyL28: ;
    cpy_r_r35 = CPyDict_SetItem(cpy_r_r34, cpy_r_typ, cpy_r_r33);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/indirection.py", "_visit", 44, CPyStatic_indirection___globals);
        goto CPyL44;
    }
CPyL29: ;
    cpy_r_r37 = _PySet_Update(cpy_r_output, cpy_r_modules);
    CPy_DECREF(cpy_r_modules);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/indirection.py", "_visit", 45, CPyStatic_indirection___globals);
        goto CPyL37;
    } else
        goto CPyL7;
CPyL30: ;
    cpy_r_r39 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/indirection.py", "_visit", 34, CPyStatic_indirection___globals);
        goto CPyL35;
    }
    return cpy_r_output;
CPyL32: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
CPyL33: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL32;
CPyL34: ;
    CPy_DecRef(cpy_r_typs);
    goto CPyL32;
CPyL35: ;
    CPy_DecRef(cpy_r_output);
    goto CPyL32;
CPyL36: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL30;
CPyL37: ;
    CPy_DecRef(cpy_r_output);
    CPy_DecRef(cpy_r_r8);
    goto CPyL32;
CPyL38: ;
    CPy_DecRef(cpy_r_output);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_typ);
    goto CPyL32;
CPyL39: ;
    CPy_DecRef(cpy_r_output);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r15);
    goto CPyL32;
CPyL40: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL7;
CPyL41: ;
    CPy_DecRef(cpy_r_output);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r20);
    goto CPyL32;
CPyL42: ;
    CPy_DecRef(cpy_r_output);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_modules);
    goto CPyL32;
CPyL43: ;
    CPy_DecRef(cpy_r_output);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r33);
    goto CPyL32;
CPyL44: ;
    CPy_DecRef(cpy_r_output);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_modules);
    goto CPyL32;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor____visit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ_or_typs", 0};
    static CPyArg_Parser parser = {"O:_visit", kwlist, 0};
    PyObject *obj_typ_or_typs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ_or_typs)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ_or_typs;
    if (PyObject_TypeCheck(obj_typ_or_typs, CPyType_types___Type))
        arg_typ_or_typs = obj_typ_or_typs;
    else {
        arg_typ_or_typs = NULL;
    }
    if (arg_typ_or_typs != NULL) goto __LL2932;
    arg_typ_or_typs = obj_typ_or_typs;
    if (arg_typ_or_typs != NULL) goto __LL2932;
    CPy_TypeError("union[mypy.types.Type, object]", obj_typ_or_typs); 
    goto fail;
__LL2932: ;
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor____visit(arg_self, arg_typ_or_typs);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "_visit", 31, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_unbound_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___types___UnboundTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_unbound_type", 49, CPyStatic_indirection___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_unbound_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_unbound_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_unbound_type", 48, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_unbound_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_unbound_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_unbound_type__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_any", 52, CPyStatic_indirection___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_any(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_any", 51, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_none_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_none_type", 55, CPyStatic_indirection___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_none_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_none_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_none_type", 54, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_none_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_none_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_none_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_none_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_none_type__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_uninhabited_type", 58, CPyStatic_indirection___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_uninhabited_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_uninhabited_type", 57, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_erased_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_erased_type", 61, CPyStatic_indirection___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_erased_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_erased_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_erased_type", 60, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_erased_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_erased_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_erased_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_erased_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_erased_type__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_deleted_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_deleted_type", 64, CPyStatic_indirection___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_deleted_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_deleted_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_deleted_type", 63, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_deleted_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_deleted_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_deleted_type__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = ((mypy___types___TypeVarTypeObject *)cpy_r_t)->_values;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_type_var", 67, CPyStatic_indirection___globals);
        goto CPyL8;
    }
    cpy_r_r2 = ((mypy___types___TypeVarTypeObject *)cpy_r_t)->_upper_bound;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_type_var", 67, CPyStatic_indirection___globals);
        goto CPyL9;
    }
    cpy_r_r4 = PyNumber_Or(cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_type_var", 67, CPyStatic_indirection___globals);
        goto CPyL8;
    }
    if (likely(PySet_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "visit_type_var", 67, CPyStatic_indirection___globals, "set", cpy_r_r4);
        goto CPyL8;
    }
    cpy_r_r6 = ((mypy___types___TypeVarTypeObject *)cpy_r_t)->_default;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_type_var", 67, CPyStatic_indirection___globals);
        goto CPyL10;
    }
    cpy_r_r8 = PyNumber_Or(cpy_r_r5, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_type_var", 67, CPyStatic_indirection___globals);
        goto CPyL8;
    }
    if (likely(PySet_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "visit_type_var", 67, CPyStatic_indirection___globals, "set", cpy_r_r8);
        goto CPyL8;
    }
    return cpy_r_r9;
CPyL8: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL8;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_type_var(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_type_var", 66, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_param_spec", 70, CPyStatic_indirection___globals);
        goto CPyL5;
    }
    cpy_r_r2 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_default;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_param_spec", 70, CPyStatic_indirection___globals);
        goto CPyL6;
    }
    cpy_r_r4 = PyNumber_Or(cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_param_spec", 70, CPyStatic_indirection___globals);
        goto CPyL5;
    }
    if (likely(PySet_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "visit_param_spec", 70, CPyStatic_indirection___globals, "set", cpy_r_r4);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL6: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_param_spec(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_param_spec", 69, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_param_spec__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_param_spec(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_param_spec__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_param_spec__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_param_spec__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_t)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_type_var_tuple", 73, CPyStatic_indirection___globals);
        goto CPyL5;
    }
    cpy_r_r2 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_t)->_default;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_type_var_tuple", 73, CPyStatic_indirection___globals);
        goto CPyL6;
    }
    cpy_r_r4 = PyNumber_Or(cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_type_var_tuple", 73, CPyStatic_indirection___globals);
        goto CPyL5;
    }
    if (likely(PySet_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "visit_type_var_tuple", 73, CPyStatic_indirection___globals, "set", cpy_r_r4);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL6: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_type_var_tuple(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_type_var_tuple", 72, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_type_var_tuple(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_type_var_tuple__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_type_var_tuple__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___types___UnpackTypeObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_unpack_type", 76, CPyStatic_indirection___globals);
        goto CPyL3;
    }
    if (likely(PySet_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "visit_unpack_type", 76, CPyStatic_indirection___globals, "set", cpy_r_r1);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_unpack_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_unpack_type", 75, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_unpack_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_unpack_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_unpack_type__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_parameters(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___types___ParametersObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_parameters", 79, CPyStatic_indirection___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_parameters(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_parameters", 78, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_parameters__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_parameters(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_parameters__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_parameters__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_parameters__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_out;
    PyObject *cpy_r_r2;
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
    PyObject *cpy_r_s;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_instance", 82, CPyStatic_indirection___globals);
        goto CPyL19;
    }
    cpy_r_out = cpy_r_r1;
    cpy_r_r2 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_instance", 83, CPyStatic_indirection___globals);
        goto CPyL20;
    }
    if (!cpy_r_r3) goto CPyL18;
    cpy_r_r4 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    cpy_r_r5 = ((mypy___nodes___TypeInfoObject *)cpy_r_r4)->_mro;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/indirection.py", "visit_instance", "TypeInfo", "mro", 87, CPyStatic_indirection___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r5);
CPyL4: ;
    cpy_r_r6 = 0;
CPyL5: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL21;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    if (likely((Py_TYPE(cpy_r_r11) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r11) == CPyType_nodes___TypeInfo)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "visit_instance", 87, CPyStatic_indirection___globals, "mypy.nodes.TypeInfo", cpy_r_r11);
        goto CPyL22;
    }
    cpy_r_s = cpy_r_r12;
    cpy_r_r13 = ((mypy___nodes___TypeInfoObject *)cpy_r_s)->_module_name;
    if (unlikely(cpy_r_r13 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'module_name' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r13);
    }
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_instance", 88, CPyStatic_indirection___globals);
        goto CPyL22;
    }
CPyL8: ;
    cpy_r_r14 = CPyDef_mypy___util___split_module_names(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_instance", 88, CPyStatic_indirection___globals);
        goto CPyL22;
    }
    cpy_r_r15 = _PySet_Update(cpy_r_out, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_instance", 88, CPyStatic_indirection___globals);
        goto CPyL22;
    }
    cpy_r_r17 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r17;
    goto CPyL5;
CPyL11: ;
    cpy_r_r18 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    cpy_r_r19 = ((mypy___nodes___TypeInfoObject *)cpy_r_r18)->_metaclass_type;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/indirection.py", "visit_instance", "TypeInfo", "metaclass_type", 89, CPyStatic_indirection___globals);
        goto CPyL20;
    }
CPyL12: ;
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_r19 != cpy_r_r20;
    if (!cpy_r_r21) goto CPyL18;
    cpy_r_r22 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    cpy_r_r23 = ((mypy___nodes___TypeInfoObject *)cpy_r_r22)->_metaclass_type;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/indirection.py", "visit_instance", "TypeInfo", "metaclass_type", 90, CPyStatic_indirection___globals);
        goto CPyL20;
    }
CPyL14: ;
    if (likely(cpy_r_r23 != Py_None))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "visit_instance", 90, CPyStatic_indirection___globals, "mypy.types.Instance", cpy_r_r23);
        goto CPyL20;
    }
    cpy_r_r25 = ((mypy___types___InstanceObject *)cpy_r_r24)->_type;
    cpy_r_r26 = ((mypy___nodes___TypeInfoObject *)cpy_r_r25)->_module_name;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypy/indirection.py", "visit_instance", "TypeInfo", "module_name", 90, CPyStatic_indirection___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r26);
CPyL16: ;
    cpy_r_r27 = CPyDef_mypy___util___split_module_names(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_instance", 90, CPyStatic_indirection___globals);
        goto CPyL20;
    }
    cpy_r_r28 = _PySet_Update(cpy_r_out, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_instance", 90, CPyStatic_indirection___globals);
        goto CPyL20;
    }
CPyL18: ;
    return cpy_r_out;
CPyL19: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL20: ;
    CPy_DecRef(cpy_r_out);
    goto CPyL19;
CPyL21: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL11;
CPyL22: ;
    CPy_DecRef(cpy_r_out);
    CPy_DecRef(cpy_r_r5);
    goto CPyL19;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_instance(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_instance", 81, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_out;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_callable_type", 94, CPyStatic_indirection___globals);
        goto CPyL10;
    }
    cpy_r_r2 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_callable_type", 94, CPyStatic_indirection___globals);
        goto CPyL11;
    }
    cpy_r_r4 = PyNumber_Or(cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_callable_type", 94, CPyStatic_indirection___globals);
        goto CPyL10;
    }
    if (likely(PySet_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "visit_callable_type", 94, CPyStatic_indirection___globals, "set", cpy_r_r4);
        goto CPyL10;
    }
    cpy_r_out = cpy_r_r5;
    cpy_r_r6 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_definition;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    if (!cpy_r_r8) goto CPyL9;
    cpy_r_r9 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_definition;
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "visit_callable_type", 96, CPyStatic_indirection___globals, "mypy.nodes.SymbolNode", cpy_r_r9);
        goto CPyL12;
    }
    cpy_r_r11 = CPY_GET_ATTR_TRAIT(cpy_r_r10, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_callable_type", 96, CPyStatic_indirection___globals);
        goto CPyL12;
    }
CPyL7: ;
    cpy_r_r12 = CPyDef_indirection___extract_module_names(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_callable_type", 96, CPyStatic_indirection___globals);
        goto CPyL12;
    }
    cpy_r_r13 = _PySet_Update(cpy_r_out, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_callable_type", 96, CPyStatic_indirection___globals);
        goto CPyL12;
    }
CPyL9: ;
    return cpy_r_out;
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_out);
    goto CPyL10;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_callable_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_callable_type", 93, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_t, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_overloaded", 100, CPyStatic_indirection___globals);
        goto CPyL6;
    }
CPyL1: ;
    cpy_r_r1 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_overloaded", 100, CPyStatic_indirection___globals);
        goto CPyL6;
    }
    cpy_r_r2 = ((mypy___types___OverloadedObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_overloaded", 100, CPyStatic_indirection___globals);
        goto CPyL7;
    }
    cpy_r_r4 = PyNumber_Or(cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_overloaded", 100, CPyStatic_indirection___globals);
        goto CPyL6;
    }
    if (likely(PySet_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "visit_overloaded", 100, CPyStatic_indirection___globals, "set", cpy_r_r4);
        goto CPyL6;
    }
    return cpy_r_r5;
CPyL6: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_overloaded(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_overloaded", 99, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_overloaded__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_overloaded(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_overloaded__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_overloaded__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_overloaded__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_tuple_type", 103, CPyStatic_indirection___globals);
        goto CPyL5;
    }
    cpy_r_r2 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_partial_fallback;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_tuple_type", 103, CPyStatic_indirection___globals);
        goto CPyL6;
    }
    cpy_r_r4 = PyNumber_Or(cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_tuple_type", 103, CPyStatic_indirection___globals);
        goto CPyL5;
    }
    if (likely(PySet_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "visit_tuple_type", 103, CPyStatic_indirection___globals, "set", cpy_r_r4);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL6: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_tuple_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_tuple_type", 102, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_tuple_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_tuple_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_tuple_type__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDict_ValuesView(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_typeddict_type", 106, CPyStatic_indirection___globals);
        goto CPyL6;
    }
    cpy_r_r2 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_typeddict_type", 106, CPyStatic_indirection___globals);
        goto CPyL6;
    }
    cpy_r_r3 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_typeddict_type", 106, CPyStatic_indirection___globals);
        goto CPyL7;
    }
    cpy_r_r5 = PyNumber_Or(cpy_r_r2, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_typeddict_type", 106, CPyStatic_indirection___globals);
        goto CPyL6;
    }
    if (likely(PySet_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "visit_typeddict_type", 106, CPyStatic_indirection___globals, "set", cpy_r_r5);
        goto CPyL6;
    }
    return cpy_r_r6;
CPyL6: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_typeddict_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_typeddict_type", 105, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_typeddict_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_typeddict_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_typeddict_type__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___types___LiteralTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_literal_type", 109, CPyStatic_indirection___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_literal_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_literal_type", 108, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_literal_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_literal_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_literal_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_literal_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_literal_type__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_union_type", 112, CPyStatic_indirection___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_union_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_union_type", 111, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_union_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_partial_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_partial_type", 115, CPyStatic_indirection___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_partial_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_partial_type", 114, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_partial_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_partial_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_partial_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_partial_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_partial_type__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_type_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___types___TypeTypeObject *)cpy_r_t)->_item;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_type_type", 118, CPyStatic_indirection___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_type_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_type_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_type_type", 117, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_type_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_type_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_type_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_type_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_type_type__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_type_alias_type", 121, CPyStatic_indirection___globals);
        goto CPyL4;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/indirection.py", "visit_type_alias_type", 121, CPyStatic_indirection___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL4;
    }
    cpy_r_r2 = CPyDef_indirection___TypeIndirectionVisitor____visit(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "visit_type_alias_type", 121, CPyStatic_indirection___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_type_alias_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_type_alias_type", 120, CPyStatic_indirection___globals);
    return NULL;
}

PyObject *CPyDef_indirection___TypeIndirectionVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_indirection___TypeIndirectionVisitor___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_indirection___TypeIndirectionVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_indirection___TypeIndirectionVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.indirection.TypeIndirectionVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_indirection___TypeIndirectionVisitor___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/indirection.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_indirection___globals);
    return NULL;
}

char CPyDef_indirection_____top_level__(void) {
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
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "<module>", -1, CPyStatic_indirection___globals);
        goto CPyL18;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_indirection___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "<module>", 1, CPyStatic_indirection___globals);
        goto CPyL18;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9420]; /* ('Iterable', 'Set') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_indirection___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "<module>", 3, CPyStatic_indirection___globals);
        goto CPyL18;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = (PyObject **)&CPyModule_mypy___types;
    PyObject **cpy_r_r14[1] = {cpy_r_r13};
    cpy_r_r15 = (void *)&cpy_r_r14;
    int64_t cpy_r_r16[1] = {5};
    cpy_r_r17 = (void *)&cpy_r_r16;
    cpy_r_r18 = CPyStatics[9422]; /* (('mypy.types', 'mypy.types', 'types'),) */
    cpy_r_r19 = CPyStatic_indirection___globals;
    cpy_r_r20 = CPyStatics[2634]; /* 'mypy/indirection.py' */
    cpy_r_r21 = CPyStatics[17]; /* '<module>' */
    cpy_r_r22 = CPyImport_ImportMany(cpy_r_r18, cpy_r_r15, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r17);
    if (!cpy_r_r22) goto CPyL18;
    cpy_r_r23 = CPyStatics[9299]; /* ('TypeVisitor',) */
    cpy_r_r24 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r25 = CPyStatic_indirection___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "<module>", 6, CPyStatic_indirection___globals);
        goto CPyL18;
    }
    CPyModule_mypy___types = cpy_r_r26;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[9244]; /* ('split_module_names',) */
    cpy_r_r28 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r29 = CPyStatic_indirection___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "<module>", 7, CPyStatic_indirection___globals);
        goto CPyL18;
    }
    CPyModule_mypy___util = cpy_r_r30;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = (PyObject *)CPyType_type_visitor___TypeVisitor;
    cpy_r_r32 = CPyStatic_indirection___globals;
    cpy_r_r33 = CPyStatics[2633]; /* 'Set' */
    cpy_r_r34 = CPyDict_GetItem(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "<module>", 20, CPyStatic_indirection___globals);
        goto CPyL18;
    }
    cpy_r_r35 = (PyObject *)&PyUnicode_Type;
    cpy_r_r36 = PyObject_GetItem(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "<module>", 20, CPyStatic_indirection___globals);
        goto CPyL18;
    }
    cpy_r_r37 = PyObject_GetItem(cpy_r_r31, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "<module>", 20, CPyStatic_indirection___globals);
        goto CPyL18;
    }
    cpy_r_r38 = PyTuple_Pack(1, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "<module>", 20, CPyStatic_indirection___globals);
        goto CPyL18;
    }
    cpy_r_r39 = CPyStatics[528]; /* 'mypy.indirection' */
    cpy_r_r40 = (PyObject *)CPyType_indirection___TypeIndirectionVisitor_template;
    cpy_r_r41 = CPyType_FromTemplate(cpy_r_r40, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "<module>", 20, CPyStatic_indirection___globals);
        goto CPyL18;
    }
    cpy_r_r42 = CPyDef_indirection___TypeIndirectionVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/indirection.py", "<module>", -1, CPyStatic_indirection___globals);
        goto CPyL19;
    }
    cpy_r_r43 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r44 = CPyStatics[2635]; /* 'cache' */
    cpy_r_r45 = CPyStatics[1132]; /* 'seen_aliases' */
    cpy_r_r46 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r47 = PyTuple_Pack(3, cpy_r_r44, cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/indirection.py", "<module>", 20, CPyStatic_indirection___globals);
        goto CPyL19;
    }
    cpy_r_r48 = PyObject_SetAttr(cpy_r_r41, cpy_r_r43, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/indirection.py", "<module>", 20, CPyStatic_indirection___globals);
        goto CPyL19;
    }
    CPyType_indirection___TypeIndirectionVisitor = (PyTypeObject *)cpy_r_r41;
    CPy_INCREF(CPyType_indirection___TypeIndirectionVisitor);
    cpy_r_r50 = CPyStatic_indirection___globals;
    cpy_r_r51 = CPyStatics[527]; /* 'TypeIndirectionVisitor' */
    cpy_r_r52 = CPyDict_SetItem(cpy_r_r50, cpy_r_r51, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/indirection.py", "<module>", 20, CPyStatic_indirection___globals);
        goto CPyL18;
    }
    return 1;
CPyL18: ;
    cpy_r_r54 = 2;
    return cpy_r_r54;
CPyL19: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL18;
}
