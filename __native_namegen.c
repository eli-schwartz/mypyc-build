#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
namegen___NameGenerator_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *namegen___NameGenerator_setup(PyTypeObject *type);
PyObject *CPyDef_namegen___NameGenerator(PyObject *cpy_r_groups);

static PyObject *
namegen___NameGenerator_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_namegen___NameGenerator) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = namegen___NameGenerator_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_namegen___NameGenerator_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
namegen___NameGenerator_traverse(mypyc___namegen___NameGeneratorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_module_map);
    Py_VISIT(self->_translations);
    Py_VISIT(self->_used_names);
    return 0;
}

static int
namegen___NameGenerator_clear(mypyc___namegen___NameGeneratorObject *self)
{
    Py_CLEAR(self->_module_map);
    Py_CLEAR(self->_translations);
    Py_CLEAR(self->_used_names);
    return 0;
}

static void
namegen___NameGenerator_dealloc(mypyc___namegen___NameGeneratorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, namegen___NameGenerator_dealloc)
    namegen___NameGenerator_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem namegen___NameGenerator_vtable[2];
static bool
CPyDef_namegen___NameGenerator_trait_vtable_setup(void)
{
    CPyVTableItem namegen___NameGenerator_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_namegen___NameGenerator_____init__,
        (CPyVTableItem)CPyDef_namegen___NameGenerator___private_name,
    };
    memcpy(namegen___NameGenerator_vtable, namegen___NameGenerator_vtable_scratch, sizeof(namegen___NameGenerator_vtable));
    return 1;
}

