#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef astdiff___SnapshotTypeVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___server___astdiff___SnapshotTypeVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___server___astdiff___SnapshotTypeVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *astdiff___SnapshotTypeVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_astdiff___SnapshotTypeVisitor(void);

static PyObject *
astdiff___SnapshotTypeVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_astdiff___SnapshotTypeVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return astdiff___SnapshotTypeVisitor_setup(type);
}

static int
astdiff___SnapshotTypeVisitor_traverse(mypy___server___astdiff___SnapshotTypeVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___server___astdiff___SnapshotTypeVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___astdiff___SnapshotTypeVisitorObject))));
    return 0;
}

static int
astdiff___SnapshotTypeVisitor_clear(mypy___server___astdiff___SnapshotTypeVisitorObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___server___astdiff___SnapshotTypeVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___astdiff___SnapshotTypeVisitorObject))));
    return 0;
}

static void
astdiff___SnapshotTypeVisitor_dealloc(mypy___server___astdiff___SnapshotTypeVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, astdiff___SnapshotTypeVisitor_dealloc)
    astdiff___SnapshotTypeVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem astdiff___SnapshotTypeVisitor_vtable[25];
static CPyVTableItem astdiff___SnapshotTypeVisitor_type_visitor___TypeVisitor_trait_vtable[21];
static size_t astdiff___SnapshotTypeVisitor_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_astdiff___SnapshotTypeVisitor_trait_vtable_setup(void)
{
    CPyVTableItem astdiff___SnapshotTypeVisitor_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(astdiff___SnapshotTypeVisitor_type_visitor___TypeVisitor_trait_vtable, astdiff___SnapshotTypeVisitor_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(astdiff___SnapshotTypeVisitor_type_visitor___TypeVisitor_trait_vtable));
    size_t astdiff___SnapshotTypeVisitor_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(astdiff___SnapshotTypeVisitor_type_visitor___TypeVisitor_offset_table, astdiff___SnapshotTypeVisitor_type_visitor___TypeVisitor_offset_table_scratch, sizeof(astdiff___SnapshotTypeVisitor_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem astdiff___SnapshotTypeVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)astdiff___SnapshotTypeVisitor_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)astdiff___SnapshotTypeVisitor_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_unbound_type,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_any,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_none_type,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_erased_type,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_deleted_type,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_instance,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_type_var,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_param_spec,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_unpack_type,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_parameters,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_callable_type,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___normalize_callable_variables,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_tuple_type,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_typeddict_type,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_literal_type,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_union_type,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_overloaded,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_partial_type,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_type_type,
        (CPyVTableItem)CPyDef_astdiff___SnapshotTypeVisitor___visit_type_alias_type,
    };
    memcpy(astdiff___SnapshotTypeVisitor_vtable, astdiff___SnapshotTypeVisitor_vtable_scratch, sizeof(astdiff___SnapshotTypeVisitor_vtable));
    return 1;
}


static PyGetSetDef astdiff___SnapshotTypeVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef astdiff___SnapshotTypeVisitor_methods[] = {
    {"visit_unbound_type",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_unbound_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_none_type",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_none_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_erased_type",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_erased_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_deleted_type",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_deleted_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_parameters",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_parameters,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"normalize_callable_variables",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___normalize_callable_variables,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_literal_type",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_partial_type",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_partial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_type",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_type_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_astdiff___SnapshotTypeVisitor___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_astdiff___SnapshotTypeVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SnapshotTypeVisitor",
    .tp_new = astdiff___SnapshotTypeVisitor_new,
    .tp_dealloc = (destructor)astdiff___SnapshotTypeVisitor_dealloc,
    .tp_traverse = (traverseproc)astdiff___SnapshotTypeVisitor_traverse,
    .tp_clear = (inquiry)astdiff___SnapshotTypeVisitor_clear,
    .tp_getset = astdiff___SnapshotTypeVisitor_getseters,
    .tp_methods = astdiff___SnapshotTypeVisitor_methods,
    .tp_members = astdiff___SnapshotTypeVisitor_members,
    .tp_basicsize = sizeof(mypy___server___astdiff___SnapshotTypeVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___server___astdiff___SnapshotTypeVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___server___astdiff___SnapshotTypeVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_astdiff___SnapshotTypeVisitor_template = &CPyType_astdiff___SnapshotTypeVisitor_template_;

static PyObject *
astdiff___SnapshotTypeVisitor_setup(PyTypeObject *type)
{
    mypy___server___astdiff___SnapshotTypeVisitorObject *self;
    self = (mypy___server___astdiff___SnapshotTypeVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = astdiff___SnapshotTypeVisitor_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor(void)
{
    PyObject *self = astdiff___SnapshotTypeVisitor_setup(CPyType_astdiff___SnapshotTypeVisitor);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef astdiffmodule_methods[] = {
    {"compare_symbol_table_snapshots", (PyCFunction)CPyPy_astdiff___compare_symbol_table_snapshots, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"snapshot_symbol_table", (PyCFunction)CPyPy_astdiff___snapshot_symbol_table, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"snapshot_definition", (PyCFunction)CPyPy_astdiff___snapshot_definition, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"snapshot_type", (PyCFunction)CPyPy_astdiff___snapshot_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"snapshot_optional_type", (PyCFunction)CPyPy_astdiff___snapshot_optional_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"snapshot_types", (PyCFunction)CPyPy_astdiff___snapshot_types, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"snapshot_simple_type", (PyCFunction)CPyPy_astdiff___snapshot_simple_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"encode_optional_str", (PyCFunction)CPyPy_astdiff___encode_optional_str, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"snapshot_untyped_signature", (PyCFunction)CPyPy_astdiff___snapshot_untyped_signature, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef astdiffmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.server.astdiff",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    astdiffmodule_methods
};

PyObject *CPyInit_mypy___server___astdiff(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___server___astdiff_internal) {
        Py_INCREF(CPyModule_mypy___server___astdiff_internal);
        return CPyModule_mypy___server___astdiff_internal;
    }
    CPyModule_mypy___server___astdiff_internal = PyModule_Create(&astdiffmodule);
    if (unlikely(CPyModule_mypy___server___astdiff_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___server___astdiff_internal, "__name__");
    CPyStatic_astdiff___globals = PyModule_GetDict(CPyModule_mypy___server___astdiff_internal);
    if (unlikely(CPyStatic_astdiff___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_astdiff_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___server___astdiff_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___server___astdiff_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_astdiff___SnapshotTypeVisitor);
    return NULL;
}

PyObject *CPyDef_astdiff___compare_symbol_table_snapshots(PyObject *cpy_r_name_prefix, PyObject *cpy_r_snapshot1, PyObject *cpy_r_snapshot2) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T3CIO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_names1;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    tuple_T3CIO cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_name_2;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_names2;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_triggers;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_name_3;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_item1;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_item2;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_kind1;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_kind2;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_item_name;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 135, CPyStatic_astdiff___globals);
        goto CPyL77;
    }
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_snapshot1);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetKeysIter(cpy_r_snapshot1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 135, CPyStatic_astdiff___globals);
        goto CPyL78;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextKey(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL79;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r5.f2);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 135, CPyStatic_astdiff___globals, "str", cpy_r_r8);
        goto CPyL80;
    }
    cpy_r_name = cpy_r_r9;
    cpy_r_r10 = CPyStatics[224]; /* '.' */
    cpy_r_r11 = CPyStr_Build(3, cpy_r_name_prefix, cpy_r_r10, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 135, CPyStatic_astdiff___globals);
        goto CPyL80;
    }
    cpy_r_r12 = PySet_Add(cpy_r_r0, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 135, CPyStatic_astdiff___globals);
        goto CPyL80;
    }
    cpy_r_r14 = CPyDict_CheckSize(cpy_r_snapshot1, cpy_r_r3);
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 135, CPyStatic_astdiff___globals);
        goto CPyL80;
    } else
        goto CPyL2;
CPyL7: ;
    cpy_r_r15 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 135, CPyStatic_astdiff___globals);
        goto CPyL78;
    }
    cpy_r_names1 = cpy_r_r0;
    cpy_r_r16 = PySet_New(NULL);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 136, CPyStatic_astdiff___globals);
        goto CPyL81;
    }
    cpy_r_r17 = 0;
    cpy_r_r18 = PyDict_Size(cpy_r_snapshot2);
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = CPyDict_GetKeysIter(cpy_r_snapshot2);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 136, CPyStatic_astdiff___globals);
        goto CPyL82;
    }
CPyL10: ;
    cpy_r_r21 = CPyDict_NextKey(cpy_r_r20, cpy_r_r17);
    cpy_r_r22 = cpy_r_r21.f1;
    cpy_r_r17 = cpy_r_r22;
    cpy_r_r23 = cpy_r_r21.f0;
    if (!cpy_r_r23) goto CPyL83;
    cpy_r_r24 = cpy_r_r21.f2;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r21.f2);
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 136, CPyStatic_astdiff___globals, "str", cpy_r_r24);
        goto CPyL84;
    }
    cpy_r_name_2 = cpy_r_r25;
    cpy_r_r26 = CPyStatics[224]; /* '.' */
    cpy_r_r27 = CPyStr_Build(3, cpy_r_name_prefix, cpy_r_r26, cpy_r_name_2);
    CPy_DECREF(cpy_r_name_2);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 136, CPyStatic_astdiff___globals);
        goto CPyL84;
    }
    cpy_r_r28 = PySet_Add(cpy_r_r16, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 136, CPyStatic_astdiff___globals);
        goto CPyL84;
    }
    cpy_r_r30 = CPyDict_CheckSize(cpy_r_snapshot2, cpy_r_r19);
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 136, CPyStatic_astdiff___globals);
        goto CPyL84;
    } else
        goto CPyL10;
CPyL15: ;
    cpy_r_r31 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 136, CPyStatic_astdiff___globals);
        goto CPyL82;
    }
    cpy_r_names2 = cpy_r_r16;
    cpy_r_r32 = PyNumber_Xor(cpy_r_names1, cpy_r_names2);
    CPy_DECREF(cpy_r_names1);
    CPy_DECREF(cpy_r_names2);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 137, CPyStatic_astdiff___globals);
        goto CPyL77;
    }
    if (likely(PySet_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 137, CPyStatic_astdiff___globals, "set", cpy_r_r32);
        goto CPyL77;
    }
    cpy_r_triggers = cpy_r_r33;
    cpy_r_r34 = CPyDict_KeysView(cpy_r_snapshot1);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 140, CPyStatic_astdiff___globals);
        goto CPyL85;
    }
    cpy_r_r35 = PySet_New(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 140, CPyStatic_astdiff___globals);
        goto CPyL85;
    }
    cpy_r_r36 = CPyDict_KeysView(cpy_r_snapshot2);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 140, CPyStatic_astdiff___globals);
        goto CPyL86;
    }
    cpy_r_r37 = PySet_New(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 140, CPyStatic_astdiff___globals);
        goto CPyL86;
    }
    cpy_r_r38 = PyNumber_And(cpy_r_r35, cpy_r_r37);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 140, CPyStatic_astdiff___globals);
        goto CPyL85;
    }
    if (likely(PySet_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 140, CPyStatic_astdiff___globals, "set", cpy_r_r38);
        goto CPyL85;
    }
    cpy_r_r40 = PyObject_GetIter(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 140, CPyStatic_astdiff___globals);
        goto CPyL85;
    }
CPyL25: ;
    cpy_r_r41 = PyIter_Next(cpy_r_r40);
    if (cpy_r_r41 == NULL) goto CPyL87;
    if (likely(PyUnicode_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 140, CPyStatic_astdiff___globals, "str", cpy_r_r41);
        goto CPyL88;
    }
    cpy_r_name_3 = cpy_r_r42;
    cpy_r_r43 = CPyDict_GetItem(cpy_r_snapshot1, cpy_r_name_3);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 141, CPyStatic_astdiff___globals);
        goto CPyL89;
    }
    if (likely(PyTuple_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 141, CPyStatic_astdiff___globals, "tuple", cpy_r_r43);
        goto CPyL89;
    }
    cpy_r_item1 = cpy_r_r44;
    cpy_r_r45 = CPyDict_GetItem(cpy_r_snapshot2, cpy_r_name_3);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 142, CPyStatic_astdiff___globals);
        goto CPyL90;
    }
    if (likely(PyTuple_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 142, CPyStatic_astdiff___globals, "tuple", cpy_r_r45);
        goto CPyL90;
    }
    cpy_r_item2 = cpy_r_r46;
    cpy_r_r47 = CPySequenceTuple_GetItem(cpy_r_item1, 0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 143, CPyStatic_astdiff___globals);
        goto CPyL91;
    }
    cpy_r_kind1 = cpy_r_r47;
    cpy_r_r48 = CPySequenceTuple_GetItem(cpy_r_item2, 0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 144, CPyStatic_astdiff___globals);
        goto CPyL92;
    }
    cpy_r_kind2 = cpy_r_r48;
    cpy_r_r49 = CPyStatics[224]; /* '.' */
    cpy_r_r50 = CPyStr_Build(3, cpy_r_name_prefix, cpy_r_r49, cpy_r_name_3);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 145, CPyStatic_astdiff___globals);
        goto CPyL93;
    }
    cpy_r_item_name = cpy_r_r50;
    cpy_r_r51 = PyObject_RichCompare(cpy_r_kind1, cpy_r_kind2, 3);
    CPy_DECREF(cpy_r_kind2);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 146, CPyStatic_astdiff___globals);
        goto CPyL94;
    }
    if (unlikely(!PyBool_Check(cpy_r_r51))) {
        CPy_TypeError("bool", cpy_r_r51); cpy_r_r52 = 2;
    } else
        cpy_r_r52 = cpy_r_r51 == Py_True;
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 146, CPyStatic_astdiff___globals);
        goto CPyL94;
    }
    if (cpy_r_r52) {
        goto CPyL95;
    } else
        goto CPyL38;
CPyL37: ;
    cpy_r_r53 = PySet_Add(cpy_r_triggers, cpy_r_item_name);
    CPy_DECREF(cpy_r_item_name);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 148, CPyStatic_astdiff___globals);
        goto CPyL88;
    } else
        goto CPyL25;
CPyL38: ;
    cpy_r_r55 = CPyStatics[103]; /* 'TypeInfo' */
    cpy_r_r56 = PyObject_RichCompare(cpy_r_kind1, cpy_r_r55, 2);
    CPy_DECREF(cpy_r_kind1);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 149, CPyStatic_astdiff___globals);
        goto CPyL96;
    }
    if (unlikely(!PyBool_Check(cpy_r_r56))) {
        CPy_TypeError("bool", cpy_r_r56); cpy_r_r57 = 2;
    } else
        cpy_r_r57 = cpy_r_r56 == Py_True;
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 149, CPyStatic_astdiff___globals);
        goto CPyL96;
    }
    if (cpy_r_r57) {
        goto CPyL97;
    } else
        goto CPyL98;
CPyL41: ;
    cpy_r_r58 = CPySequenceTuple_GetSlice(cpy_r_item1, 0, -2);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 150, CPyStatic_astdiff___globals);
        goto CPyL99;
    }
    if (likely(PyTuple_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 150, CPyStatic_astdiff___globals, "tuple", cpy_r_r58);
        goto CPyL99;
    }
    cpy_r_r60 = CPySequenceTuple_GetSlice(cpy_r_item2, 0, -2);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 150, CPyStatic_astdiff___globals);
        goto CPyL100;
    }
    if (likely(PyTuple_Check(cpy_r_r60)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 150, CPyStatic_astdiff___globals, "tuple", cpy_r_r60);
        goto CPyL100;
    }
    cpy_r_r62 = PyObject_RichCompare(cpy_r_r59, cpy_r_r61, 3);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 150, CPyStatic_astdiff___globals);
        goto CPyL99;
    }
    if (unlikely(!PyBool_Check(cpy_r_r62))) {
        CPy_TypeError("bool", cpy_r_r62); cpy_r_r63 = 2;
    } else
        cpy_r_r63 = cpy_r_r62 == Py_True;
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 150, CPyStatic_astdiff___globals);
        goto CPyL99;
    }
    if (!cpy_r_r63) goto CPyL49;
    cpy_r_r64 = PySet_Add(cpy_r_triggers, cpy_r_item_name);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 152, CPyStatic_astdiff___globals);
        goto CPyL99;
    }
CPyL49: ;
    cpy_r_r66 = CPySequenceTuple_GetItem(cpy_r_item1, -2);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 154, CPyStatic_astdiff___globals);
        goto CPyL99;
    }
    cpy_r_r67 = (PyObject *)&PyDict_Type;
    cpy_r_r68 = PyObject_IsInstance(cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 154, CPyStatic_astdiff___globals);
        goto CPyL99;
    }
    cpy_r_r70 = cpy_r_r68;
    if (cpy_r_r70) {
        goto CPyL54;
    } else
        goto CPyL101;
CPyL52: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r71 = 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 154, CPyStatic_astdiff___globals);
        goto CPyL77;
    }
    CPy_Unreachable();
CPyL54: ;
    cpy_r_r72 = CPySequenceTuple_GetItem(cpy_r_item2, -2);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 155, CPyStatic_astdiff___globals);
        goto CPyL99;
    }
    cpy_r_r73 = (PyObject *)&PyDict_Type;
    cpy_r_r74 = PyObject_IsInstance(cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 155, CPyStatic_astdiff___globals);
        goto CPyL99;
    }
    cpy_r_r76 = cpy_r_r74;
    if (cpy_r_r76) {
        goto CPyL59;
    } else
        goto CPyL102;
CPyL57: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r77 = 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 155, CPyStatic_astdiff___globals);
        goto CPyL77;
    }
    CPy_Unreachable();
CPyL59: ;
    cpy_r_r78 = CPySequenceTuple_GetItem(cpy_r_item1, -2);
    CPy_DECREF(cpy_r_item1);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 156, CPyStatic_astdiff___globals);
        goto CPyL103;
    }
    if (likely(PyDict_Check(cpy_r_r78)))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 156, CPyStatic_astdiff___globals, "dict", cpy_r_r78);
        goto CPyL103;
    }
    cpy_r_r80 = CPySequenceTuple_GetItem(cpy_r_item2, -2);
    CPy_DECREF(cpy_r_item2);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 156, CPyStatic_astdiff___globals);
        goto CPyL104;
    }
    if (likely(PyDict_Check(cpy_r_r80)))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 156, CPyStatic_astdiff___globals, "dict", cpy_r_r80);
        goto CPyL104;
    }
    cpy_r_r82 = CPyDef_astdiff___compare_symbol_table_snapshots(cpy_r_item_name, cpy_r_r79, cpy_r_r81);
    CPy_DECREF(cpy_r_item_name);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 156, CPyStatic_astdiff___globals);
        goto CPyL88;
    }
    cpy_r_r83 = PyNumber_InPlaceOr(cpy_r_triggers, cpy_r_r82);
    CPy_DECREF(cpy_r_triggers);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 156, CPyStatic_astdiff___globals);
        goto CPyL105;
    }
    if (likely(PySet_Check(cpy_r_r83)))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 156, CPyStatic_astdiff___globals, "set", cpy_r_r83);
        goto CPyL105;
    }
    cpy_r_triggers = cpy_r_r84;
    goto CPyL25;
CPyL67: ;
    cpy_r_r85 = CPyDict_GetItem(cpy_r_snapshot1, cpy_r_name_3);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 159, CPyStatic_astdiff___globals);
        goto CPyL106;
    }
    if (likely(PyTuple_Check(cpy_r_r85)))
        cpy_r_r86 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 159, CPyStatic_astdiff___globals, "tuple", cpy_r_r85);
        goto CPyL106;
    }
    cpy_r_r87 = CPyDict_GetItem(cpy_r_snapshot2, cpy_r_name_3);
    CPy_DECREF(cpy_r_name_3);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 159, CPyStatic_astdiff___globals);
        goto CPyL107;
    }
    if (likely(PyTuple_Check(cpy_r_r87)))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 159, CPyStatic_astdiff___globals, "tuple", cpy_r_r87);
        goto CPyL107;
    }
    cpy_r_r89 = PyObject_RichCompare(cpy_r_r86, cpy_r_r88, 3);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 159, CPyStatic_astdiff___globals);
        goto CPyL108;
    }
    if (unlikely(!PyBool_Check(cpy_r_r89))) {
        CPy_TypeError("bool", cpy_r_r89); cpy_r_r90 = 2;
    } else
        cpy_r_r90 = cpy_r_r89 == Py_True;
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 159, CPyStatic_astdiff___globals);
        goto CPyL108;
    }
    if (!cpy_r_r90) goto CPyL109;
    cpy_r_r91 = PySet_Add(cpy_r_triggers, cpy_r_item_name);
    CPy_DECREF(cpy_r_item_name);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 160, CPyStatic_astdiff___globals);
        goto CPyL88;
    } else
        goto CPyL25;
CPyL75: ;
    cpy_r_r93 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 140, CPyStatic_astdiff___globals);
        goto CPyL85;
    }
    return cpy_r_triggers;
CPyL77: ;
    cpy_r_r94 = NULL;
    return cpy_r_r94;
CPyL78: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL77;
CPyL79: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    goto CPyL7;
CPyL80: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL77;
CPyL81: ;
    CPy_DecRef(cpy_r_names1);
    goto CPyL77;
CPyL82: ;
    CPy_DecRef(cpy_r_names1);
    CPy_DecRef(cpy_r_r16);
    goto CPyL77;
CPyL83: ;
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r21.f2);
    goto CPyL15;
CPyL84: ;
    CPy_DecRef(cpy_r_names1);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r20);
    goto CPyL77;
CPyL85: ;
    CPy_DecRef(cpy_r_triggers);
    goto CPyL77;
CPyL86: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r35);
    goto CPyL77;
CPyL87: ;
    CPy_DECREF(cpy_r_r40);
    goto CPyL75;
CPyL88: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r40);
    goto CPyL77;
CPyL89: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_name_3);
    goto CPyL77;
CPyL90: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_name_3);
    CPy_DecRef(cpy_r_item1);
    goto CPyL77;
CPyL91: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_name_3);
    CPy_DecRef(cpy_r_item1);
    CPy_DecRef(cpy_r_item2);
    goto CPyL77;
CPyL92: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_name_3);
    CPy_DecRef(cpy_r_item1);
    CPy_DecRef(cpy_r_item2);
    CPy_DecRef(cpy_r_kind1);
    goto CPyL77;
CPyL93: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_name_3);
    CPy_DecRef(cpy_r_item1);
    CPy_DecRef(cpy_r_item2);
    CPy_DecRef(cpy_r_kind1);
    CPy_DecRef(cpy_r_kind2);
    goto CPyL77;
CPyL94: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_name_3);
    CPy_DecRef(cpy_r_item1);
    CPy_DecRef(cpy_r_item2);
    CPy_DecRef(cpy_r_kind1);
    CPy_DecRef(cpy_r_item_name);
    goto CPyL77;
CPyL95: ;
    CPy_DECREF(cpy_r_name_3);
    CPy_DECREF(cpy_r_item1);
    CPy_DECREF(cpy_r_item2);
    CPy_DECREF(cpy_r_kind1);
    goto CPyL37;
CPyL96: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_name_3);
    CPy_DecRef(cpy_r_item1);
    CPy_DecRef(cpy_r_item2);
    CPy_DecRef(cpy_r_item_name);
    goto CPyL77;
CPyL97: ;
    CPy_DECREF(cpy_r_name_3);
    goto CPyL41;
CPyL98: ;
    CPy_DECREF(cpy_r_item1);
    CPy_DECREF(cpy_r_item2);
    goto CPyL67;
CPyL99: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_item1);
    CPy_DecRef(cpy_r_item2);
    CPy_DecRef(cpy_r_item_name);
    goto CPyL77;
CPyL100: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_item1);
    CPy_DecRef(cpy_r_item2);
    CPy_DecRef(cpy_r_item_name);
    CPy_DecRef(cpy_r_r59);
    goto CPyL77;
CPyL101: ;
    CPy_DECREF(cpy_r_triggers);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_item1);
    CPy_DECREF(cpy_r_item2);
    CPy_DECREF(cpy_r_item_name);
    goto CPyL52;
CPyL102: ;
    CPy_DECREF(cpy_r_triggers);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_item1);
    CPy_DECREF(cpy_r_item2);
    CPy_DECREF(cpy_r_item_name);
    goto CPyL57;
CPyL103: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_item2);
    CPy_DecRef(cpy_r_item_name);
    goto CPyL77;
CPyL104: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_item_name);
    CPy_DecRef(cpy_r_r79);
    goto CPyL77;
CPyL105: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL77;
CPyL106: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_name_3);
    CPy_DecRef(cpy_r_item_name);
    goto CPyL77;
