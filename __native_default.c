#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *default___DefaultPlugin_setup(PyTypeObject *type);
PyObject *CPyDef_default___DefaultPlugin(PyObject *cpy_r_options);

static PyObject *
default___DefaultPlugin_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_default___DefaultPlugin) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = default___DefaultPlugin_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_plugin___Plugin_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
default___DefaultPlugin_traverse(mypy___plugins___default___DefaultPluginObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_options);
    if (CPyTagged_CheckLong(self->_python_version.f0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_python_version.f0));
    }
    if (CPyTagged_CheckLong(self->_python_version.f1)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_python_version.f1));
    }
    Py_VISIT(self->__modules);
    return 0;
}

static int
default___DefaultPlugin_clear(mypy___plugins___default___DefaultPluginObject *self)
{
    Py_CLEAR(self->_options);
    if (CPyTagged_CheckLong(self->_python_version.f0)) {
        CPyTagged __tmp = self->_python_version.f0;
        self->_python_version.f0 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_python_version.f1)) {
        CPyTagged __tmp = self->_python_version.f1;
        self->_python_version.f1 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->__modules);
    return 0;
}

static void
default___DefaultPlugin_dealloc(mypy___plugins___default___DefaultPluginObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, default___DefaultPlugin_dealloc)
    default___DefaultPlugin_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem default___DefaultPlugin_vtable[26];
static bool
CPyDef_default___DefaultPlugin_trait_vtable_setup(void)
{
    CPyVTableItem default___DefaultPlugin_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin___Plugin___lookup_fully_qualified,
        (CPyVTableItem)CPyDef_plugin___Plugin_____init__,
        (CPyVTableItem)CPyDef_plugin___Plugin___set_modules,
        (CPyVTableItem)CPyDef_plugin___Plugin___lookup_fully_qualified,
        (CPyVTableItem)CPyDef_plugin___Plugin___report_config_data,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_additional_deps,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_type_analyze_hook,
        (CPyVTableItem)CPyDef_default___DefaultPlugin___get_function_signature_hook,
        (CPyVTableItem)CPyDef_default___DefaultPlugin___get_function_hook,
        (CPyVTableItem)CPyDef_default___DefaultPlugin___get_method_signature_hook,
        (CPyVTableItem)CPyDef_default___DefaultPlugin___get_method_hook,
        (CPyVTableItem)CPyDef_default___DefaultPlugin___get_attribute_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_class_attribute_hook,
        (CPyVTableItem)CPyDef_default___DefaultPlugin___get_class_decorator_hook,
        (CPyVTableItem)CPyDef_default___DefaultPlugin___get_class_decorator_hook_2,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_metaclass_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_base_class_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_customize_class_mro_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_dynamic_class_hook,
        (CPyVTableItem)CPyDef_default___DefaultPlugin___get_function_hook,
        (CPyVTableItem)CPyDef_default___DefaultPlugin___get_function_signature_hook,
        (CPyVTableItem)CPyDef_default___DefaultPlugin___get_method_signature_hook,
        (CPyVTableItem)CPyDef_default___DefaultPlugin___get_method_hook,
        (CPyVTableItem)CPyDef_default___DefaultPlugin___get_attribute_hook,
        (CPyVTableItem)CPyDef_default___DefaultPlugin___get_class_decorator_hook,
        (CPyVTableItem)CPyDef_default___DefaultPlugin___get_class_decorator_hook_2,
    };
    memcpy(default___DefaultPlugin_vtable, default___DefaultPlugin_vtable_scratch, sizeof(default___DefaultPlugin_vtable));
    return 1;
}


static PyGetSetDef default___DefaultPlugin_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef default___DefaultPlugin_methods[] = {
    {"get_function_hook",
     (PyCFunction)CPyPy_default___DefaultPlugin___get_function_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_function_signature_hook",
     (PyCFunction)CPyPy_default___DefaultPlugin___get_function_signature_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_method_signature_hook",
     (PyCFunction)CPyPy_default___DefaultPlugin___get_method_signature_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_method_hook",
     (PyCFunction)CPyPy_default___DefaultPlugin___get_method_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_attribute_hook",
     (PyCFunction)CPyPy_default___DefaultPlugin___get_attribute_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_class_decorator_hook",
     (PyCFunction)CPyPy_default___DefaultPlugin___get_class_decorator_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_class_decorator_hook_2",
     (PyCFunction)CPyPy_default___DefaultPlugin___get_class_decorator_hook_2,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_default___DefaultPlugin_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "DefaultPlugin",
    .tp_new = default___DefaultPlugin_new,
    .tp_dealloc = (destructor)default___DefaultPlugin_dealloc,
    .tp_traverse = (traverseproc)default___DefaultPlugin_traverse,
    .tp_clear = (inquiry)default___DefaultPlugin_clear,
    .tp_getset = default___DefaultPlugin_getseters,
    .tp_methods = default___DefaultPlugin_methods,
    .tp_basicsize = sizeof(mypy___plugins___default___DefaultPluginObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_default___DefaultPlugin_template = &CPyType_default___DefaultPlugin_template_;

static PyObject *
default___DefaultPlugin_setup(PyTypeObject *type)
{
    mypy___plugins___default___DefaultPluginObject *self;
    self = (mypy___plugins___default___DefaultPluginObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = default___DefaultPlugin_vtable;
    self->_python_version = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    return (PyObject *)self;
}

PyObject *CPyDef_default___DefaultPlugin(PyObject *cpy_r_options)
{
    PyObject *self = default___DefaultPlugin_setup(CPyType_default___DefaultPlugin);
    if (self == NULL)
        return NULL;
    char res = CPyDef_plugin___Plugin_____init__(self, cpy_r_options);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyMethodDef defaultmodule_methods[] = {
    {"typed_dict_get_signature_callback", (PyCFunction)CPyPy_default___typed_dict_get_signature_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"typed_dict_get_callback", (PyCFunction)CPyPy_default___typed_dict_get_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"typed_dict_pop_signature_callback", (PyCFunction)CPyPy_default___typed_dict_pop_signature_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"typed_dict_pop_callback", (PyCFunction)CPyPy_default___typed_dict_pop_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"typed_dict_setdefault_signature_callback", (PyCFunction)CPyPy_default___typed_dict_setdefault_signature_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"typed_dict_setdefault_callback", (PyCFunction)CPyPy_default___typed_dict_setdefault_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"typed_dict_delitem_callback", (PyCFunction)CPyPy_default___typed_dict_delitem_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"typed_dict_update_signature_callback", (PyCFunction)CPyPy_default___typed_dict_update_signature_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"int_pow_callback", (PyCFunction)CPyPy_default___int_pow_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"int_neg_callback", (PyCFunction)CPyPy_default___int_neg_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"tuple_mul_callback", (PyCFunction)CPyPy_default___tuple_mul_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef defaultmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.plugins.default",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    defaultmodule_methods
};

PyObject *CPyInit_mypy___plugins___default(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___plugins___default_internal) {
        Py_INCREF(CPyModule_mypy___plugins___default_internal);
        return CPyModule_mypy___plugins___default_internal;
    }
    CPyModule_mypy___plugins___default_internal = PyModule_Create(&defaultmodule);
    if (unlikely(CPyModule_mypy___plugins___default_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___plugins___default_internal, "__name__");
    CPyStatic_default___globals = PyModule_GetDict(CPyModule_mypy___plugins___default_internal);
    if (unlikely(CPyStatic_default___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_default_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___plugins___default_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___plugins___default_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_default___DefaultPlugin);
    return NULL;
}

PyObject *CPyDef_default___DefaultPlugin___get_function_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
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
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    cpy_r_r0 = CPyStatics[9612]; /* ('ctypes', 'singledispatch') */
    cpy_r_r1 = CPyStatics[1008]; /* 'mypy.plugins' */
    cpy_r_r2 = CPyStatic_default___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_hook", 44, CPyStatic_default___globals);
        goto CPyL16;
    }
    CPyModule_mypy___plugins = cpy_r_r3;
    CPy_INCREF(CPyModule_mypy___plugins);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[4483]; /* '_ctypes.Array' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL4;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL4;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_hook", 46, CPyStatic_default___globals);
        goto CPyL16;
    }
CPyL4: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r11 = PyImport_GetModuleDict();
    cpy_r_r12 = CPyStatics[4548]; /* 'mypy.plugins.ctypes' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_hook", 47, CPyStatic_default___globals);
        goto CPyL16;
    }
    cpy_r_r14 = CPyStatics[4549]; /* 'array_constructor_callback' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_hook", 47, CPyStatic_default___globals);
        goto CPyL16;
    }
    return cpy_r_r15;
CPyL8: ;
    cpy_r_r16 = CPyStatics[4550]; /* 'functools.singledispatch' */
    cpy_r_r17 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 == -1;
    if (!cpy_r_r18) goto CPyL11;
    cpy_r_r19 = PyErr_Occurred();
    cpy_r_r20 = cpy_r_r19 != NULL;
    if (!cpy_r_r20) goto CPyL11;
    cpy_r_r21 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_hook", 48, CPyStatic_default___globals);
        goto CPyL16;
    }
CPyL11: ;
    cpy_r_r22 = cpy_r_r17 == 0;
    if (!cpy_r_r22) goto CPyL15;
    cpy_r_r23 = PyImport_GetModuleDict();
    cpy_r_r24 = CPyStatics[4551]; /* 'mypy.plugins.singledispatch' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_hook", 49, CPyStatic_default___globals);
        goto CPyL16;
    }
    cpy_r_r26 = CPyStatics[4552]; /* 'create_singledispatch_function_callback' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_hook", 49, CPyStatic_default___globals);
        goto CPyL16;
    }
    return cpy_r_r27;
CPyL15: ;
    cpy_r_r28 = Py_None;
    CPy_INCREF(cpy_r_r28);
    return cpy_r_r28;
CPyL16: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
}

PyObject *CPyPy_default___DefaultPlugin___get_function_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_function_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_default___DefaultPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.default.DefaultPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_default___DefaultPlugin___get_function_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "get_function_hook", 43, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___DefaultPlugin___get_function_signature_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    cpy_r_r0 = CPyStatics[9613]; /* ('attrs', 'dataclasses') */
    cpy_r_r1 = CPyStatics[1008]; /* 'mypy.plugins' */
    cpy_r_r2 = CPyStatic_default___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_signature_hook", 56, CPyStatic_default___globals);
        goto CPyL34;
    }
    CPyModule_mypy___plugins = cpy_r_r3;
    CPy_INCREF(CPyModule_mypy___plugins);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[4553]; /* 'attr.evolve' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL4;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL4;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_signature_hook", -1, CPyStatic_default___globals);
        goto CPyL34;
    }
CPyL4: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (!cpy_r_r10) goto CPyL6;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL10;
CPyL6: ;
    cpy_r_r12 = CPyStatics[4554]; /* 'attrs.evolve' */
    cpy_r_r13 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 == -1;
    if (!cpy_r_r14) goto CPyL9;
    cpy_r_r15 = PyErr_Occurred();
    cpy_r_r16 = cpy_r_r15 != NULL;
    if (!cpy_r_r16) goto CPyL9;
    cpy_r_r17 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_signature_hook", -1, CPyStatic_default___globals);
        goto CPyL34;
    }
CPyL9: ;
    cpy_r_r18 = cpy_r_r13 == 0;
    cpy_r_r11 = cpy_r_r18;
CPyL10: ;
    if (!cpy_r_r11) goto CPyL12;
    cpy_r_r19 = cpy_r_r11;
    goto CPyL16;
CPyL12: ;
    cpy_r_r20 = CPyStatics[4555]; /* 'attr.assoc' */
    cpy_r_r21 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 == -1;
    if (!cpy_r_r22) goto CPyL15;
    cpy_r_r23 = PyErr_Occurred();
    cpy_r_r24 = cpy_r_r23 != NULL;
    if (!cpy_r_r24) goto CPyL15;
    cpy_r_r25 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_signature_hook", -1, CPyStatic_default___globals);
        goto CPyL34;
    }
CPyL15: ;
    cpy_r_r26 = cpy_r_r21 == 0;
    cpy_r_r19 = cpy_r_r26;
CPyL16: ;
    if (!cpy_r_r19) goto CPyL18;
    cpy_r_r27 = cpy_r_r19;
    goto CPyL22;
CPyL18: ;
    cpy_r_r28 = CPyStatics[4556]; /* 'attrs.assoc' */
    cpy_r_r29 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 == -1;
    if (!cpy_r_r30) goto CPyL21;
    cpy_r_r31 = PyErr_Occurred();
    cpy_r_r32 = cpy_r_r31 != NULL;
    if (!cpy_r_r32) goto CPyL21;
    cpy_r_r33 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_signature_hook", -1, CPyStatic_default___globals);
        goto CPyL34;
    }
CPyL21: ;
    cpy_r_r34 = cpy_r_r29 == 0;
    cpy_r_r27 = cpy_r_r34;
CPyL22: ;
    if (!cpy_r_r27) goto CPyL26;
    cpy_r_r35 = PyImport_GetModuleDict();
    cpy_r_r36 = CPyStatics[4471]; /* 'mypy.plugins.attrs' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_signature_hook", 59, CPyStatic_default___globals);
        goto CPyL34;
    }
    cpy_r_r38 = CPyStatics[4557]; /* 'evolve_function_sig_callback' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_signature_hook", 59, CPyStatic_default___globals);
        goto CPyL34;
    }
    return cpy_r_r39;
CPyL26: ;
    cpy_r_r40 = CPyStatics[4558]; /* 'dataclasses.replace' */
    cpy_r_r41 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 == -1;
    if (!cpy_r_r42) goto CPyL29;
    cpy_r_r43 = PyErr_Occurred();
    cpy_r_r44 = cpy_r_r43 != NULL;
    if (!cpy_r_r44) goto CPyL29;
    cpy_r_r45 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_signature_hook", 60, CPyStatic_default___globals);
        goto CPyL34;
    }
CPyL29: ;
    cpy_r_r46 = cpy_r_r41 == 0;
    if (!cpy_r_r46) goto CPyL33;
    cpy_r_r47 = PyImport_GetModuleDict();
    cpy_r_r48 = CPyStatics[4540]; /* 'mypy.plugins.dataclasses' */
    cpy_r_r49 = CPyDict_GetItem(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_signature_hook", 61, CPyStatic_default___globals);
        goto CPyL34;
    }
    cpy_r_r50 = CPyStatics[4559]; /* 'replace_function_sig_callback' */
    cpy_r_r51 = CPyObject_GetAttr(cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_function_signature_hook", 61, CPyStatic_default___globals);
        goto CPyL34;
    }
    return cpy_r_r51;
CPyL33: ;
    cpy_r_r52 = Py_None;
    CPy_INCREF(cpy_r_r52);
    return cpy_r_r52;
CPyL34: ;
    cpy_r_r53 = NULL;
    return cpy_r_r53;
}

PyObject *CPyPy_default___DefaultPlugin___get_function_signature_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_function_signature_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_default___DefaultPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.default.DefaultPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_default___DefaultPlugin___get_function_signature_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "get_function_signature_hook", 53, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___DefaultPlugin___get_method_signature_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T3OOO cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_n;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    tuple_T3OOO cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_n_2;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    tuple_T3OOO cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_n_3;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    cpy_r_r0 = CPyStatics[9612]; /* ('ctypes', 'singledispatch') */
    cpy_r_r1 = CPyStatics[1008]; /* 'mypy.plugins' */
    cpy_r_r2 = CPyStatic_default___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 67, CPyStatic_default___globals);
        goto CPyL67;
    }
    CPyModule_mypy___plugins = cpy_r_r3;
    CPy_INCREF(CPyModule_mypy___plugins);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[4560]; /* 'typing.Mapping.get' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL4;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL4;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 69, CPyStatic_default___globals);
        goto CPyL67;
    }
CPyL4: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (!cpy_r_r10) goto CPyL7;
    cpy_r_r11 = CPyStatic_default___globals;
    cpy_r_r12 = CPyStatics[4561]; /* 'typed_dict_get_signature_callback' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 70, CPyStatic_default___globals);
        goto CPyL67;
    }
    return cpy_r_r13;
CPyL7: ;
    cpy_r_r14 = PySet_New(NULL);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 71, CPyStatic_default___globals);
        goto CPyL67;
    }
    cpy_r_r15 = CPyStatic_types___TPDICT_FB_NAMES;
    if (unlikely(cpy_r_r15.f0 == NULL)) {
        goto CPyL68;
    } else
        goto CPyL11;
CPyL9: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TPDICT_FB_NAMES\" was not set");
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 71, CPyStatic_default___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL11: ;
    CPy_INCREF(cpy_r_r15.f0);
    CPy_INCREF(cpy_r_r15.f1);
    CPy_INCREF(cpy_r_r15.f2);
    cpy_r_r17 = PyTuple_New(3);
    if (unlikely(cpy_r_r17 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4887 = cpy_r_r15.f0;
    PyTuple_SET_ITEM(cpy_r_r17, 0, __tmp4887);
    PyObject *__tmp4888 = cpy_r_r15.f1;
    PyTuple_SET_ITEM(cpy_r_r17, 1, __tmp4888);
    PyObject *__tmp4889 = cpy_r_r15.f2;
    PyTuple_SET_ITEM(cpy_r_r17, 2, __tmp4889);
    cpy_r_r18 = PyObject_GetIter(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 71, CPyStatic_default___globals);
        goto CPyL69;
    }
CPyL12: ;
    cpy_r_r19 = PyIter_Next(cpy_r_r18);
    if (cpy_r_r19 == NULL) goto CPyL70;
    if (likely(PyUnicode_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "get_method_signature_hook", 71, CPyStatic_default___globals, "str", cpy_r_r19);
        goto CPyL71;
    }
    cpy_r_n = cpy_r_r20;
    cpy_r_r21 = CPyStatics[4562]; /* '.setdefault' */
    cpy_r_r22 = PyUnicode_Concat(cpy_r_n, cpy_r_r21);
    CPy_DECREF(cpy_r_n);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 71, CPyStatic_default___globals);
        goto CPyL71;
    }
    cpy_r_r23 = PySet_Add(cpy_r_r14, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 71, CPyStatic_default___globals);
        goto CPyL71;
    } else
        goto CPyL12;
CPyL16: ;
    cpy_r_r25 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 71, CPyStatic_default___globals);
        goto CPyL69;
    }
    cpy_r_r26 = PySet_Contains(cpy_r_r14, cpy_r_fullname);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 71, CPyStatic_default___globals);
        goto CPyL67;
    }
    cpy_r_r28 = cpy_r_r26;
    if (!cpy_r_r28) goto CPyL21;
    cpy_r_r29 = CPyStatic_default___globals;
    cpy_r_r30 = CPyStatics[4563]; /* 'typed_dict_setdefault_signature_callback' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 72, CPyStatic_default___globals);
        goto CPyL67;
    }
    return cpy_r_r31;
CPyL21: ;
    cpy_r_r32 = PySet_New(NULL);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 73, CPyStatic_default___globals);
        goto CPyL67;
    }
    cpy_r_r33 = CPyStatic_types___TPDICT_FB_NAMES;
    if (unlikely(cpy_r_r33.f0 == NULL)) {
        goto CPyL72;
    } else
        goto CPyL25;
CPyL23: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TPDICT_FB_NAMES\" was not set");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 73, CPyStatic_default___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL25: ;
    CPy_INCREF(cpy_r_r33.f0);
    CPy_INCREF(cpy_r_r33.f1);
    CPy_INCREF(cpy_r_r33.f2);
    cpy_r_r35 = PyTuple_New(3);
    if (unlikely(cpy_r_r35 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4890 = cpy_r_r33.f0;
    PyTuple_SET_ITEM(cpy_r_r35, 0, __tmp4890);
    PyObject *__tmp4891 = cpy_r_r33.f1;
    PyTuple_SET_ITEM(cpy_r_r35, 1, __tmp4891);
    PyObject *__tmp4892 = cpy_r_r33.f2;
    PyTuple_SET_ITEM(cpy_r_r35, 2, __tmp4892);
    cpy_r_r36 = PyObject_GetIter(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 73, CPyStatic_default___globals);
        goto CPyL73;
    }
CPyL26: ;
    cpy_r_r37 = PyIter_Next(cpy_r_r36);
    if (cpy_r_r37 == NULL) goto CPyL74;
    if (likely(PyUnicode_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "get_method_signature_hook", 73, CPyStatic_default___globals, "str", cpy_r_r37);
        goto CPyL75;
    }
    cpy_r_n_2 = cpy_r_r38;
    cpy_r_r39 = CPyStatics[4564]; /* '.pop' */
    cpy_r_r40 = PyUnicode_Concat(cpy_r_n_2, cpy_r_r39);
    CPy_DECREF(cpy_r_n_2);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 73, CPyStatic_default___globals);
        goto CPyL75;
    }
    cpy_r_r41 = PySet_Add(cpy_r_r32, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 73, CPyStatic_default___globals);
        goto CPyL75;
    } else
        goto CPyL26;
CPyL30: ;
    cpy_r_r43 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 73, CPyStatic_default___globals);
        goto CPyL73;
    }
    cpy_r_r44 = PySet_Contains(cpy_r_r32, cpy_r_fullname);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 73, CPyStatic_default___globals);
        goto CPyL67;
    }
    cpy_r_r46 = cpy_r_r44;
    if (!cpy_r_r46) goto CPyL35;
    cpy_r_r47 = CPyStatic_default___globals;
    cpy_r_r48 = CPyStatics[4565]; /* 'typed_dict_pop_signature_callback' */
    cpy_r_r49 = CPyDict_GetItem(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 74, CPyStatic_default___globals);
        goto CPyL67;
    }
    return cpy_r_r49;
CPyL35: ;
    cpy_r_r50 = PySet_New(NULL);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 75, CPyStatic_default___globals);
        goto CPyL67;
    }
    cpy_r_r51 = CPyStatic_types___TPDICT_FB_NAMES;
    if (unlikely(cpy_r_r51.f0 == NULL)) {
        goto CPyL76;
    } else
        goto CPyL39;
CPyL37: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TPDICT_FB_NAMES\" was not set");
    cpy_r_r52 = 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 75, CPyStatic_default___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL39: ;
    CPy_INCREF(cpy_r_r51.f0);
    CPy_INCREF(cpy_r_r51.f1);
    CPy_INCREF(cpy_r_r51.f2);
    cpy_r_r53 = PyTuple_New(3);
    if (unlikely(cpy_r_r53 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4893 = cpy_r_r51.f0;
    PyTuple_SET_ITEM(cpy_r_r53, 0, __tmp4893);
    PyObject *__tmp4894 = cpy_r_r51.f1;
    PyTuple_SET_ITEM(cpy_r_r53, 1, __tmp4894);
    PyObject *__tmp4895 = cpy_r_r51.f2;
    PyTuple_SET_ITEM(cpy_r_r53, 2, __tmp4895);
    cpy_r_r54 = PyObject_GetIter(cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 75, CPyStatic_default___globals);
        goto CPyL77;
    }
CPyL40: ;
    cpy_r_r55 = PyIter_Next(cpy_r_r54);
    if (cpy_r_r55 == NULL) goto CPyL78;
    if (likely(PyUnicode_Check(cpy_r_r55)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "get_method_signature_hook", 75, CPyStatic_default___globals, "str", cpy_r_r55);
        goto CPyL79;
    }
    cpy_r_n_3 = cpy_r_r56;
    cpy_r_r57 = CPyStatics[4566]; /* '.update' */
    cpy_r_r58 = PyUnicode_Concat(cpy_r_n_3, cpy_r_r57);
    CPy_DECREF(cpy_r_n_3);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 75, CPyStatic_default___globals);
        goto CPyL79;
    }
    cpy_r_r59 = PySet_Add(cpy_r_r50, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 75, CPyStatic_default___globals);
        goto CPyL79;
    } else
        goto CPyL40;
CPyL44: ;
    cpy_r_r61 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 75, CPyStatic_default___globals);
        goto CPyL77;
    }
    cpy_r_r62 = PySet_Contains(cpy_r_r50, cpy_r_fullname);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 75, CPyStatic_default___globals);
        goto CPyL67;
    }
    cpy_r_r64 = cpy_r_r62;
    if (!cpy_r_r64) goto CPyL49;
    cpy_r_r65 = CPyStatic_default___globals;
    cpy_r_r66 = CPyStatics[4567]; /* 'typed_dict_update_signature_callback' */
    cpy_r_r67 = CPyDict_GetItem(cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 76, CPyStatic_default___globals);
        goto CPyL67;
    }
    return cpy_r_r67;
CPyL49: ;
    cpy_r_r68 = CPyStatics[4568]; /* '_ctypes.Array.__setitem__' */
    cpy_r_r69 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 == -1;
    if (!cpy_r_r70) goto CPyL52;
    cpy_r_r71 = PyErr_Occurred();
    cpy_r_r72 = cpy_r_r71 != NULL;
    if (!cpy_r_r72) goto CPyL52;
    cpy_r_r73 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 77, CPyStatic_default___globals);
        goto CPyL67;
    }
CPyL52: ;
    cpy_r_r74 = cpy_r_r69 == 0;
    if (!cpy_r_r74) goto CPyL56;
    cpy_r_r75 = PyImport_GetModuleDict();
    cpy_r_r76 = CPyStatics[4548]; /* 'mypy.plugins.ctypes' */
    cpy_r_r77 = CPyDict_GetItem(cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 78, CPyStatic_default___globals);
        goto CPyL67;
    }
    cpy_r_r78 = CPyStatics[4569]; /* 'array_setitem_callback' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 78, CPyStatic_default___globals);
        goto CPyL67;
    }
    return cpy_r_r79;
CPyL56: ;
    cpy_r_r80 = CPyStatic_singledispatch___SINGLEDISPATCH_CALLABLE_CALL_METHOD;
    if (likely(cpy_r_r80 != NULL)) goto CPyL59;
    PyErr_SetString(PyExc_NameError, "value for final name \"SINGLEDISPATCH_CALLABLE_CALL_METHOD\" was not set");
    cpy_r_r81 = 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 79, CPyStatic_default___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL59: ;
    cpy_r_r82 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r80);
    cpy_r_r83 = cpy_r_r82 == -1;
    if (!cpy_r_r83) goto CPyL62;
    cpy_r_r84 = PyErr_Occurred();
    cpy_r_r85 = cpy_r_r84 != NULL;
    if (!cpy_r_r85) goto CPyL62;
    cpy_r_r86 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 79, CPyStatic_default___globals);
        goto CPyL67;
    }
CPyL62: ;
    cpy_r_r87 = cpy_r_r82 == 0;
    if (!cpy_r_r87) goto CPyL66;
    cpy_r_r88 = PyImport_GetModuleDict();
    cpy_r_r89 = CPyStatics[4551]; /* 'mypy.plugins.singledispatch' */
    cpy_r_r90 = CPyDict_GetItem(cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 80, CPyStatic_default___globals);
        goto CPyL67;
    }
    cpy_r_r91 = CPyStatics[4570]; /* 'call_singledispatch_function_callback' */
    cpy_r_r92 = CPyObject_GetAttr(cpy_r_r90, cpy_r_r91);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 80, CPyStatic_default___globals);
        goto CPyL67;
    }
    return cpy_r_r92;
CPyL66: ;
    cpy_r_r93 = Py_None;
    CPy_INCREF(cpy_r_r93);
    return cpy_r_r93;
CPyL67: ;
    cpy_r_r94 = NULL;
    return cpy_r_r94;
CPyL68: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL9;
CPyL69: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL67;
CPyL70: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL16;
CPyL71: ;
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r18);
    goto CPyL67;
CPyL72: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL23;
CPyL73: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL67;
CPyL74: ;
    CPy_DECREF(cpy_r_r36);
    goto CPyL30;
CPyL75: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r36);
    goto CPyL67;
CPyL76: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL37;
CPyL77: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL67;
CPyL78: ;
    CPy_DECREF(cpy_r_r54);
    goto CPyL44;
CPyL79: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r54);
    goto CPyL67;
}

PyObject *CPyPy_default___DefaultPlugin___get_method_signature_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_method_signature_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_default___DefaultPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.default.DefaultPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_default___DefaultPlugin___get_method_signature_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "get_method_signature_hook", 64, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___DefaultPlugin___get_method_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    tuple_T3OOO cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_n;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    tuple_T3OOO cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_n_2;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    tuple_T3OOO cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_n_3;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    int32_t cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    char cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    char cpy_r_r149;
    char cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    cpy_r_r0 = CPyStatics[9612]; /* ('ctypes', 'singledispatch') */
    cpy_r_r1 = CPyStatics[1008]; /* 'mypy.plugins' */
    cpy_r_r2 = CPyStatic_default___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 84, CPyStatic_default___globals);
        goto CPyL108;
    }
    CPyModule_mypy___plugins = cpy_r_r3;
    CPy_INCREF(CPyModule_mypy___plugins);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[4560]; /* 'typing.Mapping.get' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL4;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL4;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 86, CPyStatic_default___globals);
        goto CPyL108;
    }
CPyL4: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (!cpy_r_r10) goto CPyL7;
    cpy_r_r11 = CPyStatic_default___globals;
    cpy_r_r12 = CPyStatics[4571]; /* 'typed_dict_get_callback' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 87, CPyStatic_default___globals);
        goto CPyL108;
    }
    return cpy_r_r13;
CPyL7: ;
    cpy_r_r14 = CPyStatics[4572]; /* 'builtins.int.__pow__' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL10;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL10;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 88, CPyStatic_default___globals);
        goto CPyL108;
    }
CPyL10: ;
    cpy_r_r20 = cpy_r_r15 == 0;
    if (!cpy_r_r20) goto CPyL13;
    cpy_r_r21 = CPyStatic_default___globals;
    cpy_r_r22 = CPyStatics[4573]; /* 'int_pow_callback' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 89, CPyStatic_default___globals);
        goto CPyL108;
    }
    return cpy_r_r23;
CPyL13: ;
    cpy_r_r24 = CPyStatics[4574]; /* 'builtins.int.__neg__' */
    cpy_r_r25 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 == -1;
    if (!cpy_r_r26) goto CPyL16;
    cpy_r_r27 = PyErr_Occurred();
    cpy_r_r28 = cpy_r_r27 != NULL;
    if (!cpy_r_r28) goto CPyL16;
    cpy_r_r29 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 90, CPyStatic_default___globals);
        goto CPyL108;
    }
CPyL16: ;
    cpy_r_r30 = cpy_r_r25 == 0;
    if (!cpy_r_r30) goto CPyL19;
    cpy_r_r31 = CPyStatic_default___globals;
    cpy_r_r32 = CPyStatics[4575]; /* 'int_neg_callback' */
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 91, CPyStatic_default___globals);
        goto CPyL108;
    }
    return cpy_r_r33;
CPyL19: ;
    cpy_r_r34 = CPyStatics[4576]; /* 'builtins.tuple.__mul__' */
    cpy_r_r35 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 == -1;
    if (!cpy_r_r36) goto CPyL22;
    cpy_r_r37 = PyErr_Occurred();
    cpy_r_r38 = cpy_r_r37 != NULL;
    if (!cpy_r_r38) goto CPyL22;
    cpy_r_r39 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", -1, CPyStatic_default___globals);
        goto CPyL108;
    }