static PyObject *
namegen___NameGenerator_get_module_map(mypyc___namegen___NameGeneratorObject *self, void *closure);
static int
namegen___NameGenerator_set_module_map(mypyc___namegen___NameGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
namegen___NameGenerator_get_translations(mypyc___namegen___NameGeneratorObject *self, void *closure);
static int
namegen___NameGenerator_set_translations(mypyc___namegen___NameGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
namegen___NameGenerator_get_used_names(mypyc___namegen___NameGeneratorObject *self, void *closure);
static int
namegen___NameGenerator_set_used_names(mypyc___namegen___NameGeneratorObject *self, PyObject *value, void *closure);

static PyGetSetDef namegen___NameGenerator_getseters[] = {
    {"module_map",
     (getter)namegen___NameGenerator_get_module_map, (setter)namegen___NameGenerator_set_module_map,
     NULL, NULL},
    {"translations",
     (getter)namegen___NameGenerator_get_translations, (setter)namegen___NameGenerator_set_translations,
     NULL, NULL},
    {"used_names",
     (getter)namegen___NameGenerator_get_used_names, (setter)namegen___NameGenerator_set_used_names,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef namegen___NameGenerator_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_namegen___NameGenerator_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"private_name",
     (PyCFunction)CPyPy_namegen___NameGenerator___private_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_namegen___NameGenerator_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "NameGenerator",
    .tp_new = namegen___NameGenerator_new,
    .tp_dealloc = (destructor)namegen___NameGenerator_dealloc,
    .tp_traverse = (traverseproc)namegen___NameGenerator_traverse,
    .tp_clear = (inquiry)namegen___NameGenerator_clear,
    .tp_getset = namegen___NameGenerator_getseters,
    .tp_methods = namegen___NameGenerator_methods,
    .tp_init = namegen___NameGenerator_init,
    .tp_basicsize = sizeof(mypyc___namegen___NameGeneratorObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_namegen___NameGenerator_template = &CPyType_namegen___NameGenerator_template_;

static PyObject *
namegen___NameGenerator_setup(PyTypeObject *type)
{
    mypyc___namegen___NameGeneratorObject *self;
    self = (mypyc___namegen___NameGeneratorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = namegen___NameGenerator_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_namegen___NameGenerator(PyObject *cpy_r_groups)
{
    PyObject *self = namegen___NameGenerator_setup(CPyType_namegen___NameGenerator);
    if (self == NULL)
        return NULL;
    char res = CPyDef_namegen___NameGenerator_____init__(self, cpy_r_groups);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
namegen___NameGenerator_get_module_map(mypyc___namegen___NameGeneratorObject *self, void *closure)
{
    if (unlikely(self->_module_map == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'module_map' of 'NameGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_module_map);
    PyObject *retval = self->_module_map;
    return retval;
}

static int
namegen___NameGenerator_set_module_map(mypyc___namegen___NameGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NameGenerator' object attribute 'module_map' cannot be deleted");
        return -1;
    }
    if (self->_module_map != NULL) {
        CPy_DECREF(self->_module_map);
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
    self->_module_map = tmp;
    return 0;
}

static PyObject *
namegen___NameGenerator_get_translations(mypyc___namegen___NameGeneratorObject *self, void *closure)
{
    if (unlikely(self->_translations == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'translations' of 'NameGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_translations);
    PyObject *retval = self->_translations;
    return retval;
}

static int
namegen___NameGenerator_set_translations(mypyc___namegen___NameGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NameGenerator' object attribute 'translations' cannot be deleted");
        return -1;
    }
    if (self->_translations != NULL) {
        CPy_DECREF(self->_translations);
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
    self->_translations = tmp;
    return 0;
}

static PyObject *
namegen___NameGenerator_get_used_names(mypyc___namegen___NameGeneratorObject *self, void *closure)
{
    if (unlikely(self->_used_names == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'used_names' of 'NameGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_used_names);
    PyObject *retval = self->_used_names;
    return retval;
}

static int
namegen___NameGenerator_set_used_names(mypyc___namegen___NameGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NameGenerator' object attribute 'used_names' cannot be deleted");
        return -1;
    }
    if (self->_used_names != NULL) {
        CPy_DECREF(self->_used_names);
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
    self->_used_names = tmp;
    return 0;
}
static PyMethodDef namegenmodule_methods[] = {
    {"exported_name", (PyCFunction)CPyPy_namegen___exported_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"make_module_translation_map", (PyCFunction)CPyPy_namegen___make_module_translation_map, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"candidate_suffixes", (PyCFunction)CPyPy_namegen___candidate_suffixes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef namegenmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.namegen",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    namegenmodule_methods
};

PyObject *CPyInit_mypyc___namegen(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___namegen_internal) {
        Py_INCREF(CPyModule_mypyc___namegen_internal);
        return CPyModule_mypyc___namegen_internal;
    }
    CPyModule_mypyc___namegen_internal = PyModule_Create(&namegenmodule);
    if (unlikely(CPyModule_mypyc___namegen_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___namegen_internal, "__name__");
    CPyStatic_namegen___globals = PyModule_GetDict(CPyModule_mypyc___namegen_internal);
    if (unlikely(CPyStatic_namegen___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_namegen_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___namegen_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___namegen_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_namegen___NameGenerator);
    return NULL;
}

char CPyDef_namegen___NameGenerator_____init__(PyObject *cpy_r_self, PyObject *cpy_r_groups) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_names;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "__init__", 48, CPyStatic_namegen___globals);
        goto CPyL10;
    }
    ((mypyc___namegen___NameGeneratorObject *)cpy_r_self)->_module_map = cpy_r_r0;
    cpy_r_r1 = PyObject_GetIter(cpy_r_groups);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "__init__", 49, CPyStatic_namegen___globals);
        goto CPyL10;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL11;
    if (likely(PyList_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/namegen.py", "__init__", 49, CPyStatic_namegen___globals, "list", cpy_r_r2);
        goto CPyL12;
    }
    cpy_r_names = cpy_r_r3;
    cpy_r_r4 = ((mypyc___namegen___NameGeneratorObject *)cpy_r_self)->_module_map;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_namegen___make_module_translation_map(cpy_r_names);
    CPy_DECREF(cpy_r_names);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "__init__", 50, CPyStatic_namegen___globals);
        goto CPyL13;
    }
    cpy_r_r6 = CPyDict_Update(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/namegen.py", "__init__", 50, CPyStatic_namegen___globals);
        goto CPyL12;
    } else
        goto CPyL2;
CPyL6: ;
    cpy_r_r8 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/namegen.py", "__init__", 49, CPyStatic_namegen___globals);
        goto CPyL10;
    }
    cpy_r_r9 = PyDict_New();
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "__init__", 51, CPyStatic_namegen___globals);
        goto CPyL10;
    }
    ((mypyc___namegen___NameGeneratorObject *)cpy_r_self)->_translations = cpy_r_r9;
    cpy_r_r10 = PySet_New(NULL);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "__init__", 52, CPyStatic_namegen___globals);
        goto CPyL10;
    }
    ((mypyc___namegen___NameGeneratorObject *)cpy_r_self)->_used_names = cpy_r_r10;
    return 1;
CPyL10: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL10;
}

PyObject *CPyPy_namegen___NameGenerator_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"groups", 0};
    PyObject *obj_groups;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_groups)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_namegen___NameGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.namegen.NameGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_groups = obj_groups;
    char retval = CPyDef_namegen___NameGenerator_____init__(arg_self, arg_groups);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/namegen.py", "__init__", 40, CPyStatic_namegen___globals);
    return NULL;
}

PyObject *CPyDef_namegen___NameGenerator___private_name(PyObject *cpy_r_self, PyObject *cpy_r_module, PyObject *cpy_r_partial_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    tuple_T2OO cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    tuple_T2OO cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_module_prefix;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_actual;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    tuple_T2OO cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    if (cpy_r_partial_name != NULL) goto CPyL32;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_partial_name = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_partial_name == cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL33;
    } else
        goto CPyL9;
CPyL3: ;
    cpy_r_r3 = ((mypyc___namegen___NameGeneratorObject *)cpy_r_self)->_module_map;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r3, cpy_r_module);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "private_name", 69, CPyStatic_namegen___globals);
        goto CPyL31;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/namegen.py", "private_name", 69, CPyStatic_namegen___globals, "str", cpy_r_r4);
        goto CPyL31;
    }
    cpy_r_r6 = CPyStatics[224]; /* '.' */
    cpy_r_r7 = CPyStatics[272]; /* 'rstrip' */
    PyObject *cpy_r_r8[2] = {cpy_r_r5, cpy_r_r6};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = PyObject_VectorcallMethod(cpy_r_r7, cpy_r_r9, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "private_name", 69, CPyStatic_namegen___globals);
        goto CPyL34;
    }
    CPy_DECREF(cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/namegen.py", "private_name", 69, CPyStatic_namegen___globals, "str", cpy_r_r10);
        goto CPyL31;
    }
    cpy_r_r12 = CPyDef_namegen___exported_name(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "private_name", 69, CPyStatic_namegen___globals);
        goto CPyL31;
    }
    return cpy_r_r12;