CPyL107: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_item_name);
    CPy_DecRef(cpy_r_r86);
    goto CPyL77;
CPyL108: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_item_name);
    goto CPyL77;
CPyL109: ;
    CPy_DECREF(cpy_r_item_name);
    goto CPyL25;
}

PyObject *CPyPy_astdiff___compare_symbol_table_snapshots(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name_prefix", "snapshot1", "snapshot2", 0};
    static CPyArg_Parser parser = {"OOO:compare_symbol_table_snapshots", kwlist, 0};
    PyObject *obj_name_prefix;
    PyObject *obj_snapshot1;
    PyObject *obj_snapshot2;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name_prefix, &obj_snapshot1, &obj_snapshot2)) {
        return NULL;
    }
    PyObject *arg_name_prefix;
    if (likely(PyUnicode_Check(obj_name_prefix)))
        arg_name_prefix = obj_name_prefix;
    else {
        CPy_TypeError("str", obj_name_prefix); 
        goto fail;
    }
    PyObject *arg_snapshot1;
    if (likely(PyDict_Check(obj_snapshot1)))
        arg_snapshot1 = obj_snapshot1;
    else {
        CPy_TypeError("dict", obj_snapshot1); 
        goto fail;
    }
    PyObject *arg_snapshot2;
    if (likely(PyDict_Check(obj_snapshot2)))
        arg_snapshot2 = obj_snapshot2;
    else {
        CPy_TypeError("dict", obj_snapshot2); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___compare_symbol_table_snapshots(arg_name_prefix, arg_snapshot1, arg_snapshot2);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "compare_symbol_table_snapshots", 122, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___snapshot_symbol_table(PyObject *cpy_r_name_prefix, PyObject *cpy_r_table) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T4CIOO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_name;
    PyObject *cpy_r_symbol;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_fullname;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    tuple_T3OIC cpy_r_r25;
    tuple_T3OIC cpy_r_common;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    tuple_T2OT3OIC cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    int64_t cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    CPyTagged cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    tuple_T5OIOOO cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyPtr cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    tuple_T5OOCCO cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyPtr cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyTagged cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    tuple_T4OIOO cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyPtr cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyTagged cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    tuple_T4OIOO cpy_r_r116;
    PyObject *cpy_r_r117;
    int32_t cpy_r_r118;
    char cpy_r_r119;
    CPyTagged cpy_r_r120;
    int64_t cpy_r_r121;
    char cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    int32_t cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    char cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    tuple_T2OT3OIC cpy_r_r144;
    PyObject *cpy_r_r145;
    int32_t cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    int32_t cpy_r_r150;
    char cpy_r_r151;
    char cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 175, CPyStatic_astdiff___globals);
        goto CPyL75;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_table);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetItemsIter(cpy_r_table);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 176, CPyStatic_astdiff___globals);
        goto CPyL76;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextItem(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL77;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = cpy_r_r5.f3;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r10 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 176, CPyStatic_astdiff___globals, "str", cpy_r_r8);
        goto CPyL78;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_nodes___SymbolTableNode))
        cpy_r_r11 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 176, CPyStatic_astdiff___globals, "mypy.nodes.SymbolTableNode", cpy_r_r9);
        goto CPyL79;
    }
    cpy_r_name = cpy_r_r10;
    cpy_r_symbol = cpy_r_r11;
    cpy_r_r12 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_symbol)->_node;
    CPy_INCREF(cpy_r_r12);
    cpy_r_node = cpy_r_r12;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_node != cpy_r_r13;
    if (!cpy_r_r14) goto CPyL12;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r15 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 177, CPyStatic_astdiff___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL80;
    }
    cpy_r_r16 = PyObject_IsTrue(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 177, CPyStatic_astdiff___globals);
        goto CPyL80;
    }
    cpy_r_r18 = cpy_r_r16;
    if (!cpy_r_r18) goto CPyL12;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r19 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 179, CPyStatic_astdiff___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL80;
    }
    cpy_r_r20 = CPY_GET_ATTR_TRAIT(cpy_r_r19, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 179, CPyStatic_astdiff___globals);
        goto CPyL80;
    }
CPyL11: ;
    cpy_r_r21 = cpy_r_r20;
    goto CPyL13;
CPyL12: ;
    cpy_r_r22 = Py_None;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r21 = cpy_r_r22;
CPyL13: ;
    cpy_r_fullname = cpy_r_r21;
    cpy_r_r23 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_symbol)->_kind;
    CPyTagged_INCREF(cpy_r_r23);
    cpy_r_r24 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_symbol)->_module_public;
    cpy_r_r25.f0 = cpy_r_fullname;
    cpy_r_r25.f1 = cpy_r_r23;
    cpy_r_r25.f2 = cpy_r_r24;
    CPy_INCREF(cpy_r_r25.f0);
    CPyTagged_INCREF(cpy_r_r25.f1);
    CPy_DECREF(cpy_r_fullname);
    CPyTagged_DECREF(cpy_r_r23);
    cpy_r_common = cpy_r_r25;
    cpy_r_r26 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    if (cpy_r_r29) {
        goto CPyL81;
    } else
        goto CPyL15;
CPyL14: ;
    cpy_r_r30 = CPyStatics[5289]; /* 'Moduleref' */
    cpy_r_r31.f0 = cpy_r_r30;
    cpy_r_r31.f1 = cpy_r_common;
    CPy_INCREF(cpy_r_r31.f0);
    CPy_INCREF(cpy_r_r31.f1.f0);
    CPyTagged_INCREF(cpy_r_r31.f1.f1);
    CPy_DECREF(cpy_r_common.f0);
    CPyTagged_DECREF(cpy_r_common.f1);
    cpy_r_r32 = PyTuple_New(2);
    if (unlikely(cpy_r_r32 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6298 = cpy_r_r31.f0;
    PyTuple_SET_ITEM(cpy_r_r32, 0, __tmp6298);
    PyObject *__tmp6299 = PyTuple_New(3);
    if (unlikely(__tmp6299 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6300 = cpy_r_r31.f1.f0;
    PyTuple_SET_ITEM(__tmp6299, 0, __tmp6300);
    PyObject *__tmp6301 = CPyTagged_StealAsObject(cpy_r_r31.f1.f1);
    PyTuple_SET_ITEM(__tmp6299, 1, __tmp6301);
    PyObject *__tmp6302 = cpy_r_r31.f1.f2 ? Py_True : Py_False;
    CPy_INCREF(__tmp6302);
    PyTuple_SET_ITEM(__tmp6299, 2, __tmp6302);
    PyTuple_SET_ITEM(cpy_r_r32, 1, __tmp6299);
    cpy_r_r33 = CPyDict_SetItem(cpy_r_result, cpy_r_name, cpy_r_r32);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 186, CPyStatic_astdiff___globals);
        goto CPyL82;
    } else
        goto CPyL72;
CPyL15: ;
    cpy_r_r35 = (PyObject *)CPyType_nodes___TypeVarExpr;
    cpy_r_r36 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r37 = *(PyObject * *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 == cpy_r_r35;
    if (cpy_r_r38) {
        goto CPyL83;
    } else
        goto CPyL30;
CPyL16: ;
    cpy_r_r39 = CPyStatics[902]; /* 'TypeVar' */
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___TypeVarExpr))
        cpy_r_r40 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 190, CPyStatic_astdiff___globals, "mypy.nodes.TypeVarExpr", cpy_r_node);
        goto CPyL84;
    }
    cpy_r_r41 = ((mypy___nodes___TypeVarExprObject *)cpy_r_r40)->_variance;
    CPyTagged_INCREF(cpy_r_r41);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___TypeVarExpr))
        cpy_r_r42 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 191, CPyStatic_astdiff___globals, "mypy.nodes.TypeVarExpr", cpy_r_node);
        goto CPyL85;
    }
    cpy_r_r43 = ((mypy___nodes___TypeVarExprObject *)cpy_r_r42)->_values;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = (CPyPtr)&((PyVarObject *)cpy_r_r43)->ob_size;
    cpy_r_r45 = *(int64_t *)cpy_r_r44;
    cpy_r_r46 = PyList_New(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 191, CPyStatic_astdiff___globals);
        goto CPyL86;
    }
    cpy_r_r47 = 0;
CPyL20: ;
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_r43)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = (Py_ssize_t)cpy_r_r47 < (Py_ssize_t)cpy_r_r50;
    if (!cpy_r_r51) goto CPyL87;
    cpy_r_r52 = CPyList_GetItemUnsafe(cpy_r_r43, cpy_r_r47);
    if (likely(PyObject_TypeCheck(cpy_r_r52, CPyType_types___Type)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 191, CPyStatic_astdiff___globals, "mypy.types.Type", cpy_r_r52);
        goto CPyL88;
    }
    cpy_r_value = cpy_r_r53;
    cpy_r_r54 = CPyDef_astdiff___snapshot_type(cpy_r_value);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 191, CPyStatic_astdiff___globals);
        goto CPyL88;
    }
    cpy_r_r55 = CPyList_SetItemUnsafe(cpy_r_r46, cpy_r_r47, cpy_r_r54);
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 191, CPyStatic_astdiff___globals);
        goto CPyL88;
    }
    cpy_r_r56 = cpy_r_r47 + 2;
    cpy_r_r47 = cpy_r_r56;
    goto CPyL20;
CPyL25: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___TypeVarExpr))
        cpy_r_r57 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 192, CPyStatic_astdiff___globals, "mypy.nodes.TypeVarExpr", cpy_r_node);
        goto CPyL89;
    }
    cpy_r_r58 = ((mypy___nodes___TypeVarExprObject *)cpy_r_r57)->_upper_bound;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = CPyDef_astdiff___snapshot_type(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 192, CPyStatic_astdiff___globals);
        goto CPyL89;
    }
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___TypeVarExpr))
        cpy_r_r60 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 193, CPyStatic_astdiff___globals, "mypy.nodes.TypeVarExpr", cpy_r_node);
        goto CPyL90;
    }
    cpy_r_r61 = ((mypy___nodes___TypeVarExprObject *)cpy_r_r60)->_default;
    CPy_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_node);
    cpy_r_r62 = CPyDef_astdiff___snapshot_type(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 193, CPyStatic_astdiff___globals);
        goto CPyL91;
    }
    cpy_r_r63.f0 = cpy_r_r39;
    cpy_r_r63.f1 = cpy_r_r41;
    cpy_r_r63.f2 = cpy_r_r46;
    cpy_r_r63.f3 = cpy_r_r59;
    cpy_r_r63.f4 = cpy_r_r62;
    CPy_INCREF(cpy_r_r63.f0);
    CPyTagged_INCREF(cpy_r_r63.f1);
    CPy_INCREF(cpy_r_r63.f2);
    CPy_INCREF(cpy_r_r63.f3);
    CPy_INCREF(cpy_r_r63.f4);
    CPyTagged_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r64 = PyTuple_New(5);
    if (unlikely(cpy_r_r64 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6303 = cpy_r_r63.f0;
    PyTuple_SET_ITEM(cpy_r_r64, 0, __tmp6303);
    PyObject *__tmp6304 = CPyTagged_StealAsObject(cpy_r_r63.f1);
    PyTuple_SET_ITEM(cpy_r_r64, 1, __tmp6304);
    PyObject *__tmp6305 = cpy_r_r63.f2;
    PyTuple_SET_ITEM(cpy_r_r64, 2, __tmp6305);
    PyObject *__tmp6306 = cpy_r_r63.f3;
    PyTuple_SET_ITEM(cpy_r_r64, 3, __tmp6306);
    PyObject *__tmp6307 = cpy_r_r63.f4;
    PyTuple_SET_ITEM(cpy_r_r64, 4, __tmp6307);
    cpy_r_r65 = CPyDict_SetItem(cpy_r_result, cpy_r_name, cpy_r_r64);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 188, CPyStatic_astdiff___globals);
        goto CPyL82;
    } else
        goto CPyL72;
CPyL30: ;
    cpy_r_r67 = (PyObject *)CPyType_nodes___TypeAlias;
    cpy_r_r68 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r69 = *(PyObject * *)cpy_r_r68;
    cpy_r_r70 = cpy_r_r69 == cpy_r_r67;
    if (cpy_r_r70) {
        goto CPyL92;
    } else
        goto CPyL38;
CPyL31: ;
    cpy_r_r71 = CPyStatics[86]; /* 'TypeAlias' */
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___TypeAlias))
        cpy_r_r72 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 198, CPyStatic_astdiff___globals, "mypy.nodes.TypeAlias", cpy_r_node);
        goto CPyL84;
    }
    cpy_r_r73 = ((mypy___nodes___TypeAliasObject *)cpy_r_r72)->_alias_tvars;
    CPy_INCREF(cpy_r_r73);
    cpy_r_r74 = CPyDef_astdiff___snapshot_types(cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 198, CPyStatic_astdiff___globals);
        goto CPyL84;
    }
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___TypeAlias))
        cpy_r_r75 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 199, CPyStatic_astdiff___globals, "mypy.nodes.TypeAlias", cpy_r_node);
        goto CPyL93;
    }
    cpy_r_r76 = ((mypy___nodes___TypeAliasObject *)cpy_r_r75)->_normalized;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___TypeAlias))
        cpy_r_r77 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 200, CPyStatic_astdiff___globals, "mypy.nodes.TypeAlias", cpy_r_node);
        goto CPyL93;
    }
    cpy_r_r78 = ((mypy___nodes___TypeAliasObject *)cpy_r_r77)->_no_args;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___TypeAlias))
        cpy_r_r79 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 201, CPyStatic_astdiff___globals, "mypy.nodes.TypeAlias", cpy_r_node);
        goto CPyL93;
    }
    cpy_r_r80 = ((mypy___nodes___TypeAliasObject *)cpy_r_r79)->_target;
    CPy_INCREF(cpy_r_r80);
    CPy_DECREF(cpy_r_node);
    cpy_r_r81 = CPyDef_astdiff___snapshot_optional_type(cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 201, CPyStatic_astdiff___globals);
        goto CPyL94;
    }
    cpy_r_r82.f0 = cpy_r_r71;
    cpy_r_r82.f1 = cpy_r_r74;
    cpy_r_r82.f2 = cpy_r_r76;
    cpy_r_r82.f3 = cpy_r_r78;
    cpy_r_r82.f4 = cpy_r_r81;
    CPy_INCREF(cpy_r_r82.f0);
    CPy_INCREF(cpy_r_r82.f1);
    CPy_INCREF(cpy_r_r82.f4);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r83 = PyTuple_New(5);
    if (unlikely(cpy_r_r83 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6308 = cpy_r_r82.f0;
    PyTuple_SET_ITEM(cpy_r_r83, 0, __tmp6308);
    PyObject *__tmp6309 = cpy_r_r82.f1;
    PyTuple_SET_ITEM(cpy_r_r83, 1, __tmp6309);
    PyObject *__tmp6310 = cpy_r_r82.f2 ? Py_True : Py_False;
    CPy_INCREF(__tmp6310);
    PyTuple_SET_ITEM(cpy_r_r83, 2, __tmp6310);
    PyObject *__tmp6311 = cpy_r_r82.f3 ? Py_True : Py_False;
    CPy_INCREF(__tmp6311);
    PyTuple_SET_ITEM(cpy_r_r83, 3, __tmp6311);
    PyObject *__tmp6312 = cpy_r_r82.f4;
    PyTuple_SET_ITEM(cpy_r_r83, 4, __tmp6312);
    cpy_r_r84 = CPyDict_SetItem(cpy_r_result, cpy_r_name, cpy_r_r83);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 196, CPyStatic_astdiff___globals);
        goto CPyL82;
    } else
        goto CPyL72;
CPyL38: ;
    cpy_r_r86 = (PyObject *)CPyType_nodes___ParamSpecExpr;
    cpy_r_r87 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r88 = *(PyObject * *)cpy_r_r87;
    cpy_r_r89 = cpy_r_r88 == cpy_r_r86;
    if (cpy_r_r89) {
        goto CPyL95;
    } else
        goto CPyL45;
CPyL39: ;
    cpy_r_r90 = CPyStatics[4983]; /* 'ParamSpec' */
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___ParamSpecExpr))
        cpy_r_r91 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 206, CPyStatic_astdiff___globals, "mypy.nodes.ParamSpecExpr", cpy_r_node);
        goto CPyL84;
    }
    cpy_r_r92 = ((mypy___nodes___ParamSpecExprObject *)cpy_r_r91)->_variance;
    CPyTagged_INCREF(cpy_r_r92);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___ParamSpecExpr))
        cpy_r_r93 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 207, CPyStatic_astdiff___globals, "mypy.nodes.ParamSpecExpr", cpy_r_node);
        goto CPyL96;
    }
    cpy_r_r94 = ((mypy___nodes___ParamSpecExprObject *)cpy_r_r93)->_upper_bound;
    CPy_INCREF(cpy_r_r94);
    cpy_r_r95 = CPyDef_astdiff___snapshot_type(cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 207, CPyStatic_astdiff___globals);
        goto CPyL96;
    }
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___ParamSpecExpr))
        cpy_r_r96 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 208, CPyStatic_astdiff___globals, "mypy.nodes.ParamSpecExpr", cpy_r_node);
        goto CPyL97;
    }
    cpy_r_r97 = ((mypy___nodes___ParamSpecExprObject *)cpy_r_r96)->_default;
    CPy_INCREF(cpy_r_r97);
    CPy_DECREF(cpy_r_node);
    cpy_r_r98 = CPyDef_astdiff___snapshot_type(cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 208, CPyStatic_astdiff___globals);
        goto CPyL98;
    }
    cpy_r_r99.f0 = cpy_r_r90;
    cpy_r_r99.f1 = cpy_r_r92;
    cpy_r_r99.f2 = cpy_r_r95;
    cpy_r_r99.f3 = cpy_r_r98;
    CPy_INCREF(cpy_r_r99.f0);
    CPyTagged_INCREF(cpy_r_r99.f1);
    CPy_INCREF(cpy_r_r99.f2);
    CPy_INCREF(cpy_r_r99.f3);
    CPyTagged_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r98);
    cpy_r_r100 = PyTuple_New(4);
    if (unlikely(cpy_r_r100 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6313 = cpy_r_r99.f0;
    PyTuple_SET_ITEM(cpy_r_r100, 0, __tmp6313);
    PyObject *__tmp6314 = CPyTagged_StealAsObject(cpy_r_r99.f1);
    PyTuple_SET_ITEM(cpy_r_r100, 1, __tmp6314);
    PyObject *__tmp6315 = cpy_r_r99.f2;
    PyTuple_SET_ITEM(cpy_r_r100, 2, __tmp6315);
    PyObject *__tmp6316 = cpy_r_r99.f3;
    PyTuple_SET_ITEM(cpy_r_r100, 3, __tmp6316);
    cpy_r_r101 = CPyDict_SetItem(cpy_r_result, cpy_r_name, cpy_r_r100);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 204, CPyStatic_astdiff___globals);
        goto CPyL82;
    } else
        goto CPyL72;
CPyL45: ;
    cpy_r_r103 = (PyObject *)CPyType_nodes___TypeVarTupleExpr;
    cpy_r_r104 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r105 = *(PyObject * *)cpy_r_r104;
    cpy_r_r106 = cpy_r_r105 == cpy_r_r103;
    if (cpy_r_r106) {
        goto CPyL99;
    } else
        goto CPyL52;
CPyL46: ;
    cpy_r_r107 = CPyStatics[4267]; /* 'TypeVarTuple' */
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___TypeVarTupleExpr))
        cpy_r_r108 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 213, CPyStatic_astdiff___globals, "mypy.nodes.TypeVarTupleExpr", cpy_r_node);
        goto CPyL84;
    }
    cpy_r_r109 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_r108)->_variance;
    CPyTagged_INCREF(cpy_r_r109);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___TypeVarTupleExpr))
        cpy_r_r110 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 214, CPyStatic_astdiff___globals, "mypy.nodes.TypeVarTupleExpr", cpy_r_node);
        goto CPyL100;
    }
    cpy_r_r111 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_r110)->_upper_bound;
    CPy_INCREF(cpy_r_r111);
    cpy_r_r112 = CPyDef_astdiff___snapshot_type(cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 214, CPyStatic_astdiff___globals);
        goto CPyL100;
    }
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___TypeVarTupleExpr))
        cpy_r_r113 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 215, CPyStatic_astdiff___globals, "mypy.nodes.TypeVarTupleExpr", cpy_r_node);
        goto CPyL101;
    }
    cpy_r_r114 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_r113)->_default;
    CPy_INCREF(cpy_r_r114);
    CPy_DECREF(cpy_r_node);
    cpy_r_r115 = CPyDef_astdiff___snapshot_type(cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 215, CPyStatic_astdiff___globals);
        goto CPyL102;
    }
    cpy_r_r116.f0 = cpy_r_r107;
    cpy_r_r116.f1 = cpy_r_r109;
    cpy_r_r116.f2 = cpy_r_r112;
    cpy_r_r116.f3 = cpy_r_r115;
    CPy_INCREF(cpy_r_r116.f0);
    CPyTagged_INCREF(cpy_r_r116.f1);
    CPy_INCREF(cpy_r_r116.f2);
    CPy_INCREF(cpy_r_r116.f3);
    CPyTagged_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r117 = PyTuple_New(4);
    if (unlikely(cpy_r_r117 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6317 = cpy_r_r116.f0;
    PyTuple_SET_ITEM(cpy_r_r117, 0, __tmp6317);
    PyObject *__tmp6318 = CPyTagged_StealAsObject(cpy_r_r116.f1);
    PyTuple_SET_ITEM(cpy_r_r117, 1, __tmp6318);
    PyObject *__tmp6319 = cpy_r_r116.f2;
    PyTuple_SET_ITEM(cpy_r_r117, 2, __tmp6319);
    PyObject *__tmp6320 = cpy_r_r116.f3;
    PyTuple_SET_ITEM(cpy_r_r117, 3, __tmp6320);
    cpy_r_r118 = CPyDict_SetItem(cpy_r_result, cpy_r_name, cpy_r_r117);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r117);
    cpy_r_r119 = cpy_r_r118 >= 0;
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 211, CPyStatic_astdiff___globals);
        goto CPyL82;
    } else
        goto CPyL72;
CPyL52: ;
    cpy_r_r120 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_symbol)->_kind;
    cpy_r_r121 = cpy_r_r120 & 1;
    cpy_r_r122 = cpy_r_r121 == 0;
    if (!cpy_r_r122) goto CPyL54;
    cpy_r_r123 = cpy_r_r120 != 6;
    cpy_r_r124 = cpy_r_r123;
    goto CPyL55;
CPyL54: ;
    cpy_r_r125 = CPyTagged_IsEq_(cpy_r_r120, 6);
    cpy_r_r126 = cpy_r_r125 ^ 1;
    cpy_r_r124 = cpy_r_r126;
CPyL55: ;
    CPy_DECREF(cpy_r_symbol);
    if (cpy_r_r124) {
        goto CPyL58;
    } else
        goto CPyL103;
CPyL56: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r127 = 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 218, CPyStatic_astdiff___globals);
        goto CPyL75;
    }
    CPy_Unreachable();
CPyL58: ;
    cpy_r_r128 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r129 = cpy_r_node != cpy_r_r128;
    if (!cpy_r_r129) goto CPyL70;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r130 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 177, CPyStatic_astdiff___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL104;
    }
    cpy_r_r131 = PyObject_IsTrue(cpy_r_r130);
    CPy_DECREF(cpy_r_r130);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 177, CPyStatic_astdiff___globals);
        goto CPyL104;
    }
    cpy_r_r133 = cpy_r_r131;
    if (!cpy_r_r133) goto CPyL70;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r134 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 219, CPyStatic_astdiff___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL104;
    }
    cpy_r_r135 = CPY_GET_ATTR_TRAIT(cpy_r_r134, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 219, CPyStatic_astdiff___globals);
        goto CPyL104;
    }
CPyL64: ;
    cpy_r_r136 = CPyDef_mypy___util___get_prefix(cpy_r_r135);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 219, CPyStatic_astdiff___globals);
        goto CPyL104;
    }
    cpy_r_r137 = PyUnicode_Compare(cpy_r_r136, cpy_r_name_prefix);
    CPy_DECREF(cpy_r_r136);
    cpy_r_r138 = cpy_r_r137 == -1;
    if (!cpy_r_r138) goto CPyL68;
    cpy_r_r139 = PyErr_Occurred();
    cpy_r_r140 = cpy_r_r139 != NULL;
    if (!cpy_r_r140) goto CPyL68;
    cpy_r_r141 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 219, CPyStatic_astdiff___globals);
        goto CPyL104;
    }
CPyL68: ;
    cpy_r_r142 = cpy_r_r137 != 0;
    if (cpy_r_r142) {
        goto CPyL105;
    } else
        goto CPyL70;