CPyL22: ;
    cpy_r_r40 = cpy_r_r35 == 0;
    if (!cpy_r_r40) goto CPyL24;
    cpy_r_r41 = cpy_r_r40;
    goto CPyL28;
CPyL24: ;
    cpy_r_r42 = CPyStatics[4577]; /* 'builtins.tuple.__rmul__' */
    cpy_r_r43 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 == -1;
    if (!cpy_r_r44) goto CPyL27;
    cpy_r_r45 = PyErr_Occurred();
    cpy_r_r46 = cpy_r_r45 != NULL;
    if (!cpy_r_r46) goto CPyL27;
    cpy_r_r47 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", -1, CPyStatic_default___globals);
        goto CPyL108;
    }
CPyL27: ;
    cpy_r_r48 = cpy_r_r43 == 0;
    cpy_r_r41 = cpy_r_r48;
CPyL28: ;
    if (!cpy_r_r41) goto CPyL31;
    cpy_r_r49 = CPyStatic_default___globals;
    cpy_r_r50 = CPyStatics[4578]; /* 'tuple_mul_callback' */
    cpy_r_r51 = CPyDict_GetItem(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 93, CPyStatic_default___globals);
        goto CPyL108;
    }
    return cpy_r_r51;
CPyL31: ;
    cpy_r_r52 = PySet_New(NULL);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 94, CPyStatic_default___globals);
        goto CPyL108;
    }
    cpy_r_r53 = CPyStatic_types___TPDICT_FB_NAMES;
    if (unlikely(cpy_r_r53.f0 == NULL)) {
        goto CPyL109;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TPDICT_FB_NAMES\" was not set");
    cpy_r_r54 = 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 94, CPyStatic_default___globals);
        goto CPyL108;
    }
    CPy_Unreachable();
CPyL35: ;
    CPy_INCREF(cpy_r_r53.f0);
    CPy_INCREF(cpy_r_r53.f1);
    CPy_INCREF(cpy_r_r53.f2);
    cpy_r_r55 = PyTuple_New(3);
    if (unlikely(cpy_r_r55 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4896 = cpy_r_r53.f0;
    PyTuple_SET_ITEM(cpy_r_r55, 0, __tmp4896);
    PyObject *__tmp4897 = cpy_r_r53.f1;
    PyTuple_SET_ITEM(cpy_r_r55, 1, __tmp4897);
    PyObject *__tmp4898 = cpy_r_r53.f2;
    PyTuple_SET_ITEM(cpy_r_r55, 2, __tmp4898);
    cpy_r_r56 = PyObject_GetIter(cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 94, CPyStatic_default___globals);
        goto CPyL110;
    }
CPyL36: ;
    cpy_r_r57 = PyIter_Next(cpy_r_r56);
    if (cpy_r_r57 == NULL) goto CPyL111;
    if (likely(PyUnicode_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "get_method_hook", 94, CPyStatic_default___globals, "str", cpy_r_r57);
        goto CPyL112;
    }
    cpy_r_n = cpy_r_r58;
    cpy_r_r59 = CPyStatics[4562]; /* '.setdefault' */
    cpy_r_r60 = PyUnicode_Concat(cpy_r_n, cpy_r_r59);
    CPy_DECREF(cpy_r_n);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 94, CPyStatic_default___globals);
        goto CPyL112;
    }
    cpy_r_r61 = PySet_Add(cpy_r_r52, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 94, CPyStatic_default___globals);
        goto CPyL112;
    } else
        goto CPyL36;
CPyL40: ;
    cpy_r_r63 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 94, CPyStatic_default___globals);
        goto CPyL110;
    }
    cpy_r_r64 = PySet_Contains(cpy_r_r52, cpy_r_fullname);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 94, CPyStatic_default___globals);
        goto CPyL108;
    }
    cpy_r_r66 = cpy_r_r64;
    if (!cpy_r_r66) goto CPyL45;
    cpy_r_r67 = CPyStatic_default___globals;
    cpy_r_r68 = CPyStatics[4579]; /* 'typed_dict_setdefault_callback' */
    cpy_r_r69 = CPyDict_GetItem(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 95, CPyStatic_default___globals);
        goto CPyL108;
    }
    return cpy_r_r69;
CPyL45: ;
    cpy_r_r70 = PySet_New(NULL);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 96, CPyStatic_default___globals);
        goto CPyL108;
    }
    cpy_r_r71 = CPyStatic_types___TPDICT_FB_NAMES;
    if (unlikely(cpy_r_r71.f0 == NULL)) {
        goto CPyL113;
    } else
        goto CPyL49;
CPyL47: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TPDICT_FB_NAMES\" was not set");
    cpy_r_r72 = 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 96, CPyStatic_default___globals);
        goto CPyL108;
    }
    CPy_Unreachable();
CPyL49: ;
    CPy_INCREF(cpy_r_r71.f0);
    CPy_INCREF(cpy_r_r71.f1);
    CPy_INCREF(cpy_r_r71.f2);
    cpy_r_r73 = PyTuple_New(3);
    if (unlikely(cpy_r_r73 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4899 = cpy_r_r71.f0;
    PyTuple_SET_ITEM(cpy_r_r73, 0, __tmp4899);
    PyObject *__tmp4900 = cpy_r_r71.f1;
    PyTuple_SET_ITEM(cpy_r_r73, 1, __tmp4900);
    PyObject *__tmp4901 = cpy_r_r71.f2;
    PyTuple_SET_ITEM(cpy_r_r73, 2, __tmp4901);
    cpy_r_r74 = PyObject_GetIter(cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 96, CPyStatic_default___globals);
        goto CPyL114;
    }
CPyL50: ;
    cpy_r_r75 = PyIter_Next(cpy_r_r74);
    if (cpy_r_r75 == NULL) goto CPyL115;
    if (likely(PyUnicode_Check(cpy_r_r75)))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "get_method_hook", 96, CPyStatic_default___globals, "str", cpy_r_r75);
        goto CPyL116;
    }
    cpy_r_n_2 = cpy_r_r76;
    cpy_r_r77 = CPyStatics[4564]; /* '.pop' */
    cpy_r_r78 = PyUnicode_Concat(cpy_r_n_2, cpy_r_r77);
    CPy_DECREF(cpy_r_n_2);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 96, CPyStatic_default___globals);
        goto CPyL116;
    }
    cpy_r_r79 = PySet_Add(cpy_r_r70, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r80 = cpy_r_r79 >= 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 96, CPyStatic_default___globals);
        goto CPyL116;
    } else
        goto CPyL50;
CPyL54: ;
    cpy_r_r81 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 96, CPyStatic_default___globals);
        goto CPyL114;
    }
    cpy_r_r82 = PySet_Contains(cpy_r_r70, cpy_r_fullname);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 96, CPyStatic_default___globals);
        goto CPyL108;
    }
    cpy_r_r84 = cpy_r_r82;
    if (!cpy_r_r84) goto CPyL59;
    cpy_r_r85 = CPyStatic_default___globals;
    cpy_r_r86 = CPyStatics[4580]; /* 'typed_dict_pop_callback' */
    cpy_r_r87 = CPyDict_GetItem(cpy_r_r85, cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 97, CPyStatic_default___globals);
        goto CPyL108;
    }
    return cpy_r_r87;
CPyL59: ;
    cpy_r_r88 = PySet_New(NULL);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 98, CPyStatic_default___globals);
        goto CPyL108;
    }
    cpy_r_r89 = CPyStatic_types___TPDICT_FB_NAMES;
    if (unlikely(cpy_r_r89.f0 == NULL)) {
        goto CPyL117;
    } else
        goto CPyL63;
CPyL61: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TPDICT_FB_NAMES\" was not set");
    cpy_r_r90 = 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 98, CPyStatic_default___globals);
        goto CPyL108;
    }
    CPy_Unreachable();
CPyL63: ;
    CPy_INCREF(cpy_r_r89.f0);
    CPy_INCREF(cpy_r_r89.f1);
    CPy_INCREF(cpy_r_r89.f2);
    cpy_r_r91 = PyTuple_New(3);
    if (unlikely(cpy_r_r91 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4902 = cpy_r_r89.f0;
    PyTuple_SET_ITEM(cpy_r_r91, 0, __tmp4902);
    PyObject *__tmp4903 = cpy_r_r89.f1;
    PyTuple_SET_ITEM(cpy_r_r91, 1, __tmp4903);
    PyObject *__tmp4904 = cpy_r_r89.f2;
    PyTuple_SET_ITEM(cpy_r_r91, 2, __tmp4904);
    cpy_r_r92 = PyObject_GetIter(cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 98, CPyStatic_default___globals);
        goto CPyL118;
    }
CPyL64: ;
    cpy_r_r93 = PyIter_Next(cpy_r_r92);
    if (cpy_r_r93 == NULL) goto CPyL119;
    if (likely(PyUnicode_Check(cpy_r_r93)))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "get_method_hook", 98, CPyStatic_default___globals, "str", cpy_r_r93);
        goto CPyL120;
    }
    cpy_r_n_3 = cpy_r_r94;
    cpy_r_r95 = CPyStatics[4581]; /* '.__delitem__' */
    cpy_r_r96 = PyUnicode_Concat(cpy_r_n_3, cpy_r_r95);
    CPy_DECREF(cpy_r_n_3);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 98, CPyStatic_default___globals);
        goto CPyL120;
    }
    cpy_r_r97 = PySet_Add(cpy_r_r88, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 98, CPyStatic_default___globals);
        goto CPyL120;
    } else
        goto CPyL64;
CPyL68: ;
    cpy_r_r99 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 98, CPyStatic_default___globals);
        goto CPyL118;
    }
    cpy_r_r100 = PySet_Contains(cpy_r_r88, cpy_r_fullname);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 98, CPyStatic_default___globals);
        goto CPyL108;
    }
    cpy_r_r102 = cpy_r_r100;
    if (!cpy_r_r102) goto CPyL73;
    cpy_r_r103 = CPyStatic_default___globals;
    cpy_r_r104 = CPyStatics[4582]; /* 'typed_dict_delitem_callback' */
    cpy_r_r105 = CPyDict_GetItem(cpy_r_r103, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 99, CPyStatic_default___globals);
        goto CPyL108;
    }
    return cpy_r_r105;
CPyL73: ;
    cpy_r_r106 = CPyStatics[4583]; /* '_ctypes.Array.__getitem__' */
    cpy_r_r107 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r106);
    cpy_r_r108 = cpy_r_r107 == -1;
    if (!cpy_r_r108) goto CPyL76;
    cpy_r_r109 = PyErr_Occurred();
    cpy_r_r110 = cpy_r_r109 != NULL;
    if (!cpy_r_r110) goto CPyL76;
    cpy_r_r111 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 100, CPyStatic_default___globals);
        goto CPyL108;
    }
CPyL76: ;
    cpy_r_r112 = cpy_r_r107 == 0;
    if (!cpy_r_r112) goto CPyL80;
    cpy_r_r113 = PyImport_GetModuleDict();
    cpy_r_r114 = CPyStatics[4548]; /* 'mypy.plugins.ctypes' */
    cpy_r_r115 = CPyDict_GetItem(cpy_r_r113, cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 101, CPyStatic_default___globals);
        goto CPyL108;
    }
    cpy_r_r116 = CPyStatics[4584]; /* 'array_getitem_callback' */
    cpy_r_r117 = CPyObject_GetAttr(cpy_r_r115, cpy_r_r116);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 101, CPyStatic_default___globals);
        goto CPyL108;
    }
    return cpy_r_r117;
CPyL80: ;
    cpy_r_r118 = CPyStatics[4585]; /* '_ctypes.Array.__iter__' */
    cpy_r_r119 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r118);
    cpy_r_r120 = cpy_r_r119 == -1;
    if (!cpy_r_r120) goto CPyL83;
    cpy_r_r121 = PyErr_Occurred();
    cpy_r_r122 = cpy_r_r121 != NULL;
    if (!cpy_r_r122) goto CPyL83;
    cpy_r_r123 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 102, CPyStatic_default___globals);
        goto CPyL108;
    }
CPyL83: ;
    cpy_r_r124 = cpy_r_r119 == 0;
    if (!cpy_r_r124) goto CPyL87;
    cpy_r_r125 = PyImport_GetModuleDict();
    cpy_r_r126 = CPyStatics[4548]; /* 'mypy.plugins.ctypes' */
    cpy_r_r127 = CPyDict_GetItem(cpy_r_r125, cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 103, CPyStatic_default___globals);
        goto CPyL108;
    }
    cpy_r_r128 = CPyStatics[4586]; /* 'array_iter_callback' */
    cpy_r_r129 = CPyObject_GetAttr(cpy_r_r127, cpy_r_r128);
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 103, CPyStatic_default___globals);
        goto CPyL108;
    }
    return cpy_r_r129;
CPyL87: ;
    cpy_r_r130 = CPyStatic_singledispatch___SINGLEDISPATCH_REGISTER_METHOD;
    if (likely(cpy_r_r130 != NULL)) goto CPyL90;
    PyErr_SetString(PyExc_NameError, "value for final name \"SINGLEDISPATCH_REGISTER_METHOD\" was not set");
    cpy_r_r131 = 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 104, CPyStatic_default___globals);
        goto CPyL108;
    }
    CPy_Unreachable();
CPyL90: ;
    cpy_r_r132 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r130);
    cpy_r_r133 = cpy_r_r132 == -1;
    if (!cpy_r_r133) goto CPyL93;
    cpy_r_r134 = PyErr_Occurred();
    cpy_r_r135 = cpy_r_r134 != NULL;
    if (!cpy_r_r135) goto CPyL93;
    cpy_r_r136 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 104, CPyStatic_default___globals);
        goto CPyL108;
    }
CPyL93: ;
    cpy_r_r137 = cpy_r_r132 == 0;
    if (!cpy_r_r137) goto CPyL97;
    cpy_r_r138 = PyImport_GetModuleDict();
    cpy_r_r139 = CPyStatics[4551]; /* 'mypy.plugins.singledispatch' */
    cpy_r_r140 = CPyDict_GetItem(cpy_r_r138, cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 105, CPyStatic_default___globals);
        goto CPyL108;
    }
    cpy_r_r141 = CPyStatics[4587]; /* 'singledispatch_register_callback' */
    cpy_r_r142 = CPyObject_GetAttr(cpy_r_r140, cpy_r_r141);
    CPy_DECREF(cpy_r_r140);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 105, CPyStatic_default___globals);
        goto CPyL108;
    }
    return cpy_r_r142;
CPyL97: ;
    cpy_r_r143 = CPyStatic_singledispatch___REGISTER_CALLABLE_CALL_METHOD;
    if (likely(cpy_r_r143 != NULL)) goto CPyL100;
    PyErr_SetString(PyExc_NameError, "value for final name \"REGISTER_CALLABLE_CALL_METHOD\" was not set");
    cpy_r_r144 = 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 106, CPyStatic_default___globals);
        goto CPyL108;
    }
    CPy_Unreachable();
CPyL100: ;
    cpy_r_r145 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r143);
    cpy_r_r146 = cpy_r_r145 == -1;
    if (!cpy_r_r146) goto CPyL103;
    cpy_r_r147 = PyErr_Occurred();
    cpy_r_r148 = cpy_r_r147 != NULL;
    if (!cpy_r_r148) goto CPyL103;
    cpy_r_r149 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 106, CPyStatic_default___globals);
        goto CPyL108;
    }
CPyL103: ;
    cpy_r_r150 = cpy_r_r145 == 0;
    if (!cpy_r_r150) goto CPyL107;
    cpy_r_r151 = PyImport_GetModuleDict();
    cpy_r_r152 = CPyStatics[4551]; /* 'mypy.plugins.singledispatch' */
    cpy_r_r153 = CPyDict_GetItem(cpy_r_r151, cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 107, CPyStatic_default___globals);
        goto CPyL108;
    }
    cpy_r_r154 = CPyStatics[4588]; /* 'call_singledispatch_function_after_register_argument' */
    cpy_r_r155 = CPyObject_GetAttr(cpy_r_r153, cpy_r_r154);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 107, CPyStatic_default___globals);
        goto CPyL108;
    }
    return cpy_r_r155;
CPyL107: ;
    cpy_r_r156 = Py_None;
    CPy_INCREF(cpy_r_r156);
    return cpy_r_r156;
CPyL108: ;
    cpy_r_r157 = NULL;
    return cpy_r_r157;
CPyL109: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL33;
CPyL110: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL108;
CPyL111: ;
    CPy_DECREF(cpy_r_r56);
    goto CPyL40;
CPyL112: ;
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r56);
    goto CPyL108;
CPyL113: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL47;
CPyL114: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL108;
CPyL115: ;
    CPy_DECREF(cpy_r_r74);
    goto CPyL54;
CPyL116: ;
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r74);
    goto CPyL108;
CPyL117: ;
    CPy_DecRef(cpy_r_r88);
    goto CPyL61;
CPyL118: ;
    CPy_DecRef(cpy_r_r88);
    goto CPyL108;
CPyL119: ;
    CPy_DECREF(cpy_r_r92);
    goto CPyL68;
CPyL120: ;
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r92);
    goto CPyL108;
}

PyObject *CPyPy_default___DefaultPlugin___get_method_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_method_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_default___DefaultPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.default.DefaultPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_default___DefaultPlugin___get_method_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "get_method_hook", 83, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___DefaultPlugin___get_attribute_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
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
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    cpy_r_r0 = CPyStatics[9614]; /* ('ctypes', 'enums') */
    cpy_r_r1 = CPyStatics[1008]; /* 'mypy.plugins' */
    cpy_r_r2 = CPyStatic_default___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_attribute_hook", 111, CPyStatic_default___globals);
        goto CPyL32;
    }
    CPyModule_mypy___plugins = cpy_r_r3;
    CPy_INCREF(CPyModule_mypy___plugins);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[4590]; /* '_ctypes.Array.value' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL4;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL4;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_attribute_hook", 113, CPyStatic_default___globals);
        goto CPyL32;
    }
CPyL4: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r11 = PyImport_GetModuleDict();
    cpy_r_r12 = CPyStatics[4548]; /* 'mypy.plugins.ctypes' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_attribute_hook", 114, CPyStatic_default___globals);
        goto CPyL32;
    }
    cpy_r_r14 = CPyStatics[4591]; /* 'array_value_callback' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_attribute_hook", 114, CPyStatic_default___globals);
        goto CPyL32;
    }
    return cpy_r_r15;
CPyL8: ;
    cpy_r_r16 = CPyStatics[4592]; /* '_ctypes.Array.raw' */
    cpy_r_r17 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 == -1;
    if (!cpy_r_r18) goto CPyL11;
    cpy_r_r19 = PyErr_Occurred();
    cpy_r_r20 = cpy_r_r19 != NULL;
    if (!cpy_r_r20) goto CPyL11;
    cpy_r_r21 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_attribute_hook", 115, CPyStatic_default___globals);
        goto CPyL32;
    }
CPyL11: ;
    cpy_r_r22 = cpy_r_r17 == 0;
    if (!cpy_r_r22) goto CPyL15;
    cpy_r_r23 = PyImport_GetModuleDict();
    cpy_r_r24 = CPyStatics[4548]; /* 'mypy.plugins.ctypes' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_attribute_hook", 116, CPyStatic_default___globals);
        goto CPyL32;
    }
    cpy_r_r26 = CPyStatics[4593]; /* 'array_raw_callback' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_attribute_hook", 116, CPyStatic_default___globals);
        goto CPyL32;
    }
    return cpy_r_r27;
CPyL15: ;
    cpy_r_r28 = CPyStatic_enums___ENUM_NAME_ACCESS;
    if (likely(cpy_r_r28 != NULL)) goto CPyL18;
    PyErr_SetString(PyExc_NameError, "value for final name \"ENUM_NAME_ACCESS\" was not set");
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_attribute_hook", 117, CPyStatic_default___globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r30 = PySet_Contains(cpy_r_r28, cpy_r_fullname);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_attribute_hook", 117, CPyStatic_default___globals);
        goto CPyL32;
    }
    cpy_r_r32 = cpy_r_r30;
    if (!cpy_r_r32) goto CPyL23;
    cpy_r_r33 = PyImport_GetModuleDict();
    cpy_r_r34 = CPyStatics[4594]; /* 'mypy.plugins.enums' */
    cpy_r_r35 = CPyDict_GetItem(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_attribute_hook", 118, CPyStatic_default___globals);
        goto CPyL32;
    }
    cpy_r_r36 = CPyStatics[4595]; /* 'enum_name_callback' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_attribute_hook", 118, CPyStatic_default___globals);
        goto CPyL32;
    }
    return cpy_r_r37;
CPyL23: ;
    cpy_r_r38 = CPyStatic_enums___ENUM_VALUE_ACCESS;
    if (likely(cpy_r_r38 != NULL)) goto CPyL26;
    PyErr_SetString(PyExc_NameError, "value for final name \"ENUM_VALUE_ACCESS\" was not set");
    cpy_r_r39 = 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_attribute_hook", 119, CPyStatic_default___globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r40 = PySet_Contains(cpy_r_r38, cpy_r_fullname);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_attribute_hook", 119, CPyStatic_default___globals);
        goto CPyL32;
    }
    cpy_r_r42 = cpy_r_r40;
    if (!cpy_r_r42) goto CPyL31;
    cpy_r_r43 = PyImport_GetModuleDict();
    cpy_r_r44 = CPyStatics[4594]; /* 'mypy.plugins.enums' */
    cpy_r_r45 = CPyDict_GetItem(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_attribute_hook", 120, CPyStatic_default___globals);
        goto CPyL32;
    }
    cpy_r_r46 = CPyStatics[4596]; /* 'enum_value_callback' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_attribute_hook", 120, CPyStatic_default___globals);
        goto CPyL32;
    }
    return cpy_r_r47;
CPyL31: ;
    cpy_r_r48 = Py_None;
    CPy_INCREF(cpy_r_r48);
    return cpy_r_r48;
CPyL32: ;
    cpy_r_r49 = NULL;
    return cpy_r_r49;
}

PyObject *CPyPy_default___DefaultPlugin___get_attribute_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_attribute_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_default___DefaultPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.default.DefaultPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_default___DefaultPlugin___get_attribute_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "get_attribute_hook", 110, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___DefaultPlugin___get_class_decorator_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    cpy_r_r0 = CPyStatics[9613]; /* ('attrs', 'dataclasses') */
    cpy_r_r1 = CPyStatics[1008]; /* 'mypy.plugins' */
    cpy_r_r2 = CPyStatic_default___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook", 124, CPyStatic_default___globals);
        goto CPyL33;
    }
    CPyModule_mypy___plugins = cpy_r_r3;
    CPy_INCREF(CPyModule_mypy___plugins);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = CPyStatic_dataclasses___dataclass_makers;
    if (likely(cpy_r_r4 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"dataclass_makers\" was not set");
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook", 130, CPyStatic_default___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r6 = PySet_Contains(cpy_r_r4, cpy_r_fullname);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook", 130, CPyStatic_default___globals);
        goto CPyL33;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL9;
    cpy_r_r9 = PyImport_GetModuleDict();
    cpy_r_r10 = CPyStatics[4540]; /* 'mypy.plugins.dataclasses' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook", 131, CPyStatic_default___globals);
        goto CPyL33;
    }
    cpy_r_r12 = CPyStatics[4597]; /* 'dataclass_tag_callback' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook", 131, CPyStatic_default___globals);
        goto CPyL33;
    }
    return cpy_r_r13;
CPyL9: ;
    cpy_r_r14 = CPyStatic_attrs___attr_class_makers;
    if (likely(cpy_r_r14 != NULL)) goto CPyL12;
    PyErr_SetString(PyExc_NameError, "value for final name \"attr_class_makers\" was not set");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook", 133, CPyStatic_default___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r16 = PySet_Contains(cpy_r_r14, cpy_r_fullname);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook", 133, CPyStatic_default___globals);
        goto CPyL33;
    }
    cpy_r_r18 = cpy_r_r16;
    if (cpy_r_r18) goto CPyL29;
    cpy_r_r19 = CPyStatic_attrs___attr_dataclass_makers;
    if (likely(cpy_r_r19 != NULL)) goto CPyL17;
    PyErr_SetString(PyExc_NameError, "value for final name \"attr_dataclass_makers\" was not set");
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook", 134, CPyStatic_default___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r21 = PySet_Contains(cpy_r_r19, cpy_r_fullname);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook", 134, CPyStatic_default___globals);
        goto CPyL33;
    }
    cpy_r_r23 = cpy_r_r21;
    if (cpy_r_r23) goto CPyL29;
    cpy_r_r24 = CPyStatic_attrs___attr_frozen_makers;
    if (likely(cpy_r_r24 != NULL)) goto CPyL22;
    PyErr_SetString(PyExc_NameError, "value for final name \"attr_frozen_makers\" was not set");
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook", 135, CPyStatic_default___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r26 = PySet_Contains(cpy_r_r24, cpy_r_fullname);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook", 135, CPyStatic_default___globals);
        goto CPyL33;
    }
    cpy_r_r28 = cpy_r_r26;
    if (cpy_r_r28) goto CPyL29;
    cpy_r_r29 = CPyStatic_attrs___attr_define_makers;
    if (likely(cpy_r_r29 != NULL)) goto CPyL27;
    PyErr_SetString(PyExc_NameError, "value for final name \"attr_define_makers\" was not set");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook", 136, CPyStatic_default___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r31 = PySet_Contains(cpy_r_r29, cpy_r_fullname);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook", 136, CPyStatic_default___globals);
        goto CPyL33;
    }
    cpy_r_r33 = cpy_r_r31;
    if (!cpy_r_r33) goto CPyL32;
CPyL29: ;
    cpy_r_r34 = PyImport_GetModuleDict();
    cpy_r_r35 = CPyStatics[4471]; /* 'mypy.plugins.attrs' */
    cpy_r_r36 = CPyDict_GetItem(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook", 138, CPyStatic_default___globals);
        goto CPyL33;
    }
    cpy_r_r37 = CPyStatics[4598]; /* 'attr_tag_callback' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook", 138, CPyStatic_default___globals);
        goto CPyL33;
    }
    return cpy_r_r38;
CPyL32: ;
    cpy_r_r39 = Py_None;
    CPy_INCREF(cpy_r_r39);
    return cpy_r_r39;
CPyL33: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
}

PyObject *CPyPy_default___DefaultPlugin___get_class_decorator_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_class_decorator_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_default___DefaultPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.default.DefaultPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_default___DefaultPlugin___get_class_decorator_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook", 123, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___DefaultPlugin___get_class_decorator_hook_2(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject **cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject **cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    cpy_r_r0 = CPyStatics[9615]; /* ('attrs', 'dataclasses', 'functools') */
    cpy_r_r1 = CPyStatics[1008]; /* 'mypy.plugins' */
    cpy_r_r2 = CPyStatic_default___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 145, CPyStatic_default___globals);
        goto CPyL56;
    }
    CPyModule_mypy___plugins = cpy_r_r3;
    CPy_INCREF(CPyModule_mypy___plugins);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = CPyStatic_dataclasses___dataclass_makers;
    if (likely(cpy_r_r4 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"dataclass_makers\" was not set");
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 147, CPyStatic_default___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r6 = PySet_Contains(cpy_r_r4, cpy_r_fullname);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 147, CPyStatic_default___globals);
        goto CPyL56;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL9;
    cpy_r_r9 = PyImport_GetModuleDict();
    cpy_r_r10 = CPyStatics[4540]; /* 'mypy.plugins.dataclasses' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 148, CPyStatic_default___globals);
        goto CPyL56;
    }
    cpy_r_r12 = CPyStatics[4599]; /* 'dataclass_class_maker_callback' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 148, CPyStatic_default___globals);
        goto CPyL56;
    }
    return cpy_r_r13;
CPyL9: ;
    cpy_r_r14 = CPyStatic_functools___functools_total_ordering_makers;
    if (likely(cpy_r_r14 != NULL)) goto CPyL12;
    PyErr_SetString(PyExc_NameError, "value for final name \"functools_total_ordering_makers\" was not set");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 149, CPyStatic_default___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r16 = PySet_Contains(cpy_r_r14, cpy_r_fullname);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 149, CPyStatic_default___globals);
        goto CPyL56;
    }
    cpy_r_r18 = cpy_r_r16;
    if (!cpy_r_r18) goto CPyL17;
    cpy_r_r19 = PyImport_GetModuleDict();
    cpy_r_r20 = CPyStatics[4600]; /* 'mypy.plugins.functools' */
    cpy_r_r21 = CPyDict_GetItem(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 150, CPyStatic_default___globals);
        goto CPyL56;
    }
    cpy_r_r22 = CPyStatics[4601]; /* 'functools_total_ordering_maker_callback' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 150, CPyStatic_default___globals);
        goto CPyL56;
    }
    return cpy_r_r23;
CPyL17: ;
    cpy_r_r24 = CPyStatic_attrs___attr_class_makers;
    if (likely(cpy_r_r24 != NULL)) goto CPyL20;
    PyErr_SetString(PyExc_NameError, "value for final name \"attr_class_makers\" was not set");
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 151, CPyStatic_default___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r26 = PySet_Contains(cpy_r_r24, cpy_r_fullname);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 151, CPyStatic_default___globals);
        goto CPyL56;
    }
    cpy_r_r28 = cpy_r_r26;
    if (!cpy_r_r28) goto CPyL25;
    cpy_r_r29 = PyImport_GetModuleDict();
    cpy_r_r30 = CPyStatics[4471]; /* 'mypy.plugins.attrs' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 152, CPyStatic_default___globals);
        goto CPyL56;
    }
    cpy_r_r32 = CPyStatics[4602]; /* 'attr_class_maker_callback' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 152, CPyStatic_default___globals);
        goto CPyL56;
    }
    return cpy_r_r33;
CPyL25: ;
    cpy_r_r34 = CPyStatic_attrs___attr_dataclass_makers;
    if (likely(cpy_r_r34 != NULL)) goto CPyL28;
    PyErr_SetString(PyExc_NameError, "value for final name \"attr_dataclass_makers\" was not set");
    cpy_r_r35 = 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 153, CPyStatic_default___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r36 = PySet_Contains(cpy_r_r34, cpy_r_fullname);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 153, CPyStatic_default___globals);
        goto CPyL56;
    }
    cpy_r_r38 = cpy_r_r36;
    if (!cpy_r_r38) goto CPyL35;
    cpy_r_r39 = PyImport_GetModuleDict();
    cpy_r_r40 = CPyStatics[4471]; /* 'mypy.plugins.attrs' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 154, CPyStatic_default___globals);
        goto CPyL56;
    }
    cpy_r_r42 = CPyStatics[4602]; /* 'attr_class_maker_callback' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 154, CPyStatic_default___globals);
        goto CPyL56;
    }
    cpy_r_r44 = CPyStatic_default___globals;
    cpy_r_r45 = CPyStatics[3837]; /* 'partial' */
    cpy_r_r46 = CPyDict_GetItem(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 154, CPyStatic_default___globals);
        goto CPyL57;
    }
    cpy_r_r47 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r48[2] = {cpy_r_r43, cpy_r_r47};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = CPyStatics[9616]; /* ('auto_attribs_default',) */
    cpy_r_r51 = _PyObject_Vectorcall(cpy_r_r46, cpy_r_r49, 1, cpy_r_r50);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 154, CPyStatic_default___globals);
        goto CPyL57;
    }
    CPy_DECREF(cpy_r_r43);
    return cpy_r_r51;