CPyL9: ;
    CPy_INCREF(cpy_r_partial_name);
    if (likely(cpy_r_partial_name != Py_None))
        cpy_r_r13 = cpy_r_partial_name;
    else {
        CPy_TypeErrorTraceback("mypyc/namegen.py", "private_name", 70, CPyStatic_namegen___globals, "str", cpy_r_partial_name);
        goto CPyL35;
    }
    cpy_r_r14.f0 = cpy_r_module;
    cpy_r_r14.f1 = cpy_r_r13;
    CPy_INCREF(cpy_r_r14.f0);
    CPy_INCREF(cpy_r_r14.f1);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = ((mypyc___namegen___NameGeneratorObject *)cpy_r_self)->_translations;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = PyTuple_New(2);
    if (unlikely(cpy_r_r16 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10613 = cpy_r_r14.f0;
    PyTuple_SET_ITEM(cpy_r_r16, 0, __tmp10613);
    PyObject *__tmp10614 = cpy_r_r14.f1;
    PyTuple_SET_ITEM(cpy_r_r16, 1, __tmp10614);
    cpy_r_r17 = PyDict_Contains(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/namegen.py", "private_name", 70, CPyStatic_namegen___globals);
        goto CPyL35;
    }
    cpy_r_r19 = cpy_r_r17;
    if (!cpy_r_r19) goto CPyL16;
    cpy_r_r20 = ((mypyc___namegen___NameGeneratorObject *)cpy_r_self)->_translations;
    CPy_INCREF(cpy_r_r20);
    if (likely(cpy_r_partial_name != Py_None))
        cpy_r_r21 = cpy_r_partial_name;
    else {
        CPy_TypeErrorTraceback("mypyc/namegen.py", "private_name", 71, CPyStatic_namegen___globals, "str", cpy_r_partial_name);
        goto CPyL36;
    }
    cpy_r_r22.f0 = cpy_r_module;
    cpy_r_r22.f1 = cpy_r_r21;
    CPy_INCREF(cpy_r_r22.f0);
    CPy_INCREF(cpy_r_r22.f1);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = PyTuple_New(2);
    if (unlikely(cpy_r_r23 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10615 = cpy_r_r22.f0;
    PyTuple_SET_ITEM(cpy_r_r23, 0, __tmp10615);
    PyObject *__tmp10616 = cpy_r_r22.f1;
    PyTuple_SET_ITEM(cpy_r_r23, 1, __tmp10616);
    cpy_r_r24 = CPyDict_GetItem(cpy_r_r20, cpy_r_r23);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "private_name", 71, CPyStatic_namegen___globals);
        goto CPyL31;
    }
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/namegen.py", "private_name", 71, CPyStatic_namegen___globals, "str", cpy_r_r24);
        goto CPyL31;
    }
    return cpy_r_r25;
CPyL16: ;
    cpy_r_r26 = ((mypyc___namegen___NameGeneratorObject *)cpy_r_self)->_module_map;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = PyDict_Contains(cpy_r_r26, cpy_r_module);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/namegen.py", "private_name", 72, CPyStatic_namegen___globals);
        goto CPyL35;
    }
    cpy_r_r29 = cpy_r_r27;
    if (!cpy_r_r29) goto CPyL21;
    cpy_r_r30 = ((mypyc___namegen___NameGeneratorObject *)cpy_r_self)->_module_map;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r30, cpy_r_module);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "private_name", 73, CPyStatic_namegen___globals);
        goto CPyL35;
    }
    if (likely(PyUnicode_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/namegen.py", "private_name", 73, CPyStatic_namegen___globals, "str", cpy_r_r31);
        goto CPyL35;
    }
    cpy_r_module_prefix = cpy_r_r32;
    goto CPyL25;
CPyL21: ;
    cpy_r_r33 = CPyStr_IsTrue(cpy_r_module);
    if (!cpy_r_r33) goto CPyL24;
    cpy_r_r34 = CPyStatics[224]; /* '.' */
    cpy_r_r35 = PyUnicode_Concat(cpy_r_module, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "private_name", 75, CPyStatic_namegen___globals);
        goto CPyL35;
    }
    cpy_r_module_prefix = cpy_r_r35;
    goto CPyL25;