CPyL69: ;
    cpy_r_r143 = CPyStatics[5290]; /* 'CrossRef' */
    cpy_r_r144.f0 = cpy_r_r143;
    cpy_r_r144.f1 = cpy_r_common;
    CPy_INCREF(cpy_r_r144.f0);
    CPy_INCREF(cpy_r_r144.f1.f0);
    CPyTagged_INCREF(cpy_r_r144.f1.f1);
    CPy_DECREF(cpy_r_common.f0);
    CPyTagged_DECREF(cpy_r_common.f1);
    cpy_r_r145 = PyTuple_New(2);
    if (unlikely(cpy_r_r145 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6321 = cpy_r_r144.f0;
    PyTuple_SET_ITEM(cpy_r_r145, 0, __tmp6321);
    PyObject *__tmp6322 = PyTuple_New(3);
    if (unlikely(__tmp6322 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6323 = cpy_r_r144.f1.f0;
    PyTuple_SET_ITEM(__tmp6322, 0, __tmp6323);
    PyObject *__tmp6324 = CPyTagged_StealAsObject(cpy_r_r144.f1.f1);
    PyTuple_SET_ITEM(__tmp6322, 1, __tmp6324);
    PyObject *__tmp6325 = cpy_r_r144.f1.f2 ? Py_True : Py_False;
    CPy_INCREF(__tmp6325);
    PyTuple_SET_ITEM(__tmp6322, 2, __tmp6325);
    PyTuple_SET_ITEM(cpy_r_r145, 1, __tmp6322);
    cpy_r_r146 = CPyDict_SetItem(cpy_r_result, cpy_r_name, cpy_r_r145);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r145);
    cpy_r_r147 = cpy_r_r146 >= 0;
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 221, CPyStatic_astdiff___globals);
        goto CPyL82;
    } else
        goto CPyL72;
CPyL70: ;
    cpy_r_r148 = PyTuple_New(3);
    if (unlikely(cpy_r_r148 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6326 = cpy_r_common.f0;
    PyTuple_SET_ITEM(cpy_r_r148, 0, __tmp6326);
    PyObject *__tmp6327 = CPyTagged_StealAsObject(cpy_r_common.f1);
    PyTuple_SET_ITEM(cpy_r_r148, 1, __tmp6327);
    PyObject *__tmp6328 = cpy_r_common.f2 ? Py_True : Py_False;
    CPy_INCREF(__tmp6328);
    PyTuple_SET_ITEM(cpy_r_r148, 2, __tmp6328);
    cpy_r_r149 = CPyDef_astdiff___snapshot_definition(cpy_r_node, cpy_r_r148);
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 223, CPyStatic_astdiff___globals);
        goto CPyL106;
    }
    cpy_r_r150 = CPyDict_SetItem(cpy_r_result, cpy_r_name, cpy_r_r149);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r149);
    cpy_r_r151 = cpy_r_r150 >= 0;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 223, CPyStatic_astdiff___globals);
        goto CPyL82;
    }
CPyL72: ;
    cpy_r_r152 = CPyDict_CheckSize(cpy_r_table, cpy_r_r3);
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 176, CPyStatic_astdiff___globals);
        goto CPyL82;
    } else
        goto CPyL2;
CPyL73: ;
    cpy_r_r153 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 176, CPyStatic_astdiff___globals);
        goto CPyL76;
    }
    return cpy_r_result;
CPyL75: ;
    cpy_r_r154 = NULL;
    return cpy_r_r154;
CPyL76: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL75;
CPyL77: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    goto CPyL73;
CPyL78: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r9);
    goto CPyL75;
CPyL79: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r10);
    goto CPyL75;
CPyL80: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_symbol);
    CPy_DecRef(cpy_r_node);
    goto CPyL75;
CPyL81: ;
    CPy_DECREF(cpy_r_symbol);
    CPy_DECREF(cpy_r_node);
    goto CPyL14;
CPyL82: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    goto CPyL75;
CPyL83: ;
    CPy_DECREF(cpy_r_symbol);
    CPy_DECREF(cpy_r_common.f0);
    CPyTagged_DECREF(cpy_r_common.f1);
    goto CPyL16;
CPyL84: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    goto CPyL75;
CPyL85: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    CPyTagged_DecRef(cpy_r_r41);
    goto CPyL75;
CPyL86: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    CPyTagged_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r43);
    goto CPyL75;
CPyL87: ;
    CPy_DECREF(cpy_r_r43);
    goto CPyL25;
CPyL88: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    CPyTagged_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r46);
    goto CPyL75;
CPyL89: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    CPyTagged_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r46);
    goto CPyL75;
CPyL90: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    CPyTagged_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r59);
    goto CPyL75;
CPyL91: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPyTagged_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r59);
    goto CPyL75;
CPyL92: ;
    CPy_DECREF(cpy_r_symbol);
    CPy_DECREF(cpy_r_common.f0);
    CPyTagged_DECREF(cpy_r_common.f1);
    goto CPyL31;
CPyL93: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r74);
    goto CPyL75;
CPyL94: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r74);
    goto CPyL75;
CPyL95: ;
    CPy_DECREF(cpy_r_symbol);
    CPy_DECREF(cpy_r_common.f0);
    CPyTagged_DECREF(cpy_r_common.f1);
    goto CPyL39;
CPyL96: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    CPyTagged_DecRef(cpy_r_r92);
    goto CPyL75;
CPyL97: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    CPyTagged_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r95);
    goto CPyL75;
CPyL98: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPyTagged_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r95);
    goto CPyL75;
CPyL99: ;
    CPy_DECREF(cpy_r_symbol);
    CPy_DECREF(cpy_r_common.f0);
    CPyTagged_DECREF(cpy_r_common.f1);
    goto CPyL46;
CPyL100: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    CPyTagged_DecRef(cpy_r_r109);
    goto CPyL75;
CPyL101: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    CPyTagged_DecRef(cpy_r_r109);
    CPy_DecRef(cpy_r_r112);
    goto CPyL75;
CPyL102: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPyTagged_DecRef(cpy_r_r109);
    CPy_DecRef(cpy_r_r112);
    goto CPyL75;
CPyL103: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_common.f0);
    CPyTagged_DECREF(cpy_r_common.f1);
    goto CPyL56;
CPyL104: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_common.f0);
    CPyTagged_DecRef(cpy_r_common.f1);
    goto CPyL75;
CPyL105: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL69;
CPyL106: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    goto CPyL75;
}

PyObject *CPyPy_astdiff___snapshot_symbol_table(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name_prefix", "table", 0};
    static CPyArg_Parser parser = {"OO:snapshot_symbol_table", kwlist, 0};
    PyObject *obj_name_prefix;
    PyObject *obj_table;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name_prefix, &obj_table)) {
        return NULL;
    }
    PyObject *arg_name_prefix;
    if (likely(PyUnicode_Check(obj_name_prefix)))
        arg_name_prefix = obj_name_prefix;
    else {
        CPy_TypeError("str", obj_name_prefix); 
        goto fail;
    }
    PyObject *arg_table;
    if (likely(PyDict_Check(obj_table)))
        arg_table = obj_table;
    else {
        CPy_TypeError("dict", obj_table); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___snapshot_symbol_table(arg_name_prefix, arg_table);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_symbol_table", 165, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___snapshot_definition(PyObject *cpy_r_node, PyObject *cpy_r_common) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_signature;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_impl;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyPtr cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    CPyPtr cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_is_trivial_body;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_dataclass_transform_spec;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    int32_t cpy_r_r165;
    char cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    CPyPtr cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject **cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    tuple_T9OOOOOOOOO cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    CPyPtr cpy_r_r186;
    PyObject *cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    char cpy_r_r194;
    tuple_T4OOOC cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    CPyPtr cpy_r_r198;
    PyObject *cpy_r_r199;
    char cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    char cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    tuple_T4OCOO cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    CPyPtr cpy_r_r214;
    PyObject *cpy_r_r215;
    char cpy_r_r216;
    char cpy_r_r217;
    PyObject *cpy_r_r218;
    CPyPtr cpy_r_r219;
    PyObject *cpy_r_r220;
    char cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    char cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    char cpy_r_r229;
    PyObject *cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    char cpy_r_r233;
    PyObject *cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    char cpy_r_r237;
    PyObject *cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    char cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    CPyPtr cpy_r_r253;
    int64_t cpy_r_r254;
    PyObject *cpy_r_r255;
    CPyTagged cpy_r_r256;
    CPyPtr cpy_r_r257;
    int64_t cpy_r_r258;
    CPyTagged cpy_r_r259;
    char cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r263;
    char cpy_r_r264;
    CPyTagged cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    CPyPtr cpy_r_r269;
    int64_t cpy_r_r270;
    PyObject *cpy_r_r271;
    CPyTagged cpy_r_r272;
    CPyPtr cpy_r_r273;
    int64_t cpy_r_r274;
    CPyTagged cpy_r_r275;
    char cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_tdef;
    PyObject *cpy_r_r279;
    char cpy_r_r280;
    CPyTagged cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    CPyPtr cpy_r_r284;
    int64_t cpy_r_r285;
    PyObject *cpy_r_r286;
    CPyTagged cpy_r_r287;
    CPyPtr cpy_r_r288;
    int64_t cpy_r_r289;
    CPyTagged cpy_r_r290;
    char cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_base_2;
    PyObject *cpy_r_r294;
    char cpy_r_r295;
    CPyTagged cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    CPyPtr cpy_r_r299;
    int64_t cpy_r_r300;
    PyObject *cpy_r_r301;
    CPyTagged cpy_r_r302;
    CPyPtr cpy_r_r303;
    int64_t cpy_r_r304;
    CPyTagged cpy_r_r305;
    char cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r309;
    char cpy_r_r310;
    CPyTagged cpy_r_r311;
    PyObject *cpy_r_r312;
    char cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    tuple_T15CCCCCCCOOOOOOOO cpy_r_r318;
    tuple_T15CCCCCCCOOOOOOOO cpy_r_attrs;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_prefix;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_symbol_table;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject **cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    tuple_T2OO cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_r337;
    int32_t cpy_r_r338;
    char cpy_r_r339;
    PyObject *cpy_r_r340;
    tuple_T4OOT15CCCCCCCOOOOOOOOO cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject **cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    cpy_r_r0 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    if (!cpy_r_r9) goto CPyL113;
    cpy_r_r14 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r15 = CPy_TypeCheck(cpy_r_node, cpy_r_r14);
    if (!cpy_r_r15) goto CPyL11;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r16 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 235, CPyStatic_astdiff___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL218;
    }
    cpy_r_r17 = CPyStatics[802]; /* 'type' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 235, CPyStatic_astdiff___globals);
        goto CPyL218;
    }
    cpy_r_r19 = cpy_r_r18;
    goto CPyL13;
CPyL11: ;
    CPy_INCREF(cpy_r_node);
    cpy_r_r20 = cpy_r_node;
    cpy_r_r21 = CPyStatics[802]; /* 'type' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 235, CPyStatic_astdiff___globals);
        goto CPyL218;
    }
    cpy_r_r19 = cpy_r_r22;
CPyL13: ;
    cpy_r_r23 = PyObject_IsTrue(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", -1, CPyStatic_astdiff___globals);
        goto CPyL218;
    }
    cpy_r_r25 = cpy_r_r23;
    if (!cpy_r_r25) goto CPyL24;
    cpy_r_r26 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r27 = CPy_TypeCheck(cpy_r_node, cpy_r_r26);
    if (!cpy_r_r27) goto CPyL19;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r28 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 236, CPyStatic_astdiff___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL218;
    }
    cpy_r_r29 = CPyStatics[802]; /* 'type' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 236, CPyStatic_astdiff___globals);
        goto CPyL218;
    }
    cpy_r_r31 = cpy_r_r30;
    goto CPyL21;
CPyL19: ;
    CPy_INCREF(cpy_r_node);
    cpy_r_r32 = cpy_r_node;
    cpy_r_r33 = CPyStatics[802]; /* 'type' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 236, CPyStatic_astdiff___globals);
        goto CPyL218;
    }
    cpy_r_r31 = cpy_r_r34;
CPyL21: ;
    if (likely(PyObject_TypeCheck(cpy_r_r31, CPyType_types___Type)))
        cpy_r_r35 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 236, CPyStatic_astdiff___globals, "mypy.types.Type", cpy_r_r31);
        goto CPyL218;
    }
    cpy_r_r36 = CPyDef_astdiff___snapshot_type(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 236, CPyStatic_astdiff___globals);
        goto CPyL218;
    }
    cpy_r_signature = cpy_r_r36;
    goto CPyL27;
CPyL24: ;
    CPy_INCREF(cpy_r_node);
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r37 = cpy_r_node;
    else {
        cpy_r_r37 = NULL;
    }
    if (cpy_r_r37 != NULL) goto __LL6329;
    if ((Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_node) == CPyType_nodes___LambdaExpr))
        cpy_r_r37 = cpy_r_node;
    else {
        cpy_r_r37 = NULL;
    }
    if (cpy_r_r37 != NULL) goto __LL6329;
    CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 238, CPyStatic_astdiff___globals, "union[mypy.nodes.OverloadedFuncDef, mypy.nodes.FuncItem]", cpy_r_node);
    goto CPyL218;
__LL6329: ;
    cpy_r_r38 = CPyDef_astdiff___snapshot_untyped_signature(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 238, CPyStatic_astdiff___globals);
        goto CPyL218;
    }
    cpy_r_signature = cpy_r_r38;
CPyL27: ;
    cpy_r_r39 = Py_None;
    CPy_INCREF(cpy_r_r39);
    if (Py_TYPE(cpy_r_r39) == CPyType_nodes___FuncDef)
        cpy_r_r40 = cpy_r_r39;
    else {
        cpy_r_r40 = NULL;
    }
    if (cpy_r_r40 != NULL) goto __LL6330;
    if (cpy_r_r39 == Py_None)
        cpy_r_r40 = cpy_r_r39;
    else {
        cpy_r_r40 = NULL;
    }
    if (cpy_r_r40 != NULL) goto __LL6330;
    CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 239, CPyStatic_astdiff___globals, "mypy.nodes.FuncDef or None", cpy_r_r39);
    goto CPyL219;
__LL6330: ;
    cpy_r_impl = cpy_r_r40;
    cpy_r_r41 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    cpy_r_r45 = cpy_r_r44 ? Py_True : Py_False;
    cpy_r_r46 = PyObject_IsTrue(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", -1, CPyStatic_astdiff___globals);
        goto CPyL220;
    }
    cpy_r_r48 = cpy_r_r46;
    if (cpy_r_r48) {
        goto CPyL221;
    } else
        goto CPyL32;
CPyL30: ;
    CPy_INCREF(cpy_r_node);
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef)
        cpy_r_r49 = cpy_r_node;
    else {
        cpy_r_r49 = NULL;
    }
    if (cpy_r_r49 != NULL) goto __LL6331;
    if (cpy_r_node == Py_None)
        cpy_r_r49 = cpy_r_node;
    else {
        cpy_r_r49 = NULL;
    }
    if (cpy_r_r49 != NULL) goto __LL6331;
    CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 241, CPyStatic_astdiff___globals, "mypy.nodes.FuncDef or None", cpy_r_node);
    goto CPyL219;
__LL6331: ;
    cpy_r_impl = cpy_r_r49;
    goto CPyL67;
CPyL32: ;
    cpy_r_r50 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r51 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r52 = *(PyObject * *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 == cpy_r_r50;
    cpy_r_r54 = cpy_r_r53 ? Py_True : Py_False;
    cpy_r_r55 = PyObject_IsTrue(cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", -1, CPyStatic_astdiff___globals);
        goto CPyL220;
    }
    cpy_r_r57 = cpy_r_r55;
    if (!cpy_r_r57) goto CPyL67;
    cpy_r_r58 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r59 = CPy_TypeCheck(cpy_r_node, cpy_r_r58);
    if (!cpy_r_r59) goto CPyL38;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r60 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 242, CPyStatic_astdiff___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL220;
    }
    cpy_r_r61 = CPyStatics[3940]; /* 'impl' */
    cpy_r_r62 = CPyObject_GetAttr(cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 242, CPyStatic_astdiff___globals);
        goto CPyL220;
    }
    cpy_r_r63 = cpy_r_r62;
    goto CPyL40;
CPyL38: ;
    CPy_INCREF(cpy_r_node);
    cpy_r_r64 = cpy_r_node;
    cpy_r_r65 = CPyStatics[3940]; /* 'impl' */
    cpy_r_r66 = CPyObject_GetAttr(cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 242, CPyStatic_astdiff___globals);
        goto CPyL220;
    }
    cpy_r_r63 = cpy_r_r66;
CPyL40: ;
    cpy_r_r67 = PyObject_IsTrue(cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", -1, CPyStatic_astdiff___globals);
        goto CPyL220;
    }
    cpy_r_r69 = cpy_r_r67;
    if (cpy_r_r69) {
        goto CPyL222;
    } else
        goto CPyL67;
CPyL42: ;
    cpy_r_r70 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r71 = CPy_TypeCheck(cpy_r_node, cpy_r_r70);
    if (!cpy_r_r71) goto CPyL46;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r72 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 243, CPyStatic_astdiff___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL219;
    }
    cpy_r_r73 = CPyStatics[3940]; /* 'impl' */
    cpy_r_r74 = CPyObject_GetAttr(cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 243, CPyStatic_astdiff___globals);
        goto CPyL219;
    }
    cpy_r_r75 = cpy_r_r74;
    goto CPyL48;
CPyL46: ;
    CPy_INCREF(cpy_r_node);
    cpy_r_r76 = cpy_r_node;
    cpy_r_r77 = CPyStatics[3940]; /* 'impl' */
    cpy_r_r78 = CPyObject_GetAttr(cpy_r_r76, cpy_r_r77);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 243, CPyStatic_astdiff___globals);
        goto CPyL219;
    }
    cpy_r_r75 = cpy_r_r78;
CPyL48: ;
    cpy_r_r79 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r80 = (CPyPtr)&((PyObject *)cpy_r_r75)->ob_type;
    cpy_r_r81 = *(PyObject * *)cpy_r_r80;
    CPy_DECREF(cpy_r_r75);
    cpy_r_r82 = cpy_r_r81 == cpy_r_r79;
    cpy_r_r83 = cpy_r_r82 ? Py_True : Py_False;
    cpy_r_r84 = PyObject_IsTrue(cpy_r_r83);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", -1, CPyStatic_astdiff___globals);
        goto CPyL219;
    }
    cpy_r_r86 = cpy_r_r84;
    if (!cpy_r_r86) goto CPyL58;
    cpy_r_r87 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r88 = CPy_TypeCheck(cpy_r_node, cpy_r_r87);
    if (!cpy_r_r88) goto CPyL54;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r89 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 243, CPyStatic_astdiff___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL219;
    }
    cpy_r_r90 = CPyStatics[3940]; /* 'impl' */
    cpy_r_r91 = CPyObject_GetAttr(cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 243, CPyStatic_astdiff___globals);
        goto CPyL219;
    }
    cpy_r_r92 = cpy_r_r91;
    goto CPyL56;
CPyL54: ;
    CPy_INCREF(cpy_r_node);
    cpy_r_r93 = cpy_r_node;
    cpy_r_r94 = CPyStatics[3940]; /* 'impl' */
    cpy_r_r95 = CPyObject_GetAttr(cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 243, CPyStatic_astdiff___globals);
        goto CPyL219;
    }
    cpy_r_r92 = cpy_r_r95;
CPyL56: ;
    cpy_r_r96 = CPyStatics[2429]; /* 'func' */
    cpy_r_r97 = CPyObject_GetAttr(cpy_r_r92, cpy_r_r96);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 243, CPyStatic_astdiff___globals);
        goto CPyL219;
    }
    cpy_r_r98 = cpy_r_r97;
    goto CPyL65;
CPyL58: ;
    cpy_r_r99 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r100 = CPy_TypeCheck(cpy_r_node, cpy_r_r99);
    if (!cpy_r_r100) goto CPyL62;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r101 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 243, CPyStatic_astdiff___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL219;
    }
    cpy_r_r102 = CPyStatics[3940]; /* 'impl' */
    cpy_r_r103 = CPyObject_GetAttr(cpy_r_r101, cpy_r_r102);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 243, CPyStatic_astdiff___globals);
        goto CPyL219;
    }
    cpy_r_r104 = cpy_r_r103;
    goto CPyL64;
CPyL62: ;
    CPy_INCREF(cpy_r_node);
    cpy_r_r105 = cpy_r_node;
    cpy_r_r106 = CPyStatics[3940]; /* 'impl' */
    cpy_r_r107 = CPyObject_GetAttr(cpy_r_r105, cpy_r_r106);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 243, CPyStatic_astdiff___globals);
        goto CPyL219;
    }
    cpy_r_r104 = cpy_r_r107;
CPyL64: ;
    cpy_r_r98 = cpy_r_r104;
CPyL65: ;
    if (Py_TYPE(cpy_r_r98) == CPyType_nodes___FuncDef)
        cpy_r_r108 = cpy_r_r98;
    else {
        cpy_r_r108 = NULL;
    }
    if (cpy_r_r108 != NULL) goto __LL6332;
    if (cpy_r_r98 == Py_None)
        cpy_r_r108 = cpy_r_r98;
    else {
        cpy_r_r108 = NULL;
    }
    if (cpy_r_r108 != NULL) goto __LL6332;
    CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 243, CPyStatic_astdiff___globals, "mypy.nodes.FuncDef or None", cpy_r_r98);
    goto CPyL219;
__LL6332: ;
    cpy_r_impl = cpy_r_r108;
CPyL67: ;
    cpy_r_r109 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r110 = cpy_r_impl != cpy_r_r109;
    if (!cpy_r_r110) goto CPyL223;
    cpy_r_r111 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r112 = (CPyPtr)&((PyObject *)cpy_r_impl)->ob_type;
    cpy_r_r113 = *(PyObject * *)cpy_r_r112;
    cpy_r_r114 = cpy_r_r113 == cpy_r_r111;
    if (!cpy_r_r114) goto CPyL72;
    if (likely(cpy_r_impl != Py_None))
        cpy_r_r115 = cpy_r_impl;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 244, CPyStatic_astdiff___globals, "mypy.nodes.FuncDef", cpy_r_impl);
        goto CPyL219;
    }
    cpy_r_r116 = ((mypy___nodes___FuncDefObject *)cpy_r_r115)->_is_trivial_body;
    if (unlikely(cpy_r_r116 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'is_trivial_body' of 'FuncDef' undefined");
    }
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r116 == 2)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 244, CPyStatic_astdiff___globals);
        goto CPyL219;
    }
CPyL71: ;
    cpy_r_r117 = cpy_r_r116 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r117);
    cpy_r_r118 = cpy_r_r117;
    goto CPyL74;
CPyL72: ;
    cpy_r_r119 = cpy_r_impl;
    cpy_r_r120 = CPyStatics[1011]; /* 'is_trivial_body' */
    cpy_r_r121 = CPyObject_GetAttr(cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 244, CPyStatic_astdiff___globals);
        goto CPyL219;
    }
    cpy_r_r118 = cpy_r_r121;
CPyL74: ;
    cpy_r_r122 = cpy_r_r118;
    goto CPyL76;
CPyL75: ;
    cpy_r_r123 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r123);
    cpy_r_r122 = cpy_r_r123;
CPyL76: ;
    cpy_r_is_trivial_body = cpy_r_r122;
    cpy_r_r124 = CPyDef_semanal_shared___find_dataclass_transform_spec(cpy_r_node);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 245, CPyStatic_astdiff___globals);
        goto CPyL224;
    }
    cpy_r_dataclass_transform_spec = cpy_r_r124;
    cpy_r_r125 = CPyStatics[4330]; /* 'Func' */
    cpy_r_r126 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r127 = CPy_TypeCheck(cpy_r_node, cpy_r_r126);
    if (!cpy_r_r127) goto CPyL81;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r128 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 249, CPyStatic_astdiff___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL225;
    }
    cpy_r_r129 = CPyStatics[4093]; /* 'is_property' */
    cpy_r_r130 = CPyObject_GetAttr(cpy_r_r128, cpy_r_r129);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 249, CPyStatic_astdiff___globals);
        goto CPyL225;
    }
    cpy_r_r131 = cpy_r_r130;
    goto CPyL83;
CPyL81: ;
    CPy_INCREF(cpy_r_node);
    cpy_r_r132 = cpy_r_node;
    cpy_r_r133 = CPyStatics[4093]; /* 'is_property' */
    cpy_r_r134 = CPyObject_GetAttr(cpy_r_r132, cpy_r_r133);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 249, CPyStatic_astdiff___globals);
        goto CPyL225;
    }
    cpy_r_r131 = cpy_r_r134;