CPyL35: ;
    cpy_r_r52 = CPyStatic_attrs___attr_frozen_makers;
    if (likely(cpy_r_r52 != NULL)) goto CPyL38;
    PyErr_SetString(PyExc_NameError, "value for final name \"attr_frozen_makers\" was not set");
    cpy_r_r53 = 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 155, CPyStatic_default___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r54 = PySet_Contains(cpy_r_r52, cpy_r_fullname);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 155, CPyStatic_default___globals);
        goto CPyL56;
    }
    cpy_r_r56 = cpy_r_r54;
    if (!cpy_r_r56) goto CPyL45;
    cpy_r_r57 = PyImport_GetModuleDict();
    cpy_r_r58 = CPyStatics[4471]; /* 'mypy.plugins.attrs' */
    cpy_r_r59 = CPyDict_GetItem(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 157, CPyStatic_default___globals);
        goto CPyL56;
    }
    cpy_r_r60 = CPyStatics[4602]; /* 'attr_class_maker_callback' */
    cpy_r_r61 = CPyObject_GetAttr(cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 157, CPyStatic_default___globals);
        goto CPyL56;
    }
    cpy_r_r62 = CPyStatic_default___globals;
    cpy_r_r63 = CPyStatics[3837]; /* 'partial' */
    cpy_r_r64 = CPyDict_GetItem(cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 156, CPyStatic_default___globals);
        goto CPyL58;
    }
    cpy_r_r65 = Py_None;
    cpy_r_r66 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r67[3] = {cpy_r_r61, cpy_r_r65, cpy_r_r66};
    cpy_r_r68 = (PyObject **)&cpy_r_r67;
    cpy_r_r69 = CPyStatics[9617]; /* ('auto_attribs_default', 'frozen_default') */
    cpy_r_r70 = _PyObject_Vectorcall(cpy_r_r64, cpy_r_r68, 1, cpy_r_r69);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 156, CPyStatic_default___globals);
        goto CPyL58;
    }
    CPy_DECREF(cpy_r_r61);
    return cpy_r_r70;
CPyL45: ;
    cpy_r_r71 = CPyStatic_attrs___attr_define_makers;
    if (likely(cpy_r_r71 != NULL)) goto CPyL48;
    PyErr_SetString(PyExc_NameError, "value for final name \"attr_define_makers\" was not set");
    cpy_r_r72 = 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 159, CPyStatic_default___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL48: ;
    cpy_r_r73 = PySet_Contains(cpy_r_r71, cpy_r_fullname);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 159, CPyStatic_default___globals);
        goto CPyL56;
    }
    cpy_r_r75 = cpy_r_r73;
    if (!cpy_r_r75) goto CPyL55;
    cpy_r_r76 = PyImport_GetModuleDict();
    cpy_r_r77 = CPyStatics[4471]; /* 'mypy.plugins.attrs' */
    cpy_r_r78 = CPyDict_GetItem(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 161, CPyStatic_default___globals);
        goto CPyL56;
    }
    cpy_r_r79 = CPyStatics[4602]; /* 'attr_class_maker_callback' */
    cpy_r_r80 = CPyObject_GetAttr(cpy_r_r78, cpy_r_r79);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 161, CPyStatic_default___globals);
        goto CPyL56;
    }
    cpy_r_r81 = CPyStatic_default___globals;
    cpy_r_r82 = CPyStatics[3837]; /* 'partial' */
    cpy_r_r83 = CPyDict_GetItem(cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 160, CPyStatic_default___globals);
        goto CPyL59;
    }
    cpy_r_r84 = Py_None;
    cpy_r_r85 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r86[3] = {cpy_r_r80, cpy_r_r84, cpy_r_r85};
    cpy_r_r87 = (PyObject **)&cpy_r_r86;
    cpy_r_r88 = CPyStatics[9618]; /* ('auto_attribs_default', 'slots_default') */
    cpy_r_r89 = _PyObject_Vectorcall(cpy_r_r83, cpy_r_r87, 1, cpy_r_r88);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 160, CPyStatic_default___globals);
        goto CPyL59;
    }
    CPy_DECREF(cpy_r_r80);
    return cpy_r_r89;
CPyL55: ;
    cpy_r_r90 = Py_None;
    CPy_INCREF(cpy_r_r90);
    return cpy_r_r90;
CPyL56: ;
    cpy_r_r91 = NULL;
    return cpy_r_r91;
CPyL57: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL56;
CPyL58: ;
    CPy_DecRef(cpy_r_r61);
    goto CPyL56;
CPyL59: ;
    CPy_DecRef(cpy_r_r80);
    goto CPyL56;
}

PyObject *CPyPy_default___DefaultPlugin___get_class_decorator_hook_2(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_class_decorator_hook_2", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_default___DefaultPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.default.DefaultPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_default___DefaultPlugin___get_class_decorator_hook_2(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "get_class_decorator_hook_2", 142, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___typed_dict_get_signature_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_signature;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    int64_t cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_value_type;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_ret_type;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_default_arg;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyPtr cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyPtr cpy_r_r78;
    int64_t cpy_r_r79;
    CPyTagged cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r92;
    CPyPtr cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    CPyPtr cpy_r_r103;
    CPyPtr cpy_r_r104;
    CPyPtr cpy_r_r105;
    CPyTagged cpy_r_r106;
    CPyTagged cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    CPyPtr cpy_r_r112;
    CPyPtr cpy_r_r113;
    CPyPtr cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyTagged cpy_r_r121;
    CPyTagged cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 173, CPyStatic_default___globals);
        goto CPyL67;
    }
    if (likely(Py_TYPE(cpy_r_r0) == CPyType_types___CallableType))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 173, CPyStatic_default___globals, "mypy.types.CallableType", cpy_r_r0);
        goto CPyL67;
    }
    cpy_r_signature = cpy_r_r1;
    cpy_r_r2 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 175, CPyStatic_default___globals);
        goto CPyL68;
    }
    cpy_r_r3 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_r2)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    CPy_DECREF(cpy_r_r2);
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (!cpy_r_r6) goto CPyL66;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 176, CPyStatic_default___globals);
        goto CPyL68;
    }
    if (likely(PyList_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 176, CPyStatic_default___globals, "list", cpy_r_r7);
        goto CPyL68;
    }
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    CPy_DECREF(cpy_r_r8);
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = cpy_r_r11 == 4;
    if (!cpy_r_r12) goto CPyL66;
    cpy_r_r13 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 177, CPyStatic_default___globals);
        goto CPyL68;
    }
    if (likely(PyList_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 177, CPyStatic_default___globals, "list", cpy_r_r13);
        goto CPyL68;
    }
    cpy_r_r15 = CPyList_GetItemShortBorrow(cpy_r_r14, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 177, CPyStatic_default___globals);
        goto CPyL69;
    }
    if (likely(PyList_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 177, CPyStatic_default___globals, "list", cpy_r_r15);
        goto CPyL69;
    }
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = cpy_r_r19 == 2;
    CPy_DECREF(cpy_r_r14);
    if (!cpy_r_r20) goto CPyL66;
    cpy_r_r21 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 178, CPyStatic_default___globals);
        goto CPyL68;
    }
    if (likely(PyList_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 178, CPyStatic_default___globals, "list", cpy_r_r21);
        goto CPyL68;
    }
    cpy_r_r23 = CPyList_GetItemShortBorrow(cpy_r_r22, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 178, CPyStatic_default___globals);
        goto CPyL70;
    }
    if (likely(PyList_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 178, CPyStatic_default___globals, "list", cpy_r_r23);
        goto CPyL70;
    }
    cpy_r_r25 = CPyList_GetItemShortBorrow(cpy_r_r24, 0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 178, CPyStatic_default___globals);
        goto CPyL70;
    }
    cpy_r_r26 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_r25)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    CPy_DECREF(cpy_r_r22);
    if (!cpy_r_r29) goto CPyL66;
    cpy_r_r30 = ((mypy___types___CallableTypeObject *)cpy_r_signature)->_arg_types;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_r30)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = cpy_r_r33 == 4;
    if (!cpy_r_r34) goto CPyL66;
    cpy_r_r35 = ((mypy___types___CallableTypeObject *)cpy_r_signature)->_variables;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyObject_Size(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 180, CPyStatic_default___globals);
        goto CPyL68;
    }
    cpy_r_r37 = cpy_r_r36 == 2;
    CPyTagged_DECREF(cpy_r_r36);
    if (!cpy_r_r37) goto CPyL66;
    cpy_r_r38 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 181, CPyStatic_default___globals);
        goto CPyL68;
    }
    if (likely(PyList_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 181, CPyStatic_default___globals, "list", cpy_r_r38);
        goto CPyL68;
    }
    cpy_r_r40 = CPyList_GetItemShortBorrow(cpy_r_r39, 2);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 181, CPyStatic_default___globals);
        goto CPyL71;
    }
    if (likely(PyList_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 181, CPyStatic_default___globals, "list", cpy_r_r40);
        goto CPyL71;
    }
    cpy_r_r42 = (CPyPtr)&((PyVarObject *)cpy_r_r41)->ob_size;
    cpy_r_r43 = *(int64_t *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 << 1;
    cpy_r_r45 = cpy_r_r44 == 2;
    CPy_DECREF(cpy_r_r39);
    if (!cpy_r_r45) goto CPyL66;
    cpy_r_r46 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 183, CPyStatic_default___globals);
        goto CPyL68;
    }
    if (likely(PyList_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 183, CPyStatic_default___globals, "list", cpy_r_r46);
        goto CPyL68;
    }
    cpy_r_r48 = CPyList_GetItemShortBorrow(cpy_r_r47, 0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 183, CPyStatic_default___globals);
        goto CPyL72;
    }
    if (likely(PyList_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 183, CPyStatic_default___globals, "list", cpy_r_r48);
        goto CPyL72;
    }
    cpy_r_r50 = CPyList_GetItemShortBorrow(cpy_r_r49, 0);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 183, CPyStatic_default___globals);
        goto CPyL72;
    }
    if (likely(Py_TYPE(cpy_r_r50) == CPyType_nodes___StrExpr))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 183, CPyStatic_default___globals, "mypy.nodes.StrExpr", cpy_r_r50);
        goto CPyL72;
    }
    cpy_r_r52 = ((mypy___nodes___StrExprObject *)cpy_r_r51)->_value;
    CPy_INCREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r47);
    cpy_r_key = cpy_r_r52;
    cpy_r_r53 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 184, CPyStatic_default___globals);
        goto CPyL73;
    }
    if (likely(Py_TYPE(cpy_r_r53) == CPyType_types___TypedDictType))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 184, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_r53);
        goto CPyL73;
    }
    cpy_r_r55 = ((mypy___types___TypedDictTypeObject *)cpy_r_r54)->_items;
    CPy_INCREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r56 = CPyDict_GetWithNone(cpy_r_r55, cpy_r_key);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 184, CPyStatic_default___globals);
        goto CPyL68;
    }
    if (PyObject_TypeCheck(cpy_r_r56, CPyType_types___Type))
        cpy_r_r57 = cpy_r_r56;
    else {
        cpy_r_r57 = NULL;
    }
    if (cpy_r_r57 != NULL) goto __LL4905;
    if (cpy_r_r56 == Py_None)
        cpy_r_r57 = cpy_r_r56;
    else {
        cpy_r_r57 = NULL;
    }
    if (cpy_r_r57 != NULL) goto __LL4905;
    CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 184, CPyStatic_default___globals, "mypy.types.Type or None", cpy_r_r56);
    goto CPyL68;
__LL4905: ;
    cpy_r_r58 = CPyDef_types___get_proper_type(cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 184, CPyStatic_default___globals);
        goto CPyL68;
    }
    cpy_r_value_type = cpy_r_r58;
    cpy_r_r59 = ((mypy___types___CallableTypeObject *)cpy_r_signature)->_ret_type;
    CPy_INCREF(cpy_r_r59);
    cpy_r_ret_type = cpy_r_r59;
    cpy_r_r60 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r61 = cpy_r_value_type != cpy_r_r60;
    if (!cpy_r_r61) goto CPyL74;
    cpy_r_r62 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 187, CPyStatic_default___globals);
        goto CPyL75;
    }
    if (likely(PyList_Check(cpy_r_r62)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 187, CPyStatic_default___globals, "list", cpy_r_r62);
        goto CPyL75;
    }
    cpy_r_r64 = CPyList_GetItemShortBorrow(cpy_r_r63, 2);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 187, CPyStatic_default___globals);
        goto CPyL76;
    }
    if (likely(PyList_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 187, CPyStatic_default___globals, "list", cpy_r_r64);
        goto CPyL76;
    }
    cpy_r_r66 = CPyList_GetItemShort(cpy_r_r65, 0);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 187, CPyStatic_default___globals);
        goto CPyL76;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r66, CPyType_nodes___Expression)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 187, CPyStatic_default___globals, "mypy.nodes.Expression", cpy_r_r66);
        goto CPyL76;
    }
    CPy_DECREF(cpy_r_r63);
    cpy_r_default_arg = cpy_r_r67;
    cpy_r_r68 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r69 = (CPyPtr)&((PyObject *)cpy_r_value_type)->ob_type;
    cpy_r_r70 = *(PyObject * *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 == cpy_r_r68;
    if (!cpy_r_r71) goto CPyL77;
    cpy_r_r72 = (PyObject *)CPyType_nodes___DictExpr;
    cpy_r_r73 = (CPyPtr)&((PyObject *)cpy_r_default_arg)->ob_type;
    cpy_r_r74 = *(PyObject * *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r74 == cpy_r_r72;
    if (!cpy_r_r75) goto CPyL77;
    if (likely(Py_TYPE(cpy_r_default_arg) == CPyType_nodes___DictExpr))
        cpy_r_r76 = cpy_r_default_arg;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 191, CPyStatic_default___globals, "mypy.nodes.DictExpr", cpy_r_default_arg);
        goto CPyL78;
    }
    cpy_r_r77 = ((mypy___nodes___DictExprObject *)cpy_r_r76)->_items;
    cpy_r_r78 = (CPyPtr)&((PyVarObject *)cpy_r_r77)->ob_size;
    cpy_r_r79 = *(int64_t *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 << 1;
    cpy_r_r81 = cpy_r_r80 == 0;
    CPy_DECREF(cpy_r_default_arg);
    if (!cpy_r_r81) goto CPyL52;
    if (likely(Py_TYPE(cpy_r_value_type) == CPyType_types___TypedDictType))
        cpy_r_r82 = cpy_r_value_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 194, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_value_type);
        goto CPyL79;
    }
    cpy_r_r83 = PySet_New(NULL);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 194, CPyStatic_default___globals);
        goto CPyL80;
    }
    cpy_r_r84 = NULL;
    cpy_r_r85 = NULL;
    cpy_r_r86 = NULL;
    cpy_r_r87 = CPyDef_types___TypedDictType___copy_modified(cpy_r_r82, cpy_r_r84, cpy_r_r85, cpy_r_r86, cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 194, CPyStatic_default___globals);
        goto CPyL79;
    }
    cpy_r_value_type = cpy_r_r87;
CPyL52: ;
    cpy_r_r88 = ((mypy___types___CallableTypeObject *)cpy_r_signature)->_variables;
    CPy_INCREF(cpy_r_r88);
    cpy_r_r89 = CPyStatics[9015]; /* 0 */
    cpy_r_r90 = PyObject_GetItem(cpy_r_r88, cpy_r_r89);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 198, CPyStatic_default___globals);
        goto CPyL75;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r90, CPyType_types___TypeVarLikeType)))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 198, CPyStatic_default___globals, "mypy.types.TypeVarLikeType", cpy_r_r90);
        goto CPyL75;
    }
    cpy_r_tv = cpy_r_r91;
    cpy_r_r92 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r93 = (CPyPtr)&((PyObject *)cpy_r_tv)->ob_type;
    cpy_r_r94 = *(PyObject * *)cpy_r_r93;
    cpy_r_r95 = cpy_r_r94 == cpy_r_r92;
    if (cpy_r_r95) {
        goto CPyL57;
    } else
        goto CPyL81;
CPyL55: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r96 = 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 199, CPyStatic_default___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL57: ;
    cpy_r_r97 = ((mypy___types___CallableTypeObject *)cpy_r_signature)->_arg_types;
    cpy_r_r98 = CPyList_GetItemShort(cpy_r_r97, 0);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 201, CPyStatic_default___globals);
        goto CPyL82;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r98, CPyType_types___Type)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 201, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r98);
        goto CPyL82;
    }
    if (likely(cpy_r_value_type != Py_None))
        cpy_r_r100 = cpy_r_value_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 201, CPyStatic_default___globals, "mypy.types.ProperType", cpy_r_value_type);
        goto CPyL83;
    }
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___TypeVarType))
        cpy_r_r101 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 201, CPyStatic_default___globals, "mypy.types.TypeVarType", cpy_r_tv);
        goto CPyL84;
    }
    cpy_r_r102 = PyList_New(2);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 201, CPyStatic_default___globals);
        goto CPyL85;
    }
    cpy_r_r103 = (CPyPtr)&((PyListObject *)cpy_r_r102)->ob_item;
    cpy_r_r104 = *(CPyPtr *)cpy_r_r103;
    *(PyObject * *)cpy_r_r104 = cpy_r_r100;
    cpy_r_r105 = cpy_r_r104 + 8;
    *(PyObject * *)cpy_r_r105 = cpy_r_r101;
    cpy_r_r106 = CPY_INT_TAG;
    cpy_r_r107 = CPY_INT_TAG;
    cpy_r_r108 = 2;
    cpy_r_r109 = 2;
    cpy_r_r110 = CPyDef_typeops___make_simplified_union(cpy_r_r102, cpy_r_r106, cpy_r_r107, cpy_r_r108, cpy_r_r109);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 201, CPyStatic_default___globals);
        goto CPyL86;
    }
    cpy_r_r111 = PyList_New(2);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 201, CPyStatic_default___globals);
        goto CPyL87;
    }
    cpy_r_r112 = (CPyPtr)&((PyListObject *)cpy_r_r111)->ob_item;
    cpy_r_r113 = *(CPyPtr *)cpy_r_r112;
    *(PyObject * *)cpy_r_r113 = cpy_r_r99;
    cpy_r_r114 = cpy_r_r113 + 8;
    *(PyObject * *)cpy_r_r114 = cpy_r_r110;
    cpy_r_r115 = NULL;
    cpy_r_r116 = NULL;
    cpy_r_r117 = NULL;
    cpy_r_r118 = NULL;
    cpy_r_r119 = NULL;
    cpy_r_r120 = NULL;
    cpy_r_r121 = CPY_INT_TAG;
    cpy_r_r122 = CPY_INT_TAG;
    cpy_r_r123 = NULL;
    cpy_r_r124 = NULL;
    cpy_r_r125 = NULL;
    cpy_r_r126 = NULL;
    cpy_r_r127 = NULL;
    cpy_r_r128 = NULL;
    cpy_r_r129 = NULL;
    cpy_r_r130 = NULL;
    cpy_r_r131 = NULL;
    cpy_r_r132 = CPyDef_types___CallableType___copy_modified(cpy_r_signature, cpy_r_r111, cpy_r_r115, cpy_r_r116, cpy_r_ret_type, cpy_r_r117, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124, cpy_r_r125, cpy_r_r126, cpy_r_r127, cpy_r_r128, cpy_r_r129, cpy_r_r130, cpy_r_r131);
    CPy_DECREF(cpy_r_r111);
    CPy_DECREF(cpy_r_ret_type);
    CPy_DECREF(cpy_r_signature);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 200, CPyStatic_default___globals);
        goto CPyL67;
    }
    return cpy_r_r132;
CPyL66: ;
    return cpy_r_signature;
CPyL67: ;
    cpy_r_r133 = NULL;
    return cpy_r_r133;
CPyL68: ;
    CPy_DecRef(cpy_r_signature);
    goto CPyL67;
CPyL69: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_r14);
    goto CPyL67;
CPyL70: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_r22);
    goto CPyL67;
CPyL71: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_r39);
    goto CPyL67;
CPyL72: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_r47);
    goto CPyL67;
CPyL73: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_key);
    goto CPyL67;
CPyL74: ;
    CPy_DECREF(cpy_r_value_type);
    CPy_DECREF(cpy_r_ret_type);
    goto CPyL66;
CPyL75: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_value_type);
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL67;
CPyL76: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_value_type);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r63);
    goto CPyL67;
CPyL77: ;
    CPy_DECREF(cpy_r_default_arg);
    goto CPyL52;
CPyL78: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_value_type);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_default_arg);
    goto CPyL67;
CPyL79: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL67;
CPyL80: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r82);
    goto CPyL67;
CPyL81: ;
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_value_type);
    CPy_DECREF(cpy_r_ret_type);
    CPy_DECREF(cpy_r_tv);
    goto CPyL55;
CPyL82: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_value_type);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_tv);
    goto CPyL67;
CPyL83: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_r99);
    goto CPyL67;
CPyL84: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r100);
    goto CPyL67;
CPyL85: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r101);
    goto CPyL67;
CPyL86: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r99);
    goto CPyL67;
CPyL87: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r110);
    goto CPyL67;
}

PyObject *CPyPy_default___typed_dict_get_signature_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:typed_dict_get_signature_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_default___typed_dict_get_signature_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_signature_callback", 167, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___typed_dict_get_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
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
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
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
    PyObject *cpy_r_keys;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_output_types;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyPtr cpy_r_r39;
    int64_t cpy_r_r40;
    CPyTagged cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_value_type;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    int64_t cpy_r_r58;
    CPyTagged cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    int64_t cpy_r_r67;
    CPyTagged cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    int64_t cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyPtr cpy_r_r82;
    int64_t cpy_r_r83;
    CPyTagged cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_default_arg;
    PyObject *cpy_r_r92;
    CPyPtr cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyPtr cpy_r_r98;
    int64_t cpy_r_r99;
    CPyTagged cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    CPyPtr cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    int32_t cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    int32_t cpy_r_r123;
    char cpy_r_r124;
    CPyTagged cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    CPyPtr cpy_r_r128;
    int64_t cpy_r_r129;
    CPyTagged cpy_r_r130;
    char cpy_r_r131;
    CPyTagged cpy_r_r132;
    CPyTagged cpy_r_r133;
    PyObject *cpy_r_r134;
    int32_t cpy_r_r135;
    char cpy_r_r136;
    CPyTagged cpy_r_r137;
    CPyTagged cpy_r_r138;
    char cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 210, CPyStatic_default___globals);
        goto CPyL93;
    }
    cpy_r_r1 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL90;
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 211, CPyStatic_default___globals);
        goto CPyL93;
    }
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 211, CPyStatic_default___globals, "list", cpy_r_r5);
        goto CPyL93;
    }
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r9 >= (Py_ssize_t)2;
    if (!cpy_r_r10) goto CPyL90;
    cpy_r_r11 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 212, CPyStatic_default___globals);
        goto CPyL93;
    }
    if (likely(PyList_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 212, CPyStatic_default___globals, "list", cpy_r_r11);
        goto CPyL93;
    }
    cpy_r_r13 = CPyList_GetItemShortBorrow(cpy_r_r12, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 212, CPyStatic_default___globals);
        goto CPyL94;
    }
    if (likely(PyList_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 212, CPyStatic_default___globals, "list", cpy_r_r13);
        goto CPyL94;
    }
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = cpy_r_r17 == 2;
    CPy_DECREF(cpy_r_r12);
    if (!cpy_r_r18) goto CPyL90;
    cpy_r_r19 = CPySequenceTuple_GetItem(cpy_r_ctx, 12);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 214, CPyStatic_default___globals);
        goto CPyL93;
    }
    if (likely(PyList_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 214, CPyStatic_default___globals, "list", cpy_r_r19);
        goto CPyL93;
    }
    cpy_r_r21 = CPyList_GetItemShortBorrow(cpy_r_r20, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 214, CPyStatic_default___globals);
        goto CPyL95;
    }
    if (likely(PyList_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 214, CPyStatic_default___globals, "list", cpy_r_r21);
        goto CPyL95;
    }
    cpy_r_r23 = CPyList_GetItemShort(cpy_r_r22, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 214, CPyStatic_default___globals);
        goto CPyL95;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_nodes___Expression)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 214, CPyStatic_default___globals, "mypy.nodes.Expression", cpy_r_r23);
        goto CPyL95;
    }
    CPy_DECREF(cpy_r_r20);
    cpy_r_r25 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 214, CPyStatic_default___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 214, CPyStatic_default___globals, "list", cpy_r_r25);
        goto CPyL96;
    }
    cpy_r_r27 = CPyList_GetItemShortBorrow(cpy_r_r26, 0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 214, CPyStatic_default___globals);
        goto CPyL97;
    }
    if (likely(PyList_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 214, CPyStatic_default___globals, "list", cpy_r_r27);
        goto CPyL97;
    }
    cpy_r_r29 = CPyList_GetItemShort(cpy_r_r28, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 214, CPyStatic_default___globals);
        goto CPyL97;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r29, CPyType_types___Type)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 214, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r29);
        goto CPyL97;
    }
    CPy_DECREF(cpy_r_r26);
    cpy_r_r31 = CPyDef_typeops___try_getting_str_literals(cpy_r_r24, cpy_r_r30);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 214, CPyStatic_default___globals);
        goto CPyL93;
    }
    cpy_r_keys = cpy_r_r31;
    cpy_r_r32 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r33 = cpy_r_keys == cpy_r_r32;
    if (cpy_r_r33) {
        goto CPyL98;
    } else
        goto CPyL27;
CPyL24: ;
    cpy_r_r34 = CPySequenceTuple_GetItem(cpy_r_ctx, 10);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 216, CPyStatic_default___globals);
        goto CPyL93;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r34, CPyType_types___Type)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 216, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r34);
        goto CPyL93;
    }
    return cpy_r_r35;
CPyL27: ;
    cpy_r_r36 = PyList_New(0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 218, CPyStatic_default___globals);
        goto CPyL99;
    }
    cpy_r_output_types = cpy_r_r36;
    if (likely(cpy_r_keys != Py_None))
        cpy_r_r37 = cpy_r_keys;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 219, CPyStatic_default___globals, "list", cpy_r_keys);
        goto CPyL100;
    }
    cpy_r_r38 = 0;
CPyL30: ;
    cpy_r_r39 = (CPyPtr)&((PyVarObject *)cpy_r_r37)->ob_size;
    cpy_r_r40 = *(int64_t *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 << 1;
    cpy_r_r42 = (Py_ssize_t)cpy_r_r38 < (Py_ssize_t)cpy_r_r41;
    if (!cpy_r_r42) goto CPyL101;
    cpy_r_r43 = CPyList_GetItemUnsafe(cpy_r_r37, cpy_r_r38);
    if (likely(PyUnicode_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 219, CPyStatic_default___globals, "str", cpy_r_r43);
        goto CPyL102;
    }
    cpy_r_key = cpy_r_r44;
    cpy_r_r45 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 220, CPyStatic_default___globals);
        goto CPyL103;
    }
    if (likely(Py_TYPE(cpy_r_r45) == CPyType_types___TypedDictType))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 220, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_r45);
        goto CPyL103;
    }
    cpy_r_r47 = ((mypy___types___TypedDictTypeObject *)cpy_r_r46)->_items;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = CPyDict_GetWithNone(cpy_r_r47, cpy_r_key);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 220, CPyStatic_default___globals);
        goto CPyL102;
    }
    if (PyObject_TypeCheck(cpy_r_r48, CPyType_types___Type))
        cpy_r_r49 = cpy_r_r48;
    else {
        cpy_r_r49 = NULL;
    }
    if (cpy_r_r49 != NULL) goto __LL4906;
    if (cpy_r_r48 == Py_None)
        cpy_r_r49 = cpy_r_r48;
    else {
        cpy_r_r49 = NULL;
    }
    if (cpy_r_r49 != NULL) goto __LL4906;
    CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 220, CPyStatic_default___globals, "mypy.types.Type or None", cpy_r_r48);
    goto CPyL102;
__LL4906: ;
    cpy_r_r50 = CPyDef_types___get_proper_type(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 220, CPyStatic_default___globals);
        goto CPyL102;
    }
    cpy_r_value_type = cpy_r_r50;
    cpy_r_r51 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r52 = cpy_r_value_type == cpy_r_r51;
    if (cpy_r_r52) {
        goto CPyL104;
    } else
        goto CPyL41;
CPyL38: ;
    cpy_r_r53 = CPySequenceTuple_GetItem(cpy_r_ctx, 10);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 222, CPyStatic_default___globals);
        goto CPyL93;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r53, CPyType_types___Type)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 222, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r53);
        goto CPyL93;
    }
    return cpy_r_r54;
CPyL41: ;
    cpy_r_r55 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 224, CPyStatic_default___globals);
        goto CPyL105;
    }
    if (likely(PyList_Check(cpy_r_r55)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 224, CPyStatic_default___globals, "list", cpy_r_r55);
        goto CPyL105;
    }
    cpy_r_r57 = (CPyPtr)&((PyVarObject *)cpy_r_r56)->ob_size;
    cpy_r_r58 = *(int64_t *)cpy_r_r57;
    CPy_DECREF(cpy_r_r56);
    cpy_r_r59 = cpy_r_r58 << 1;
    cpy_r_r60 = cpy_r_r59 == 2;
    if (!cpy_r_r60) goto CPyL46;
    if (likely(cpy_r_value_type != Py_None))
        cpy_r_r61 = cpy_r_value_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 225, CPyStatic_default___globals, "mypy.types.ProperType", cpy_r_value_type);
        goto CPyL102;
    }
    cpy_r_r62 = PyList_Append(cpy_r_output_types, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 225, CPyStatic_default___globals);
        goto CPyL102;
    } else
        goto CPyL82;