CPyL24: ;
    cpy_r_r36 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r36);
    cpy_r_module_prefix = cpy_r_r36;
CPyL25: ;
    CPy_INCREF(cpy_r_partial_name);
    if (likely(cpy_r_partial_name != Py_None))
        cpy_r_r37 = cpy_r_partial_name;
    else {
        CPy_TypeErrorTraceback("mypyc/namegen.py", "private_name", 78, CPyStatic_namegen___globals, "str", cpy_r_partial_name);
        goto CPyL37;
    }
    cpy_r_r38 = CPyStr_Build(2, cpy_r_module_prefix, cpy_r_r37);
    CPy_DECREF(cpy_r_module_prefix);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "private_name", 78, CPyStatic_namegen___globals);
        goto CPyL35;
    }
    cpy_r_r39 = CPyDef_namegen___exported_name(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "private_name", 78, CPyStatic_namegen___globals);
        goto CPyL35;
    }
    cpy_r_actual = cpy_r_r39;
    cpy_r_r40 = ((mypyc___namegen___NameGeneratorObject *)cpy_r_self)->_translations;
    CPy_INCREF(cpy_r_r40);
    if (likely(cpy_r_partial_name != Py_None))
        cpy_r_r41 = cpy_r_partial_name;
    else {
        CPy_TypeErrorTraceback("mypyc/namegen.py", "private_name", 79, CPyStatic_namegen___globals, "str", cpy_r_partial_name);
        goto CPyL38;
    }
    cpy_r_r42.f0 = cpy_r_module;
    cpy_r_r42.f1 = cpy_r_r41;
    CPy_INCREF(cpy_r_r42.f0);
    CPy_INCREF(cpy_r_r42.f1);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = PyTuple_New(2);
    if (unlikely(cpy_r_r43 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10617 = cpy_r_r42.f0;
    PyTuple_SET_ITEM(cpy_r_r43, 0, __tmp10617);
    PyObject *__tmp10618 = cpy_r_r42.f1;
    PyTuple_SET_ITEM(cpy_r_r43, 1, __tmp10618);
    cpy_r_r44 = CPyDict_SetItem(cpy_r_r40, cpy_r_r43, cpy_r_actual);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/namegen.py", "private_name", 79, CPyStatic_namegen___globals);
        goto CPyL39;
    }
    return cpy_r_actual;
CPyL31: ;
    cpy_r_r46 = NULL;
    return cpy_r_r46;
CPyL32: ;
    CPy_INCREF(cpy_r_partial_name);
    goto CPyL2;
CPyL33: ;
    CPy_DECREF(cpy_r_partial_name);
    goto CPyL3;
CPyL34: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL31;
CPyL35: ;
    CPy_DecRef(cpy_r_partial_name);
    goto CPyL31;
CPyL36: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL31;
CPyL37: ;
    CPy_DecRef(cpy_r_partial_name);
    CPy_DecRef(cpy_r_module_prefix);
    goto CPyL31;
CPyL38: ;
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_r40);
    goto CPyL31;