CPyL83: ;
    cpy_r_r135 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r136 = CPy_TypeCheck(cpy_r_node, cpy_r_r135);
    if (!cpy_r_r136) goto CPyL87;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r137 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 250, CPyStatic_astdiff___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL226;
    }
    cpy_r_r138 = CPyStatics[4016]; /* 'is_final' */
    cpy_r_r139 = CPyObject_GetAttr(cpy_r_r137, cpy_r_r138);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 250, CPyStatic_astdiff___globals);
        goto CPyL226;
    }
    cpy_r_r140 = cpy_r_r139;
    goto CPyL89;
CPyL87: ;
    CPy_INCREF(cpy_r_node);
    cpy_r_r141 = cpy_r_node;
    cpy_r_r142 = CPyStatics[4016]; /* 'is_final' */
    cpy_r_r143 = CPyObject_GetAttr(cpy_r_r141, cpy_r_r142);
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 250, CPyStatic_astdiff___globals);
        goto CPyL226;
    }
    cpy_r_r140 = cpy_r_r143;
CPyL89: ;
    cpy_r_r144 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r145 = CPy_TypeCheck(cpy_r_node, cpy_r_r144);
    if (!cpy_r_r145) goto CPyL93;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r146 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 251, CPyStatic_astdiff___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL227;
    }
    cpy_r_r147 = CPyStatics[767]; /* 'is_class' */
    cpy_r_r148 = CPyObject_GetAttr(cpy_r_r146, cpy_r_r147);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 251, CPyStatic_astdiff___globals);
        goto CPyL227;
    }
    cpy_r_r149 = cpy_r_r148;
    goto CPyL95;
CPyL93: ;
    CPy_INCREF(cpy_r_node);
    cpy_r_r150 = cpy_r_node;
    cpy_r_r151 = CPyStatics[767]; /* 'is_class' */
    cpy_r_r152 = CPyObject_GetAttr(cpy_r_r150, cpy_r_r151);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 251, CPyStatic_astdiff___globals);
        goto CPyL227;
    }
    cpy_r_r149 = cpy_r_r152;
CPyL95: ;
    cpy_r_r153 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r154 = CPy_TypeCheck(cpy_r_node, cpy_r_r153);
    if (!cpy_r_r154) goto CPyL99;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r155 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 252, CPyStatic_astdiff___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL228;
    }
    cpy_r_r156 = CPyStatics[4094]; /* 'is_static' */
    cpy_r_r157 = CPyObject_GetAttr(cpy_r_r155, cpy_r_r156);
    CPy_DECREF(cpy_r_r155);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 252, CPyStatic_astdiff___globals);
        goto CPyL228;
    }
    cpy_r_r158 = cpy_r_r157;
    goto CPyL101;
CPyL99: ;
    CPy_INCREF(cpy_r_node);
    cpy_r_r159 = cpy_r_node;
    cpy_r_r160 = CPyStatics[4094]; /* 'is_static' */
    cpy_r_r161 = CPyObject_GetAttr(cpy_r_r159, cpy_r_r160);
    CPy_DECREF(cpy_r_r159);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 252, CPyStatic_astdiff___globals);
        goto CPyL228;
    }
    cpy_r_r158 = cpy_r_r161;
CPyL101: ;
    cpy_r_r162 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r163 = cpy_r_dataclass_transform_spec != cpy_r_r162;
    cpy_r_r164 = cpy_r_r163 ? Py_True : Py_False;
    cpy_r_r165 = PyObject_IsTrue(cpy_r_r164);
    cpy_r_r166 = cpy_r_r165 >= 0;
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", -1, CPyStatic_astdiff___globals);
        goto CPyL229;
    }
    cpy_r_r167 = cpy_r_r165;
    if (!cpy_r_r167) goto CPyL230;
    cpy_r_r168 = (PyObject *)CPyType_nodes___DataclassTransformSpec;
    cpy_r_r169 = (CPyPtr)&((PyObject *)cpy_r_dataclass_transform_spec)->ob_type;
    cpy_r_r170 = *(PyObject * *)cpy_r_r169;
    cpy_r_r171 = cpy_r_r170 == cpy_r_r168;
    if (!cpy_r_r171) goto CPyL107;
    if (likely(cpy_r_dataclass_transform_spec != Py_None))
        cpy_r_r172 = cpy_r_dataclass_transform_spec;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 255, CPyStatic_astdiff___globals, "mypy.nodes.DataclassTransformSpec", cpy_r_dataclass_transform_spec);
        goto CPyL231;
    }
    cpy_r_r173 = CPyDef_nodes___DataclassTransformSpec___serialize(cpy_r_r172);
    CPy_DECREF(cpy_r_r172);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 255, CPyStatic_astdiff___globals);
        goto CPyL231;
    }
    cpy_r_r174 = cpy_r_r173;
    goto CPyL109;
CPyL107: ;
    cpy_r_r175 = cpy_r_dataclass_transform_spec;
    cpy_r_r176 = CPyStatics[3933]; /* 'serialize' */
    PyObject *cpy_r_r177[1] = {cpy_r_r175};
    cpy_r_r178 = (PyObject **)&cpy_r_r177;
    cpy_r_r179 = PyObject_VectorcallMethod(cpy_r_r176, cpy_r_r178, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 255, CPyStatic_astdiff___globals);
        goto CPyL232;
    }
    CPy_DECREF(cpy_r_r175);
    cpy_r_r174 = cpy_r_r179;
CPyL109: ;
    cpy_r_r180 = cpy_r_r174;
    goto CPyL111;
CPyL110: ;
    cpy_r_r181 = Py_None;
    CPy_INCREF(cpy_r_r181);
    cpy_r_r180 = cpy_r_r181;
CPyL111: ;
    cpy_r_r182.f0 = cpy_r_r125;
    cpy_r_r182.f1 = cpy_r_common;
    cpy_r_r182.f2 = cpy_r_r131;
    cpy_r_r182.f3 = cpy_r_r140;
    cpy_r_r182.f4 = cpy_r_r149;
    cpy_r_r182.f5 = cpy_r_r158;
    cpy_r_r182.f6 = cpy_r_signature;
    cpy_r_r182.f7 = cpy_r_is_trivial_body;
    cpy_r_r182.f8 = cpy_r_r180;
    CPy_INCREF(cpy_r_r182.f0);
    CPy_INCREF(cpy_r_r182.f1);
    CPy_INCREF(cpy_r_r182.f2);
    CPy_INCREF(cpy_r_r182.f3);
    CPy_INCREF(cpy_r_r182.f4);
    CPy_INCREF(cpy_r_r182.f5);
    CPy_INCREF(cpy_r_r182.f6);
    CPy_INCREF(cpy_r_r182.f7);
    CPy_INCREF(cpy_r_r182.f8);
    CPy_DECREF(cpy_r_r131);
    CPy_DECREF(cpy_r_r140);
    CPy_DECREF(cpy_r_r149);
    CPy_DECREF(cpy_r_r158);
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_is_trivial_body);
    CPy_DECREF(cpy_r_r180);
    cpy_r_r183 = PyTuple_New(9);
    if (unlikely(cpy_r_r183 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6333 = cpy_r_r182.f0;
    PyTuple_SET_ITEM(cpy_r_r183, 0, __tmp6333);
    PyObject *__tmp6334 = cpy_r_r182.f1;
    PyTuple_SET_ITEM(cpy_r_r183, 1, __tmp6334);
    PyObject *__tmp6335 = cpy_r_r182.f2;
    PyTuple_SET_ITEM(cpy_r_r183, 2, __tmp6335);
    PyObject *__tmp6336 = cpy_r_r182.f3;
    PyTuple_SET_ITEM(cpy_r_r183, 3, __tmp6336);
    PyObject *__tmp6337 = cpy_r_r182.f4;
    PyTuple_SET_ITEM(cpy_r_r183, 4, __tmp6337);
    PyObject *__tmp6338 = cpy_r_r182.f5;
    PyTuple_SET_ITEM(cpy_r_r183, 5, __tmp6338);
    PyObject *__tmp6339 = cpy_r_r182.f6;
    PyTuple_SET_ITEM(cpy_r_r183, 6, __tmp6339);
    PyObject *__tmp6340 = cpy_r_r182.f7;
    PyTuple_SET_ITEM(cpy_r_r183, 7, __tmp6340);
    PyObject *__tmp6341 = cpy_r_r182.f8;
    PyTuple_SET_ITEM(cpy_r_r183, 8, __tmp6341);
    if (likely(PyTuple_Check(cpy_r_r183)))
        cpy_r_r184 = cpy_r_r183;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 246, CPyStatic_astdiff___globals, "tuple", cpy_r_r183);
        goto CPyL218;
    }
    return cpy_r_r184;
CPyL113: ;
    cpy_r_r185 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r186 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r187 = *(PyObject * *)cpy_r_r186;
    cpy_r_r188 = cpy_r_r187 == cpy_r_r185;
    if (!cpy_r_r188) goto CPyL118;
    cpy_r_r189 = CPyStatics[104]; /* 'Var' */
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r190 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 258, CPyStatic_astdiff___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL218;
    }
    cpy_r_r191 = ((mypy___nodes___VarObject *)cpy_r_r190)->_type;
    CPy_INCREF(cpy_r_r191);
    cpy_r_r192 = CPyDef_astdiff___snapshot_optional_type(cpy_r_r191);
    CPy_DECREF(cpy_r_r191);
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 258, CPyStatic_astdiff___globals);
        goto CPyL218;
    }
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r193 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 258, CPyStatic_astdiff___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL233;
    }
    cpy_r_r194 = ((mypy___nodes___VarObject *)cpy_r_r193)->_is_final;
    cpy_r_r195.f0 = cpy_r_r189;
    cpy_r_r195.f1 = cpy_r_common;
    cpy_r_r195.f2 = cpy_r_r192;
    cpy_r_r195.f3 = cpy_r_r194;
    CPy_INCREF(cpy_r_r195.f0);
    CPy_INCREF(cpy_r_r195.f1);
    CPy_INCREF(cpy_r_r195.f2);
    CPy_DECREF(cpy_r_r192);
    cpy_r_r196 = PyTuple_New(4);
    if (unlikely(cpy_r_r196 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6342 = cpy_r_r195.f0;
    PyTuple_SET_ITEM(cpy_r_r196, 0, __tmp6342);
    PyObject *__tmp6343 = cpy_r_r195.f1;
    PyTuple_SET_ITEM(cpy_r_r196, 1, __tmp6343);
    PyObject *__tmp6344 = cpy_r_r195.f2;
    PyTuple_SET_ITEM(cpy_r_r196, 2, __tmp6344);
    PyObject *__tmp6345 = cpy_r_r195.f3 ? Py_True : Py_False;
    CPy_INCREF(__tmp6345);
    PyTuple_SET_ITEM(cpy_r_r196, 3, __tmp6345);
    return cpy_r_r196;
CPyL118: ;
    cpy_r_r197 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r198 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r199 = *(PyObject * *)cpy_r_r198;
    cpy_r_r200 = cpy_r_r199 == cpy_r_r197;
    if (!cpy_r_r200) goto CPyL125;
    cpy_r_r201 = CPyStatics[966]; /* 'Decorator' */
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r202 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 268, CPyStatic_astdiff___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL218;
    }
    cpy_r_r203 = ((mypy___nodes___DecoratorObject *)cpy_r_r202)->_is_overload;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r204 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 269, CPyStatic_astdiff___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL218;
    }
    cpy_r_r205 = ((mypy___nodes___DecoratorObject *)cpy_r_r204)->_var;
    cpy_r_r206 = ((mypy___nodes___VarObject *)cpy_r_r205)->_type;
    CPy_INCREF(cpy_r_r206);
    cpy_r_r207 = CPyDef_astdiff___snapshot_optional_type(cpy_r_r206);
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 269, CPyStatic_astdiff___globals);
        goto CPyL218;
    }
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r208 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 270, CPyStatic_astdiff___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL234;
    }
    cpy_r_r209 = ((mypy___nodes___DecoratorObject *)cpy_r_r208)->_func;
    CPy_INCREF(cpy_r_r209);
    cpy_r_r210 = CPyDef_astdiff___snapshot_definition(cpy_r_r209, cpy_r_common);
    CPy_DECREF(cpy_r_r209);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 270, CPyStatic_astdiff___globals);
        goto CPyL234;
    }
    cpy_r_r211.f0 = cpy_r_r201;
    cpy_r_r211.f1 = cpy_r_r203;
    cpy_r_r211.f2 = cpy_r_r207;
    cpy_r_r211.f3 = cpy_r_r210;
    CPy_INCREF(cpy_r_r211.f0);
    CPy_INCREF(cpy_r_r211.f2);
    CPy_INCREF(cpy_r_r211.f3);
    CPy_DECREF(cpy_r_r207);
    CPy_DECREF(cpy_r_r210);
    cpy_r_r212 = PyTuple_New(4);
    if (unlikely(cpy_r_r212 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6346 = cpy_r_r211.f0;
    PyTuple_SET_ITEM(cpy_r_r212, 0, __tmp6346);
    PyObject *__tmp6347 = cpy_r_r211.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp6347);
    PyTuple_SET_ITEM(cpy_r_r212, 1, __tmp6347);
    PyObject *__tmp6348 = cpy_r_r211.f2;
    PyTuple_SET_ITEM(cpy_r_r212, 2, __tmp6348);
    PyObject *__tmp6349 = cpy_r_r211.f3;
    PyTuple_SET_ITEM(cpy_r_r212, 3, __tmp6349);
    return cpy_r_r212;
CPyL125: ;
    cpy_r_r213 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r214 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r215 = *(PyObject * *)cpy_r_r214;
    cpy_r_r216 = cpy_r_r215 == cpy_r_r213;
    if (!cpy_r_r216) goto CPyL127;
    cpy_r_r217 = cpy_r_r216;
    goto CPyL128;
CPyL127: ;
    cpy_r_r218 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r219 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r220 = *(PyObject * *)cpy_r_r219;
    cpy_r_r221 = cpy_r_r220 == cpy_r_r218;
    cpy_r_r217 = cpy_r_r221;
CPyL128: ;
    if (!cpy_r_r217) goto CPyL212;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r222 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 273, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL218;
    }
    cpy_r_r223 = ((mypy___nodes___TypeInfoObject *)cpy_r_r222)->_dataclass_transform_spec;
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "dataclass_transform_spec", 273, CPyStatic_astdiff___globals);
        goto CPyL218;
    }
    CPy_INCREF(cpy_r_r223);
CPyL131: ;
    cpy_r_dataclass_transform_spec = cpy_r_r223;
    cpy_r_r224 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r225 = cpy_r_dataclass_transform_spec == cpy_r_r224;
    if (cpy_r_r225) {
        goto CPyL235;
    } else
        goto CPyL135;
CPyL132: ;
    CPy_INCREF(cpy_r_node);
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r226 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 275, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL218;
    }
    cpy_r_r227 = CPyDef_semanal_shared___find_dataclass_transform_spec(cpy_r_r226);
    CPy_DECREF(cpy_r_r226);
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 275, CPyStatic_astdiff___globals);
        goto CPyL218;
    }
    cpy_r_dataclass_transform_spec = cpy_r_r227;
CPyL135: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r228 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 278, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL236;
    }
    cpy_r_r229 = ((mypy___nodes___TypeInfoObject *)cpy_r_r228)->_is_abstract;
    if (unlikely(cpy_r_r229 == 2)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "is_abstract", 278, CPyStatic_astdiff___globals);
        goto CPyL236;
    }
CPyL137: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r230 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 279, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL236;
    }
    cpy_r_r231 = ((mypy___nodes___TypeInfoObject *)cpy_r_r230)->_is_enum;
    if (unlikely(cpy_r_r231 == 2)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "is_enum", 279, CPyStatic_astdiff___globals);
        goto CPyL236;
    }
CPyL139: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r232 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 280, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL236;
    }
    cpy_r_r233 = ((mypy___nodes___TypeInfoObject *)cpy_r_r232)->_is_protocol;
    if (unlikely(cpy_r_r233 == 2)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "is_protocol", 280, CPyStatic_astdiff___globals);
        goto CPyL236;
    }
CPyL141: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r234 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 281, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL236;
    }
    cpy_r_r235 = ((mypy___nodes___TypeInfoObject *)cpy_r_r234)->_fallback_to_any;
    if (unlikely(cpy_r_r235 == 2)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "fallback_to_any", 281, CPyStatic_astdiff___globals);
        goto CPyL236;
    }
CPyL143: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r236 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 282, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL236;
    }
    cpy_r_r237 = ((mypy___nodes___TypeInfoObject *)cpy_r_r236)->_meta_fallback_to_any;
    if (unlikely(cpy_r_r237 == 2)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "meta_fallback_to_any", 282, CPyStatic_astdiff___globals);
        goto CPyL236;
    }
CPyL145: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r238 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 283, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL236;
    }
    cpy_r_r239 = ((mypy___nodes___TypeInfoObject *)cpy_r_r238)->_is_named_tuple;
    if (unlikely(cpy_r_r239 == 2)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "is_named_tuple", 283, CPyStatic_astdiff___globals);
        goto CPyL236;
    }
CPyL147: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r240 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 284, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL236;
    }
    cpy_r_r241 = ((mypy___nodes___TypeInfoObject *)cpy_r_r240)->_is_newtype;
    if (unlikely(cpy_r_r241 == 2)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "is_newtype", 284, CPyStatic_astdiff___globals);
        goto CPyL236;
    }
CPyL149: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r242 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 286, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL236;
    }
    cpy_r_r243 = ((mypy___nodes___TypeInfoObject *)cpy_r_r242)->_metaclass_type;
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "metaclass_type", 286, CPyStatic_astdiff___globals);
        goto CPyL236;
    }
    CPy_INCREF(cpy_r_r243);
CPyL151: ;
    cpy_r_r244 = CPyDef_astdiff___snapshot_optional_type(cpy_r_r243);
    CPy_DECREF(cpy_r_r243);
    if (unlikely(cpy_r_r244 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 286, CPyStatic_astdiff___globals);
        goto CPyL236;
    }
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r245 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 287, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL237;
    }
    cpy_r_r246 = ((mypy___nodes___TypeInfoObject *)cpy_r_r245)->_tuple_type;
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "tuple_type", 287, CPyStatic_astdiff___globals);
        goto CPyL237;
    }
    CPy_INCREF(cpy_r_r246);
CPyL154: ;
    cpy_r_r247 = CPyDef_astdiff___snapshot_optional_type(cpy_r_r246);
    CPy_DECREF(cpy_r_r246);
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 287, CPyStatic_astdiff___globals);
        goto CPyL237;
    }
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r248 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 288, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL238;
    }
    cpy_r_r249 = ((mypy___nodes___TypeInfoObject *)cpy_r_r248)->_typeddict_type;
    if (unlikely(cpy_r_r249 == NULL)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "typeddict_type", 288, CPyStatic_astdiff___globals);
        goto CPyL238;
    }
    CPy_INCREF(cpy_r_r249);
CPyL157: ;
    cpy_r_r250 = CPyDef_astdiff___snapshot_optional_type(cpy_r_r249);
    CPy_DECREF(cpy_r_r249);
    if (unlikely(cpy_r_r250 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 288, CPyStatic_astdiff___globals);
        goto CPyL238;
    }
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r251 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 289, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL239;
    }
    cpy_r_r252 = ((mypy___nodes___TypeInfoObject *)cpy_r_r251)->_mro;
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "mro", 289, CPyStatic_astdiff___globals);
        goto CPyL239;
    }
    CPy_INCREF(cpy_r_r252);
CPyL160: ;
    cpy_r_r253 = (CPyPtr)&((PyVarObject *)cpy_r_r252)->ob_size;
    cpy_r_r254 = *(int64_t *)cpy_r_r253;
    cpy_r_r255 = PyList_New(cpy_r_r254);
    if (unlikely(cpy_r_r255 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 289, CPyStatic_astdiff___globals);
        goto CPyL240;
    }
    cpy_r_r256 = 0;
CPyL162: ;
    cpy_r_r257 = (CPyPtr)&((PyVarObject *)cpy_r_r252)->ob_size;
    cpy_r_r258 = *(int64_t *)cpy_r_r257;
    cpy_r_r259 = cpy_r_r258 << 1;
    cpy_r_r260 = (Py_ssize_t)cpy_r_r256 < (Py_ssize_t)cpy_r_r259;
    if (!cpy_r_r260) goto CPyL241;
    cpy_r_r261 = CPyList_GetItemUnsafe(cpy_r_r252, cpy_r_r256);
    if (likely((Py_TYPE(cpy_r_r261) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r261) == CPyType_nodes___TypeInfo)))
        cpy_r_r262 = cpy_r_r261;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 289, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_r261);
        goto CPyL242;
    }
    cpy_r_base = cpy_r_r262;
    cpy_r_r263 = CPY_GET_ATTR(cpy_r_base, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r263 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 289, CPyStatic_astdiff___globals);
        goto CPyL242;
    }
CPyL165: ;
    cpy_r_r264 = CPyList_SetItemUnsafe(cpy_r_r255, cpy_r_r256, cpy_r_r263);
    if (unlikely(!cpy_r_r264)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 289, CPyStatic_astdiff___globals);
        goto CPyL242;
    }
    cpy_r_r265 = cpy_r_r256 + 2;
    cpy_r_r256 = cpy_r_r265;
    goto CPyL162;
CPyL167: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r266 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 298, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL243;
    }
    cpy_r_r267 = ((mypy___nodes___TypeInfoObject *)cpy_r_r266)->_defn;
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "defn", 298, CPyStatic_astdiff___globals);
        goto CPyL243;
    }
CPyL169: ;
    cpy_r_r268 = ((mypy___nodes___ClassDefObject *)cpy_r_r267)->_type_vars;
    CPy_INCREF(cpy_r_r268);
    cpy_r_r269 = (CPyPtr)&((PyVarObject *)cpy_r_r268)->ob_size;
    cpy_r_r270 = *(int64_t *)cpy_r_r269;
    cpy_r_r271 = PyTuple_New(cpy_r_r270);
    if (unlikely(cpy_r_r271 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 298, CPyStatic_astdiff___globals);
        goto CPyL244;
    }
    cpy_r_r272 = 0;
CPyL171: ;
    cpy_r_r273 = (CPyPtr)&((PyVarObject *)cpy_r_r268)->ob_size;
    cpy_r_r274 = *(int64_t *)cpy_r_r273;
    cpy_r_r275 = cpy_r_r274 << 1;
    cpy_r_r276 = (Py_ssize_t)cpy_r_r272 < (Py_ssize_t)cpy_r_r275;
    if (!cpy_r_r276) goto CPyL245;
    cpy_r_r277 = CPyList_GetItemUnsafe(cpy_r_r268, cpy_r_r272);
    if (likely(PyObject_TypeCheck(cpy_r_r277, CPyType_types___TypeVarLikeType)))
        cpy_r_r278 = cpy_r_r277;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 298, CPyStatic_astdiff___globals, "mypy.types.TypeVarLikeType", cpy_r_r277);
        goto CPyL246;
    }
    cpy_r_tdef = cpy_r_r278;
    cpy_r_r279 = CPyDef_astdiff___snapshot_type(cpy_r_tdef);
    CPy_DECREF(cpy_r_tdef);
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 298, CPyStatic_astdiff___globals);
        goto CPyL246;
    }
    cpy_r_r280 = CPySequenceTuple_SetItemUnsafe(cpy_r_r271, cpy_r_r272, cpy_r_r279);
    if (unlikely(!cpy_r_r280)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 298, CPyStatic_astdiff___globals);
        goto CPyL246;
    }
    cpy_r_r281 = cpy_r_r272 + 2;
    cpy_r_r272 = cpy_r_r281;
    goto CPyL171;
CPyL176: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r282 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 299, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL247;
    }
    cpy_r_r283 = ((mypy___nodes___TypeInfoObject *)cpy_r_r282)->_bases;
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "bases", 299, CPyStatic_astdiff___globals);
        goto CPyL247;
    }
    CPy_INCREF(cpy_r_r283);
CPyL178: ;
    cpy_r_r284 = (CPyPtr)&((PyVarObject *)cpy_r_r283)->ob_size;
    cpy_r_r285 = *(int64_t *)cpy_r_r284;
    cpy_r_r286 = PyList_New(cpy_r_r285);
    if (unlikely(cpy_r_r286 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 299, CPyStatic_astdiff___globals);
        goto CPyL248;
    }
    cpy_r_r287 = 0;