CPyL46: ;
    cpy_r_r64 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 226, CPyStatic_default___globals);
        goto CPyL105;
    }
    if (likely(PyList_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 226, CPyStatic_default___globals, "list", cpy_r_r64);
        goto CPyL105;
    }
    cpy_r_r66 = (CPyPtr)&((PyVarObject *)cpy_r_r65)->ob_size;
    cpy_r_r67 = *(int64_t *)cpy_r_r66;
    CPy_DECREF(cpy_r_r65);
    cpy_r_r68 = cpy_r_r67 << 1;
    cpy_r_r69 = cpy_r_r68 == 4;
    if (!cpy_r_r69) goto CPyL106;
    cpy_r_r70 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 226, CPyStatic_default___globals);
        goto CPyL105;
    }
    if (likely(PyList_Check(cpy_r_r70)))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 226, CPyStatic_default___globals, "list", cpy_r_r70);
        goto CPyL105;
    }
    cpy_r_r72 = CPyList_GetItemShortBorrow(cpy_r_r71, 2);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 226, CPyStatic_default___globals);
        goto CPyL107;
    }
    if (likely(PyList_Check(cpy_r_r72)))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 226, CPyStatic_default___globals, "list", cpy_r_r72);
        goto CPyL107;
    }
    cpy_r_r74 = (CPyPtr)&((PyVarObject *)cpy_r_r73)->ob_size;
    cpy_r_r75 = *(int64_t *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 << 1;
    cpy_r_r77 = cpy_r_r76 == 2;
    CPy_DECREF(cpy_r_r71);
    if (!cpy_r_r77) goto CPyL106;
    cpy_r_r78 = CPySequenceTuple_GetItem(cpy_r_ctx, 12);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 226, CPyStatic_default___globals);
        goto CPyL105;
    }
    if (likely(PyList_Check(cpy_r_r78)))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 226, CPyStatic_default___globals, "list", cpy_r_r78);
        goto CPyL105;
    }
    cpy_r_r80 = CPyList_GetItemShortBorrow(cpy_r_r79, 2);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 226, CPyStatic_default___globals);
        goto CPyL108;
    }
    if (likely(PyList_Check(cpy_r_r80)))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 226, CPyStatic_default___globals, "list", cpy_r_r80);
        goto CPyL108;
    }
    cpy_r_r82 = (CPyPtr)&((PyVarObject *)cpy_r_r81)->ob_size;
    cpy_r_r83 = *(int64_t *)cpy_r_r82;
    cpy_r_r84 = cpy_r_r83 << 1;
    cpy_r_r85 = cpy_r_r84 == 2;
    CPy_DECREF(cpy_r_r79);
    if (!cpy_r_r85) goto CPyL106;
    cpy_r_r86 = CPySequenceTuple_GetItem(cpy_r_ctx, 12);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 227, CPyStatic_default___globals);
        goto CPyL105;
    }
    if (likely(PyList_Check(cpy_r_r86)))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 227, CPyStatic_default___globals, "list", cpy_r_r86);
        goto CPyL105;
    }
    cpy_r_r88 = CPyList_GetItemShortBorrow(cpy_r_r87, 2);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 227, CPyStatic_default___globals);
        goto CPyL109;
    }
    if (likely(PyList_Check(cpy_r_r88)))
        cpy_r_r89 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 227, CPyStatic_default___globals, "list", cpy_r_r88);
        goto CPyL109;
    }
    cpy_r_r90 = CPyList_GetItemShort(cpy_r_r89, 0);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 227, CPyStatic_default___globals);
        goto CPyL109;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r90, CPyType_nodes___Expression)))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 227, CPyStatic_default___globals, "mypy.nodes.Expression", cpy_r_r90);
        goto CPyL109;
    }
    CPy_DECREF(cpy_r_r87);
    cpy_r_default_arg = cpy_r_r91;
    cpy_r_r92 = (PyObject *)CPyType_nodes___DictExpr;
    cpy_r_r93 = (CPyPtr)&((PyObject *)cpy_r_default_arg)->ob_type;
    cpy_r_r94 = *(PyObject * *)cpy_r_r93;
    cpy_r_r95 = cpy_r_r94 == cpy_r_r92;
    if (!cpy_r_r95) goto CPyL110;
    if (likely(Py_TYPE(cpy_r_default_arg) == CPyType_nodes___DictExpr))
        cpy_r_r96 = cpy_r_default_arg;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 230, CPyStatic_default___globals, "mypy.nodes.DictExpr", cpy_r_default_arg);
        goto CPyL111;
    }
    cpy_r_r97 = ((mypy___nodes___DictExprObject *)cpy_r_r96)->_items;
    cpy_r_r98 = (CPyPtr)&((PyVarObject *)cpy_r_r97)->ob_size;
    cpy_r_r99 = *(int64_t *)cpy_r_r98;
    cpy_r_r100 = cpy_r_r99 << 1;
    cpy_r_r101 = cpy_r_r100 == 0;
    CPy_DECREF(cpy_r_default_arg);
    if (!cpy_r_r101) goto CPyL73;
    cpy_r_r102 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r103 = (CPyPtr)&((PyObject *)cpy_r_value_type)->ob_type;
    cpy_r_r104 = *(PyObject * *)cpy_r_r103;
    cpy_r_r105 = cpy_r_r104 == cpy_r_r102;
    if (!cpy_r_r105) goto CPyL73;
    if (likely(Py_TYPE(cpy_r_value_type) == CPyType_types___TypedDictType))
        cpy_r_r106 = cpy_r_value_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 234, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_value_type);
        goto CPyL102;
    }
    cpy_r_r107 = PySet_New(NULL);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 234, CPyStatic_default___globals);
        goto CPyL112;
    }
    cpy_r_r108 = NULL;
    cpy_r_r109 = NULL;
    cpy_r_r110 = NULL;
    cpy_r_r111 = CPyDef_types___TypedDictType___copy_modified(cpy_r_r106, cpy_r_r108, cpy_r_r109, cpy_r_r110, cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 234, CPyStatic_default___globals);
        goto CPyL102;
    }
    cpy_r_r112 = PyList_Append(cpy_r_output_types, cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    cpy_r_r113 = cpy_r_r112 >= 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 234, CPyStatic_default___globals);
        goto CPyL102;
    } else
        goto CPyL82;
CPyL73: ;
    if (likely(cpy_r_value_type != Py_None))
        cpy_r_r114 = cpy_r_value_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 236, CPyStatic_default___globals, "mypy.types.ProperType", cpy_r_value_type);
        goto CPyL102;
    }
    cpy_r_r115 = PyList_Append(cpy_r_output_types, cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 236, CPyStatic_default___globals);
        goto CPyL102;
    }
    cpy_r_r117 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 237, CPyStatic_default___globals);
        goto CPyL102;
    }
    if (likely(PyList_Check(cpy_r_r117)))
        cpy_r_r118 = cpy_r_r117;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 237, CPyStatic_default___globals, "list", cpy_r_r117);
        goto CPyL102;
    }
    cpy_r_r119 = CPyList_GetItemShortBorrow(cpy_r_r118, 2);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 237, CPyStatic_default___globals);
        goto CPyL113;
    }
    if (likely(PyList_Check(cpy_r_r119)))
        cpy_r_r120 = cpy_r_r119;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 237, CPyStatic_default___globals, "list", cpy_r_r119);
        goto CPyL113;
    }
    cpy_r_r121 = CPyList_GetItemShort(cpy_r_r120, 0);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 237, CPyStatic_default___globals);
        goto CPyL113;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r121, CPyType_types___Type)))
        cpy_r_r122 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 237, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r121);
        goto CPyL113;
    }
    CPy_DECREF(cpy_r_r118);
    cpy_r_r123 = PyList_Append(cpy_r_output_types, cpy_r_r122);
    CPy_DECREF(cpy_r_r122);
    cpy_r_r124 = cpy_r_r123 >= 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 237, CPyStatic_default___globals);
        goto CPyL102;
    }
CPyL82: ;
    cpy_r_r125 = cpy_r_r38 + 2;
    cpy_r_r38 = cpy_r_r125;
    goto CPyL30;
CPyL83: ;
    cpy_r_r126 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 239, CPyStatic_default___globals);
        goto CPyL100;
    }
    if (likely(PyList_Check(cpy_r_r126)))
        cpy_r_r127 = cpy_r_r126;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 239, CPyStatic_default___globals, "list", cpy_r_r126);
        goto CPyL100;
    }
    cpy_r_r128 = (CPyPtr)&((PyVarObject *)cpy_r_r127)->ob_size;
    cpy_r_r129 = *(int64_t *)cpy_r_r128;
    CPy_DECREF(cpy_r_r127);
    cpy_r_r130 = cpy_r_r129 << 1;
    cpy_r_r131 = cpy_r_r130 == 2;
    if (!cpy_r_r131) goto CPyL88;
    cpy_r_r132 = CPY_INT_TAG;
    cpy_r_r133 = CPY_INT_TAG;
    cpy_r_r134 = CPyDef_types___NoneType(cpy_r_r132, cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 240, CPyStatic_default___globals);
        goto CPyL100;
    }
    cpy_r_r135 = PyList_Append(cpy_r_output_types, cpy_r_r134);
    CPy_DECREF(cpy_r_r134);
    cpy_r_r136 = cpy_r_r135 >= 0;
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 240, CPyStatic_default___globals);
        goto CPyL100;
    }
CPyL88: ;
    cpy_r_r137 = CPY_INT_TAG;
    cpy_r_r138 = CPY_INT_TAG;
    cpy_r_r139 = 2;
    cpy_r_r140 = 2;
    cpy_r_r141 = CPyDef_typeops___make_simplified_union(cpy_r_output_types, cpy_r_r137, cpy_r_r138, cpy_r_r139, cpy_r_r140);
    CPy_DECREF(cpy_r_output_types);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 242, CPyStatic_default___globals);
        goto CPyL93;
    }
    return cpy_r_r141;
CPyL90: ;
    cpy_r_r142 = CPySequenceTuple_GetItem(cpy_r_ctx, 10);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 243, CPyStatic_default___globals);
        goto CPyL93;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r142, CPyType_types___Type)))
        cpy_r_r143 = cpy_r_r142;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 243, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r142);
        goto CPyL93;
    }
    return cpy_r_r143;
CPyL93: ;
    cpy_r_r144 = NULL;
    return cpy_r_r144;
CPyL94: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL93;
CPyL95: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL93;
CPyL96: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL93;
CPyL97: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r26);
    goto CPyL93;
CPyL98: ;
    CPy_DECREF(cpy_r_keys);
    goto CPyL24;
CPyL99: ;
    CPy_DecRef(cpy_r_keys);
    goto CPyL93;
CPyL100: ;
    CPy_DecRef(cpy_r_output_types);
    goto CPyL93;
CPyL101: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL83;
CPyL102: ;
    CPy_DecRef(cpy_r_output_types);
    CPy_DecRef(cpy_r_r37);
    goto CPyL93;
CPyL103: ;
    CPy_DecRef(cpy_r_output_types);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_key);
    goto CPyL93;
CPyL104: ;
    CPy_DECREF(cpy_r_output_types);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_value_type);
    goto CPyL38;
CPyL105: ;
    CPy_DecRef(cpy_r_output_types);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_value_type);
    goto CPyL93;
CPyL106: ;
    CPy_DECREF(cpy_r_value_type);
    goto CPyL82;
CPyL107: ;
    CPy_DecRef(cpy_r_output_types);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_value_type);
    CPy_DecRef(cpy_r_r71);
    goto CPyL93;
CPyL108: ;
    CPy_DecRef(cpy_r_output_types);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_value_type);
    CPy_DecRef(cpy_r_r79);
    goto CPyL93;
CPyL109: ;
    CPy_DecRef(cpy_r_output_types);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_value_type);
    CPy_DecRef(cpy_r_r87);
    goto CPyL93;
CPyL110: ;
    CPy_DECREF(cpy_r_default_arg);
    goto CPyL73;
CPyL111: ;
    CPy_DecRef(cpy_r_output_types);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_value_type);
    CPy_DecRef(cpy_r_default_arg);
    goto CPyL93;
CPyL112: ;
    CPy_DecRef(cpy_r_output_types);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r106);
    goto CPyL93;
CPyL113: ;
    CPy_DecRef(cpy_r_output_types);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r118);
    goto CPyL93;
}

PyObject *CPyPy_default___typed_dict_get_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:typed_dict_get_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_default___typed_dict_get_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_get_callback", 207, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___typed_dict_pop_signature_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_signature;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_str_type;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    int64_t cpy_r_r37;
    CPyTagged cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyTagged cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    int64_t cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_value_type;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r69;
    CPyPtr cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyPtr cpy_r_r77;
    CPyPtr cpy_r_r78;
    CPyPtr cpy_r_r79;
    CPyTagged cpy_r_r80;
    CPyTagged cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r85;
    CPyPtr cpy_r_r86;
    CPyPtr cpy_r_r87;
    CPyPtr cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyTagged cpy_r_r95;
    CPyTagged cpy_r_r96;
    PyObject *cpy_r_r97;
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
    CPyPtr cpy_r_r111;
    CPyPtr cpy_r_r112;
    CPyPtr cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyTagged cpy_r_r121;
    CPyTagged cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 252, CPyStatic_default___globals);
        goto CPyL58;
    }
    if (likely(Py_TYPE(cpy_r_r0) == CPyType_types___CallableType))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 252, CPyStatic_default___globals, "mypy.types.CallableType", cpy_r_r0);
        goto CPyL58;
    }
    cpy_r_signature = cpy_r_r1;
    cpy_r_r2 = CPySequenceTuple_GetItem(cpy_r_ctx, 8);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 253, CPyStatic_default___globals);
        goto CPyL59;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_checker___TypeChecker))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 253, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r2);
        goto CPyL59;
    }
    cpy_r_r4 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 253, CPyStatic_default___globals);
        goto CPyL60;
    }
    cpy_r_r6 = CPY_GET_METHOD_TRAIT(cpy_r_r3, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r3, cpy_r_r4, cpy_r_r5); /* named_generic_type */
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 253, CPyStatic_default___globals);
        goto CPyL59;
    }
    cpy_r_str_type = cpy_r_r6;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 255, CPyStatic_default___globals);
        goto CPyL61;
    }
    cpy_r_r8 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_r7)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    CPy_DECREF(cpy_r_r7);
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL53;
    cpy_r_r12 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 256, CPyStatic_default___globals);
        goto CPyL61;
    }
    if (likely(PyList_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 256, CPyStatic_default___globals, "list", cpy_r_r12);
        goto CPyL61;
    }
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = cpy_r_r16 == 4;
    if (!cpy_r_r17) goto CPyL53;
    cpy_r_r18 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 257, CPyStatic_default___globals);
        goto CPyL61;
    }
    if (likely(PyList_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 257, CPyStatic_default___globals, "list", cpy_r_r18);
        goto CPyL61;
    }
    cpy_r_r20 = CPyList_GetItemShortBorrow(cpy_r_r19, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 257, CPyStatic_default___globals);
        goto CPyL62;
    }
    if (likely(PyList_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 257, CPyStatic_default___globals, "list", cpy_r_r20);
        goto CPyL62;
    }
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r21)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = cpy_r_r24 == 2;
    CPy_DECREF(cpy_r_r19);
    if (!cpy_r_r25) goto CPyL53;
    cpy_r_r26 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 258, CPyStatic_default___globals);
        goto CPyL61;
    }
    if (likely(PyList_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 258, CPyStatic_default___globals, "list", cpy_r_r26);
        goto CPyL61;
    }
    cpy_r_r28 = CPyList_GetItemShortBorrow(cpy_r_r27, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 258, CPyStatic_default___globals);
        goto CPyL63;
    }
    if (likely(PyList_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 258, CPyStatic_default___globals, "list", cpy_r_r28);
        goto CPyL63;
    }
    cpy_r_r30 = CPyList_GetItemShortBorrow(cpy_r_r29, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 258, CPyStatic_default___globals);
        goto CPyL63;
    }
    cpy_r_r31 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_r30)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    CPy_DECREF(cpy_r_r27);
    if (!cpy_r_r34) goto CPyL53;
    cpy_r_r35 = ((mypy___types___CallableTypeObject *)cpy_r_signature)->_arg_types;
    cpy_r_r36 = (CPyPtr)&((PyVarObject *)cpy_r_r35)->ob_size;
    cpy_r_r37 = *(int64_t *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 << 1;
    cpy_r_r39 = cpy_r_r38 == 4;
    if (!cpy_r_r39) goto CPyL53;
    cpy_r_r40 = ((mypy___types___CallableTypeObject *)cpy_r_signature)->_variables;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = CPyObject_Size(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 260, CPyStatic_default___globals);
        goto CPyL61;
    }
    cpy_r_r42 = cpy_r_r41 == 2;
    CPyTagged_DECREF(cpy_r_r41);
    if (!cpy_r_r42) goto CPyL53;
    cpy_r_r43 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 261, CPyStatic_default___globals);
        goto CPyL61;
    }
    if (likely(PyList_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 261, CPyStatic_default___globals, "list", cpy_r_r43);
        goto CPyL61;
    }
    cpy_r_r45 = CPyList_GetItemShortBorrow(cpy_r_r44, 2);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 261, CPyStatic_default___globals);
        goto CPyL64;
    }
    if (likely(PyList_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 261, CPyStatic_default___globals, "list", cpy_r_r45);
        goto CPyL64;
    }
    cpy_r_r47 = (CPyPtr)&((PyVarObject *)cpy_r_r46)->ob_size;
    cpy_r_r48 = *(int64_t *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 << 1;
    cpy_r_r50 = cpy_r_r49 == 2;
    CPy_DECREF(cpy_r_r44);
    if (!cpy_r_r50) goto CPyL53;
    cpy_r_r51 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 263, CPyStatic_default___globals);
        goto CPyL61;
    }
    if (likely(PyList_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 263, CPyStatic_default___globals, "list", cpy_r_r51);
        goto CPyL61;
    }
    cpy_r_r53 = CPyList_GetItemShortBorrow(cpy_r_r52, 0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 263, CPyStatic_default___globals);
        goto CPyL65;
    }
    if (likely(PyList_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 263, CPyStatic_default___globals, "list", cpy_r_r53);
        goto CPyL65;
    }
    cpy_r_r55 = CPyList_GetItemShortBorrow(cpy_r_r54, 0);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 263, CPyStatic_default___globals);
        goto CPyL65;
    }
    if (likely(Py_TYPE(cpy_r_r55) == CPyType_nodes___StrExpr))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 263, CPyStatic_default___globals, "mypy.nodes.StrExpr", cpy_r_r55);
        goto CPyL65;
    }
    cpy_r_r57 = ((mypy___nodes___StrExprObject *)cpy_r_r56)->_value;
    CPy_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r52);
    cpy_r_key = cpy_r_r57;
    cpy_r_r58 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 264, CPyStatic_default___globals);
        goto CPyL66;
    }
    if (likely(Py_TYPE(cpy_r_r58) == CPyType_types___TypedDictType))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 264, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_r58);
        goto CPyL66;
    }
    cpy_r_r60 = ((mypy___types___TypedDictTypeObject *)cpy_r_r59)->_items;
    CPy_INCREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = CPyDict_GetWithNone(cpy_r_r60, cpy_r_key);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 264, CPyStatic_default___globals);
        goto CPyL61;
    }
    if (PyObject_TypeCheck(cpy_r_r61, CPyType_types___Type))
        cpy_r_r62 = cpy_r_r61;
    else {
        cpy_r_r62 = NULL;
    }
    if (cpy_r_r62 != NULL) goto __LL4907;
    if (cpy_r_r61 == Py_None)
        cpy_r_r62 = cpy_r_r61;
    else {
        cpy_r_r62 = NULL;
    }
    if (cpy_r_r62 != NULL) goto __LL4907;
    CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 264, CPyStatic_default___globals, "mypy.types.Type or None", cpy_r_r61);
    goto CPyL61;
__LL4907: ;
    cpy_r_value_type = cpy_r_r62;
    cpy_r_r63 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r64 = cpy_r_value_type != cpy_r_r63;
    if (!cpy_r_r64) goto CPyL67;
    cpy_r_r65 = ((mypy___types___CallableTypeObject *)cpy_r_signature)->_variables;
    CPy_INCREF(cpy_r_r65);
    cpy_r_r66 = CPyStatics[9015]; /* 0 */
    cpy_r_r67 = PyObject_GetItem(cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 269, CPyStatic_default___globals);
        goto CPyL68;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r67, CPyType_types___TypeVarLikeType)))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 269, CPyStatic_default___globals, "mypy.types.TypeVarLikeType", cpy_r_r67);
        goto CPyL68;
    }
    cpy_r_tv = cpy_r_r68;
    cpy_r_r69 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r70 = (CPyPtr)&((PyObject *)cpy_r_tv)->ob_type;
    cpy_r_r71 = *(PyObject * *)cpy_r_r70;
    cpy_r_r72 = cpy_r_r71 == cpy_r_r69;
    if (cpy_r_r72) {
        goto CPyL46;
    } else
        goto CPyL69;
CPyL44: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r73 = 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 270, CPyStatic_default___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL46: ;
    if (likely(cpy_r_value_type != Py_None))
        cpy_r_r74 = cpy_r_value_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 271, CPyStatic_default___globals, "mypy.types.Type", cpy_r_value_type);
        goto CPyL70;
    }
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___TypeVarType))
        cpy_r_r75 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 271, CPyStatic_default___globals, "mypy.types.TypeVarType", cpy_r_tv);
        goto CPyL71;
    }
    cpy_r_r76 = PyList_New(2);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 271, CPyStatic_default___globals);
        goto CPyL72;
    }
    cpy_r_r77 = (CPyPtr)&((PyListObject *)cpy_r_r76)->ob_item;
    cpy_r_r78 = *(CPyPtr *)cpy_r_r77;
    *(PyObject * *)cpy_r_r78 = cpy_r_r74;
    cpy_r_r79 = cpy_r_r78 + 8;
    *(PyObject * *)cpy_r_r79 = cpy_r_r75;
    cpy_r_r80 = CPY_INT_TAG;
    cpy_r_r81 = CPY_INT_TAG;
    cpy_r_r82 = 2;
    cpy_r_r83 = 2;
    cpy_r_r84 = CPyDef_typeops___make_simplified_union(cpy_r_r76, cpy_r_r80, cpy_r_r81, cpy_r_r82, cpy_r_r83);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 271, CPyStatic_default___globals);
        goto CPyL61;
    }
    cpy_r_typ = cpy_r_r84;
    cpy_r_r85 = PyList_New(2);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 272, CPyStatic_default___globals);
        goto CPyL73;
    }
    cpy_r_r86 = (CPyPtr)&((PyListObject *)cpy_r_r85)->ob_item;
    cpy_r_r87 = *(CPyPtr *)cpy_r_r86;
    *(PyObject * *)cpy_r_r87 = cpy_r_str_type;
    cpy_r_r88 = cpy_r_r87 + 8;
    CPy_INCREF(cpy_r_typ);
    *(PyObject * *)cpy_r_r88 = cpy_r_typ;
    cpy_r_r89 = NULL;
    cpy_r_r90 = NULL;
    cpy_r_r91 = NULL;
    cpy_r_r92 = NULL;
    cpy_r_r93 = NULL;
    cpy_r_r94 = NULL;
    cpy_r_r95 = CPY_INT_TAG;
    cpy_r_r96 = CPY_INT_TAG;
    cpy_r_r97 = NULL;
    cpy_r_r98 = NULL;
    cpy_r_r99 = NULL;
    cpy_r_r100 = NULL;
    cpy_r_r101 = NULL;
    cpy_r_r102 = NULL;
    cpy_r_r103 = NULL;
    cpy_r_r104 = NULL;
    cpy_r_r105 = NULL;
    cpy_r_r106 = CPyDef_types___CallableType___copy_modified(cpy_r_signature, cpy_r_r85, cpy_r_r89, cpy_r_r90, cpy_r_typ, cpy_r_r91, cpy_r_r92, cpy_r_r93, cpy_r_r94, cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98, cpy_r_r99, cpy_r_r100, cpy_r_r101, cpy_r_r102, cpy_r_r103, cpy_r_r104, cpy_r_r105);
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_signature);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 272, CPyStatic_default___globals);
        goto CPyL58;
    }
    return cpy_r_r106;
CPyL53: ;
    cpy_r_r107 = ((mypy___types___CallableTypeObject *)cpy_r_signature)->_arg_types;
    cpy_r_r108 = CPyList_GetItemShort(cpy_r_r107, 2);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 273, CPyStatic_default___globals);
        goto CPyL61;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r108, CPyType_types___Type)))
        cpy_r_r109 = cpy_r_r108;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 273, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r108);
        goto CPyL61;
    }
    cpy_r_r110 = PyList_New(2);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 273, CPyStatic_default___globals);
        goto CPyL74;
    }
    cpy_r_r111 = (CPyPtr)&((PyListObject *)cpy_r_r110)->ob_item;
    cpy_r_r112 = *(CPyPtr *)cpy_r_r111;
    *(PyObject * *)cpy_r_r112 = cpy_r_str_type;
    cpy_r_r113 = cpy_r_r112 + 8;
    *(PyObject * *)cpy_r_r113 = cpy_r_r109;
    cpy_r_r114 = NULL;
    cpy_r_r115 = NULL;
    cpy_r_r116 = NULL;
    cpy_r_r117 = NULL;
    cpy_r_r118 = NULL;
    cpy_r_r119 = NULL;
    cpy_r_r120 = NULL;
    cpy_r_r121 = CPY_INT_TAG;
    cpy_r_r122 = CPY_INT_TAG;
    cpy_r_r123 = NULL;
    cpy_r_r124 = NULL;
    cpy_r_r125 = NULL;
    cpy_r_r126 = NULL;
    cpy_r_r127 = NULL;
    cpy_r_r128 = NULL;
    cpy_r_r129 = NULL;
    cpy_r_r130 = NULL;
    cpy_r_r131 = NULL;
    cpy_r_r132 = CPyDef_types___CallableType___copy_modified(cpy_r_signature, cpy_r_r110, cpy_r_r114, cpy_r_r115, cpy_r_r116, cpy_r_r117, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124, cpy_r_r125, cpy_r_r126, cpy_r_r127, cpy_r_r128, cpy_r_r129, cpy_r_r130, cpy_r_r131);
    CPy_DECREF(cpy_r_r110);
    CPy_DECREF(cpy_r_signature);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 273, CPyStatic_default___globals);
        goto CPyL58;
    }
    return cpy_r_r132;
CPyL58: ;
    cpy_r_r133 = NULL;
    return cpy_r_r133;
CPyL59: ;
    CPy_DecRef(cpy_r_signature);
    goto CPyL58;
CPyL60: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_r3);
    goto CPyL58;
CPyL61: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    goto CPyL58;
CPyL62: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r19);
    goto CPyL58;
CPyL63: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r27);
    goto CPyL58;
CPyL64: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r44);
    goto CPyL58;
CPyL65: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r52);
    goto CPyL58;
CPyL66: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_key);
    goto CPyL58;
CPyL67: ;
    CPy_DECREF(cpy_r_value_type);
    goto CPyL53;
CPyL68: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_value_type);
    goto CPyL58;
CPyL69: ;
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_str_type);
    CPy_DECREF(cpy_r_value_type);
    CPy_DECREF(cpy_r_tv);
    goto CPyL44;
CPyL70: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_tv);
    goto CPyL58;
CPyL71: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r74);
    goto CPyL58;
CPyL72: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r75);
    goto CPyL58;
CPyL73: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_typ);
    goto CPyL58;
CPyL74: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r109);
    goto CPyL58;
}

PyObject *CPyPy_default___typed_dict_pop_signature_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:typed_dict_pop_signature_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_default___typed_dict_pop_signature_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_signature_callback", 246, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___typed_dict_pop_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
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
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
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
    PyObject *cpy_r_keys;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_value_types;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    CPyPtr cpy_r_r51;
    int64_t cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_value_type;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyTagged cpy_r_r92;
    CPyTagged cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyTagged cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    CPyPtr cpy_r_r100;
    int64_t cpy_r_r101;
    CPyTagged cpy_r_r102;
    char cpy_r_r103;
    CPyTagged cpy_r_r104;
    CPyTagged cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    CPyPtr cpy_r_r111;
    int64_t cpy_r_r112;
    CPyTagged cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    CPyPtr cpy_r_r119;
    int64_t cpy_r_r120;
    CPyTagged cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    CPyPtr cpy_r_r127;
    int64_t cpy_r_r128;
    CPyTagged cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    int32_t cpy_r_r139;
    char cpy_r_r140;
    CPyTagged cpy_r_r141;
    CPyTagged cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    size_t __tmp4908;
    size_t __tmp4910;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 279, CPyStatic_default___globals);
        goto CPyL106;
    }
    cpy_r_r1 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL103;
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 280, CPyStatic_default___globals);
        goto CPyL106;
    }
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 280, CPyStatic_default___globals, "list", cpy_r_r5);
        goto CPyL106;
    }
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r9 >= (Py_ssize_t)2;
    if (!cpy_r_r10) goto CPyL103;
    cpy_r_r11 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 281, CPyStatic_default___globals);
        goto CPyL106;
    }
    if (likely(PyList_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 281, CPyStatic_default___globals, "list", cpy_r_r11);
        goto CPyL106;
    }
    cpy_r_r13 = CPyList_GetItemShortBorrow(cpy_r_r12, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 281, CPyStatic_default___globals);
        goto CPyL107;
    }
    if (likely(PyList_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 281, CPyStatic_default___globals, "list", cpy_r_r13);
        goto CPyL107;
    }
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = cpy_r_r17 == 2;
    CPy_DECREF(cpy_r_r12);
    if (!cpy_r_r18) goto CPyL103;
    cpy_r_r19 = CPySequenceTuple_GetItem(cpy_r_ctx, 12);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 283, CPyStatic_default___globals);
        goto CPyL106;
    }
    if (likely(PyList_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 283, CPyStatic_default___globals, "list", cpy_r_r19);
        goto CPyL106;
    }
    cpy_r_r21 = CPyList_GetItemShortBorrow(cpy_r_r20, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 283, CPyStatic_default___globals);
        goto CPyL108;
    }
    if (likely(PyList_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 283, CPyStatic_default___globals, "list", cpy_r_r21);
        goto CPyL108;
    }
    cpy_r_r23 = CPyList_GetItemShort(cpy_r_r22, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 283, CPyStatic_default___globals);
        goto CPyL108;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_nodes___Expression)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 283, CPyStatic_default___globals, "mypy.nodes.Expression", cpy_r_r23);
        goto CPyL108;
    }
    CPy_DECREF(cpy_r_r20);
    cpy_r_r25 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 283, CPyStatic_default___globals);
        goto CPyL109;
    }
    if (likely(PyList_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 283, CPyStatic_default___globals, "list", cpy_r_r25);
        goto CPyL109;
    }
    cpy_r_r27 = CPyList_GetItemShortBorrow(cpy_r_r26, 0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 283, CPyStatic_default___globals);
        goto CPyL110;
    }
    if (likely(PyList_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 283, CPyStatic_default___globals, "list", cpy_r_r27);
        goto CPyL110;
    }
    cpy_r_r29 = CPyList_GetItemShort(cpy_r_r28, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 283, CPyStatic_default___globals);
        goto CPyL110;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r29, CPyType_types___Type)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 283, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r29);
        goto CPyL110;
    }
    CPy_DECREF(cpy_r_r26);
    cpy_r_r31 = CPyDef_typeops___try_getting_str_literals(cpy_r_r24, cpy_r_r30);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 283, CPyStatic_default___globals);
        goto CPyL106;
    }
    cpy_r_keys = cpy_r_r31;
    cpy_r_r32 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r33 = cpy_r_keys == cpy_r_r32;
    if (cpy_r_r33) {
        goto CPyL111;
    } else
        goto CPyL37;