CPyL39: ;
    CPy_DecRef(cpy_r_actual);
    goto CPyL31;
}

PyObject *CPyPy_namegen___NameGenerator___private_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module", "partial_name", 0};
    static CPyArg_Parser parser = {"O|O:private_name", kwlist, 0};
    PyObject *obj_module;
    PyObject *obj_partial_name = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module, &obj_partial_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_namegen___NameGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.namegen.NameGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *arg_partial_name;
    if (obj_partial_name == NULL) {
        arg_partial_name = NULL;
        goto __LL10619;
    }
    if (PyUnicode_Check(obj_partial_name))
        arg_partial_name = obj_partial_name;
    else {
        arg_partial_name = NULL;
    }
    if (arg_partial_name != NULL) goto __LL10619;
    if (obj_partial_name == Py_None)
        arg_partial_name = obj_partial_name;
    else {
        arg_partial_name = NULL;
    }
    if (arg_partial_name != NULL) goto __LL10619;
    CPy_TypeError("str or None", obj_partial_name); 
    goto fail;
__LL10619: ;
    PyObject *retval = CPyDef_namegen___NameGenerator___private_name(arg_self, arg_module, arg_partial_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/namegen.py", "private_name", 54, CPyStatic_namegen___globals);
    return NULL;
}

PyObject *CPyDef_namegen___exported_name(PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyStatics[8663]; /* '___' */
    cpy_r_r1 = CPyStatics[8664]; /* '___3_' */
    cpy_r_r2 = PyUnicode_Replace(cpy_r_fullname, cpy_r_r0, cpy_r_r1, -1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "exported_name", 91, CPyStatic_namegen___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyStatics[224]; /* '.' */
    cpy_r_r4 = CPyStatics[8663]; /* '___' */
    cpy_r_r5 = PyUnicode_Replace(cpy_r_r2, cpy_r_r3, cpy_r_r4, -1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "exported_name", 91, CPyStatic_namegen___globals);
        goto CPyL3;
    }
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_namegen___exported_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:exported_name", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_namegen___exported_name(arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/namegen.py", "exported_name", 83, CPyStatic_namegen___globals);
    return NULL;
}

PyObject *CPyDef_namegen___make_module_translation_map(PyObject *cpy_r_names) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_num_instances;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_suffix;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_result;
    CPyTagged cpy_r_r26;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyPtr cpy_r_r35;
    int64_t cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "make_module_translation_map", 95, CPyStatic_namegen___globals);
        goto CPyL33;
    }
    cpy_r_num_instances = cpy_r_r0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_names)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL13;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_names, cpy_r_r1);
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/namegen.py", "make_module_translation_map", 96, CPyStatic_namegen___globals, "str", cpy_r_r6);
        goto CPyL34;
    }
    cpy_r_name = cpy_r_r7;
    cpy_r_r8 = CPyDef_namegen___candidate_suffixes(cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "make_module_translation_map", 97, CPyStatic_namegen___globals);
        goto CPyL34;
    }
    cpy_r_r9 = 0;