CPyL180: ;
    cpy_r_r288 = (CPyPtr)&((PyVarObject *)cpy_r_r283)->ob_size;
    cpy_r_r289 = *(int64_t *)cpy_r_r288;
    cpy_r_r290 = cpy_r_r289 << 1;
    cpy_r_r291 = (Py_ssize_t)cpy_r_r287 < (Py_ssize_t)cpy_r_r290;
    if (!cpy_r_r291) goto CPyL249;
    cpy_r_r292 = CPyList_GetItemUnsafe(cpy_r_r283, cpy_r_r287);
    if (likely(Py_TYPE(cpy_r_r292) == CPyType_types___Instance))
        cpy_r_r293 = cpy_r_r292;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 299, CPyStatic_astdiff___globals, "mypy.types.Instance", cpy_r_r292);
        goto CPyL250;
    }
    cpy_r_base_2 = cpy_r_r293;
    cpy_r_r294 = CPyDef_astdiff___snapshot_type(cpy_r_base_2);
    CPy_DECREF(cpy_r_base_2);
    if (unlikely(cpy_r_r294 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 299, CPyStatic_astdiff___globals);
        goto CPyL250;
    }
    cpy_r_r295 = CPyList_SetItemUnsafe(cpy_r_r286, cpy_r_r287, cpy_r_r294);
    if (unlikely(!cpy_r_r295)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 299, CPyStatic_astdiff___globals);
        goto CPyL250;
    }
    cpy_r_r296 = cpy_r_r287 + 2;
    cpy_r_r287 = cpy_r_r296;
    goto CPyL180;
CPyL185: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r297 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 300, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL251;
    }
    cpy_r_r298 = ((mypy___nodes___TypeInfoObject *)cpy_r_r297)->__promote;
    if (unlikely(cpy_r_r298 == NULL)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "_promote", 300, CPyStatic_astdiff___globals);
        goto CPyL251;
    }
    CPy_INCREF(cpy_r_r298);
CPyL187: ;
    cpy_r_r299 = (CPyPtr)&((PyVarObject *)cpy_r_r298)->ob_size;
    cpy_r_r300 = *(int64_t *)cpy_r_r299;
    cpy_r_r301 = PyList_New(cpy_r_r300);
    if (unlikely(cpy_r_r301 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 300, CPyStatic_astdiff___globals);
        goto CPyL252;
    }
    cpy_r_r302 = 0;
CPyL189: ;
    cpy_r_r303 = (CPyPtr)&((PyVarObject *)cpy_r_r298)->ob_size;
    cpy_r_r304 = *(int64_t *)cpy_r_r303;
    cpy_r_r305 = cpy_r_r304 << 1;
    cpy_r_r306 = (Py_ssize_t)cpy_r_r302 < (Py_ssize_t)cpy_r_r305;
    if (!cpy_r_r306) goto CPyL253;
    cpy_r_r307 = CPyList_GetItemUnsafe(cpy_r_r298, cpy_r_r302);
    if (likely(PyObject_TypeCheck(cpy_r_r307, CPyType_types___ProperType)))
        cpy_r_r308 = cpy_r_r307;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 300, CPyStatic_astdiff___globals, "mypy.types.ProperType", cpy_r_r307);
        goto CPyL254;
    }
    cpy_r_p = cpy_r_r308;
    cpy_r_r309 = CPyDef_astdiff___snapshot_type(cpy_r_p);
    CPy_DECREF(cpy_r_p);
    if (unlikely(cpy_r_r309 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 300, CPyStatic_astdiff___globals);
        goto CPyL254;
    }
    cpy_r_r310 = CPyList_SetItemUnsafe(cpy_r_r301, cpy_r_r302, cpy_r_r309);
    if (unlikely(!cpy_r_r310)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 300, CPyStatic_astdiff___globals);
        goto CPyL254;
    }
    cpy_r_r311 = cpy_r_r302 + 2;
    cpy_r_r302 = cpy_r_r311;
    goto CPyL189;
CPyL194: ;
    cpy_r_r312 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r313 = cpy_r_dataclass_transform_spec != cpy_r_r312;
    if (!cpy_r_r313) goto CPyL255;
    if (likely(cpy_r_dataclass_transform_spec != Py_None))
        cpy_r_r314 = cpy_r_dataclass_transform_spec;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 301, CPyStatic_astdiff___globals, "mypy.nodes.DataclassTransformSpec", cpy_r_dataclass_transform_spec);
        goto CPyL256;
    }
    cpy_r_r315 = CPyDef_nodes___DataclassTransformSpec___serialize(cpy_r_r314);
    CPy_DECREF(cpy_r_r314);
    if (unlikely(cpy_r_r315 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 301, CPyStatic_astdiff___globals);
        goto CPyL256;
    }
    cpy_r_r316 = cpy_r_r315;
    goto CPyL199;
CPyL198: ;
    cpy_r_r317 = Py_None;
    CPy_INCREF(cpy_r_r317);
    cpy_r_r316 = cpy_r_r317;
CPyL199: ;
    cpy_r_r318.f0 = cpy_r_r229;
    cpy_r_r318.f1 = cpy_r_r231;
    cpy_r_r318.f2 = cpy_r_r233;
    cpy_r_r318.f3 = cpy_r_r235;
    cpy_r_r318.f4 = cpy_r_r237;
    cpy_r_r318.f5 = cpy_r_r239;
    cpy_r_r318.f6 = cpy_r_r241;
    cpy_r_r318.f7 = cpy_r_r244;
    cpy_r_r318.f8 = cpy_r_r247;
    cpy_r_r318.f9 = cpy_r_r250;
    cpy_r_r318.f10 = cpy_r_r255;
    cpy_r_r318.f11 = cpy_r_r271;
    cpy_r_r318.f12 = cpy_r_r286;
    cpy_r_r318.f13 = cpy_r_r301;
    cpy_r_r318.f14 = cpy_r_r316;
    CPy_INCREF(cpy_r_r318.f7);
    CPy_INCREF(cpy_r_r318.f8);
    CPy_INCREF(cpy_r_r318.f9);
    CPy_INCREF(cpy_r_r318.f10);
    CPy_INCREF(cpy_r_r318.f11);
    CPy_INCREF(cpy_r_r318.f12);
    CPy_INCREF(cpy_r_r318.f13);
    CPy_INCREF(cpy_r_r318.f14);
    CPy_DECREF(cpy_r_r244);
    CPy_DECREF(cpy_r_r247);
    CPy_DECREF(cpy_r_r250);
    CPy_DECREF(cpy_r_r255);
    CPy_DECREF(cpy_r_r271);
    CPy_DECREF(cpy_r_r286);
    CPy_DECREF(cpy_r_r301);
    CPy_DECREF(cpy_r_r316);
    cpy_r_attrs = cpy_r_r318;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r319 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 303, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL257;
    }
    cpy_r_r320 = CPY_GET_ATTR(cpy_r_r319, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r320 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 303, CPyStatic_astdiff___globals);
        goto CPyL257;
    }
CPyL201: ;
    cpy_r_prefix = cpy_r_r320;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r321 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 304, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL258;
    }
    cpy_r_r322 = ((mypy___nodes___TypeInfoObject *)cpy_r_r321)->_names;
    if (unlikely(cpy_r_r322 == NULL)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "names", 304, CPyStatic_astdiff___globals);
        goto CPyL258;
    }
    CPy_INCREF(cpy_r_r322);
CPyL203: ;
    cpy_r_r323 = CPyDef_astdiff___snapshot_symbol_table(cpy_r_prefix, cpy_r_r322);
    CPy_DECREF(cpy_r_prefix);
    CPy_DECREF(cpy_r_r322);
    if (unlikely(cpy_r_r323 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 304, CPyStatic_astdiff___globals);
        goto CPyL257;
    }
    cpy_r_symbol_table = cpy_r_r323;
    cpy_r_r324 = CPyStatics[5291]; /* 'Abstract' */
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r325 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 306, CPyStatic_astdiff___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL259;
    }
    cpy_r_r326 = ((mypy___nodes___TypeInfoObject *)cpy_r_r325)->_abstract_attributes;
    if (unlikely(cpy_r_r326 == NULL)) {
        CPy_AttributeError("mypy/server/astdiff.py", "snapshot_definition", "TypeInfo", "abstract_attributes", 306, CPyStatic_astdiff___globals);
        goto CPyL259;
    }
    CPy_INCREF(cpy_r_r326);
CPyL206: ;
    cpy_r_r327 = CPyModule_builtins;
    cpy_r_r328 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r329 = CPyObject_GetAttr(cpy_r_r327, cpy_r_r328);
    if (unlikely(cpy_r_r329 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 306, CPyStatic_astdiff___globals);
        goto CPyL260;
    }
    PyObject *cpy_r_r330[1] = {cpy_r_r326};
    cpy_r_r331 = (PyObject **)&cpy_r_r330;
    cpy_r_r332 = _PyObject_Vectorcall(cpy_r_r329, cpy_r_r331, 1, 0);
    CPy_DECREF(cpy_r_r329);
    if (unlikely(cpy_r_r332 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 306, CPyStatic_astdiff___globals);
        goto CPyL260;
    }
    CPy_DECREF(cpy_r_r326);
    if (likely(PyList_Check(cpy_r_r332)))
        cpy_r_r333 = cpy_r_r332;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_definition", 306, CPyStatic_astdiff___globals, "list", cpy_r_r332);
        goto CPyL259;
    }
    cpy_r_r334 = PyList_AsTuple(cpy_r_r333);
    CPy_DECREF(cpy_r_r333);
    if (unlikely(cpy_r_r334 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 306, CPyStatic_astdiff___globals);
        goto CPyL259;
    }
    cpy_r_r335.f0 = cpy_r_r324;
    cpy_r_r335.f1 = cpy_r_r334;
    CPy_INCREF(cpy_r_r335.f0);
    CPy_INCREF(cpy_r_r335.f1);
    CPy_DECREF(cpy_r_r334);
    cpy_r_r336 = CPyStatics[5292]; /* '(abstract)' */
    cpy_r_r337 = PyTuple_New(2);
    if (unlikely(cpy_r_r337 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6350 = cpy_r_r335.f0;
    PyTuple_SET_ITEM(cpy_r_r337, 0, __tmp6350);
    PyObject *__tmp6351 = cpy_r_r335.f1;
    PyTuple_SET_ITEM(cpy_r_r337, 1, __tmp6351);
    cpy_r_r338 = CPyDict_SetItem(cpy_r_symbol_table, cpy_r_r336, cpy_r_r337);
    CPy_DECREF(cpy_r_r337);
    cpy_r_r339 = cpy_r_r338 >= 0;
    if (unlikely(!cpy_r_r339)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 306, CPyStatic_astdiff___globals);
        goto CPyL259;
    }
    cpy_r_r340 = CPyStatics[103]; /* 'TypeInfo' */
    cpy_r_r341.f0 = cpy_r_r340;
    cpy_r_r341.f1 = cpy_r_common;
    cpy_r_r341.f2 = cpy_r_attrs;
    cpy_r_r341.f3 = cpy_r_symbol_table;
    CPy_INCREF(cpy_r_r341.f0);
    CPy_INCREF(cpy_r_r341.f1);
    CPy_INCREF(cpy_r_r341.f2.f7);
    CPy_INCREF(cpy_r_r341.f2.f8);
    CPy_INCREF(cpy_r_r341.f2.f9);
    CPy_INCREF(cpy_r_r341.f2.f10);
    CPy_INCREF(cpy_r_r341.f2.f11);
    CPy_INCREF(cpy_r_r341.f2.f12);
    CPy_INCREF(cpy_r_r341.f2.f13);
    CPy_INCREF(cpy_r_r341.f2.f14);
    CPy_INCREF(cpy_r_r341.f3);
    CPy_DECREF(cpy_r_attrs.f7);
    CPy_DECREF(cpy_r_attrs.f8);
    CPy_DECREF(cpy_r_attrs.f9);
    CPy_DECREF(cpy_r_attrs.f10);
    CPy_DECREF(cpy_r_attrs.f11);
    CPy_DECREF(cpy_r_attrs.f12);
    CPy_DECREF(cpy_r_attrs.f13);
    CPy_DECREF(cpy_r_attrs.f14);
    CPy_DECREF(cpy_r_symbol_table);
    cpy_r_r342 = PyTuple_New(4);
    if (unlikely(cpy_r_r342 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6352 = cpy_r_r341.f0;
    PyTuple_SET_ITEM(cpy_r_r342, 0, __tmp6352);
    PyObject *__tmp6353 = cpy_r_r341.f1;
    PyTuple_SET_ITEM(cpy_r_r342, 1, __tmp6353);
    PyObject *__tmp6354 = PyTuple_New(15);
    if (unlikely(__tmp6354 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6355 = cpy_r_r341.f2.f0 ? Py_True : Py_False;
    CPy_INCREF(__tmp6355);
    PyTuple_SET_ITEM(__tmp6354, 0, __tmp6355);
    PyObject *__tmp6356 = cpy_r_r341.f2.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp6356);
    PyTuple_SET_ITEM(__tmp6354, 1, __tmp6356);
    PyObject *__tmp6357 = cpy_r_r341.f2.f2 ? Py_True : Py_False;
    CPy_INCREF(__tmp6357);
    PyTuple_SET_ITEM(__tmp6354, 2, __tmp6357);
    PyObject *__tmp6358 = cpy_r_r341.f2.f3 ? Py_True : Py_False;
    CPy_INCREF(__tmp6358);
    PyTuple_SET_ITEM(__tmp6354, 3, __tmp6358);
    PyObject *__tmp6359 = cpy_r_r341.f2.f4 ? Py_True : Py_False;
    CPy_INCREF(__tmp6359);
    PyTuple_SET_ITEM(__tmp6354, 4, __tmp6359);
    PyObject *__tmp6360 = cpy_r_r341.f2.f5 ? Py_True : Py_False;
    CPy_INCREF(__tmp6360);
    PyTuple_SET_ITEM(__tmp6354, 5, __tmp6360);
    PyObject *__tmp6361 = cpy_r_r341.f2.f6 ? Py_True : Py_False;
    CPy_INCREF(__tmp6361);
    PyTuple_SET_ITEM(__tmp6354, 6, __tmp6361);
    PyObject *__tmp6362 = cpy_r_r341.f2.f7;
    PyTuple_SET_ITEM(__tmp6354, 7, __tmp6362);
    PyObject *__tmp6363 = cpy_r_r341.f2.f8;
    PyTuple_SET_ITEM(__tmp6354, 8, __tmp6363);
    PyObject *__tmp6364 = cpy_r_r341.f2.f9;
    PyTuple_SET_ITEM(__tmp6354, 9, __tmp6364);
    PyObject *__tmp6365 = cpy_r_r341.f2.f10;
    PyTuple_SET_ITEM(__tmp6354, 10, __tmp6365);
    PyObject *__tmp6366 = cpy_r_r341.f2.f11;
    PyTuple_SET_ITEM(__tmp6354, 11, __tmp6366);
    PyObject *__tmp6367 = cpy_r_r341.f2.f12;
    PyTuple_SET_ITEM(__tmp6354, 12, __tmp6367);
    PyObject *__tmp6368 = cpy_r_r341.f2.f13;
    PyTuple_SET_ITEM(__tmp6354, 13, __tmp6368);
    PyObject *__tmp6369 = cpy_r_r341.f2.f14;
    PyTuple_SET_ITEM(__tmp6354, 14, __tmp6369);
    PyTuple_SET_ITEM(cpy_r_r342, 2, __tmp6354);
    PyObject *__tmp6370 = cpy_r_r341.f3;
    PyTuple_SET_ITEM(cpy_r_r342, 3, __tmp6370);
    return cpy_r_r342;
CPyL212: ;
    if (0) goto CPyL217;
    cpy_r_r343 = PyObject_Type(cpy_r_node);
    cpy_r_r344 = CPyModule_builtins;
    cpy_r_r345 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r346 = CPyObject_GetAttr(cpy_r_r344, cpy_r_r345);
    if (unlikely(cpy_r_r346 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 310, CPyStatic_astdiff___globals);
        goto CPyL261;
    }
    PyObject *cpy_r_r347[1] = {cpy_r_r343};
    cpy_r_r348 = (PyObject **)&cpy_r_r347;
    cpy_r_r349 = _PyObject_Vectorcall(cpy_r_r346, cpy_r_r348, 1, 0);
    CPy_DECREF(cpy_r_r346);
    if (unlikely(cpy_r_r349 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 310, CPyStatic_astdiff___globals);
        goto CPyL261;
    }
    CPy_DECREF(cpy_r_r343);
    CPy_Raise(cpy_r_r349);
    CPy_DECREF(cpy_r_r349);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 310, CPyStatic_astdiff___globals);
        goto CPyL218;
    }
    CPy_Unreachable();
CPyL217: ;
    CPy_Unreachable();
CPyL218: ;
    cpy_r_r350 = NULL;
    return cpy_r_r350;
CPyL219: ;
    CPy_DecRef(cpy_r_signature);
    goto CPyL218;
CPyL220: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_impl);
    goto CPyL218;
CPyL221: ;
    CPy_DECREF(cpy_r_impl);
    goto CPyL30;
CPyL222: ;
    CPy_DECREF(cpy_r_impl);
    goto CPyL42;
CPyL223: ;
    CPy_DECREF(cpy_r_impl);
    goto CPyL75;
CPyL224: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_is_trivial_body);
    goto CPyL218;
CPyL225: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_is_trivial_body);
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    goto CPyL218;
CPyL226: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_is_trivial_body);
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r131);
    goto CPyL218;
CPyL227: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_is_trivial_body);
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r140);
    goto CPyL218;
CPyL228: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_is_trivial_body);
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r140);
    CPy_DecRef(cpy_r_r149);
    goto CPyL218;
CPyL229: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_is_trivial_body);
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r140);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r158);
    goto CPyL218;
CPyL230: ;
    CPy_DECREF(cpy_r_dataclass_transform_spec);
    goto CPyL110;
CPyL231: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_is_trivial_body);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r140);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r158);
    goto CPyL218;
CPyL232: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_is_trivial_body);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r140);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r158);
    CPy_DecRef(cpy_r_r175);
    goto CPyL218;
CPyL233: ;
    CPy_DecRef(cpy_r_r192);
    goto CPyL218;
CPyL234: ;
    CPy_DecRef(cpy_r_r207);
    goto CPyL218;
CPyL235: ;
    CPy_DECREF(cpy_r_dataclass_transform_spec);
    goto CPyL132;
CPyL236: ;
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    goto CPyL218;
CPyL237: ;
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r244);
    goto CPyL218;
CPyL238: ;
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r247);
    goto CPyL218;
CPyL239: ;
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    goto CPyL218;
CPyL240: ;
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r252);
    goto CPyL218;
CPyL241: ;
    CPy_DECREF(cpy_r_r252);
    goto CPyL167;
CPyL242: ;
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r252);
    CPy_DecRef(cpy_r_r255);
    goto CPyL218;
CPyL243: ;
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r255);
    goto CPyL218;
CPyL244: ;
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r255);
    CPy_DecRef(cpy_r_r268);
    goto CPyL218;
CPyL245: ;
    CPy_DECREF(cpy_r_r268);
    goto CPyL176;
CPyL246: ;
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r255);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r271);
    goto CPyL218;
CPyL247: ;
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r255);
    CPy_DecRef(cpy_r_r271);
    goto CPyL218;
CPyL248: ;
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r255);
    CPy_DecRef(cpy_r_r271);
    CPy_DecRef(cpy_r_r283);
    goto CPyL218;
CPyL249: ;
    CPy_DECREF(cpy_r_r283);
    goto CPyL185;
CPyL250: ;
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r255);
    CPy_DecRef(cpy_r_r271);
    CPy_DecRef(cpy_r_r283);
    CPy_DecRef(cpy_r_r286);
    goto CPyL218;
CPyL251: ;
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r255);
    CPy_DecRef(cpy_r_r271);
    CPy_DecRef(cpy_r_r286);
    goto CPyL218;
CPyL252: ;
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r255);
    CPy_DecRef(cpy_r_r271);
    CPy_DecRef(cpy_r_r286);
    CPy_DecRef(cpy_r_r298);
    goto CPyL218;
CPyL253: ;
    CPy_DECREF(cpy_r_r298);
    goto CPyL194;
CPyL254: ;
    CPy_DecRef(cpy_r_dataclass_transform_spec);
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r255);
    CPy_DecRef(cpy_r_r271);
    CPy_DecRef(cpy_r_r286);
    CPy_DecRef(cpy_r_r298);
    CPy_DecRef(cpy_r_r301);
    goto CPyL218;
CPyL255: ;
    CPy_DECREF(cpy_r_dataclass_transform_spec);
    goto CPyL198;
CPyL256: ;
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r255);
    CPy_DecRef(cpy_r_r271);
    CPy_DecRef(cpy_r_r286);
    CPy_DecRef(cpy_r_r301);
    goto CPyL218;
CPyL257: ;
    CPy_DecRef(cpy_r_attrs.f7);
    CPy_DecRef(cpy_r_attrs.f8);
    CPy_DecRef(cpy_r_attrs.f9);
    CPy_DecRef(cpy_r_attrs.f10);
    CPy_DecRef(cpy_r_attrs.f11);
    CPy_DecRef(cpy_r_attrs.f12);
    CPy_DecRef(cpy_r_attrs.f13);
    CPy_DecRef(cpy_r_attrs.f14);
    goto CPyL218;
CPyL258: ;
    CPy_DecRef(cpy_r_attrs.f7);
    CPy_DecRef(cpy_r_attrs.f8);
    CPy_DecRef(cpy_r_attrs.f9);
    CPy_DecRef(cpy_r_attrs.f10);
    CPy_DecRef(cpy_r_attrs.f11);
    CPy_DecRef(cpy_r_attrs.f12);
    CPy_DecRef(cpy_r_attrs.f13);
    CPy_DecRef(cpy_r_attrs.f14);
    CPy_DecRef(cpy_r_prefix);
    goto CPyL218;
CPyL259: ;
    CPy_DecRef(cpy_r_attrs.f7);
    CPy_DecRef(cpy_r_attrs.f8);
    CPy_DecRef(cpy_r_attrs.f9);
    CPy_DecRef(cpy_r_attrs.f10);
    CPy_DecRef(cpy_r_attrs.f11);
    CPy_DecRef(cpy_r_attrs.f12);
    CPy_DecRef(cpy_r_attrs.f13);
    CPy_DecRef(cpy_r_attrs.f14);
    CPy_DecRef(cpy_r_symbol_table);
    goto CPyL218;
CPyL260: ;
    CPy_DecRef(cpy_r_attrs.f7);
    CPy_DecRef(cpy_r_attrs.f8);
    CPy_DecRef(cpy_r_attrs.f9);
    CPy_DecRef(cpy_r_attrs.f10);
    CPy_DecRef(cpy_r_attrs.f11);
    CPy_DecRef(cpy_r_attrs.f12);
    CPy_DecRef(cpy_r_attrs.f13);
    CPy_DecRef(cpy_r_attrs.f14);
    CPy_DecRef(cpy_r_symbol_table);
    CPy_DecRef(cpy_r_r326);
    goto CPyL218;
CPyL261: ;
    CPy_DecRef(cpy_r_r343);
    goto CPyL218;
}

PyObject *CPyPy_astdiff___snapshot_definition(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"node", "common", 0};
    static CPyArg_Parser parser = {"OO:snapshot_definition", kwlist, 0};
    PyObject *obj_node;
    PyObject *obj_common;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_node, &obj_common)) {
        return NULL;
    }
    PyObject *arg_node;
    if (PyObject_TypeCheck(obj_node, CPyType_nodes___SymbolNode))
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL6371;
    if (obj_node == Py_None)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL6371;
    CPy_TypeError("mypy.nodes.SymbolNode or None", obj_node); 
    goto fail;