CPyL24: ;
    cpy_r_r34 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 285, CPyStatic_default___globals);
        goto CPyL106;
    }
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_checker___TypeChecker))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 285, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r34);
        goto CPyL106;
    }
    cpy_r_r36 = CPyStatic_message_registry___TYPEDDICT_KEY_MUST_BE_STRING_LITERAL;
    if (unlikely(cpy_r_r36 == NULL)) {
        goto CPyL112;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPEDDICT_KEY_MUST_BE_STRING_LITERAL\" was not set");
    cpy_r_r37 = 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 286, CPyStatic_default___globals);
        goto CPyL106;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r38 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 287, CPyStatic_default___globals);
        goto CPyL113;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r38, CPyType_nodes___Context)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 287, CPyStatic_default___globals, "mypy.nodes.Context", cpy_r_r38);
        goto CPyL113;
    }
    cpy_r_r40 = CPyStatic_errorcodes___LITERAL_REQ;
    if (unlikely(cpy_r_r40 == NULL)) {
        goto CPyL114;
    } else
        goto CPyL34;
CPyL32: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"LITERAL_REQ\" was not set");
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 288, CPyStatic_default___globals);
        goto CPyL106;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r42 = CPY_GET_METHOD_TRAIT(cpy_r_r35, CPyType_plugin___CheckerPluginInterface, 1, mypy___plugin___CheckerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *))(cpy_r_r35, cpy_r_r36, cpy_r_r39, cpy_r_r40); /* fail */
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 285, CPyStatic_default___globals);
        goto CPyL106;
    }
    cpy_r_r43 = NULL;
    cpy_r_r44 = NULL;
    cpy_r_r45 = CPY_INT_TAG;
    cpy_r_r46 = CPY_INT_TAG;
    cpy_r_r47 = CPyDef_types___AnyType(10, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 290, CPyStatic_default___globals);
        goto CPyL106;
    }
    return cpy_r_r47;
CPyL37: ;
    cpy_r_r48 = PyList_New(0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 292, CPyStatic_default___globals);
        goto CPyL115;
    }
    cpy_r_value_types = cpy_r_r48;
    if (likely(cpy_r_keys != Py_None))
        cpy_r_r49 = cpy_r_keys;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 293, CPyStatic_default___globals, "list", cpy_r_keys);
        goto CPyL116;
    }
    cpy_r_r50 = 0;
CPyL40: ;
    cpy_r_r51 = (CPyPtr)&((PyVarObject *)cpy_r_r49)->ob_size;
    cpy_r_r52 = *(int64_t *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 << 1;
    cpy_r_r54 = (Py_ssize_t)cpy_r_r50 < (Py_ssize_t)cpy_r_r53;
    if (!cpy_r_r54) goto CPyL117;
    cpy_r_r55 = CPyList_GetItemUnsafe(cpy_r_r49, cpy_r_r50);
    if (likely(PyUnicode_Check(cpy_r_r55)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 293, CPyStatic_default___globals, "str", cpy_r_r55);
        goto CPyL118;
    }
    cpy_r_key = cpy_r_r56;
    cpy_r_r57 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 294, CPyStatic_default___globals);
        goto CPyL119;
    }
    if (likely(Py_TYPE(cpy_r_r57) == CPyType_types___TypedDictType))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 294, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_r57);
        goto CPyL119;
    }
    cpy_r_r59 = ((mypy___types___TypedDictTypeObject *)cpy_r_r58)->_required_keys;
    CPy_INCREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = PySet_Contains(cpy_r_r59, cpy_r_key);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 294, CPyStatic_default___globals);
        goto CPyL119;
    }
    cpy_r_r62 = cpy_r_r60;
    if (!cpy_r_r62) goto CPyL54;
    cpy_r_r63 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 295, CPyStatic_default___globals);
        goto CPyL119;
    }
    if (likely(Py_TYPE(cpy_r_r63) == CPyType_checker___TypeChecker))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 295, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r63);
        goto CPyL119;
    }
    __tmp4908 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r64)->vtable, 0);
    cpy_r_r65 = *(PyObject * *)((char *)cpy_r_r64 + __tmp4908);
    if (unlikely(cpy_r_r65 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'msg' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r65);
    }
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 295, CPyStatic_default___globals);
        goto CPyL119;
    }
CPyL49: ;
    cpy_r_r66 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 295, CPyStatic_default___globals);
        goto CPyL120;
    }
    if (likely(Py_TYPE(cpy_r_r66) == CPyType_types___TypedDictType))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 295, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_r66);
        goto CPyL120;
    }
    cpy_r_r68 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 295, CPyStatic_default___globals);
        goto CPyL121;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r68, CPyType_nodes___Context)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 295, CPyStatic_default___globals, "mypy.nodes.Context", cpy_r_r68);
        goto CPyL121;
    }
    cpy_r_r70 = CPyDef_messages___MessageBuilder___typeddict_key_cannot_be_deleted(cpy_r_r65, cpy_r_r67, cpy_r_key, cpy_r_r69);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 295, CPyStatic_default___globals);
        goto CPyL119;
    }
CPyL54: ;
    cpy_r_r71 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 297, CPyStatic_default___globals);
        goto CPyL119;
    }
    if (likely(Py_TYPE(cpy_r_r71) == CPyType_types___TypedDictType))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 297, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_r71);
        goto CPyL119;
    }
    cpy_r_r73 = ((mypy___types___TypedDictTypeObject *)cpy_r_r72)->_items;
    CPy_INCREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = CPyDict_GetWithNone(cpy_r_r73, cpy_r_key);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 297, CPyStatic_default___globals);
        goto CPyL119;
    }
    if (PyObject_TypeCheck(cpy_r_r74, CPyType_types___Type))
        cpy_r_r75 = cpy_r_r74;
    else {
        cpy_r_r75 = NULL;
    }
    if (cpy_r_r75 != NULL) goto __LL4909;
    if (cpy_r_r74 == Py_None)
        cpy_r_r75 = cpy_r_r74;
    else {
        cpy_r_r75 = NULL;
    }
    if (cpy_r_r75 != NULL) goto __LL4909;
    CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 297, CPyStatic_default___globals, "mypy.types.Type or None", cpy_r_r74);
    goto CPyL119;
__LL4909: ;
    cpy_r_value_type = cpy_r_r75;
    cpy_r_r76 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r77 = cpy_r_value_type != cpy_r_r76;
    if (cpy_r_r77) {
        goto CPyL122;
    } else
        goto CPyL123;
CPyL59: ;
    if (likely(cpy_r_value_type != Py_None))
        cpy_r_r78 = cpy_r_value_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 299, CPyStatic_default___globals, "mypy.types.Type", cpy_r_value_type);
        goto CPyL118;
    }
    cpy_r_r79 = PyList_Append(cpy_r_value_types, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r80 = cpy_r_r79 >= 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 299, CPyStatic_default___globals);
        goto CPyL118;
    } else
        goto CPyL71;
CPyL61: ;
    cpy_r_r81 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 301, CPyStatic_default___globals);
        goto CPyL124;
    }
    if (likely(Py_TYPE(cpy_r_r81) == CPyType_checker___TypeChecker))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 301, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r81);
        goto CPyL124;
    }
    __tmp4910 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r82)->vtable, 0);
    cpy_r_r83 = *(PyObject * *)((char *)cpy_r_r82 + __tmp4910);
    if (unlikely(cpy_r_r83 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'msg' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r83);
    }
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 301, CPyStatic_default___globals);
        goto CPyL124;
    }
CPyL64: ;
    cpy_r_r84 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 301, CPyStatic_default___globals);
        goto CPyL125;
    }
    if (likely(Py_TYPE(cpy_r_r84) == CPyType_types___TypedDictType))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 301, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_r84);
        goto CPyL125;
    }
    cpy_r_r86 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 301, CPyStatic_default___globals);
        goto CPyL126;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r86, CPyType_nodes___Context)))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 301, CPyStatic_default___globals, "mypy.nodes.Context", cpy_r_r86);
        goto CPyL126;
    }
    cpy_r_r88 = 2;
    cpy_r_r89 = CPyDef_messages___MessageBuilder___typeddict_key_not_found(cpy_r_r83, cpy_r_r85, cpy_r_key, cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r89 == 2)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 301, CPyStatic_default___globals);
        goto CPyL106;
    }
    cpy_r_r90 = NULL;
    cpy_r_r91 = NULL;
    cpy_r_r92 = CPY_INT_TAG;
    cpy_r_r93 = CPY_INT_TAG;
    cpy_r_r94 = CPyDef_types___AnyType(10, cpy_r_r90, cpy_r_r91, cpy_r_r92, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 302, CPyStatic_default___globals);
        goto CPyL106;
    }
    return cpy_r_r94;
CPyL71: ;
    cpy_r_r95 = cpy_r_r50 + 2;
    cpy_r_r50 = cpy_r_r95;
    goto CPyL40;
CPyL72: ;
    cpy_r_r96 = CPySequenceTuple_GetItem(cpy_r_ctx, 12);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 304, CPyStatic_default___globals);
        goto CPyL116;
    }
    if (likely(PyList_Check(cpy_r_r96)))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 304, CPyStatic_default___globals, "list", cpy_r_r96);
        goto CPyL116;
    }
    cpy_r_r98 = CPyList_GetItemShortBorrow(cpy_r_r97, 2);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 304, CPyStatic_default___globals);
        goto CPyL127;
    }
    if (likely(PyList_Check(cpy_r_r98)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 304, CPyStatic_default___globals, "list", cpy_r_r98);
        goto CPyL127;
    }
    cpy_r_r100 = (CPyPtr)&((PyVarObject *)cpy_r_r99)->ob_size;
    cpy_r_r101 = *(int64_t *)cpy_r_r100;
    cpy_r_r102 = cpy_r_r101 << 1;
    cpy_r_r103 = cpy_r_r102 == 0;
    CPy_DECREF(cpy_r_r97);
    if (!cpy_r_r103) goto CPyL79;
    cpy_r_r104 = CPY_INT_TAG;
    cpy_r_r105 = CPY_INT_TAG;
    cpy_r_r106 = 2;
    cpy_r_r107 = 2;
    cpy_r_r108 = CPyDef_typeops___make_simplified_union(cpy_r_value_types, cpy_r_r104, cpy_r_r105, cpy_r_r106, cpy_r_r107);
    CPy_DECREF(cpy_r_value_types);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 305, CPyStatic_default___globals);
        goto CPyL106;
    }
    return cpy_r_r108;
CPyL79: ;
    cpy_r_r109 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 306, CPyStatic_default___globals);
        goto CPyL116;
    }
    if (likely(PyList_Check(cpy_r_r109)))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 306, CPyStatic_default___globals, "list", cpy_r_r109);
        goto CPyL116;
    }
    cpy_r_r111 = (CPyPtr)&((PyVarObject *)cpy_r_r110)->ob_size;
    cpy_r_r112 = *(int64_t *)cpy_r_r111;
    CPy_DECREF(cpy_r_r110);
    cpy_r_r113 = cpy_r_r112 << 1;
    cpy_r_r114 = cpy_r_r113 == 4;
    if (!cpy_r_r114) goto CPyL128;
    cpy_r_r115 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 306, CPyStatic_default___globals);
        goto CPyL116;
    }
    if (likely(PyList_Check(cpy_r_r115)))
        cpy_r_r116 = cpy_r_r115;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 306, CPyStatic_default___globals, "list", cpy_r_r115);
        goto CPyL116;
    }
    cpy_r_r117 = CPyList_GetItemShortBorrow(cpy_r_r116, 2);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 306, CPyStatic_default___globals);
        goto CPyL129;
    }
    if (likely(PyList_Check(cpy_r_r117)))
        cpy_r_r118 = cpy_r_r117;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 306, CPyStatic_default___globals, "list", cpy_r_r117);
        goto CPyL129;
    }
    cpy_r_r119 = (CPyPtr)&((PyVarObject *)cpy_r_r118)->ob_size;
    cpy_r_r120 = *(int64_t *)cpy_r_r119;
    cpy_r_r121 = cpy_r_r120 << 1;
    cpy_r_r122 = cpy_r_r121 == 2;
    CPy_DECREF(cpy_r_r116);
    if (!cpy_r_r122) goto CPyL128;
    cpy_r_r123 = CPySequenceTuple_GetItem(cpy_r_ctx, 12);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 306, CPyStatic_default___globals);
        goto CPyL116;
    }
    if (likely(PyList_Check(cpy_r_r123)))
        cpy_r_r124 = cpy_r_r123;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 306, CPyStatic_default___globals, "list", cpy_r_r123);
        goto CPyL116;
    }
    cpy_r_r125 = CPyList_GetItemShortBorrow(cpy_r_r124, 2);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 306, CPyStatic_default___globals);
        goto CPyL130;
    }
    if (likely(PyList_Check(cpy_r_r125)))
        cpy_r_r126 = cpy_r_r125;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 306, CPyStatic_default___globals, "list", cpy_r_r125);
        goto CPyL130;
    }
    cpy_r_r127 = (CPyPtr)&((PyVarObject *)cpy_r_r126)->ob_size;
    cpy_r_r128 = *(int64_t *)cpy_r_r127;
    cpy_r_r129 = cpy_r_r128 << 1;
    cpy_r_r130 = cpy_r_r129 == 2;
    CPy_DECREF(cpy_r_r124);
    if (!cpy_r_r130) goto CPyL128;
    cpy_r_r131 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 307, CPyStatic_default___globals);
        goto CPyL116;
    }
    if (likely(PyList_Check(cpy_r_r131)))
        cpy_r_r132 = cpy_r_r131;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 307, CPyStatic_default___globals, "list", cpy_r_r131);
        goto CPyL116;
    }
    cpy_r_r133 = CPyList_GetItemShortBorrow(cpy_r_r132, 2);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 307, CPyStatic_default___globals);
        goto CPyL131;
    }
    if (likely(PyList_Check(cpy_r_r133)))
        cpy_r_r134 = cpy_r_r133;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 307, CPyStatic_default___globals, "list", cpy_r_r133);
        goto CPyL131;
    }
    cpy_r_r135 = CPyList_GetItemShort(cpy_r_r134, 0);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 307, CPyStatic_default___globals);
        goto CPyL131;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r135, CPyType_types___Type)))
        cpy_r_r136 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 307, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r135);
        goto CPyL131;
    }
    CPy_DECREF(cpy_r_r132);
    cpy_r_r137 = PyList_New(0);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 307, CPyStatic_default___globals);
        goto CPyL132;
    }
    cpy_r_r138 = CPyList_Extend(cpy_r_r137, cpy_r_value_types);
    CPy_DECREF(cpy_r_value_types);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 307, CPyStatic_default___globals);
        goto CPyL133;
    } else
        goto CPyL134;
CPyL100: ;
    cpy_r_r139 = PyList_Append(cpy_r_r137, cpy_r_r136);
    CPy_DECREF(cpy_r_r136);
    cpy_r_r140 = cpy_r_r139 >= 0;
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 307, CPyStatic_default___globals);
        goto CPyL135;
    }
    cpy_r_r141 = CPY_INT_TAG;
    cpy_r_r142 = CPY_INT_TAG;
    cpy_r_r143 = 2;
    cpy_r_r144 = 2;
    cpy_r_r145 = CPyDef_typeops___make_simplified_union(cpy_r_r137, cpy_r_r141, cpy_r_r142, cpy_r_r143, cpy_r_r144);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 307, CPyStatic_default___globals);
        goto CPyL106;
    }
    return cpy_r_r145;
CPyL103: ;
    cpy_r_r146 = CPySequenceTuple_GetItem(cpy_r_ctx, 10);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 308, CPyStatic_default___globals);
        goto CPyL106;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r146, CPyType_types___Type)))
        cpy_r_r147 = cpy_r_r146;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 308, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r146);
        goto CPyL106;
    }
    return cpy_r_r147;
CPyL106: ;
    cpy_r_r148 = NULL;
    return cpy_r_r148;
CPyL107: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL106;
CPyL108: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL106;
CPyL109: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL106;
CPyL110: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r26);
    goto CPyL106;
CPyL111: ;
    CPy_DECREF(cpy_r_keys);
    goto CPyL24;
CPyL112: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL27;
CPyL113: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL106;
CPyL114: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r39);
    goto CPyL32;
CPyL115: ;
    CPy_DecRef(cpy_r_keys);
    goto CPyL106;
CPyL116: ;
    CPy_DecRef(cpy_r_value_types);
    goto CPyL106;
CPyL117: ;
    CPy_DECREF(cpy_r_r49);
    goto CPyL72;
CPyL118: ;
    CPy_DecRef(cpy_r_value_types);
    CPy_DecRef(cpy_r_r49);
    goto CPyL106;
CPyL119: ;
    CPy_DecRef(cpy_r_value_types);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_key);
    goto CPyL106;
CPyL120: ;
    CPy_DecRef(cpy_r_value_types);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r65);
    goto CPyL106;
CPyL121: ;
    CPy_DecRef(cpy_r_value_types);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r67);
    goto CPyL106;
CPyL122: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL59;
CPyL123: ;
    CPy_DECREF(cpy_r_value_types);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_value_type);
    goto CPyL61;
CPyL124: ;
    CPy_DecRef(cpy_r_key);
    goto CPyL106;
CPyL125: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r83);
    goto CPyL106;
CPyL126: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r85);
    goto CPyL106;
CPyL127: ;
    CPy_DecRef(cpy_r_value_types);
    CPy_DecRef(cpy_r_r97);
    goto CPyL106;
CPyL128: ;
    CPy_DECREF(cpy_r_value_types);
    goto CPyL103;
CPyL129: ;
    CPy_DecRef(cpy_r_value_types);
    CPy_DecRef(cpy_r_r116);
    goto CPyL106;
CPyL130: ;
    CPy_DecRef(cpy_r_value_types);
    CPy_DecRef(cpy_r_r124);
    goto CPyL106;
CPyL131: ;
    CPy_DecRef(cpy_r_value_types);
    CPy_DecRef(cpy_r_r132);
    goto CPyL106;
CPyL132: ;
    CPy_DecRef(cpy_r_value_types);
    CPy_DecRef(cpy_r_r136);
    goto CPyL106;
CPyL133: ;
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r137);
    goto CPyL106;
CPyL134: ;
    CPy_DECREF(cpy_r_r138);
    goto CPyL100;
CPyL135: ;
    CPy_DecRef(cpy_r_r137);
    goto CPyL106;
}

PyObject *CPyPy_default___typed_dict_pop_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:typed_dict_pop_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_default___typed_dict_pop_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_pop_callback", 276, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___typed_dict_setdefault_signature_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_signature;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_str_type;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    int64_t cpy_r_r37;
    CPyTagged cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    int64_t cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_value_type;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyPtr cpy_r_r64;
    CPyPtr cpy_r_r65;
    CPyPtr cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyTagged cpy_r_r74;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
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
    CPyPtr cpy_r_r90;
    CPyPtr cpy_r_r91;
    CPyPtr cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    CPyTagged cpy_r_r100;
    CPyTagged cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 317, CPyStatic_default___globals);
        goto CPyL48;
    }
    if (likely(Py_TYPE(cpy_r_r0) == CPyType_types___CallableType))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 317, CPyStatic_default___globals, "mypy.types.CallableType", cpy_r_r0);
        goto CPyL48;
    }
    cpy_r_signature = cpy_r_r1;
    cpy_r_r2 = CPySequenceTuple_GetItem(cpy_r_ctx, 8);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 318, CPyStatic_default___globals);
        goto CPyL49;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_checker___TypeChecker))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 318, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r2);
        goto CPyL49;
    }
    cpy_r_r4 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 318, CPyStatic_default___globals);
        goto CPyL50;
    }
    cpy_r_r6 = CPY_GET_METHOD_TRAIT(cpy_r_r3, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r3, cpy_r_r4, cpy_r_r5); /* named_generic_type */
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 318, CPyStatic_default___globals);
        goto CPyL49;
    }
    cpy_r_str_type = cpy_r_r6;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 320, CPyStatic_default___globals);
        goto CPyL51;
    }
    cpy_r_r8 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_r7)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    CPy_DECREF(cpy_r_r7);
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL43;
    cpy_r_r12 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 321, CPyStatic_default___globals);
        goto CPyL51;
    }
    if (likely(PyList_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 321, CPyStatic_default___globals, "list", cpy_r_r12);
        goto CPyL51;
    }
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = cpy_r_r16 == 4;
    if (!cpy_r_r17) goto CPyL43;
    cpy_r_r18 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 322, CPyStatic_default___globals);
        goto CPyL51;
    }
    if (likely(PyList_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 322, CPyStatic_default___globals, "list", cpy_r_r18);
        goto CPyL51;
    }
    cpy_r_r20 = CPyList_GetItemShortBorrow(cpy_r_r19, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 322, CPyStatic_default___globals);
        goto CPyL52;
    }
    if (likely(PyList_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 322, CPyStatic_default___globals, "list", cpy_r_r20);
        goto CPyL52;
    }
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r21)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = cpy_r_r24 == 2;
    CPy_DECREF(cpy_r_r19);
    if (!cpy_r_r25) goto CPyL43;
    cpy_r_r26 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 323, CPyStatic_default___globals);
        goto CPyL51;
    }
    if (likely(PyList_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 323, CPyStatic_default___globals, "list", cpy_r_r26);
        goto CPyL51;
    }
    cpy_r_r28 = CPyList_GetItemShortBorrow(cpy_r_r27, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 323, CPyStatic_default___globals);
        goto CPyL53;
    }
    if (likely(PyList_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 323, CPyStatic_default___globals, "list", cpy_r_r28);
        goto CPyL53;
    }
    cpy_r_r30 = CPyList_GetItemShortBorrow(cpy_r_r29, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 323, CPyStatic_default___globals);
        goto CPyL53;
    }
    cpy_r_r31 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_r30)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    CPy_DECREF(cpy_r_r27);
    if (!cpy_r_r34) goto CPyL43;
    cpy_r_r35 = ((mypy___types___CallableTypeObject *)cpy_r_signature)->_arg_types;
    cpy_r_r36 = (CPyPtr)&((PyVarObject *)cpy_r_r35)->ob_size;
    cpy_r_r37 = *(int64_t *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 << 1;
    cpy_r_r39 = cpy_r_r38 == 4;
    if (!cpy_r_r39) goto CPyL43;
    cpy_r_r40 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 325, CPyStatic_default___globals);
        goto CPyL51;
    }
    if (likely(PyList_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 325, CPyStatic_default___globals, "list", cpy_r_r40);
        goto CPyL51;
    }
    cpy_r_r42 = CPyList_GetItemShortBorrow(cpy_r_r41, 2);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 325, CPyStatic_default___globals);
        goto CPyL54;
    }
    if (likely(PyList_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 325, CPyStatic_default___globals, "list", cpy_r_r42);
        goto CPyL54;
    }
    cpy_r_r44 = (CPyPtr)&((PyVarObject *)cpy_r_r43)->ob_size;
    cpy_r_r45 = *(int64_t *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 << 1;
    cpy_r_r47 = cpy_r_r46 == 2;
    CPy_DECREF(cpy_r_r41);
    if (!cpy_r_r47) goto CPyL43;
    cpy_r_r48 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 327, CPyStatic_default___globals);
        goto CPyL51;
    }
    if (likely(PyList_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 327, CPyStatic_default___globals, "list", cpy_r_r48);
        goto CPyL51;
    }
    cpy_r_r50 = CPyList_GetItemShortBorrow(cpy_r_r49, 0);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 327, CPyStatic_default___globals);
        goto CPyL55;
    }
    if (likely(PyList_Check(cpy_r_r50)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 327, CPyStatic_default___globals, "list", cpy_r_r50);
        goto CPyL55;
    }
    cpy_r_r52 = CPyList_GetItemShortBorrow(cpy_r_r51, 0);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 327, CPyStatic_default___globals);
        goto CPyL55;
    }
    if (likely(Py_TYPE(cpy_r_r52) == CPyType_nodes___StrExpr))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 327, CPyStatic_default___globals, "mypy.nodes.StrExpr", cpy_r_r52);
        goto CPyL55;
    }
    cpy_r_r54 = ((mypy___nodes___StrExprObject *)cpy_r_r53)->_value;
    CPy_INCREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r49);
    cpy_r_key = cpy_r_r54;
    cpy_r_r55 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 328, CPyStatic_default___globals);
        goto CPyL56;
    }
    if (likely(Py_TYPE(cpy_r_r55) == CPyType_types___TypedDictType))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 328, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_r55);
        goto CPyL56;
    }
    cpy_r_r57 = ((mypy___types___TypedDictTypeObject *)cpy_r_r56)->_items;
    CPy_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r58 = CPyDict_GetWithNone(cpy_r_r57, cpy_r_key);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 328, CPyStatic_default___globals);
        goto CPyL51;
    }
    if (PyObject_TypeCheck(cpy_r_r58, CPyType_types___Type))
        cpy_r_r59 = cpy_r_r58;
    else {
        cpy_r_r59 = NULL;
    }
    if (cpy_r_r59 != NULL) goto __LL4911;
    if (cpy_r_r58 == Py_None)
        cpy_r_r59 = cpy_r_r58;
    else {
        cpy_r_r59 = NULL;
    }
    if (cpy_r_r59 != NULL) goto __LL4911;
    CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 328, CPyStatic_default___globals, "mypy.types.Type or None", cpy_r_r58);
    goto CPyL51;
__LL4911: ;
    cpy_r_value_type = cpy_r_r59;
    cpy_r_r60 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r61 = cpy_r_value_type != cpy_r_r60;
    if (!cpy_r_r61) goto CPyL57;
    if (likely(cpy_r_value_type != Py_None))
        cpy_r_r62 = cpy_r_value_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 330, CPyStatic_default___globals, "mypy.types.Type", cpy_r_value_type);
        goto CPyL51;
    }
    cpy_r_r63 = PyList_New(2);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 330, CPyStatic_default___globals);
        goto CPyL58;
    }
    cpy_r_r64 = (CPyPtr)&((PyListObject *)cpy_r_r63)->ob_item;
    cpy_r_r65 = *(CPyPtr *)cpy_r_r64;
    *(PyObject * *)cpy_r_r65 = cpy_r_str_type;
    cpy_r_r66 = cpy_r_r65 + 8;
    *(PyObject * *)cpy_r_r66 = cpy_r_r62;
    cpy_r_r67 = NULL;
    cpy_r_r68 = NULL;
    cpy_r_r69 = NULL;
    cpy_r_r70 = NULL;
    cpy_r_r71 = NULL;
    cpy_r_r72 = NULL;
    cpy_r_r73 = NULL;
    cpy_r_r74 = CPY_INT_TAG;
    cpy_r_r75 = CPY_INT_TAG;
    cpy_r_r76 = NULL;
    cpy_r_r77 = NULL;
    cpy_r_r78 = NULL;
    cpy_r_r79 = NULL;
    cpy_r_r80 = NULL;
    cpy_r_r81 = NULL;
    cpy_r_r82 = NULL;
    cpy_r_r83 = NULL;
    cpy_r_r84 = NULL;
    cpy_r_r85 = CPyDef_types___CallableType___copy_modified(cpy_r_signature, cpy_r_r63, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_r71, cpy_r_r72, cpy_r_r73, cpy_r_r74, cpy_r_r75, cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r82, cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_signature);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 330, CPyStatic_default___globals);
        goto CPyL48;
    }
    return cpy_r_r85;
CPyL43: ;
    cpy_r_r86 = ((mypy___types___CallableTypeObject *)cpy_r_signature)->_arg_types;
    cpy_r_r87 = CPyList_GetItemShort(cpy_r_r86, 2);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 331, CPyStatic_default___globals);
        goto CPyL51;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r87, CPyType_types___Type)))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 331, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r87);
        goto CPyL51;
    }
    cpy_r_r89 = PyList_New(2);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 331, CPyStatic_default___globals);
        goto CPyL59;
    }
    cpy_r_r90 = (CPyPtr)&((PyListObject *)cpy_r_r89)->ob_item;
    cpy_r_r91 = *(CPyPtr *)cpy_r_r90;
    *(PyObject * *)cpy_r_r91 = cpy_r_str_type;
    cpy_r_r92 = cpy_r_r91 + 8;
    *(PyObject * *)cpy_r_r92 = cpy_r_r88;
    cpy_r_r93 = NULL;
    cpy_r_r94 = NULL;
    cpy_r_r95 = NULL;
    cpy_r_r96 = NULL;
    cpy_r_r97 = NULL;
    cpy_r_r98 = NULL;
    cpy_r_r99 = NULL;
    cpy_r_r100 = CPY_INT_TAG;
    cpy_r_r101 = CPY_INT_TAG;
    cpy_r_r102 = NULL;
    cpy_r_r103 = NULL;
    cpy_r_r104 = NULL;
    cpy_r_r105 = NULL;
    cpy_r_r106 = NULL;
    cpy_r_r107 = NULL;
    cpy_r_r108 = NULL;
    cpy_r_r109 = NULL;
    cpy_r_r110 = NULL;
    cpy_r_r111 = CPyDef_types___CallableType___copy_modified(cpy_r_signature, cpy_r_r89, cpy_r_r93, cpy_r_r94, cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98, cpy_r_r99, cpy_r_r100, cpy_r_r101, cpy_r_r102, cpy_r_r103, cpy_r_r104, cpy_r_r105, cpy_r_r106, cpy_r_r107, cpy_r_r108, cpy_r_r109, cpy_r_r110);
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_signature);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 331, CPyStatic_default___globals);
        goto CPyL48;
    }
    return cpy_r_r111;
CPyL48: ;
    cpy_r_r112 = NULL;
    return cpy_r_r112;
CPyL49: ;
    CPy_DecRef(cpy_r_signature);
    goto CPyL48;
CPyL50: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_r3);
    goto CPyL48;
CPyL51: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    goto CPyL48;
CPyL52: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r19);
    goto CPyL48;
CPyL53: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r27);
    goto CPyL48;
CPyL54: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r41);
    goto CPyL48;
CPyL55: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r49);
    goto CPyL48;
CPyL56: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_key);
    goto CPyL48;
CPyL57: ;
    CPy_DECREF(cpy_r_value_type);
    goto CPyL43;
CPyL58: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r62);
    goto CPyL48;
CPyL59: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r88);
    goto CPyL48;
}