CPyL6: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL35;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r8, cpy_r_r9);
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/namegen.py", "make_module_translation_map", 97, CPyStatic_namegen___globals, "str", cpy_r_r14);
        goto CPyL36;
    }
    cpy_r_suffix = cpy_r_r15;
    cpy_r_r16 = CPyStatics[9015]; /* 0 */
    cpy_r_r17 = CPyDict_Get(cpy_r_num_instances, cpy_r_suffix, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "make_module_translation_map", 98, CPyStatic_namegen___globals);
        goto CPyL37;
    }
    if (likely(PyLong_Check(cpy_r_r17)))
        cpy_r_r18 = CPyTagged_FromObject(cpy_r_r17);
    else {
        CPy_TypeError("int", cpy_r_r17); cpy_r_r18 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/namegen.py", "make_module_translation_map", 98, CPyStatic_namegen___globals);
        goto CPyL37;
    }
    cpy_r_r19 = CPyTagged_Add(cpy_r_r18, 2);
    CPyTagged_DECREF(cpy_r_r18);
    cpy_r_r20 = CPyTagged_StealAsObject(cpy_r_r19);
    cpy_r_r21 = CPyDict_SetItem(cpy_r_num_instances, cpy_r_suffix, cpy_r_r20);
    CPy_DECREF(cpy_r_suffix);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/namegen.py", "make_module_translation_map", 98, CPyStatic_namegen___globals);
        goto CPyL36;
    }
    cpy_r_r23 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r23;
    goto CPyL6;
CPyL12: ;
    cpy_r_r24 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r24;
    goto CPyL2;
CPyL13: ;
    cpy_r_r25 = PyDict_New();
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "make_module_translation_map", 99, CPyStatic_namegen___globals);
        goto CPyL34;
    }
    cpy_r_result = cpy_r_r25;
    cpy_r_r26 = 0;
CPyL15: ;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_names)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = (Py_ssize_t)cpy_r_r26 < (Py_ssize_t)cpy_r_r29;
    if (!cpy_r_r30) goto CPyL38;
    cpy_r_r31 = CPyList_GetItemUnsafe(cpy_r_names, cpy_r_r26);
    if (likely(PyUnicode_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/namegen.py", "make_module_translation_map", 100, CPyStatic_namegen___globals, "str", cpy_r_r31);
        goto CPyL39;
    }
    cpy_r_name = cpy_r_r32;
    cpy_r_r33 = CPyDef_namegen___candidate_suffixes(cpy_r_name);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "make_module_translation_map", 101, CPyStatic_namegen___globals);
        goto CPyL40;
    }
    cpy_r_r34 = 0;
CPyL19: ;
    cpy_r_r35 = (CPyPtr)&((PyVarObject *)cpy_r_r33)->ob_size;
    cpy_r_r36 = *(int64_t *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 << 1;
    cpy_r_r38 = (Py_ssize_t)cpy_r_r34 < (Py_ssize_t)cpy_r_r37;
    if (!cpy_r_r38) goto CPyL41;
    cpy_r_r39 = CPyList_GetItemUnsafe(cpy_r_r33, cpy_r_r34);
    if (likely(PyUnicode_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/namegen.py", "make_module_translation_map", 101, CPyStatic_namegen___globals, "str", cpy_r_r39);
        goto CPyL42;
    }
    cpy_r_suffix = cpy_r_r40;
    cpy_r_r41 = CPyDict_GetItem(cpy_r_num_instances, cpy_r_suffix);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "make_module_translation_map", 102, CPyStatic_namegen___globals);
        goto CPyL43;
    }
    if (likely(PyLong_Check(cpy_r_r41)))
        cpy_r_r42 = CPyTagged_FromObject(cpy_r_r41);
    else {
        CPy_TypeError("int", cpy_r_r41); cpy_r_r42 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/namegen.py", "make_module_translation_map", 102, CPyStatic_namegen___globals);
        goto CPyL43;
    }
    cpy_r_r43 = cpy_r_r42 == 2;
    CPyTagged_DECREF(cpy_r_r42);
    if (cpy_r_r43) {
        goto CPyL44;
    } else
        goto CPyL45;