__LL6371: ;
    PyObject * arg_common;
    if (likely(PyTuple_Check(obj_common)))
        arg_common = obj_common;
    else {
        CPy_TypeError("tuple", obj_common); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___snapshot_definition(arg_node, arg_common);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_definition", 227, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___snapshot_type(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_type", 315, CPyStatic_astdiff___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_typ, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_typ, cpy_r_r0); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_type", 315, CPyStatic_astdiff___globals);
        goto CPyL4;
    }
    if (likely(PyTuple_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_type", 315, CPyStatic_astdiff___globals, "tuple", cpy_r_r1);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_astdiff___snapshot_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:snapshot_type", kwlist, 0};
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
    PyObject *retval = CPyDef_astdiff___snapshot_type(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_type", 313, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___snapshot_optional_type(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T1O cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_typ != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL4;
    CPy_INCREF(cpy_r_typ);
    if (likely(cpy_r_typ != Py_None))
        cpy_r_r2 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_optional_type", 320, CPyStatic_astdiff___globals, "mypy.types.Type", cpy_r_typ);
        goto CPyL5;
    }
    cpy_r_r3 = CPyDef_astdiff___snapshot_type(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_optional_type", 320, CPyStatic_astdiff___globals);
        goto CPyL5;
    }
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = CPyStatics[5293]; /* '<not set>' */
    cpy_r_r5.f0 = cpy_r_r4;
    CPy_INCREF(cpy_r_r5.f0);
    cpy_r_r6 = PyTuple_New(1);
    if (unlikely(cpy_r_r6 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6372 = cpy_r_r5.f0;
    PyTuple_SET_ITEM(cpy_r_r6, 0, __tmp6372);
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_astdiff___snapshot_optional_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:snapshot_optional_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (PyObject_TypeCheck(obj_typ, CPyType_types___Type))
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL6373;
    if (obj_typ == Py_None)
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL6373;
    CPy_TypeError("mypy.types.Type or None", obj_typ); 
    goto fail;
__LL6373: ;
    PyObject *retval = CPyDef_astdiff___snapshot_optional_type(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_optional_type", 318, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___snapshot_types(PyObject *cpy_r_types) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_types", 326, CPyStatic_astdiff___globals);
        goto CPyL9;
    }
    cpy_r_r1 = PyObject_GetIter(cpy_r_types);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_types", 326, CPyStatic_astdiff___globals);
        goto CPyL10;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL11;
    if (likely(PyObject_TypeCheck(cpy_r_r2, CPyType_types___Type)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_types", 326, CPyStatic_astdiff___globals, "mypy.types.Type", cpy_r_r2);
        goto CPyL12;
    }
    cpy_r_item = cpy_r_r3;
    cpy_r_r4 = CPyDef_astdiff___snapshot_type(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_types", 326, CPyStatic_astdiff___globals);
        goto CPyL12;
    }
    cpy_r_r5 = PyList_Append(cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_types", 326, CPyStatic_astdiff___globals);
        goto CPyL12;
    } else
        goto CPyL2;
CPyL6: ;
    cpy_r_r7 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_types", 326, CPyStatic_astdiff___globals);
        goto CPyL10;
    }
    cpy_r_r8 = PyList_AsTuple(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_types", 326, CPyStatic_astdiff___globals);
        goto CPyL9;
    }
    return cpy_r_r8;
CPyL9: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
}

PyObject *CPyPy_astdiff___snapshot_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:snapshot_types", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_types = obj_types;
    PyObject *retval = CPyDef_astdiff___snapshot_types(arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_types", 325, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___snapshot_simple_type(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T1O cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = PyObject_Type(cpy_r_typ);
    cpy_r_r1 = CPyStatics[197]; /* '__name__' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_simple_type", 330, CPyStatic_astdiff___globals);
        goto CPyL3;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_simple_type", 330, CPyStatic_astdiff___globals, "str", cpy_r_r2);
        goto CPyL3;
    }
    cpy_r_r4.f0 = cpy_r_r3;
    CPy_INCREF(cpy_r_r4.f0);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = PyTuple_New(1);
    if (unlikely(cpy_r_r5 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6374 = cpy_r_r4.f0;
    PyTuple_SET_ITEM(cpy_r_r5, 0, __tmp6374);
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_astdiff___snapshot_simple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:snapshot_simple_type", kwlist, 0};
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
    PyObject *retval = CPyDef_astdiff___snapshot_simple_type(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_simple_type", 329, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___encode_optional_str(PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_s == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    cpy_r_r2 = CPyStatics[5294]; /* '<None>' */
    CPy_INCREF(cpy_r_r2);
    return cpy_r_r2;
CPyL2: ;
    CPy_INCREF(cpy_r_s);
    if (likely(cpy_r_s != Py_None))
        cpy_r_r3 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "encode_optional_str", 337, CPyStatic_astdiff___globals, "str", cpy_r_s);
        goto CPyL4;
    }
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_astdiff___encode_optional_str(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:encode_optional_str", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_s;
    if (PyUnicode_Check(obj_s))
        arg_s = obj_s;
    else {
        arg_s = NULL;
    }
    if (arg_s != NULL) goto __LL6375;
    if (obj_s == Py_None)
        arg_s = obj_s;
    else {
        arg_s = NULL;
    }
    if (arg_s != NULL) goto __LL6375;
    CPy_TypeError("str or None", obj_s); 
    goto fail;
__LL6375: ;
    PyObject *retval = CPyDef_astdiff___encode_optional_str(arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "encode_optional_str", 333, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_unbound_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T5OOCCO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[1069]; /* 'UnboundType' */
    cpy_r_r1 = ((mypy___types___UnboundTypeObject *)cpy_r_typ)->_name;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___types___UnboundTypeObject *)cpy_r_typ)->_optional;
    cpy_r_r3 = ((mypy___types___UnboundTypeObject *)cpy_r_typ)->_empty_tuple_index;
    cpy_r_r4 = ((mypy___types___UnboundTypeObject *)cpy_r_typ)->_args;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_astdiff___snapshot_types(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_unbound_type", 361, CPyStatic_astdiff___globals);
        goto CPyL3;
    }
    cpy_r_r6.f0 = cpy_r_r0;
    cpy_r_r6.f1 = cpy_r_r1;
    cpy_r_r6.f2 = cpy_r_r2;
    cpy_r_r6.f3 = cpy_r_r3;
    cpy_r_r6.f4 = cpy_r_r5;
    CPy_INCREF(cpy_r_r6.f0);
    CPy_INCREF(cpy_r_r6.f1);
    CPy_INCREF(cpy_r_r6.f4);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = PyTuple_New(5);
    if (unlikely(cpy_r_r7 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6376 = cpy_r_r6.f0;
    PyTuple_SET_ITEM(cpy_r_r7, 0, __tmp6376);
    PyObject *__tmp6377 = cpy_r_r6.f1;
    PyTuple_SET_ITEM(cpy_r_r7, 1, __tmp6377);
    PyObject *__tmp6378 = cpy_r_r6.f2 ? Py_True : Py_False;
    CPy_INCREF(__tmp6378);
    PyTuple_SET_ITEM(cpy_r_r7, 2, __tmp6378);
    PyObject *__tmp6379 = cpy_r_r6.f3 ? Py_True : Py_False;
    CPy_INCREF(__tmp6379);
    PyTuple_SET_ITEM(cpy_r_r7, 3, __tmp6379);
    PyObject *__tmp6380 = cpy_r_r6.f4;
    PyTuple_SET_ITEM(cpy_r_r7, 4, __tmp6380);
    return cpy_r_r7;
CPyL2: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL3: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL2;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_unbound_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___UnboundType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_unbound_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_unbound_type", 355, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_unbound_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_unbound_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_unbound_type__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___snapshot_simple_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_any", 365, CPyStatic_astdiff___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___AnyType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_any(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_any", 364, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_none_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___snapshot_simple_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_none_type", 368, CPyStatic_astdiff___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_none_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_none_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___NoneType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_none_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_none_type", 367, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_none_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_none_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_none_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_none_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_none_type__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___snapshot_simple_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_uninhabited_type", 371, CPyStatic_astdiff___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___UninhabitedType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_uninhabited_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_uninhabited_type", 370, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_erased_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___snapshot_simple_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_erased_type", 374, CPyStatic_astdiff___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_erased_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___ErasedType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_erased_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_erased_type", 373, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_erased_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_erased_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_erased_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_erased_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_erased_type__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_deleted_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___snapshot_simple_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_deleted_type", 377, CPyStatic_astdiff___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_deleted_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___DeletedType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_deleted_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_deleted_type", 376, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_deleted_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_deleted_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_deleted_type__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T1O cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    tuple_T4OOOO cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = CPyStatics[37]; /* 'Instance' */
    cpy_r_r1 = ((mypy___types___InstanceObject *)cpy_r_typ)->_type;
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_r1, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_instance", 382, CPyStatic_astdiff___globals);
        goto CPyL9;
    }
CPyL1: ;
    cpy_r_r3 = CPyDef_astdiff___encode_optional_str(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_instance", 382, CPyStatic_astdiff___globals);
        goto CPyL9;
    }
    cpy_r_r4 = ((mypy___types___InstanceObject *)cpy_r_typ)->_args;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_astdiff___snapshot_types(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_instance", 383, CPyStatic_astdiff___globals);
        goto CPyL10;
    }
    cpy_r_r6 = ((mypy___types___InstanceObject *)cpy_r_typ)->_last_known_value;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 == cpy_r_r7;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = CPyStatics[423]; /* 'None' */
    cpy_r_r10.f0 = cpy_r_r9;
    CPy_INCREF(cpy_r_r10.f0);
    cpy_r_r11 = PyTuple_New(1);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6381 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp6381);
    cpy_r_r12 = cpy_r_r11;
    goto CPyL8;
CPyL5: ;
    cpy_r_r13 = ((mypy___types___InstanceObject *)cpy_r_typ)->_last_known_value;
    CPy_INCREF(cpy_r_r13);
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "visit_instance", 384, CPyStatic_astdiff___globals, "mypy.types.LiteralType", cpy_r_r13);
        goto CPyL11;
    }
    cpy_r_r15 = CPyDef_astdiff___snapshot_type(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_instance", 384, CPyStatic_astdiff___globals);
        goto CPyL11;
    }
    cpy_r_r12 = cpy_r_r15;
CPyL8: ;
    cpy_r_r16.f0 = cpy_r_r0;
    cpy_r_r16.f1 = cpy_r_r3;
    cpy_r_r16.f2 = cpy_r_r5;
    cpy_r_r16.f3 = cpy_r_r12;
    CPy_INCREF(cpy_r_r16.f0);
    CPy_INCREF(cpy_r_r16.f1);
    CPy_INCREF(cpy_r_r16.f2);
    CPy_INCREF(cpy_r_r16.f3);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r17 = PyTuple_New(4);
    if (unlikely(cpy_r_r17 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6382 = cpy_r_r16.f0;
    PyTuple_SET_ITEM(cpy_r_r17, 0, __tmp6382);
    PyObject *__tmp6383 = cpy_r_r16.f1;
    PyTuple_SET_ITEM(cpy_r_r17, 1, __tmp6383);
    PyObject *__tmp6384 = cpy_r_r16.f2;
    PyTuple_SET_ITEM(cpy_r_r17, 2, __tmp6384);
    PyObject *__tmp6385 = cpy_r_r16.f3;
    PyTuple_SET_ITEM(cpy_r_r17, 3, __tmp6385);
    return cpy_r_r17;
CPyL9: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL10: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL9;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___Instance))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Instance", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_instance(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_instance", 379, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    tuple_T9OOOIIOOOI cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r1 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_name;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_fullname;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_id;
    cpy_r_r4 = ((mypy___types___TypeVarIdObject *)cpy_r_r3)->_raw_id;
    CPyTagged_INCREF(cpy_r_r4);
    cpy_r_r5 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_id;
    cpy_r_r6 = ((mypy___types___TypeVarIdObject *)cpy_r_r5)->_meta_level;
    CPyTagged_INCREF(cpy_r_r6);
    cpy_r_r7 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_values;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_astdiff___snapshot_types(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_var", 394, CPyStatic_astdiff___globals);
        goto CPyL5;
    }
    cpy_r_r9 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_upper_bound;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyDef_astdiff___snapshot_type(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_var", 395, CPyStatic_astdiff___globals);
        goto CPyL6;
    }
    cpy_r_r11 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_default;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_astdiff___snapshot_type(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_var", 396, CPyStatic_astdiff___globals);
        goto CPyL7;
    }
    cpy_r_r13 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_variance;
    CPyTagged_INCREF(cpy_r_r13);
    cpy_r_r14.f0 = cpy_r_r0;
    cpy_r_r14.f1 = cpy_r_r1;
    cpy_r_r14.f2 = cpy_r_r2;
    cpy_r_r14.f3 = cpy_r_r4;
    cpy_r_r14.f4 = cpy_r_r6;
    cpy_r_r14.f5 = cpy_r_r8;
    cpy_r_r14.f6 = cpy_r_r10;
    cpy_r_r14.f7 = cpy_r_r12;
    cpy_r_r14.f8 = cpy_r_r13;
    CPy_INCREF(cpy_r_r14.f0);
    CPy_INCREF(cpy_r_r14.f1);
    CPy_INCREF(cpy_r_r14.f2);
    CPyTagged_INCREF(cpy_r_r14.f3);
    CPyTagged_INCREF(cpy_r_r14.f4);
    CPy_INCREF(cpy_r_r14.f5);
    CPy_INCREF(cpy_r_r14.f6);
    CPy_INCREF(cpy_r_r14.f7);
    CPyTagged_INCREF(cpy_r_r14.f8);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r13);
    cpy_r_r15 = PyTuple_New(9);
    if (unlikely(cpy_r_r15 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6386 = cpy_r_r14.f0;
    PyTuple_SET_ITEM(cpy_r_r15, 0, __tmp6386);
    PyObject *__tmp6387 = cpy_r_r14.f1;
    PyTuple_SET_ITEM(cpy_r_r15, 1, __tmp6387);
    PyObject *__tmp6388 = cpy_r_r14.f2;
    PyTuple_SET_ITEM(cpy_r_r15, 2, __tmp6388);
    PyObject *__tmp6389 = CPyTagged_StealAsObject(cpy_r_r14.f3);
    PyTuple_SET_ITEM(cpy_r_r15, 3, __tmp6389);
    PyObject *__tmp6390 = CPyTagged_StealAsObject(cpy_r_r14.f4);
    PyTuple_SET_ITEM(cpy_r_r15, 4, __tmp6390);
    PyObject *__tmp6391 = cpy_r_r14.f5;
    PyTuple_SET_ITEM(cpy_r_r15, 5, __tmp6391);
    PyObject *__tmp6392 = cpy_r_r14.f6;
    PyTuple_SET_ITEM(cpy_r_r15, 6, __tmp6392);
    PyObject *__tmp6393 = cpy_r_r14.f7;
    PyTuple_SET_ITEM(cpy_r_r15, 7, __tmp6393);
    PyObject *__tmp6394 = CPyTagged_StealAsObject(cpy_r_r14.f8);
    PyTuple_SET_ITEM(cpy_r_r15, 8, __tmp6394);
    return cpy_r_r15;
CPyL4: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL5: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r4);
    CPyTagged_DecRef(cpy_r_r6);
    goto CPyL4;
CPyL6: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r4);
    CPyTagged_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    goto CPyL4;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r4);
    CPyTagged_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r10);
    goto CPyL4;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypeVarType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_type_var(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_var", 387, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T6OIIIOO cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = CPyStatics[4983]; /* 'ParamSpec' */
    cpy_r_r1 = ((mypy___types___ParamSpecTypeObject *)cpy_r_typ)->_id;
    cpy_r_r2 = ((mypy___types___TypeVarIdObject *)cpy_r_r1)->_raw_id;
    CPyTagged_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___types___ParamSpecTypeObject *)cpy_r_typ)->_id;
    cpy_r_r4 = ((mypy___types___TypeVarIdObject *)cpy_r_r3)->_meta_level;
    CPyTagged_INCREF(cpy_r_r4);
    cpy_r_r5 = ((mypy___types___ParamSpecTypeObject *)cpy_r_typ)->_flavor;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypy___types___ParamSpecTypeObject *)cpy_r_typ)->_upper_bound;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_astdiff___snapshot_type(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_param_spec", 406, CPyStatic_astdiff___globals);
        goto CPyL4;
    }
    cpy_r_r8 = ((mypy___types___ParamSpecTypeObject *)cpy_r_typ)->_default;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_astdiff___snapshot_type(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_param_spec", 407, CPyStatic_astdiff___globals);
        goto CPyL5;
    }
    cpy_r_r10.f0 = cpy_r_r0;
    cpy_r_r10.f1 = cpy_r_r2;
    cpy_r_r10.f2 = cpy_r_r4;
    cpy_r_r10.f3 = cpy_r_r5;
    cpy_r_r10.f4 = cpy_r_r7;
    cpy_r_r10.f5 = cpy_r_r9;
    CPy_INCREF(cpy_r_r10.f0);
    CPyTagged_INCREF(cpy_r_r10.f1);
    CPyTagged_INCREF(cpy_r_r10.f2);
    CPyTagged_INCREF(cpy_r_r10.f3);
    CPy_INCREF(cpy_r_r10.f4);
    CPy_INCREF(cpy_r_r10.f5);
    CPyTagged_DECREF(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = PyTuple_New(6);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6395 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp6395);
    PyObject *__tmp6396 = CPyTagged_StealAsObject(cpy_r_r10.f1);
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp6396);
    PyObject *__tmp6397 = CPyTagged_StealAsObject(cpy_r_r10.f2);
    PyTuple_SET_ITEM(cpy_r_r11, 2, __tmp6397);
    PyObject *__tmp6398 = CPyTagged_StealAsObject(cpy_r_r10.f3);
    PyTuple_SET_ITEM(cpy_r_r11, 3, __tmp6398);
    PyObject *__tmp6399 = cpy_r_r10.f4;
    PyTuple_SET_ITEM(cpy_r_r11, 4, __tmp6399);
    PyObject *__tmp6400 = cpy_r_r10.f5;
    PyTuple_SET_ITEM(cpy_r_r11, 5, __tmp6400);
    return cpy_r_r11;
CPyL3: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL4: ;
    CPyTagged_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r4);
    CPyTagged_DecRef(cpy_r_r5);
    goto CPyL3;
CPyL5: ;
    CPyTagged_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r4);
    CPyTagged_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r7);
    goto CPyL3;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___ParamSpecType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_param_spec(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_param_spec", 400, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_param_spec__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_param_spec(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_param_spec__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_param_spec__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_param_spec__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T5OIIOO cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPyStatics[45]; /* 'TypeVarTupleType' */
    cpy_r_r1 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_typ)->_id;
    cpy_r_r2 = ((mypy___types___TypeVarIdObject *)cpy_r_r1)->_raw_id;
    CPyTagged_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_typ)->_id;
    cpy_r_r4 = ((mypy___types___TypeVarIdObject *)cpy_r_r3)->_meta_level;
    CPyTagged_INCREF(cpy_r_r4);
    cpy_r_r5 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_typ)->_upper_bound;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_astdiff___snapshot_type(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_var_tuple", 415, CPyStatic_astdiff___globals);
        goto CPyL4;
    }
    cpy_r_r7 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_typ)->_default;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_astdiff___snapshot_type(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_var_tuple", 416, CPyStatic_astdiff___globals);
        goto CPyL5;
    }
    cpy_r_r9.f0 = cpy_r_r0;
    cpy_r_r9.f1 = cpy_r_r2;
    cpy_r_r9.f2 = cpy_r_r4;
    cpy_r_r9.f3 = cpy_r_r6;
    cpy_r_r9.f4 = cpy_r_r8;
    CPy_INCREF(cpy_r_r9.f0);
    CPyTagged_INCREF(cpy_r_r9.f1);
    CPyTagged_INCREF(cpy_r_r9.f2);
    CPy_INCREF(cpy_r_r9.f3);
    CPy_INCREF(cpy_r_r9.f4);
    CPyTagged_DECREF(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = PyTuple_New(5);
    if (unlikely(cpy_r_r10 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6401 = cpy_r_r9.f0;
    PyTuple_SET_ITEM(cpy_r_r10, 0, __tmp6401);
    PyObject *__tmp6402 = CPyTagged_StealAsObject(cpy_r_r9.f1);
    PyTuple_SET_ITEM(cpy_r_r10, 1, __tmp6402);
    PyObject *__tmp6403 = CPyTagged_StealAsObject(cpy_r_r9.f2);
    PyTuple_SET_ITEM(cpy_r_r10, 2, __tmp6403);
    PyObject *__tmp6404 = cpy_r_r9.f3;
    PyTuple_SET_ITEM(cpy_r_r10, 3, __tmp6404);
    PyObject *__tmp6405 = cpy_r_r9.f4;
    PyTuple_SET_ITEM(cpy_r_r10, 4, __tmp6405);
    return cpy_r_r10;
CPyL3: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL4: ;
    CPyTagged_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r4);
    goto CPyL3;
CPyL5: ;
    CPyTagged_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL3;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypeVarTupleType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_type_var_tuple(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_var_tuple", 410, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_type_var_tuple(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_type_var_tuple__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_var_tuple__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[47]; /* 'UnpackType' */
    cpy_r_r1 = ((mypy___types___UnpackTypeObject *)cpy_r_typ)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_astdiff___snapshot_type(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_unpack_type", 420, CPyStatic_astdiff___globals);
        goto CPyL2;
    }
    cpy_r_r3.f0 = cpy_r_r0;
    cpy_r_r3.f1 = cpy_r_r2;
    CPy_INCREF(cpy_r_r3.f0);
    CPy_INCREF(cpy_r_r3.f1);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = PyTuple_New(2);
    if (unlikely(cpy_r_r4 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6406 = cpy_r_r3.f0;
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp6406);
    PyObject *__tmp6407 = cpy_r_r3.f1;
    PyTuple_SET_ITEM(cpy_r_r4, 1, __tmp6407);
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___UnpackType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_unpack_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_unpack_type", 419, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_unpack_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_unpack_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_unpack_type__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_parameters(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_k;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    tuple_T4OOOO cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    cpy_r_r0 = CPyStatics[38]; /* 'Parameters' */
    cpy_r_r1 = ((mypy___types___ParametersObject *)cpy_r_typ)->_arg_types;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_astdiff___snapshot_types(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_parameters", 425, CPyStatic_astdiff___globals);
        goto CPyL17;
    }
    cpy_r_r3 = ((mypy___types___ParametersObject *)cpy_r_typ)->_arg_names;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = PyTuple_New(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_parameters", 426, CPyStatic_astdiff___globals);
        goto CPyL18;
    }
    cpy_r_r7 = 0;
CPyL3: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL19;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r7);
    if (PyUnicode_Check(cpy_r_r12))
        cpy_r_r13 = cpy_r_r12;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL6408;
    if (cpy_r_r12 == Py_None)
        cpy_r_r13 = cpy_r_r12;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL6408;
    CPy_TypeErrorTraceback("mypy/server/astdiff.py", "visit_parameters", 426, CPyStatic_astdiff___globals, "str or None", cpy_r_r12);
    goto CPyL20;
__LL6408: ;
    cpy_r_name = cpy_r_r13;
    cpy_r_r14 = CPyDef_astdiff___encode_optional_str(cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_parameters", 426, CPyStatic_astdiff___globals);
        goto CPyL20;
    }
    cpy_r_r15 = CPySequenceTuple_SetItemUnsafe(cpy_r_r6, cpy_r_r7, cpy_r_r14);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_parameters", 426, CPyStatic_astdiff___globals);
        goto CPyL20;
    }
    cpy_r_r16 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r16;
    goto CPyL3;
CPyL8: ;
    cpy_r_r17 = ((mypy___types___ParametersObject *)cpy_r_typ)->_arg_kinds;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = PyTuple_New(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_parameters", 427, CPyStatic_astdiff___globals);
        goto CPyL21;
    }
    cpy_r_r21 = 0;
CPyL10: ;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r24;
    if (!cpy_r_r25) goto CPyL22;
    cpy_r_r26 = CPyList_GetItemUnsafe(cpy_r_r17, cpy_r_r21);
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_nodes___ArgKind))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "visit_parameters", 427, CPyStatic_astdiff___globals, "mypy.nodes.ArgKind", cpy_r_r26);
        goto CPyL23;
    }
    cpy_r_k = cpy_r_r27;
    cpy_r_r28 = CPyStatics[2242]; /* 'value' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_k, cpy_r_r28);
    CPy_DECREF(cpy_r_k);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_parameters", 427, CPyStatic_astdiff___globals);
        goto CPyL23;
    }
    if (likely(PyLong_Check(cpy_r_r29)))
        cpy_r_r30 = CPyTagged_FromObject(cpy_r_r29);
    else {
        CPy_TypeError("int", cpy_r_r29); cpy_r_r30 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_parameters", 427, CPyStatic_astdiff___globals);
        goto CPyL23;
    }
    cpy_r_r31 = CPyTagged_StealAsObject(cpy_r_r30);
    cpy_r_r32 = CPySequenceTuple_SetItemUnsafe(cpy_r_r20, cpy_r_r21, cpy_r_r31);
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_parameters", 427, CPyStatic_astdiff___globals);
        goto CPyL23;
    }
    cpy_r_r33 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r33;
    goto CPyL10;
CPyL16: ;
    cpy_r_r34.f0 = cpy_r_r0;
    cpy_r_r34.f1 = cpy_r_r2;
    cpy_r_r34.f2 = cpy_r_r6;
    cpy_r_r34.f3 = cpy_r_r20;
    CPy_INCREF(cpy_r_r34.f0);
    CPy_INCREF(cpy_r_r34.f1);
    CPy_INCREF(cpy_r_r34.f2);
    CPy_INCREF(cpy_r_r34.f3);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r35 = PyTuple_New(4);
    if (unlikely(cpy_r_r35 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6409 = cpy_r_r34.f0;
    PyTuple_SET_ITEM(cpy_r_r35, 0, __tmp6409);
    PyObject *__tmp6410 = cpy_r_r34.f1;
    PyTuple_SET_ITEM(cpy_r_r35, 1, __tmp6410);
    PyObject *__tmp6411 = cpy_r_r34.f2;
    PyTuple_SET_ITEM(cpy_r_r35, 2, __tmp6411);
    PyObject *__tmp6412 = cpy_r_r34.f3;
    PyTuple_SET_ITEM(cpy_r_r35, 3, __tmp6412);
    return cpy_r_r35;
CPyL17: ;
    cpy_r_r36 = NULL;
    return cpy_r_r36;
CPyL18: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL8;
CPyL20: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r17);
    goto CPyL17;
CPyL22: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r20);
    goto CPyL17;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_parameters", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___Parameters))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_parameters(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_parameters", 422, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_parameters__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_parameters(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_parameters__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_parameters__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_parameters__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_k;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    tuple_T8OOOOOCCO cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    cpy_r_r0 = CPyDef_types___CallableType___is_generic(cpy_r_typ);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_callable_type", 431, CPyStatic_astdiff___globals);
        goto CPyL24;
    }
    if (!cpy_r_r0) goto CPyL25;
    cpy_r_r1 = CPyDef_astdiff___SnapshotTypeVisitor___normalize_callable_variables(cpy_r_self, cpy_r_typ);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_callable_type", 432, CPyStatic_astdiff___globals);
        goto CPyL24;
    }
    cpy_r_typ = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = CPyStatics[36]; /* 'CallableType' */
    cpy_r_r3 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_arg_types;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_astdiff___snapshot_types(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_callable_type", 435, CPyStatic_astdiff___globals);
        goto CPyL26;
    }
    cpy_r_r5 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_ret_type;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_astdiff___snapshot_type(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_callable_type", 436, CPyStatic_astdiff___globals);
        goto CPyL27;
    }
    cpy_r_r7 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_arg_names;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = PyTuple_New(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_callable_type", 437, CPyStatic_astdiff___globals);
        goto CPyL28;
    }
    cpy_r_r11 = 0;