PyObject *CPyPy_default___typed_dict_setdefault_signature_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:typed_dict_setdefault_signature_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_default___typed_dict_setdefault_signature_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_signature_callback", 311, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___typed_dict_setdefault_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
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
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
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
    PyObject *cpy_r_keys;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_default_type;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_value_types;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyPtr cpy_r_r65;
    int64_t cpy_r_r66;
    CPyTagged cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_value_type;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    CPyTagged cpy_r_r89;
    CPyTagged cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyTagged cpy_r_r110;
    CPyTagged cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    int32_t cpy_r_r114;
    char cpy_r_r115;
    CPyTagged cpy_r_r116;
    CPyTagged cpy_r_r117;
    CPyTagged cpy_r_r118;
    char cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    size_t __tmp4913;
    size_t __tmp4914;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 337, CPyStatic_default___globals);
        goto CPyL88;
    }
    cpy_r_r1 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL85;
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 338, CPyStatic_default___globals);
        goto CPyL88;
    }
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 338, CPyStatic_default___globals, "list", cpy_r_r5);
        goto CPyL88;
    }
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = cpy_r_r9 == 4;
    if (!cpy_r_r10) goto CPyL85;
    cpy_r_r11 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 339, CPyStatic_default___globals);
        goto CPyL88;
    }
    if (likely(PyList_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 339, CPyStatic_default___globals, "list", cpy_r_r11);
        goto CPyL88;
    }
    cpy_r_r13 = CPyList_GetItemShortBorrow(cpy_r_r12, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 339, CPyStatic_default___globals);
        goto CPyL89;
    }
    if (likely(PyList_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 339, CPyStatic_default___globals, "list", cpy_r_r13);
        goto CPyL89;
    }
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = cpy_r_r17 == 2;
    CPy_DECREF(cpy_r_r12);
    if (!cpy_r_r18) goto CPyL85;
    cpy_r_r19 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 340, CPyStatic_default___globals);
        goto CPyL88;
    }
    if (likely(PyList_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 340, CPyStatic_default___globals, "list", cpy_r_r19);
        goto CPyL88;
    }
    cpy_r_r21 = CPyList_GetItemShortBorrow(cpy_r_r20, 2);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 340, CPyStatic_default___globals);
        goto CPyL90;
    }
    if (likely(PyList_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 340, CPyStatic_default___globals, "list", cpy_r_r21);
        goto CPyL90;
    }
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r22)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = cpy_r_r25 == 2;
    CPy_DECREF(cpy_r_r20);
    if (!cpy_r_r26) goto CPyL85;
    cpy_r_r27 = CPySequenceTuple_GetItem(cpy_r_ctx, 12);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 342, CPyStatic_default___globals);
        goto CPyL88;
    }
    if (likely(PyList_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 342, CPyStatic_default___globals, "list", cpy_r_r27);
        goto CPyL88;
    }
    cpy_r_r29 = CPyList_GetItemShortBorrow(cpy_r_r28, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 342, CPyStatic_default___globals);
        goto CPyL91;
    }
    if (likely(PyList_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 342, CPyStatic_default___globals, "list", cpy_r_r29);
        goto CPyL91;
    }
    cpy_r_r31 = CPyList_GetItemShort(cpy_r_r30, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 342, CPyStatic_default___globals);
        goto CPyL91;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r31, CPyType_nodes___Expression)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 342, CPyStatic_default___globals, "mypy.nodes.Expression", cpy_r_r31);
        goto CPyL91;
    }
    CPy_DECREF(cpy_r_r28);
    cpy_r_r33 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 342, CPyStatic_default___globals);
        goto CPyL92;
    }
    if (likely(PyList_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 342, CPyStatic_default___globals, "list", cpy_r_r33);
        goto CPyL92;
    }
    cpy_r_r35 = CPyList_GetItemShortBorrow(cpy_r_r34, 0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 342, CPyStatic_default___globals);
        goto CPyL93;
    }
    if (likely(PyList_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 342, CPyStatic_default___globals, "list", cpy_r_r35);
        goto CPyL93;
    }
    cpy_r_r37 = CPyList_GetItemShort(cpy_r_r36, 0);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 342, CPyStatic_default___globals);
        goto CPyL93;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r37, CPyType_types___Type)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 342, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r37);
        goto CPyL93;
    }
    CPy_DECREF(cpy_r_r34);
    cpy_r_r39 = CPyDef_typeops___try_getting_str_literals(cpy_r_r32, cpy_r_r38);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 342, CPyStatic_default___globals);
        goto CPyL88;
    }
    cpy_r_keys = cpy_r_r39;
    cpy_r_r40 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r41 = cpy_r_keys == cpy_r_r40;
    if (cpy_r_r41) {
        goto CPyL94;
    } else
        goto CPyL42;
CPyL29: ;
    cpy_r_r42 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 344, CPyStatic_default___globals);
        goto CPyL88;
    }
    if (likely(Py_TYPE(cpy_r_r42) == CPyType_checker___TypeChecker))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 344, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r42);
        goto CPyL88;
    }
    cpy_r_r44 = CPyStatic_message_registry___TYPEDDICT_KEY_MUST_BE_STRING_LITERAL;
    if (unlikely(cpy_r_r44 == NULL)) {
        goto CPyL95;
    } else
        goto CPyL34;
CPyL32: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPEDDICT_KEY_MUST_BE_STRING_LITERAL\" was not set");
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 345, CPyStatic_default___globals);
        goto CPyL88;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r46 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 346, CPyStatic_default___globals);
        goto CPyL96;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r46, CPyType_nodes___Context)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 346, CPyStatic_default___globals, "mypy.nodes.Context", cpy_r_r46);
        goto CPyL96;
    }
    cpy_r_r48 = CPyStatic_errorcodes___LITERAL_REQ;
    if (unlikely(cpy_r_r48 == NULL)) {
        goto CPyL97;
    } else
        goto CPyL39;
CPyL37: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"LITERAL_REQ\" was not set");
    cpy_r_r49 = 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 347, CPyStatic_default___globals);
        goto CPyL88;
    }
    CPy_Unreachable();
CPyL39: ;
    cpy_r_r50 = CPY_GET_METHOD_TRAIT(cpy_r_r43, CPyType_plugin___CheckerPluginInterface, 1, mypy___plugin___CheckerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *))(cpy_r_r43, cpy_r_r44, cpy_r_r47, cpy_r_r48); /* fail */
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 344, CPyStatic_default___globals);
        goto CPyL88;
    }
    cpy_r_r51 = NULL;
    cpy_r_r52 = NULL;
    cpy_r_r53 = CPY_INT_TAG;
    cpy_r_r54 = CPY_INT_TAG;
    cpy_r_r55 = CPyDef_types___AnyType(10, cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 349, CPyStatic_default___globals);
        goto CPyL88;
    }
    return cpy_r_r55;
CPyL42: ;
    cpy_r_r56 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 351, CPyStatic_default___globals);
        goto CPyL98;
    }
    if (likely(PyList_Check(cpy_r_r56)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 351, CPyStatic_default___globals, "list", cpy_r_r56);
        goto CPyL98;
    }
    cpy_r_r58 = CPyList_GetItemShortBorrow(cpy_r_r57, 2);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 351, CPyStatic_default___globals);
        goto CPyL99;
    }
    if (likely(PyList_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 351, CPyStatic_default___globals, "list", cpy_r_r58);
        goto CPyL99;
    }
    cpy_r_r60 = CPyList_GetItemShort(cpy_r_r59, 0);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 351, CPyStatic_default___globals);
        goto CPyL99;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r60, CPyType_types___Type)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 351, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r60);
        goto CPyL99;
    }
    CPy_DECREF(cpy_r_r57);
    cpy_r_default_type = cpy_r_r61;
    cpy_r_r62 = PyList_New(0);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 353, CPyStatic_default___globals);
        goto CPyL100;
    }
    cpy_r_value_types = cpy_r_r62;
    if (likely(cpy_r_keys != Py_None))
        cpy_r_r63 = cpy_r_keys;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 354, CPyStatic_default___globals, "list", cpy_r_keys);
        goto CPyL101;
    }
    cpy_r_r64 = 0;
CPyL51: ;
    cpy_r_r65 = (CPyPtr)&((PyVarObject *)cpy_r_r63)->ob_size;
    cpy_r_r66 = *(int64_t *)cpy_r_r65;
    cpy_r_r67 = cpy_r_r66 << 1;
    cpy_r_r68 = (Py_ssize_t)cpy_r_r64 < (Py_ssize_t)cpy_r_r67;
    if (!cpy_r_r68) goto CPyL102;
    cpy_r_r69 = CPyList_GetItemUnsafe(cpy_r_r63, cpy_r_r64);
    if (likely(PyUnicode_Check(cpy_r_r69)))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 354, CPyStatic_default___globals, "str", cpy_r_r69);
        goto CPyL103;
    }
    cpy_r_key = cpy_r_r70;
    cpy_r_r71 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 355, CPyStatic_default___globals);
        goto CPyL104;
    }
    if (likely(Py_TYPE(cpy_r_r71) == CPyType_types___TypedDictType))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 355, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_r71);
        goto CPyL104;
    }
    cpy_r_r73 = ((mypy___types___TypedDictTypeObject *)cpy_r_r72)->_items;
    CPy_INCREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = CPyDict_GetWithNone(cpy_r_r73, cpy_r_key);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 355, CPyStatic_default___globals);
        goto CPyL104;
    }
    if (PyObject_TypeCheck(cpy_r_r74, CPyType_types___Type))
        cpy_r_r75 = cpy_r_r74;
    else {
        cpy_r_r75 = NULL;
    }
    if (cpy_r_r75 != NULL) goto __LL4912;
    if (cpy_r_r74 == Py_None)
        cpy_r_r75 = cpy_r_r74;
    else {
        cpy_r_r75 = NULL;
    }
    if (cpy_r_r75 != NULL) goto __LL4912;
    CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 355, CPyStatic_default___globals, "mypy.types.Type or None", cpy_r_r74);
    goto CPyL104;
__LL4912: ;
    cpy_r_value_type = cpy_r_r75;
    cpy_r_r76 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r77 = cpy_r_value_type == cpy_r_r76;
    if (cpy_r_r77) {
        goto CPyL105;
    } else
        goto CPyL106;
CPyL58: ;
    cpy_r_r78 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 358, CPyStatic_default___globals);
        goto CPyL107;
    }
    if (likely(Py_TYPE(cpy_r_r78) == CPyType_checker___TypeChecker))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 358, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r78);
        goto CPyL107;
    }
    __tmp4913 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r79)->vtable, 0);
    cpy_r_r80 = *(PyObject * *)((char *)cpy_r_r79 + __tmp4913);
    if (unlikely(cpy_r_r80 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'msg' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r80);
    }
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 358, CPyStatic_default___globals);
        goto CPyL107;
    }
CPyL61: ;
    cpy_r_r81 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 358, CPyStatic_default___globals);
        goto CPyL108;
    }
    if (likely(Py_TYPE(cpy_r_r81) == CPyType_types___TypedDictType))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 358, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_r81);
        goto CPyL108;
    }
    cpy_r_r83 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 358, CPyStatic_default___globals);
        goto CPyL109;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r83, CPyType_nodes___Context)))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 358, CPyStatic_default___globals, "mypy.nodes.Context", cpy_r_r83);
        goto CPyL109;
    }
    cpy_r_r85 = 2;
    cpy_r_r86 = CPyDef_messages___MessageBuilder___typeddict_key_not_found(cpy_r_r80, cpy_r_r82, cpy_r_key, cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r82);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 358, CPyStatic_default___globals);
        goto CPyL88;
    }
    cpy_r_r87 = NULL;
    cpy_r_r88 = NULL;
    cpy_r_r89 = CPY_INT_TAG;
    cpy_r_r90 = CPY_INT_TAG;
    cpy_r_r91 = CPyDef_types___AnyType(10, cpy_r_r87, cpy_r_r88, cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 359, CPyStatic_default___globals);
        goto CPyL88;
    }
    return cpy_r_r91;
CPyL68: ;
    CPy_INCREF(cpy_r_value_type);
    if (likely(cpy_r_value_type != Py_None))
        cpy_r_r92 = cpy_r_value_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 365, CPyStatic_default___globals, "mypy.types.Type", cpy_r_value_type);
        goto CPyL110;
    }
    cpy_r_r93 = NULL;
    cpy_r_r94 = 2;
    cpy_r_r95 = 2;
    cpy_r_r96 = 2;
    cpy_r_r97 = 2;
    cpy_r_r98 = 2;
    cpy_r_r99 = NULL;
    cpy_r_r100 = CPyDef_subtypes___is_subtype(cpy_r_default_type, cpy_r_r92, cpy_r_r93, cpy_r_r94, cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r100 == 2)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 365, CPyStatic_default___globals);
        goto CPyL110;
    }
    if (cpy_r_r100) {
        goto CPyL80;
    } else
        goto CPyL111;
CPyL71: ;
    cpy_r_r101 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 366, CPyStatic_default___globals);
        goto CPyL112;
    }
    if (likely(Py_TYPE(cpy_r_r101) == CPyType_checker___TypeChecker))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 366, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r101);
        goto CPyL112;
    }
    __tmp4914 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r102)->vtable, 0);
    cpy_r_r103 = *(PyObject * *)((char *)cpy_r_r102 + __tmp4914);
    if (unlikely(cpy_r_r103 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'msg' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r103);
    }
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 366, CPyStatic_default___globals);
        goto CPyL112;
    }
CPyL74: ;
    if (likely(cpy_r_value_type != Py_None))
        cpy_r_r104 = cpy_r_value_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 367, CPyStatic_default___globals, "mypy.types.Type", cpy_r_value_type);
        goto CPyL113;
    }
    cpy_r_r105 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 367, CPyStatic_default___globals);
        goto CPyL114;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r105, CPyType_nodes___Context)))
        cpy_r_r106 = cpy_r_r105;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 367, CPyStatic_default___globals, "mypy.nodes.Context", cpy_r_r105);
        goto CPyL114;
    }
    cpy_r_r107 = CPyDef_messages___MessageBuilder___typeddict_setdefault_arguments_inconsistent(cpy_r_r103, cpy_r_default_type, cpy_r_r104, cpy_r_r106);
    CPy_DECREF(cpy_r_default_type);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r107 == 2)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 366, CPyStatic_default___globals);
        goto CPyL88;
    }
    cpy_r_r108 = NULL;
    cpy_r_r109 = NULL;
    cpy_r_r110 = CPY_INT_TAG;
    cpy_r_r111 = CPY_INT_TAG;
    cpy_r_r112 = CPyDef_types___AnyType(10, cpy_r_r108, cpy_r_r109, cpy_r_r110, cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 369, CPyStatic_default___globals);
        goto CPyL88;
    }
    return cpy_r_r112;
CPyL80: ;
    if (likely(cpy_r_value_type != Py_None))
        cpy_r_r113 = cpy_r_value_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 371, CPyStatic_default___globals, "mypy.types.Type", cpy_r_value_type);
        goto CPyL103;
    }
    cpy_r_r114 = PyList_Append(cpy_r_value_types, cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r115 = cpy_r_r114 >= 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 371, CPyStatic_default___globals);
        goto CPyL103;
    }
    cpy_r_r116 = cpy_r_r64 + 2;
    cpy_r_r64 = cpy_r_r116;
    goto CPyL51;
CPyL83: ;
    cpy_r_r117 = CPY_INT_TAG;
    cpy_r_r118 = CPY_INT_TAG;
    cpy_r_r119 = 2;
    cpy_r_r120 = 2;
    cpy_r_r121 = CPyDef_typeops___make_simplified_union(cpy_r_value_types, cpy_r_r117, cpy_r_r118, cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_value_types);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 373, CPyStatic_default___globals);
        goto CPyL88;
    }
    return cpy_r_r121;
CPyL85: ;
    cpy_r_r122 = CPySequenceTuple_GetItem(cpy_r_ctx, 10);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 374, CPyStatic_default___globals);
        goto CPyL88;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r122, CPyType_types___Type)))
        cpy_r_r123 = cpy_r_r122;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 374, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r122);
        goto CPyL88;
    }
    return cpy_r_r123;
CPyL88: ;
    cpy_r_r124 = NULL;
    return cpy_r_r124;
CPyL89: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL88;
CPyL90: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL88;
CPyL91: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL88;
CPyL92: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL88;
CPyL93: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r34);
    goto CPyL88;
CPyL94: ;
    CPy_DECREF(cpy_r_keys);
    goto CPyL29;
CPyL95: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL32;
CPyL96: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL88;
CPyL97: ;
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r47);
    goto CPyL37;
CPyL98: ;
    CPy_DecRef(cpy_r_keys);
    goto CPyL88;
CPyL99: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r57);
    goto CPyL88;
CPyL100: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_default_type);
    goto CPyL88;
CPyL101: ;
    CPy_DecRef(cpy_r_default_type);
    CPy_DecRef(cpy_r_value_types);
    goto CPyL88;
CPyL102: ;
    CPy_DECREF(cpy_r_default_type);
    CPy_DECREF(cpy_r_r63);
    goto CPyL83;
CPyL103: ;
    CPy_DecRef(cpy_r_default_type);
    CPy_DecRef(cpy_r_value_types);
    CPy_DecRef(cpy_r_r63);
    goto CPyL88;
CPyL104: ;
    CPy_DecRef(cpy_r_default_type);
    CPy_DecRef(cpy_r_value_types);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_key);
    goto CPyL88;
CPyL105: ;
    CPy_DECREF(cpy_r_default_type);
    CPy_DECREF(cpy_r_value_types);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_value_type);
    goto CPyL58;
CPyL106: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL68;
CPyL107: ;
    CPy_DecRef(cpy_r_key);
    goto CPyL88;
CPyL108: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r80);
    goto CPyL88;
CPyL109: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r82);
    goto CPyL88;
CPyL110: ;
    CPy_DecRef(cpy_r_default_type);
    CPy_DecRef(cpy_r_value_types);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_value_type);
    goto CPyL88;
CPyL111: ;
    CPy_DECREF(cpy_r_value_types);
    CPy_DECREF(cpy_r_r63);
    goto CPyL71;
CPyL112: ;
    CPy_DecRef(cpy_r_default_type);
    CPy_DecRef(cpy_r_value_type);
    goto CPyL88;
CPyL113: ;
    CPy_DecRef(cpy_r_default_type);
    CPy_DecRef(cpy_r_r103);
    goto CPyL88;
CPyL114: ;
    CPy_DecRef(cpy_r_default_type);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r104);
    goto CPyL88;
}

PyObject *CPyPy_default___typed_dict_setdefault_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:typed_dict_setdefault_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_default___typed_dict_setdefault_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_setdefault_callback", 334, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___typed_dict_delitem_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
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
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
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
    PyObject *cpy_r_keys;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    CPyPtr cpy_r_r50;
    int64_t cpy_r_r51;
    CPyTagged cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    CPyTagged cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    size_t __tmp4915;
    size_t __tmp4916;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 380, CPyStatic_default___globals);
        goto CPyL69;
    }
    cpy_r_r1 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL66;
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 381, CPyStatic_default___globals);
        goto CPyL69;
    }
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 381, CPyStatic_default___globals, "list", cpy_r_r5);
        goto CPyL69;
    }
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = cpy_r_r9 == 2;
    if (!cpy_r_r10) goto CPyL66;
    cpy_r_r11 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 382, CPyStatic_default___globals);
        goto CPyL69;
    }
    if (likely(PyList_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 382, CPyStatic_default___globals, "list", cpy_r_r11);
        goto CPyL69;
    }
    cpy_r_r13 = CPyList_GetItemShortBorrow(cpy_r_r12, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 382, CPyStatic_default___globals);
        goto CPyL70;
    }
    if (likely(PyList_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 382, CPyStatic_default___globals, "list", cpy_r_r13);
        goto CPyL70;
    }
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = cpy_r_r17 == 2;
    CPy_DECREF(cpy_r_r12);
    if (!cpy_r_r18) goto CPyL66;
    cpy_r_r19 = CPySequenceTuple_GetItem(cpy_r_ctx, 12);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 384, CPyStatic_default___globals);
        goto CPyL69;
    }
    if (likely(PyList_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 384, CPyStatic_default___globals, "list", cpy_r_r19);
        goto CPyL69;
    }
    cpy_r_r21 = CPyList_GetItemShortBorrow(cpy_r_r20, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 384, CPyStatic_default___globals);
        goto CPyL71;
    }
    if (likely(PyList_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 384, CPyStatic_default___globals, "list", cpy_r_r21);
        goto CPyL71;
    }
    cpy_r_r23 = CPyList_GetItemShort(cpy_r_r22, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 384, CPyStatic_default___globals);
        goto CPyL71;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_nodes___Expression)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 384, CPyStatic_default___globals, "mypy.nodes.Expression", cpy_r_r23);
        goto CPyL71;
    }
    CPy_DECREF(cpy_r_r20);
    cpy_r_r25 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 384, CPyStatic_default___globals);
        goto CPyL72;
    }
    if (likely(PyList_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 384, CPyStatic_default___globals, "list", cpy_r_r25);
        goto CPyL72;
    }
    cpy_r_r27 = CPyList_GetItemShortBorrow(cpy_r_r26, 0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 384, CPyStatic_default___globals);
        goto CPyL73;
    }
    if (likely(PyList_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 384, CPyStatic_default___globals, "list", cpy_r_r27);
        goto CPyL73;
    }
    cpy_r_r29 = CPyList_GetItemShort(cpy_r_r28, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 384, CPyStatic_default___globals);
        goto CPyL73;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r29, CPyType_types___Type)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 384, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r29);
        goto CPyL73;
    }
    CPy_DECREF(cpy_r_r26);
    cpy_r_r31 = CPyDef_typeops___try_getting_str_literals(cpy_r_r24, cpy_r_r30);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 384, CPyStatic_default___globals);
        goto CPyL69;
    }
    cpy_r_keys = cpy_r_r31;
    cpy_r_r32 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r33 = cpy_r_keys == cpy_r_r32;
    if (cpy_r_r33) {
        goto CPyL74;
    } else
        goto CPyL37;
CPyL24: ;
    cpy_r_r34 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 386, CPyStatic_default___globals);
        goto CPyL69;
    }
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_checker___TypeChecker))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 386, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r34);
        goto CPyL69;
    }
    cpy_r_r36 = CPyStatic_message_registry___TYPEDDICT_KEY_MUST_BE_STRING_LITERAL;
    if (unlikely(cpy_r_r36 == NULL)) {
        goto CPyL75;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPEDDICT_KEY_MUST_BE_STRING_LITERAL\" was not set");
    cpy_r_r37 = 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 387, CPyStatic_default___globals);
        goto CPyL69;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r38 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 388, CPyStatic_default___globals);
        goto CPyL76;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r38, CPyType_nodes___Context)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 388, CPyStatic_default___globals, "mypy.nodes.Context", cpy_r_r38);
        goto CPyL76;
    }
    cpy_r_r40 = CPyStatic_errorcodes___LITERAL_REQ;
    if (unlikely(cpy_r_r40 == NULL)) {
        goto CPyL77;
    } else
        goto CPyL34;
CPyL32: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"LITERAL_REQ\" was not set");
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 389, CPyStatic_default___globals);
        goto CPyL69;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r42 = CPY_GET_METHOD_TRAIT(cpy_r_r35, CPyType_plugin___CheckerPluginInterface, 1, mypy___plugin___CheckerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *))(cpy_r_r35, cpy_r_r36, cpy_r_r39, cpy_r_r40); /* fail */
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 386, CPyStatic_default___globals);
        goto CPyL69;
    }
    cpy_r_r43 = NULL;
    cpy_r_r44 = NULL;
    cpy_r_r45 = CPY_INT_TAG;
    cpy_r_r46 = CPY_INT_TAG;
    cpy_r_r47 = CPyDef_types___AnyType(10, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 391, CPyStatic_default___globals);
        goto CPyL69;
    }
    return cpy_r_r47;
CPyL37: ;
    if (likely(cpy_r_keys != Py_None))
        cpy_r_r48 = cpy_r_keys;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 393, CPyStatic_default___globals, "list", cpy_r_keys);
        goto CPyL69;
    }
    cpy_r_r49 = 0;
CPyL39: ;
    cpy_r_r50 = (CPyPtr)&((PyVarObject *)cpy_r_r48)->ob_size;
    cpy_r_r51 = *(int64_t *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 << 1;
    cpy_r_r53 = (Py_ssize_t)cpy_r_r49 < (Py_ssize_t)cpy_r_r52;
    if (!cpy_r_r53) goto CPyL78;
    cpy_r_r54 = CPyList_GetItemUnsafe(cpy_r_r48, cpy_r_r49);
    if (likely(PyUnicode_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 393, CPyStatic_default___globals, "str", cpy_r_r54);
        goto CPyL79;
    }
    cpy_r_key = cpy_r_r55;
    cpy_r_r56 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 394, CPyStatic_default___globals);
        goto CPyL80;
    }
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_types___TypedDictType))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 394, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_r56);
        goto CPyL80;
    }
    cpy_r_r58 = ((mypy___types___TypedDictTypeObject *)cpy_r_r57)->_required_keys;
    CPy_INCREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r59 = PySet_Contains(cpy_r_r58, cpy_r_key);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 394, CPyStatic_default___globals);
        goto CPyL80;
    }
    cpy_r_r61 = cpy_r_r59;
    if (!cpy_r_r61) goto CPyL53;
    cpy_r_r62 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 395, CPyStatic_default___globals);
        goto CPyL80;
    }
    if (likely(Py_TYPE(cpy_r_r62) == CPyType_checker___TypeChecker))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 395, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r62);
        goto CPyL80;
    }
    __tmp4915 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r63)->vtable, 0);
    cpy_r_r64 = *(PyObject * *)((char *)cpy_r_r63 + __tmp4915);
    if (unlikely(cpy_r_r64 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'msg' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r64);
    }
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 395, CPyStatic_default___globals);
        goto CPyL80;
    }
CPyL48: ;
    cpy_r_r65 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 395, CPyStatic_default___globals);
        goto CPyL81;
    }
    if (likely(Py_TYPE(cpy_r_r65) == CPyType_types___TypedDictType))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 395, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_r65);
        goto CPyL81;
    }
    cpy_r_r67 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 395, CPyStatic_default___globals);
        goto CPyL82;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r67, CPyType_nodes___Context)))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 395, CPyStatic_default___globals, "mypy.nodes.Context", cpy_r_r67);
        goto CPyL82;
    }
    cpy_r_r69 = CPyDef_messages___MessageBuilder___typeddict_key_cannot_be_deleted(cpy_r_r64, cpy_r_r66, cpy_r_key, cpy_r_r68);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 395, CPyStatic_default___globals);
        goto CPyL79;
    } else
        goto CPyL65;
CPyL53: ;
    cpy_r_r70 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 396, CPyStatic_default___globals);
        goto CPyL80;
    }
    if (likely(Py_TYPE(cpy_r_r70) == CPyType_types___TypedDictType))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 396, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_r70);
        goto CPyL80;
    }
    cpy_r_r72 = ((mypy___types___TypedDictTypeObject *)cpy_r_r71)->_items;
    CPy_INCREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r73 = PyDict_Contains(cpy_r_r72, cpy_r_key);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 396, CPyStatic_default___globals);
        goto CPyL80;
    }
    cpy_r_r75 = cpy_r_r73;
    cpy_r_r76 = cpy_r_r75 ^ 1;
    if (!cpy_r_r76) goto CPyL83;
    cpy_r_r77 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 397, CPyStatic_default___globals);
        goto CPyL80;
    }
    if (likely(Py_TYPE(cpy_r_r77) == CPyType_checker___TypeChecker))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 397, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r77);
        goto CPyL80;
    }
    __tmp4916 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r78)->vtable, 0);
    cpy_r_r79 = *(PyObject * *)((char *)cpy_r_r78 + __tmp4916);
    if (unlikely(cpy_r_r79 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'msg' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r79);
    }
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 397, CPyStatic_default___globals);
        goto CPyL80;
    }
CPyL60: ;
    cpy_r_r80 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 397, CPyStatic_default___globals);
        goto CPyL84;
    }
    if (likely(Py_TYPE(cpy_r_r80) == CPyType_types___TypedDictType))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 397, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_r80);
        goto CPyL84;
    }
    cpy_r_r82 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 397, CPyStatic_default___globals);
        goto CPyL85;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r82, CPyType_nodes___Context)))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 397, CPyStatic_default___globals, "mypy.nodes.Context", cpy_r_r82);
        goto CPyL85;
    }
    cpy_r_r84 = 2;
    cpy_r_r85 = CPyDef_messages___MessageBuilder___typeddict_key_not_found(cpy_r_r79, cpy_r_r81, cpy_r_key, cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 397, CPyStatic_default___globals);
        goto CPyL79;
    }
CPyL65: ;
    cpy_r_r86 = cpy_r_r49 + 2;
    cpy_r_r49 = cpy_r_r86;
    goto CPyL39;
CPyL66: ;
    cpy_r_r87 = CPySequenceTuple_GetItem(cpy_r_ctx, 10);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 398, CPyStatic_default___globals);
        goto CPyL69;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r87, CPyType_types___Type)))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 398, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r87);
        goto CPyL69;
    }
    return cpy_r_r88;
CPyL69: ;
    cpy_r_r89 = NULL;
    return cpy_r_r89;
CPyL70: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL69;
CPyL71: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL69;
CPyL72: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL69;
CPyL73: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r26);
    goto CPyL69;
CPyL74: ;
    CPy_DECREF(cpy_r_keys);
    goto CPyL24;
CPyL75: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL27;
CPyL76: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL69;
CPyL77: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r39);
    goto CPyL32;
CPyL78: ;
    CPy_DECREF(cpy_r_r48);
    goto CPyL66;
CPyL79: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL69;
CPyL80: ;
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_key);
    goto CPyL69;
CPyL81: ;
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r64);
    goto CPyL69;
CPyL82: ;
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r66);
    goto CPyL69;
CPyL83: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL65;
CPyL84: ;
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r79);
    goto CPyL69;
CPyL85: ;
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r81);
    goto CPyL69;
}

PyObject *CPyPy_default___typed_dict_delitem_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:typed_dict_delitem_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_default___typed_dict_delitem_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_delitem_callback", 377, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___typed_dict_update_signature_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_inferred;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_signature;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_arg_type;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
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
    CPyPtr cpy_r_r33;
    int64_t cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    tuple_T3OOO cpy_r_r65;
    tuple_T3OOO cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    tuple_T3OOO cpy_r_r72;
    tuple_T3OOO cpy_r_r73;
    tuple_T3OOO cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_possible_tds;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    CPyPtr cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyPtr cpy_r_r88;
    CPyPtr cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    CPyPtr cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyTagged cpy_r_r101;
    CPyPtr cpy_r_r102;
    int64_t cpy_r_r103;
    CPyTagged cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r108;
    CPyPtr cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    CPyTagged cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_items;
    CPyTagged cpy_r_r117;
    CPyPtr cpy_r_r118;
    int64_t cpy_r_r119;
    CPyTagged cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_td;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    int32_t cpy_r_r149;
    char cpy_r_r150;
    CPyTagged cpy_r_r151;
    CPyPtr cpy_r_r152;
    int64_t cpy_r_r153;
    CPyTagged cpy_r_r154;
    char cpy_r_r155;
    CPyTagged cpy_r_r156;
    CPyTagged cpy_r_r157;
    char cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    CPyPtr cpy_r_r162;
    CPyPtr cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    CPyTagged cpy_r_r171;
    CPyTagged cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    size_t __tmp4917;
    size_t __tmp4919;
    cpy_r_r0 = NULL;
    cpy_r_inferred = cpy_r_r0;
    cpy_r_r1 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 403, CPyStatic_default___globals);
        goto CPyL128;
    }
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_types___CallableType))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 403, CPyStatic_default___globals, "mypy.types.CallableType", cpy_r_r1);
        goto CPyL128;
    }
    cpy_r_signature = cpy_r_r2;
    cpy_r_r3 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 404, CPyStatic_default___globals);
        goto CPyL129;
    }
    cpy_r_r4 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    CPy_DECREF(cpy_r_r3);
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL130;
    cpy_r_r8 = ((mypy___types___CallableTypeObject *)cpy_r_signature)->_arg_types;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = cpy_r_r11 == 2;
    if (!cpy_r_r12) goto CPyL130;
    cpy_r_r13 = ((mypy___types___CallableTypeObject *)cpy_r_signature)->_arg_types;
    cpy_r_r14 = CPyList_GetItemShort(cpy_r_r13, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 405, CPyStatic_default___globals);
        goto CPyL129;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_types___Type)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 405, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r14);
        goto CPyL129;
    }
    cpy_r_r16 = CPyDef_types___get_proper_type(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 405, CPyStatic_default___globals);
        goto CPyL129;
    }
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 405, CPyStatic_default___globals, "mypy.types.ProperType", cpy_r_r16);
        goto CPyL129;
    }
    cpy_r_arg_type = cpy_r_r17;
    cpy_r_r18 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_arg_type)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (cpy_r_r21) {
        goto CPyL12;
    } else
        goto CPyL131;