CPyL24: ;
    cpy_r_r44 = CPyDict_SetItem(cpy_r_result, cpy_r_name, cpy_r_suffix);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_suffix);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/namegen.py", "make_module_translation_map", 103, CPyStatic_namegen___globals);
        goto CPyL39;
    } else
        goto CPyL31;
CPyL25: ;
    cpy_r_r46 = cpy_r_r34 + 2;
    cpy_r_r34 = cpy_r_r46;
    goto CPyL19;
CPyL26: ;
    if (0) {
        goto CPyL31;
    } else
        goto CPyL46;
CPyL27: ;
    cpy_r_r47 = CPyModule_builtins;
    cpy_r_r48 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "make_module_translation_map", 106, CPyStatic_namegen___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r50[1] = {cpy_r_names};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = _PyObject_Vectorcall(cpy_r_r49, cpy_r_r51, 1, 0);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "make_module_translation_map", 106, CPyStatic_namegen___globals);
        goto CPyL33;
    }
    CPy_Raise(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/namegen.py", "make_module_translation_map", 106, CPyStatic_namegen___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r53 = cpy_r_r26 + 2;
    cpy_r_r26 = cpy_r_r53;
    goto CPyL15;
CPyL32: ;
    return cpy_r_result;
CPyL33: ;
    cpy_r_r54 = NULL;
    return cpy_r_r54;
CPyL34: ;
    CPy_DecRef(cpy_r_num_instances);
    goto CPyL33;
CPyL35: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL12;
CPyL36: ;
    CPy_DecRef(cpy_r_num_instances);
    CPy_DecRef(cpy_r_r8);
    goto CPyL33;
CPyL37: ;
    CPy_DecRef(cpy_r_num_instances);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_suffix);
    goto CPyL33;
CPyL38: ;
    CPy_DECREF(cpy_r_num_instances);
    goto CPyL32;
CPyL39: ;
    CPy_DecRef(cpy_r_num_instances);
    CPy_DecRef(cpy_r_result);
    goto CPyL33;
CPyL40: ;
    CPy_DecRef(cpy_r_num_instances);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_result);
    goto CPyL33;
CPyL41: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r33);
    goto CPyL26;
CPyL42: ;
    CPy_DecRef(cpy_r_num_instances);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r33);
    goto CPyL33;
CPyL43: ;
    CPy_DecRef(cpy_r_num_instances);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_suffix);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r33);
    goto CPyL33;
CPyL44: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL24;
CPyL45: ;
    CPy_DECREF(cpy_r_suffix);
    goto CPyL25;
CPyL46: ;
    CPy_DECREF(cpy_r_num_instances);
    CPy_DECREF(cpy_r_result);
    goto CPyL27;
}

PyObject *CPyPy_namegen___make_module_translation_map(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"names", 0};
    static CPyArg_Parser parser = {"O:make_module_translation_map", kwlist, 0};
    PyObject *obj_names;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_names)) {
        return NULL;
    }
    PyObject *arg_names;
    if (likely(PyList_Check(obj_names)))
        arg_names = obj_names;
    else {
        CPy_TypeError("list", obj_names); 
        goto fail;
    }
    PyObject *retval = CPyDef_namegen___make_module_translation_map(arg_names);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/namegen.py", "make_module_translation_map", 94, CPyStatic_namegen___globals);
    return NULL;
}

PyObject *CPyDef_namegen___candidate_suffixes(PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_components;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_result;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_i;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = CPyStatics[224]; /* '.' */
    cpy_r_r1 = PyUnicode_Split(cpy_r_fullname, cpy_r_r0, -1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "candidate_suffixes", 111, CPyStatic_namegen___globals);
        goto CPyL11;
    }
    cpy_r_components = cpy_r_r1;
    cpy_r_r2 = CPyStatics[163]; /* '' */
    cpy_r_r3 = PyList_New(1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "candidate_suffixes", 112, CPyStatic_namegen___globals);
        goto CPyL12;
    }
    cpy_r_r4 = (CPyPtr)&((PyListObject *)cpy_r_r3)->ob_item;
    cpy_r_r5 = *(CPyPtr *)cpy_r_r4;
    CPy_INCREF(cpy_r_r2);
    *(PyObject * *)cpy_r_r5 = cpy_r_r2;
    cpy_r_result = cpy_r_r3;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_components)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = 0;
    cpy_r_i = cpy_r_r9;