CPyL8: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL29;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r11);
    if (PyUnicode_Check(cpy_r_r16))
        cpy_r_r17 = cpy_r_r16;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL6413;
    if (cpy_r_r16 == Py_None)
        cpy_r_r17 = cpy_r_r16;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL6413;
    CPy_TypeErrorTraceback("mypy/server/astdiff.py", "visit_callable_type", 437, CPyStatic_astdiff___globals, "str or None", cpy_r_r16);
    goto CPyL30;
__LL6413: ;
    cpy_r_name = cpy_r_r17;
    cpy_r_r18 = CPyDef_astdiff___encode_optional_str(cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_callable_type", 437, CPyStatic_astdiff___globals);
        goto CPyL30;
    }
    cpy_r_r19 = CPySequenceTuple_SetItemUnsafe(cpy_r_r10, cpy_r_r11, cpy_r_r18);
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_callable_type", 437, CPyStatic_astdiff___globals);
        goto CPyL30;
    }
    cpy_r_r20 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r20;
    goto CPyL8;
CPyL13: ;
    cpy_r_r21 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_arg_kinds;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r21)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = PyTuple_New(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_callable_type", 438, CPyStatic_astdiff___globals);
        goto CPyL31;
    }
    cpy_r_r25 = 0;
CPyL15: ;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_r21)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = (Py_ssize_t)cpy_r_r25 < (Py_ssize_t)cpy_r_r28;
    if (!cpy_r_r29) goto CPyL32;
    cpy_r_r30 = CPyList_GetItemUnsafe(cpy_r_r21, cpy_r_r25);
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_nodes___ArgKind))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "visit_callable_type", 438, CPyStatic_astdiff___globals, "mypy.nodes.ArgKind", cpy_r_r30);
        goto CPyL33;
    }
    cpy_r_k = cpy_r_r31;
    cpy_r_r32 = CPyStatics[2242]; /* 'value' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_k, cpy_r_r32);
    CPy_DECREF(cpy_r_k);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_callable_type", 438, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    if (likely(PyLong_Check(cpy_r_r33)))
        cpy_r_r34 = CPyTagged_FromObject(cpy_r_r33);
    else {
        CPy_TypeError("int", cpy_r_r33); cpy_r_r34 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_callable_type", 438, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    cpy_r_r35 = CPyTagged_StealAsObject(cpy_r_r34);
    cpy_r_r36 = CPySequenceTuple_SetItemUnsafe(cpy_r_r24, cpy_r_r25, cpy_r_r35);
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_callable_type", 438, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    cpy_r_r37 = cpy_r_r25 + 2;
    cpy_r_r25 = cpy_r_r37;
    goto CPyL15;
CPyL21: ;
    cpy_r_r38 = CPyDef_types___CallableType___is_type_obj(cpy_r_typ);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_callable_type", 439, CPyStatic_astdiff___globals);
        goto CPyL34;
    }
    cpy_r_r39 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_is_ellipsis_args;
    cpy_r_r40 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_variables;
    CPy_INCREF(cpy_r_r40);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r41 = CPyDef_astdiff___snapshot_types(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_callable_type", 441, CPyStatic_astdiff___globals);
        goto CPyL35;
    }
    cpy_r_r42.f0 = cpy_r_r2;
    cpy_r_r42.f1 = cpy_r_r4;
    cpy_r_r42.f2 = cpy_r_r6;
    cpy_r_r42.f3 = cpy_r_r10;
    cpy_r_r42.f4 = cpy_r_r24;
    cpy_r_r42.f5 = cpy_r_r38;
    cpy_r_r42.f6 = cpy_r_r39;
    cpy_r_r42.f7 = cpy_r_r41;
    CPy_INCREF(cpy_r_r42.f0);
    CPy_INCREF(cpy_r_r42.f1);
    CPy_INCREF(cpy_r_r42.f2);
    CPy_INCREF(cpy_r_r42.f3);
    CPy_INCREF(cpy_r_r42.f4);
    CPy_INCREF(cpy_r_r42.f7);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = PyTuple_New(8);
    if (unlikely(cpy_r_r43 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6414 = cpy_r_r42.f0;
    PyTuple_SET_ITEM(cpy_r_r43, 0, __tmp6414);
    PyObject *__tmp6415 = cpy_r_r42.f1;
    PyTuple_SET_ITEM(cpy_r_r43, 1, __tmp6415);
    PyObject *__tmp6416 = cpy_r_r42.f2;
    PyTuple_SET_ITEM(cpy_r_r43, 2, __tmp6416);
    PyObject *__tmp6417 = cpy_r_r42.f3;
    PyTuple_SET_ITEM(cpy_r_r43, 3, __tmp6417);
    PyObject *__tmp6418 = cpy_r_r42.f4;
    PyTuple_SET_ITEM(cpy_r_r43, 4, __tmp6418);
    PyObject *__tmp6419 = cpy_r_r42.f5 ? Py_True : Py_False;
    CPy_INCREF(__tmp6419);
    PyTuple_SET_ITEM(cpy_r_r43, 5, __tmp6419);
    PyObject *__tmp6420 = cpy_r_r42.f6 ? Py_True : Py_False;
    CPy_INCREF(__tmp6420);
    PyTuple_SET_ITEM(cpy_r_r43, 6, __tmp6420);
    PyObject *__tmp6421 = cpy_r_r42.f7;
    PyTuple_SET_ITEM(cpy_r_r43, 7, __tmp6421);
    return cpy_r_r43;
CPyL24: ;
    cpy_r_r44 = NULL;
    return cpy_r_r44;
CPyL25: ;
    CPy_INCREF(cpy_r_typ);
    goto CPyL4;
CPyL26: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL24;
CPyL27: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r4);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL24;
CPyL29: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL13;
CPyL30: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL24;
CPyL31: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r21);
    goto CPyL24;
CPyL32: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL21;
CPyL33: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    goto CPyL24;
CPyL34: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r24);
    goto CPyL24;
CPyL35: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r24);
    goto CPyL24;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___CallableType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_callable_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_callable_type", 430, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___normalize_callable_variables(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_tvs;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_tvmap;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_v;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_tid;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 446, CPyStatic_astdiff___globals);
        goto CPyL31;
    }
    cpy_r_tvs = cpy_r_r0;
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 447, CPyStatic_astdiff___globals);
        goto CPyL32;
    }
    cpy_r_tvmap = cpy_r_r1;
    cpy_r_r2 = 0;
    cpy_r_i = 0;
    cpy_r_r3 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_variables;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = PyObject_GetIter(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 448, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
CPyL3: ;
    cpy_r_r5 = PyIter_Next(cpy_r_r4);
    if (cpy_r_r5 == NULL) goto CPyL34;
    if (likely(PyObject_TypeCheck(cpy_r_r5, CPyType_types___TypeVarLikeType)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 448, CPyStatic_astdiff___globals, "mypy.types.TypeVarLikeType", cpy_r_r5);
        goto CPyL35;
    }
    cpy_r_v = cpy_r_r6;
    cpy_r_r7 = CPyTagged_Subtract(-2, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPyDef_types___TypeVarId(cpy_r_r7, cpy_r_r8, cpy_r_r9);
    CPyTagged_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 449, CPyStatic_astdiff___globals);
        goto CPyL36;
    }
    cpy_r_tid = cpy_r_r10;
    cpy_r_r11 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_v)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL11;
    CPy_INCREF(cpy_r_v);
    if (likely(Py_TYPE(cpy_r_v) == CPyType_types___TypeVarType))
        cpy_r_r15 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 451, CPyStatic_astdiff___globals, "mypy.types.TypeVarType", cpy_r_v);
        goto CPyL37;
    }
    cpy_r_r16 = PyDict_New();
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 451, CPyStatic_astdiff___globals);
        goto CPyL38;
    }
    cpy_r_r17 = NULL;
    cpy_r_r18 = NULL;
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPY_INT_TAG;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPyDef_types___TypeVarType___copy_modified(cpy_r_r15, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_tid, cpy_r_r20, cpy_r_r21, cpy_r_r16);
    CPy_DECREF(cpy_r_tid);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 451, CPyStatic_astdiff___globals);
        goto CPyL36;
    }
    cpy_r_tv = cpy_r_r22;
    goto CPyL23;
CPyL11: ;
    cpy_r_r23 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_v)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (!cpy_r_r26) goto CPyL16;
    CPy_INCREF(cpy_r_v);
    if (likely(Py_TYPE(cpy_r_v) == CPyType_types___TypeVarTupleType))
        cpy_r_r27 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 453, CPyStatic_astdiff___globals, "mypy.types.TypeVarTupleType", cpy_r_v);
        goto CPyL37;
    }
    cpy_r_r28 = PyDict_New();
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 453, CPyStatic_astdiff___globals);
        goto CPyL39;
    }
    cpy_r_r29 = NULL;
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPyDef_types___TypeVarTupleType___copy_modified(cpy_r_r27, cpy_r_tid, cpy_r_r29, cpy_r_r30, cpy_r_r28);
    CPy_DECREF(cpy_r_tid);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 453, CPyStatic_astdiff___globals);
        goto CPyL36;
    }
    cpy_r_tv = cpy_r_r31;
    goto CPyL23;
CPyL16: ;
    cpy_r_r32 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_v)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (cpy_r_r35) {
        goto CPyL19;
    } else
        goto CPyL40;
CPyL17: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r36 = 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 455, CPyStatic_astdiff___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL19: ;
    CPy_INCREF(cpy_r_v);
    if (likely(Py_TYPE(cpy_r_v) == CPyType_types___ParamSpecType))
        cpy_r_r37 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 456, CPyStatic_astdiff___globals, "mypy.types.ParamSpecType", cpy_r_v);
        goto CPyL37;
    }
    cpy_r_r38 = PyDict_New();
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 456, CPyStatic_astdiff___globals);
        goto CPyL41;
    }
    cpy_r_r39 = CPY_INT_TAG;
    cpy_r_r40 = NULL;
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPyDef_types___ParamSpecType___copy_modified(cpy_r_r37, cpy_r_tid, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r38);
    CPy_DECREF(cpy_r_tid);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 456, CPyStatic_astdiff___globals);
        goto CPyL36;
    }
    cpy_r_tv = cpy_r_r42;
CPyL23: ;
    cpy_r_r43 = PyList_Append(cpy_r_tvs, cpy_r_tv);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 457, CPyStatic_astdiff___globals);
        goto CPyL42;
    }
    cpy_r_r45 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_v)->_id;
    CPy_INCREF(cpy_r_r45);
    CPy_DECREF(cpy_r_v);
    cpy_r_r46 = CPyDict_SetItem(cpy_r_tvmap, cpy_r_r45, cpy_r_tv);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_tv);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 458, CPyStatic_astdiff___globals);
        goto CPyL43;
    }
    cpy_r_r48 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r48;
    cpy_r_i = cpy_r_r48;
    goto CPyL3;
CPyL26: ;
    cpy_r_r49 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 448, CPyStatic_astdiff___globals);
        goto CPyL44;
    }
    cpy_r_r50 = CPyDef_expandtype___expand_type(cpy_r_typ, cpy_r_tvmap);
    CPy_DECREF(cpy_r_tvmap);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 459, CPyStatic_astdiff___globals);
        goto CPyL32;
    }
    if (likely(Py_TYPE(cpy_r_r50) == CPyType_types___CallableType))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 459, CPyStatic_astdiff___globals, "mypy.types.CallableType", cpy_r_r50);
        goto CPyL32;
    }
    cpy_r_r52 = NULL;
    cpy_r_r53 = NULL;
    cpy_r_r54 = NULL;
    cpy_r_r55 = NULL;
    cpy_r_r56 = NULL;
    cpy_r_r57 = NULL;
    cpy_r_r58 = NULL;
    cpy_r_r59 = CPY_INT_TAG;
    cpy_r_r60 = CPY_INT_TAG;
    cpy_r_r61 = NULL;
    cpy_r_r62 = NULL;
    cpy_r_r63 = NULL;
    cpy_r_r64 = NULL;
    cpy_r_r65 = NULL;
    cpy_r_r66 = NULL;
    cpy_r_r67 = NULL;
    cpy_r_r68 = NULL;
    cpy_r_r69 = NULL;
    cpy_r_r70 = CPyDef_types___CallableType___copy_modified(cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_tvs, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_tvs);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 459, CPyStatic_astdiff___globals);
        goto CPyL31;
    }
    return cpy_r_r70;
CPyL31: ;
    cpy_r_r71 = NULL;
    return cpy_r_r71;
CPyL32: ;
    CPy_DecRef(cpy_r_tvs);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tvmap);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL31;
CPyL34: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r4);
    goto CPyL26;
CPyL35: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tvmap);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r4);
    goto CPyL31;
CPyL36: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tvmap);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_v);
    goto CPyL31;
CPyL37: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tvmap);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_tid);
    goto CPyL31;
CPyL38: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tvmap);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_tid);
    CPy_DecRef(cpy_r_r15);
    goto CPyL31;
CPyL39: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tvmap);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_tid);
    CPy_DecRef(cpy_r_r27);
    goto CPyL31;
CPyL40: ;
    CPy_DECREF(cpy_r_tvs);
    CPy_DECREF(cpy_r_tvmap);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_v);
    CPy_DECREF(cpy_r_tid);
    goto CPyL17;
CPyL41: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tvmap);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_tid);
    CPy_DecRef(cpy_r_r37);
    goto CPyL31;
CPyL42: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tvmap);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_tv);
    goto CPyL31;
CPyL43: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tvmap);
    CPy_DecRef(cpy_r_r4);
    goto CPyL31;
CPyL44: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tvmap);
    goto CPyL31;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___normalize_callable_variables(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:normalize_callable_variables", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___CallableType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___normalize_callable_variables(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "normalize_callable_variables", 444, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[41]; /* 'TupleType' */
    cpy_r_r1 = ((mypy___types___TupleTypeObject *)cpy_r_typ)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_astdiff___snapshot_types(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_tuple_type", 462, CPyStatic_astdiff___globals);
        goto CPyL2;
    }
    cpy_r_r3.f0 = cpy_r_r0;
    cpy_r_r3.f1 = cpy_r_r2;
    CPy_INCREF(cpy_r_r3.f0);
    CPy_INCREF(cpy_r_r3.f1);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = PyTuple_New(2);
    if (unlikely(cpy_r_r4 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6422 = cpy_r_r3.f0;
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp6422);
    PyObject *__tmp6423 = cpy_r_r3.f1;
    PyTuple_SET_ITEM(cpy_r_r4, 1, __tmp6423);
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TupleType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_tuple_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_tuple_type", 461, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_tuple_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_tuple_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_tuple_type__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T4CIOO cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_key;
    PyObject *cpy_r_item_type;
    PyObject *cpy_r_r13;
    tuple_T2OO cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_required;
    PyObject *cpy_r_r30;
    tuple_T3OOO cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_typeddict_type", 465, CPyStatic_astdiff___globals);
        goto CPyL15;
    }
    cpy_r_r1 = ((mypy___types___TypedDictTypeObject *)cpy_r_typ)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
    cpy_r_r3 = PyDict_Size(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = CPyDict_GetItemsIter(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_typeddict_type", 465, CPyStatic_astdiff___globals);
        goto CPyL16;
    }
CPyL2: ;
    cpy_r_r6 = CPyDict_NextItem(cpy_r_r5, cpy_r_r2);
    cpy_r_r7 = cpy_r_r6.f1;
    cpy_r_r2 = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f0;
    if (!cpy_r_r8) goto CPyL17;
    cpy_r_r9 = cpy_r_r6.f2;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = cpy_r_r6.f3;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r6.f2);
    CPy_DECREF(cpy_r_r6.f3);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r11 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "visit_typeddict_type", 465, CPyStatic_astdiff___globals, "str", cpy_r_r9);
        goto CPyL18;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "visit_typeddict_type", 465, CPyStatic_astdiff___globals, "mypy.types.Type", cpy_r_r10);
        goto CPyL19;
    }
    cpy_r_key = cpy_r_r11;
    cpy_r_item_type = cpy_r_r12;
    cpy_r_r13 = CPyDef_astdiff___snapshot_type(cpy_r_item_type);
    CPy_DECREF(cpy_r_item_type);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_typeddict_type", 465, CPyStatic_astdiff___globals);
        goto CPyL20;
    }
    cpy_r_r14.f0 = cpy_r_key;
    cpy_r_r14.f1 = cpy_r_r13;
    CPy_INCREF(cpy_r_r14.f0);
    CPy_INCREF(cpy_r_r14.f1);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = PyTuple_New(2);
    if (unlikely(cpy_r_r15 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6424 = cpy_r_r14.f0;
    PyTuple_SET_ITEM(cpy_r_r15, 0, __tmp6424);
    PyObject *__tmp6425 = cpy_r_r14.f1;
    PyTuple_SET_ITEM(cpy_r_r15, 1, __tmp6425);
    cpy_r_r16 = PyList_Append(cpy_r_r0, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_typeddict_type", 465, CPyStatic_astdiff___globals);
        goto CPyL21;
    }
    cpy_r_r18 = CPyDict_CheckSize(cpy_r_r1, cpy_r_r4);
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_typeddict_type", 465, CPyStatic_astdiff___globals);
        goto CPyL21;
    } else
        goto CPyL2;
CPyL8: ;
    cpy_r_r19 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_typeddict_type", 465, CPyStatic_astdiff___globals);
        goto CPyL22;
    }
    cpy_r_r20 = PyList_AsTuple(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_typeddict_type", 465, CPyStatic_astdiff___globals);
        goto CPyL15;
    }
    cpy_r_items = cpy_r_r20;
    cpy_r_r21 = ((mypy___types___TypedDictTypeObject *)cpy_r_typ)->_required_keys;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyModule_builtins;
    cpy_r_r23 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_typeddict_type", 466, CPyStatic_astdiff___globals);
        goto CPyL23;
    }
    PyObject *cpy_r_r25[1] = {cpy_r_r21};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r26, 1, 0);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_typeddict_type", 466, CPyStatic_astdiff___globals);
        goto CPyL23;
    }
    CPy_DECREF(cpy_r_r21);
    if (likely(PyList_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "visit_typeddict_type", 466, CPyStatic_astdiff___globals, "list", cpy_r_r27);
        goto CPyL24;
    }
    cpy_r_r29 = PyList_AsTuple(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_typeddict_type", 466, CPyStatic_astdiff___globals);
        goto CPyL24;
    }
    cpy_r_required = cpy_r_r29;
    cpy_r_r30 = CPyStatics[62]; /* 'TypedDictType' */
    cpy_r_r31.f0 = cpy_r_r30;
    cpy_r_r31.f1 = cpy_r_items;
    cpy_r_r31.f2 = cpy_r_required;
    CPy_INCREF(cpy_r_r31.f0);
    CPy_INCREF(cpy_r_r31.f1);
    CPy_INCREF(cpy_r_r31.f2);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_required);
    cpy_r_r32 = PyTuple_New(3);
    if (unlikely(cpy_r_r32 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6426 = cpy_r_r31.f0;
    PyTuple_SET_ITEM(cpy_r_r32, 0, __tmp6426);
    PyObject *__tmp6427 = cpy_r_r31.f1;
    PyTuple_SET_ITEM(cpy_r_r32, 1, __tmp6427);
    PyObject *__tmp6428 = cpy_r_r31.f2;
    PyTuple_SET_ITEM(cpy_r_r32, 2, __tmp6428);
    return cpy_r_r32;
CPyL15: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL15;
CPyL17: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6.f2);
    CPy_DECREF(cpy_r_r6.f3);
    goto CPyL8;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r10);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r11);
    goto CPyL15;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_key);
    goto CPyL15;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL15;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL15;
CPyL23: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r21);
    goto CPyL15;
CPyL24: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL15;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypedDictType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_typeddict_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_typeddict_type", 464, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_typeddict_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_typeddict_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_typeddict_type__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T3OOO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyStatics[1063]; /* 'LiteralType' */
    cpy_r_r1 = ((mypy___types___LiteralTypeObject *)cpy_r_typ)->_fallback;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_astdiff___snapshot_type(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_literal_type", 470, CPyStatic_astdiff___globals);
        goto CPyL2;
    }
    cpy_r_r3 = ((mypy___types___LiteralTypeObject *)cpy_r_typ)->_value;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4.f0 = cpy_r_r0;
    cpy_r_r4.f1 = cpy_r_r2;
    cpy_r_r4.f2 = cpy_r_r3;
    CPy_INCREF(cpy_r_r4.f0);
    CPy_INCREF(cpy_r_r4.f1);
    CPy_INCREF(cpy_r_r4.f2);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = PyTuple_New(3);
    if (unlikely(cpy_r_r5 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6429 = cpy_r_r4.f0;
    PyTuple_SET_ITEM(cpy_r_r5, 0, __tmp6429);
    PyObject *__tmp6430 = cpy_r_r4.f1;
    PyTuple_SET_ITEM(cpy_r_r5, 1, __tmp6430);
    PyObject *__tmp6431 = cpy_r_r4.f2;
    PyTuple_SET_ITEM(cpy_r_r5, 2, __tmp6431);
    return cpy_r_r5;
CPyL2: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___LiteralType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_literal_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_literal_type", 469, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_literal_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_literal_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_literal_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_literal_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_literal_type__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_normalized;
    PyObject *cpy_r_r21;
    tuple_T2OO cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_union_type", 475, CPyStatic_astdiff___globals);
        goto CPyL12;
    }
    cpy_r_r1 = ((mypy___types___UnionTypeObject *)cpy_r_typ)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL13;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_types___Type)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "visit_union_type", 475, CPyStatic_astdiff___globals, "mypy.types.Type", cpy_r_r7);
        goto CPyL14;
    }
    cpy_r_item = cpy_r_r8;
    cpy_r_r9 = CPyDef_astdiff___snapshot_type(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_union_type", 475, CPyStatic_astdiff___globals);
        goto CPyL14;
    }
    cpy_r_r10 = PySet_Add(cpy_r_r0, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_union_type", 475, CPyStatic_astdiff___globals);
        goto CPyL14;
    }
    cpy_r_r12 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r12;
    goto CPyL2;