CPyL10: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r22 = 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 406, CPyStatic_default___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL12: ;
    if (likely(Py_TYPE(cpy_r_arg_type) == CPyType_types___TypedDictType))
        cpy_r_r23 = cpy_r_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 407, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_arg_type);
        goto CPyL129;
    }
    cpy_r_r24 = CPyDef_types___TypedDictType___as_anonymous(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 407, CPyStatic_default___globals);
        goto CPyL129;
    }
    cpy_r_arg_type = cpy_r_r24;
    if (likely(Py_TYPE(cpy_r_arg_type) == CPyType_types___TypedDictType))
        cpy_r_r25 = cpy_r_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 408, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_arg_type);
        goto CPyL129;
    }
    cpy_r_r26 = PySet_New(NULL);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 408, CPyStatic_default___globals);
        goto CPyL132;
    }
    cpy_r_r27 = NULL;
    cpy_r_r28 = NULL;
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyDef_types___TypedDictType___copy_modified(cpy_r_r25, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 408, CPyStatic_default___globals);
        goto CPyL129;
    }
    cpy_r_arg_type = cpy_r_r30;
    cpy_r_r31 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 409, CPyStatic_default___globals);
        goto CPyL133;
    }
    if (likely(PyList_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 409, CPyStatic_default___globals, "list", cpy_r_r31);
        goto CPyL133;
    }
    cpy_r_r33 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r34 = *(int64_t *)cpy_r_r33;
    CPy_DECREF(cpy_r_r32);
    cpy_r_r35 = cpy_r_r34 << 1;
    cpy_r_r36 = cpy_r_r35 != 0;
    if (!cpy_r_r36) goto CPyL134;
    cpy_r_r37 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 409, CPyStatic_default___globals);
        goto CPyL133;
    }
    if (likely(PyList_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 409, CPyStatic_default___globals, "list", cpy_r_r37);
        goto CPyL133;
    }
    cpy_r_r39 = CPyList_GetItemShort(cpy_r_r38, 0);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 409, CPyStatic_default___globals);
        goto CPyL133;
    }
    if (likely(PyList_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 409, CPyStatic_default___globals, "list", cpy_r_r39);
        goto CPyL133;
    }
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_r40)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    CPy_DECREF(cpy_r_r40);
    cpy_r_r43 = cpy_r_r42 << 1;
    cpy_r_r44 = cpy_r_r43 != 0;
    if (!cpy_r_r44) goto CPyL134;
    cpy_r_r45 = CPySequenceTuple_GetItem(cpy_r_ctx, 8);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 410, CPyStatic_default___globals);
        goto CPyL133;
    }
    if (likely(Py_TYPE(cpy_r_r45) == CPyType_checker___TypeChecker))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 410, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r45);
        goto CPyL133;
    }
    __tmp4917 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r46)->vtable, 0);
    cpy_r_r47 = *(PyObject * *)((char *)cpy_r_r46 + __tmp4917);
    if (unlikely(cpy_r_r47 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'msg' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r47);
    }
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 410, CPyStatic_default___globals);
        goto CPyL133;
    }
CPyL28: ;
    cpy_r_r48 = NULL;
    cpy_r_r49 = 2;
    cpy_r_r50 = CPyDef_messages___MessageBuilder___filter_errors(cpy_r_r47, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 410, CPyStatic_default___globals);
        goto CPyL133;
    }
    cpy_r_r51 = CPyDef_mypy___errors___ErrorWatcher_____enter__(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 410, CPyStatic_default___globals);
        goto CPyL135;
    } else
        goto CPyL136;
CPyL30: ;
    cpy_r_r52 = 1;
    cpy_r_r53 = CPySequenceTuple_GetItem(cpy_r_ctx, 8);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 412, CPyStatic_default___globals);
        goto CPyL44;
    }
    if (likely(Py_TYPE(cpy_r_r53) == CPyType_checker___TypeChecker))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 412, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r53);
        goto CPyL44;
    }
    cpy_r_r55 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 412, CPyStatic_default___globals);
        goto CPyL137;
    }
    if (likely(PyList_Check(cpy_r_r55)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 412, CPyStatic_default___globals, "list", cpy_r_r55);
        goto CPyL137;
    }
    cpy_r_r57 = CPyList_GetItemShortBorrow(cpy_r_r56, 0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 412, CPyStatic_default___globals);
        goto CPyL138;
    }
    if (likely(PyList_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 412, CPyStatic_default___globals, "list", cpy_r_r57);
        goto CPyL138;
    }
    cpy_r_r59 = CPyList_GetItemShort(cpy_r_r58, 0);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 412, CPyStatic_default___globals);
        goto CPyL138;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r59, CPyType_nodes___Expression)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 412, CPyStatic_default___globals, "mypy.nodes.Expression", cpy_r_r59);
        goto CPyL138;
    }
    CPy_DECREF(cpy_r_r56);
    CPy_INCREF(cpy_r_arg_type);
    if (likely(Py_TYPE(cpy_r_arg_type) == CPyType_types___TypedDictType))
        cpy_r_r61 = cpy_r_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 412, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_arg_type);
        goto CPyL139;
    }
    cpy_r_r62 = CPY_GET_METHOD_TRAIT(cpy_r_r54, CPyType_plugin___CheckerPluginInterface, 3, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r54, cpy_r_r60, cpy_r_r61); /* get_expression_type */
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 412, CPyStatic_default___globals);
        goto CPyL44;
    }
    cpy_r_r63 = CPyDef_types___get_proper_type(cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 411, CPyStatic_default___globals);
        goto CPyL44;
    }
    if (likely(cpy_r_r63 != Py_None))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeError("mypy.types.ProperType", cpy_r_r63); 
        cpy_r_r64 = NULL;
    }
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 411, CPyStatic_default___globals);
        goto CPyL44;
    } else
        goto CPyL140;
CPyL43: ;
    cpy_r_inferred = cpy_r_r64;
    goto CPyL51;
CPyL44: ;
    cpy_r_r65 = CPy_CatchError();
    cpy_r_r52 = 0;
    cpy_r_r66 = CPy_GetExcInfo();
    cpy_r_r67 = cpy_r_r66.f0;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = cpy_r_r66.f1;
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69 = cpy_r_r66.f2;
    CPy_INCREF(cpy_r_r69);
    CPy_DecRef(cpy_r_r66.f0);
    CPy_DecRef(cpy_r_r66.f1);
    CPy_DecRef(cpy_r_r66.f2);
    cpy_r_r70 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r50, cpy_r_r67, cpy_r_r68, cpy_r_r69);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r69);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 410, CPyStatic_default___globals);
        goto CPyL49;
    }
    if (cpy_r_r70) goto CPyL48;
    CPy_Reraise();
    if (!0) {
        goto CPyL49;
    } else
        goto CPyL141;
CPyL47: ;
    CPy_Unreachable();
CPyL48: ;
    CPy_RestoreExcInfo(cpy_r_r65);
    CPy_DecRef(cpy_r_r65.f0);
    CPy_DecRef(cpy_r_r65.f1);
    CPy_DecRef(cpy_r_r65.f2);
    goto CPyL51;
CPyL49: ;
    CPy_RestoreExcInfo(cpy_r_r65);
    CPy_DecRef(cpy_r_r65.f0);
    CPy_DecRef(cpy_r_r65.f1);
    CPy_DecRef(cpy_r_r65.f2);
    cpy_r_r71 = CPy_KeepPropagating();
    if (!cpy_r_r71) {
        goto CPyL52;
    } else
        goto CPyL142;
CPyL50: ;
    CPy_Unreachable();
CPyL51: ;
    tuple_T3OOO __tmp4918 = { NULL, NULL, NULL };
    cpy_r_r72 = __tmp4918;
    cpy_r_r73 = cpy_r_r72;
    goto CPyL53;
CPyL52: ;
    cpy_r_r74 = CPy_CatchError();
    cpy_r_r73 = cpy_r_r74;
CPyL53: ;
    if (!cpy_r_r52) goto CPyL143;
    cpy_r_r75 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r76 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r50, cpy_r_r75, cpy_r_r75, cpy_r_r75);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 410, CPyStatic_default___globals);
        goto CPyL144;
    }
CPyL55: ;
    if (cpy_r_r73.f0 == NULL) {
        goto CPyL62;
    } else
        goto CPyL145;
CPyL56: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL58;
    } else
        goto CPyL146;
CPyL57: ;
    CPy_Unreachable();
CPyL58: ;
    if (cpy_r_r73.f0 == NULL) goto CPyL60;
    CPy_RestoreExcInfo(cpy_r_r73);
    CPy_XDECREF(cpy_r_r73.f0);
    CPy_XDECREF(cpy_r_r73.f1);
    CPy_XDECREF(cpy_r_r73.f2);
CPyL60: ;
    cpy_r_r77 = CPy_KeepPropagating();
    if (!cpy_r_r77) goto CPyL127;
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r78 = PyList_New(0);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 414, CPyStatic_default___globals);
        goto CPyL133;
    }
    cpy_r_possible_tds = cpy_r_r78;
    cpy_r_r79 = (PyObject *)CPyType_types___TypedDictType;
    if (cpy_r_inferred == NULL) {
        goto CPyL147;
    } else
        goto CPyL66;
CPyL64: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"inferred\" referenced before assignment");
    cpy_r_r80 = 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 415, CPyStatic_default___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL66: ;
    cpy_r_r81 = (CPyPtr)&((PyObject *)cpy_r_inferred)->ob_type;
    cpy_r_r82 = *(PyObject * *)cpy_r_r81;
    if (cpy_r_inferred == NULL) {
        goto CPyL148;
    } else
        goto CPyL69;
CPyL67: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"inferred\" referenced before assignment");
    cpy_r_r83 = 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", -1, CPyStatic_default___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL69: ;
    cpy_r_r84 = cpy_r_r82 == cpy_r_r79;
    if (cpy_r_r84) {
        goto CPyL149;
    } else
        goto CPyL76;
CPyL70: ;
    if (cpy_r_inferred == NULL) {
        goto CPyL150;
    } else
        goto CPyL73;
CPyL71: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"inferred\" referenced before assignment");
    cpy_r_r85 = 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 416, CPyStatic_default___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL73: ;
    if (likely(Py_TYPE(cpy_r_inferred) == CPyType_types___TypedDictType))
        cpy_r_r86 = cpy_r_inferred;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 416, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_inferred);
        goto CPyL151;
    }
    cpy_r_r87 = PyList_New(1);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 416, CPyStatic_default___globals);
        goto CPyL152;
    }
    cpy_r_r88 = (CPyPtr)&((PyListObject *)cpy_r_r87)->ob_item;
    cpy_r_r89 = *(CPyPtr *)cpy_r_r88;
    *(PyObject * *)cpy_r_r89 = cpy_r_r86;
    cpy_r_possible_tds = cpy_r_r87;
    goto CPyL98;
CPyL76: ;
    cpy_r_r90 = (PyObject *)CPyType_types___UnionType;
    if (cpy_r_inferred == NULL) {
        goto CPyL153;
    } else
        goto CPyL79;
CPyL77: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"inferred\" referenced before assignment");
    cpy_r_r91 = 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 417, CPyStatic_default___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL79: ;
    cpy_r_r92 = (CPyPtr)&((PyObject *)cpy_r_inferred)->ob_type;
    cpy_r_r93 = *(PyObject * *)cpy_r_r92;
    if (cpy_r_inferred == NULL) {
        goto CPyL154;
    } else
        goto CPyL82;
CPyL80: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"inferred\" referenced before assignment");
    cpy_r_r94 = 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", -1, CPyStatic_default___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL82: ;
    cpy_r_r95 = cpy_r_r93 == cpy_r_r90;
    if (cpy_r_r95) {
        goto CPyL155;
    } else
        goto CPyL156;
CPyL83: ;
    cpy_r_r96 = PyList_New(0);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 418, CPyStatic_default___globals);
        goto CPyL133;
    }
    if (cpy_r_inferred == NULL) {
        goto CPyL157;
    } else
        goto CPyL87;
CPyL85: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"inferred\" referenced before assignment");
    cpy_r_r97 = 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 420, CPyStatic_default___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL87: ;
    if (likely(Py_TYPE(cpy_r_inferred) == CPyType_types___UnionType))
        cpy_r_r98 = cpy_r_inferred;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 420, CPyStatic_default___globals, "mypy.types.UnionType", cpy_r_inferred);
        goto CPyL158;
    }
    cpy_r_r99 = CPyDef_types___UnionType___relevant_items(cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 420, CPyStatic_default___globals);
        goto CPyL158;
    }
    cpy_r_r100 = CPyDef_types___get_proper_types(cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 420, CPyStatic_default___globals);
        goto CPyL158;
    }
    cpy_r_r101 = 0;
CPyL91: ;
    cpy_r_r102 = (CPyPtr)&((PyVarObject *)cpy_r_r100)->ob_size;
    cpy_r_r103 = *(int64_t *)cpy_r_r102;
    cpy_r_r104 = cpy_r_r103 << 1;
    cpy_r_r105 = (Py_ssize_t)cpy_r_r101 < (Py_ssize_t)cpy_r_r104;
    if (!cpy_r_r105) goto CPyL159;
    cpy_r_r106 = CPyList_GetItemUnsafe(cpy_r_r100, cpy_r_r101);
    if (likely(PyObject_TypeCheck(cpy_r_r106, CPyType_types___ProperType)))
        cpy_r_r107 = cpy_r_r106;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 418, CPyStatic_default___globals, "mypy.types.ProperType", cpy_r_r106);
        goto CPyL160;
    }
    cpy_r_t = cpy_r_r107;
    cpy_r_r108 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r109 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r110 = *(PyObject * *)cpy_r_r109;
    cpy_r_r111 = cpy_r_r110 == cpy_r_r108;
    if (!cpy_r_r111) goto CPyL161;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___TypedDictType))
        cpy_r_r112 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 419, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_t);
        goto CPyL160;
    }
    cpy_r_r113 = PyList_Append(cpy_r_r96, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 418, CPyStatic_default___globals);
        goto CPyL160;
    }
CPyL96: ;
    cpy_r_r115 = cpy_r_r101 + 2;
    cpy_r_r101 = cpy_r_r115;
    goto CPyL91;
CPyL97: ;
    cpy_r_possible_tds = cpy_r_r96;
CPyL98: ;
    cpy_r_r116 = PyList_New(0);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 423, CPyStatic_default___globals);
        goto CPyL162;
    }
    cpy_r_items = cpy_r_r116;
    cpy_r_r117 = 0;
CPyL100: ;
    cpy_r_r118 = (CPyPtr)&((PyVarObject *)cpy_r_possible_tds)->ob_size;
    cpy_r_r119 = *(int64_t *)cpy_r_r118;
    cpy_r_r120 = cpy_r_r119 << 1;
    cpy_r_r121 = (Py_ssize_t)cpy_r_r117 < (Py_ssize_t)cpy_r_r120;
    if (!cpy_r_r121) goto CPyL163;
    cpy_r_r122 = CPyList_GetItemUnsafe(cpy_r_possible_tds, cpy_r_r117);
    if (likely(Py_TYPE(cpy_r_r122) == CPyType_types___TypedDictType))
        cpy_r_r123 = cpy_r_r122;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 424, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_r122);
        goto CPyL164;
    }
    cpy_r_td = cpy_r_r123;
    CPy_INCREF(cpy_r_arg_type);
    if (likely(Py_TYPE(cpy_r_arg_type) == CPyType_types___TypedDictType))
        cpy_r_r124 = cpy_r_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 425, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_arg_type);
        goto CPyL165;
    }
    if (likely(Py_TYPE(cpy_r_arg_type) == CPyType_types___TypedDictType))
        cpy_r_r125 = cpy_r_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 426, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_arg_type);
        goto CPyL166;
    }
    cpy_r_r126 = ((mypy___types___TypedDictTypeObject *)cpy_r_r125)->_required_keys;
    CPy_INCREF(cpy_r_r126);
    cpy_r_r127 = ((mypy___types___TypedDictTypeObject *)cpy_r_td)->_required_keys;
    CPy_INCREF(cpy_r_r127);
    cpy_r_r128 = PyNumber_Or(cpy_r_r126, cpy_r_r127);
    CPy_DECREF(cpy_r_r126);
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 426, CPyStatic_default___globals);
        goto CPyL166;
    }
    if (likely(PySet_Check(cpy_r_r128)))
        cpy_r_r129 = cpy_r_r128;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 426, CPyStatic_default___globals, "set", cpy_r_r128);
        goto CPyL166;
    }
    if (likely(Py_TYPE(cpy_r_arg_type) == CPyType_types___TypedDictType))
        cpy_r_r130 = cpy_r_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 427, CPyStatic_default___globals, "mypy.types.TypedDictType", cpy_r_arg_type);
        goto CPyL167;
    }
    cpy_r_r131 = ((mypy___types___TypedDictTypeObject *)cpy_r_r130)->_items;
    CPy_INCREF(cpy_r_r131);
    cpy_r_r132 = CPyDict_KeysView(cpy_r_r131);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 427, CPyStatic_default___globals);
        goto CPyL167;
    }
    cpy_r_r133 = PyNumber_And(cpy_r_r129, cpy_r_r132);
    CPy_DECREF(cpy_r_r129);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 426, CPyStatic_default___globals);
        goto CPyL166;
    }
    if (likely(PySet_Check(cpy_r_r133)))
        cpy_r_r134 = cpy_r_r133;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 426, CPyStatic_default___globals, "set", cpy_r_r133);
        goto CPyL166;
    }
    cpy_r_r135 = NULL;
    cpy_r_r136 = NULL;
    cpy_r_r137 = NULL;
    cpy_r_r138 = CPyDef_types___TypedDictType___copy_modified(cpy_r_r124, cpy_r_r135, cpy_r_r136, cpy_r_r137, cpy_r_r134);
    CPy_DECREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 425, CPyStatic_default___globals);
        goto CPyL165;
    }
    cpy_r_item = cpy_r_r138;
    cpy_r_r139 = CPySequenceTuple_GetItem(cpy_r_ctx, 8);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 429, CPyStatic_default___globals);
        goto CPyL168;
    }
    if (likely(Py_TYPE(cpy_r_r139) == CPyType_checker___TypeChecker))
        cpy_r_r140 = cpy_r_r139;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 429, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r139);
        goto CPyL168;
    }
    __tmp4919 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r140)->vtable, 1);
    cpy_r_r141 = *(PyObject * *)((char *)cpy_r_r140 + __tmp4919);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AttributeError("mypy/plugins/default.py", "typed_dict_update_signature_callback", "CheckerPluginInterface", "options", 429, CPyStatic_default___globals);
        goto CPyL169;
    }
CPyL114: ;
    cpy_r_r142 = ((mypy___options___OptionsObject *)cpy_r_r141)->_extra_checks;
    CPy_DECREF(cpy_r_r140);
    if (cpy_r_r142) goto CPyL170;
CPyL115: ;
    cpy_r_r143 = ((mypy___types___TypedDictTypeObject *)cpy_r_td)->_items;
    CPy_INCREF(cpy_r_r143);
    CPy_DECREF(cpy_r_td);
    cpy_r_r144 = PySequence_List(cpy_r_r143);
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 430, CPyStatic_default___globals);
        goto CPyL171;
    }
    cpy_r_r145 = NULL;
    cpy_r_r146 = NULL;
    cpy_r_r147 = NULL;
    cpy_r_r148 = CPyDef_types___TypedDictType___copy_modified(cpy_r_item, cpy_r_r145, cpy_r_r146, cpy_r_r144, cpy_r_r147);
    CPy_DECREF(cpy_r_r144);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 430, CPyStatic_default___globals);
        goto CPyL164;
    }
    cpy_r_item = cpy_r_r148;
CPyL118: ;
    cpy_r_r149 = PyList_Append(cpy_r_items, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    cpy_r_r150 = cpy_r_r149 >= 0;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 431, CPyStatic_default___globals);
        goto CPyL164;
    }
    cpy_r_r151 = cpy_r_r117 + 2;
    cpy_r_r117 = cpy_r_r151;
    goto CPyL100;
CPyL120: ;
    cpy_r_r152 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r153 = *(int64_t *)cpy_r_r152;
    cpy_r_r154 = cpy_r_r153 << 1;
    cpy_r_r155 = cpy_r_r154 != 0;
    if (cpy_r_r155) {
        goto CPyL172;
    } else
        goto CPyL173;
CPyL121: ;
    cpy_r_r156 = CPY_INT_TAG;
    cpy_r_r157 = CPY_INT_TAG;
    cpy_r_r158 = 2;
    cpy_r_r159 = 2;
    cpy_r_r160 = CPyDef_typeops___make_simplified_union(cpy_r_items, cpy_r_r156, cpy_r_r157, cpy_r_r158, cpy_r_r159);
    CPy_DECREF(cpy_r_items);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 433, CPyStatic_default___globals);
        goto CPyL174;
    }
    cpy_r_arg_type = cpy_r_r160;
CPyL123: ;
    cpy_r_r161 = PyList_New(1);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 434, CPyStatic_default___globals);
        goto CPyL151;
    }
    cpy_r_r162 = (CPyPtr)&((PyListObject *)cpy_r_r161)->ob_item;
    cpy_r_r163 = *(CPyPtr *)cpy_r_r162;
    *(PyObject * *)cpy_r_r163 = cpy_r_arg_type;
    cpy_r_r164 = NULL;
    cpy_r_r165 = NULL;
    cpy_r_r166 = NULL;
    cpy_r_r167 = NULL;
    cpy_r_r168 = NULL;
    cpy_r_r169 = NULL;
    cpy_r_r170 = NULL;
    cpy_r_r171 = CPY_INT_TAG;
    cpy_r_r172 = CPY_INT_TAG;
    cpy_r_r173 = NULL;
    cpy_r_r174 = NULL;
    cpy_r_r175 = NULL;
    cpy_r_r176 = NULL;
    cpy_r_r177 = NULL;
    cpy_r_r178 = NULL;
    cpy_r_r179 = NULL;
    cpy_r_r180 = NULL;
    cpy_r_r181 = NULL;
    cpy_r_r182 = CPyDef_types___CallableType___copy_modified(cpy_r_signature, cpy_r_r161, cpy_r_r164, cpy_r_r165, cpy_r_r166, cpy_r_r167, cpy_r_r168, cpy_r_r169, cpy_r_r170, cpy_r_r171, cpy_r_r172, cpy_r_r173, cpy_r_r174, cpy_r_r175, cpy_r_r176, cpy_r_r177, cpy_r_r178, cpy_r_r179, cpy_r_r180, cpy_r_r181);
    CPy_DECREF(cpy_r_r161);
    CPy_DECREF(cpy_r_signature);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 434, CPyStatic_default___globals);
        goto CPyL127;
    }
    return cpy_r_r182;
CPyL126: ;
    return cpy_r_signature;
CPyL127: ;
    cpy_r_r183 = NULL;
    return cpy_r_r183;
CPyL128: ;
    CPy_XDecRef(cpy_r_inferred);
    goto CPyL127;
CPyL129: ;
    CPy_XDecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_signature);
    goto CPyL127;
CPyL130: ;
    CPy_XDECREF(cpy_r_inferred);
    goto CPyL126;
CPyL131: ;
    CPy_XDECREF(cpy_r_inferred);
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL10;
CPyL132: ;
    CPy_XDecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_r25);
    goto CPyL127;
CPyL133: ;
    CPy_XDecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL127;
CPyL134: ;
    CPy_XDECREF(cpy_r_inferred);
    goto CPyL123;
CPyL135: ;
    CPy_XDecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r50);
    goto CPyL127;
CPyL136: ;
    CPy_DECREF(cpy_r_r51);
    goto CPyL30;
CPyL137: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL44;
CPyL138: ;
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r56);
    goto CPyL44;
CPyL139: ;
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r60);
    goto CPyL44;
CPyL140: ;
    CPy_XDECREF(cpy_r_inferred);
    goto CPyL43;
CPyL141: ;
    CPy_XDecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r65.f0);
    CPy_DecRef(cpy_r_r65.f1);
    CPy_DecRef(cpy_r_r65.f2);
    goto CPyL47;
CPyL142: ;
    CPy_XDecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r50);
    goto CPyL50;
CPyL143: ;
    CPy_DECREF(cpy_r_r50);
    goto CPyL55;
CPyL144: ;
    CPy_XDecRef(cpy_r_inferred);
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL58;
CPyL145: ;
    CPy_XDECREF(cpy_r_inferred);
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL56;
CPyL146: ;
    CPy_XDECREF(cpy_r_r73.f0);
    CPy_XDECREF(cpy_r_r73.f1);
    CPy_XDECREF(cpy_r_r73.f2);
    goto CPyL57;
CPyL147: ;
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_arg_type);
    CPy_DECREF(cpy_r_possible_tds);
    goto CPyL64;
CPyL148: ;
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_arg_type);
    CPy_DECREF(cpy_r_possible_tds);
    goto CPyL67;
CPyL149: ;
    CPy_DECREF(cpy_r_possible_tds);
    goto CPyL70;
CPyL150: ;
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL71;
CPyL151: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL127;
CPyL152: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r86);
    goto CPyL127;
CPyL153: ;
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_arg_type);
    CPy_DECREF(cpy_r_possible_tds);
    goto CPyL77;
CPyL154: ;
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_arg_type);
    CPy_DECREF(cpy_r_possible_tds);
    goto CPyL80;
CPyL155: ;
    CPy_DECREF(cpy_r_possible_tds);
    goto CPyL83;
CPyL156: ;
    CPy_XDECREF(cpy_r_inferred);
    goto CPyL98;
CPyL157: ;
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_arg_type);
    CPy_DECREF(cpy_r_r96);
    goto CPyL85;
CPyL158: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r96);
    goto CPyL127;
CPyL159: ;
    CPy_DECREF(cpy_r_r100);
    goto CPyL97;
CPyL160: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r96);
    CPy_DecRef(cpy_r_r100);
    goto CPyL127;
CPyL161: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL96;
CPyL162: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_possible_tds);
    goto CPyL127;
CPyL163: ;
    CPy_DECREF(cpy_r_possible_tds);
    goto CPyL120;
CPyL164: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_possible_tds);
    CPy_DecRef(cpy_r_items);
    goto CPyL127;
CPyL165: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_possible_tds);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_td);
    goto CPyL127;
CPyL166: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_possible_tds);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_td);
    CPy_DecRef(cpy_r_r124);
    goto CPyL127;
CPyL167: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_possible_tds);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_td);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r129);
    goto CPyL127;
CPyL168: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_possible_tds);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_td);
    CPy_DecRef(cpy_r_item);
    goto CPyL127;
CPyL169: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_possible_tds);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_td);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_r140);
    goto CPyL127;
CPyL170: ;
    CPy_DECREF(cpy_r_td);
    goto CPyL118;
CPyL171: ;
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_possible_tds);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_item);
    goto CPyL127;
CPyL172: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL121;
CPyL173: ;
    CPy_DECREF(cpy_r_items);
    goto CPyL123;
CPyL174: ;
    CPy_DecRef(cpy_r_signature);
    goto CPyL127;
}

PyObject *CPyPy_default___typed_dict_update_signature_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:typed_dict_update_signature_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_default___typed_dict_update_signature_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "typed_dict_update_signature_callback", 401, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___int_pow_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyTagged cpy_r_exponent;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int64_t cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
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
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 442, CPyStatic_default___globals);
        goto CPyL52;
    }
    if (likely(PyList_Check(cpy_r_r0)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 442, CPyStatic_default___globals, "list", cpy_r_r0);
        goto CPyL52;
    }
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = cpy_r_r4 == 4;
    if (!cpy_r_r5) goto CPyL49;
    cpy_r_r6 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 442, CPyStatic_default___globals);
        goto CPyL52;
    }
    if (likely(PyList_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 442, CPyStatic_default___globals, "list", cpy_r_r6);
        goto CPyL52;
    }
    cpy_r_r8 = CPyList_GetItemShortBorrow(cpy_r_r7, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 442, CPyStatic_default___globals);
        goto CPyL53;
    }
    if (likely(PyList_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 442, CPyStatic_default___globals, "list", cpy_r_r8);
        goto CPyL53;
    }
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = cpy_r_r12 == 2;
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r13) goto CPyL49;
    cpy_r_r14 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 442, CPyStatic_default___globals);
        goto CPyL52;
    }
    if (likely(PyList_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 442, CPyStatic_default___globals, "list", cpy_r_r14);
        goto CPyL52;
    }
    cpy_r_r16 = CPyList_GetItemShortBorrow(cpy_r_r15, 2);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 442, CPyStatic_default___globals);
        goto CPyL54;
    }
    if (likely(PyList_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 442, CPyStatic_default___globals, "list", cpy_r_r16);
        goto CPyL54;
    }
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = cpy_r_r20 == 0;
    CPy_DECREF(cpy_r_r15);
    if (!cpy_r_r21) goto CPyL49;
    cpy_r_r22 = CPySequenceTuple_GetItem(cpy_r_ctx, 12);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 443, CPyStatic_default___globals);
        goto CPyL52;
    }
    if (likely(PyList_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 443, CPyStatic_default___globals, "list", cpy_r_r22);
        goto CPyL52;
    }
    cpy_r_r24 = CPyList_GetItemShortBorrow(cpy_r_r23, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 443, CPyStatic_default___globals);
        goto CPyL55;
    }
    if (likely(PyList_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 443, CPyStatic_default___globals, "list", cpy_r_r24);
        goto CPyL55;
    }
    cpy_r_r26 = CPyList_GetItemShort(cpy_r_r25, 0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 443, CPyStatic_default___globals);
        goto CPyL55;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r26, CPyType_nodes___Expression)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 443, CPyStatic_default___globals, "mypy.nodes.Expression", cpy_r_r26);
        goto CPyL55;
    }
    CPy_DECREF(cpy_r_r23);
    cpy_r_arg = cpy_r_r27;
    cpy_r_r28 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    if (!cpy_r_r31) goto CPyL22;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_nodes___IntExpr))
        cpy_r_r32 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 445, CPyStatic_default___globals, "mypy.nodes.IntExpr", cpy_r_arg);
        goto CPyL56;
    }
    cpy_r_r33 = ((mypy___nodes___IntExprObject *)cpy_r_r32)->_value;
    CPyTagged_INCREF(cpy_r_r33);
    CPy_DECREF(cpy_r_arg);
    cpy_r_exponent = cpy_r_r33;
    goto CPyL36;