CPyL3: ;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r10) goto CPyL13;
    cpy_r_r11 = CPyStatics[224]; /* '.' */
    cpy_r_r12 = CPyTagged_Negate(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r13 = CPyTagged_Subtract(cpy_r_r12, 2);
    CPyTagged_DECREF(cpy_r_r12);
    cpy_r_r14 = CPyList_GetSlice(cpy_r_components, cpy_r_r13, 9223372036854775806LL);
    CPyTagged_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "candidate_suffixes", 114, CPyStatic_namegen___globals);
        goto CPyL14;
    }
    if (likely(PyList_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/namegen.py", "candidate_suffixes", 114, CPyStatic_namegen___globals, "list", cpy_r_r14);
        goto CPyL14;
    }
    cpy_r_r16 = PyUnicode_Join(cpy_r_r11, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "candidate_suffixes", 114, CPyStatic_namegen___globals);
        goto CPyL14;
    }
    cpy_r_r17 = CPyStatics[224]; /* '.' */
    cpy_r_r18 = PyUnicode_Concat(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "candidate_suffixes", 114, CPyStatic_namegen___globals);
        goto CPyL14;
    }
    cpy_r_r19 = PyList_Append(cpy_r_result, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/namegen.py", "candidate_suffixes", 114, CPyStatic_namegen___globals);
        goto CPyL14;
    }
    cpy_r_r21 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r21;
    cpy_r_i = cpy_r_r21;
    goto CPyL3;
CPyL10: ;
    return cpy_r_result;
CPyL11: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL12: ;
    CPy_DecRef(cpy_r_components);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_components);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_result);
    goto CPyL11;
}

PyObject *CPyPy_namegen___candidate_suffixes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:candidate_suffixes", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_namegen___candidate_suffixes(arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/namegen.py", "candidate_suffixes", 110, CPyStatic_namegen___globals);
    return NULL;
}

char CPyDef_namegen_____top_level__(void) {
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
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "<module>", -1, CPyStatic_namegen___globals);
        goto CPyL11;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_namegen___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "<module>", 1, CPyStatic_namegen___globals);
        goto CPyL11;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9766]; /* ('Iterable',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_namegen___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "<module>", 3, CPyStatic_namegen___globals);
        goto CPyL11;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = NULL;
    cpy_r_r14 = CPyStatics[6845]; /* 'mypyc.namegen' */
    cpy_r_r15 = (PyObject *)CPyType_namegen___NameGenerator_template;
    cpy_r_r16 = CPyType_FromTemplate(cpy_r_r15, cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "<module>", 6, CPyStatic_namegen___globals);
        goto CPyL11;
    }
    cpy_r_r17 = CPyDef_namegen___NameGenerator_trait_vtable_setup();
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/namegen.py", "<module>", -1, CPyStatic_namegen___globals);
        goto CPyL12;
    }
    cpy_r_r18 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r19 = CPyStatics[8665]; /* 'module_map' */
    cpy_r_r20 = CPyStatics[8666]; /* 'translations' */
    cpy_r_r21 = CPyStatics[8667]; /* 'used_names' */
    cpy_r_r22 = PyTuple_Pack(3, cpy_r_r19, cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/namegen.py", "<module>", 6, CPyStatic_namegen___globals);
        goto CPyL12;
    }
    cpy_r_r23 = PyObject_SetAttr(cpy_r_r16, cpy_r_r18, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/namegen.py", "<module>", 6, CPyStatic_namegen___globals);
        goto CPyL12;
    }
    CPyType_namegen___NameGenerator = (PyTypeObject *)cpy_r_r16;
    CPy_INCREF(CPyType_namegen___NameGenerator);
    cpy_r_r25 = CPyStatic_namegen___globals;
    cpy_r_r26 = CPyStatics[7044]; /* 'NameGenerator' */
    cpy_r_r27 = CPyDict_SetItem(cpy_r_r25, cpy_r_r26, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/namegen.py", "<module>", 6, CPyStatic_namegen___globals);
        goto CPyL11;
    }
    return 1;
CPyL11: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL12: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL11;
}