CPyL7: ;
    cpy_r_items = cpy_r_r0;
    cpy_r_r13 = CPyModule_builtins;
    cpy_r_r14 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_union_type", 476, CPyStatic_astdiff___globals);
        goto CPyL15;
    }
    PyObject *cpy_r_r16[1] = {cpy_r_items};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 1, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_union_type", 476, CPyStatic_astdiff___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_items);
    if (likely(PyList_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "visit_union_type", 476, CPyStatic_astdiff___globals, "list", cpy_r_r18);
        goto CPyL12;
    }
    cpy_r_r20 = PyList_AsTuple(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_union_type", 476, CPyStatic_astdiff___globals);
        goto CPyL12;
    }
    cpy_r_normalized = cpy_r_r20;
    cpy_r_r21 = CPyStatics[108]; /* 'UnionType' */
    cpy_r_r22.f0 = cpy_r_r21;
    cpy_r_r22.f1 = cpy_r_normalized;
    CPy_INCREF(cpy_r_r22.f0);
    CPy_INCREF(cpy_r_r22.f1);
    CPy_DECREF(cpy_r_normalized);
    cpy_r_r23 = PyTuple_New(2);
    if (unlikely(cpy_r_r23 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6432 = cpy_r_r22.f0;
    PyTuple_SET_ITEM(cpy_r_r23, 0, __tmp6432);
    PyObject *__tmp6433 = cpy_r_r22.f1;
    PyTuple_SET_ITEM(cpy_r_r23, 1, __tmp6433);
    return cpy_r_r23;
CPyL12: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL12;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___UnionType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_union_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_union_type", 472, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_union_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[1064]; /* 'Overloaded' */
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_typ, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_overloaded", 480, CPyStatic_astdiff___globals);
        goto CPyL3;
    }
CPyL1: ;
    cpy_r_r2 = CPyDef_astdiff___snapshot_types(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_overloaded", 480, CPyStatic_astdiff___globals);
        goto CPyL3;
    }
    cpy_r_r3.f0 = cpy_r_r0;
    cpy_r_r3.f1 = cpy_r_r2;
    CPy_INCREF(cpy_r_r3.f0);
    CPy_INCREF(cpy_r_r3.f1);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = PyTuple_New(2);
    if (unlikely(cpy_r_r4 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6434 = cpy_r_r3.f0;
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp6434);
    PyObject *__tmp6435 = cpy_r_r3.f1;
    PyTuple_SET_ITEM(cpy_r_r4, 1, __tmp6435);
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___Overloaded))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_overloaded(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_overloaded", 479, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_overloaded__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_overloaded(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_overloaded__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_overloaded__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_overloaded__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_partial_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_partial_type", 485, CPyStatic_astdiff___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_partial_type", 485, CPyStatic_astdiff___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___PartialType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_partial_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_partial_type", 482, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_partial_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_partial_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_partial_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_partial_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_partial_type__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_type_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[107]; /* 'TypeType' */
    cpy_r_r1 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_item;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_astdiff___snapshot_type(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_type", 488, CPyStatic_astdiff___globals);
        goto CPyL2;
    }
    cpy_r_r3.f0 = cpy_r_r0;
    cpy_r_r3.f1 = cpy_r_r2;
    CPy_INCREF(cpy_r_r3.f0);
    CPy_INCREF(cpy_r_r3.f1);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = PyTuple_New(2);
    if (unlikely(cpy_r_r4 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6436 = cpy_r_r3.f0;
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp6436);
    PyObject *__tmp6437 = cpy_r_r3.f1;
    PyTuple_SET_ITEM(cpy_r_r4, 1, __tmp6437);
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_type_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_type_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypeType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_type_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_type", 487, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_type_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_type_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_type_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_type_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_type__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T3OOO cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = ((mypy___types___TypeAliasTypeObject *)cpy_r_typ)->_alias;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_alias_type", 491, CPyStatic_astdiff___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = CPyStatics[1066]; /* 'TypeAliasType' */
    cpy_r_r5 = ((mypy___types___TypeAliasTypeObject *)cpy_r_typ)->_alias;
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "visit_type_alias_type", 492, CPyStatic_astdiff___globals, "mypy.nodes.TypeAlias", cpy_r_r5);
        goto CPyL7;
    }
    cpy_r_r7 = CPY_GET_ATTR(cpy_r_r6, CPyType_nodes___TypeAlias, 9, mypy___nodes___TypeAliasObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_alias_type", 492, CPyStatic_astdiff___globals);
        goto CPyL7;
    }
CPyL5: ;
    cpy_r_r8 = ((mypy___types___TypeAliasTypeObject *)cpy_r_typ)->_args;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_astdiff___snapshot_types(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_alias_type", 492, CPyStatic_astdiff___globals);
        goto CPyL8;
    }
    cpy_r_r10.f0 = cpy_r_r4;
    cpy_r_r10.f1 = cpy_r_r7;
    cpy_r_r10.f2 = cpy_r_r9;
    CPy_INCREF(cpy_r_r10.f0);
    CPy_INCREF(cpy_r_r10.f1);
    CPy_INCREF(cpy_r_r10.f2);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = PyTuple_New(3);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6438 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp6438);
    PyObject *__tmp6439 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp6439);
    PyObject *__tmp6440 = cpy_r_r10.f2;
    PyTuple_SET_ITEM(cpy_r_r11, 2, __tmp6440);
    return cpy_r_r11;
CPyL7: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL8: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL7;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypeAliasType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_type_alias_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_alias_type", 490, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___SnapshotTypeVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_astdiff___SnapshotTypeVisitor___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_astdiff___SnapshotTypeVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astdiff___SnapshotTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astdiff.SnapshotTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astdiff___SnapshotTypeVisitor___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_astdiff___globals);
    return NULL;
}

PyObject *CPyDef_astdiff___snapshot_untyped_signature(PyObject *cpy_r_func) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T2OO cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    tuple_T1O cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    cpy_r_r0 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_func)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_func)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL9;
    if (likely((Py_TYPE(cpy_r_func) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_func) == CPyType_nodes___LambdaExpr)))
        cpy_r_r9 = cpy_r_func;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 505, CPyStatic_astdiff___globals, "mypy.nodes.FuncItem", cpy_r_func);
        goto CPyL28;
    }
    cpy_r_r10 = ((mypy___nodes___FuncItemObject *)cpy_r_r9)->_arg_names;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = PyList_AsTuple(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 505, CPyStatic_astdiff___globals);
        goto CPyL28;
    }
    if (likely((Py_TYPE(cpy_r_func) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_func) == CPyType_nodes___LambdaExpr)))
        cpy_r_r12 = cpy_r_func;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 505, CPyStatic_astdiff___globals, "mypy.nodes.FuncItem", cpy_r_func);
        goto CPyL29;
    }
    cpy_r_r13 = ((mypy___nodes___FuncItemObject *)cpy_r_r12)->_arg_kinds;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = PyList_AsTuple(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 505, CPyStatic_astdiff___globals);
        goto CPyL29;
    }
    cpy_r_r15.f0 = cpy_r_r11;
    cpy_r_r15.f1 = cpy_r_r14;
    CPy_INCREF(cpy_r_r15.f0);
    CPy_INCREF(cpy_r_r15.f1);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = PyTuple_New(2);
    if (unlikely(cpy_r_r16 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6441 = cpy_r_r15.f0;
    PyTuple_SET_ITEM(cpy_r_r16, 0, __tmp6441);
    PyObject *__tmp6442 = cpy_r_r15.f1;
    PyTuple_SET_ITEM(cpy_r_r16, 1, __tmp6442);
    return cpy_r_r16;
CPyL9: ;
    cpy_r_r17 = PyList_New(0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 507, CPyStatic_astdiff___globals);
        goto CPyL28;
    }
    cpy_r_result = cpy_r_r17;
    if (likely(Py_TYPE(cpy_r_func) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r18 = cpy_r_func;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 508, CPyStatic_astdiff___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_func);
        goto CPyL30;
    }
    cpy_r_r19 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r18)->_items;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = 0;
CPyL12: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r23;
    if (!cpy_r_r24) goto CPyL31;
    cpy_r_r25 = CPyList_GetItemUnsafe(cpy_r_r19, cpy_r_r20);
    if (Py_TYPE(cpy_r_r25) == CPyType_nodes___FuncDef)
        cpy_r_r26 = cpy_r_r25;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL6443;
    if (Py_TYPE(cpy_r_r25) == CPyType_nodes___Decorator)
        cpy_r_r26 = cpy_r_r25;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL6443;
    CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 508, CPyStatic_astdiff___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r25);
    goto CPyL32;
__LL6443: ;
    cpy_r_item = cpy_r_r26;
    cpy_r_r27 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r28 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r29 = *(PyObject * *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 == cpy_r_r27;
    if (!cpy_r_r30) goto CPyL22;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___Decorator))
        cpy_r_r31 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 510, CPyStatic_astdiff___globals, "mypy.nodes.Decorator", cpy_r_item);
        goto CPyL33;
    }
    cpy_r_r32 = ((mypy___nodes___DecoratorObject *)cpy_r_r31)->_var;
    cpy_r_r33 = ((mypy___nodes___VarObject *)cpy_r_r32)->_type;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = cpy_r_r33 != cpy_r_r34;
    CPy_DECREF(cpy_r_r33);
    if (!cpy_r_r35) goto CPyL34;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___Decorator))
        cpy_r_r36 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 511, CPyStatic_astdiff___globals, "mypy.nodes.Decorator", cpy_r_item);
        goto CPyL33;
    }
    cpy_r_r37 = ((mypy___nodes___DecoratorObject *)cpy_r_r36)->_var;
    cpy_r_r38 = ((mypy___nodes___VarObject *)cpy_r_r37)->_type;
    CPy_INCREF(cpy_r_r38);
    if (likely(cpy_r_r38 != Py_None))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 511, CPyStatic_astdiff___globals, "mypy.types.Type", cpy_r_r38);
        goto CPyL33;
    }
    CPy_DECREF(cpy_r_item);
    cpy_r_r40 = CPyDef_astdiff___snapshot_type(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 511, CPyStatic_astdiff___globals);
        goto CPyL32;
    }
    cpy_r_r41 = PyList_Append(cpy_r_result, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 511, CPyStatic_astdiff___globals);
        goto CPyL32;
    } else
        goto CPyL25;
CPyL21: ;
    cpy_r_r43 = CPyStatics[5295]; /* 'DecoratorWithoutType' */
    cpy_r_r44.f0 = cpy_r_r43;
    CPy_INCREF(cpy_r_r44.f0);
    cpy_r_r45 = PyTuple_New(1);
    if (unlikely(cpy_r_r45 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6444 = cpy_r_r44.f0;
    PyTuple_SET_ITEM(cpy_r_r45, 0, __tmp6444);
    cpy_r_r46 = PyList_Append(cpy_r_result, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 513, CPyStatic_astdiff___globals);
        goto CPyL32;
    } else
        goto CPyL25;
CPyL22: ;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___FuncDef))
        cpy_r_r48 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 515, CPyStatic_astdiff___globals, "mypy.nodes.FuncDef", cpy_r_item);
        goto CPyL32;
    }
    cpy_r_r49 = CPyDef_astdiff___snapshot_untyped_signature(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 515, CPyStatic_astdiff___globals);
        goto CPyL32;
    }
    cpy_r_r50 = PyList_Append(cpy_r_result, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 515, CPyStatic_astdiff___globals);
        goto CPyL32;
    }
CPyL25: ;
    cpy_r_r52 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r52;
    goto CPyL12;
CPyL26: ;
    cpy_r_r53 = PyList_AsTuple(cpy_r_result);
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 516, CPyStatic_astdiff___globals);
        goto CPyL28;
    }
    return cpy_r_r53;
CPyL28: ;
    cpy_r_r54 = NULL;
    return cpy_r_r54;
CPyL29: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL28;
CPyL30: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL28;
CPyL31: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL26;
CPyL32: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r19);
    goto CPyL28;
CPyL33: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_item);
    goto CPyL28;
CPyL34: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL21;
}

PyObject *CPyPy_astdiff___snapshot_untyped_signature(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"func", 0};
    static CPyArg_Parser parser = {"O:snapshot_untyped_signature", kwlist, 0};
    PyObject *obj_func;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_func)) {
        return NULL;
    }
    PyObject *arg_func;
    if (Py_TYPE(obj_func) == CPyType_nodes___OverloadedFuncDef)
        arg_func = obj_func;
    else {
        arg_func = NULL;
    }
    if (arg_func != NULL) goto __LL6445;
    if ((Py_TYPE(obj_func) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_func) == CPyType_nodes___LambdaExpr))
        arg_func = obj_func;
    else {
        arg_func = NULL;
    }
    if (arg_func != NULL) goto __LL6445;
    CPy_TypeError("union[mypy.nodes.OverloadedFuncDef, mypy.nodes.FuncItem]", obj_func); 
    goto fail;
__LL6445: ;
    PyObject *retval = CPyDef_astdiff___snapshot_untyped_signature(arg_func);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astdiff.py", "snapshot_untyped_signature", 495, CPyStatic_astdiff___globals);
    return NULL;
}

char CPyDef_astdiff_____top_level__(void) {
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
    tuple_T4OOOO cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    tuple_T2OO cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    tuple_T2OO cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    tuple_T2OO cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    int32_t cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", -1, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_astdiff___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 53, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9744]; /* ('Sequence', 'Tuple', 'Union') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_astdiff___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 55, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9086]; /* ('TypeAlias',) */
    cpy_r_r14 = CPyStatics[9087]; /* ('_TypeAlias',) */
    cpy_r_r15 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r16 = CPyStatic_astdiff___globals;
    cpy_r_r17 = CPyImport_ImportFromMany(cpy_r_r15, cpy_r_r13, cpy_r_r14, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 56, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    CPyModule_typing_extensions = cpy_r_r17;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r18 = CPyStatics[9494]; /* ('expand_type',) */
    cpy_r_r19 = CPyStatics[31]; /* 'mypy.expandtype' */
    cpy_r_r20 = CPyStatic_astdiff___globals;
    cpy_r_r21 = CPyImport_ImportFromMany(cpy_r_r19, cpy_r_r18, cpy_r_r18, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 58, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    CPyModule_mypy___expandtype = cpy_r_r21;
    CPy_INCREF(CPyModule_mypy___expandtype);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r22 = CPyStatics[9745]; /* ('UNBOUND_IMPORTED', 'Decorator', 'FuncBase', 'FuncDef',
                                     'FuncItem', 'MypyFile', 'OverloadedFuncDef',
                                     'ParamSpecExpr', 'SymbolNode', 'SymbolTable',
                                     'TypeAlias', 'TypeInfo', 'TypeVarExpr',
                                     'TypeVarTupleExpr', 'Var') */
    cpy_r_r23 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r24 = CPyStatic_astdiff___globals;
    cpy_r_r25 = CPyImport_ImportFromMany(cpy_r_r23, cpy_r_r22, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 59, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    CPyModule_mypy___nodes = cpy_r_r25;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r26 = CPyStatics[9709]; /* ('find_dataclass_transform_spec',) */
    cpy_r_r27 = CPyStatics[4478]; /* 'mypy.semanal_shared' */
    cpy_r_r28 = CPyStatic_astdiff___globals;
    cpy_r_r29 = CPyImport_ImportFromMany(cpy_r_r27, cpy_r_r26, cpy_r_r26, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 76, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    CPyModule_mypy___semanal_shared = cpy_r_r29;
    CPy_INCREF(CPyModule_mypy___semanal_shared);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r30 = CPyStatics[9746]; /* ('AnyType', 'CallableType', 'DeletedType', 'ErasedType',
                                     'Instance', 'LiteralType', 'NoneType', 'Overloaded',
                                     'Parameters', 'ParamSpecType', 'PartialType',
                                     'TupleType', 'Type', 'TypeAliasType', 'TypedDictType',
                                     'TypeType', 'TypeVarId', 'TypeVarLikeType',
                                     'TypeVarTupleType', 'TypeVarType', 'TypeVisitor',
                                     'UnboundType', 'UninhabitedType', 'UnionType',
                                     'UnpackType') */
    cpy_r_r31 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r32 = CPyStatic_astdiff___globals;
    cpy_r_r33 = CPyImport_ImportFromMany(cpy_r_r31, cpy_r_r30, cpy_r_r30, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 77, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    CPyModule_mypy___types = cpy_r_r33;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r34 = CPyStatics[9747]; /* ('get_prefix',) */
    cpy_r_r35 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r36 = CPyStatic_astdiff___globals;
    cpy_r_r37 = CPyImport_ImportFromMany(cpy_r_r35, cpy_r_r34, cpy_r_r34, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 104, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    CPyModule_mypy___util = cpy_r_r37;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r38 = CPyStatic_astdiff___globals;
    cpy_r_r39 = CPyStatics[84]; /* 'Union' */
    cpy_r_r40 = CPyDict_GetItem(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 115, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    cpy_r_r41 = (PyObject *)&PyUnicode_Type;
    cpy_r_r42 = (PyObject *)&PyFloat_Type;
    cpy_r_r43 = (PyObject *)&PyLong_Type;
    cpy_r_r44 = (PyObject *)&PyBool_Type;
    cpy_r_r45.f0 = cpy_r_r41;
    cpy_r_r45.f1 = cpy_r_r42;
    cpy_r_r45.f2 = cpy_r_r43;
    cpy_r_r45.f3 = cpy_r_r44;
    CPy_INCREF(cpy_r_r45.f0);
    CPy_INCREF(cpy_r_r45.f1);
    CPy_INCREF(cpy_r_r45.f2);
    CPy_INCREF(cpy_r_r45.f3);
    cpy_r_r46 = PyTuple_New(4);
    if (unlikely(cpy_r_r46 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6446 = cpy_r_r45.f0;
    PyTuple_SET_ITEM(cpy_r_r46, 0, __tmp6446);
    PyObject *__tmp6447 = cpy_r_r45.f1;
    PyTuple_SET_ITEM(cpy_r_r46, 1, __tmp6447);
    PyObject *__tmp6448 = cpy_r_r45.f2;
    PyTuple_SET_ITEM(cpy_r_r46, 2, __tmp6448);
    PyObject *__tmp6449 = cpy_r_r45.f3;
    PyTuple_SET_ITEM(cpy_r_r46, 3, __tmp6449);
    cpy_r_r47 = PyObject_GetItem(cpy_r_r40, cpy_r_r46);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 115, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    cpy_r_r48 = CPyStatic_astdiff___globals;
    cpy_r_r49 = CPyStatics[5297]; /* 'Primitive' */
    cpy_r_r50 = CPyDict_SetItem(cpy_r_r48, cpy_r_r49, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 115, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    cpy_r_r52 = CPyStatic_astdiff___globals;
    cpy_r_r53 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r54 = CPyDict_GetItem(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 116, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    cpy_r_r55 = CPyStatic_astdiff___globals;
    cpy_r_r56 = CPyStatics[84]; /* 'Union' */
    cpy_r_r57 = CPyDict_GetItem(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 116, CPyStatic_astdiff___globals);
        goto CPyL34;
    }
    cpy_r_r58 = CPyStatic_astdiff___globals;
    cpy_r_r59 = CPyStatics[5297]; /* 'Primitive' */
    cpy_r_r60 = CPyDict_GetItem(cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 116, CPyStatic_astdiff___globals);
        goto CPyL35;
    }
    cpy_r_r61 = CPyStatics[5298]; /* 'SnapshotItem' */
    cpy_r_r62.f0 = cpy_r_r60;
    cpy_r_r62.f1 = cpy_r_r61;
    CPy_INCREF(cpy_r_r62.f0);
    CPy_INCREF(cpy_r_r62.f1);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r63 = PyTuple_New(2);
    if (unlikely(cpy_r_r63 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6450 = cpy_r_r62.f0;
    PyTuple_SET_ITEM(cpy_r_r63, 0, __tmp6450);
    PyObject *__tmp6451 = cpy_r_r62.f1;
    PyTuple_SET_ITEM(cpy_r_r63, 1, __tmp6451);
    cpy_r_r64 = PyObject_GetItem(cpy_r_r57, cpy_r_r63);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 116, CPyStatic_astdiff___globals);
        goto CPyL34;
    }
    cpy_r_r65 = (PyObject *)&_Py_EllipsisObject;
    cpy_r_r66.f0 = cpy_r_r64;
    cpy_r_r66.f1 = cpy_r_r65;
    CPy_INCREF(cpy_r_r66.f0);
    CPy_INCREF(cpy_r_r66.f1);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r67 = PyTuple_New(2);
    if (unlikely(cpy_r_r67 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6452 = cpy_r_r66.f0;
    PyTuple_SET_ITEM(cpy_r_r67, 0, __tmp6452);
    PyObject *__tmp6453 = cpy_r_r66.f1;
    PyTuple_SET_ITEM(cpy_r_r67, 1, __tmp6453);
    cpy_r_r68 = PyObject_GetItem(cpy_r_r54, cpy_r_r67);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 116, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    cpy_r_r69 = CPyStatic_astdiff___globals;
    cpy_r_r70 = CPyStatics[5298]; /* 'SnapshotItem' */
    cpy_r_r71 = CPyDict_SetItem(cpy_r_r69, cpy_r_r70, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 116, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    cpy_r_r73 = CPyStatic_astdiff___globals;
    cpy_r_r74 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r75 = CPyDict_GetItem(cpy_r_r73, cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 119, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    cpy_r_r76 = CPyModule_builtins;
    cpy_r_r77 = CPyStatics[2314]; /* 'object' */
    cpy_r_r78 = CPyObject_GetAttr(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 119, CPyStatic_astdiff___globals);
        goto CPyL36;
    }
    cpy_r_r79 = (PyObject *)&_Py_EllipsisObject;
    cpy_r_r80.f0 = cpy_r_r78;
    cpy_r_r80.f1 = cpy_r_r79;
    CPy_INCREF(cpy_r_r80.f0);
    CPy_INCREF(cpy_r_r80.f1);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r81 = PyTuple_New(2);
    if (unlikely(cpy_r_r81 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6454 = cpy_r_r80.f0;
    PyTuple_SET_ITEM(cpy_r_r81, 0, __tmp6454);
    PyObject *__tmp6455 = cpy_r_r80.f1;
    PyTuple_SET_ITEM(cpy_r_r81, 1, __tmp6455);
    cpy_r_r82 = PyObject_GetItem(cpy_r_r75, cpy_r_r81);
    CPy_DECREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 119, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    cpy_r_r83 = CPyStatic_astdiff___globals;
    cpy_r_r84 = CPyStatics[5299]; /* 'SymbolSnapshot' */
    cpy_r_r85 = CPyDict_SetItem(cpy_r_r83, cpy_r_r84, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 119, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    cpy_r_r87 = (PyObject *)CPyType_type_visitor___TypeVisitor;
    cpy_r_r88 = CPyStatic_astdiff___globals;
    cpy_r_r89 = CPyStatics[5298]; /* 'SnapshotItem' */
    cpy_r_r90 = CPyDict_GetItem(cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 340, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    cpy_r_r91 = PyObject_GetItem(cpy_r_r87, cpy_r_r90);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 340, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    cpy_r_r92 = PyTuple_Pack(1, cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 340, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    cpy_r_r93 = CPyStatics[5300]; /* 'mypy.server.astdiff' */
    cpy_r_r94 = (PyObject *)CPyType_astdiff___SnapshotTypeVisitor_template;
    cpy_r_r95 = CPyType_FromTemplate(cpy_r_r94, cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 340, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    cpy_r_r96 = CPyDef_astdiff___SnapshotTypeVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r96 == 2)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", -1, CPyStatic_astdiff___globals);
        goto CPyL37;
    }
    cpy_r_r97 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r98 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r99 = PyTuple_Pack(1, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 340, CPyStatic_astdiff___globals);
        goto CPyL37;
    }
    cpy_r_r100 = PyObject_SetAttr(cpy_r_r95, cpy_r_r97, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 340, CPyStatic_astdiff___globals);
        goto CPyL37;
    }
    CPyType_astdiff___SnapshotTypeVisitor = (PyTypeObject *)cpy_r_r95;
    CPy_INCREF(CPyType_astdiff___SnapshotTypeVisitor);
    cpy_r_r102 = CPyStatic_astdiff___globals;
    cpy_r_r103 = CPyStatics[5301]; /* 'SnapshotTypeVisitor' */
    cpy_r_r104 = CPyDict_SetItem(cpy_r_r102, cpy_r_r103, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypy/server/astdiff.py", "<module>", 340, CPyStatic_astdiff___globals);
        goto CPyL33;
    }
    return 1;
CPyL33: ;
    cpy_r_r106 = 2;
    return cpy_r_r106;
CPyL34: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL33;
CPyL35: ;
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r57);
    goto CPyL33;
CPyL36: ;
    CPy_DecRef(cpy_r_r75);
    goto CPyL33;
CPyL37: ;
    CPy_DecRef(cpy_r_r95);
    goto CPyL33;
}