CPyL22: ;
    cpy_r_r34 = (PyObject *)CPyType_nodes___UnaryExpr;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    if (!cpy_r_r37) goto CPyL57;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_nodes___UnaryExpr))
        cpy_r_r38 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 446, CPyStatic_default___globals, "mypy.nodes.UnaryExpr", cpy_r_arg);
        goto CPyL56;
    }
    cpy_r_r39 = ((mypy___nodes___UnaryExprObject *)cpy_r_r38)->_op;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = CPyStatics[1198]; /* '-' */
    cpy_r_r41 = PyUnicode_Compare(cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r42 = cpy_r_r41 == -1;
    if (!cpy_r_r42) goto CPyL27;
    cpy_r_r43 = PyErr_Occurred();
    cpy_r_r44 = cpy_r_r43 != NULL;
    if (!cpy_r_r44) goto CPyL27;
    cpy_r_r45 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 446, CPyStatic_default___globals);
        goto CPyL56;
    }
CPyL27: ;
    cpy_r_r46 = cpy_r_r41 == 0;
    if (!cpy_r_r46) goto CPyL57;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_nodes___UnaryExpr))
        cpy_r_r47 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 446, CPyStatic_default___globals, "mypy.nodes.UnaryExpr", cpy_r_arg);
        goto CPyL56;
    }
    cpy_r_r48 = ((mypy___nodes___UnaryExprObject *)cpy_r_r47)->_expr;
    cpy_r_r49 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_r48)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    if (!cpy_r_r52) goto CPyL57;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_nodes___UnaryExpr))
        cpy_r_r53 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 447, CPyStatic_default___globals, "mypy.nodes.UnaryExpr", cpy_r_arg);
        goto CPyL56;
    }
    cpy_r_r54 = ((mypy___nodes___UnaryExprObject *)cpy_r_r53)->_expr;
    if (likely(Py_TYPE(cpy_r_r54) == CPyType_nodes___IntExpr))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 447, CPyStatic_default___globals, "mypy.nodes.IntExpr", cpy_r_r54);
        goto CPyL56;
    }
    cpy_r_r56 = ((mypy___nodes___IntExprObject *)cpy_r_r55)->_value;
    CPyTagged_INCREF(cpy_r_r56);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r57 = CPyTagged_Negate(cpy_r_r56);
    CPyTagged_DECREF(cpy_r_r56);
    cpy_r_exponent = cpy_r_r57;
    goto CPyL36;
CPyL33: ;
    cpy_r_r58 = CPySequenceTuple_GetItem(cpy_r_ctx, 10);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 450, CPyStatic_default___globals);
        goto CPyL52;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r58, CPyType_types___Type)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 450, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r58);
        goto CPyL52;
    }
    return cpy_r_r59;
CPyL36: ;
    cpy_r_r60 = cpy_r_exponent & 1;
    cpy_r_r61 = cpy_r_r60 != 0;
    if (!cpy_r_r61) goto CPyL38;
    cpy_r_r62 = CPyTagged_IsLt_(cpy_r_exponent, 0);
    CPyTagged_DECREF(cpy_r_exponent);
    if (cpy_r_r62) {
        goto CPyL44;
    } else
        goto CPyL39;
CPyL38: ;
    cpy_r_r63 = (Py_ssize_t)cpy_r_exponent >= (Py_ssize_t)0;
    CPyTagged_DECREF(cpy_r_exponent);
    if (!cpy_r_r63) goto CPyL44;
CPyL39: ;
    cpy_r_r64 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 452, CPyStatic_default___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r64) == CPyType_checker___TypeChecker))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 452, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r64);
        goto CPyL52;
    }
    cpy_r_r66 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r67 = PyList_New(0);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 452, CPyStatic_default___globals);
        goto CPyL58;
    }
    cpy_r_r68 = CPY_GET_METHOD_TRAIT(cpy_r_r65, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r65, cpy_r_r66, cpy_r_r67); /* named_generic_type */
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 452, CPyStatic_default___globals);
        goto CPyL52;
    }
    return cpy_r_r68;
CPyL44: ;
    cpy_r_r69 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 454, CPyStatic_default___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r69) == CPyType_checker___TypeChecker))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 454, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r69);
        goto CPyL52;
    }
    cpy_r_r71 = CPyStatics[1180]; /* 'builtins.float' */
    cpy_r_r72 = PyList_New(0);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 454, CPyStatic_default___globals);
        goto CPyL59;
    }
    cpy_r_r73 = CPY_GET_METHOD_TRAIT(cpy_r_r70, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r70, cpy_r_r71, cpy_r_r72); /* named_generic_type */
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 454, CPyStatic_default___globals);
        goto CPyL52;
    }
    return cpy_r_r73;
CPyL49: ;
    cpy_r_r74 = CPySequenceTuple_GetItem(cpy_r_ctx, 10);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 455, CPyStatic_default___globals);
        goto CPyL52;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r74, CPyType_types___Type)))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_pow_callback", 455, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r74);
        goto CPyL52;
    }
    return cpy_r_r75;
CPyL52: ;
    cpy_r_r76 = NULL;
    return cpy_r_r76;
CPyL53: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL52;
CPyL54: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL52;
CPyL55: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL52;
CPyL56: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL52;
CPyL57: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL33;
CPyL58: ;
    CPy_DecRef(cpy_r_r65);
    goto CPyL52;
CPyL59: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL52;
}

PyObject *CPyPy_default___int_pow_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:int_pow_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_default___int_pow_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "int_pow_callback", 438, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___int_neg_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_fallback;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    CPyTagged cpy_r_r67;
    CPyTagged cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyTagged cpy_r_r70;
    CPyTagged cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 464, CPyStatic_default___globals);
        goto CPyL49;
    }
    cpy_r_r1 = (PyObject *)CPyType_types___Instance;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL35;
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 464, CPyStatic_default___globals);
        goto CPyL49;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___Instance))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_neg_callback", 464, CPyStatic_default___globals, "mypy.types.Instance", cpy_r_r5);
        goto CPyL49;
    }
    cpy_r_r7 = ((mypy___types___InstanceObject *)cpy_r_r6)->_last_known_value;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_r7 != cpy_r_r8;
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r9) goto CPyL35;
    cpy_r_r10 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 465, CPyStatic_default___globals);
        goto CPyL49;
    }
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_types___Instance))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_neg_callback", 465, CPyStatic_default___globals, "mypy.types.Instance", cpy_r_r10);
        goto CPyL49;
    }
    cpy_r_r12 = ((mypy___types___InstanceObject *)cpy_r_r11)->_last_known_value;
    if (likely(cpy_r_r12 != Py_None))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_neg_callback", 465, CPyStatic_default___globals, "mypy.types.LiteralType", cpy_r_r12);
        goto CPyL50;
    }
    cpy_r_r14 = ((mypy___types___LiteralTypeObject *)cpy_r_r13)->_value;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r11);
    cpy_r_value = cpy_r_r14;
    cpy_r_r15 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 466, CPyStatic_default___globals);
        goto CPyL51;
    }
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_types___Instance))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_neg_callback", 466, CPyStatic_default___globals, "mypy.types.Instance", cpy_r_r15);
        goto CPyL51;
    }
    cpy_r_r17 = ((mypy___types___InstanceObject *)cpy_r_r16)->_last_known_value;
    if (likely(cpy_r_r17 != Py_None))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_neg_callback", 466, CPyStatic_default___globals, "mypy.types.LiteralType", cpy_r_r17);
        goto CPyL52;
    }
    cpy_r_r19 = ((mypy___types___LiteralTypeObject *)cpy_r_r18)->_fallback;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r16);
    cpy_r_fallback = cpy_r_r19;
    cpy_r_r20 = (PyObject *)&PyLong_Type;
    cpy_r_r21 = PyObject_IsInstance(cpy_r_value, cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 467, CPyStatic_default___globals);
        goto CPyL53;
    }
    cpy_r_r23 = cpy_r_r21;
    if (!cpy_r_r23) goto CPyL54;
    cpy_r_r24 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 468, CPyStatic_default___globals);
        goto CPyL53;
    }
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_checker___TypeChecker))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_neg_callback", 468, CPyStatic_default___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r24);
        goto CPyL53;
    }
    cpy_r_r26 = CPY_GET_ATTR_TRAIT(cpy_r_r25, CPyType_plugin___CheckerPluginInterface, 0, mypy___plugin___CheckerPluginInterfaceObject, PyObject *); /* type_context */
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 468, CPyStatic_default___globals);
        goto CPyL55;
    }
CPyL16: ;
    cpy_r_r27 = CPyList_GetItemShort(cpy_r_r26, -2);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 468, CPyStatic_default___globals);
        goto CPyL55;
    }
    if (PyObject_TypeCheck(cpy_r_r27, CPyType_types___Type))
        cpy_r_r28 = cpy_r_r27;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL4920;
    if (cpy_r_r27 == Py_None)
        cpy_r_r28 = cpy_r_r27;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL4920;
    CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_neg_callback", 468, CPyStatic_default___globals, "mypy.types.Type or None", cpy_r_r27);
    goto CPyL55;
__LL4920: ;
    CPy_DECREF(cpy_r_r25);
    cpy_r_r29 = CPyDef_typeops___is_literal_type_like(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 468, CPyStatic_default___globals);
        goto CPyL53;
    }
    if (!cpy_r_r29) goto CPyL56;
    if (likely(PyLong_Check(cpy_r_value)))
        cpy_r_r30 = CPyTagged_FromObject(cpy_r_value);
    else {
        CPy_TypeError("int", cpy_r_value); cpy_r_r30 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r30 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 469, CPyStatic_default___globals);
        goto CPyL57;
    }
    cpy_r_r31 = CPyTagged_Negate(cpy_r_r30);
    CPyTagged_DECREF(cpy_r_r30);
    cpy_r_r32 = CPyTagged_StealAsObject(cpy_r_r31);
    cpy_r_r33 = CPY_INT_TAG;
    cpy_r_r34 = CPY_INT_TAG;
    cpy_r_r35 = CPyDef_types___LiteralType(cpy_r_r32, cpy_r_fallback, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_fallback);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 469, CPyStatic_default___globals);
        goto CPyL49;
    }
    return cpy_r_r35;
CPyL23: ;
    cpy_r_r36 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 471, CPyStatic_default___globals);
        goto CPyL51;
    }
    if (likely(Py_TYPE(cpy_r_r36) == CPyType_types___Instance))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_neg_callback", 471, CPyStatic_default___globals, "mypy.types.Instance", cpy_r_r36);
        goto CPyL51;
    }
    if (likely(PyLong_Check(cpy_r_value)))
        cpy_r_r38 = CPyTagged_FromObject(cpy_r_value);
    else {
        CPy_TypeError("int", cpy_r_value); cpy_r_r38 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r38 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 473, CPyStatic_default___globals);
        goto CPyL58;
    }
    cpy_r_r39 = CPyTagged_Negate(cpy_r_r38);
    CPyTagged_DECREF(cpy_r_r38);
    cpy_r_r40 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 473, CPyStatic_default___globals);
        goto CPyL59;
    }
    if (likely(Py_TYPE(cpy_r_r40) == CPyType_types___Instance))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_neg_callback", 473, CPyStatic_default___globals, "mypy.types.Instance", cpy_r_r40);
        goto CPyL59;
    }
    cpy_r_r42 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 473, CPyStatic_default___globals);
        goto CPyL60;
    }
    if (likely(Py_TYPE(cpy_r_r42) == CPyType_types___Instance))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_neg_callback", 473, CPyStatic_default___globals, "mypy.types.Instance", cpy_r_r42);
        goto CPyL60;
    }
    cpy_r_r44 = ((mypy___types___InstanceObject *)cpy_r_r43)->_line;
    CPyTagged_INCREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 473, CPyStatic_default___globals);
        goto CPyL61;
    }
    if (likely(Py_TYPE(cpy_r_r45) == CPyType_types___Instance))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_neg_callback", 473, CPyStatic_default___globals, "mypy.types.Instance", cpy_r_r45);
        goto CPyL61;
    }
    cpy_r_r47 = ((mypy___types___InstanceObject *)cpy_r_r46)->_column;
    CPyTagged_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = CPyTagged_StealAsObject(cpy_r_r39);
    cpy_r_r49 = CPyDef_types___LiteralType(cpy_r_r48, cpy_r_r41, cpy_r_r44, cpy_r_r47);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r41);
    CPyTagged_DECREF(cpy_r_r44);
    CPyTagged_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 472, CPyStatic_default___globals);
        goto CPyL58;
    }
    cpy_r_r50 = NULL;
    cpy_r_r51 = CPyDef_types___Instance___copy_modified(cpy_r_r37, cpy_r_r50, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 471, CPyStatic_default___globals);
        goto CPyL49;
    }
    return cpy_r_r51;
CPyL35: ;
    cpy_r_r52 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 476, CPyStatic_default___globals);
        goto CPyL49;
    }
    cpy_r_r53 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_r52)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    CPy_DECREF(cpy_r_r52);
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    if (!cpy_r_r56) goto CPyL46;
    cpy_r_r57 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 477, CPyStatic_default___globals);
        goto CPyL49;
    }
    if (likely(Py_TYPE(cpy_r_r57) == CPyType_types___LiteralType))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_neg_callback", 477, CPyStatic_default___globals, "mypy.types.LiteralType", cpy_r_r57);
        goto CPyL49;
    }
    cpy_r_r59 = ((mypy___types___LiteralTypeObject *)cpy_r_r58)->_value;
    CPy_INCREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    cpy_r_value = cpy_r_r59;
    cpy_r_r60 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 478, CPyStatic_default___globals);
        goto CPyL51;
    }
    if (likely(Py_TYPE(cpy_r_r60) == CPyType_types___LiteralType))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_neg_callback", 478, CPyStatic_default___globals, "mypy.types.LiteralType", cpy_r_r60);
        goto CPyL51;
    }
    cpy_r_r62 = ((mypy___types___LiteralTypeObject *)cpy_r_r61)->_fallback;
    CPy_INCREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    cpy_r_fallback = cpy_r_r62;
    cpy_r_r63 = (PyObject *)&PyLong_Type;
    cpy_r_r64 = PyObject_IsInstance(cpy_r_value, cpy_r_r63);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 479, CPyStatic_default___globals);
        goto CPyL53;
    }
    cpy_r_r66 = cpy_r_r64;
    if (!cpy_r_r66) goto CPyL54;
    if (likely(PyLong_Check(cpy_r_value)))
        cpy_r_r67 = CPyTagged_FromObject(cpy_r_value);
    else {
        CPy_TypeError("int", cpy_r_value); cpy_r_r67 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r67 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 480, CPyStatic_default___globals);
        goto CPyL57;
    }
    cpy_r_r68 = CPyTagged_Negate(cpy_r_r67);
    CPyTagged_DECREF(cpy_r_r67);
    cpy_r_r69 = CPyTagged_StealAsObject(cpy_r_r68);
    cpy_r_r70 = CPY_INT_TAG;
    cpy_r_r71 = CPY_INT_TAG;
    cpy_r_r72 = CPyDef_types___LiteralType(cpy_r_r69, cpy_r_fallback, cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_fallback);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 480, CPyStatic_default___globals);
        goto CPyL49;
    }
    return cpy_r_r72;
CPyL46: ;
    cpy_r_r73 = CPySequenceTuple_GetItem(cpy_r_ctx, 10);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 481, CPyStatic_default___globals);
        goto CPyL49;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r73, CPyType_types___Type)))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "int_neg_callback", 481, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r73);
        goto CPyL49;
    }
    return cpy_r_r74;
CPyL49: ;
    cpy_r_r75 = NULL;
    return cpy_r_r75;
CPyL50: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL49;
CPyL51: ;
    CPy_DecRef(cpy_r_value);
    goto CPyL49;
CPyL52: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r16);
    goto CPyL49;
CPyL53: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_fallback);
    goto CPyL49;
CPyL54: ;
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_fallback);
    goto CPyL46;
CPyL55: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_r25);
    goto CPyL49;
CPyL56: ;
    CPy_DECREF(cpy_r_fallback);
    goto CPyL23;
CPyL57: ;
    CPy_DecRef(cpy_r_fallback);
    goto CPyL49;
CPyL58: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL49;
CPyL59: ;
    CPy_DecRef(cpy_r_r37);
    CPyTagged_DecRef(cpy_r_r39);
    goto CPyL49;
CPyL60: ;
    CPy_DecRef(cpy_r_r37);
    CPyTagged_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r41);
    goto CPyL49;
CPyL61: ;
    CPy_DecRef(cpy_r_r37);
    CPyTagged_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r41);
    CPyTagged_DecRef(cpy_r_r44);
    goto CPyL49;
}

PyObject *CPyPy_default___int_neg_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:int_neg_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_default___int_neg_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "int_neg_callback", 458, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___tuple_mul_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
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
    PyObject *cpy_r_arg_type;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
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
    int32_t cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 489, CPyStatic_default___globals);
        goto CPyL45;
    }
    cpy_r_r1 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (cpy_r_r4) goto CPyL5;
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_ctx, 10);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 490, CPyStatic_default___globals);
        goto CPyL45;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r5, CPyType_types___Type)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "tuple_mul_callback", 490, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r5);
        goto CPyL45;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 492, CPyStatic_default___globals);
        goto CPyL45;
    }
    if (likely(PyList_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "tuple_mul_callback", 492, CPyStatic_default___globals, "list", cpy_r_r7);
        goto CPyL45;
    }
    cpy_r_r9 = CPyList_GetItemShortBorrow(cpy_r_r8, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 492, CPyStatic_default___globals);
        goto CPyL46;
    }
    if (likely(PyList_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "tuple_mul_callback", 492, CPyStatic_default___globals, "list", cpy_r_r9);
        goto CPyL46;
    }
    cpy_r_r11 = CPyList_GetItemShort(cpy_r_r10, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 492, CPyStatic_default___globals);
        goto CPyL46;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "tuple_mul_callback", 492, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r11);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_r8);
    cpy_r_r13 = CPyDef_types___get_proper_type(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 492, CPyStatic_default___globals);
        goto CPyL45;
    }
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "tuple_mul_callback", 492, CPyStatic_default___globals, "mypy.types.ProperType", cpy_r_r13);
        goto CPyL45;
    }
    cpy_r_arg_type = cpy_r_r14;
    cpy_r_r15 = (PyObject *)CPyType_types___Instance;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_arg_type)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (!cpy_r_r18) goto CPyL28;
    if (likely(Py_TYPE(cpy_r_arg_type) == CPyType_types___Instance))
        cpy_r_r19 = cpy_r_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "tuple_mul_callback", 493, CPyStatic_default___globals, "mypy.types.Instance", cpy_r_arg_type);
        goto CPyL47;
    }
    cpy_r_r20 = ((mypy___types___InstanceObject *)cpy_r_r19)->_last_known_value;
    cpy_r_r21 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r22 = cpy_r_r20 != cpy_r_r21;
    if (!cpy_r_r22) goto CPyL28;
    if (likely(Py_TYPE(cpy_r_arg_type) == CPyType_types___Instance))
        cpy_r_r23 = cpy_r_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "tuple_mul_callback", 494, CPyStatic_default___globals, "mypy.types.Instance", cpy_r_arg_type);
        goto CPyL47;
    }
    cpy_r_r24 = ((mypy___types___InstanceObject *)cpy_r_r23)->_last_known_value;
    if (likely(cpy_r_r24 != Py_None))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "tuple_mul_callback", 494, CPyStatic_default___globals, "mypy.types.LiteralType", cpy_r_r24);
        goto CPyL47;
    }
    cpy_r_r26 = ((mypy___types___LiteralTypeObject *)cpy_r_r25)->_value;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_arg_type);
    cpy_r_value = cpy_r_r26;
    cpy_r_r27 = (PyObject *)&PyLong_Type;
    cpy_r_r28 = PyObject_IsInstance(cpy_r_value, cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 495, CPyStatic_default___globals);
        goto CPyL48;
    }
    cpy_r_r30 = cpy_r_r28;
    if (!cpy_r_r30) goto CPyL49;
    cpy_r_r31 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 496, CPyStatic_default___globals);
        goto CPyL48;
    }
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_types___TupleType))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "tuple_mul_callback", 496, CPyStatic_default___globals, "mypy.types.TupleType", cpy_r_r31);
        goto CPyL48;
    }
    cpy_r_r33 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 496, CPyStatic_default___globals);
        goto CPyL50;
    }
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_types___TupleType))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "tuple_mul_callback", 496, CPyStatic_default___globals, "mypy.types.TupleType", cpy_r_r33);
        goto CPyL50;
    }
    cpy_r_r35 = ((mypy___types___TupleTypeObject *)cpy_r_r34)->_items;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (likely(PyLong_Check(cpy_r_value)))
        cpy_r_r36 = CPyTagged_FromObject(cpy_r_value);
    else {
        CPy_TypeError("int", cpy_r_value); cpy_r_r36 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r36 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 496, CPyStatic_default___globals);
        goto CPyL51;
    }
    cpy_r_r37 = CPySequence_Multiply(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    CPyTagged_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 496, CPyStatic_default___globals);
        goto CPyL52;
    }
    cpy_r_r38 = NULL;
    cpy_r_r39 = CPyDef_types___TupleType___copy_modified(cpy_r_r32, cpy_r_r38, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 496, CPyStatic_default___globals);
        goto CPyL45;
    }
    return cpy_r_r39;
CPyL28: ;
    cpy_r_r40 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 497, CPyStatic_default___globals);
        goto CPyL47;
    }
    cpy_r_r41 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_r40)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    CPy_DECREF(cpy_r_r40);
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (!cpy_r_r44) goto CPyL53;
    cpy_r_r45 = CPyStatics[2242]; /* 'value' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_arg_type, cpy_r_r45);
    CPy_DECREF(cpy_r_arg_type);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 498, CPyStatic_default___globals);
        goto CPyL45;
    }
    if (PyLong_Check(cpy_r_r46))
        cpy_r_r47 = cpy_r_r46;
    else {
        cpy_r_r47 = NULL;
    }
    if (cpy_r_r47 != NULL) goto __LL4921;
    if (PyUnicode_Check(cpy_r_r46))
        cpy_r_r47 = cpy_r_r46;
    else {
        cpy_r_r47 = NULL;
    }
    if (cpy_r_r47 != NULL) goto __LL4921;
    if (PyBool_Check(cpy_r_r46))
        cpy_r_r47 = cpy_r_r46;
    else {
        cpy_r_r47 = NULL;
    }
    if (cpy_r_r47 != NULL) goto __LL4921;
    if (CPyFloat_Check(cpy_r_r46))
        cpy_r_r47 = cpy_r_r46;
    else {
        cpy_r_r47 = NULL;
    }
    if (cpy_r_r47 != NULL) goto __LL4921;
    CPy_TypeErrorTraceback("mypy/plugins/default.py", "tuple_mul_callback", 498, CPyStatic_default___globals, "union[int, str, bool, float]", cpy_r_r46);
    goto CPyL45;
__LL4921: ;
    cpy_r_value = cpy_r_r47;
    cpy_r_r48 = (PyObject *)&PyLong_Type;
    cpy_r_r49 = PyObject_IsInstance(cpy_r_value, cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 499, CPyStatic_default___globals);
        goto CPyL48;
    }
    cpy_r_r51 = cpy_r_r49;
    cpy_r_r52 = PyLong_FromLong(cpy_r_r49);
    cpy_r_r53 = PyObject_IsTrue(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", -1, CPyStatic_default___globals);
        goto CPyL48;
    }
    cpy_r_r55 = cpy_r_r53;
    if (!cpy_r_r55) goto CPyL49;
    cpy_r_r56 = CPyStatics[802]; /* 'type' */
    cpy_r_r57 = CPyObject_GetAttr(cpy_r_ctx, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 500, CPyStatic_default___globals);
        goto CPyL48;
    }
    cpy_r_r58 = CPyStatics[802]; /* 'type' */
    cpy_r_r59 = CPyObject_GetAttr(cpy_r_ctx, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 500, CPyStatic_default___globals);
        goto CPyL54;
    }
    cpy_r_r60 = CPyStatics[219]; /* 'items' */
    cpy_r_r61 = CPyObject_GetAttr(cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 500, CPyStatic_default___globals);
        goto CPyL54;
    }
    cpy_r_r62 = PyNumber_Multiply(cpy_r_r61, cpy_r_value);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 500, CPyStatic_default___globals);
        goto CPyL55;
    }
    cpy_r_r63 = CPyStatics[1612]; /* 'copy_modified' */
    PyObject *cpy_r_r64[2] = {cpy_r_r57, cpy_r_r62};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = CPyStatics[9619]; /* ('items',) */
    cpy_r_r67 = PyObject_VectorcallMethod(cpy_r_r63, cpy_r_r65, 9223372036854775809ULL, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 500, CPyStatic_default___globals);
        goto CPyL56;
    }
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r62);
    if (likely(PyObject_TypeCheck(cpy_r_r67, CPyType_types___Type)))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "tuple_mul_callback", 500, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r67);
        goto CPyL45;
    }
    return cpy_r_r68;
CPyL42: ;
    cpy_r_r69 = CPySequenceTuple_GetItem(cpy_r_ctx, 10);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 502, CPyStatic_default___globals);
        goto CPyL45;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r69, CPyType_types___Type)))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/default.py", "tuple_mul_callback", 502, CPyStatic_default___globals, "mypy.types.Type", cpy_r_r69);
        goto CPyL45;
    }
    return cpy_r_r70;
CPyL45: ;
    cpy_r_r71 = NULL;
    return cpy_r_r71;
CPyL46: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL45;
CPyL47: ;
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL45;
CPyL48: ;
    CPy_DecRef(cpy_r_value);
    goto CPyL45;
CPyL49: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL42;
CPyL50: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r32);
    goto CPyL45;
CPyL51: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r35);
    goto CPyL45;
CPyL52: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL45;
CPyL53: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL42;
CPyL54: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r57);
    goto CPyL45;
CPyL55: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL45;
CPyL56: ;
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r62);
    goto CPyL45;
}

PyObject *CPyPy_default___tuple_mul_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:tuple_mul_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_default___tuple_mul_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/default.py", "tuple_mul_callback", 484, CPyStatic_default___globals);
    return NULL;
}

char CPyDef_default_____top_level__(void) {
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
    PyObject **cpy_r_r17;
    void *cpy_r_r19;
    void *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
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
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", -1, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_default___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", 1, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9620]; /* ('partial',) */
    cpy_r_r10 = CPyStatics[2546]; /* 'functools' */
    cpy_r_r11 = CPyStatic_default___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", 3, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_functools = cpy_r_r12;
    CPy_INCREF(CPyModule_functools);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9429]; /* ('Callable',) */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_default___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", 4, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = (PyObject **)&CPyModule_mypy___errorcodes;
    PyObject **cpy_r_r18[1] = {cpy_r_r17};
    cpy_r_r19 = (void *)&cpy_r_r18;
    int64_t cpy_r_r20[1] = {6};
    cpy_r_r21 = (void *)&cpy_r_r20;
    cpy_r_r22 = CPyStatics[9269]; /* (('mypy.errorcodes', 'mypy.errorcodes', 'codes'),) */
    cpy_r_r23 = CPyStatic_default___globals;
    cpy_r_r24 = CPyStatics[4605]; /* 'mypy/plugins/default.py' */
    cpy_r_r25 = CPyStatics[17]; /* '<module>' */
    cpy_r_r26 = CPyImport_ImportMany(cpy_r_r22, cpy_r_r19, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r21);
    if (!cpy_r_r26) goto CPyL21;
    cpy_r_r27 = CPyStatics[9256]; /* ('message_registry',) */
    cpy_r_r28 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r29 = CPyStatic_default___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", 7, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_mypy = cpy_r_r30;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[9621]; /* ('DictExpr', 'IntExpr', 'StrExpr', 'UnaryExpr') */
    cpy_r_r32 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r33 = CPyStatic_default___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", 8, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_mypy___nodes = cpy_r_r34;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[9622]; /* ('AttributeContext', 'ClassDefContext',
                                     'FunctionContext', 'FunctionSigContext',
                                     'MethodContext', 'MethodSigContext', 'Plugin') */
    cpy_r_r36 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r37 = CPyStatic_default___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", 9, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_mypy___plugin = cpy_r_r38;
    CPy_INCREF(CPyModule_mypy___plugin);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[9600]; /* ('try_getting_str_literals',) */
    cpy_r_r40 = CPyStatics[4441]; /* 'mypy.plugins.common' */
    cpy_r_r41 = CPyStatic_default___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", 18, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_mypy___plugins___common = cpy_r_r42;
    CPy_INCREF(CPyModule_mypy___plugins___common);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[9078]; /* ('is_subtype',) */
    cpy_r_r44 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r45 = CPyStatic_default___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", 19, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_mypy___subtypes = cpy_r_r46;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[9623]; /* ('is_literal_type_like', 'make_simplified_union') */
    cpy_r_r48 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r49 = CPyStatic_default___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", 20, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_mypy___typeops = cpy_r_r50;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[9624]; /* ('TPDICT_FB_NAMES', 'AnyType', 'CallableType',
                                     'FunctionLike', 'Instance', 'LiteralType', 'NoneType',
                                     'TupleType', 'Type', 'TypedDictType', 'TypeOfAny',
                                     'TypeVarType', 'UnionType', 'get_proper_type',
                                     'get_proper_types') */
    cpy_r_r52 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r53 = CPyStatic_default___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", 21, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_mypy___types = cpy_r_r54;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = (PyObject *)CPyType_plugin___Plugin;
    cpy_r_r56 = PyTuple_Pack(1, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", 40, CPyStatic_default___globals);
        goto CPyL21;
    }
    cpy_r_r57 = CPyStatics[585]; /* 'mypy.plugins.default' */
    cpy_r_r58 = (PyObject *)CPyType_default___DefaultPlugin_template;
    cpy_r_r59 = CPyType_FromTemplate(cpy_r_r58, cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", 40, CPyStatic_default___globals);
        goto CPyL21;
    }
    cpy_r_r60 = CPyDef_default___DefaultPlugin_trait_vtable_setup();
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", -1, CPyStatic_default___globals);
        goto CPyL22;
    }
    cpy_r_r61 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r62 = CPyStatics[1569]; /* 'python_version' */
    cpy_r_r63 = CPyStatics[4380]; /* '_modules' */
    cpy_r_r64 = CPyStatics[159]; /* 'options' */
    cpy_r_r65 = PyTuple_Pack(3, cpy_r_r62, cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", 40, CPyStatic_default___globals);
        goto CPyL22;
    }
    cpy_r_r66 = PyObject_SetAttr(cpy_r_r59, cpy_r_r61, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", 40, CPyStatic_default___globals);
        goto CPyL22;
    }
    CPyType_default___DefaultPlugin = (PyTypeObject *)cpy_r_r59;
    CPy_INCREF(CPyType_default___DefaultPlugin);
    cpy_r_r68 = CPyStatic_default___globals;
    cpy_r_r69 = CPyStatics[584]; /* 'DefaultPlugin' */
    cpy_r_r70 = CPyDict_SetItem(cpy_r_r68, cpy_r_r69, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/plugins/default.py", "<module>", 40, CPyStatic_default___globals);
        goto CPyL21;
    }
    return 1;
CPyL21: ;
    cpy_r_r72 = 2;
    return cpy_r_r72;
CPyL22: ;
    CPy_DecRef(cpy_r_r59);
    goto CPyL21;
}
