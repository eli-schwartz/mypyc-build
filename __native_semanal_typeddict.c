#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
semanal_typeddict___TypedDictAnalyzer_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *semanal_typeddict___TypedDictAnalyzer_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_typeddict___TypedDictAnalyzer(PyObject *cpy_r_options, PyObject *cpy_r_api, PyObject *cpy_r_msg);

static PyObject *
semanal_typeddict___TypedDictAnalyzer_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_typeddict___TypedDictAnalyzer) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = semanal_typeddict___TypedDictAnalyzer_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_semanal_typeddict___TypedDictAnalyzer_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
semanal_typeddict___TypedDictAnalyzer_traverse(mypy___semanal_typeddict___TypedDictAnalyzerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_options);
    Py_VISIT(self->_api);
    Py_VISIT(self->_msg);
    return 0;
}

static int
semanal_typeddict___TypedDictAnalyzer_clear(mypy___semanal_typeddict___TypedDictAnalyzerObject *self)
{
    Py_CLEAR(self->_options);
    Py_CLEAR(self->_api);
    Py_CLEAR(self->_msg);
    return 0;
}

static void
semanal_typeddict___TypedDictAnalyzer_dealloc(mypy___semanal_typeddict___TypedDictAnalyzerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_typeddict___TypedDictAnalyzer_dealloc)
    semanal_typeddict___TypedDictAnalyzer_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_typeddict___TypedDictAnalyzer_vtable[14];
static bool
CPyDef_semanal_typeddict___TypedDictAnalyzer_trait_vtable_setup(void)
{
    CPyVTableItem semanal_typeddict___TypedDictAnalyzer_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_semanal_typeddict___TypedDictAnalyzer_____init__,
        (CPyVTableItem)CPyDef_semanal_typeddict___TypedDictAnalyzer___analyze_typeddict_classdef,
        (CPyVTableItem)CPyDef_semanal_typeddict___TypedDictAnalyzer___add_keys_and_types_from_base,
        (CPyVTableItem)CPyDef_semanal_typeddict___TypedDictAnalyzer___analyze_base_args,
        (CPyVTableItem)CPyDef_semanal_typeddict___TypedDictAnalyzer___map_items_to_base,
        (CPyVTableItem)CPyDef_semanal_typeddict___TypedDictAnalyzer___analyze_typeddict_classdef_fields,
        (CPyVTableItem)CPyDef_semanal_typeddict___TypedDictAnalyzer___check_typeddict,
        (CPyVTableItem)CPyDef_semanal_typeddict___TypedDictAnalyzer___parse_typeddict_args,
        (CPyVTableItem)CPyDef_semanal_typeddict___TypedDictAnalyzer___parse_typeddict_fields_with_types,
        (CPyVTableItem)CPyDef_semanal_typeddict___TypedDictAnalyzer___fail_typeddict_arg,
        (CPyVTableItem)CPyDef_semanal_typeddict___TypedDictAnalyzer___build_typeddict_typeinfo,
        (CPyVTableItem)CPyDef_semanal_typeddict___TypedDictAnalyzer___is_typeddict,
        (CPyVTableItem)CPyDef_semanal_typeddict___TypedDictAnalyzer___fail,
        (CPyVTableItem)CPyDef_semanal_typeddict___TypedDictAnalyzer___note,
    };
    memcpy(semanal_typeddict___TypedDictAnalyzer_vtable, semanal_typeddict___TypedDictAnalyzer_vtable_scratch, sizeof(semanal_typeddict___TypedDictAnalyzer_vtable));
    return 1;
}

static PyObject *
semanal_typeddict___TypedDictAnalyzer_get_options(mypy___semanal_typeddict___TypedDictAnalyzerObject *self, void *closure);
static int
semanal_typeddict___TypedDictAnalyzer_set_options(mypy___semanal_typeddict___TypedDictAnalyzerObject *self, PyObject *value, void *closure);
static PyObject *
semanal_typeddict___TypedDictAnalyzer_get_api(mypy___semanal_typeddict___TypedDictAnalyzerObject *self, void *closure);
static int
semanal_typeddict___TypedDictAnalyzer_set_api(mypy___semanal_typeddict___TypedDictAnalyzerObject *self, PyObject *value, void *closure);
static PyObject *
semanal_typeddict___TypedDictAnalyzer_get_msg(mypy___semanal_typeddict___TypedDictAnalyzerObject *self, void *closure);
static int
semanal_typeddict___TypedDictAnalyzer_set_msg(mypy___semanal_typeddict___TypedDictAnalyzerObject *self, PyObject *value, void *closure);

static PyGetSetDef semanal_typeddict___TypedDictAnalyzer_getseters[] = {
    {"options",
     (getter)semanal_typeddict___TypedDictAnalyzer_get_options, (setter)semanal_typeddict___TypedDictAnalyzer_set_options,
     NULL, NULL},
    {"api",
     (getter)semanal_typeddict___TypedDictAnalyzer_get_api, (setter)semanal_typeddict___TypedDictAnalyzer_set_api,
     NULL, NULL},
    {"msg",
     (getter)semanal_typeddict___TypedDictAnalyzer_get_msg, (setter)semanal_typeddict___TypedDictAnalyzer_set_msg,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef semanal_typeddict___TypedDictAnalyzer_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_semanal_typeddict___TypedDictAnalyzer_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"analyze_typeddict_classdef",
     (PyCFunction)CPyPy_semanal_typeddict___TypedDictAnalyzer___analyze_typeddict_classdef,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_keys_and_types_from_base",
     (PyCFunction)CPyPy_semanal_typeddict___TypedDictAnalyzer___add_keys_and_types_from_base,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"analyze_base_args",
     (PyCFunction)CPyPy_semanal_typeddict___TypedDictAnalyzer___analyze_base_args,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"map_items_to_base",
     (PyCFunction)CPyPy_semanal_typeddict___TypedDictAnalyzer___map_items_to_base,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"analyze_typeddict_classdef_fields",
     (PyCFunction)CPyPy_semanal_typeddict___TypedDictAnalyzer___analyze_typeddict_classdef_fields,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_typeddict",
     (PyCFunction)CPyPy_semanal_typeddict___TypedDictAnalyzer___check_typeddict,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"parse_typeddict_args",
     (PyCFunction)CPyPy_semanal_typeddict___TypedDictAnalyzer___parse_typeddict_args,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"parse_typeddict_fields_with_types",
     (PyCFunction)CPyPy_semanal_typeddict___TypedDictAnalyzer___parse_typeddict_fields_with_types,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fail_typeddict_arg",
     (PyCFunction)CPyPy_semanal_typeddict___TypedDictAnalyzer___fail_typeddict_arg,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"build_typeddict_typeinfo",
     (PyCFunction)CPyPy_semanal_typeddict___TypedDictAnalyzer___build_typeddict_typeinfo,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_typeddict",
     (PyCFunction)CPyPy_semanal_typeddict___TypedDictAnalyzer___is_typeddict,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fail",
     (PyCFunction)CPyPy_semanal_typeddict___TypedDictAnalyzer___fail,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"note",
     (PyCFunction)CPyPy_semanal_typeddict___TypedDictAnalyzer___note,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_typeddict___TypedDictAnalyzer_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypedDictAnalyzer",
    .tp_new = semanal_typeddict___TypedDictAnalyzer_new,
    .tp_dealloc = (destructor)semanal_typeddict___TypedDictAnalyzer_dealloc,
    .tp_traverse = (traverseproc)semanal_typeddict___TypedDictAnalyzer_traverse,
    .tp_clear = (inquiry)semanal_typeddict___TypedDictAnalyzer_clear,
    .tp_getset = semanal_typeddict___TypedDictAnalyzer_getseters,
    .tp_methods = semanal_typeddict___TypedDictAnalyzer_methods,
    .tp_init = semanal_typeddict___TypedDictAnalyzer_init,
    .tp_basicsize = sizeof(mypy___semanal_typeddict___TypedDictAnalyzerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_semanal_typeddict___TypedDictAnalyzer_template = &CPyType_semanal_typeddict___TypedDictAnalyzer_template_;

static PyObject *
semanal_typeddict___TypedDictAnalyzer_setup(PyTypeObject *type)
{
    mypy___semanal_typeddict___TypedDictAnalyzerObject *self;
    self = (mypy___semanal_typeddict___TypedDictAnalyzerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_typeddict___TypedDictAnalyzer_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_typeddict___TypedDictAnalyzer(PyObject *cpy_r_options, PyObject *cpy_r_api, PyObject *cpy_r_msg)
{
    PyObject *self = semanal_typeddict___TypedDictAnalyzer_setup(CPyType_semanal_typeddict___TypedDictAnalyzer);
    if (self == NULL)
        return NULL;
    char res = CPyDef_semanal_typeddict___TypedDictAnalyzer_____init__(self, cpy_r_options, cpy_r_api, cpy_r_msg);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
semanal_typeddict___TypedDictAnalyzer_get_options(mypy___semanal_typeddict___TypedDictAnalyzerObject *self, void *closure)
{
    if (unlikely(self->_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options' of 'TypedDictAnalyzer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options);
    PyObject *retval = self->_options;
    return retval;
}

static int
semanal_typeddict___TypedDictAnalyzer_set_options(mypy___semanal_typeddict___TypedDictAnalyzerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypedDictAnalyzer' object attribute 'options' cannot be deleted");
        return -1;
    }
    if (self->_options != NULL) {
        CPy_DECREF(self->_options);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_mypy___options___Options))
        tmp = value;
    else {
        CPy_TypeError("mypy.options.Options", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_options = tmp;
    return 0;
}

static PyObject *
semanal_typeddict___TypedDictAnalyzer_get_api(mypy___semanal_typeddict___TypedDictAnalyzerObject *self, void *closure)
{
    if (unlikely(self->_api == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'api' of 'TypedDictAnalyzer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_api);
    PyObject *retval = self->_api;
    return retval;
}

static int
semanal_typeddict___TypedDictAnalyzer_set_api(mypy___semanal_typeddict___TypedDictAnalyzerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypedDictAnalyzer' object attribute 'api' cannot be deleted");
        return -1;
    }
    if (self->_api != NULL) {
        CPy_DECREF(self->_api);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_semanal___SemanticAnalyzer))
        tmp = value;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_api = tmp;
    return 0;
}

static PyObject *
semanal_typeddict___TypedDictAnalyzer_get_msg(mypy___semanal_typeddict___TypedDictAnalyzerObject *self, void *closure)
{
    if (unlikely(self->_msg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'msg' of 'TypedDictAnalyzer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_msg);
    PyObject *retval = self->_msg;
    return retval;
}

static int
semanal_typeddict___TypedDictAnalyzer_set_msg(mypy___semanal_typeddict___TypedDictAnalyzerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypedDictAnalyzer' object attribute 'msg' cannot be deleted");
        return -1;
    }
    if (self->_msg != NULL) {
        CPy_DECREF(self->_msg);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_messages___MessageBuilder))
        tmp = value;
    else {
        CPy_TypeError("mypy.messages.MessageBuilder", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_msg = tmp;
    return 0;
}
static PyMethodDef semanal_typeddictmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef semanal_typeddictmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.semanal_typeddict",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    semanal_typeddictmodule_methods
};

PyObject *CPyInit_mypy___semanal_typeddict(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___semanal_typeddict_internal) {
        Py_INCREF(CPyModule_mypy___semanal_typeddict_internal);
        return CPyModule_mypy___semanal_typeddict_internal;
    }
    CPyModule_mypy___semanal_typeddict_internal = PyModule_Create(&semanal_typeddictmodule);
    if (unlikely(CPyModule_mypy___semanal_typeddict_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___semanal_typeddict_internal, "__name__");
    CPyStatic_semanal_typeddict___globals = PyModule_GetDict(CPyModule_mypy___semanal_typeddict_internal);
    if (unlikely(CPyStatic_semanal_typeddict___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_semanal_typeddict_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___semanal_typeddict_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___semanal_typeddict_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_semanal_typeddict___TypedDictAnalyzer);
    return NULL;
}

char CPyDef_semanal_typeddict___TypedDictAnalyzer_____init__(PyObject *cpy_r_self, PyObject *cpy_r_options, PyObject *cpy_r_api, PyObject *cpy_r_msg) {
    CPy_INCREF(cpy_r_options);
    ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_options = cpy_r_options;
    CPy_INCREF(cpy_r_api);
    ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api = cpy_r_api;
    CPy_INCREF(cpy_r_msg);
    ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_msg = cpy_r_msg;
    return 1;
}

PyObject *CPyPy_semanal_typeddict___TypedDictAnalyzer_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"options", "api", "msg", 0};
    PyObject *obj_options;
    PyObject *obj_api;
    PyObject *obj_msg;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO", "__init__", kwlist, &obj_options, &obj_api, &obj_msg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeddict___TypedDictAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeddict.TypedDictAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_api;
    if (likely(Py_TYPE(obj_api) == CPyType_semanal___SemanticAnalyzer))
        arg_api = obj_api;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_api); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(Py_TYPE(obj_msg) == CPyType_messages___MessageBuilder))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("mypy.messages.MessageBuilder", obj_msg); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeddict___TypedDictAnalyzer_____init__(arg_self, arg_options, arg_api, arg_msg);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeddict.py", "__init__", 57, CPyStatic_semanal_typeddict___globals);
    return NULL;
}

tuple_T2CO CPyDef_semanal_typeddict___TypedDictAnalyzer___analyze_typeddict_classdef(PyObject *cpy_r_self, PyObject *cpy_r_defn) {
    char cpy_r_possible;
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_base_expr;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    tuple_T3OOO cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    CPyTagged cpy_r_r72;
    tuple_T2CC cpy_r_r73;
    PyObject *cpy_r_r74;
    tuple_T2CO cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_existing_info;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyPtr cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyPtr cpy_r_r86;
    int64_t cpy_r_r87;
    CPyTagged cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyPtr cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyPtr cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    CPyPtr cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    tuple_T3OOO cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    tuple_T4OOOO cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_fields;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_statements;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_required_keys;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    tuple_T2CC cpy_r_r124;
    PyObject *cpy_r_r125;
    tuple_T2CO cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    CPyTagged cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    CPyTagged cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    CPyTagged cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    tuple_T2CO cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_typeddict_bases;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_typeddict_bases_set;
    PyObject *cpy_r_r146;
    CPyTagged cpy_r_r147;
    CPyPtr cpy_r_r148;
    int64_t cpy_r_r149;
    CPyTagged cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_expr;
    PyObject *cpy_r_r154;
    CPyPtr cpy_r_r155;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    CPyPtr cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    CPyPtr cpy_r_r165;
    PyObject *cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    tuple_T3OOO cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    int32_t cpy_r_r173;
    char cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    int32_t cpy_r_r177;
    char cpy_r_r178;
    char cpy_r_r179;
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    int32_t cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    CPyPtr cpy_r_r188;
    PyObject *cpy_r_r189;
    char cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    CPyPtr cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    char cpy_r_r196;
    PyObject *cpy_r_r197;
    CPyPtr cpy_r_r198;
    PyObject *cpy_r_r199;
    char cpy_r_r200;
    PyObject *cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    char cpy_r_r205;
    char cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    int32_t cpy_r_r209;
    char cpy_r_r210;
    char cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    int32_t cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    int32_t cpy_r_r218;
    char cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    CPyPtr cpy_r_r223;
    PyObject *cpy_r_r224;
    char cpy_r_r225;
    char cpy_r_r226;
    PyObject *cpy_r_r227;
    CPyPtr cpy_r_r228;
    PyObject *cpy_r_r229;
    char cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    char cpy_r_r240;
    PyObject *cpy_r_r241;
    CPyPtr cpy_r_r242;
    PyObject *cpy_r_r243;
    char cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    char cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    CPyPtr cpy_r_r251;
    PyObject *cpy_r_r252;
    char cpy_r_r253;
    char cpy_r_r254;
    PyObject *cpy_r_r255;
    CPyPtr cpy_r_r256;
    PyObject *cpy_r_r257;
    char cpy_r_r258;
    char cpy_r_r259;
    PyObject *cpy_r_r260;
    CPyPtr cpy_r_r261;
    PyObject *cpy_r_r262;
    char cpy_r_r263;
    char cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    char cpy_r_r269;
    char cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    int32_t cpy_r_r275;
    char cpy_r_r276;
    char cpy_r_r277;
    char cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    int32_t cpy_r_r283;
    char cpy_r_r284;
    PyObject *cpy_r_r285;
    int32_t cpy_r_r286;
    char cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    CPyPtr cpy_r_r293;
    PyObject *cpy_r_r294;
    char cpy_r_r295;
    char cpy_r_r296;
    PyObject *cpy_r_r297;
    CPyPtr cpy_r_r298;
    PyObject *cpy_r_r299;
    char cpy_r_r300;
    char cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    char cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    char cpy_r_r315;
    CPyTagged cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_keys;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    CPyPtr cpy_r_r320;
    int64_t cpy_r_r321;
    CPyTagged cpy_r_r322;
    CPyTagged cpy_r_r323;
    CPyTagged cpy_r_r324;
    int64_t cpy_r_r325;
    char cpy_r_r326;
    int64_t cpy_r_r327;
    char cpy_r_r328;
    char cpy_r_r329;
    char cpy_r_r330;
    char cpy_r_r331;
    char cpy_r_r332;
    char cpy_r_r333;
    CPyPtr cpy_r_r334;
    int64_t cpy_r_r335;
    CPyTagged cpy_r_r336;
    int64_t cpy_r_r337;
    char cpy_r_r338;
    int64_t cpy_r_r339;
    char cpy_r_r340;
    char cpy_r_r341;
    char cpy_r_r342;
    char cpy_r_r343;
    char cpy_r_r344;
    PyObject *cpy_r_r345;
    CPyTagged cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_base;
    char cpy_r_r349;
    CPyTagged cpy_r_r350;
    tuple_T4OOOO cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_new_keys;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_new_types;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_new_statements;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_new_required_keys;
    PyObject *cpy_r_r356;
    char cpy_r_r357;
    tuple_T2CC cpy_r_r358;
    PyObject *cpy_r_r359;
    tuple_T2CO cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    int32_t cpy_r_r364;
    char cpy_r_r365;
    PyObject *cpy_r_r366;
    CPyTagged cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    char cpy_r_r370;
    CPyTagged cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    char cpy_r_r374;
    CPyTagged cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    char cpy_r_r378;
    PyObject *cpy_r_r379;
    char cpy_r_r380;
    tuple_T2CO cpy_r_r381;
    tuple_T2CO cpy_r_r382;
    cpy_r_possible = 0;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_base_type_exprs;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL214;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_nodes___Expression)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 80, CPyStatic_semanal_typeddict___globals, "mypy.nodes.Expression", cpy_r_r6);
        goto CPyL215;
    }
    cpy_r_base_expr = cpy_r_r7;
    cpy_r_r8 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_base_expr)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL6;
    if (likely(Py_TYPE(cpy_r_base_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r12 = cpy_r_base_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 82, CPyStatic_semanal_typeddict___globals, "mypy.nodes.IndexExpr", cpy_r_base_expr);
        goto CPyL216;
    }
    cpy_r_r13 = ((mypy___nodes___IndexExprObject *)cpy_r_r12)->_base;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_base_expr);
    cpy_r_base_expr = cpy_r_r13;
CPyL6: ;
    cpy_r_r14 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_base_expr)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL8;
    cpy_r_r18 = cpy_r_r17;
    goto CPyL9;
CPyL8: ;
    cpy_r_r19 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_base_expr)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    cpy_r_r18 = cpy_r_r22;
CPyL9: ;
    if (!cpy_r_r18) goto CPyL11;
    cpy_r_r23 = cpy_r_r18;
    goto CPyL12;
CPyL11: ;
    cpy_r_r24 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_base_expr)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    cpy_r_r23 = cpy_r_r27;
CPyL12: ;
    if (!cpy_r_r23) goto CPyL217;
    cpy_r_r28 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r28);
    CPy_INCREF(cpy_r_base_expr);
    if (likely((Py_TYPE(cpy_r_base_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_base_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_base_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r29 = cpy_r_base_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 84, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_base_expr);
        goto CPyL218;
    }
    cpy_r_r30 = CPY_GET_METHOD_TRAIT(cpy_r_r28, CPyType_semanal_shared___SemanticAnalyzerInterface, 3, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *))(cpy_r_r28, cpy_r_r29); /* accept */
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 84, CPyStatic_semanal_typeddict___globals);
        goto CPyL216;
    }
    CPy_INCREF(cpy_r_base_expr);
    if (likely((Py_TYPE(cpy_r_base_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_base_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_base_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r31 = cpy_r_base_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 85, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_base_expr);
        goto CPyL216;
    }
    cpy_r_r32 = CPY_GET_ATTR(cpy_r_r31, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 85, CPyStatic_semanal_typeddict___globals);
        goto CPyL216;
    }
CPyL17: ;
    cpy_r_r33 = CPyStatic_types___TPDICT_NAMES;
    if (unlikely(cpy_r_r33.f0 == NULL)) {
        goto CPyL219;
    } else
        goto CPyL20;
CPyL18: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TPDICT_NAMES\" was not set");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 85, CPyStatic_semanal_typeddict___globals);
        goto CPyL213;
    }
    CPy_Unreachable();
CPyL20: ;
    CPy_INCREF(cpy_r_r33.f0);
    CPy_INCREF(cpy_r_r33.f1);
    CPy_INCREF(cpy_r_r33.f2);
    cpy_r_r35 = PyTuple_New(3);
    if (unlikely(cpy_r_r35 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6161 = cpy_r_r33.f0;
    PyTuple_SET_ITEM(cpy_r_r35, 0, __tmp6161);
    PyObject *__tmp6162 = cpy_r_r33.f1;
    PyTuple_SET_ITEM(cpy_r_r35, 1, __tmp6162);
    PyObject *__tmp6163 = cpy_r_r33.f2;
    PyTuple_SET_ITEM(cpy_r_r35, 2, __tmp6163);
    cpy_r_r36 = PySequence_Contains(cpy_r_r35, cpy_r_r32);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 85, CPyStatic_semanal_typeddict___globals);
        goto CPyL216;
    }
    cpy_r_r38 = cpy_r_r36;
    if (cpy_r_r38) goto CPyL25;
    CPy_INCREF(cpy_r_base_expr);
    if (likely((Py_TYPE(cpy_r_base_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_base_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_base_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r39 = cpy_r_base_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 85, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_base_expr);
        goto CPyL216;
    }
    cpy_r_r40 = CPyDef_semanal_typeddict___TypedDictAnalyzer___is_typeddict(cpy_r_self, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 85, CPyStatic_semanal_typeddict___globals);
        goto CPyL216;
    }
    if (!cpy_r_r40) goto CPyL217;
CPyL25: ;
    cpy_r_possible = 1;
    if (likely((Py_TYPE(cpy_r_base_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_base_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_base_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r41 = cpy_r_base_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 87, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_base_expr);
        goto CPyL216;
    }
    cpy_r_r42 = ((mypy___nodes___RefExprObject *)cpy_r_r41)->_node;
    cpy_r_r43 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r44 = (CPyPtr)&((PyObject *)cpy_r_r42)->ob_type;
    cpy_r_r45 = *(PyObject * *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 == cpy_r_r43;
    if (!cpy_r_r46) goto CPyL28;
    cpy_r_r47 = cpy_r_r46;
    goto CPyL29;
CPyL28: ;
    cpy_r_r48 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r49 = (CPyPtr)&((PyObject *)cpy_r_r42)->ob_type;
    cpy_r_r50 = *(PyObject * *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 == cpy_r_r48;
    cpy_r_r47 = cpy_r_r51;
CPyL29: ;
    if (!cpy_r_r47) goto CPyL217;
    if (likely((Py_TYPE(cpy_r_base_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_base_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_base_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r52 = cpy_r_base_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 87, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_base_expr);
        goto CPyL216;
    }
    cpy_r_r53 = ((mypy___nodes___RefExprObject *)cpy_r_r52)->_node;
    if (likely((Py_TYPE(cpy_r_r53) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r53) == CPyType_nodes___TypeInfo)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 87, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypeInfo", cpy_r_r53);
        goto CPyL216;
    }
    cpy_r_r55 = ((mypy___nodes___TypeInfoObject *)cpy_r_r54)->_is_final;
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AttributeError("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", "TypeInfo", "is_final", 87, CPyStatic_semanal_typeddict___globals);
        goto CPyL216;
    }
CPyL33: ;
    if (!cpy_r_r55) goto CPyL217;
CPyL34: ;
    cpy_r_r56 = CPyStatic_message_registry___CANNOT_INHERIT_FROM_FINAL;
    if (unlikely(cpy_r_r56 == NULL)) {
        goto CPyL220;
    } else
        goto CPyL37;
CPyL35: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"CANNOT_INHERIT_FROM_FINAL\" was not set");
    cpy_r_r57 = 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 88, CPyStatic_semanal_typeddict___globals);
        goto CPyL213;
    }
    CPy_Unreachable();
CPyL37: ;
    CPy_INCREF(cpy_r_r56);
    cpy_r_err = cpy_r_r56;
    if (likely((Py_TYPE(cpy_r_base_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_base_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_base_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r58 = cpy_r_base_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 89, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_base_expr);
        goto CPyL221;
    }
    cpy_r_r59 = ((mypy___nodes___RefExprObject *)cpy_r_r58)->_node;
    CPy_INCREF(cpy_r_r59);
    if (likely((Py_TYPE(cpy_r_r59) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r59) == CPyType_nodes___TypeInfo)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 89, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypeInfo", cpy_r_r59);
        goto CPyL221;
    }
    CPy_DECREF(cpy_r_base_expr);
    cpy_r_r61 = CPY_GET_ATTR(cpy_r_r60, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 89, CPyStatic_semanal_typeddict___globals);
        goto CPyL222;
    }
CPyL40: ;
    cpy_r_r62 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r63[2] = {cpy_r_err, cpy_r_r61};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = PyObject_VectorcallMethod(cpy_r_r62, cpy_r_r64, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 89, CPyStatic_semanal_typeddict___globals);
        goto CPyL223;
    }
    CPy_DECREF(cpy_r_r61);
    if (likely(PyTuple_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 89, CPyStatic_semanal_typeddict___globals, "tuple", cpy_r_r65);
        goto CPyL222;
    }
    cpy_r_r67 = CPySequenceTuple_GetItem(cpy_r_r66, 0);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 89, CPyStatic_semanal_typeddict___globals);
        goto CPyL222;
    }
    if (likely(PyUnicode_Check(cpy_r_r67)))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 89, CPyStatic_semanal_typeddict___globals, "str", cpy_r_r67);
        goto CPyL222;
    }
    cpy_r_r69 = CPySequenceTuple_GetItem(cpy_r_err, 2);
    CPy_DECREF(cpy_r_err);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 89, CPyStatic_semanal_typeddict___globals);
        goto CPyL224;
    }
    if (PyObject_TypeCheck(cpy_r_r69, CPyType_errorcodes___ErrorCode))
        cpy_r_r70 = cpy_r_r69;
    else {
        cpy_r_r70 = NULL;
    }
    if (cpy_r_r70 != NULL) goto __LL6164;
    if (cpy_r_r69 == Py_None)
        cpy_r_r70 = cpy_r_r69;
    else {
        cpy_r_r70 = NULL;
    }
    if (cpy_r_r70 != NULL) goto __LL6164;
    CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 89, CPyStatic_semanal_typeddict___globals, "mypy.errorcodes.ErrorCode or None", cpy_r_r69);
    goto CPyL224;
__LL6164: ;
    cpy_r_r71 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_r68, cpy_r_defn, cpy_r_r70);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 89, CPyStatic_semanal_typeddict___globals);
        goto CPyL215;
    }
CPyL47: ;
    cpy_r_r72 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r72;
    goto CPyL1;
CPyL48: ;
    if (cpy_r_possible) goto CPyL50;
    cpy_r_r73.f0 = 0;
    cpy_r_r73.f1 = 1;
    cpy_r_r74 = Py_None;
    cpy_r_r75.f0 = 0;
    cpy_r_r75.f1 = cpy_r_r74;
    CPy_INCREF(cpy_r_r75.f1);
    return cpy_r_r75;
CPyL50: ;
    cpy_r_r76 = Py_None;
    CPy_INCREF(cpy_r_r76);
    cpy_r_existing_info = cpy_r_r76;
    cpy_r_r77 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_analyzed;
    cpy_r_r78 = (PyObject *)CPyType_nodes___TypedDictExpr;
    cpy_r_r79 = (CPyPtr)&((PyObject *)cpy_r_r77)->ob_type;
    cpy_r_r80 = *(PyObject * *)cpy_r_r79;
    cpy_r_r81 = cpy_r_r80 == cpy_r_r78;
    if (cpy_r_r81) {
        goto CPyL225;
    } else
        goto CPyL53;
CPyL51: ;
    cpy_r_r82 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r82) == CPyType_nodes___TypedDictExpr))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 94, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypedDictExpr", cpy_r_r82);
        goto CPyL213;
    }
    cpy_r_r84 = ((mypy___nodes___TypedDictExprObject *)cpy_r_r83)->_info;
    CPy_INCREF(cpy_r_r84);
    cpy_r_existing_info = cpy_r_r84;
CPyL53: ;
    cpy_r_r85 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_base_type_exprs;
    cpy_r_r86 = (CPyPtr)&((PyVarObject *)cpy_r_r85)->ob_size;
    cpy_r_r87 = *(int64_t *)cpy_r_r86;
    cpy_r_r88 = cpy_r_r87 << 1;
    cpy_r_r89 = cpy_r_r88 == 2;
    if (!cpy_r_r89) goto CPyL79;
    cpy_r_r90 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_base_type_exprs;
    cpy_r_r91 = CPyList_GetItemShortBorrow(cpy_r_r90, 0);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 97, CPyStatic_semanal_typeddict___globals);
        goto CPyL226;
    }
    cpy_r_r92 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r93 = (CPyPtr)&((PyObject *)cpy_r_r91)->ob_type;
    cpy_r_r94 = *(PyObject * *)cpy_r_r93;
    cpy_r_r95 = cpy_r_r94 == cpy_r_r92;
    if (!cpy_r_r95) goto CPyL57;
    cpy_r_r96 = cpy_r_r95;
    goto CPyL58;
CPyL57: ;
    cpy_r_r97 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r98 = (CPyPtr)&((PyObject *)cpy_r_r91)->ob_type;
    cpy_r_r99 = *(PyObject * *)cpy_r_r98;
    cpy_r_r100 = cpy_r_r99 == cpy_r_r97;
    cpy_r_r96 = cpy_r_r100;
CPyL58: ;
    if (!cpy_r_r96) goto CPyL60;
    cpy_r_r101 = cpy_r_r96;
    goto CPyL61;
CPyL60: ;
    cpy_r_r102 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r103 = (CPyPtr)&((PyObject *)cpy_r_r91)->ob_type;
    cpy_r_r104 = *(PyObject * *)cpy_r_r103;
    cpy_r_r105 = cpy_r_r104 == cpy_r_r102;
    cpy_r_r101 = cpy_r_r105;
CPyL61: ;
    if (!cpy_r_r101) goto CPyL79;
    cpy_r_r106 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_base_type_exprs;
    cpy_r_r107 = CPyList_GetItemShort(cpy_r_r106, 0);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 98, CPyStatic_semanal_typeddict___globals);
        goto CPyL226;
    }
    if (likely((Py_TYPE(cpy_r_r107) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r107) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r107) == CPyType_nodes___RefExpr)))
        cpy_r_r108 = cpy_r_r107;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 98, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_r107);
        goto CPyL226;
    }
    cpy_r_r109 = CPY_GET_ATTR(cpy_r_r108, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 98, CPyStatic_semanal_typeddict___globals);
        goto CPyL226;
    }
CPyL65: ;
    cpy_r_r110 = CPyStatic_types___TPDICT_NAMES;
    if (unlikely(cpy_r_r110.f0 == NULL)) {
        goto CPyL227;
    } else
        goto CPyL68;
CPyL66: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TPDICT_NAMES\" was not set");
    cpy_r_r111 = 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 98, CPyStatic_semanal_typeddict___globals);
        goto CPyL213;
    }
    CPy_Unreachable();
CPyL68: ;
    CPy_INCREF(cpy_r_r110.f0);
    CPy_INCREF(cpy_r_r110.f1);
    CPy_INCREF(cpy_r_r110.f2);
    cpy_r_r112 = PyTuple_New(3);
    if (unlikely(cpy_r_r112 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6165 = cpy_r_r110.f0;
    PyTuple_SET_ITEM(cpy_r_r112, 0, __tmp6165);
    PyObject *__tmp6166 = cpy_r_r110.f1;
    PyTuple_SET_ITEM(cpy_r_r112, 1, __tmp6166);
    PyObject *__tmp6167 = cpy_r_r110.f2;
    PyTuple_SET_ITEM(cpy_r_r112, 2, __tmp6167);
    cpy_r_r113 = PySequence_Contains(cpy_r_r112, cpy_r_r109);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r109);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 98, CPyStatic_semanal_typeddict___globals);
        goto CPyL226;
    }
    cpy_r_r115 = cpy_r_r113;
    if (!cpy_r_r115) goto CPyL79;
    cpy_r_r116 = NULL;
    cpy_r_r117 = CPyDef_semanal_typeddict___TypedDictAnalyzer___analyze_typeddict_classdef_fields(cpy_r_self, cpy_r_defn, cpy_r_r116);
    if (unlikely(cpy_r_r117.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 101, CPyStatic_semanal_typeddict___globals);
        goto CPyL226;
    }
    cpy_r_r118 = cpy_r_r117.f0;
    CPy_INCREF(cpy_r_r118);
    cpy_r_fields = cpy_r_r118;
    cpy_r_r119 = cpy_r_r117.f1;
    CPy_INCREF(cpy_r_r119);
    cpy_r_types = cpy_r_r119;
    cpy_r_r120 = cpy_r_r117.f2;
    CPy_INCREF(cpy_r_r120);
    cpy_r_statements = cpy_r_r120;
    cpy_r_r121 = cpy_r_r117.f3;
    CPy_INCREF(cpy_r_r121);
    CPy_DECREF(cpy_r_r117.f0);
    CPy_DECREF(cpy_r_r117.f1);
    CPy_DECREF(cpy_r_r117.f2);
    CPy_DECREF(cpy_r_r117.f3);
    cpy_r_required_keys = cpy_r_r121;
    cpy_r_r122 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r123 = cpy_r_fields == cpy_r_r122;
    if (cpy_r_r123) {
        goto CPyL228;
    } else
        goto CPyL73;
CPyL72: ;
    cpy_r_r124.f0 = 1;
    cpy_r_r124.f1 = 1;
    cpy_r_r125 = Py_None;
    cpy_r_r126.f0 = 1;
    cpy_r_r126.f1 = cpy_r_r125;
    CPy_INCREF(cpy_r_r126.f1);
    return cpy_r_r126;
CPyL73: ;
    cpy_r_r127 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_name;
    CPy_INCREF(cpy_r_r127);
    if (likely(cpy_r_fields != Py_None))
        cpy_r_r128 = cpy_r_fields;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 105, CPyStatic_semanal_typeddict___globals, "list", cpy_r_fields);
        goto CPyL229;
    }
    cpy_r_r129 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_line;
    CPyTagged_INCREF(cpy_r_r129);
    cpy_r_r130 = CPyDef_semanal_typeddict___TypedDictAnalyzer___build_typeddict_typeinfo(cpy_r_self, cpy_r_r127, cpy_r_r128, cpy_r_types, cpy_r_required_keys, cpy_r_r129, cpy_r_existing_info);
    CPy_DECREF(cpy_r_r127);
    CPy_DECREF(cpy_r_r128);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_required_keys);
    CPyTagged_DECREF(cpy_r_r129);
    CPy_DECREF(cpy_r_existing_info);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 104, CPyStatic_semanal_typeddict___globals);
        goto CPyL230;
    }
    cpy_r_info = cpy_r_r130;
    cpy_r_r131 = CPyDef_nodes___TypedDictExpr(cpy_r_info);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 107, CPyStatic_semanal_typeddict___globals);
        goto CPyL231;
    }
    CPy_DECREF(((mypy___nodes___ClassDefObject *)cpy_r_defn)->_analyzed);
    ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_analyzed = cpy_r_r131;
    cpy_r_r133 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_line;
    CPyTagged_INCREF(cpy_r_r133);
    cpy_r_r134 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r134) == CPyType_nodes___TypedDictExpr))
        cpy_r_r135 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 108, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypedDictExpr", cpy_r_r134);
        goto CPyL232;
    }
    CPyTagged_DECREF(((mypy___nodes___TypedDictExprObject *)cpy_r_r135)->_line);
    ((mypy___nodes___TypedDictExprObject *)cpy_r_r135)->_line = cpy_r_r133;
    cpy_r_r137 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_column;
    CPyTagged_INCREF(cpy_r_r137);
    cpy_r_r138 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r138) == CPyType_nodes___TypedDictExpr))
        cpy_r_r139 = cpy_r_r138;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 109, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypedDictExpr", cpy_r_r138);
        goto CPyL233;
    }
    CPyTagged_DECREF(((mypy___nodes___TypedDictExprObject *)cpy_r_r139)->_column);
    ((mypy___nodes___TypedDictExprObject *)cpy_r_r139)->_column = cpy_r_r137;
    cpy_r_r141 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_defs;
    CPy_DECREF(((mypy___nodes___BlockObject *)cpy_r_r141)->_body);
    ((mypy___nodes___BlockObject *)cpy_r_r141)->_body = cpy_r_statements;
    cpy_r_r143.f0 = 1;
    cpy_r_r143.f1 = cpy_r_info;
    CPy_INCREF(cpy_r_r143.f1);
    CPy_DECREF(cpy_r_info);
    return cpy_r_r143;
CPyL79: ;
    cpy_r_r144 = PyList_New(0);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 114, CPyStatic_semanal_typeddict___globals);
        goto CPyL226;
    }
    cpy_r_typeddict_bases = cpy_r_r144;
    cpy_r_r145 = PySet_New(NULL);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 115, CPyStatic_semanal_typeddict___globals);
        goto CPyL234;
    }
    cpy_r_typeddict_bases_set = cpy_r_r145;
    cpy_r_r146 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_base_type_exprs;
    CPy_INCREF(cpy_r_r146);
    cpy_r_r147 = 0;
CPyL82: ;
    cpy_r_r148 = (CPyPtr)&((PyVarObject *)cpy_r_r146)->ob_size;
    cpy_r_r149 = *(int64_t *)cpy_r_r148;
    cpy_r_r150 = cpy_r_r149 << 1;
    cpy_r_r151 = (Py_ssize_t)cpy_r_r147 < (Py_ssize_t)cpy_r_r150;
    if (!cpy_r_r151) goto CPyL235;
    cpy_r_r152 = CPyList_GetItemUnsafe(cpy_r_r146, cpy_r_r147);
    if (likely(PyObject_TypeCheck(cpy_r_r152, CPyType_nodes___Expression)))
        cpy_r_r153 = cpy_r_r152;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 116, CPyStatic_semanal_typeddict___globals, "mypy.nodes.Expression", cpy_r_r152);
        goto CPyL236;
    }
    cpy_r_expr = cpy_r_r153;
    cpy_r_r154 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r155 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r156 = *(PyObject * *)cpy_r_r155;
    cpy_r_r157 = cpy_r_r156 == cpy_r_r154;
    if (!cpy_r_r157) goto CPyL86;
    cpy_r_r158 = cpy_r_r157;
    goto CPyL87;
CPyL86: ;
    cpy_r_r159 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r160 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r161 = *(PyObject * *)cpy_r_r160;
    cpy_r_r162 = cpy_r_r161 == cpy_r_r159;
    cpy_r_r158 = cpy_r_r162;
CPyL87: ;
    if (!cpy_r_r158) goto CPyL89;
    cpy_r_r163 = cpy_r_r158;
    goto CPyL90;
CPyL89: ;
    cpy_r_r164 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r165 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r166 = *(PyObject * *)cpy_r_r165;
    cpy_r_r167 = cpy_r_r166 == cpy_r_r164;
    cpy_r_r163 = cpy_r_r167;
CPyL90: ;
    if (!cpy_r_r163) goto CPyL102;
    CPy_INCREF(cpy_r_expr);
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r168 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 117, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL237;
    }
    cpy_r_r169 = CPY_GET_ATTR(cpy_r_r168, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 117, CPyStatic_semanal_typeddict___globals);
        goto CPyL237;
    }
CPyL93: ;
    cpy_r_r170 = CPyStatic_types___TPDICT_NAMES;
    if (unlikely(cpy_r_r170.f0 == NULL)) {
        goto CPyL238;
    } else
        goto CPyL96;
CPyL94: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TPDICT_NAMES\" was not set");
    cpy_r_r171 = 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 117, CPyStatic_semanal_typeddict___globals);
        goto CPyL213;
    }
    CPy_Unreachable();
CPyL96: ;
    CPy_INCREF(cpy_r_r170.f0);
    CPy_INCREF(cpy_r_r170.f1);
    CPy_INCREF(cpy_r_r170.f2);
    cpy_r_r172 = PyTuple_New(3);
    if (unlikely(cpy_r_r172 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6168 = cpy_r_r170.f0;
    PyTuple_SET_ITEM(cpy_r_r172, 0, __tmp6168);
    PyObject *__tmp6169 = cpy_r_r170.f1;
    PyTuple_SET_ITEM(cpy_r_r172, 1, __tmp6169);
    PyObject *__tmp6170 = cpy_r_r170.f2;
    PyTuple_SET_ITEM(cpy_r_r172, 2, __tmp6170);
    cpy_r_r173 = PySequence_Contains(cpy_r_r172, cpy_r_r169);
    CPy_DECREF(cpy_r_r172);
    CPy_DECREF(cpy_r_r169);
    cpy_r_r174 = cpy_r_r173 >= 0;
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 117, CPyStatic_semanal_typeddict___globals);
        goto CPyL237;
    }
    cpy_r_r175 = cpy_r_r173;
    if (cpy_r_r175) {
        goto CPyL239;
    } else
        goto CPyL102;
CPyL98: ;
    cpy_r_r176 = CPyStatics[514]; /* 'TypedDict' */
    cpy_r_r177 = PySet_Contains(cpy_r_typeddict_bases_set, cpy_r_r176);
    cpy_r_r178 = cpy_r_r177 >= 0;
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 118, CPyStatic_semanal_typeddict___globals);
        goto CPyL236;
    }
    cpy_r_r179 = cpy_r_r177;
    cpy_r_r180 = cpy_r_r179 ^ 1;
    if (!cpy_r_r180) goto CPyL101;
    cpy_r_r181 = CPyStatics[514]; /* 'TypedDict' */
    cpy_r_r182 = PySet_Add(cpy_r_typeddict_bases_set, cpy_r_r181);
    cpy_r_r183 = cpy_r_r182 >= 0;
    if (unlikely(!cpy_r_r183)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 119, CPyStatic_semanal_typeddict___globals);
        goto CPyL236;
    } else
        goto CPyL184;
CPyL101: ;
    cpy_r_r184 = CPyStatics[5262]; /* 'Duplicate base class "TypedDict"' */
    cpy_r_r185 = NULL;
    cpy_r_r186 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_r184, cpy_r_defn, cpy_r_r185);
    if (unlikely(cpy_r_r186 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 121, CPyStatic_semanal_typeddict___globals);
        goto CPyL236;
    } else
        goto CPyL184;
CPyL102: ;
    cpy_r_r187 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r188 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r189 = *(PyObject * *)cpy_r_r188;
    cpy_r_r190 = cpy_r_r189 == cpy_r_r187;
    if (!cpy_r_r190) goto CPyL104;
    cpy_r_r191 = cpy_r_r190;
    goto CPyL105;
CPyL104: ;
    cpy_r_r192 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r193 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r194 = *(PyObject * *)cpy_r_r193;
    cpy_r_r195 = cpy_r_r194 == cpy_r_r192;
    cpy_r_r191 = cpy_r_r195;
CPyL105: ;
    if (!cpy_r_r191) goto CPyL107;
    cpy_r_r196 = cpy_r_r191;
    goto CPyL108;
CPyL107: ;
    cpy_r_r197 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r198 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r199 = *(PyObject * *)cpy_r_r198;
    cpy_r_r200 = cpy_r_r199 == cpy_r_r197;
    cpy_r_r196 = cpy_r_r200;
CPyL108: ;
    if (!cpy_r_r196) goto CPyL138;
    CPy_INCREF(cpy_r_expr);
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r201 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 122, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL237;
    }
    cpy_r_r202 = CPyDef_semanal_typeddict___TypedDictAnalyzer___is_typeddict(cpy_r_self, cpy_r_r201);
    CPy_DECREF(cpy_r_r201);
    if (unlikely(cpy_r_r202 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 122, CPyStatic_semanal_typeddict___globals);
        goto CPyL237;
    }
    if (!cpy_r_r202) goto CPyL138;
    CPy_INCREF(cpy_r_expr);
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r203 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 123, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL237;
    }
    cpy_r_r204 = CPY_GET_ATTR(cpy_r_r203, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r203);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 123, CPyStatic_semanal_typeddict___globals);
        goto CPyL237;
    }
CPyL114: ;
    cpy_r_r205 = CPyStr_IsTrue(cpy_r_r204);
    CPy_DECREF(cpy_r_r204);
    if (cpy_r_r205) {
        goto CPyL117;
    } else
        goto CPyL240;
CPyL115: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r206 = 0;
    if (unlikely(!cpy_r_r206)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 123, CPyStatic_semanal_typeddict___globals);
        goto CPyL213;
    }
    CPy_Unreachable();
CPyL117: ;
    CPy_INCREF(cpy_r_expr);
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r207 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 124, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL237;
    }
    cpy_r_r208 = CPY_GET_ATTR(cpy_r_r207, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r207);
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 124, CPyStatic_semanal_typeddict___globals);
        goto CPyL237;
    }
CPyL119: ;
    cpy_r_r209 = PySet_Contains(cpy_r_typeddict_bases_set, cpy_r_r208);
    CPy_DECREF(cpy_r_r208);
    cpy_r_r210 = cpy_r_r209 >= 0;
    if (unlikely(!cpy_r_r210)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 124, CPyStatic_semanal_typeddict___globals);
        goto CPyL237;
    }
    cpy_r_r211 = cpy_r_r209;
    cpy_r_r212 = cpy_r_r211 ^ 1;
    if (!cpy_r_r212) goto CPyL126;
    CPy_INCREF(cpy_r_expr);
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r213 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 125, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL237;
    }
    cpy_r_r214 = CPY_GET_ATTR(cpy_r_r213, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r213);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 125, CPyStatic_semanal_typeddict___globals);
        goto CPyL237;
    }
CPyL123: ;
    cpy_r_r215 = PySet_Add(cpy_r_typeddict_bases_set, cpy_r_r214);
    CPy_DECREF(cpy_r_r214);
    cpy_r_r216 = cpy_r_r215 >= 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 125, CPyStatic_semanal_typeddict___globals);
        goto CPyL237;
    }
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r217 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 126, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL236;
    }
    cpy_r_r218 = PyList_Append(cpy_r_typeddict_bases, cpy_r_r217);
    CPy_DECREF(cpy_r_r217);
    cpy_r_r219 = cpy_r_r218 >= 0;
    if (unlikely(!cpy_r_r219)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 126, CPyStatic_semanal_typeddict___globals);
        goto CPyL236;
    } else
        goto CPyL184;
CPyL126: ;
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r220 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 128, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL237;
    }
    cpy_r_r221 = ((mypy___nodes___RefExprObject *)cpy_r_r220)->_node;
    cpy_r_r222 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r223 = (CPyPtr)&((PyObject *)cpy_r_r221)->ob_type;
    cpy_r_r224 = *(PyObject * *)cpy_r_r223;
    cpy_r_r225 = cpy_r_r224 == cpy_r_r222;
    if (!cpy_r_r225) goto CPyL129;
    cpy_r_r226 = cpy_r_r225;
    goto CPyL130;
CPyL129: ;
    cpy_r_r227 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r228 = (CPyPtr)&((PyObject *)cpy_r_r221)->ob_type;
    cpy_r_r229 = *(PyObject * *)cpy_r_r228;
    cpy_r_r230 = cpy_r_r229 == cpy_r_r227;
    cpy_r_r226 = cpy_r_r230;
CPyL130: ;
    if (cpy_r_r226) {
        goto CPyL133;
    } else
        goto CPyL241;
CPyL131: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r231 = 0;
    if (unlikely(!cpy_r_r231)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 128, CPyStatic_semanal_typeddict___globals);
        goto CPyL213;
    }
    CPy_Unreachable();
CPyL133: ;
    cpy_r_r232 = CPyStatics[4908]; /* 'Duplicate base class "' */
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r233 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 129, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL237;
    }
    cpy_r_r234 = ((mypy___nodes___RefExprObject *)cpy_r_r233)->_node;
    CPy_INCREF(cpy_r_r234);
    if (likely((Py_TYPE(cpy_r_r234) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r234) == CPyType_nodes___TypeInfo)))
        cpy_r_r235 = cpy_r_r234;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 129, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypeInfo", cpy_r_r234);
        goto CPyL237;
    }
    CPy_DECREF(cpy_r_expr);
    cpy_r_r236 = CPY_GET_ATTR(cpy_r_r235, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r235);
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 129, CPyStatic_semanal_typeddict___globals);
        goto CPyL236;
    }
CPyL136: ;
    cpy_r_r237 = CPyStatics[178]; /* '"' */
    cpy_r_r238 = CPyStr_Build(3, cpy_r_r232, cpy_r_r236, cpy_r_r237);
    CPy_DECREF(cpy_r_r236);
    if (unlikely(cpy_r_r238 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 129, CPyStatic_semanal_typeddict___globals);
        goto CPyL236;
    }
    cpy_r_r239 = NULL;
    cpy_r_r240 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_r238, cpy_r_defn, cpy_r_r239);
    CPy_DECREF(cpy_r_r238);
    if (unlikely(cpy_r_r240 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 129, CPyStatic_semanal_typeddict___globals);
        goto CPyL236;
    } else
        goto CPyL184;
CPyL138: ;
    cpy_r_r241 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r242 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r243 = *(PyObject * *)cpy_r_r242;
    cpy_r_r244 = cpy_r_r243 == cpy_r_r241;
    if (!cpy_r_r244) goto CPyL242;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r245 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 130, CPyStatic_semanal_typeddict___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL237;
    }
    cpy_r_r246 = ((mypy___nodes___IndexExprObject *)cpy_r_r245)->_base;
    CPy_INCREF(cpy_r_r246);
    cpy_r_r247 = CPyDef_semanal_typeddict___TypedDictAnalyzer___is_typeddict(cpy_r_self, cpy_r_r246);
    CPy_DECREF(cpy_r_r246);
    if (unlikely(cpy_r_r247 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 130, CPyStatic_semanal_typeddict___globals);
        goto CPyL237;
    }
    if (!cpy_r_r247) goto CPyL242;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r248 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 131, CPyStatic_semanal_typeddict___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL237;
    }
    cpy_r_r249 = ((mypy___nodes___IndexExprObject *)cpy_r_r248)->_base;
    cpy_r_r250 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r251 = (CPyPtr)&((PyObject *)cpy_r_r249)->ob_type;
    cpy_r_r252 = *(PyObject * *)cpy_r_r251;
    cpy_r_r253 = cpy_r_r252 == cpy_r_r250;
    if (!cpy_r_r253) goto CPyL145;
    cpy_r_r254 = cpy_r_r253;
    goto CPyL146;
CPyL145: ;
    cpy_r_r255 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r256 = (CPyPtr)&((PyObject *)cpy_r_r249)->ob_type;
    cpy_r_r257 = *(PyObject * *)cpy_r_r256;
    cpy_r_r258 = cpy_r_r257 == cpy_r_r255;
    cpy_r_r254 = cpy_r_r258;
CPyL146: ;
    if (!cpy_r_r254) goto CPyL148;
    cpy_r_r259 = cpy_r_r254;
    goto CPyL149;
CPyL148: ;
    cpy_r_r260 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r261 = (CPyPtr)&((PyObject *)cpy_r_r249)->ob_type;
    cpy_r_r262 = *(PyObject * *)cpy_r_r261;
    cpy_r_r263 = cpy_r_r262 == cpy_r_r260;
    cpy_r_r259 = cpy_r_r263;
CPyL149: ;
    if (cpy_r_r259) {
        goto CPyL152;
    } else
        goto CPyL243;
CPyL150: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r264 = 0;
    if (unlikely(!cpy_r_r264)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 131, CPyStatic_semanal_typeddict___globals);
        goto CPyL213;
    }
    CPy_Unreachable();
CPyL152: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r265 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 132, CPyStatic_semanal_typeddict___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL237;
    }
    cpy_r_r266 = ((mypy___nodes___IndexExprObject *)cpy_r_r265)->_base;
    CPy_INCREF(cpy_r_r266);
    if (likely((Py_TYPE(cpy_r_r266) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r266) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r266) == CPyType_nodes___RefExpr)))
        cpy_r_r267 = cpy_r_r266;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 132, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_r266);
        goto CPyL237;
    }
    cpy_r_r268 = CPY_GET_ATTR(cpy_r_r267, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r267);
    if (unlikely(cpy_r_r268 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 132, CPyStatic_semanal_typeddict___globals);
        goto CPyL237;
    }
CPyL155: ;
    cpy_r_r269 = CPyStr_IsTrue(cpy_r_r268);
    CPy_DECREF(cpy_r_r268);
    if (cpy_r_r269) {
        goto CPyL158;
    } else
        goto CPyL244;
CPyL156: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r270 = 0;
    if (unlikely(!cpy_r_r270)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 132, CPyStatic_semanal_typeddict___globals);
        goto CPyL213;
    }
    CPy_Unreachable();
CPyL158: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r271 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 133, CPyStatic_semanal_typeddict___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL237;
    }
    cpy_r_r272 = ((mypy___nodes___IndexExprObject *)cpy_r_r271)->_base;
    CPy_INCREF(cpy_r_r272);
    if (likely((Py_TYPE(cpy_r_r272) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r272) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r272) == CPyType_nodes___RefExpr)))
        cpy_r_r273 = cpy_r_r272;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 133, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_r272);
        goto CPyL237;
    }
    cpy_r_r274 = CPY_GET_ATTR(cpy_r_r273, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r273);
    if (unlikely(cpy_r_r274 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 133, CPyStatic_semanal_typeddict___globals);
        goto CPyL237;
    }
CPyL161: ;
    cpy_r_r275 = PySet_Contains(cpy_r_typeddict_bases_set, cpy_r_r274);
    CPy_DECREF(cpy_r_r274);
    cpy_r_r276 = cpy_r_r275 >= 0;
    if (unlikely(!cpy_r_r276)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 133, CPyStatic_semanal_typeddict___globals);
        goto CPyL237;
    }
    cpy_r_r277 = cpy_r_r275;
    cpy_r_r278 = cpy_r_r277 ^ 1;
    if (!cpy_r_r278) goto CPyL169;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r279 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 134, CPyStatic_semanal_typeddict___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL237;
    }
    cpy_r_r280 = ((mypy___nodes___IndexExprObject *)cpy_r_r279)->_base;
    CPy_INCREF(cpy_r_r280);
    if (likely((Py_TYPE(cpy_r_r280) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r280) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r280) == CPyType_nodes___RefExpr)))
        cpy_r_r281 = cpy_r_r280;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 134, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_r280);
        goto CPyL237;
    }
    cpy_r_r282 = CPY_GET_ATTR(cpy_r_r281, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r281);
    if (unlikely(cpy_r_r282 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 134, CPyStatic_semanal_typeddict___globals);
        goto CPyL237;
    }
CPyL166: ;
    cpy_r_r283 = PySet_Add(cpy_r_typeddict_bases_set, cpy_r_r282);
    CPy_DECREF(cpy_r_r282);
    cpy_r_r284 = cpy_r_r283 >= 0;
    if (unlikely(!cpy_r_r284)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 134, CPyStatic_semanal_typeddict___globals);
        goto CPyL237;
    }
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r285 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 135, CPyStatic_semanal_typeddict___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL236;
    }
    cpy_r_r286 = PyList_Append(cpy_r_typeddict_bases, cpy_r_r285);
    CPy_DECREF(cpy_r_r285);
    cpy_r_r287 = cpy_r_r286 >= 0;
    if (unlikely(!cpy_r_r287)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 135, CPyStatic_semanal_typeddict___globals);
        goto CPyL236;
    } else
        goto CPyL184;
CPyL169: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r288 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 137, CPyStatic_semanal_typeddict___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL237;
    }
    cpy_r_r289 = ((mypy___nodes___IndexExprObject *)cpy_r_r288)->_base;
    if (likely((Py_TYPE(cpy_r_r289) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r289) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r289) == CPyType_nodes___RefExpr)))
        cpy_r_r290 = cpy_r_r289;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 137, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_r289);
        goto CPyL237;
    }
    cpy_r_r291 = ((mypy___nodes___RefExprObject *)cpy_r_r290)->_node;
    cpy_r_r292 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r293 = (CPyPtr)&((PyObject *)cpy_r_r291)->ob_type;
    cpy_r_r294 = *(PyObject * *)cpy_r_r293;
    cpy_r_r295 = cpy_r_r294 == cpy_r_r292;
    if (!cpy_r_r295) goto CPyL173;
    cpy_r_r296 = cpy_r_r295;
    goto CPyL174;
CPyL173: ;
    cpy_r_r297 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r298 = (CPyPtr)&((PyObject *)cpy_r_r291)->ob_type;
    cpy_r_r299 = *(PyObject * *)cpy_r_r298;
    cpy_r_r300 = cpy_r_r299 == cpy_r_r297;
    cpy_r_r296 = cpy_r_r300;
CPyL174: ;
    if (cpy_r_r296) {
        goto CPyL177;
    } else
        goto CPyL245;
CPyL175: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r301 = 0;
    if (unlikely(!cpy_r_r301)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 137, CPyStatic_semanal_typeddict___globals);
        goto CPyL213;
    }
    CPy_Unreachable();
CPyL177: ;
    cpy_r_r302 = CPyStatics[4908]; /* 'Duplicate base class "' */
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r303 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 138, CPyStatic_semanal_typeddict___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL237;
    }
    cpy_r_r304 = ((mypy___nodes___IndexExprObject *)cpy_r_r303)->_base;
    if (likely((Py_TYPE(cpy_r_r304) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r304) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r304) == CPyType_nodes___RefExpr)))
        cpy_r_r305 = cpy_r_r304;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 138, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_r304);
        goto CPyL237;
    }
    cpy_r_r306 = ((mypy___nodes___RefExprObject *)cpy_r_r305)->_node;
    CPy_INCREF(cpy_r_r306);
    if (likely((Py_TYPE(cpy_r_r306) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r306) == CPyType_nodes___TypeInfo)))
        cpy_r_r307 = cpy_r_r306;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 138, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypeInfo", cpy_r_r306);
        goto CPyL237;
    }
    CPy_DECREF(cpy_r_expr);
    cpy_r_r308 = CPY_GET_ATTR(cpy_r_r307, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r307);
    if (unlikely(cpy_r_r308 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 138, CPyStatic_semanal_typeddict___globals);
        goto CPyL236;
    }
CPyL181: ;
    cpy_r_r309 = CPyStatics[178]; /* '"' */
    cpy_r_r310 = CPyStr_Build(3, cpy_r_r302, cpy_r_r308, cpy_r_r309);
    CPy_DECREF(cpy_r_r308);
    if (unlikely(cpy_r_r310 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 138, CPyStatic_semanal_typeddict___globals);
        goto CPyL236;
    }
    cpy_r_r311 = NULL;
    cpy_r_r312 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_r310, cpy_r_defn, cpy_r_r311);
    CPy_DECREF(cpy_r_r310);
    if (unlikely(cpy_r_r312 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 138, CPyStatic_semanal_typeddict___globals);
        goto CPyL236;
    } else
        goto CPyL184;
CPyL183: ;
    cpy_r_r313 = CPyStatics[5263]; /* 'All bases of a new TypedDict must be TypedDict types' */
    cpy_r_r314 = NULL;
    cpy_r_r315 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_r313, cpy_r_defn, cpy_r_r314);
    if (unlikely(cpy_r_r315 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 140, CPyStatic_semanal_typeddict___globals);
        goto CPyL236;
    }
CPyL184: ;
    cpy_r_r316 = cpy_r_r147 + 2;
    cpy_r_r147 = cpy_r_r316;
    goto CPyL82;
CPyL185: ;
    cpy_r_r317 = PyList_New(0);
    if (unlikely(cpy_r_r317 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 142, CPyStatic_semanal_typeddict___globals);
        goto CPyL234;
    }
    cpy_r_keys = cpy_r_r317;
    cpy_r_r318 = PyList_New(0);
    if (unlikely(cpy_r_r318 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 143, CPyStatic_semanal_typeddict___globals);
        goto CPyL246;
    }
    cpy_r_types = cpy_r_r318;
    cpy_r_r319 = PySet_New(NULL);
    if (unlikely(cpy_r_r319 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 144, CPyStatic_semanal_typeddict___globals);
        goto CPyL247;
    }
    cpy_r_required_keys = cpy_r_r319;
    cpy_r_r320 = (CPyPtr)&((PyVarObject *)cpy_r_typeddict_bases)->ob_size;
    cpy_r_r321 = *(int64_t *)cpy_r_r320;
    cpy_r_r322 = cpy_r_r321 << 1;
    cpy_r_r323 = CPyTagged_Subtract(cpy_r_r322, 2);
    cpy_r_r324 = cpy_r_r323;
CPyL189: ;
    cpy_r_r325 = cpy_r_r324 & 1;
    cpy_r_r326 = cpy_r_r325 == 0;
    cpy_r_r327 = 0 & 1;
    cpy_r_r328 = cpy_r_r327 == 0;
    cpy_r_r329 = cpy_r_r326 & cpy_r_r328;
    if (!cpy_r_r329) goto CPyL191;
    cpy_r_r330 = (Py_ssize_t)cpy_r_r324 >= (Py_ssize_t)0;
    cpy_r_r331 = cpy_r_r330;
    goto CPyL192;
CPyL191: ;
    cpy_r_r332 = CPyTagged_IsLt_(cpy_r_r324, 0);
    cpy_r_r333 = cpy_r_r332 ^ 1;
    cpy_r_r331 = cpy_r_r333;
CPyL192: ;
    if (!cpy_r_r331) goto CPyL248;
    cpy_r_r334 = (CPyPtr)&((PyVarObject *)cpy_r_typeddict_bases)->ob_size;
    cpy_r_r335 = *(int64_t *)cpy_r_r334;
    cpy_r_r336 = cpy_r_r335 << 1;
    cpy_r_r337 = cpy_r_r324 & 1;
    cpy_r_r338 = cpy_r_r337 == 0;
    cpy_r_r339 = cpy_r_r336 & 1;
    cpy_r_r340 = cpy_r_r339 == 0;
    cpy_r_r341 = cpy_r_r338 & cpy_r_r340;
    if (!cpy_r_r341) goto CPyL195;
    cpy_r_r342 = (Py_ssize_t)cpy_r_r324 < (Py_ssize_t)cpy_r_r336;
    cpy_r_r343 = cpy_r_r342;
    goto CPyL196;
CPyL195: ;
    cpy_r_r344 = CPyTagged_IsLt_(cpy_r_r324, cpy_r_r336);
    cpy_r_r343 = cpy_r_r344;
CPyL196: ;
    if (!cpy_r_r343) goto CPyL248;
    CPyTagged_INCREF(cpy_r_r324);
    cpy_r_r345 = CPyTagged_StealAsObject(cpy_r_r324);
    if (likely(PyLong_Check(cpy_r_r345)))
        cpy_r_r346 = CPyTagged_FromObject(cpy_r_r345);
    else {
        CPy_TypeError("short_int", cpy_r_r345); cpy_r_r346 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r345);
    if (unlikely(cpy_r_r346 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 146, CPyStatic_semanal_typeddict___globals);
        goto CPyL249;
    }
    cpy_r_r347 = CPyList_GetItemUnsafe(cpy_r_typeddict_bases, cpy_r_r346);
    if (likely(PyObject_TypeCheck(cpy_r_r347, CPyType_nodes___Expression)))
        cpy_r_r348 = cpy_r_r347;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 146, CPyStatic_semanal_typeddict___globals, "mypy.nodes.Expression", cpy_r_r347);
        goto CPyL249;
    }
    cpy_r_base = cpy_r_r348;
    cpy_r_r349 = CPyDef_semanal_typeddict___TypedDictAnalyzer___add_keys_and_types_from_base(cpy_r_self, cpy_r_base, cpy_r_keys, cpy_r_types, cpy_r_required_keys, cpy_r_defn);
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r349 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 147, CPyStatic_semanal_typeddict___globals);
        goto CPyL249;
    }
    cpy_r_r350 = cpy_r_r324 + -2;
    CPyTagged_DECREF(cpy_r_r324);
    cpy_r_r324 = cpy_r_r350;
    goto CPyL189;
CPyL201: ;
    cpy_r_r351 = CPyDef_semanal_typeddict___TypedDictAnalyzer___analyze_typeddict_classdef_fields(cpy_r_self, cpy_r_defn, cpy_r_keys);
    if (unlikely(cpy_r_r351.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 153, CPyStatic_semanal_typeddict___globals);
        goto CPyL250;
    }
    cpy_r_r352 = cpy_r_r351.f0;
    CPy_INCREF(cpy_r_r352);
    cpy_r_new_keys = cpy_r_r352;
    cpy_r_r353 = cpy_r_r351.f1;
    CPy_INCREF(cpy_r_r353);
    cpy_r_new_types = cpy_r_r353;
    cpy_r_r354 = cpy_r_r351.f2;
    CPy_INCREF(cpy_r_r354);
    cpy_r_new_statements = cpy_r_r354;
    cpy_r_r355 = cpy_r_r351.f3;
    CPy_INCREF(cpy_r_r355);
    CPy_DECREF(cpy_r_r351.f0);
    CPy_DECREF(cpy_r_r351.f1);
    CPy_DECREF(cpy_r_r351.f2);
    CPy_DECREF(cpy_r_r351.f3);
    cpy_r_new_required_keys = cpy_r_r355;
    cpy_r_r356 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r357 = cpy_r_new_keys == cpy_r_r356;
    if (cpy_r_r357) {
        goto CPyL251;
    } else
        goto CPyL204;
CPyL203: ;
    cpy_r_r358.f0 = 1;
    cpy_r_r358.f1 = 1;
    cpy_r_r359 = Py_None;
    cpy_r_r360.f0 = 1;
    cpy_r_r360.f1 = cpy_r_r359;
    CPy_INCREF(cpy_r_r360.f1);
    return cpy_r_r360;
CPyL204: ;
    if (likely(cpy_r_new_keys != Py_None))
        cpy_r_r361 = cpy_r_new_keys;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 156, CPyStatic_semanal_typeddict___globals, "list", cpy_r_new_keys);
        goto CPyL252;
    }
    cpy_r_r362 = CPyList_Extend(cpy_r_keys, cpy_r_r361);
    CPy_DECREF(cpy_r_r361);
    if (unlikely(cpy_r_r362 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 156, CPyStatic_semanal_typeddict___globals);
        goto CPyL252;
    } else
        goto CPyL253;
CPyL206: ;
    cpy_r_r363 = CPyList_Extend(cpy_r_types, cpy_r_new_types);
    CPy_DECREF(cpy_r_new_types);
    if (unlikely(cpy_r_r363 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 157, CPyStatic_semanal_typeddict___globals);
        goto CPyL254;
    } else
        goto CPyL255;
CPyL207: ;
    cpy_r_r364 = _PySet_Update(cpy_r_required_keys, cpy_r_new_required_keys);
    CPy_DECREF(cpy_r_new_required_keys);
    cpy_r_r365 = cpy_r_r364 >= 0;
    if (unlikely(!cpy_r_r365)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 158, CPyStatic_semanal_typeddict___globals);
        goto CPyL256;
    }
    cpy_r_r366 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_name;
    CPy_INCREF(cpy_r_r366);
    cpy_r_r367 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_line;
    CPyTagged_INCREF(cpy_r_r367);
    cpy_r_r368 = CPyDef_semanal_typeddict___TypedDictAnalyzer___build_typeddict_typeinfo(cpy_r_self, cpy_r_r366, cpy_r_keys, cpy_r_types, cpy_r_required_keys, cpy_r_r367, cpy_r_existing_info);
    CPy_DECREF(cpy_r_r366);
    CPy_DECREF(cpy_r_keys);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_required_keys);
    CPyTagged_DECREF(cpy_r_r367);
    CPy_DECREF(cpy_r_existing_info);
    if (unlikely(cpy_r_r368 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 159, CPyStatic_semanal_typeddict___globals);
        goto CPyL257;
    }
    cpy_r_info = cpy_r_r368;
    cpy_r_r369 = CPyDef_nodes___TypedDictExpr(cpy_r_info);
    if (unlikely(cpy_r_r369 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 162, CPyStatic_semanal_typeddict___globals);
        goto CPyL258;
    }
    CPy_DECREF(((mypy___nodes___ClassDefObject *)cpy_r_defn)->_analyzed);
    ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_analyzed = cpy_r_r369;
    cpy_r_r371 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_line;
    CPyTagged_INCREF(cpy_r_r371);
    cpy_r_r372 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r372) == CPyType_nodes___TypedDictExpr))
        cpy_r_r373 = cpy_r_r372;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 163, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypedDictExpr", cpy_r_r372);
        goto CPyL259;
    }
    CPyTagged_DECREF(((mypy___nodes___TypedDictExprObject *)cpy_r_r373)->_line);
    ((mypy___nodes___TypedDictExprObject *)cpy_r_r373)->_line = cpy_r_r371;
    cpy_r_r375 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_column;
    CPyTagged_INCREF(cpy_r_r375);
    cpy_r_r376 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r376) == CPyType_nodes___TypedDictExpr))
        cpy_r_r377 = cpy_r_r376;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 164, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypedDictExpr", cpy_r_r376);
        goto CPyL260;
    }
    CPyTagged_DECREF(((mypy___nodes___TypedDictExprObject *)cpy_r_r377)->_column);
    ((mypy___nodes___TypedDictExprObject *)cpy_r_r377)->_column = cpy_r_r375;
    cpy_r_r379 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_defs;
    CPy_DECREF(((mypy___nodes___BlockObject *)cpy_r_r379)->_body);
    ((mypy___nodes___BlockObject *)cpy_r_r379)->_body = cpy_r_new_statements;
    cpy_r_r381.f0 = 1;
    cpy_r_r381.f1 = cpy_r_info;
    CPy_INCREF(cpy_r_r381.f1);
    CPy_DECREF(cpy_r_info);
    return cpy_r_r381;
CPyL213: ;
    tuple_T2CO __tmp6171 = { 2, NULL };
    cpy_r_r382 = __tmp6171;
    return cpy_r_r382;
CPyL214: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL48;
CPyL215: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL213;
CPyL216: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_base_expr);
    goto CPyL213;
CPyL217: ;
    CPy_DECREF(cpy_r_base_expr);
    goto CPyL47;
CPyL218: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_base_expr);
    CPy_DecRef(cpy_r_r28);
    goto CPyL213;
CPyL219: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_base_expr);
    CPy_DecRef(cpy_r_r32);
    goto CPyL18;
CPyL220: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_base_expr);
    goto CPyL35;
CPyL221: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_base_expr);
    CPy_DecRef(cpy_r_err);
    goto CPyL213;
CPyL222: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_err);
    goto CPyL213;
CPyL223: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_r61);
    goto CPyL213;
CPyL224: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r68);
    goto CPyL213;
CPyL225: ;
    CPy_DECREF(cpy_r_existing_info);
    goto CPyL51;
CPyL226: ;
    CPy_DecRef(cpy_r_existing_info);
    goto CPyL213;
CPyL227: ;
    CPy_DecRef(cpy_r_existing_info);
    CPy_DecRef(cpy_r_r109);
    goto CPyL66;
CPyL228: ;
    CPy_DECREF(cpy_r_existing_info);
    CPy_DECREF(cpy_r_fields);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_statements);
    CPy_DECREF(cpy_r_required_keys);
    goto CPyL72;
CPyL229: ;
    CPy_DecRef(cpy_r_existing_info);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_required_keys);
    CPy_DecRef(cpy_r_r127);
    goto CPyL213;
CPyL230: ;
    CPy_DecRef(cpy_r_statements);
    goto CPyL213;
CPyL231: ;
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_info);
    goto CPyL213;
CPyL232: ;
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_info);
    CPyTagged_DecRef(cpy_r_r133);
    goto CPyL213;
CPyL233: ;
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_info);
    CPyTagged_DecRef(cpy_r_r137);
    goto CPyL213;
CPyL234: ;
    CPy_DecRef(cpy_r_existing_info);
    CPy_DecRef(cpy_r_typeddict_bases);
    goto CPyL213;
CPyL235: ;
    CPy_DECREF(cpy_r_typeddict_bases_set);
    CPy_DECREF(cpy_r_r146);
    goto CPyL185;
CPyL236: ;
    CPy_DecRef(cpy_r_existing_info);
    CPy_DecRef(cpy_r_typeddict_bases);
    CPy_DecRef(cpy_r_typeddict_bases_set);
    CPy_DecRef(cpy_r_r146);
    goto CPyL213;
CPyL237: ;
    CPy_DecRef(cpy_r_existing_info);
    CPy_DecRef(cpy_r_typeddict_bases);
    CPy_DecRef(cpy_r_typeddict_bases_set);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_expr);
    goto CPyL213;
CPyL238: ;
    CPy_DecRef(cpy_r_existing_info);
    CPy_DecRef(cpy_r_typeddict_bases);
    CPy_DecRef(cpy_r_typeddict_bases_set);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_r169);
    goto CPyL94;
CPyL239: ;
    CPy_DECREF(cpy_r_expr);
    goto CPyL98;
CPyL240: ;
    CPy_DECREF(cpy_r_existing_info);
    CPy_DECREF(cpy_r_typeddict_bases);
    CPy_DECREF(cpy_r_typeddict_bases_set);
    CPy_DECREF(cpy_r_r146);
    CPy_DECREF(cpy_r_expr);
    goto CPyL115;
CPyL241: ;
    CPy_DECREF(cpy_r_existing_info);
    CPy_DECREF(cpy_r_typeddict_bases);
    CPy_DECREF(cpy_r_typeddict_bases_set);
    CPy_DECREF(cpy_r_r146);
    CPy_DECREF(cpy_r_expr);
    goto CPyL131;
CPyL242: ;
    CPy_DECREF(cpy_r_expr);
    goto CPyL183;
CPyL243: ;
    CPy_DECREF(cpy_r_existing_info);
    CPy_DECREF(cpy_r_typeddict_bases);
    CPy_DECREF(cpy_r_typeddict_bases_set);
    CPy_DECREF(cpy_r_r146);
    CPy_DECREF(cpy_r_expr);
    goto CPyL150;
CPyL244: ;
    CPy_DECREF(cpy_r_existing_info);
    CPy_DECREF(cpy_r_typeddict_bases);
    CPy_DECREF(cpy_r_typeddict_bases_set);
    CPy_DECREF(cpy_r_r146);
    CPy_DECREF(cpy_r_expr);
    goto CPyL156;
CPyL245: ;
    CPy_DECREF(cpy_r_existing_info);
    CPy_DECREF(cpy_r_typeddict_bases);
    CPy_DECREF(cpy_r_typeddict_bases_set);
    CPy_DECREF(cpy_r_r146);
    CPy_DECREF(cpy_r_expr);
    goto CPyL175;
CPyL246: ;
    CPy_DecRef(cpy_r_existing_info);
    CPy_DecRef(cpy_r_typeddict_bases);
    CPy_DecRef(cpy_r_keys);
    goto CPyL213;
CPyL247: ;
    CPy_DecRef(cpy_r_existing_info);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_typeddict_bases);
    CPy_DecRef(cpy_r_keys);
    goto CPyL213;
CPyL248: ;
    CPy_DECREF(cpy_r_typeddict_bases);
    CPyTagged_DECREF(cpy_r_r324);
    goto CPyL201;
CPyL249: ;
    CPy_DecRef(cpy_r_existing_info);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_required_keys);
    CPy_DecRef(cpy_r_typeddict_bases);
    CPy_DecRef(cpy_r_keys);
    CPyTagged_DecRef(cpy_r_r324);
    goto CPyL213;
CPyL250: ;
    CPy_DecRef(cpy_r_existing_info);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_required_keys);
    CPy_DecRef(cpy_r_keys);
    goto CPyL213;
CPyL251: ;
    CPy_DECREF(cpy_r_existing_info);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_required_keys);
    CPy_DECREF(cpy_r_keys);
    CPy_DECREF(cpy_r_new_keys);
    CPy_DECREF(cpy_r_new_types);
    CPy_DECREF(cpy_r_new_statements);
    CPy_DECREF(cpy_r_new_required_keys);
    goto CPyL203;
CPyL252: ;
    CPy_DecRef(cpy_r_existing_info);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_required_keys);
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_new_types);
    CPy_DecRef(cpy_r_new_statements);
    CPy_DecRef(cpy_r_new_required_keys);
    goto CPyL213;
CPyL253: ;
    CPy_DECREF(cpy_r_r362);
    goto CPyL206;
CPyL254: ;
    CPy_DecRef(cpy_r_existing_info);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_required_keys);
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_new_statements);
    CPy_DecRef(cpy_r_new_required_keys);
    goto CPyL213;
CPyL255: ;
    CPy_DECREF(cpy_r_r363);
    goto CPyL207;
CPyL256: ;
    CPy_DecRef(cpy_r_existing_info);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_required_keys);
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_new_statements);
    goto CPyL213;
CPyL257: ;
    CPy_DecRef(cpy_r_new_statements);
    goto CPyL213;
CPyL258: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_new_statements);
    goto CPyL213;
CPyL259: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_new_statements);
    CPyTagged_DecRef(cpy_r_r371);
    goto CPyL213;
CPyL260: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_new_statements);
    CPyTagged_DecRef(cpy_r_r375);
    goto CPyL213;
}

PyObject *CPyPy_semanal_typeddict___TypedDictAnalyzer___analyze_typeddict_classdef(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"defn", 0};
    static CPyArg_Parser parser = {"O:analyze_typeddict_classdef", kwlist, 0};
    PyObject *obj_defn;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_defn)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeddict___TypedDictAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeddict.TypedDictAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_defn;
    if (likely(Py_TYPE(obj_defn) == CPyType_nodes___ClassDef))
        arg_defn = obj_defn;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_defn); 
        goto fail;
    }
    tuple_T2CO retval = CPyDef_semanal_typeddict___TypedDictAnalyzer___analyze_typeddict_classdef(arg_self, arg_defn);
    if (retval.f0 == 2) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6172 = retval.f0 ? Py_True : Py_False;
    CPy_INCREF(__tmp6172);
    PyTuple_SET_ITEM(retbox, 0, __tmp6172);
    PyObject *__tmp6173 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp6173);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef", 64, CPyStatic_semanal_typeddict___globals);
    return NULL;
}

char CPyDef_semanal_typeddict___TypedDictAnalyzer___add_keys_and_types_from_base(PyObject *cpy_r_self, PyObject *cpy_r_base, PyObject *cpy_r_keys, PyObject *cpy_r_types, PyObject *cpy_r_required_keys, PyObject *cpy_r_ctx) {
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
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_base_args;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyPtr cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_base_typed_dict;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_base_items;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_valid_items;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_tvars;
    CPyPtr cpy_r_r86;
    int64_t cpy_r_r87;
    CPyTagged cpy_r_r88;
    CPyPtr cpy_r_r89;
    int64_t cpy_r_r90;
    CPyTagged cpy_r_r91;
    char cpy_r_r92;
    CPyTagged cpy_r_any_kind;
    CPyPtr cpy_r_r93;
    int64_t cpy_r_r94;
    CPyTagged cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    CPyPtr cpy_r_r103;
    int64_t cpy_r_r104;
    PyObject *cpy_r_r105;
    CPyTagged cpy_r_r106;
    CPyPtr cpy_r_r107;
    int64_t cpy_r_r108;
    CPyTagged cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r__;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyTagged cpy_r_r115;
    CPyTagged cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    CPyTagged cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyTagged cpy_r_r121;
    int64_t cpy_r_r122;
    CPyTagged cpy_r_r123;
    PyObject *cpy_r_r124;
    tuple_T3CIO cpy_r_r125;
    CPyTagged cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_key;
    int32_t cpy_r_r130;
    char cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    char cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    cpy_r_r0 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_base)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_base)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_base)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    if (!cpy_r_r9) goto CPyL18;
    if (likely((Py_TYPE(cpy_r_base) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_base) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_base) == CPyType_nodes___RefExpr)))
        cpy_r_r14 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 177, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_base);
        goto CPyL86;
    }
    cpy_r_r15 = ((mypy___nodes___RefExprObject *)cpy_r_r14)->_node;
    cpy_r_r16 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL10;
    cpy_r_r20 = cpy_r_r19;
    goto CPyL11;
CPyL10: ;
    cpy_r_r21 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    cpy_r_r20 = cpy_r_r24;
CPyL11: ;
    if (cpy_r_r20) goto CPyL14;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 177, CPyStatic_semanal_typeddict___globals);
        goto CPyL86;
    }
    CPy_Unreachable();
CPyL14: ;
    if (likely((Py_TYPE(cpy_r_base) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_base) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_base) == CPyType_nodes___RefExpr)))
        cpy_r_r26 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 178, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_base);
        goto CPyL86;
    }
    cpy_r_r27 = ((mypy___nodes___RefExprObject *)cpy_r_r26)->_node;
    CPy_INCREF(cpy_r_r27);
    if (likely((Py_TYPE(cpy_r_r27) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r27) == CPyType_nodes___TypeInfo)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 178, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypeInfo", cpy_r_r27);
        goto CPyL86;
    }
    cpy_r_info = cpy_r_r28;
    cpy_r_r29 = PyList_New(0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 179, CPyStatic_semanal_typeddict___globals);
        goto CPyL87;
    }
    cpy_r_base_args = cpy_r_r29;
    goto CPyL48;
CPyL18: ;
    cpy_r_r30 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r31 = (CPyPtr)&((PyObject *)cpy_r_base)->ob_type;
    cpy_r_r32 = *(PyObject * *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 == cpy_r_r30;
    if (cpy_r_r33) goto CPyL21;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 181, CPyStatic_semanal_typeddict___globals);
        goto CPyL86;
    }
    CPy_Unreachable();
CPyL21: ;
    if (likely(Py_TYPE(cpy_r_base) == CPyType_nodes___IndexExpr))
        cpy_r_r35 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 182, CPyStatic_semanal_typeddict___globals, "mypy.nodes.IndexExpr", cpy_r_base);
        goto CPyL86;
    }
    cpy_r_r36 = ((mypy___nodes___IndexExprObject *)cpy_r_r35)->_base;
    cpy_r_r37 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_r36)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    if (!cpy_r_r40) goto CPyL24;
    cpy_r_r41 = cpy_r_r40;
    goto CPyL25;
CPyL24: ;
    cpy_r_r42 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_r36)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    cpy_r_r41 = cpy_r_r45;
CPyL25: ;
    if (!cpy_r_r41) goto CPyL27;
    cpy_r_r46 = cpy_r_r41;
    goto CPyL28;
CPyL27: ;
    cpy_r_r47 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r48 = (CPyPtr)&((PyObject *)cpy_r_r36)->ob_type;
    cpy_r_r49 = *(PyObject * *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 == cpy_r_r47;
    cpy_r_r46 = cpy_r_r50;
CPyL28: ;
    if (cpy_r_r46) goto CPyL31;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 182, CPyStatic_semanal_typeddict___globals);
        goto CPyL86;
    }
    CPy_Unreachable();
CPyL31: ;
    if (likely(Py_TYPE(cpy_r_base) == CPyType_nodes___IndexExpr))
        cpy_r_r52 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 183, CPyStatic_semanal_typeddict___globals, "mypy.nodes.IndexExpr", cpy_r_base);
        goto CPyL86;
    }
    cpy_r_r53 = ((mypy___nodes___IndexExprObject *)cpy_r_r52)->_base;
    if (likely((Py_TYPE(cpy_r_r53) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r53) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r53) == CPyType_nodes___RefExpr)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 183, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_r53);
        goto CPyL86;
    }
    cpy_r_r55 = ((mypy___nodes___RefExprObject *)cpy_r_r54)->_node;
    cpy_r_r56 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_r55)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    if (!cpy_r_r59) goto CPyL35;
    cpy_r_r60 = cpy_r_r59;
    goto CPyL36;
CPyL35: ;
    cpy_r_r61 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r62 = (CPyPtr)&((PyObject *)cpy_r_r55)->ob_type;
    cpy_r_r63 = *(PyObject * *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 == cpy_r_r61;
    cpy_r_r60 = cpy_r_r64;
CPyL36: ;
    if (cpy_r_r60) goto CPyL39;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r65 = 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 183, CPyStatic_semanal_typeddict___globals);
        goto CPyL86;
    }
    CPy_Unreachable();
CPyL39: ;
    if (likely(Py_TYPE(cpy_r_base) == CPyType_nodes___IndexExpr))
        cpy_r_r66 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 184, CPyStatic_semanal_typeddict___globals, "mypy.nodes.IndexExpr", cpy_r_base);
        goto CPyL86;
    }
    cpy_r_r67 = ((mypy___nodes___IndexExprObject *)cpy_r_r66)->_base;
    if (likely((Py_TYPE(cpy_r_r67) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r67) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r67) == CPyType_nodes___RefExpr)))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 184, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_r67);
        goto CPyL86;
    }
    cpy_r_r69 = ((mypy___nodes___RefExprObject *)cpy_r_r68)->_node;
    CPy_INCREF(cpy_r_r69);
    if (likely((Py_TYPE(cpy_r_r69) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r69) == CPyType_nodes___TypeInfo)))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 184, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypeInfo", cpy_r_r69);
        goto CPyL86;
    }
    cpy_r_info = cpy_r_r70;
    CPy_INCREF(cpy_r_base);
    if (likely(Py_TYPE(cpy_r_base) == CPyType_nodes___IndexExpr))
        cpy_r_r71 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 185, CPyStatic_semanal_typeddict___globals, "mypy.nodes.IndexExpr", cpy_r_base);
        goto CPyL87;
    }
    cpy_r_r72 = CPyDef_semanal_typeddict___TypedDictAnalyzer___analyze_base_args(cpy_r_self, cpy_r_r71, cpy_r_ctx);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 185, CPyStatic_semanal_typeddict___globals);
        goto CPyL87;
    }
    cpy_r_args = cpy_r_r72;
    cpy_r_r73 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r74 = cpy_r_args == cpy_r_r73;
    if (cpy_r_r74) {
        goto CPyL88;
    } else
        goto CPyL46;
CPyL45: ;
    return 1;
CPyL46: ;
    if (likely(cpy_r_args != Py_None))
        cpy_r_r75 = cpy_r_args;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 188, CPyStatic_semanal_typeddict___globals, "list", cpy_r_args);
        goto CPyL87;
    }
    cpy_r_base_args = cpy_r_r75;
CPyL48: ;
    cpy_r_r76 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_typeddict_type;
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", "TypeInfo", "typeddict_type", 190, CPyStatic_semanal_typeddict___globals);
        goto CPyL89;
    }
CPyL49: ;
    cpy_r_r77 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r78 = cpy_r_r76 != cpy_r_r77;
    if (cpy_r_r78) {
        goto CPyL52;
    } else
        goto CPyL90;
CPyL50: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r79 = 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 190, CPyStatic_semanal_typeddict___globals);
        goto CPyL86;
    }
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r80 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_typeddict_type;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", "TypeInfo", "typeddict_type", 191, CPyStatic_semanal_typeddict___globals);
        goto CPyL89;
    }
    CPy_INCREF(cpy_r_r80);
CPyL53: ;
    if (likely(cpy_r_r80 != Py_None))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 191, CPyStatic_semanal_typeddict___globals, "mypy.types.TypedDictType", cpy_r_r80);
        goto CPyL89;
    }
    cpy_r_base_typed_dict = cpy_r_r81;
    cpy_r_r82 = ((mypy___types___TypedDictTypeObject *)cpy_r_base_typed_dict)->_items;
    CPy_INCREF(cpy_r_r82);
    cpy_r_base_items = cpy_r_r82;
    cpy_r_r83 = CPyDict_Copy(cpy_r_base_items);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 193, CPyStatic_semanal_typeddict___globals);
        goto CPyL91;
    }
    cpy_r_valid_items = cpy_r_r83;
    cpy_r_r84 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_defn;
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", "TypeInfo", "defn", 196, CPyStatic_semanal_typeddict___globals);
        goto CPyL92;
    }
CPyL56: ;
    cpy_r_r85 = ((mypy___nodes___ClassDefObject *)cpy_r_r84)->_type_vars;
    CPy_INCREF(cpy_r_r85);
    cpy_r_tvars = cpy_r_r85;
    cpy_r_r86 = (CPyPtr)&((PyVarObject *)cpy_r_base_args)->ob_size;
    cpy_r_r87 = *(int64_t *)cpy_r_r86;
    cpy_r_r88 = cpy_r_r87 << 1;
    cpy_r_r89 = (CPyPtr)&((PyVarObject *)cpy_r_tvars)->ob_size;
    cpy_r_r90 = *(int64_t *)cpy_r_r89;
    cpy_r_r91 = cpy_r_r90 << 1;
    cpy_r_r92 = cpy_r_r88 != cpy_r_r91;
    if (!cpy_r_r92) goto CPyL93;
    cpy_r_any_kind = 8;
    cpy_r_r93 = (CPyPtr)&((PyVarObject *)cpy_r_base_args)->ob_size;
    cpy_r_r94 = *(int64_t *)cpy_r_r93;
    CPy_DECREF(cpy_r_base_args);
    cpy_r_r95 = cpy_r_r94 << 1;
    cpy_r_r96 = cpy_r_r95 != 0;
    if (cpy_r_r96) {
        goto CPyL94;
    } else
        goto CPyL95;
CPyL58: ;
    cpy_r_r97 = CPyStatics[5264]; /* 'Invalid number of type arguments for "' */
    cpy_r_r98 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 200, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
CPyL59: ;
    cpy_r_r99 = CPyStatics[178]; /* '"' */
    cpy_r_r100 = CPyStr_Build(3, cpy_r_r97, cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 200, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    cpy_r_r101 = NULL;
    cpy_r_r102 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_r100, cpy_r_ctx, cpy_r_r101);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r102 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 200, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    cpy_r_any_kind = 10;
CPyL62: ;
    cpy_r_r103 = (CPyPtr)&((PyVarObject *)cpy_r_tvars)->ob_size;
    cpy_r_r104 = *(int64_t *)cpy_r_r103;
    cpy_r_r105 = PyList_New(cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 202, CPyStatic_semanal_typeddict___globals);
        goto CPyL97;
    }
    cpy_r_r106 = 0;
CPyL64: ;
    cpy_r_r107 = (CPyPtr)&((PyVarObject *)cpy_r_tvars)->ob_size;
    cpy_r_r108 = *(int64_t *)cpy_r_r107;
    cpy_r_r109 = cpy_r_r108 << 1;
    cpy_r_r110 = (Py_ssize_t)cpy_r_r106 < (Py_ssize_t)cpy_r_r109;
    if (!cpy_r_r110) goto CPyL98;
    cpy_r_r111 = CPyList_GetItemUnsafe(cpy_r_tvars, cpy_r_r106);
    if (likely(PyObject_TypeCheck(cpy_r_r111, CPyType_types___TypeVarLikeType)))
        cpy_r_r112 = cpy_r_r111;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 202, CPyStatic_semanal_typeddict___globals, "mypy.types.TypeVarLikeType", cpy_r_r111);
        goto CPyL99;
    }
    cpy_r__ = cpy_r_r112;
    CPy_DECREF(cpy_r__);
    cpy_r_r113 = NULL;
    cpy_r_r114 = NULL;
    cpy_r_r115 = CPY_INT_TAG;
    cpy_r_r116 = CPY_INT_TAG;
    cpy_r_r117 = CPyDef_types___AnyType(cpy_r_any_kind, cpy_r_r113, cpy_r_r114, cpy_r_r115, cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 202, CPyStatic_semanal_typeddict___globals);
        goto CPyL99;
    }
    cpy_r_r118 = CPyList_SetItemUnsafe(cpy_r_r105, cpy_r_r106, cpy_r_r117);
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 202, CPyStatic_semanal_typeddict___globals);
        goto CPyL99;
    }
    cpy_r_r119 = cpy_r_r106 + 2;
    cpy_r_r106 = cpy_r_r119;
    goto CPyL64;
CPyL69: ;
    cpy_r_base_args = cpy_r_r105;
CPyL70: ;
    cpy_r_r120 = CPyDef_semanal_typeddict___TypedDictAnalyzer___map_items_to_base(cpy_r_self, cpy_r_valid_items, cpy_r_tvars, cpy_r_base_args);
    CPy_DECREF(cpy_r_valid_items);
    CPy_DECREF(cpy_r_tvars);
    CPy_DECREF(cpy_r_base_args);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 204, CPyStatic_semanal_typeddict___globals);
        goto CPyL100;
    }
    cpy_r_valid_items = cpy_r_r120;
    cpy_r_r121 = 0;
    cpy_r_r122 = PyDict_Size(cpy_r_base_items);
    cpy_r_r123 = cpy_r_r122 << 1;
    cpy_r_r124 = CPyDict_GetKeysIter(cpy_r_base_items);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 205, CPyStatic_semanal_typeddict___globals);
        goto CPyL101;
    }
CPyL72: ;
    cpy_r_r125 = CPyDict_NextKey(cpy_r_r124, cpy_r_r121);
    cpy_r_r126 = cpy_r_r125.f1;
    cpy_r_r121 = cpy_r_r126;
    cpy_r_r127 = cpy_r_r125.f0;
    if (!cpy_r_r127) goto CPyL102;
    cpy_r_r128 = cpy_r_r125.f2;
    CPy_INCREF(cpy_r_r128);
    CPy_DECREF(cpy_r_r125.f2);
    if (likely(PyUnicode_Check(cpy_r_r128)))
        cpy_r_r129 = cpy_r_r128;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 205, CPyStatic_semanal_typeddict___globals, "str", cpy_r_r128);
        goto CPyL103;
    }
    cpy_r_key = cpy_r_r129;
    cpy_r_r130 = PySequence_Contains(cpy_r_keys, cpy_r_key);
    cpy_r_r131 = cpy_r_r130 >= 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 206, CPyStatic_semanal_typeddict___globals);
        goto CPyL104;
    }
    cpy_r_r132 = cpy_r_r130;
    if (!cpy_r_r132) goto CPyL105;
    cpy_r_r133 = CPyStatics[5265]; /* 'Overwriting TypedDict field "' */
    cpy_r_r134 = CPyStatics[5266]; /* '" while merging' */
    cpy_r_r135 = CPyStr_Build(3, cpy_r_r133, cpy_r_key, cpy_r_r134);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 207, CPyStatic_semanal_typeddict___globals);
        goto CPyL103;
    }
    cpy_r_r136 = NULL;
    cpy_r_r137 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_r135, cpy_r_ctx, cpy_r_r136);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r137 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 207, CPyStatic_semanal_typeddict___globals);
        goto CPyL103;
    }
CPyL78: ;
    cpy_r_r138 = CPyDict_CheckSize(cpy_r_base_items, cpy_r_r123);
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 205, CPyStatic_semanal_typeddict___globals);
        goto CPyL103;
    } else
        goto CPyL72;
CPyL79: ;
    cpy_r_r139 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 205, CPyStatic_semanal_typeddict___globals);
        goto CPyL106;
    }
    cpy_r_r140 = CPyDict_KeysView(cpy_r_valid_items);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 208, CPyStatic_semanal_typeddict___globals);
        goto CPyL106;
    }
    cpy_r_r141 = CPyList_Extend(cpy_r_keys, cpy_r_r140);
    CPy_DECREF(cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 208, CPyStatic_semanal_typeddict___globals);
        goto CPyL106;
    } else
        goto CPyL107;
CPyL82: ;
    cpy_r_r142 = CPyDict_ValuesView(cpy_r_valid_items);
    CPy_DECREF(cpy_r_valid_items);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 209, CPyStatic_semanal_typeddict___globals);
        goto CPyL108;
    }
    cpy_r_r143 = CPyList_Extend(cpy_r_types, cpy_r_r142);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 209, CPyStatic_semanal_typeddict___globals);
        goto CPyL108;
    } else
        goto CPyL109;
CPyL84: ;
    cpy_r_r144 = ((mypy___types___TypedDictTypeObject *)cpy_r_base_typed_dict)->_required_keys;
    CPy_INCREF(cpy_r_r144);
    CPy_DECREF(cpy_r_base_typed_dict);
    cpy_r_r145 = _PySet_Update(cpy_r_required_keys, cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    cpy_r_r146 = cpy_r_r145 >= 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 210, CPyStatic_semanal_typeddict___globals);
        goto CPyL86;
    }
    return 1;
CPyL86: ;
    cpy_r_r147 = 2;
    return cpy_r_r147;
CPyL87: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL86;
CPyL88: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_args);
    goto CPyL45;
CPyL89: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_base_args);
    goto CPyL86;
CPyL90: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_base_args);
    goto CPyL50;
CPyL91: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_base_args);
    CPy_DecRef(cpy_r_base_typed_dict);
    CPy_DecRef(cpy_r_base_items);
    goto CPyL86;
CPyL92: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_base_args);
    CPy_DecRef(cpy_r_base_typed_dict);
    CPy_DecRef(cpy_r_base_items);
    CPy_DecRef(cpy_r_valid_items);
    goto CPyL86;
CPyL93: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL70;
CPyL94: ;
    CPyTagged_DECREF(cpy_r_any_kind);
    goto CPyL58;
CPyL95: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL62;
CPyL96: ;
    CPy_DecRef(cpy_r_base_typed_dict);
    CPy_DecRef(cpy_r_base_items);
    CPy_DecRef(cpy_r_valid_items);
    CPy_DecRef(cpy_r_tvars);
    goto CPyL86;
CPyL97: ;
    CPy_DecRef(cpy_r_base_typed_dict);
    CPy_DecRef(cpy_r_base_items);
    CPy_DecRef(cpy_r_valid_items);
    CPy_DecRef(cpy_r_tvars);
    CPyTagged_DecRef(cpy_r_any_kind);
    goto CPyL86;
CPyL98: ;
    CPyTagged_DECREF(cpy_r_any_kind);
    goto CPyL69;
CPyL99: ;
    CPy_DecRef(cpy_r_base_typed_dict);
    CPy_DecRef(cpy_r_base_items);
    CPy_DecRef(cpy_r_valid_items);
    CPy_DecRef(cpy_r_tvars);
    CPyTagged_DecRef(cpy_r_any_kind);
    CPy_DecRef(cpy_r_r105);
    goto CPyL86;
CPyL100: ;
    CPy_DecRef(cpy_r_base_typed_dict);
    CPy_DecRef(cpy_r_base_items);
    goto CPyL86;
CPyL101: ;
    CPy_DecRef(cpy_r_base_typed_dict);
    CPy_DecRef(cpy_r_base_items);
    CPy_DecRef(cpy_r_valid_items);
    goto CPyL86;
CPyL102: ;
    CPy_DECREF(cpy_r_base_items);
    CPy_DECREF(cpy_r_r124);
    CPy_DECREF(cpy_r_r125.f2);
    goto CPyL79;
CPyL103: ;
    CPy_DecRef(cpy_r_base_typed_dict);
    CPy_DecRef(cpy_r_base_items);
    CPy_DecRef(cpy_r_valid_items);
    CPy_DecRef(cpy_r_r124);
    goto CPyL86;
CPyL104: ;
    CPy_DecRef(cpy_r_base_typed_dict);
    CPy_DecRef(cpy_r_base_items);
    CPy_DecRef(cpy_r_valid_items);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_key);
    goto CPyL86;
CPyL105: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL78;
CPyL106: ;
    CPy_DecRef(cpy_r_base_typed_dict);
    CPy_DecRef(cpy_r_valid_items);
    goto CPyL86;
CPyL107: ;
    CPy_DECREF(cpy_r_r141);
    goto CPyL82;
CPyL108: ;
    CPy_DecRef(cpy_r_base_typed_dict);
    goto CPyL86;
CPyL109: ;
    CPy_DECREF(cpy_r_r143);
    goto CPyL84;
}

PyObject *CPyPy_semanal_typeddict___TypedDictAnalyzer___add_keys_and_types_from_base(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"base", "keys", "types", "required_keys", "ctx", 0};
    static CPyArg_Parser parser = {"OOOOO:add_keys_and_types_from_base", kwlist, 0};
    PyObject *obj_base;
    PyObject *obj_keys;
    PyObject *obj_types;
    PyObject *obj_required_keys;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_base, &obj_keys, &obj_types, &obj_required_keys, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeddict___TypedDictAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeddict.TypedDictAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_base;
    if (likely(PyObject_TypeCheck(obj_base, CPyType_nodes___Expression)))
        arg_base = obj_base;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_base); 
        goto fail;
    }
    PyObject *arg_keys;
    if (likely(PyList_Check(obj_keys)))
        arg_keys = obj_keys;
    else {
        CPy_TypeError("list", obj_keys); 
        goto fail;
    }
    PyObject *arg_types;
    if (likely(PyList_Check(obj_types)))
        arg_types = obj_types;
    else {
        CPy_TypeError("list", obj_types); 
        goto fail;
    }
    PyObject *arg_required_keys;
    if (likely(PySet_Check(obj_required_keys)))
        arg_required_keys = obj_required_keys;
    else {
        CPy_TypeError("set", obj_required_keys); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeddict___TypedDictAnalyzer___add_keys_and_types_from_base(arg_self, arg_base, arg_keys, arg_types, arg_required_keys, arg_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeddict.py", "add_keys_and_types_from_base", 168, CPyStatic_semanal_typeddict___globals);
    return NULL;
}

PyObject *CPyDef_semanal_typeddict___TypedDictAnalyzer___analyze_base_args(PyObject *cpy_r_self, PyObject *cpy_r_base, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_base_args;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_arg_expr;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_type;
    tuple_T3OOO cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_analyzed;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_base_args", 218, CPyStatic_semanal_typeddict___globals);
        goto CPyL31;
    }
    cpy_r_base_args = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___IndexExprObject *)cpy_r_base)->_index;
    cpy_r_r2 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_r1)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = ((mypy___nodes___IndexExprObject *)cpy_r_base)->_index;
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___TupleExpr))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_base_args", 220, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TupleExpr", cpy_r_r6);
        goto CPyL32;
    }
    cpy_r_r8 = ((mypy___nodes___TupleExprObject *)cpy_r_r7)->_items;
    CPy_INCREF(cpy_r_r8);
    cpy_r_args = cpy_r_r8;
    goto CPyL6;
CPyL4: ;
    cpy_r_r9 = ((mypy___nodes___IndexExprObject *)cpy_r_base)->_index;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = PyList_New(1);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_base_args", 222, CPyStatic_semanal_typeddict___globals);
        goto CPyL33;
    }
    cpy_r_r11 = (CPyPtr)&((PyListObject *)cpy_r_r10)->ob_item;
    cpy_r_r12 = *(CPyPtr *)cpy_r_r11;
    *(PyObject * *)cpy_r_r12 = cpy_r_r9;
    cpy_r_args = cpy_r_r10;
CPyL6: ;
    cpy_r_r13 = 0;
CPyL7: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL34;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r13);
    if (likely(PyObject_TypeCheck(cpy_r_r18, CPyType_nodes___Expression)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_base_args", 224, CPyStatic_semanal_typeddict___globals, "mypy.nodes.Expression", cpy_r_r18);
        goto CPyL35;
    }
    cpy_r_arg_expr = cpy_r_r19;
    cpy_r_r20 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    cpy_r_r22 = CPY_GET_ATTR_TRAIT(cpy_r_r21, CPyType_semanal_shared___SemanticAnalyzerInterface, 27, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char); /* is_stub_file */
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_base_args", 226, CPyStatic_semanal_typeddict___globals);
        goto CPyL36;
    }
CPyL11: ;
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_exprtotype___expr_to_unanalyzed_type(cpy_r_arg_expr, cpy_r_r20, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_arg_expr);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_base_args", 226, CPyStatic_semanal_typeddict___globals);
        goto CPyL37;
    }
    cpy_r_type = cpy_r_r24;
    goto CPyL20;
CPyL13: ;
    cpy_r_r25 = CPy_CatchError();
    cpy_r_r26 = (PyObject *)CPyType_exprtotype___TypeTranslationError;
    cpy_r_r27 = CPy_ExceptionMatches(cpy_r_r26);
    if (!cpy_r_r27) goto CPyL16;
    cpy_r_r28 = CPyStatics[5267]; /* 'Invalid TypedDict type argument' */
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_r28, cpy_r_ctx, cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_base_args", 228, CPyStatic_semanal_typeddict___globals);
        goto CPyL18;
    }
    cpy_r_r31 = Py_None;
    CPy_RestoreExcInfo(cpy_r_r25);
    CPy_DecRef(cpy_r_r25.f0);
    CPy_DecRef(cpy_r_r25.f1);
    CPy_DecRef(cpy_r_r25.f2);
    CPy_INCREF(cpy_r_r31);
    return cpy_r_r31;
CPyL16: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL18;
    } else
        goto CPyL38;
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    CPy_RestoreExcInfo(cpy_r_r25);
    CPy_DecRef(cpy_r_r25.f0);
    CPy_DecRef(cpy_r_r25.f1);
    CPy_DecRef(cpy_r_r25.f2);
    cpy_r_r32 = CPy_KeepPropagating();
    if (!cpy_r_r32) goto CPyL31;
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r33 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_options;
    cpy_r_r35 = ((mypy___options___OptionsObject *)cpy_r_r34)->_disable_recursive_aliases;
    cpy_r_r36 = cpy_r_r35 ^ 1;
    if (cpy_r_r36) goto CPyL22;
    cpy_r_r37 = cpy_r_r36;
    goto CPyL24;
CPyL22: ;
    cpy_r_r38 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPY_GET_METHOD_TRAIT(cpy_r_r38, CPyType_semanal_shared___SemanticAnalyzerInterface, 28, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *))(cpy_r_r38); /* is_func_scope */
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_base_args", 234, CPyStatic_semanal_typeddict___globals);
        goto CPyL39;
    }
    cpy_r_r40 = cpy_r_r39 ^ 1;
    cpy_r_r37 = cpy_r_r40;
CPyL24: ;
    cpy_r_r41 = NULL;
    cpy_r_r42 = 2;
    cpy_r_r43 = 2;
    cpy_r_r44 = 2;
    cpy_r_r45 = NULL;
    cpy_r_r46 = CPY_GET_METHOD_TRAIT(cpy_r_r33, CPyType_semanal_shared___SemanticAnalyzerInterface, 4, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *, char, char, char, char, char, PyObject *))(cpy_r_r33, cpy_r_type, cpy_r_r41, cpy_r_r42, cpy_r_r43, 1, cpy_r_r37, cpy_r_r44, cpy_r_r45); /* anal_type */
    CPy_DECREF(cpy_r_type);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_base_args", 230, CPyStatic_semanal_typeddict___globals);
        goto CPyL35;
    }
    cpy_r_analyzed = cpy_r_r46;
    cpy_r_r47 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r48 = cpy_r_analyzed == cpy_r_r47;
    if (cpy_r_r48) {
        goto CPyL40;
    } else
        goto CPyL27;
CPyL26: ;
    cpy_r_r49 = Py_None;
    CPy_INCREF(cpy_r_r49);
    return cpy_r_r49;
CPyL27: ;
    if (likely(cpy_r_analyzed != Py_None))
        cpy_r_r50 = cpy_r_analyzed;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_base_args", 238, CPyStatic_semanal_typeddict___globals, "mypy.types.Type", cpy_r_analyzed);
        goto CPyL35;
    }
    cpy_r_r51 = PyList_Append(cpy_r_base_args, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_base_args", 238, CPyStatic_semanal_typeddict___globals);
        goto CPyL35;
    }
    cpy_r_r53 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r53;
    goto CPyL7;
CPyL30: ;
    return cpy_r_base_args;
CPyL31: ;
    cpy_r_r54 = NULL;
    return cpy_r_r54;
CPyL32: ;
    CPy_DecRef(cpy_r_base_args);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_base_args);
    CPy_DecRef(cpy_r_r9);
    goto CPyL31;
CPyL34: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL30;
CPyL35: ;
    CPy_DecRef(cpy_r_base_args);
    CPy_DecRef(cpy_r_args);
    goto CPyL31;
CPyL36: ;
    CPy_DecRef(cpy_r_base_args);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_expr);
    CPy_DecRef(cpy_r_r20);
    goto CPyL13;
CPyL37: ;
    CPy_DecRef(cpy_r_base_args);
    CPy_DecRef(cpy_r_args);
    goto CPyL13;
CPyL38: ;
    CPy_DecRef(cpy_r_r25.f0);
    CPy_DecRef(cpy_r_r25.f1);
    CPy_DecRef(cpy_r_r25.f2);
    goto CPyL17;
CPyL39: ;
    CPy_DecRef(cpy_r_base_args);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_r33);
    goto CPyL31;
CPyL40: ;
    CPy_DECREF(cpy_r_base_args);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_analyzed);
    goto CPyL26;
}

PyObject *CPyPy_semanal_typeddict___TypedDictAnalyzer___analyze_base_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"base", "ctx", 0};
    static CPyArg_Parser parser = {"OO:analyze_base_args", kwlist, 0};
    PyObject *obj_base;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_base, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeddict___TypedDictAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeddict.TypedDictAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_base;
    if (likely(Py_TYPE(obj_base) == CPyType_nodes___IndexExpr))
        arg_base = obj_base;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_base); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_typeddict___TypedDictAnalyzer___analyze_base_args(arg_self, arg_base, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_base_args", 212, CPyStatic_semanal_typeddict___globals);
    return NULL;
}

PyObject *CPyDef_semanal_typeddict___TypedDictAnalyzer___map_items_to_base(PyObject *cpy_r_self, PyObject *cpy_r_valid_items, PyObject *cpy_r_tvars, PyObject *cpy_r_base_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_mapped_items;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T3CIO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_type_in_base;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "map_items_to_base", 249, CPyStatic_semanal_typeddict___globals);
        goto CPyL21;
    }
    cpy_r_mapped_items = cpy_r_r0;
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_valid_items);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetKeysIter(cpy_r_valid_items);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "map_items_to_base", 250, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextKey(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL23;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r5.f2);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "map_items_to_base", 250, CPyStatic_semanal_typeddict___globals, "str", cpy_r_r8);
        goto CPyL24;
    }
    cpy_r_key = cpy_r_r9;
    cpy_r_r10 = CPyDict_GetItem(cpy_r_valid_items, cpy_r_key);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "map_items_to_base", 251, CPyStatic_semanal_typeddict___globals);
        goto CPyL25;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_types___Type)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "map_items_to_base", 251, CPyStatic_semanal_typeddict___globals, "mypy.types.Type", cpy_r_r10);
        goto CPyL25;
    }
    cpy_r_type_in_base = cpy_r_r11;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_tvars)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = cpy_r_r14 != 0;
    if (cpy_r_r15) goto CPyL8;
    cpy_r_r16 = CPyDict_SetItem(cpy_r_mapped_items, cpy_r_key, cpy_r_type_in_base);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_type_in_base);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "map_items_to_base", 253, CPyStatic_semanal_typeddict___globals);
        goto CPyL24;
    } else
        goto CPyL18;
CPyL8: ;
    cpy_r_r18 = PyDict_New();
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "map_items_to_base", 256, CPyStatic_semanal_typeddict___globals);
        goto CPyL26;
    }
    cpy_r_r19 = 0;
    cpy_r_r20 = 0;
CPyL10: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_tvars)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r23;
    if (!cpy_r_r24) goto CPyL16;
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_base_args)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r27;
    if (!cpy_r_r28) goto CPyL16;
    cpy_r_r29 = CPyList_GetItemUnsafe(cpy_r_tvars, cpy_r_r19);
    if (likely(PyObject_TypeCheck(cpy_r_r29, CPyType_types___TypeVarLikeType)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "map_items_to_base", 256, CPyStatic_semanal_typeddict___globals, "mypy.types.TypeVarLikeType", cpy_r_r29);
        goto CPyL27;
    }
    cpy_r_t = cpy_r_r30;
    cpy_r_r31 = CPyList_GetItemUnsafe(cpy_r_base_args, cpy_r_r20);
    if (likely(PyObject_TypeCheck(cpy_r_r31, CPyType_types___Type)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "map_items_to_base", 256, CPyStatic_semanal_typeddict___globals, "mypy.types.Type", cpy_r_r31);
        goto CPyL28;
    }
    cpy_r_a = cpy_r_r32;
    cpy_r_r33 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_t)->_id;
    CPy_INCREF(cpy_r_r33);
    CPy_DECREF(cpy_r_t);
    cpy_r_r34 = CPyDict_SetItem(cpy_r_r18, cpy_r_r33, cpy_r_a);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_a);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "map_items_to_base", 256, CPyStatic_semanal_typeddict___globals);
        goto CPyL27;
    }
    cpy_r_r36 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r36;
    cpy_r_r37 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r37;
    goto CPyL10;
CPyL16: ;
    cpy_r_r38 = CPyDef_expandtype___expand_type(cpy_r_type_in_base, cpy_r_r18);
    CPy_DECREF(cpy_r_type_in_base);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "map_items_to_base", 255, CPyStatic_semanal_typeddict___globals);
        goto CPyL25;
    }
    cpy_r_r39 = CPyDict_SetItem(cpy_r_mapped_items, cpy_r_key, cpy_r_r38);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "map_items_to_base", 255, CPyStatic_semanal_typeddict___globals);
        goto CPyL24;
    }
CPyL18: ;
    cpy_r_r41 = CPyDict_CheckSize(cpy_r_valid_items, cpy_r_r3);
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "map_items_to_base", 250, CPyStatic_semanal_typeddict___globals);
        goto CPyL24;
    } else
        goto CPyL2;
CPyL19: ;
    cpy_r_r42 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "map_items_to_base", 250, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    return cpy_r_mapped_items;
CPyL21: ;
    cpy_r_r43 = NULL;
    return cpy_r_r43;
CPyL22: ;
    CPy_DecRef(cpy_r_mapped_items);
    goto CPyL21;
CPyL23: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    goto CPyL19;
CPyL24: ;
    CPy_DecRef(cpy_r_mapped_items);
    CPy_DecRef(cpy_r_r4);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_mapped_items);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_key);
    goto CPyL21;
CPyL26: ;
    CPy_DecRef(cpy_r_mapped_items);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_type_in_base);
    goto CPyL21;
CPyL27: ;
    CPy_DecRef(cpy_r_mapped_items);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_type_in_base);
    CPy_DecRef(cpy_r_r18);
    goto CPyL21;
CPyL28: ;
    CPy_DecRef(cpy_r_mapped_items);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_type_in_base);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_t);
    goto CPyL21;
}

PyObject *CPyPy_semanal_typeddict___TypedDictAnalyzer___map_items_to_base(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"valid_items", "tvars", "base_args", 0};
    static CPyArg_Parser parser = {"OOO:map_items_to_base", kwlist, 0};
    PyObject *obj_valid_items;
    PyObject *obj_tvars;
    PyObject *obj_base_args;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_valid_items, &obj_tvars, &obj_base_args)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeddict___TypedDictAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeddict.TypedDictAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_valid_items;
    if (likely(PyDict_Check(obj_valid_items)))
        arg_valid_items = obj_valid_items;
    else {
        CPy_TypeError("dict", obj_valid_items); 
        goto fail;
    }
    PyObject *arg_tvars;
    if (likely(PyList_Check(obj_tvars)))
        arg_tvars = obj_tvars;
    else {
        CPy_TypeError("list", obj_tvars); 
        goto fail;
    }
    PyObject *arg_base_args;
    if (likely(PyList_Check(obj_base_args)))
        arg_base_args = obj_base_args;
    else {
        CPy_TypeError("list", obj_base_args); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_typeddict___TypedDictAnalyzer___map_items_to_base(arg_self, arg_valid_items, arg_tvars, arg_base_args);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeddict.py", "map_items_to_base", 241, CPyStatic_semanal_typeddict___globals);
    return NULL;
}

tuple_T4OOOO CPyDef_semanal_typeddict___TypedDictAnalyzer___analyze_typeddict_classdef_fields(PyObject *cpy_r_self, PyObject *cpy_r_defn, PyObject *cpy_r_oldfields) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_fields;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_statements;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_stmt;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
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
    CPyPtr cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    int64_t cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    int32_t cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyTagged cpy_r_r110;
    CPyTagged cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_analyzed;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    tuple_T4COOO cpy_r_r137;
    PyObject *cpy_r_r138;
    tuple_T4OOOO cpy_r_r139;
    PyObject *cpy_r_r140;
    int32_t cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    CPyPtr cpy_r_r159;
    PyObject *cpy_r_r160;
    char cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    char cpy_r_r165;
    CPyTagged cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_total;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    int32_t cpy_r_r170;
    char cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    CPyTagged cpy_r_r184;
    CPyTagged cpy_r_r185;
    CPyPtr cpy_r_r186;
    int64_t cpy_r_r187;
    CPyTagged cpy_r_r188;
    char cpy_r_r189;
    CPyPtr cpy_r_r190;
    int64_t cpy_r_r191;
    CPyTagged cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_field;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r198;
    char cpy_r_r199;
    char cpy_r_r200;
    char cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    CPyPtr cpy_r_r204;
    PyObject *cpy_r_r205;
    char cpy_r_r206;
    char cpy_r_r207;
    PyObject *cpy_r_r208;
    char cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    CPyPtr cpy_r_r212;
    PyObject *cpy_r_r213;
    char cpy_r_r214;
    char cpy_r_r215;
    PyObject *cpy_r_r216;
    char cpy_r_r217;
    char cpy_r_r218;
    char cpy_r_r219;
    int32_t cpy_r_r220;
    char cpy_r_r221;
    CPyTagged cpy_r_r222;
    CPyTagged cpy_r_r223;
    PyObject *cpy_r_required_keys;
    CPyPtr cpy_r_r224;
    int64_t cpy_r_r225;
    PyObject *cpy_r_r226;
    CPyTagged cpy_r_r227;
    CPyPtr cpy_r_r228;
    int64_t cpy_r_r229;
    CPyTagged cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_t_2;
    PyObject *cpy_r_r234;
    CPyPtr cpy_r_r235;
    PyObject *cpy_r_r236;
    char cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    char cpy_r_r241;
    CPyTagged cpy_r_r242;
    tuple_T4OOOO cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    tuple_T4OOOO cpy_r_r248;
    tuple_T4OOOO cpy_r_r249;
    if (cpy_r_oldfields != NULL) goto CPyL128;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_oldfields = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 275, CPyStatic_semanal_typeddict___globals);
        goto CPyL129;
    }
    cpy_r_fields = cpy_r_r1;
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 276, CPyStatic_semanal_typeddict___globals);
        goto CPyL130;
    }
    cpy_r_types = cpy_r_r2;
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 277, CPyStatic_semanal_typeddict___globals);
        goto CPyL131;
    }
    cpy_r_statements = cpy_r_r3;
    cpy_r_r4 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_defs;
    cpy_r_r5 = ((mypy___nodes___BlockObject *)cpy_r_r4)->_body;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = 0;
CPyL6: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL132;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_nodes___Statement)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 278, CPyStatic_semanal_typeddict___globals, "mypy.nodes.Statement", cpy_r_r11);
        goto CPyL133;
    }
    cpy_r_stmt = cpy_r_r12;
    cpy_r_r13 = (PyObject *)CPyType_nodes___AssignmentStmt;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (cpy_r_r16) goto CPyL20;
    cpy_r_r17 = (PyObject *)CPyType_nodes___PassStmt;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (cpy_r_r20) goto CPyL16;
    cpy_r_r21 = (PyObject *)CPyType_nodes___ExpressionStmt;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL18;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___ExpressionStmt))
        cpy_r_r25 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 283, CPyStatic_semanal_typeddict___globals, "mypy.nodes.ExpressionStmt", cpy_r_stmt);
        goto CPyL134;
    }
    cpy_r_r26 = ((mypy___nodes___ExpressionStmtObject *)cpy_r_r25)->_expr;
    cpy_r_r27 = (PyObject *)CPyType_nodes___EllipsisExpr;
    cpy_r_r28 = (CPyPtr)&((PyObject *)cpy_r_r26)->ob_type;
    cpy_r_r29 = *(PyObject * *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 == cpy_r_r27;
    if (!cpy_r_r30) goto CPyL14;
    cpy_r_r31 = cpy_r_r30;
    goto CPyL15;
CPyL14: ;
    cpy_r_r32 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_r26)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    cpy_r_r31 = cpy_r_r35;
CPyL15: ;
    if (!cpy_r_r31) goto CPyL18;
CPyL16: ;
    if (Py_TYPE(cpy_r_stmt) == CPyType_nodes___PassStmt)
        cpy_r_r36 = cpy_r_stmt;
    else {
        cpy_r_r36 = NULL;
    }
    if (cpy_r_r36 != NULL) goto __LL6174;
    if (Py_TYPE(cpy_r_stmt) == CPyType_nodes___ExpressionStmt)
        cpy_r_r36 = cpy_r_stmt;
    else {
        cpy_r_r36 = NULL;
    }
    if (cpy_r_r36 != NULL) goto __LL6174;
    CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 285, CPyStatic_semanal_typeddict___globals, "union[mypy.nodes.PassStmt, mypy.nodes.ExpressionStmt]", cpy_r_stmt);
    goto CPyL133;
__LL6174: ;
    cpy_r_r37 = PyList_Append(cpy_r_statements, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 285, CPyStatic_semanal_typeddict___globals);
        goto CPyL133;
    } else
        goto CPyL82;
CPyL18: ;
    cpy_r_r39 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_removed_statements;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = PyList_Append(cpy_r_r39, cpy_r_stmt);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 287, CPyStatic_semanal_typeddict___globals);
        goto CPyL134;
    }
    cpy_r_r42 = CPyStatics[5268]; /* ('Invalid statement in TypedDict definition; expected '
                                     '"field_name: field_type"') */
    cpy_r_r43 = NULL;
    cpy_r_r44 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_r42, cpy_r_stmt, cpy_r_r43);
    CPy_DECREF(cpy_r_stmt);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 288, CPyStatic_semanal_typeddict___globals);
        goto CPyL133;
    } else
        goto CPyL82;
CPyL20: ;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r45 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 289, CPyStatic_semanal_typeddict___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL134;
    }
    cpy_r_r46 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r45)->_lvalues;
    cpy_r_r47 = (CPyPtr)&((PyVarObject *)cpy_r_r46)->ob_size;
    cpy_r_r48 = *(int64_t *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 << 1;
    cpy_r_r50 = (Py_ssize_t)cpy_r_r49 > (Py_ssize_t)2;
    if (cpy_r_r50) goto CPyL25;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r51 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 289, CPyStatic_semanal_typeddict___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL134;
    }
    cpy_r_r52 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r51)->_lvalues;
    cpy_r_r53 = CPyList_GetItemShortBorrow(cpy_r_r52, 0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 289, CPyStatic_semanal_typeddict___globals);
        goto CPyL134;
    }
    cpy_r_r54 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r55 = (CPyPtr)&((PyObject *)cpy_r_r53)->ob_type;
    cpy_r_r56 = *(PyObject * *)cpy_r_r55;
    cpy_r_r57 = cpy_r_r56 == cpy_r_r54;
    if (cpy_r_r57) goto CPyL29;
CPyL25: ;
    cpy_r_r58 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_removed_statements;
    CPy_INCREF(cpy_r_r58);
    CPy_INCREF(cpy_r_stmt);
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r59 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 291, CPyStatic_semanal_typeddict___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL135;
    }
    cpy_r_r60 = PyList_Append(cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 291, CPyStatic_semanal_typeddict___globals);
        goto CPyL134;
    }
    cpy_r_r62 = CPyStatics[5268]; /* ('Invalid statement in TypedDict definition; expected '
                                     '"field_name: field_type"') */
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r63 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 292, CPyStatic_semanal_typeddict___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL133;
    }
    cpy_r_r64 = NULL;
    cpy_r_r65 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_r62, cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 292, CPyStatic_semanal_typeddict___globals);
        goto CPyL133;
    } else
        goto CPyL82;
CPyL29: ;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r66 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 294, CPyStatic_semanal_typeddict___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL134;
    }
    cpy_r_r67 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r66)->_lvalues;
    cpy_r_r68 = CPyList_GetItemShortBorrow(cpy_r_r67, 0);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 294, CPyStatic_semanal_typeddict___globals);
        goto CPyL134;
    }
    if (likely(Py_TYPE(cpy_r_r68) == CPyType_nodes___NameExpr))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 294, CPyStatic_semanal_typeddict___globals, "mypy.nodes.NameExpr", cpy_r_r68);
        goto CPyL134;
    }
    cpy_r_r70 = ((mypy___nodes___NameExprObject *)cpy_r_r69)->_name;
    CPy_INCREF(cpy_r_r70);
    cpy_r_name = cpy_r_r70;
    cpy_r_r71 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r72 = cpy_r_oldfields != cpy_r_r71;
    if (!cpy_r_r72) goto CPyL37;
    CPy_INCREF(cpy_r_oldfields);
    if (likely(cpy_r_oldfields != Py_None))
        cpy_r_r73 = cpy_r_oldfields;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 261, CPyStatic_semanal_typeddict___globals, "list", cpy_r_oldfields);
        goto CPyL136;
    }
    cpy_r_r74 = (CPyPtr)&((PyVarObject *)cpy_r_r73)->ob_size;
    cpy_r_r75 = *(int64_t *)cpy_r_r74;
    CPy_DECREF(cpy_r_r73);
    cpy_r_r76 = cpy_r_r75 << 1;
    cpy_r_r77 = cpy_r_r76 != 0;
    if (!cpy_r_r77) goto CPyL37;
    CPy_INCREF(cpy_r_oldfields);
    if (likely(cpy_r_oldfields != Py_None))
        cpy_r_r78 = cpy_r_oldfields;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 295, CPyStatic_semanal_typeddict___globals, "list", cpy_r_oldfields);
        goto CPyL136;
    }
    cpy_r_r79 = cpy_r_r78;
    goto CPyL39;
CPyL37: ;
    cpy_r_r80 = PyList_New(0);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 295, CPyStatic_semanal_typeddict___globals);
        goto CPyL136;
    }
    cpy_r_r79 = cpy_r_r80;
CPyL39: ;
    cpy_r_r81 = PySequence_Contains(cpy_r_r79, cpy_r_name);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 295, CPyStatic_semanal_typeddict___globals);
        goto CPyL136;
    }
    cpy_r_r83 = cpy_r_r81;
    if (!cpy_r_r83) goto CPyL44;
    cpy_r_r84 = CPyStatics[5265]; /* 'Overwriting TypedDict field "' */
    cpy_r_r85 = CPyStatics[5269]; /* '" while extending' */
    cpy_r_r86 = CPyStr_Build(3, cpy_r_r84, cpy_r_name, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 296, CPyStatic_semanal_typeddict___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_stmt);
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r87 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 296, CPyStatic_semanal_typeddict___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL137;
    }
    cpy_r_r88 = NULL;
    cpy_r_r89 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_r86, cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r89 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 296, CPyStatic_semanal_typeddict___globals);
        goto CPyL136;
    }
CPyL44: ;
    cpy_r_r90 = PySequence_Contains(cpy_r_fields, cpy_r_name);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 297, CPyStatic_semanal_typeddict___globals);
        goto CPyL136;
    }
    cpy_r_r92 = cpy_r_r90;
    if (!cpy_r_r92) goto CPyL49;
    cpy_r_r93 = CPyStatics[5270]; /* 'Duplicate TypedDict key "' */
    cpy_r_r94 = CPyStatics[178]; /* '"' */
    cpy_r_r95 = CPyStr_Build(3, cpy_r_r93, cpy_r_name, cpy_r_r94);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 298, CPyStatic_semanal_typeddict___globals);
        goto CPyL134;
    }
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r96 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 298, CPyStatic_semanal_typeddict___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL138;
    }
    cpy_r_r97 = NULL;
    cpy_r_r98 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_r95, cpy_r_r96, cpy_r_r97);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r98 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 298, CPyStatic_semanal_typeddict___globals);
        goto CPyL133;
    } else
        goto CPyL82;
CPyL49: ;
    cpy_r_r99 = PyList_Append(cpy_r_fields, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 301, CPyStatic_semanal_typeddict___globals);
        goto CPyL134;
    }
    CPy_INCREF(cpy_r_stmt);
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r101 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 302, CPyStatic_semanal_typeddict___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL134;
    }
    cpy_r_r102 = PyList_Append(cpy_r_statements, cpy_r_r101);
    CPy_DECREF(cpy_r_r101);
    cpy_r_r103 = cpy_r_r102 >= 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 302, CPyStatic_semanal_typeddict___globals);
        goto CPyL134;
    }
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r104 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 303, CPyStatic_semanal_typeddict___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL134;
    }
    cpy_r_r105 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r104)->_type;
    cpy_r_r106 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r107 = cpy_r_r105 == cpy_r_r106;
    if (!cpy_r_r107) goto CPyL56;
    cpy_r_r108 = NULL;
    cpy_r_r109 = NULL;
    cpy_r_r110 = CPY_INT_TAG;
    cpy_r_r111 = CPY_INT_TAG;
    cpy_r_r112 = CPyDef_types___AnyType(2, cpy_r_r108, cpy_r_r109, cpy_r_r110, cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 304, CPyStatic_semanal_typeddict___globals);
        goto CPyL134;
    }
    cpy_r_r113 = PyList_Append(cpy_r_types, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 304, CPyStatic_semanal_typeddict___globals);
        goto CPyL134;
    } else
        goto CPyL70;
CPyL56: ;
    cpy_r_r115 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r115);
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r116 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 307, CPyStatic_semanal_typeddict___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL139;
    }
    cpy_r_r117 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r116)->_type;
    CPy_INCREF(cpy_r_r117);
    if (likely(cpy_r_r117 != Py_None))
        cpy_r_r118 = cpy_r_r117;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 307, CPyStatic_semanal_typeddict___globals, "mypy.types.Type", cpy_r_r117);
        goto CPyL139;
    }
    cpy_r_r119 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_options;
    cpy_r_r120 = ((mypy___options___OptionsObject *)cpy_r_r119)->_disable_recursive_aliases;
    cpy_r_r121 = cpy_r_r120 ^ 1;
    if (cpy_r_r121) goto CPyL60;
    cpy_r_r122 = cpy_r_r121;
    goto CPyL62;
CPyL60: ;
    cpy_r_r123 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r123);
    cpy_r_r124 = CPY_GET_METHOD_TRAIT(cpy_r_r123, CPyType_semanal_shared___SemanticAnalyzerInterface, 28, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *))(cpy_r_r123); /* is_func_scope */
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r124 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 310, CPyStatic_semanal_typeddict___globals);
        goto CPyL140;
    }
    cpy_r_r125 = cpy_r_r124 ^ 1;
    cpy_r_r122 = cpy_r_r125;
CPyL62: ;
    cpy_r_r126 = CPyStatics[5271]; /* 'TypedDict item type' */
    cpy_r_r127 = NULL;
    cpy_r_r128 = 2;
    cpy_r_r129 = 2;
    cpy_r_r130 = 2;
    cpy_r_r131 = CPY_GET_METHOD_TRAIT(cpy_r_r115, CPyType_semanal_shared___SemanticAnalyzerInterface, 4, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *, char, char, char, char, char, PyObject *))(cpy_r_r115, cpy_r_r118, cpy_r_r127, cpy_r_r128, cpy_r_r129, 1, cpy_r_r122, cpy_r_r130, cpy_r_r126); /* anal_type */
    CPy_DECREF(cpy_r_r118);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 306, CPyStatic_semanal_typeddict___globals);
        goto CPyL134;
    }
    cpy_r_analyzed = cpy_r_r131;
    cpy_r_r132 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r133 = cpy_r_analyzed == cpy_r_r132;
    if (cpy_r_r133) {
        goto CPyL141;
    } else
        goto CPyL68;
CPyL64: ;
    cpy_r_r134 = PyList_New(0);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 314, CPyStatic_semanal_typeddict___globals);
        goto CPyL127;
    }
    cpy_r_r135 = PyList_New(0);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 314, CPyStatic_semanal_typeddict___globals);
        goto CPyL142;
    }
    cpy_r_r136 = PySet_New(NULL);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 314, CPyStatic_semanal_typeddict___globals);
        goto CPyL143;
    }
    cpy_r_r137.f0 = 1;
    cpy_r_r137.f1 = cpy_r_r134;
    cpy_r_r137.f2 = cpy_r_r135;
    cpy_r_r137.f3 = cpy_r_r136;
    CPy_INCREF(cpy_r_r137.f1);
    CPy_INCREF(cpy_r_r137.f2);
    CPy_INCREF(cpy_r_r137.f3);
    CPy_DECREF(cpy_r_r137.f1);
    CPy_DECREF(cpy_r_r137.f2);
    CPy_DECREF(cpy_r_r137.f3);
    cpy_r_r138 = Py_None;
    cpy_r_r139.f0 = cpy_r_r138;
    cpy_r_r139.f1 = cpy_r_r134;
    cpy_r_r139.f2 = cpy_r_r135;
    cpy_r_r139.f3 = cpy_r_r136;
    CPy_INCREF(cpy_r_r139.f0);
    CPy_INCREF(cpy_r_r139.f1);
    CPy_INCREF(cpy_r_r139.f2);
    CPy_INCREF(cpy_r_r139.f3);
    CPy_DECREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r135);
    CPy_DECREF(cpy_r_r136);
    return cpy_r_r139;
CPyL68: ;
    if (likely(cpy_r_analyzed != Py_None))
        cpy_r_r140 = cpy_r_analyzed;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 315, CPyStatic_semanal_typeddict___globals, "mypy.types.Type", cpy_r_analyzed);
        goto CPyL134;
    }
    cpy_r_r141 = PyList_Append(cpy_r_types, cpy_r_r140);
    CPy_DECREF(cpy_r_r140);
    cpy_r_r142 = cpy_r_r141 >= 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 315, CPyStatic_semanal_typeddict___globals);
        goto CPyL134;
    }
CPyL70: ;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r143 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 317, CPyStatic_semanal_typeddict___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL134;
    }
    cpy_r_r144 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r143)->_type;
    cpy_r_r145 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r146 = cpy_r_r144 == cpy_r_r145;
    if (cpy_r_r146) goto CPyL76;
    CPy_INCREF(cpy_r_stmt);
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r147 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 317, CPyStatic_semanal_typeddict___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL134;
    }
    cpy_r_r148 = CPyStatics[4135]; /* 'new_syntax' */
    cpy_r_r149 = PyObject_HasAttr(cpy_r_r147, cpy_r_r148);
    CPy_DECREF(cpy_r_r147);
    if (!cpy_r_r149) goto CPyL78;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r150 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 317, CPyStatic_semanal_typeddict___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL134;
    }
    cpy_r_r151 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r150)->_new_syntax;
    if (cpy_r_r151) goto CPyL78;
CPyL76: ;
    cpy_r_r152 = CPyStatics[5268]; /* ('Invalid statement in TypedDict definition; expected '
                                      '"field_name: field_type"') */
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r153 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 318, CPyStatic_semanal_typeddict___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL133;
    }
    cpy_r_r154 = NULL;
    cpy_r_r155 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_r152, cpy_r_r153, cpy_r_r154);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r155 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 318, CPyStatic_semanal_typeddict___globals);
        goto CPyL133;
    } else
        goto CPyL82;
CPyL78: ;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r156 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 319, CPyStatic_semanal_typeddict___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL134;
    }
    cpy_r_r157 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r156)->_rvalue;
    cpy_r_r158 = (PyObject *)CPyType_nodes___TempNode;
    cpy_r_r159 = (CPyPtr)&((PyObject *)cpy_r_r157)->ob_type;
    cpy_r_r160 = *(PyObject * *)cpy_r_r159;
    cpy_r_r161 = cpy_r_r160 == cpy_r_r158;
    if (cpy_r_r161) goto CPyL144;
    cpy_r_r162 = CPyStatics[5272]; /* 'Right hand side values are not supported in TypedDict' */
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r163 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 321, CPyStatic_semanal_typeddict___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL133;
    }
    cpy_r_r164 = NULL;
    cpy_r_r165 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_r162, cpy_r_r163, cpy_r_r164);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r165 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 321, CPyStatic_semanal_typeddict___globals);
        goto CPyL133;
    }
CPyL82: ;
    cpy_r_r166 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r166;
    goto CPyL6;
CPyL83: ;
    cpy_r_r167 = 1 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r167);
    cpy_r_total = cpy_r_r167;
    cpy_r_r168 = CPyStatics[4723]; /* 'total' */
    cpy_r_r169 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_keywords;
    CPy_INCREF(cpy_r_r169);
    cpy_r_r170 = PyDict_Contains(cpy_r_r169, cpy_r_r168);
    CPy_DECREF(cpy_r_r169);
    cpy_r_r171 = cpy_r_r170 >= 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 323, CPyStatic_semanal_typeddict___globals);
        goto CPyL145;
    }
    cpy_r_r172 = cpy_r_r170;
    if (cpy_r_r172) {
        goto CPyL146;
    } else
        goto CPyL90;
CPyL85: ;
    cpy_r_r173 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r173);
    cpy_r_r174 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_keywords;
    CPy_INCREF(cpy_r_r174);
    cpy_r_r175 = CPyStatics[4723]; /* 'total' */
    cpy_r_r176 = CPyDict_GetItem(cpy_r_r174, cpy_r_r175);
    CPy_DECREF(cpy_r_r174);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 324, CPyStatic_semanal_typeddict___globals);
        goto CPyL147;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r176, CPyType_nodes___Expression)))
        cpy_r_r177 = cpy_r_r176;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 324, CPyStatic_semanal_typeddict___globals, "mypy.nodes.Expression", cpy_r_r176);
        goto CPyL147;
    }
    cpy_r_r178 = CPyStatics[4723]; /* 'total' */
    cpy_r_r179 = 1 ? Py_True : Py_False;
    cpy_r_r180 = CPyDef_semanal_shared___require_bool_literal_argument(cpy_r_r173, cpy_r_r177, cpy_r_r178, cpy_r_r179);
    CPy_DECREF(cpy_r_r173);
    CPy_DECREF(cpy_r_r177);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 324, CPyStatic_semanal_typeddict___globals);
        goto CPyL148;
    }
    if (unlikely(!PyBool_Check(cpy_r_r180))) {
        CPy_TypeError("bool", cpy_r_r180); cpy_r_r181 = 2;
    } else
        cpy_r_r181 = cpy_r_r180 == Py_True;
    CPy_DECREF(cpy_r_r180);
    if (unlikely(cpy_r_r181 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 324, CPyStatic_semanal_typeddict___globals);
        goto CPyL148;
    }
    cpy_r_r182 = cpy_r_r181 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r182);
    cpy_r_total = cpy_r_r182;
CPyL90: ;
    cpy_r_r183 = PySet_New(NULL);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 325, CPyStatic_semanal_typeddict___globals);
        goto CPyL145;
    }
    cpy_r_r184 = 0;
    cpy_r_r185 = 0;
CPyL92: ;
    cpy_r_r186 = (CPyPtr)&((PyVarObject *)cpy_r_fields)->ob_size;
    cpy_r_r187 = *(int64_t *)cpy_r_r186;
    cpy_r_r188 = cpy_r_r187 << 1;
    cpy_r_r189 = (Py_ssize_t)cpy_r_r184 < (Py_ssize_t)cpy_r_r188;
    if (!cpy_r_r189) goto CPyL149;
    cpy_r_r190 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r191 = *(int64_t *)cpy_r_r190;
    cpy_r_r192 = cpy_r_r191 << 1;
    cpy_r_r193 = (Py_ssize_t)cpy_r_r185 < (Py_ssize_t)cpy_r_r192;
    if (!cpy_r_r193) goto CPyL149;
    cpy_r_r194 = CPyList_GetItemUnsafe(cpy_r_fields, cpy_r_r184);
    if (likely(PyUnicode_Check(cpy_r_r194)))
        cpy_r_r195 = cpy_r_r194;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 325, CPyStatic_semanal_typeddict___globals, "str", cpy_r_r194);
        goto CPyL150;
    }
    cpy_r_field = cpy_r_r195;
    cpy_r_r196 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r185);
    if (likely(PyObject_TypeCheck(cpy_r_r196, CPyType_types___Type)))
        cpy_r_r197 = cpy_r_r196;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 325, CPyStatic_semanal_typeddict___globals, "mypy.types.Type", cpy_r_r196);
        goto CPyL151;
    }
    cpy_r_t = cpy_r_r197;
    cpy_r_r198 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r199 = cpy_r_total != cpy_r_r198;
    if (!cpy_r_r199) goto CPyL101;
    if (unlikely(!PyBool_Check(cpy_r_total))) {
        CPy_TypeError("bool", cpy_r_total); cpy_r_r200 = 2;
    } else
        cpy_r_r200 = cpy_r_total == Py_True;
    if (unlikely(cpy_r_r200 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 322, CPyStatic_semanal_typeddict___globals);
        goto CPyL152;
    }
    if (!cpy_r_r200) goto CPyL101;
    if (unlikely(!PyBool_Check(cpy_r_total))) {
        CPy_TypeError("bool", cpy_r_total); cpy_r_r201 = 2;
    } else
        cpy_r_r201 = cpy_r_total == Py_True;
    if (unlikely(cpy_r_r201 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 328, CPyStatic_semanal_typeddict___globals);
        goto CPyL152;
    }
    cpy_r_r202 = cpy_r_r201;
    goto CPyL106;
CPyL101: ;
    cpy_r_r203 = (PyObject *)CPyType_types___RequiredType;
    cpy_r_r204 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r205 = *(PyObject * *)cpy_r_r204;
    cpy_r_r206 = cpy_r_r205 == cpy_r_r203;
    if (cpy_r_r206) goto CPyL103;
    cpy_r_r207 = cpy_r_r206;
    goto CPyL105;
CPyL103: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___RequiredType))
        cpy_r_r208 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 328, CPyStatic_semanal_typeddict___globals, "mypy.types.RequiredType", cpy_r_t);
        goto CPyL152;
    }
    cpy_r_r209 = ((mypy___types___RequiredTypeObject *)cpy_r_r208)->_required;
    cpy_r_r207 = cpy_r_r209;
CPyL105: ;
    cpy_r_r202 = cpy_r_r207;
CPyL106: ;
    if (cpy_r_r202) {
        goto CPyL108;
    } else
        goto CPyL153;
CPyL107: ;
    cpy_r_r210 = cpy_r_r202;
    goto CPyL113;
CPyL108: ;
    cpy_r_r211 = (PyObject *)CPyType_types___RequiredType;
    cpy_r_r212 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r213 = *(PyObject * *)cpy_r_r212;
    cpy_r_r214 = cpy_r_r213 == cpy_r_r211;
    if (cpy_r_r214) {
        goto CPyL110;
    } else
        goto CPyL154;
CPyL109: ;
    cpy_r_r215 = cpy_r_r214;
    goto CPyL112;
CPyL110: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___RequiredType))
        cpy_r_r216 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 329, CPyStatic_semanal_typeddict___globals, "mypy.types.RequiredType", cpy_r_t);
        goto CPyL152;
    }
    cpy_r_r217 = ((mypy___types___RequiredTypeObject *)cpy_r_r216)->_required;
    CPy_DECREF(cpy_r_t);
    cpy_r_r218 = cpy_r_r217 ^ 1;
    cpy_r_r215 = cpy_r_r218;
CPyL112: ;
    cpy_r_r219 = cpy_r_r215 ^ 1;
    cpy_r_r210 = cpy_r_r219;
CPyL113: ;
    if (!cpy_r_r210) goto CPyL155;
    cpy_r_r220 = PySet_Add(cpy_r_r183, cpy_r_field);
    CPy_DECREF(cpy_r_field);
    cpy_r_r221 = cpy_r_r220 >= 0;
    if (unlikely(!cpy_r_r221)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 325, CPyStatic_semanal_typeddict___globals);
        goto CPyL150;
    }
CPyL115: ;
    cpy_r_r222 = cpy_r_r184 + 2;
    cpy_r_r184 = cpy_r_r222;
    cpy_r_r223 = cpy_r_r185 + 2;
    cpy_r_r185 = cpy_r_r223;
    goto CPyL92;
CPyL116: ;
    cpy_r_required_keys = cpy_r_r183;
    cpy_r_r224 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r225 = *(int64_t *)cpy_r_r224;
    cpy_r_r226 = PyList_New(cpy_r_r225);
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 331, CPyStatic_semanal_typeddict___globals);
        goto CPyL156;
    }
    cpy_r_r227 = 0;
CPyL118: ;
    cpy_r_r228 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r229 = *(int64_t *)cpy_r_r228;
    cpy_r_r230 = cpy_r_r229 << 1;
    cpy_r_r231 = (Py_ssize_t)cpy_r_r227 < (Py_ssize_t)cpy_r_r230;
    if (!cpy_r_r231) goto CPyL157;
    cpy_r_r232 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r227);
    if (likely(PyObject_TypeCheck(cpy_r_r232, CPyType_types___Type)))
        cpy_r_r233 = cpy_r_r232;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 331, CPyStatic_semanal_typeddict___globals, "mypy.types.Type", cpy_r_r232);
        goto CPyL158;
    }
    cpy_r_t_2 = cpy_r_r233;
    cpy_r_r234 = (PyObject *)CPyType_types___RequiredType;
    cpy_r_r235 = (CPyPtr)&((PyObject *)cpy_r_t_2)->ob_type;
    cpy_r_r236 = *(PyObject * *)cpy_r_r235;
    cpy_r_r237 = cpy_r_r236 == cpy_r_r234;
    if (!cpy_r_r237) goto CPyL123;
    if (likely(Py_TYPE(cpy_r_t_2) == CPyType_types___RequiredType))
        cpy_r_r238 = cpy_r_t_2;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 332, CPyStatic_semanal_typeddict___globals, "mypy.types.RequiredType", cpy_r_t_2);
        goto CPyL159;
    }
    cpy_r_r239 = ((mypy___types___RequiredTypeObject *)cpy_r_r238)->_item;
    CPy_INCREF(cpy_r_r239);
    CPy_DECREF(cpy_r_t_2);
    cpy_r_r240 = cpy_r_r239;
    goto CPyL124;
CPyL123: ;
    cpy_r_r240 = cpy_r_t_2;
CPyL124: ;
    cpy_r_r241 = CPyList_SetItemUnsafe(cpy_r_r226, cpy_r_r227, cpy_r_r240);
    if (unlikely(!cpy_r_r241)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 331, CPyStatic_semanal_typeddict___globals);
        goto CPyL158;
    }
    cpy_r_r242 = cpy_r_r227 + 2;
    cpy_r_r227 = cpy_r_r242;
    goto CPyL118;
CPyL126: ;
    cpy_r_types = cpy_r_r226;
    cpy_r_r243.f0 = cpy_r_fields;
    cpy_r_r243.f1 = cpy_r_types;
    cpy_r_r243.f2 = cpy_r_statements;
    cpy_r_r243.f3 = cpy_r_required_keys;
    CPy_INCREF(cpy_r_r243.f0);
    CPy_INCREF(cpy_r_r243.f1);
    CPy_INCREF(cpy_r_r243.f2);
    CPy_INCREF(cpy_r_r243.f3);
    CPy_DECREF(cpy_r_fields);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_statements);
    CPy_DECREF(cpy_r_required_keys);
    cpy_r_r244 = cpy_r_r243.f0;
    CPy_INCREF(cpy_r_r244);
    cpy_r_r245 = cpy_r_r243.f1;
    CPy_INCREF(cpy_r_r245);
    cpy_r_r246 = cpy_r_r243.f2;
    CPy_INCREF(cpy_r_r246);
    cpy_r_r247 = cpy_r_r243.f3;
    CPy_INCREF(cpy_r_r247);
    CPy_DECREF(cpy_r_r243.f0);
    CPy_DECREF(cpy_r_r243.f1);
    CPy_DECREF(cpy_r_r243.f2);
    CPy_DECREF(cpy_r_r243.f3);
    cpy_r_r248.f0 = cpy_r_r244;
    cpy_r_r248.f1 = cpy_r_r245;
    cpy_r_r248.f2 = cpy_r_r246;
    cpy_r_r248.f3 = cpy_r_r247;
    CPy_INCREF(cpy_r_r248.f0);
    CPy_INCREF(cpy_r_r248.f1);
    CPy_INCREF(cpy_r_r248.f2);
    CPy_INCREF(cpy_r_r248.f3);
    CPy_DECREF(cpy_r_r244);
    CPy_DECREF(cpy_r_r245);
    CPy_DECREF(cpy_r_r246);
    CPy_DECREF(cpy_r_r247);
    return cpy_r_r248;
CPyL127: ;
    tuple_T4OOOO __tmp6175 = { NULL, NULL, NULL, NULL };
    cpy_r_r249 = __tmp6175;
    return cpy_r_r249;
CPyL128: ;
    CPy_INCREF(cpy_r_oldfields);
    goto CPyL2;
CPyL129: ;
    CPy_DecRef(cpy_r_oldfields);
    goto CPyL127;
CPyL130: ;
    CPy_DecRef(cpy_r_oldfields);
    CPy_DecRef(cpy_r_fields);
    goto CPyL127;
CPyL131: ;
    CPy_DecRef(cpy_r_oldfields);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    goto CPyL127;
CPyL132: ;
    CPy_DECREF(cpy_r_oldfields);
    CPy_DECREF(cpy_r_r5);
    goto CPyL83;
CPyL133: ;
    CPy_DecRef(cpy_r_oldfields);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r5);
    goto CPyL127;
CPyL134: ;
    CPy_DecRef(cpy_r_oldfields);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_stmt);
    goto CPyL127;
CPyL135: ;
    CPy_DecRef(cpy_r_oldfields);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r58);
    goto CPyL127;
CPyL136: ;
    CPy_DecRef(cpy_r_oldfields);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_name);
    goto CPyL127;
CPyL137: ;
    CPy_DecRef(cpy_r_oldfields);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r86);
    goto CPyL127;
CPyL138: ;
    CPy_DecRef(cpy_r_oldfields);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r95);
    goto CPyL127;
CPyL139: ;
    CPy_DecRef(cpy_r_oldfields);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r115);
    goto CPyL127;
CPyL140: ;
    CPy_DecRef(cpy_r_oldfields);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r118);
    goto CPyL127;
CPyL141: ;
    CPy_DECREF(cpy_r_oldfields);
    CPy_DECREF(cpy_r_fields);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_statements);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_stmt);
    CPy_DECREF(cpy_r_analyzed);
    goto CPyL64;
CPyL142: ;
    CPy_DecRef(cpy_r_r134);
    goto CPyL127;
CPyL143: ;
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r135);
    goto CPyL127;
CPyL144: ;
    CPy_DECREF(cpy_r_stmt);
    goto CPyL82;
CPyL145: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_total);
    goto CPyL127;
CPyL146: ;
    CPy_DECREF(cpy_r_total);
    goto CPyL85;
CPyL147: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_r173);
    goto CPyL127;
CPyL148: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    goto CPyL127;
CPyL149: ;
    CPy_DECREF(cpy_r_total);
    goto CPyL116;
CPyL150: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_total);
    CPy_DecRef(cpy_r_r183);
    goto CPyL127;
CPyL151: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_total);
    CPy_DecRef(cpy_r_r183);
    CPy_DecRef(cpy_r_field);
    goto CPyL127;
CPyL152: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_total);
    CPy_DecRef(cpy_r_r183);
    CPy_DecRef(cpy_r_field);
    CPy_DecRef(cpy_r_t);
    goto CPyL127;
CPyL153: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL107;
CPyL154: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL109;
CPyL155: ;
    CPy_DECREF(cpy_r_field);
    goto CPyL115;
CPyL156: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_required_keys);
    goto CPyL127;
CPyL157: ;
    CPy_DECREF(cpy_r_types);
    goto CPyL126;
CPyL158: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_required_keys);
    CPy_DecRef(cpy_r_r226);
    goto CPyL127;
CPyL159: ;
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_statements);
    CPy_DecRef(cpy_r_required_keys);
    CPy_DecRef(cpy_r_r226);
    CPy_DecRef(cpy_r_t_2);
    goto CPyL127;
}

PyObject *CPyPy_semanal_typeddict___TypedDictAnalyzer___analyze_typeddict_classdef_fields(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"defn", "oldfields", 0};
    static CPyArg_Parser parser = {"O|O:analyze_typeddict_classdef_fields", kwlist, 0};
    PyObject *obj_defn;
    PyObject *obj_oldfields = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_defn, &obj_oldfields)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeddict___TypedDictAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeddict.TypedDictAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_defn;
    if (likely(Py_TYPE(obj_defn) == CPyType_nodes___ClassDef))
        arg_defn = obj_defn;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_defn); 
        goto fail;
    }
    PyObject *arg_oldfields;
    if (obj_oldfields == NULL) {
        arg_oldfields = NULL;
        goto __LL6176;
    }
    if (PyList_Check(obj_oldfields))
        arg_oldfields = obj_oldfields;
    else {
        arg_oldfields = NULL;
    }
    if (arg_oldfields != NULL) goto __LL6176;
    if (obj_oldfields == Py_None)
        arg_oldfields = obj_oldfields;
    else {
        arg_oldfields = NULL;
    }
    if (arg_oldfields != NULL) goto __LL6176;
    CPy_TypeError("list or None", obj_oldfields); 
    goto fail;
__LL6176: ;
    tuple_T4OOOO retval = CPyDef_semanal_typeddict___TypedDictAnalyzer___analyze_typeddict_classdef_fields(arg_self, arg_defn, arg_oldfields);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(4);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6177 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp6177);
    PyObject *__tmp6178 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp6178);
    PyObject *__tmp6179 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp6179);
    PyObject *__tmp6180 = retval.f3;
    PyTuple_SET_ITEM(retbox, 3, __tmp6180);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeddict.py", "analyze_typeddict_classdef_fields", 260, CPyStatic_semanal_typeddict___globals);
    return NULL;
}

tuple_T3COO CPyDef_semanal_typeddict___TypedDictAnalyzer___check_typeddict(PyObject *cpy_r_self, PyObject *cpy_r_node, PyObject *cpy_r_var_name, char cpy_r_is_func_scope) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T3CCO cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T3COO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_call;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_callee;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    tuple_T3CCO cpy_r_r25;
    PyObject *cpy_r_r26;
    tuple_T3COO cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_fullname;
    tuple_T3OOO cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    tuple_T3CCO cpy_r_r38;
    PyObject *cpy_r_r39;
    tuple_T3COO cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    tuple_T3CCO cpy_r_r45;
    PyObject *cpy_r_r46;
    tuple_T3COO cpy_r_r47;
    tuple_T6OOOCOC cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_types;
    char cpy_r_r52;
    char cpy_r_total;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_tvar_defs;
    char cpy_r_r54;
    char cpy_r_ok;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyTagged cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyTagged cpy_r_r88;
    CPyTagged cpy_r_r89;
    CPyPtr cpy_r_r90;
    int64_t cpy_r_r91;
    CPyTagged cpy_r_r92;
    char cpy_r_r93;
    CPyPtr cpy_r_r94;
    int64_t cpy_r_r95;
    CPyTagged cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_field;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_t;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyPtr cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    CPyPtr cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    CPyTagged cpy_r_r122;
    CPyTagged cpy_r_r123;
    PyObject *cpy_r_required_keys;
    CPyPtr cpy_r_r124;
    int64_t cpy_r_r125;
    PyObject *cpy_r_r126;
    CPyTagged cpy_r_r127;
    CPyPtr cpy_r_r128;
    int64_t cpy_r_r129;
    CPyTagged cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_t_2;
    PyObject *cpy_r_r134;
    CPyPtr cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    CPyTagged cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_existing_info;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    CPyPtr cpy_r_r147;
    PyObject *cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    CPyTagged cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    CPyTagged cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    char cpy_r_r170;
    char cpy_r_r171;
    char cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    char cpy_r_r181;
    tuple_T3COO cpy_r_r182;
    tuple_T3COO cpy_r_r183;
    cpy_r_r0 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL3;
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 352, CPyStatic_semanal_typeddict___globals);
        goto CPyL110;
    }
    cpy_r_r5.f0 = 0;
    cpy_r_r5.f1 = 1;
    cpy_r_r5.f2 = cpy_r_r4;
    CPy_INCREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f2);
    cpy_r_r6 = Py_None;
    cpy_r_r7.f0 = 0;
    cpy_r_r7.f1 = cpy_r_r6;
    cpy_r_r7.f2 = cpy_r_r4;
    CPy_INCREF(cpy_r_r7.f1);
    CPy_INCREF(cpy_r_r7.f2);
    CPy_DECREF(cpy_r_r4);
    return cpy_r_r7;
CPyL3: ;
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r8 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 353, CPyStatic_semanal_typeddict___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL110;
    }
    cpy_r_call = cpy_r_r8;
    cpy_r_r9 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_callee;
    CPy_INCREF(cpy_r_r9);
    cpy_r_callee = cpy_r_r9;
    cpy_r_r10 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL6;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL7;
CPyL6: ;
    cpy_r_r15 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    cpy_r_r14 = cpy_r_r18;
CPyL7: ;
    if (!cpy_r_r14) goto CPyL9;
    cpy_r_r19 = cpy_r_r14;
    goto CPyL10;
CPyL9: ;
    cpy_r_r20 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    cpy_r_r19 = cpy_r_r23;
CPyL10: ;
    if (cpy_r_r19) {
        goto CPyL13;
    } else
        goto CPyL111;
CPyL11: ;
    cpy_r_r24 = PyList_New(0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 356, CPyStatic_semanal_typeddict___globals);
        goto CPyL110;
    }
    cpy_r_r25.f0 = 0;
    cpy_r_r25.f1 = 1;
    cpy_r_r25.f2 = cpy_r_r24;
    CPy_INCREF(cpy_r_r25.f2);
    CPy_DECREF(cpy_r_r25.f2);
    cpy_r_r26 = Py_None;
    cpy_r_r27.f0 = 0;
    cpy_r_r27.f1 = cpy_r_r26;
    cpy_r_r27.f2 = cpy_r_r24;
    CPy_INCREF(cpy_r_r27.f1);
    CPy_INCREF(cpy_r_r27.f2);
    CPy_DECREF(cpy_r_r24);
    return cpy_r_r27;
CPyL13: ;
    if (likely((Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_callee) == CPyType_nodes___RefExpr)))
        cpy_r_r28 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 357, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_callee);
        goto CPyL112;
    }
    cpy_r_r29 = CPY_GET_ATTR(cpy_r_r28, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 357, CPyStatic_semanal_typeddict___globals);
        goto CPyL112;
    }
CPyL15: ;
    cpy_r_fullname = cpy_r_r29;
    cpy_r_r30 = CPyStatic_types___TPDICT_NAMES;
    if (unlikely(cpy_r_r30.f0 == NULL)) {
        goto CPyL113;
    } else
        goto CPyL18;
CPyL16: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TPDICT_NAMES\" was not set");
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 358, CPyStatic_semanal_typeddict___globals);
        goto CPyL110;
    }
    CPy_Unreachable();
CPyL18: ;
    CPy_INCREF(cpy_r_r30.f0);
    CPy_INCREF(cpy_r_r30.f1);
    CPy_INCREF(cpy_r_r30.f2);
    cpy_r_r32 = PyTuple_New(3);
    if (unlikely(cpy_r_r32 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6181 = cpy_r_r30.f0;
    PyTuple_SET_ITEM(cpy_r_r32, 0, __tmp6181);
    PyObject *__tmp6182 = cpy_r_r30.f1;
    PyTuple_SET_ITEM(cpy_r_r32, 1, __tmp6182);
    PyObject *__tmp6183 = cpy_r_r30.f2;
    PyTuple_SET_ITEM(cpy_r_r32, 2, __tmp6183);
    cpy_r_r33 = PySequence_Contains(cpy_r_r32, cpy_r_fullname);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_fullname);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 358, CPyStatic_semanal_typeddict___globals);
        goto CPyL112;
    }
    cpy_r_r35 = cpy_r_r33;
    cpy_r_r36 = cpy_r_r35 ^ 1;
    if (cpy_r_r36) {
        goto CPyL114;
    } else
        goto CPyL22;
CPyL20: ;
    cpy_r_r37 = PyList_New(0);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 359, CPyStatic_semanal_typeddict___globals);
        goto CPyL110;
    }
    cpy_r_r38.f0 = 0;
    cpy_r_r38.f1 = 1;
    cpy_r_r38.f2 = cpy_r_r37;
    CPy_INCREF(cpy_r_r38.f2);
    CPy_DECREF(cpy_r_r38.f2);
    cpy_r_r39 = Py_None;
    cpy_r_r40.f0 = 0;
    cpy_r_r40.f1 = cpy_r_r39;
    cpy_r_r40.f2 = cpy_r_r37;
    CPy_INCREF(cpy_r_r40.f1);
    CPy_INCREF(cpy_r_r40.f2);
    CPy_DECREF(cpy_r_r37);
    return cpy_r_r40;
CPyL22: ;
    cpy_r_r41 = CPyDef_semanal_typeddict___TypedDictAnalyzer___parse_typeddict_args(cpy_r_self, cpy_r_call);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 360, CPyStatic_semanal_typeddict___globals);
        goto CPyL112;
    }
    cpy_r_res = cpy_r_r41;
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_res == cpy_r_r42;
    if (cpy_r_r43) {
        goto CPyL115;
    } else
        goto CPyL26;
CPyL24: ;
    cpy_r_r44 = PyList_New(0);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 364, CPyStatic_semanal_typeddict___globals);
        goto CPyL110;
    }
    cpy_r_r45.f0 = 1;
    cpy_r_r45.f1 = 1;
    cpy_r_r45.f2 = cpy_r_r44;
    CPy_INCREF(cpy_r_r45.f2);
    CPy_DECREF(cpy_r_r45.f2);
    cpy_r_r46 = Py_None;
    cpy_r_r47.f0 = 1;
    cpy_r_r47.f1 = cpy_r_r46;
    cpy_r_r47.f2 = cpy_r_r44;
    CPy_INCREF(cpy_r_r47.f1);
    CPy_INCREF(cpy_r_r47.f2);
    CPy_DECREF(cpy_r_r44);
    return cpy_r_r47;
CPyL26: ;
    PyObject *__tmp6184;
    if (unlikely(!(PyTuple_Check(cpy_r_res) && PyTuple_GET_SIZE(cpy_r_res) == 6))) {
        __tmp6184 = NULL;
        goto __LL6185;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_res, 0))))
        __tmp6184 = PyTuple_GET_ITEM(cpy_r_res, 0);
    else {
        __tmp6184 = NULL;
    }
    if (__tmp6184 == NULL) goto __LL6185;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_res, 1))))
        __tmp6184 = PyTuple_GET_ITEM(cpy_r_res, 1);
    else {
        __tmp6184 = NULL;
    }
    if (__tmp6184 == NULL) goto __LL6185;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_res, 2))))
        __tmp6184 = PyTuple_GET_ITEM(cpy_r_res, 2);
    else {
        __tmp6184 = NULL;
    }
    if (__tmp6184 == NULL) goto __LL6185;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_res, 3))))
        __tmp6184 = PyTuple_GET_ITEM(cpy_r_res, 3);
    else {
        __tmp6184 = NULL;
    }
    if (__tmp6184 == NULL) goto __LL6185;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_res, 4))))
        __tmp6184 = PyTuple_GET_ITEM(cpy_r_res, 4);
    else {
        __tmp6184 = NULL;
    }
    if (__tmp6184 == NULL) goto __LL6185;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_res, 5))))
        __tmp6184 = PyTuple_GET_ITEM(cpy_r_res, 5);
    else {
        __tmp6184 = NULL;
    }
    if (__tmp6184 == NULL) goto __LL6185;
    __tmp6184 = cpy_r_res;
__LL6185: ;
    if (unlikely(__tmp6184 == NULL)) {
        CPy_TypeError("tuple[str, list, list, bool, list, bool]", cpy_r_res); cpy_r_r48 = (tuple_T6OOOCOC) { NULL, NULL, NULL, 2, NULL, 2 };
    } else {
        PyObject *__tmp6186 = PyTuple_GET_ITEM(cpy_r_res, 0);
        CPy_INCREF(__tmp6186);
        PyObject *__tmp6187;
        if (likely(PyUnicode_Check(__tmp6186)))
            __tmp6187 = __tmp6186;
        else {
            CPy_TypeError("str", __tmp6186); 
            __tmp6187 = NULL;
        }
        cpy_r_r48.f0 = __tmp6187;
        PyObject *__tmp6188 = PyTuple_GET_ITEM(cpy_r_res, 1);
        CPy_INCREF(__tmp6188);
        PyObject *__tmp6189;
        if (likely(PyList_Check(__tmp6188)))
            __tmp6189 = __tmp6188;
        else {
            CPy_TypeError("list", __tmp6188); 
            __tmp6189 = NULL;
        }
        cpy_r_r48.f1 = __tmp6189;
        PyObject *__tmp6190 = PyTuple_GET_ITEM(cpy_r_res, 2);
        CPy_INCREF(__tmp6190);
        PyObject *__tmp6191;
        if (likely(PyList_Check(__tmp6190)))
            __tmp6191 = __tmp6190;
        else {
            CPy_TypeError("list", __tmp6190); 
            __tmp6191 = NULL;
        }
        cpy_r_r48.f2 = __tmp6191;
        PyObject *__tmp6192 = PyTuple_GET_ITEM(cpy_r_res, 3);
        char __tmp6193;
        if (unlikely(!PyBool_Check(__tmp6192))) {
            CPy_TypeError("bool", __tmp6192); __tmp6193 = 2;
        } else
            __tmp6193 = __tmp6192 == Py_True;
        cpy_r_r48.f3 = __tmp6193;
        PyObject *__tmp6194 = PyTuple_GET_ITEM(cpy_r_res, 4);
        CPy_INCREF(__tmp6194);
        PyObject *__tmp6195;
        if (likely(PyList_Check(__tmp6194)))
            __tmp6195 = __tmp6194;
        else {
            CPy_TypeError("list", __tmp6194); 
            __tmp6195 = NULL;
        }
        cpy_r_r48.f4 = __tmp6195;
        PyObject *__tmp6196 = PyTuple_GET_ITEM(cpy_r_res, 5);
        char __tmp6197;
        if (unlikely(!PyBool_Check(__tmp6196))) {
            CPy_TypeError("bool", __tmp6196); __tmp6197 = 2;
        } else
            __tmp6197 = __tmp6196 == Py_True;
        cpy_r_r48.f5 = __tmp6197;
    }
    CPy_DECREF(cpy_r_res);
    if (unlikely(cpy_r_r48.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 365, CPyStatic_semanal_typeddict___globals);
        goto CPyL112;
    }
    cpy_r_r49 = cpy_r_r48.f0;
    CPy_INCREF(cpy_r_r49);
    cpy_r_name = cpy_r_r49;
    cpy_r_r50 = cpy_r_r48.f1;
    CPy_INCREF(cpy_r_r50);
    cpy_r_items = cpy_r_r50;
    cpy_r_r51 = cpy_r_r48.f2;
    CPy_INCREF(cpy_r_r51);
    cpy_r_types = cpy_r_r51;
    cpy_r_r52 = cpy_r_r48.f3;
    cpy_r_total = cpy_r_r52;
    cpy_r_r53 = cpy_r_r48.f4;
    CPy_INCREF(cpy_r_r53);
    cpy_r_tvar_defs = cpy_r_r53;
    cpy_r_r54 = cpy_r_r48.f5;
    CPy_DECREF(cpy_r_r48.f0);
    CPy_DECREF(cpy_r_r48.f1);
    CPy_DECREF(cpy_r_r48.f2);
    CPy_DECREF(cpy_r_r48.f4);
    cpy_r_ok = cpy_r_r54;
    if (cpy_r_ok) {
        goto CPyL33;
    } else
        goto CPyL116;
CPyL28: ;
    cpy_r_r55 = CPyStatics[514]; /* 'TypedDict' */
    cpy_r_r56 = PyList_New(0);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 368, CPyStatic_semanal_typeddict___globals);
        goto CPyL117;
    }
    cpy_r_r57 = PyList_New(0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 368, CPyStatic_semanal_typeddict___globals);
        goto CPyL118;
    }
    cpy_r_r58 = PySet_New(NULL);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 368, CPyStatic_semanal_typeddict___globals);
        goto CPyL119;
    }
    cpy_r_r59 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_line;
    CPyTagged_INCREF(cpy_r_r59);
    cpy_r_r60 = Py_None;
    cpy_r_r61 = CPyDef_semanal_typeddict___TypedDictAnalyzer___build_typeddict_typeinfo(cpy_r_self, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r58);
    CPyTagged_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 368, CPyStatic_semanal_typeddict___globals);
        goto CPyL117;
    }
    cpy_r_info = cpy_r_r61;
    goto CPyL100;
CPyL33: ;
    cpy_r_r62 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r63 = cpy_r_var_name != cpy_r_r62;
    if (!cpy_r_r63) goto CPyL46;
    CPy_INCREF(cpy_r_var_name);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r64 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 370, CPyStatic_semanal_typeddict___globals, "str", cpy_r_var_name);
        goto CPyL120;
    }
    cpy_r_r65 = PyUnicode_Compare(cpy_r_name, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 == -1;
    if (!cpy_r_r66) goto CPyL38;
    cpy_r_r67 = PyErr_Occurred();
    cpy_r_r68 = cpy_r_r67 != NULL;
    if (!cpy_r_r68) goto CPyL38;
    cpy_r_r69 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 370, CPyStatic_semanal_typeddict___globals);
        goto CPyL120;
    }
CPyL38: ;
    cpy_r_r70 = cpy_r_r65 != 0;
    if (!cpy_r_r70) goto CPyL46;
    CPy_INCREF(cpy_r_var_name);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r71 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 373, CPyStatic_semanal_typeddict___globals, "str", cpy_r_var_name);
        goto CPyL120;
    }
    cpy_r_r72 = CPyStatics[5273]; /* 'First argument "' */
    cpy_r_r73 = CPyStatics[5274]; /* '" to TypedDict() does not match variable name "' */
    cpy_r_r74 = CPyStatics[178]; /* '"' */
    cpy_r_r75 = CPyStr_Build(5, cpy_r_r72, cpy_r_name, cpy_r_r73, cpy_r_r71, cpy_r_r74);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 372, CPyStatic_semanal_typeddict___globals);
        goto CPyL120;
    }
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r76 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 375, CPyStatic_semanal_typeddict___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL121;
    }
    cpy_r_r77 = CPyStatic_errorcodes___NAME_MATCH;
    if (unlikely(cpy_r_r77 == NULL)) {
        goto CPyL122;
    } else
        goto CPyL45;
CPyL43: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"NAME_MATCH\" was not set");
    cpy_r_r78 = 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 376, CPyStatic_semanal_typeddict___globals);
        goto CPyL110;
    }
    CPy_Unreachable();
CPyL45: ;
    cpy_r_r79 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_r75, cpy_r_r76, cpy_r_r77);
    CPy_DECREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r79 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 371, CPyStatic_semanal_typeddict___globals);
        goto CPyL120;
    }
CPyL46: ;
    cpy_r_r80 = PyObject_RichCompare(cpy_r_name, cpy_r_var_name, 3);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 378, CPyStatic_semanal_typeddict___globals);
        goto CPyL120;
    }
    if (unlikely(!PyBool_Check(cpy_r_r80))) {
        CPy_TypeError("bool", cpy_r_r80); cpy_r_r81 = 2;
    } else
        cpy_r_r81 = cpy_r_r80 == Py_True;
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 378, CPyStatic_semanal_typeddict___globals);
        goto CPyL120;
    }
    if (cpy_r_r81) goto CPyL50;
    if (!cpy_r_is_func_scope) goto CPyL54;
CPyL50: ;
    cpy_r_r82 = CPyStatics[1784]; /* '@' */
    cpy_r_r83 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_line;
    CPyTagged_INCREF(cpy_r_r83);
    cpy_r_r84 = CPyTagged_Str(cpy_r_r83);
    CPyTagged_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 380, CPyStatic_semanal_typeddict___globals);
        goto CPyL120;
    }
    cpy_r_r85 = PyUnicode_Concat(cpy_r_r82, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 380, CPyStatic_semanal_typeddict___globals);
        goto CPyL120;
    }
    cpy_r_r86 = CPyStr_Append(cpy_r_name, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 380, CPyStatic_semanal_typeddict___globals);
        goto CPyL123;
    }
    cpy_r_name = cpy_r_r86;
CPyL54: ;
    cpy_r_r87 = PySet_New(NULL);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 381, CPyStatic_semanal_typeddict___globals);
        goto CPyL120;
    }
    cpy_r_r88 = 0;
    cpy_r_r89 = 0;
CPyL56: ;
    cpy_r_r90 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r91 = *(int64_t *)cpy_r_r90;
    cpy_r_r92 = cpy_r_r91 << 1;
    cpy_r_r93 = (Py_ssize_t)cpy_r_r88 < (Py_ssize_t)cpy_r_r92;
    if (!cpy_r_r93) goto CPyL77;
    cpy_r_r94 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r95 = *(int64_t *)cpy_r_r94;
    cpy_r_r96 = cpy_r_r95 << 1;
    cpy_r_r97 = (Py_ssize_t)cpy_r_r89 < (Py_ssize_t)cpy_r_r96;
    if (!cpy_r_r97) goto CPyL77;
    cpy_r_r98 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r88);
    if (likely(PyUnicode_Check(cpy_r_r98)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 381, CPyStatic_semanal_typeddict___globals, "str", cpy_r_r98);
        goto CPyL124;
    }
    cpy_r_field = cpy_r_r99;
    cpy_r_r100 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r89);
    if (likely(PyObject_TypeCheck(cpy_r_r100, CPyType_types___Type)))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 381, CPyStatic_semanal_typeddict___globals, "mypy.types.Type", cpy_r_r100);
        goto CPyL125;
    }
    cpy_r_t = cpy_r_r101;
    if (!cpy_r_total) goto CPyL62;
    cpy_r_r102 = cpy_r_total;
    goto CPyL67;
CPyL62: ;
    cpy_r_r103 = (PyObject *)CPyType_types___RequiredType;
    cpy_r_r104 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r105 = *(PyObject * *)cpy_r_r104;
    cpy_r_r106 = cpy_r_r105 == cpy_r_r103;
    if (cpy_r_r106) goto CPyL64;
    cpy_r_r107 = cpy_r_r106;
    goto CPyL66;
CPyL64: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___RequiredType))
        cpy_r_r108 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 384, CPyStatic_semanal_typeddict___globals, "mypy.types.RequiredType", cpy_r_t);
        goto CPyL126;
    }
    cpy_r_r109 = ((mypy___types___RequiredTypeObject *)cpy_r_r108)->_required;
    cpy_r_r107 = cpy_r_r109;
CPyL66: ;
    cpy_r_r102 = cpy_r_r107;
CPyL67: ;
    if (cpy_r_r102) {
        goto CPyL69;
    } else
        goto CPyL127;
CPyL68: ;
    cpy_r_r110 = cpy_r_r102;
    goto CPyL74;
CPyL69: ;
    cpy_r_r111 = (PyObject *)CPyType_types___RequiredType;
    cpy_r_r112 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r113 = *(PyObject * *)cpy_r_r112;
    cpy_r_r114 = cpy_r_r113 == cpy_r_r111;
    if (cpy_r_r114) {
        goto CPyL71;
    } else
        goto CPyL128;
CPyL70: ;
    cpy_r_r115 = cpy_r_r114;
    goto CPyL73;
CPyL71: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___RequiredType))
        cpy_r_r116 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 385, CPyStatic_semanal_typeddict___globals, "mypy.types.RequiredType", cpy_r_t);
        goto CPyL126;
    }
    cpy_r_r117 = ((mypy___types___RequiredTypeObject *)cpy_r_r116)->_required;
    CPy_DECREF(cpy_r_t);
    cpy_r_r118 = cpy_r_r117 ^ 1;
    cpy_r_r115 = cpy_r_r118;
CPyL73: ;
    cpy_r_r119 = cpy_r_r115 ^ 1;
    cpy_r_r110 = cpy_r_r119;
CPyL74: ;
    if (!cpy_r_r110) goto CPyL129;
    cpy_r_r120 = PySet_Add(cpy_r_r87, cpy_r_field);
    CPy_DECREF(cpy_r_field);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 381, CPyStatic_semanal_typeddict___globals);
        goto CPyL124;
    }
CPyL76: ;
    cpy_r_r122 = cpy_r_r88 + 2;
    cpy_r_r88 = cpy_r_r122;
    cpy_r_r123 = cpy_r_r89 + 2;
    cpy_r_r89 = cpy_r_r123;
    goto CPyL56;
CPyL77: ;
    cpy_r_required_keys = cpy_r_r87;
    cpy_r_r124 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r125 = *(int64_t *)cpy_r_r124;
    cpy_r_r126 = PyList_New(cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 387, CPyStatic_semanal_typeddict___globals);
        goto CPyL130;
    }
    cpy_r_r127 = 0;
CPyL79: ;
    cpy_r_r128 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r129 = *(int64_t *)cpy_r_r128;
    cpy_r_r130 = cpy_r_r129 << 1;
    cpy_r_r131 = (Py_ssize_t)cpy_r_r127 < (Py_ssize_t)cpy_r_r130;
    if (!cpy_r_r131) goto CPyL131;
    cpy_r_r132 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r127);
    if (likely(PyObject_TypeCheck(cpy_r_r132, CPyType_types___Type)))
        cpy_r_r133 = cpy_r_r132;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 387, CPyStatic_semanal_typeddict___globals, "mypy.types.Type", cpy_r_r132);
        goto CPyL132;
    }
    cpy_r_t_2 = cpy_r_r133;
    cpy_r_r134 = (PyObject *)CPyType_types___RequiredType;
    cpy_r_r135 = (CPyPtr)&((PyObject *)cpy_r_t_2)->ob_type;
    cpy_r_r136 = *(PyObject * *)cpy_r_r135;
    cpy_r_r137 = cpy_r_r136 == cpy_r_r134;
    if (!cpy_r_r137) goto CPyL84;
    if (likely(Py_TYPE(cpy_r_t_2) == CPyType_types___RequiredType))
        cpy_r_r138 = cpy_r_t_2;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 388, CPyStatic_semanal_typeddict___globals, "mypy.types.RequiredType", cpy_r_t_2);
        goto CPyL133;
    }
    cpy_r_r139 = ((mypy___types___RequiredTypeObject *)cpy_r_r138)->_item;
    CPy_INCREF(cpy_r_r139);
    CPy_DECREF(cpy_r_t_2);
    cpy_r_r140 = cpy_r_r139;
    goto CPyL85;
CPyL84: ;
    cpy_r_r140 = cpy_r_t_2;
CPyL85: ;
    cpy_r_r141 = CPyList_SetItemUnsafe(cpy_r_r126, cpy_r_r127, cpy_r_r140);
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 387, CPyStatic_semanal_typeddict___globals);
        goto CPyL132;
    }
    cpy_r_r142 = cpy_r_r127 + 2;
    cpy_r_r127 = cpy_r_r142;
    goto CPyL79;
CPyL87: ;
    cpy_r_types = cpy_r_r126;
    cpy_r_r143 = Py_None;
    CPy_INCREF(cpy_r_r143);
    cpy_r_existing_info = cpy_r_r143;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r144 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 391, CPyStatic_semanal_typeddict___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL134;
    }
    cpy_r_r145 = ((mypy___nodes___CallExprObject *)cpy_r_r144)->_analyzed;
    cpy_r_r146 = (PyObject *)CPyType_nodes___TypedDictExpr;
    cpy_r_r147 = (CPyPtr)&((PyObject *)cpy_r_r145)->ob_type;
    cpy_r_r148 = *(PyObject * *)cpy_r_r147;
    cpy_r_r149 = cpy_r_r148 == cpy_r_r146;
    if (cpy_r_r149) {
        goto CPyL135;
    } else
        goto CPyL92;
CPyL89: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r150 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 392, CPyStatic_semanal_typeddict___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL130;
    }
    cpy_r_r151 = ((mypy___nodes___CallExprObject *)cpy_r_r150)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r151) == CPyType_nodes___TypedDictExpr))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 392, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypedDictExpr", cpy_r_r151);
        goto CPyL130;
    }
    cpy_r_r153 = ((mypy___nodes___TypedDictExprObject *)cpy_r_r152)->_info;
    CPy_INCREF(cpy_r_r153);
    cpy_r_existing_info = cpy_r_r153;
CPyL92: ;
    cpy_r_r154 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_line;
    CPyTagged_INCREF(cpy_r_r154);
    cpy_r_r155 = CPyDef_semanal_typeddict___TypedDictAnalyzer___build_typeddict_typeinfo(cpy_r_self, cpy_r_name, cpy_r_items, cpy_r_types, cpy_r_required_keys, cpy_r_r154, cpy_r_existing_info);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_required_keys);
    CPyTagged_DECREF(cpy_r_r154);
    CPy_DECREF(cpy_r_existing_info);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 393, CPyStatic_semanal_typeddict___globals);
        goto CPyL136;
    }
    cpy_r_info = cpy_r_r155;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r156 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 396, CPyStatic_semanal_typeddict___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL137;
    }
    cpy_r_r157 = ((mypy___nodes___CallExprObject *)cpy_r_r156)->_line;
    CPyTagged_INCREF(cpy_r_r157);
    if (((mypy___nodes___TypeInfoObject *)cpy_r_info)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_info)->_line);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_line = cpy_r_r157;
    cpy_r_r158 = 1;
    if (unlikely(!cpy_r_r158)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 396, CPyStatic_semanal_typeddict___globals);
        goto CPyL137;
    }
    cpy_r_r159 = PyObject_RichCompare(cpy_r_name, cpy_r_var_name, 3);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 398, CPyStatic_semanal_typeddict___globals);
        goto CPyL137;
    }
    if (unlikely(!PyBool_Check(cpy_r_r159))) {
        CPy_TypeError("bool", cpy_r_r159); cpy_r_r160 = 2;
    } else
        cpy_r_r160 = cpy_r_r159 == Py_True;
    CPy_DECREF(cpy_r_r159);
    if (unlikely(cpy_r_r160 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 398, CPyStatic_semanal_typeddict___globals);
        goto CPyL137;
    }
    if (cpy_r_r160) goto CPyL99;
    if (!cpy_r_is_func_scope) goto CPyL138;
CPyL99: ;
    cpy_r_r161 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r161);
    cpy_r_r162 = CPY_GET_METHOD_TRAIT(cpy_r_r161, CPyType_semanal_shared___SemanticAnalyzerInterface, 11, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r161, cpy_r_name, cpy_r_info); /* add_symbol_skip_local */
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r162 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 399, CPyStatic_semanal_typeddict___globals);
        goto CPyL139;
    }
CPyL100: ;
    cpy_r_r163 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r164 = cpy_r_var_name != cpy_r_r163;
    if (!cpy_r_r164) goto CPyL106;
    CPy_INCREF(cpy_r_var_name);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r165 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 338, CPyStatic_semanal_typeddict___globals, "str", cpy_r_var_name);
        goto CPyL139;
    }
    cpy_r_r166 = CPyStr_IsTrue(cpy_r_r165);
    CPy_DECREF(cpy_r_r165);
    if (!cpy_r_r166) goto CPyL106;
    cpy_r_r167 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r167);
    CPy_INCREF(cpy_r_var_name);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r168 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 401, CPyStatic_semanal_typeddict___globals, "str", cpy_r_var_name);
        goto CPyL140;
    }
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r169 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 401, CPyStatic_semanal_typeddict___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL141;
    }
    cpy_r_r170 = 2;
    cpy_r_r171 = 2;
    cpy_r_r172 = 2;
    cpy_r_r173 = CPY_GET_METHOD_TRAIT(cpy_r_r167, CPyType_semanal_shared___SemanticAnalyzerInterface, 10, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *, char, char, char))(cpy_r_r167, cpy_r_r168, cpy_r_info, cpy_r_r169, cpy_r_r170, cpy_r_r171, cpy_r_r172); /* add_symbol */
    CPy_DECREF(cpy_r_r168);
    CPy_DECREF(cpy_r_r169);
    CPy_DECREF(cpy_r_r167);
    if (unlikely(cpy_r_r173 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 401, CPyStatic_semanal_typeddict___globals);
        goto CPyL139;
    }
CPyL106: ;
    cpy_r_r174 = CPyDef_nodes___TypedDictExpr(cpy_r_info);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 402, CPyStatic_semanal_typeddict___globals);
        goto CPyL139;
    }
    CPy_DECREF(((mypy___nodes___CallExprObject *)cpy_r_call)->_analyzed);
    ((mypy___nodes___CallExprObject *)cpy_r_call)->_analyzed = cpy_r_r174;
    cpy_r_r176 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_analyzed;
    CPy_INCREF(cpy_r_r176);
    if (likely(Py_TYPE(cpy_r_r176) == CPyType_nodes___TypedDictExpr))
        cpy_r_r177 = cpy_r_r176;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "check_typeddict", 403, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypedDictExpr", cpy_r_r176);
        goto CPyL139;
    }
    cpy_r_r178 = NULL;
    cpy_r_r179 = NULL;
    cpy_r_r180 = NULL;
    cpy_r_r181 = CPyDef_nodes___Context___set_line(cpy_r_r177, cpy_r_call, cpy_r_r178, cpy_r_r179, cpy_r_r180);
    CPy_DECREF(cpy_r_call);
    CPy_DECREF(cpy_r_r177);
    if (unlikely(cpy_r_r181 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 403, CPyStatic_semanal_typeddict___globals);
        goto CPyL142;
    }
    cpy_r_r182.f0 = 1;
    cpy_r_r182.f1 = cpy_r_info;
    cpy_r_r182.f2 = cpy_r_tvar_defs;
    CPy_INCREF(cpy_r_r182.f1);
    CPy_INCREF(cpy_r_r182.f2);
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_tvar_defs);
    return cpy_r_r182;
CPyL110: ;
    tuple_T3COO __tmp6198 = { 2, NULL, NULL };
    cpy_r_r183 = __tmp6198;
    return cpy_r_r183;
CPyL111: ;
    CPy_DECREF(cpy_r_call);
    CPy_DECREF(cpy_r_callee);
    goto CPyL11;
CPyL112: ;
    CPy_DecRef(cpy_r_call);
    goto CPyL110;
CPyL113: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_fullname);
    goto CPyL16;
CPyL114: ;
    CPy_DECREF(cpy_r_call);
    goto CPyL20;
CPyL115: ;
    CPy_DECREF(cpy_r_call);
    CPy_DECREF(cpy_r_res);
    goto CPyL24;
CPyL116: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    goto CPyL28;
CPyL117: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_tvar_defs);
    goto CPyL110;
CPyL118: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_r56);
    goto CPyL110;
CPyL119: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r57);
    goto CPyL110;
CPyL120: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    goto CPyL110;
CPyL121: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_r75);
    goto CPyL110;
CPyL122: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r76);
    goto CPyL43;
CPyL123: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    goto CPyL110;
CPyL124: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_r87);
    goto CPyL110;
CPyL125: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_field);
    goto CPyL110;
CPyL126: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_field);
    CPy_DecRef(cpy_r_t);
    goto CPyL110;
CPyL127: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL68;
CPyL128: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL70;
CPyL129: ;
    CPy_DECREF(cpy_r_field);
    goto CPyL76;
CPyL130: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_required_keys);
    goto CPyL110;
CPyL131: ;
    CPy_DECREF(cpy_r_types);
    goto CPyL87;
CPyL132: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_required_keys);
    CPy_DecRef(cpy_r_r126);
    goto CPyL110;
CPyL133: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_required_keys);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_t_2);
    goto CPyL110;
CPyL134: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_required_keys);
    CPy_DecRef(cpy_r_existing_info);
    goto CPyL110;
CPyL135: ;
    CPy_DECREF(cpy_r_existing_info);
    goto CPyL89;
CPyL136: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_tvar_defs);
    goto CPyL110;
CPyL137: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_info);
    goto CPyL110;
CPyL138: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL100;
CPyL139: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_info);
    goto CPyL110;
CPyL140: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r167);
    goto CPyL110;
CPyL141: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r167);
    CPy_DecRef(cpy_r_r168);
    goto CPyL110;
CPyL142: ;
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_info);
    goto CPyL110;
}

PyObject *CPyPy_semanal_typeddict___TypedDictAnalyzer___check_typeddict(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", "var_name", "is_func_scope", 0};
    static CPyArg_Parser parser = {"OOO:check_typeddict", kwlist, 0};
    PyObject *obj_node;
    PyObject *obj_var_name;
    PyObject *obj_is_func_scope;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_node, &obj_var_name, &obj_is_func_scope)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeddict___TypedDictAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeddict.TypedDictAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___Expression)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_node); 
        goto fail;
    }
    PyObject *arg_var_name;
    if (PyUnicode_Check(obj_var_name))
        arg_var_name = obj_var_name;
    else {
        arg_var_name = NULL;
    }
    if (arg_var_name != NULL) goto __LL6199;
    if (obj_var_name == Py_None)
        arg_var_name = obj_var_name;
    else {
        arg_var_name = NULL;
    }
    if (arg_var_name != NULL) goto __LL6199;
    CPy_TypeError("str or None", obj_var_name); 
    goto fail;
__LL6199: ;
    char arg_is_func_scope;
    if (unlikely(!PyBool_Check(obj_is_func_scope))) {
        CPy_TypeError("bool", obj_is_func_scope); goto fail;
    } else
        arg_is_func_scope = obj_is_func_scope == Py_True;
    tuple_T3COO retval = CPyDef_semanal_typeddict___TypedDictAnalyzer___check_typeddict(arg_self, arg_node, arg_var_name, arg_is_func_scope);
    if (retval.f0 == 2) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6200 = retval.f0 ? Py_True : Py_False;
    CPy_INCREF(__tmp6200);
    PyTuple_SET_ITEM(retbox, 0, __tmp6200);
    PyObject *__tmp6201 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp6201);
    PyObject *__tmp6202 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp6202);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeddict.py", "check_typeddict", 337, CPyStatic_semanal_typeddict___globals);
    return NULL;
}

PyObject *CPyDef_semanal_typeddict___TypedDictAnalyzer___parse_typeddict_args(PyObject *cpy_r_self, PyObject *cpy_r_call) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_args;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T6OOOCOC cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    tuple_T6OOOCOC cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    CPyPtr cpy_r_r36;
    CPyPtr cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    tuple_T6OOOCOC cpy_r_r42;
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
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    tuple_T6OOOCOC cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyPtr cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    tuple_T6OOOCOC cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyPtr cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    tuple_T6OOOCOC cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_total;
    CPyPtr cpy_r_r80;
    int64_t cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    tuple_T6OOOCOC cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_dictexpr;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    CPyPtr cpy_r_r103;
    int64_t cpy_r_r104;
    PyObject *cpy_r_r105;
    CPyTagged cpy_r_r106;
    CPyPtr cpy_r_r107;
    int64_t cpy_r_r108;
    CPyTagged cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    tuple_T2OO cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_k;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_t;
    char cpy_r_r115;
    CPyTagged cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_tvar_defs;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    tuple_T3OOC cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_types;
    char cpy_r_r126;
    char cpy_r_ok;
    CPyTagged cpy_r_r127;
    CPyPtr cpy_r_r128;
    int64_t cpy_r_r129;
    CPyTagged cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_t_2;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    CPyTagged cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    CPyTagged cpy_r_r142;
    CPyPtr cpy_r_r143;
    int64_t cpy_r_r144;
    CPyTagged cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
    CPyTagged cpy_r_r153;
    PyObject *cpy_r_r154;
    char cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    char cpy_r_r160;
    tuple_T6OOOCOC cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_args = cpy_r_r0;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)4;
    if (cpy_r_r4) {
        goto CPyL97;
    } else
        goto CPyL3;
CPyL1: ;
    cpy_r_r5 = CPyStatics[5275]; /* 'Too few arguments for TypedDict()' */
    cpy_r_r6 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail_typeddict_arg(cpy_r_self, cpy_r_r5, cpy_r_call);
    if (unlikely(cpy_r_r6.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 417, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    cpy_r_r7 = PyTuple_New(6);
    if (unlikely(cpy_r_r7 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6203 = cpy_r_r6.f0;
    PyTuple_SET_ITEM(cpy_r_r7, 0, __tmp6203);
    PyObject *__tmp6204 = cpy_r_r6.f1;
    PyTuple_SET_ITEM(cpy_r_r7, 1, __tmp6204);
    PyObject *__tmp6205 = cpy_r_r6.f2;
    PyTuple_SET_ITEM(cpy_r_r7, 2, __tmp6205);
    PyObject *__tmp6206 = cpy_r_r6.f3 ? Py_True : Py_False;
    CPy_INCREF(__tmp6206);
    PyTuple_SET_ITEM(cpy_r_r7, 3, __tmp6206);
    PyObject *__tmp6207 = cpy_r_r6.f4;
    PyTuple_SET_ITEM(cpy_r_r7, 4, __tmp6207);
    PyObject *__tmp6208 = cpy_r_r6.f5 ? Py_True : Py_False;
    CPy_INCREF(__tmp6208);
    PyTuple_SET_ITEM(cpy_r_r7, 5, __tmp6208);
    return cpy_r_r7;
CPyL3: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r10 > (Py_ssize_t)6;
    if (cpy_r_r11) {
        goto CPyL98;
    } else
        goto CPyL6;
CPyL4: ;
    cpy_r_r12 = CPyStatics[5276]; /* 'Too many arguments for TypedDict()' */
    cpy_r_r13 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail_typeddict_arg(cpy_r_self, cpy_r_r12, cpy_r_call);
    if (unlikely(cpy_r_r13.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 419, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    cpy_r_r14 = PyTuple_New(6);
    if (unlikely(cpy_r_r14 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6209 = cpy_r_r13.f0;
    PyTuple_SET_ITEM(cpy_r_r14, 0, __tmp6209);
    PyObject *__tmp6210 = cpy_r_r13.f1;
    PyTuple_SET_ITEM(cpy_r_r14, 1, __tmp6210);
    PyObject *__tmp6211 = cpy_r_r13.f2;
    PyTuple_SET_ITEM(cpy_r_r14, 2, __tmp6211);
    PyObject *__tmp6212 = cpy_r_r13.f3 ? Py_True : Py_False;
    CPy_INCREF(__tmp6212);
    PyTuple_SET_ITEM(cpy_r_r14, 3, __tmp6212);
    PyObject *__tmp6213 = cpy_r_r13.f4;
    PyTuple_SET_ITEM(cpy_r_r14, 4, __tmp6213);
    PyObject *__tmp6214 = cpy_r_r13.f5 ? Py_True : Py_False;
    CPy_INCREF(__tmp6214);
    PyTuple_SET_ITEM(cpy_r_r14, 5, __tmp6214);
    return cpy_r_r14;
CPyL6: ;
    cpy_r_r15 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_kinds;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r16 == NULL)) {
        goto CPyL99;
    } else
        goto CPyL9;
CPyL7: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 421, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r18 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r18 == NULL)) {
        goto CPyL100;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r19 = 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 421, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r20 = PyList_New(2);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 421, CPyStatic_semanal_typeddict___globals);
        goto CPyL101;
    }
    cpy_r_r21 = (CPyPtr)&((PyListObject *)cpy_r_r20)->ob_item;
    cpy_r_r22 = *(CPyPtr *)cpy_r_r21;
    CPy_INCREF(cpy_r_r16);
    *(PyObject * *)cpy_r_r22 = cpy_r_r16;
    cpy_r_r23 = cpy_r_r22 + 8;
    CPy_INCREF(cpy_r_r18);
    *(PyObject * *)cpy_r_r23 = cpy_r_r18;
    cpy_r_r24 = PyObject_RichCompare(cpy_r_r15, cpy_r_r20, 3);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", -1, CPyStatic_semanal_typeddict___globals);
        goto CPyL102;
    }
    if (unlikely(!PyBool_Check(cpy_r_r24))) {
        CPy_TypeError("bool", cpy_r_r24); cpy_r_r25 = 2;
    } else
        cpy_r_r25 = cpy_r_r24 == Py_True;
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", -1, CPyStatic_semanal_typeddict___globals);
        goto CPyL102;
    }
    if (cpy_r_r25) goto CPyL17;
    cpy_r_r26 = cpy_r_r25;
    goto CPyL30;
CPyL17: ;
    cpy_r_r27 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_kinds;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r28 == NULL)) {
        goto CPyL103;
    } else
        goto CPyL20;
CPyL18: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 421, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r30 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r30 == NULL)) {
        goto CPyL104;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 421, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r32 = CPyStatic_nodes___ARG_NAMED;
    if (unlikely(cpy_r_r32 == NULL)) {
        goto CPyL105;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 421, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r34 = PyList_New(3);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 421, CPyStatic_semanal_typeddict___globals);
        goto CPyL106;
    }
    cpy_r_r35 = (CPyPtr)&((PyListObject *)cpy_r_r34)->ob_item;
    cpy_r_r36 = *(CPyPtr *)cpy_r_r35;
    CPy_INCREF(cpy_r_r28);
    *(PyObject * *)cpy_r_r36 = cpy_r_r28;
    cpy_r_r37 = cpy_r_r36 + 8;
    CPy_INCREF(cpy_r_r30);
    *(PyObject * *)cpy_r_r37 = cpy_r_r30;
    cpy_r_r38 = cpy_r_r36 + 16;
    CPy_INCREF(cpy_r_r32);
    *(PyObject * *)cpy_r_r38 = cpy_r_r32;
    cpy_r_r39 = PyObject_RichCompare(cpy_r_r27, cpy_r_r34, 3);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", -1, CPyStatic_semanal_typeddict___globals);
        goto CPyL102;
    }
    if (unlikely(!PyBool_Check(cpy_r_r39))) {
        CPy_TypeError("bool", cpy_r_r39); cpy_r_r40 = 2;
    } else
        cpy_r_r40 = cpy_r_r39 == Py_True;
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", -1, CPyStatic_semanal_typeddict___globals);
        goto CPyL102;
    }
    cpy_r_r26 = cpy_r_r40;
CPyL30: ;
    if (cpy_r_r26) {
        goto CPyL107;
    } else
        goto CPyL33;
CPyL31: ;
    cpy_r_r41 = CPyStatics[5277]; /* 'Unexpected arguments to TypedDict()' */
    cpy_r_r42 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail_typeddict_arg(cpy_r_self, cpy_r_r41, cpy_r_call);
    if (unlikely(cpy_r_r42.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 422, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    cpy_r_r43 = PyTuple_New(6);
    if (unlikely(cpy_r_r43 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6215 = cpy_r_r42.f0;
    PyTuple_SET_ITEM(cpy_r_r43, 0, __tmp6215);
    PyObject *__tmp6216 = cpy_r_r42.f1;
    PyTuple_SET_ITEM(cpy_r_r43, 1, __tmp6216);
    PyObject *__tmp6217 = cpy_r_r42.f2;
    PyTuple_SET_ITEM(cpy_r_r43, 2, __tmp6217);
    PyObject *__tmp6218 = cpy_r_r42.f3 ? Py_True : Py_False;
    CPy_INCREF(__tmp6218);
    PyTuple_SET_ITEM(cpy_r_r43, 3, __tmp6218);
    PyObject *__tmp6219 = cpy_r_r42.f4;
    PyTuple_SET_ITEM(cpy_r_r43, 4, __tmp6219);
    PyObject *__tmp6220 = cpy_r_r42.f5 ? Py_True : Py_False;
    CPy_INCREF(__tmp6220);
    PyTuple_SET_ITEM(cpy_r_r43, 5, __tmp6220);
    return cpy_r_r43;
CPyL33: ;
    cpy_r_r44 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r45 = *(int64_t *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 << 1;
    cpy_r_r47 = cpy_r_r46 == 6;
    if (!cpy_r_r47) goto CPyL45;
    cpy_r_r48 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_names;
    cpy_r_r49 = CPyList_GetItemShort(cpy_r_r48, 4);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 423, CPyStatic_semanal_typeddict___globals);
        goto CPyL102;
    }
    if (PyUnicode_Check(cpy_r_r49))
        cpy_r_r50 = cpy_r_r49;
    else {
        cpy_r_r50 = NULL;
    }
    if (cpy_r_r50 != NULL) goto __LL6221;
    if (cpy_r_r49 == Py_None)
        cpy_r_r50 = cpy_r_r49;
    else {
        cpy_r_r50 = NULL;
    }
    if (cpy_r_r50 != NULL) goto __LL6221;
    CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 423, CPyStatic_semanal_typeddict___globals, "str or None", cpy_r_r49);
    goto CPyL102;
__LL6221: ;
    cpy_r_r51 = CPyStatics[4723]; /* 'total' */
    cpy_r_r52 = PyObject_RichCompare(cpy_r_r50, cpy_r_r51, 3);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 423, CPyStatic_semanal_typeddict___globals);
        goto CPyL102;
    }
    if (unlikely(!PyBool_Check(cpy_r_r52))) {
        CPy_TypeError("bool", cpy_r_r52); cpy_r_r53 = 2;
    } else
        cpy_r_r53 = cpy_r_r52 == Py_True;
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 423, CPyStatic_semanal_typeddict___globals);
        goto CPyL102;
    }
    if (cpy_r_r53) {
        goto CPyL108;
    } else
        goto CPyL45;
CPyL39: ;
    cpy_r_r54 = CPyStatics[3433]; /* 'Unexpected keyword argument "' */
    cpy_r_r55 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_names;
    cpy_r_r56 = CPyList_GetItemShort(cpy_r_r55, 4);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 425, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    if (PyUnicode_Check(cpy_r_r56))
        cpy_r_r57 = cpy_r_r56;
    else {
        cpy_r_r57 = NULL;
    }
    if (cpy_r_r57 != NULL) goto __LL6222;
    if (cpy_r_r56 == Py_None)
        cpy_r_r57 = cpy_r_r56;
    else {
        cpy_r_r57 = NULL;
    }
    if (cpy_r_r57 != NULL) goto __LL6222;
    CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 425, CPyStatic_semanal_typeddict___globals, "str or None", cpy_r_r56);
    goto CPyL96;
__LL6222: ;
    cpy_r_r58 = PyObject_Str(cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 425, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    cpy_r_r59 = CPyStatics[5278]; /* '" for "TypedDict"' */
    cpy_r_r60 = CPyStr_Build(3, cpy_r_r54, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 425, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    cpy_r_r61 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail_typeddict_arg(cpy_r_self, cpy_r_r60, cpy_r_call);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 424, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    cpy_r_r62 = PyTuple_New(6);
    if (unlikely(cpy_r_r62 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6223 = cpy_r_r61.f0;
    PyTuple_SET_ITEM(cpy_r_r62, 0, __tmp6223);
    PyObject *__tmp6224 = cpy_r_r61.f1;
    PyTuple_SET_ITEM(cpy_r_r62, 1, __tmp6224);
    PyObject *__tmp6225 = cpy_r_r61.f2;
    PyTuple_SET_ITEM(cpy_r_r62, 2, __tmp6225);
    PyObject *__tmp6226 = cpy_r_r61.f3 ? Py_True : Py_False;
    CPy_INCREF(__tmp6226);
    PyTuple_SET_ITEM(cpy_r_r62, 3, __tmp6226);
    PyObject *__tmp6227 = cpy_r_r61.f4;
    PyTuple_SET_ITEM(cpy_r_r62, 4, __tmp6227);
    PyObject *__tmp6228 = cpy_r_r61.f5 ? Py_True : Py_False;
    CPy_INCREF(__tmp6228);
    PyTuple_SET_ITEM(cpy_r_r62, 5, __tmp6228);
    return cpy_r_r62;
CPyL45: ;
    cpy_r_r63 = CPyList_GetItemShortBorrow(cpy_r_args, 0);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 427, CPyStatic_semanal_typeddict___globals);
        goto CPyL102;
    }
    cpy_r_r64 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r65 = (CPyPtr)&((PyObject *)cpy_r_r63)->ob_type;
    cpy_r_r66 = *(PyObject * *)cpy_r_r65;
    cpy_r_r67 = cpy_r_r66 == cpy_r_r64;
    if (cpy_r_r67) {
        goto CPyL49;
    } else
        goto CPyL109;
CPyL47: ;
    cpy_r_r68 = CPyStatics[5279]; /* ('TypedDict() expects a string literal as the first '
                                     'argument') */
    cpy_r_r69 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail_typeddict_arg(cpy_r_self, cpy_r_r68, cpy_r_call);
    if (unlikely(cpy_r_r69.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 428, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    cpy_r_r70 = PyTuple_New(6);
    if (unlikely(cpy_r_r70 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6229 = cpy_r_r69.f0;
    PyTuple_SET_ITEM(cpy_r_r70, 0, __tmp6229);
    PyObject *__tmp6230 = cpy_r_r69.f1;
    PyTuple_SET_ITEM(cpy_r_r70, 1, __tmp6230);
    PyObject *__tmp6231 = cpy_r_r69.f2;
    PyTuple_SET_ITEM(cpy_r_r70, 2, __tmp6231);
    PyObject *__tmp6232 = cpy_r_r69.f3 ? Py_True : Py_False;
    CPy_INCREF(__tmp6232);
    PyTuple_SET_ITEM(cpy_r_r70, 3, __tmp6232);
    PyObject *__tmp6233 = cpy_r_r69.f4;
    PyTuple_SET_ITEM(cpy_r_r70, 4, __tmp6233);
    PyObject *__tmp6234 = cpy_r_r69.f5 ? Py_True : Py_False;
    CPy_INCREF(__tmp6234);
    PyTuple_SET_ITEM(cpy_r_r70, 5, __tmp6234);
    return cpy_r_r70;
CPyL49: ;
    cpy_r_r71 = CPyList_GetItemShortBorrow(cpy_r_args, 2);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 431, CPyStatic_semanal_typeddict___globals);
        goto CPyL102;
    }
    cpy_r_r72 = (PyObject *)CPyType_nodes___DictExpr;
    cpy_r_r73 = (CPyPtr)&((PyObject *)cpy_r_r71)->ob_type;
    cpy_r_r74 = *(PyObject * *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r74 == cpy_r_r72;
    if (cpy_r_r75) {
        goto CPyL53;
    } else
        goto CPyL110;
CPyL51: ;
    cpy_r_r76 = CPyStatics[5280]; /* ('TypedDict() expects a dictionary literal as the '
                                     'second argument') */
    cpy_r_r77 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail_typeddict_arg(cpy_r_self, cpy_r_r76, cpy_r_call);
    if (unlikely(cpy_r_r77.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 432, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    cpy_r_r78 = PyTuple_New(6);
    if (unlikely(cpy_r_r78 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6235 = cpy_r_r77.f0;
    PyTuple_SET_ITEM(cpy_r_r78, 0, __tmp6235);
    PyObject *__tmp6236 = cpy_r_r77.f1;
    PyTuple_SET_ITEM(cpy_r_r78, 1, __tmp6236);
    PyObject *__tmp6237 = cpy_r_r77.f2;
    PyTuple_SET_ITEM(cpy_r_r78, 2, __tmp6237);
    PyObject *__tmp6238 = cpy_r_r77.f3 ? Py_True : Py_False;
    CPy_INCREF(__tmp6238);
    PyTuple_SET_ITEM(cpy_r_r78, 3, __tmp6238);
    PyObject *__tmp6239 = cpy_r_r77.f4;
    PyTuple_SET_ITEM(cpy_r_r78, 4, __tmp6239);
    PyObject *__tmp6240 = cpy_r_r77.f5 ? Py_True : Py_False;
    CPy_INCREF(__tmp6240);
    PyTuple_SET_ITEM(cpy_r_r78, 5, __tmp6240);
    return cpy_r_r78;
CPyL53: ;
    cpy_r_r79 = 1 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r79);
    cpy_r_total = cpy_r_r79;
    cpy_r_r80 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r81 = *(int64_t *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 << 1;
    cpy_r_r83 = cpy_r_r82 == 6;
    if (cpy_r_r83) {
        goto CPyL111;
    } else
        goto CPyL62;
CPyL54: ;
    cpy_r_r84 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r84);
    cpy_r_r85 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_args;
    cpy_r_r86 = CPyList_GetItemShort(cpy_r_r85, 4);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 437, CPyStatic_semanal_typeddict___globals);
        goto CPyL112;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r86, CPyType_nodes___Expression)))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 437, CPyStatic_semanal_typeddict___globals, "mypy.nodes.Expression", cpy_r_r86);
        goto CPyL112;
    }
    cpy_r_r88 = CPyStatics[4723]; /* 'total' */
    cpy_r_r89 = NULL;
    cpy_r_r90 = CPyDef_semanal_shared___require_bool_literal_argument(cpy_r_r84, cpy_r_r87, cpy_r_r88, cpy_r_r89);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 437, CPyStatic_semanal_typeddict___globals);
        goto CPyL102;
    }
    cpy_r_total = cpy_r_r90;
    cpy_r_r91 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r92 = cpy_r_total == cpy_r_r91;
    if (cpy_r_r92) {
        goto CPyL113;
    } else
        goto CPyL62;
CPyL58: ;
    cpy_r_r93 = CPyStatics[163]; /* '' */
    cpy_r_r94 = PyList_New(0);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 439, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    cpy_r_r95 = PyList_New(0);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 439, CPyStatic_semanal_typeddict___globals);
        goto CPyL114;
    }
    cpy_r_r96 = PyList_New(0);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 439, CPyStatic_semanal_typeddict___globals);
        goto CPyL115;
    }
    cpy_r_r97.f0 = cpy_r_r93;
    cpy_r_r97.f1 = cpy_r_r94;
    cpy_r_r97.f2 = cpy_r_r95;
    cpy_r_r97.f3 = 1;
    cpy_r_r97.f4 = cpy_r_r96;
    cpy_r_r97.f5 = 0;
    CPy_INCREF(cpy_r_r97.f0);
    CPy_INCREF(cpy_r_r97.f1);
    CPy_INCREF(cpy_r_r97.f2);
    CPy_INCREF(cpy_r_r97.f4);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r98 = PyTuple_New(6);
    if (unlikely(cpy_r_r98 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6241 = cpy_r_r97.f0;
    PyTuple_SET_ITEM(cpy_r_r98, 0, __tmp6241);
    PyObject *__tmp6242 = cpy_r_r97.f1;
    PyTuple_SET_ITEM(cpy_r_r98, 1, __tmp6242);
    PyObject *__tmp6243 = cpy_r_r97.f2;
    PyTuple_SET_ITEM(cpy_r_r98, 2, __tmp6243);
    PyObject *__tmp6244 = cpy_r_r97.f3 ? Py_True : Py_False;
    CPy_INCREF(__tmp6244);
    PyTuple_SET_ITEM(cpy_r_r98, 3, __tmp6244);
    PyObject *__tmp6245 = cpy_r_r97.f4;
    PyTuple_SET_ITEM(cpy_r_r98, 4, __tmp6245);
    PyObject *__tmp6246 = cpy_r_r97.f5 ? Py_True : Py_False;
    CPy_INCREF(__tmp6246);
    PyTuple_SET_ITEM(cpy_r_r98, 5, __tmp6246);
    return cpy_r_r98;
CPyL62: ;
    cpy_r_r99 = CPyList_GetItemShort(cpy_r_args, 2);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 440, CPyStatic_semanal_typeddict___globals);
        goto CPyL116;
    }
    if (likely(Py_TYPE(cpy_r_r99) == CPyType_nodes___DictExpr))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 440, CPyStatic_semanal_typeddict___globals, "mypy.nodes.DictExpr", cpy_r_r99);
        goto CPyL116;
    }
    cpy_r_dictexpr = cpy_r_r100;
    cpy_r_r101 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r101);
    cpy_r_r102 = ((mypy___nodes___DictExprObject *)cpy_r_dictexpr)->_items;
    CPy_INCREF(cpy_r_r102);
    cpy_r_r103 = (CPyPtr)&((PyVarObject *)cpy_r_r102)->ob_size;
    cpy_r_r104 = *(int64_t *)cpy_r_r103;
    cpy_r_r105 = PyList_New(cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 441, CPyStatic_semanal_typeddict___globals);
        goto CPyL117;
    }
    cpy_r_r106 = 0;
CPyL66: ;
    cpy_r_r107 = (CPyPtr)&((PyVarObject *)cpy_r_r102)->ob_size;
    cpy_r_r108 = *(int64_t *)cpy_r_r107;
    cpy_r_r109 = cpy_r_r108 << 1;
    cpy_r_r110 = (Py_ssize_t)cpy_r_r106 < (Py_ssize_t)cpy_r_r109;
    if (!cpy_r_r110) goto CPyL118;
    cpy_r_r111 = CPyList_GetItemUnsafe(cpy_r_r102, cpy_r_r106);
    PyObject *__tmp6247;
    if (unlikely(!(PyTuple_Check(cpy_r_r111) && PyTuple_GET_SIZE(cpy_r_r111) == 2))) {
        __tmp6247 = NULL;
        goto __LL6248;
    }
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r111, 0), CPyType_nodes___Expression))
        __tmp6247 = PyTuple_GET_ITEM(cpy_r_r111, 0);
    else {
        __tmp6247 = NULL;
    }
    if (__tmp6247 != NULL) goto __LL6249;
    if (PyTuple_GET_ITEM(cpy_r_r111, 0) == Py_None)
        __tmp6247 = PyTuple_GET_ITEM(cpy_r_r111, 0);
    else {
        __tmp6247 = NULL;
    }
    if (__tmp6247 != NULL) goto __LL6249;
    __tmp6247 = NULL;
__LL6249: ;
    if (__tmp6247 == NULL) goto __LL6248;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r111, 1), CPyType_nodes___Expression)))
        __tmp6247 = PyTuple_GET_ITEM(cpy_r_r111, 1);
    else {
        __tmp6247 = NULL;
    }
    if (__tmp6247 == NULL) goto __LL6248;
    __tmp6247 = cpy_r_r111;
__LL6248: ;
    if (unlikely(__tmp6247 == NULL)) {
        CPy_TypeError("tuple[union[mypy.nodes.Expression, None], mypy.nodes.Expression]", cpy_r_r111); cpy_r_r112 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6250 = PyTuple_GET_ITEM(cpy_r_r111, 0);
        CPy_INCREF(__tmp6250);
        PyObject *__tmp6251;
        if (PyObject_TypeCheck(__tmp6250, CPyType_nodes___Expression))
            __tmp6251 = __tmp6250;
        else {
            __tmp6251 = NULL;
        }
        if (__tmp6251 != NULL) goto __LL6252;
        if (__tmp6250 == Py_None)
            __tmp6251 = __tmp6250;
        else {
            __tmp6251 = NULL;
        }
        if (__tmp6251 != NULL) goto __LL6252;
        CPy_TypeError("mypy.nodes.Expression or None", __tmp6250); 
        __tmp6251 = NULL;
__LL6252: ;
        cpy_r_r112.f0 = __tmp6251;
        PyObject *__tmp6253 = PyTuple_GET_ITEM(cpy_r_r111, 1);
        CPy_INCREF(__tmp6253);
        PyObject *__tmp6254;
        if (likely(PyObject_TypeCheck(__tmp6253, CPyType_nodes___Expression)))
            __tmp6254 = __tmp6253;
        else {
            CPy_TypeError("mypy.nodes.Expression", __tmp6253); 
            __tmp6254 = NULL;
        }
        cpy_r_r112.f1 = __tmp6254;
    }
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 441, CPyStatic_semanal_typeddict___globals);
        goto CPyL119;
    }
    cpy_r_r113 = cpy_r_r112.f0;
    CPy_INCREF(cpy_r_r113);
    cpy_r_k = cpy_r_r113;
    CPy_DECREF(cpy_r_k);
    cpy_r_r114 = cpy_r_r112.f1;
    CPy_INCREF(cpy_r_r114);
    CPy_DECREF(cpy_r_r112.f0);
    CPy_DECREF(cpy_r_r112.f1);
    cpy_r_t = cpy_r_r114;
    cpy_r_r115 = CPyList_SetItemUnsafe(cpy_r_r105, cpy_r_r106, cpy_r_t);
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 441, CPyStatic_semanal_typeddict___globals);
        goto CPyL119;
    }
    cpy_r_r116 = cpy_r_r106 + 2;
    cpy_r_r106 = cpy_r_r116;
    goto CPyL66;
CPyL70: ;
    cpy_r_r117 = CPY_GET_METHOD_TRAIT(cpy_r_r101, CPyType_semanal_shared___SemanticAnalyzerInterface, 5, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r101, cpy_r_r105); /* get_and_bind_all_tvars */
    CPy_DECREF(cpy_r_r105);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 441, CPyStatic_semanal_typeddict___globals);
        goto CPyL120;
    }
    cpy_r_tvar_defs = cpy_r_r117;
    cpy_r_r118 = ((mypy___nodes___DictExprObject *)cpy_r_dictexpr)->_items;
    CPy_INCREF(cpy_r_r118);
    cpy_r_r119 = CPyDef_semanal_typeddict___TypedDictAnalyzer___parse_typeddict_fields_with_types(cpy_r_self, cpy_r_r118, cpy_r_call);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 442, CPyStatic_semanal_typeddict___globals);
        goto CPyL121;
    }
    cpy_r_res = cpy_r_r119;
    cpy_r_r120 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r121 = cpy_r_res == cpy_r_r120;
    if (cpy_r_r121) {
        goto CPyL122;
    } else
        goto CPyL74;
CPyL73: ;
    cpy_r_r122 = Py_None;
    CPy_INCREF(cpy_r_r122);
    return cpy_r_r122;
CPyL74: ;
    PyObject *__tmp6255;
    if (unlikely(!(PyTuple_Check(cpy_r_res) && PyTuple_GET_SIZE(cpy_r_res) == 3))) {
        __tmp6255 = NULL;
        goto __LL6256;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_res, 0))))
        __tmp6255 = PyTuple_GET_ITEM(cpy_r_res, 0);
    else {
        __tmp6255 = NULL;
    }
    if (__tmp6255 == NULL) goto __LL6256;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_res, 1))))
        __tmp6255 = PyTuple_GET_ITEM(cpy_r_res, 1);
    else {
        __tmp6255 = NULL;
    }
    if (__tmp6255 == NULL) goto __LL6256;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_res, 2))))
        __tmp6255 = PyTuple_GET_ITEM(cpy_r_res, 2);
    else {
        __tmp6255 = NULL;
    }
    if (__tmp6255 == NULL) goto __LL6256;
    __tmp6255 = cpy_r_res;
__LL6256: ;
    if (unlikely(__tmp6255 == NULL)) {
        CPy_TypeError("tuple[list, list, bool]", cpy_r_res); cpy_r_r123 = (tuple_T3OOC) { NULL, NULL, 2 };
    } else {
        PyObject *__tmp6257 = PyTuple_GET_ITEM(cpy_r_res, 0);
        CPy_INCREF(__tmp6257);
        PyObject *__tmp6258;
        if (likely(PyList_Check(__tmp6257)))
            __tmp6258 = __tmp6257;
        else {
            CPy_TypeError("list", __tmp6257); 
            __tmp6258 = NULL;
        }
        cpy_r_r123.f0 = __tmp6258;
        PyObject *__tmp6259 = PyTuple_GET_ITEM(cpy_r_res, 1);
        CPy_INCREF(__tmp6259);
        PyObject *__tmp6260;
        if (likely(PyList_Check(__tmp6259)))
            __tmp6260 = __tmp6259;
        else {
            CPy_TypeError("list", __tmp6259); 
            __tmp6260 = NULL;
        }
        cpy_r_r123.f1 = __tmp6260;
        PyObject *__tmp6261 = PyTuple_GET_ITEM(cpy_r_res, 2);
        char __tmp6262;
        if (unlikely(!PyBool_Check(__tmp6261))) {
            CPy_TypeError("bool", __tmp6261); __tmp6262 = 2;
        } else
            __tmp6262 = __tmp6261 == Py_True;
        cpy_r_r123.f2 = __tmp6262;
    }
    CPy_DECREF(cpy_r_res);
    if (unlikely(cpy_r_r123.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 446, CPyStatic_semanal_typeddict___globals);
        goto CPyL121;
    }
    cpy_r_r124 = cpy_r_r123.f0;
    CPy_INCREF(cpy_r_r124);
    cpy_r_items = cpy_r_r124;
    cpy_r_r125 = cpy_r_r123.f1;
    CPy_INCREF(cpy_r_r125);
    cpy_r_types = cpy_r_r125;
    cpy_r_r126 = cpy_r_r123.f2;
    CPy_DECREF(cpy_r_r123.f0);
    CPy_DECREF(cpy_r_r123.f1);
    cpy_r_ok = cpy_r_r126;
    cpy_r_r127 = 0;
CPyL76: ;
    cpy_r_r128 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r129 = *(int64_t *)cpy_r_r128;
    cpy_r_r130 = cpy_r_r129 << 1;
    cpy_r_r131 = (Py_ssize_t)cpy_r_r127 < (Py_ssize_t)cpy_r_r130;
    if (!cpy_r_r131) goto CPyL81;
    cpy_r_r132 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r127);
    if (likely(PyObject_TypeCheck(cpy_r_r132, CPyType_types___Type)))
        cpy_r_r133 = cpy_r_r132;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 447, CPyStatic_semanal_typeddict___globals, "mypy.types.Type", cpy_r_r132);
        goto CPyL123;
    }
    cpy_r_t_2 = cpy_r_r133;
    cpy_r_r134 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r134);
    cpy_r_r135 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    cpy_r_r136 = CPY_GET_ATTR_TRAIT(cpy_r_r135, CPyType_semanal_shared___SemanticAnalyzerInterface, 14, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char); /* is_typeshed_stub_file */
    if (unlikely(cpy_r_r136 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 449, CPyStatic_semanal_typeddict___globals);
        goto CPyL124;
    }
CPyL79: ;
    cpy_r_r137 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r137);
    cpy_r_r138 = CPyDef_typeanal___check_for_explicit_any(cpy_r_t_2, cpy_r_r134, cpy_r_r136, cpy_r_r137, cpy_r_call);
    CPy_DECREF(cpy_r_t_2);
    CPy_DECREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r138 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 448, CPyStatic_semanal_typeddict___globals);
        goto CPyL123;
    }
    cpy_r_r139 = cpy_r_r127 + 2;
    cpy_r_r127 = cpy_r_r139;
    goto CPyL76;
CPyL81: ;
    cpy_r_r140 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_options;
    cpy_r_r141 = ((mypy___options___OptionsObject *)cpy_r_r140)->_disallow_any_unimported;
    if (!cpy_r_r141) goto CPyL125;
CPyL82: ;
    cpy_r_r142 = 0;
CPyL83: ;
    cpy_r_r143 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r144 = *(int64_t *)cpy_r_r143;
    cpy_r_r145 = cpy_r_r144 << 1;
    cpy_r_r146 = (Py_ssize_t)cpy_r_r142 < (Py_ssize_t)cpy_r_r145;
    if (!cpy_r_r146) goto CPyL125;
    cpy_r_r147 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r142);
    if (likely(PyObject_TypeCheck(cpy_r_r147, CPyType_types___Type)))
        cpy_r_r148 = cpy_r_r147;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 453, CPyStatic_semanal_typeddict___globals, "mypy.types.Type", cpy_r_r147);
        goto CPyL123;
    }
    cpy_r_t_2 = cpy_r_r148;
    cpy_r_r149 = CPyDef_typeanal___has_any_from_unimported_type(cpy_r_t_2);
    if (unlikely(cpy_r_r149 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 454, CPyStatic_semanal_typeddict___globals);
        goto CPyL126;
    }
    if (!cpy_r_r149) goto CPyL127;
    cpy_r_r150 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r150);
    cpy_r_r151 = CPyStatics[5281]; /* 'Type of a TypedDict key' */
    cpy_r_r152 = CPyDef_messages___MessageBuilder___unimported_type_becomes_any(cpy_r_r150, cpy_r_r151, cpy_r_t_2, cpy_r_dictexpr);
    CPy_DECREF(cpy_r_t_2);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r152 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 455, CPyStatic_semanal_typeddict___globals);
        goto CPyL123;
    }
CPyL88: ;
    cpy_r_r153 = cpy_r_r142 + 2;
    cpy_r_r142 = cpy_r_r153;
    goto CPyL83;
CPyL89: ;
    cpy_r_r154 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r155 = cpy_r_total != cpy_r_r154;
    if (cpy_r_r155) {
        goto CPyL92;
    } else
        goto CPyL128;
CPyL90: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r156 = 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 456, CPyStatic_semanal_typeddict___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL92: ;
    cpy_r_r157 = CPyList_GetItemShortBorrow(cpy_r_args, 0);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 457, CPyStatic_semanal_typeddict___globals);
        goto CPyL129;
    }
    if (likely(Py_TYPE(cpy_r_r157) == CPyType_nodes___StrExpr))
        cpy_r_r158 = cpy_r_r157;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 457, CPyStatic_semanal_typeddict___globals, "mypy.nodes.StrExpr", cpy_r_r157);
        goto CPyL129;
    }
    cpy_r_r159 = ((mypy___nodes___StrExprObject *)cpy_r_r158)->_value;
    CPy_INCREF(cpy_r_r159);
    CPy_DECREF(cpy_r_args);
    if (unlikely(!PyBool_Check(cpy_r_total))) {
        CPy_TypeError("bool", cpy_r_total); cpy_r_r160 = 2;
    } else
        cpy_r_r160 = cpy_r_total == Py_True;
    CPy_DECREF(cpy_r_total);
    if (unlikely(cpy_r_r160 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 457, CPyStatic_semanal_typeddict___globals);
        goto CPyL130;
    }
    cpy_r_r161.f0 = cpy_r_r159;
    cpy_r_r161.f1 = cpy_r_items;
    cpy_r_r161.f2 = cpy_r_types;
    cpy_r_r161.f3 = cpy_r_r160;
    cpy_r_r161.f4 = cpy_r_tvar_defs;
    cpy_r_r161.f5 = cpy_r_ok;
    CPy_INCREF(cpy_r_r161.f0);
    CPy_INCREF(cpy_r_r161.f1);
    CPy_INCREF(cpy_r_r161.f2);
    CPy_INCREF(cpy_r_r161.f4);
    CPy_DECREF(cpy_r_r159);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_tvar_defs);
    cpy_r_r162 = PyTuple_New(6);
    if (unlikely(cpy_r_r162 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6263 = cpy_r_r161.f0;
    PyTuple_SET_ITEM(cpy_r_r162, 0, __tmp6263);
    PyObject *__tmp6264 = cpy_r_r161.f1;
    PyTuple_SET_ITEM(cpy_r_r162, 1, __tmp6264);
    PyObject *__tmp6265 = cpy_r_r161.f2;
    PyTuple_SET_ITEM(cpy_r_r162, 2, __tmp6265);
    PyObject *__tmp6266 = cpy_r_r161.f3 ? Py_True : Py_False;
    CPy_INCREF(__tmp6266);
    PyTuple_SET_ITEM(cpy_r_r162, 3, __tmp6266);
    PyObject *__tmp6267 = cpy_r_r161.f4;
    PyTuple_SET_ITEM(cpy_r_r162, 4, __tmp6267);
    PyObject *__tmp6268 = cpy_r_r161.f5 ? Py_True : Py_False;
    CPy_INCREF(__tmp6268);
    PyTuple_SET_ITEM(cpy_r_r162, 5, __tmp6268);
    return cpy_r_r162;
CPyL96: ;
    cpy_r_r163 = NULL;
    return cpy_r_r163;
CPyL97: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL1;
CPyL98: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL4;
CPyL99: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r15);
    goto CPyL7;
CPyL100: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r15);
    goto CPyL10;
CPyL101: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r15);
    goto CPyL96;
CPyL102: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL96;
CPyL103: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r27);
    goto CPyL18;
CPyL104: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r27);
    goto CPyL21;
CPyL105: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r27);
    goto CPyL24;
CPyL106: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r27);
    goto CPyL96;
CPyL107: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL31;
CPyL108: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL39;
CPyL109: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL47;
CPyL110: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL51;
CPyL111: ;
    CPy_DECREF(cpy_r_total);
    goto CPyL54;
CPyL112: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r84);
    goto CPyL96;
CPyL113: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_total);
    goto CPyL58;
CPyL114: ;
    CPy_DecRef(cpy_r_r94);
    goto CPyL96;
CPyL115: ;
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r95);
    goto CPyL96;
CPyL116: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_total);
    goto CPyL96;
CPyL117: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_total);
    CPy_DecRef(cpy_r_dictexpr);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r102);
    goto CPyL96;
CPyL118: ;
    CPy_DECREF(cpy_r_r102);
    goto CPyL70;
CPyL119: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_total);
    CPy_DecRef(cpy_r_dictexpr);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r105);
    goto CPyL96;
CPyL120: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_total);
    CPy_DecRef(cpy_r_dictexpr);
    goto CPyL96;
CPyL121: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_total);
    CPy_DecRef(cpy_r_dictexpr);
    CPy_DecRef(cpy_r_tvar_defs);
    goto CPyL96;
CPyL122: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_total);
    CPy_DECREF(cpy_r_dictexpr);
    CPy_DECREF(cpy_r_tvar_defs);
    CPy_DECREF(cpy_r_res);
    goto CPyL73;
CPyL123: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_total);
    CPy_DecRef(cpy_r_dictexpr);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    goto CPyL96;
CPyL124: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_total);
    CPy_DecRef(cpy_r_dictexpr);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_t_2);
    CPy_DecRef(cpy_r_r134);
    goto CPyL96;
CPyL125: ;
    CPy_DECREF(cpy_r_dictexpr);
    goto CPyL89;
CPyL126: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_total);
    CPy_DecRef(cpy_r_dictexpr);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_t_2);
    goto CPyL96;
CPyL127: ;
    CPy_DECREF(cpy_r_t_2);
    goto CPyL88;
CPyL128: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_total);
    CPy_DECREF(cpy_r_tvar_defs);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    goto CPyL90;
CPyL129: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_total);
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    goto CPyL96;
CPyL130: ;
    CPy_DecRef(cpy_r_tvar_defs);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r159);
    goto CPyL96;
}

PyObject *CPyPy_semanal_typeddict___TypedDictAnalyzer___parse_typeddict_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"call", 0};
    static CPyArg_Parser parser = {"O:parse_typeddict_args", kwlist, 0};
    PyObject *obj_call;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_call)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeddict___TypedDictAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeddict.TypedDictAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_call;
    if (likely(Py_TYPE(obj_call) == CPyType_nodes___CallExpr))
        arg_call = obj_call;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_call); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_typeddict___TypedDictAnalyzer___parse_typeddict_args(arg_self, arg_call);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_args", 406, CPyStatic_semanal_typeddict___globals);
    return NULL;
}

PyObject *CPyDef_semanal_typeddict___TypedDictAnalyzer___parse_typeddict_fields_with_types(PyObject *cpy_r_self, PyObject *cpy_r_dict_items, PyObject *cpy_r_context) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_seen_keys;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_types;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T2OO cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_field_name_expr;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_field_type_expr;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_key;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_name_context;
    PyObject *cpy_r_r35;
    tuple_T6OOOCOC cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    tuple_T3OOC cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_type;
    tuple_T3OOO cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyPtr cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    tuple_T3OOO cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    tuple_T6OOOCOC cpy_r_r81;
    PyObject *cpy_r_r82;
    tuple_T6OOOCOC cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    tuple_T3OOC cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_analyzed;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    CPyTagged cpy_r_r109;
    tuple_T3OOC cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 466, CPyStatic_semanal_typeddict___globals);
        goto CPyL65;
    }
    cpy_r_seen_keys = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 467, CPyStatic_semanal_typeddict___globals);
        goto CPyL66;
    }
    cpy_r_items = cpy_r_r1;
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 468, CPyStatic_semanal_typeddict___globals);
        goto CPyL67;
    }
    cpy_r_types = cpy_r_r2;
    cpy_r_r3 = 0;
CPyL4: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_dict_items)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL68;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_dict_items, cpy_r_r3);
    PyObject *__tmp6269;
    if (unlikely(!(PyTuple_Check(cpy_r_r8) && PyTuple_GET_SIZE(cpy_r_r8) == 2))) {
        __tmp6269 = NULL;
        goto __LL6270;
    }
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r8, 0), CPyType_nodes___Expression))
        __tmp6269 = PyTuple_GET_ITEM(cpy_r_r8, 0);
    else {
        __tmp6269 = NULL;
    }
    if (__tmp6269 != NULL) goto __LL6271;
    if (PyTuple_GET_ITEM(cpy_r_r8, 0) == Py_None)
        __tmp6269 = PyTuple_GET_ITEM(cpy_r_r8, 0);
    else {
        __tmp6269 = NULL;
    }
    if (__tmp6269 != NULL) goto __LL6271;
    __tmp6269 = NULL;
__LL6271: ;
    if (__tmp6269 == NULL) goto __LL6270;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r8, 1), CPyType_nodes___Expression)))
        __tmp6269 = PyTuple_GET_ITEM(cpy_r_r8, 1);
    else {
        __tmp6269 = NULL;
    }
    if (__tmp6269 == NULL) goto __LL6270;
    __tmp6269 = cpy_r_r8;
__LL6270: ;
    if (unlikely(__tmp6269 == NULL)) {
        CPy_TypeError("tuple[union[mypy.nodes.Expression, None], mypy.nodes.Expression]", cpy_r_r8); cpy_r_r9 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6272 = PyTuple_GET_ITEM(cpy_r_r8, 0);
        CPy_INCREF(__tmp6272);
        PyObject *__tmp6273;
        if (PyObject_TypeCheck(__tmp6272, CPyType_nodes___Expression))
            __tmp6273 = __tmp6272;
        else {
            __tmp6273 = NULL;
        }
        if (__tmp6273 != NULL) goto __LL6274;
        if (__tmp6272 == Py_None)
            __tmp6273 = __tmp6272;
        else {
            __tmp6273 = NULL;
        }
        if (__tmp6273 != NULL) goto __LL6274;
        CPy_TypeError("mypy.nodes.Expression or None", __tmp6272); 
        __tmp6273 = NULL;
__LL6274: ;
        cpy_r_r9.f0 = __tmp6273;
        PyObject *__tmp6275 = PyTuple_GET_ITEM(cpy_r_r8, 1);
        CPy_INCREF(__tmp6275);
        PyObject *__tmp6276;
        if (likely(PyObject_TypeCheck(__tmp6275, CPyType_nodes___Expression)))
            __tmp6276 = __tmp6275;
        else {
            CPy_TypeError("mypy.nodes.Expression", __tmp6275); 
            __tmp6276 = NULL;
        }
        cpy_r_r9.f1 = __tmp6276;
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 469, CPyStatic_semanal_typeddict___globals);
        goto CPyL69;
    }
    cpy_r_r10 = cpy_r_r9.f0;
    CPy_INCREF(cpy_r_r10);
    cpy_r_field_name_expr = cpy_r_r10;
    cpy_r_r11 = cpy_r_r9.f1;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r9.f0);
    CPy_DECREF(cpy_r_r9.f1);
    cpy_r_field_type_expr = cpy_r_r11;
    cpy_r_r12 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_field_name_expr)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (!cpy_r_r15) goto CPyL70;
    if (likely(Py_TYPE(cpy_r_field_name_expr) == CPyType_nodes___StrExpr))
        cpy_r_r16 = cpy_r_field_name_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 471, CPyStatic_semanal_typeddict___globals, "mypy.nodes.StrExpr", cpy_r_field_name_expr);
        goto CPyL71;
    }
    cpy_r_r17 = ((mypy___nodes___StrExprObject *)cpy_r_r16)->_value;
    CPy_INCREF(cpy_r_r17);
    cpy_r_key = cpy_r_r17;
    cpy_r_r18 = PyList_Append(cpy_r_items, cpy_r_key);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 472, CPyStatic_semanal_typeddict___globals);
        goto CPyL72;
    }
    cpy_r_r20 = PySet_Contains(cpy_r_seen_keys, cpy_r_key);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 473, CPyStatic_semanal_typeddict___globals);
        goto CPyL72;
    }
    cpy_r_r22 = cpy_r_r20;
    if (!cpy_r_r22) goto CPyL73;
    cpy_r_r23 = CPyStatics[5270]; /* 'Duplicate TypedDict key "' */
    cpy_r_r24 = CPyStatics[178]; /* '"' */
    cpy_r_r25 = CPyStr_Build(3, cpy_r_r23, cpy_r_key, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 474, CPyStatic_semanal_typeddict___globals);
        goto CPyL72;
    }
    if (likely(Py_TYPE(cpy_r_field_name_expr) == CPyType_nodes___StrExpr))
        cpy_r_r26 = cpy_r_field_name_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 474, CPyStatic_semanal_typeddict___globals, "mypy.nodes.StrExpr", cpy_r_field_name_expr);
        goto CPyL74;
    }
    cpy_r_r27 = NULL;
    cpy_r_r28 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_r25, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 474, CPyStatic_semanal_typeddict___globals);
        goto CPyL75;
    }
CPyL14: ;
    cpy_r_r29 = PySet_Add(cpy_r_seen_keys, cpy_r_key);
    CPy_DECREF(cpy_r_key);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 475, CPyStatic_semanal_typeddict___globals);
        goto CPyL76;
    } else
        goto CPyL23;
CPyL15: ;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_field_name_expr != cpy_r_r31;
    if (cpy_r_r32) {
        goto CPyL77;
    } else
        goto CPyL78;
CPyL16: ;
    if (likely(cpy_r_field_name_expr != Py_None))
        cpy_r_r33 = cpy_r_field_name_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 477, CPyStatic_semanal_typeddict___globals, "mypy.nodes.Expression", cpy_r_field_name_expr);
        goto CPyL65;
    }
    cpy_r_r34 = cpy_r_r33;
    goto CPyL19;
CPyL18: ;
    cpy_r_r34 = cpy_r_field_type_expr;
CPyL19: ;
    cpy_r_name_context = cpy_r_r34;
    cpy_r_r35 = CPyStatics[5282]; /* 'Invalid TypedDict() field name' */
    cpy_r_r36 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail_typeddict_arg(cpy_r_self, cpy_r_r35, cpy_r_name_context);
    CPy_DECREF(cpy_r_name_context);
    if (unlikely(cpy_r_r36.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 478, CPyStatic_semanal_typeddict___globals);
        goto CPyL65;
    } else
        goto CPyL79;
CPyL20: ;
    cpy_r_r37 = PyList_New(0);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 479, CPyStatic_semanal_typeddict___globals);
        goto CPyL65;
    }
    cpy_r_r38 = PyList_New(0);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 479, CPyStatic_semanal_typeddict___globals);
        goto CPyL80;
    }
    cpy_r_r39.f0 = cpy_r_r37;
    cpy_r_r39.f1 = cpy_r_r38;
    cpy_r_r39.f2 = 0;
    CPy_INCREF(cpy_r_r39.f0);
    CPy_INCREF(cpy_r_r39.f1);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = PyTuple_New(3);
    if (unlikely(cpy_r_r40 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6277 = cpy_r_r39.f0;
    PyTuple_SET_ITEM(cpy_r_r40, 0, __tmp6277);
    PyObject *__tmp6278 = cpy_r_r39.f1;
    PyTuple_SET_ITEM(cpy_r_r40, 1, __tmp6278);
    PyObject *__tmp6279 = cpy_r_r39.f2 ? Py_True : Py_False;
    CPy_INCREF(__tmp6279);
    PyTuple_SET_ITEM(cpy_r_r40, 2, __tmp6279);
    return cpy_r_r40;
CPyL23: ;
    cpy_r_r41 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    cpy_r_r43 = CPY_GET_ATTR_TRAIT(cpy_r_r42, CPyType_semanal_shared___SemanticAnalyzerInterface, 27, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char); /* is_stub_file */
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 482, CPyStatic_semanal_typeddict___globals);
        goto CPyL81;
    }
CPyL24: ;
    cpy_r_r44 = NULL;
    cpy_r_r45 = CPyDef_exprtotype___expr_to_unanalyzed_type(cpy_r_field_type_expr, cpy_r_r41, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 481, CPyStatic_semanal_typeddict___globals);
        goto CPyL82;
    } else
        goto CPyL83;
CPyL25: ;
    cpy_r_type = cpy_r_r45;
    goto CPyL54;
CPyL26: ;
    cpy_r_r46 = CPy_CatchError();
    cpy_r_r47 = (PyObject *)CPyType_exprtotype___TypeTranslationError;
    cpy_r_r48 = CPy_ExceptionMatches(cpy_r_r47);
    if (!cpy_r_r48) goto CPyL84;
    cpy_r_r49 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_field_type_expr)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    if (!cpy_r_r52) goto CPyL46;
    if (likely(Py_TYPE(cpy_r_field_type_expr) == CPyType_nodes___CallExpr))
        cpy_r_r53 = cpy_r_field_type_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 487, CPyStatic_semanal_typeddict___globals, "mypy.nodes.CallExpr", cpy_r_field_type_expr);
        goto CPyL85;
    }
    cpy_r_r54 = ((mypy___nodes___CallExprObject *)cpy_r_r53)->_callee;
    cpy_r_r55 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r56 = (CPyPtr)&((PyObject *)cpy_r_r54)->ob_type;
    cpy_r_r57 = *(PyObject * *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 == cpy_r_r55;
    if (!cpy_r_r58) goto CPyL31;
    cpy_r_r59 = cpy_r_r58;
    goto CPyL32;
CPyL31: ;
    cpy_r_r60 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r61 = (CPyPtr)&((PyObject *)cpy_r_r54)->ob_type;
    cpy_r_r62 = *(PyObject * *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 == cpy_r_r60;
    cpy_r_r59 = cpy_r_r63;
CPyL32: ;
    if (!cpy_r_r59) goto CPyL34;
    cpy_r_r64 = cpy_r_r59;
    goto CPyL35;
CPyL34: ;
    cpy_r_r65 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r66 = (CPyPtr)&((PyObject *)cpy_r_r54)->ob_type;
    cpy_r_r67 = *(PyObject * *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 == cpy_r_r65;
    cpy_r_r64 = cpy_r_r68;
CPyL35: ;
    if (!cpy_r_r64) goto CPyL46;
    if (likely(Py_TYPE(cpy_r_field_type_expr) == CPyType_nodes___CallExpr))
        cpy_r_r69 = cpy_r_field_type_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 488, CPyStatic_semanal_typeddict___globals, "mypy.nodes.CallExpr", cpy_r_field_type_expr);
        goto CPyL85;
    }
    cpy_r_r70 = ((mypy___nodes___CallExprObject *)cpy_r_r69)->_callee;
    CPy_INCREF(cpy_r_r70);
    if (likely((Py_TYPE(cpy_r_r70) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r70) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r70) == CPyType_nodes___RefExpr)))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 488, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_r70);
        goto CPyL85;
    }
    cpy_r_r72 = CPY_GET_ATTR(cpy_r_r71, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DecRef(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 488, CPyStatic_semanal_typeddict___globals);
        goto CPyL85;
    }
CPyL39: ;
    cpy_r_r73 = CPyStatic_types___TPDICT_NAMES;
    if (unlikely(cpy_r_r73.f0 == NULL)) {
        goto CPyL86;
    } else
        goto CPyL42;
CPyL40: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TPDICT_NAMES\" was not set");
    cpy_r_r74 = 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 488, CPyStatic_semanal_typeddict___globals);
        goto CPyL52;
    } else
        goto CPyL87;
CPyL41: ;
    CPy_Unreachable();
CPyL42: ;
    CPy_INCREF(cpy_r_r73.f0);
    CPy_INCREF(cpy_r_r73.f1);
    CPy_INCREF(cpy_r_r73.f2);
    cpy_r_r75 = PyTuple_New(3);
    if (unlikely(cpy_r_r75 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6280 = cpy_r_r73.f0;
    PyTuple_SET_ITEM(cpy_r_r75, 0, __tmp6280);
    PyObject *__tmp6281 = cpy_r_r73.f1;
    PyTuple_SET_ITEM(cpy_r_r75, 1, __tmp6281);
    PyObject *__tmp6282 = cpy_r_r73.f2;
    PyTuple_SET_ITEM(cpy_r_r75, 2, __tmp6282);
    cpy_r_r76 = PySequence_Contains(cpy_r_r75, cpy_r_r72);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r72);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 488, CPyStatic_semanal_typeddict___globals);
        goto CPyL85;
    }
    cpy_r_r78 = cpy_r_r76;
    if (!cpy_r_r78) goto CPyL46;
    cpy_r_r79 = CPyStatics[5283]; /* ('Inline TypedDict types not supported; use assignment '
                                     'to define TypedDict') */
    if (likely(Py_TYPE(cpy_r_field_type_expr) == CPyType_nodes___CallExpr))
        cpy_r_r80 = cpy_r_field_type_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 492, CPyStatic_semanal_typeddict___globals, "mypy.nodes.CallExpr", cpy_r_field_type_expr);
        goto CPyL52;
    }
    cpy_r_r81 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail_typeddict_arg(cpy_r_self, cpy_r_r79, cpy_r_r80);
    CPy_DecRef(cpy_r_r80);
    if (unlikely(cpy_r_r81.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 490, CPyStatic_semanal_typeddict___globals);
        goto CPyL52;
    } else
        goto CPyL88;
CPyL46: ;
    cpy_r_r82 = CPyStatics[5217]; /* 'Invalid field type' */
    cpy_r_r83 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail_typeddict_arg(cpy_r_self, cpy_r_r82, cpy_r_field_type_expr);
    CPy_DecRef(cpy_r_field_type_expr);
    if (unlikely(cpy_r_r83.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 495, CPyStatic_semanal_typeddict___globals);
        goto CPyL52;
    } else
        goto CPyL89;
CPyL47: ;
    cpy_r_r84 = PyList_New(0);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 496, CPyStatic_semanal_typeddict___globals);
        goto CPyL52;
    }
    cpy_r_r85 = PyList_New(0);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 496, CPyStatic_semanal_typeddict___globals);
        goto CPyL90;
    }
    cpy_r_r86.f0 = cpy_r_r84;
    cpy_r_r86.f1 = cpy_r_r85;
    cpy_r_r86.f2 = 0;
    CPy_INCREF(cpy_r_r86.f0);
    CPy_INCREF(cpy_r_r86.f1);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_r85);
    cpy_r_r87 = PyTuple_New(3);
    if (unlikely(cpy_r_r87 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6283 = cpy_r_r86.f0;
    PyTuple_SET_ITEM(cpy_r_r87, 0, __tmp6283);
    PyObject *__tmp6284 = cpy_r_r86.f1;
    PyTuple_SET_ITEM(cpy_r_r87, 1, __tmp6284);
    PyObject *__tmp6285 = cpy_r_r86.f2 ? Py_True : Py_False;
    CPy_INCREF(__tmp6285);
    PyTuple_SET_ITEM(cpy_r_r87, 2, __tmp6285);
    CPy_RestoreExcInfo(cpy_r_r46);
    CPy_DecRef(cpy_r_r46.f0);
    CPy_DecRef(cpy_r_r46.f1);
    CPy_DecRef(cpy_r_r46.f2);
    return cpy_r_r87;
CPyL50: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL52;
    } else
        goto CPyL91;
CPyL51: ;
    CPy_Unreachable();
CPyL52: ;
    CPy_RestoreExcInfo(cpy_r_r46);
    CPy_DecRef(cpy_r_r46.f0);
    CPy_DecRef(cpy_r_r46.f1);
    CPy_DecRef(cpy_r_r46.f2);
    cpy_r_r88 = CPy_KeepPropagating();
    if (!cpy_r_r88) goto CPyL65;
    CPy_Unreachable();
CPyL54: ;
    cpy_r_r89 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r89);
    cpy_r_r90 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_options;
    cpy_r_r91 = ((mypy___options___OptionsObject *)cpy_r_r90)->_disable_recursive_aliases;
    cpy_r_r92 = cpy_r_r91 ^ 1;
    if (cpy_r_r92) goto CPyL56;
    cpy_r_r93 = cpy_r_r92;
    goto CPyL58;
CPyL56: ;
    cpy_r_r94 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r94);
    cpy_r_r95 = CPY_GET_METHOD_TRAIT(cpy_r_r94, CPyType_semanal_shared___SemanticAnalyzerInterface, 28, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *))(cpy_r_r94); /* is_func_scope */
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 501, CPyStatic_semanal_typeddict___globals);
        goto CPyL92;
    }
    cpy_r_r96 = cpy_r_r95 ^ 1;
    cpy_r_r93 = cpy_r_r96;
CPyL58: ;
    cpy_r_r97 = CPyStatics[5271]; /* 'TypedDict item type' */
    cpy_r_r98 = NULL;
    cpy_r_r99 = 2;
    cpy_r_r100 = 2;
    cpy_r_r101 = 2;
    cpy_r_r102 = CPY_GET_METHOD_TRAIT(cpy_r_r89, CPyType_semanal_shared___SemanticAnalyzerInterface, 4, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *, char, char, char, char, char, PyObject *))(cpy_r_r89, cpy_r_type, cpy_r_r98, cpy_r_r99, cpy_r_r100, 1, cpy_r_r93, cpy_r_r101, cpy_r_r97); /* anal_type */
    CPy_DECREF(cpy_r_type);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 497, CPyStatic_semanal_typeddict___globals);
        goto CPyL69;
    }
    cpy_r_analyzed = cpy_r_r102;
    cpy_r_r103 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r104 = cpy_r_analyzed == cpy_r_r103;
    if (cpy_r_r104) {
        goto CPyL93;
    } else
        goto CPyL61;
CPyL60: ;
    cpy_r_r105 = Py_None;
    CPy_INCREF(cpy_r_r105);
    return cpy_r_r105;
CPyL61: ;
    if (likely(cpy_r_analyzed != Py_None))
        cpy_r_r106 = cpy_r_analyzed;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 506, CPyStatic_semanal_typeddict___globals, "mypy.types.Type", cpy_r_analyzed);
        goto CPyL69;
    }
    cpy_r_r107 = PyList_Append(cpy_r_types, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 506, CPyStatic_semanal_typeddict___globals);
        goto CPyL69;
    }
    cpy_r_r109 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r109;
    goto CPyL4;
CPyL64: ;
    cpy_r_r110.f0 = cpy_r_items;
    cpy_r_r110.f1 = cpy_r_types;
    cpy_r_r110.f2 = 1;
    CPy_INCREF(cpy_r_r110.f0);
    CPy_INCREF(cpy_r_r110.f1);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    cpy_r_r111 = PyTuple_New(3);
    if (unlikely(cpy_r_r111 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6286 = cpy_r_r110.f0;
    PyTuple_SET_ITEM(cpy_r_r111, 0, __tmp6286);
    PyObject *__tmp6287 = cpy_r_r110.f1;
    PyTuple_SET_ITEM(cpy_r_r111, 1, __tmp6287);
    PyObject *__tmp6288 = cpy_r_r110.f2 ? Py_True : Py_False;
    CPy_INCREF(__tmp6288);
    PyTuple_SET_ITEM(cpy_r_r111, 2, __tmp6288);
    return cpy_r_r111;
CPyL65: ;
    cpy_r_r112 = NULL;
    return cpy_r_r112;
CPyL66: ;
    CPy_DecRef(cpy_r_seen_keys);
    goto CPyL65;
CPyL67: ;
    CPy_DecRef(cpy_r_seen_keys);
    CPy_DecRef(cpy_r_items);
    goto CPyL65;
CPyL68: ;
    CPy_DECREF(cpy_r_seen_keys);
    goto CPyL64;
CPyL69: ;
    CPy_DecRef(cpy_r_seen_keys);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    goto CPyL65;
CPyL70: ;
    CPy_DECREF(cpy_r_seen_keys);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    goto CPyL15;
CPyL71: ;
    CPy_DecRef(cpy_r_seen_keys);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_field_name_expr);
    CPy_DecRef(cpy_r_field_type_expr);
    goto CPyL65;
CPyL72: ;
    CPy_DecRef(cpy_r_seen_keys);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_field_name_expr);
    CPy_DecRef(cpy_r_field_type_expr);
    CPy_DecRef(cpy_r_key);
    goto CPyL65;
CPyL73: ;
    CPy_DECREF(cpy_r_field_name_expr);
    goto CPyL14;
CPyL74: ;
    CPy_DecRef(cpy_r_seen_keys);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_field_type_expr);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r25);
    goto CPyL65;
CPyL75: ;
    CPy_DecRef(cpy_r_seen_keys);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_field_type_expr);
    CPy_DecRef(cpy_r_key);
    goto CPyL65;
CPyL76: ;
    CPy_DecRef(cpy_r_seen_keys);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_field_type_expr);
    goto CPyL65;
CPyL77: ;
    CPy_DECREF(cpy_r_field_type_expr);
    goto CPyL16;
CPyL78: ;
    CPy_DECREF(cpy_r_field_name_expr);
    goto CPyL18;
CPyL79: ;
    CPy_DECREF(cpy_r_r36.f0);
    CPy_DECREF(cpy_r_r36.f1);
    CPy_DECREF(cpy_r_r36.f2);
    CPy_DECREF(cpy_r_r36.f4);
    goto CPyL20;
CPyL80: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL65;
CPyL81: ;
    CPy_DecRef(cpy_r_seen_keys);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r41);
    goto CPyL26;
CPyL82: ;
    CPy_DecRef(cpy_r_seen_keys);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    goto CPyL26;
CPyL83: ;
    CPy_DECREF(cpy_r_field_type_expr);
    goto CPyL25;
CPyL84: ;
    CPy_DecRef(cpy_r_field_type_expr);
    goto CPyL50;
CPyL85: ;
    CPy_DecRef(cpy_r_field_type_expr);
    goto CPyL52;
CPyL86: ;
    CPy_DecRef(cpy_r_field_type_expr);
    CPy_DecRef(cpy_r_r72);
    goto CPyL40;
CPyL87: ;
    CPy_DecRef(cpy_r_r46.f0);
    CPy_DecRef(cpy_r_r46.f1);
    CPy_DecRef(cpy_r_r46.f2);
    goto CPyL41;
CPyL88: ;
    CPy_DecRef(cpy_r_r81.f0);
    CPy_DecRef(cpy_r_r81.f1);
    CPy_DecRef(cpy_r_r81.f2);
    CPy_DecRef(cpy_r_r81.f4);
    goto CPyL47;
CPyL89: ;
    CPy_DecRef(cpy_r_r83.f0);
    CPy_DecRef(cpy_r_r83.f1);
    CPy_DecRef(cpy_r_r83.f2);
    CPy_DecRef(cpy_r_r83.f4);
    goto CPyL47;
CPyL90: ;
    CPy_DecRef(cpy_r_r84);
    goto CPyL52;
CPyL91: ;
    CPy_DecRef(cpy_r_r46.f0);
    CPy_DecRef(cpy_r_r46.f1);
    CPy_DecRef(cpy_r_r46.f2);
    goto CPyL51;
CPyL92: ;
    CPy_DecRef(cpy_r_seen_keys);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_r89);
    goto CPyL65;
CPyL93: ;
    CPy_DECREF(cpy_r_seen_keys);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_analyzed);
    goto CPyL60;
}

PyObject *CPyPy_semanal_typeddict___TypedDictAnalyzer___parse_typeddict_fields_with_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"dict_items", "context", 0};
    static CPyArg_Parser parser = {"OO:parse_typeddict_fields_with_types", kwlist, 0};
    PyObject *obj_dict_items;
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_dict_items, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeddict___TypedDictAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeddict.TypedDictAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_dict_items;
    if (likely(PyList_Check(obj_dict_items)))
        arg_dict_items = obj_dict_items;
    else {
        CPy_TypeError("list", obj_dict_items); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_typeddict___TypedDictAnalyzer___parse_typeddict_fields_with_types(arg_self, arg_dict_items, arg_context);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeddict.py", "parse_typeddict_fields_with_types", 459, CPyStatic_semanal_typeddict___globals);
    return NULL;
}

tuple_T6OOOCOC CPyDef_semanal_typeddict___TypedDictAnalyzer___fail_typeddict_arg(PyObject *cpy_r_self, PyObject *cpy_r_message, PyObject *cpy_r_context) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T6OOOCOC cpy_r_r6;
    tuple_T6OOOCOC cpy_r_r7;
    cpy_r_r0 = NULL;
    cpy_r_r1 = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(cpy_r_self, cpy_r_message, cpy_r_context, cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "fail_typeddict_arg", 512, CPyStatic_semanal_typeddict___globals);
        goto CPyL5;
    }
    cpy_r_r2 = CPyStatics[163]; /* '' */
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "fail_typeddict_arg", 513, CPyStatic_semanal_typeddict___globals);
        goto CPyL5;
    }
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "fail_typeddict_arg", 513, CPyStatic_semanal_typeddict___globals);
        goto CPyL6;
    }
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "fail_typeddict_arg", 513, CPyStatic_semanal_typeddict___globals);
        goto CPyL7;
    }
    cpy_r_r6.f0 = cpy_r_r2;
    cpy_r_r6.f1 = cpy_r_r3;
    cpy_r_r6.f2 = cpy_r_r4;
    cpy_r_r6.f3 = 1;
    cpy_r_r6.f4 = cpy_r_r5;
    cpy_r_r6.f5 = 0;
    CPy_INCREF(cpy_r_r6.f0);
    CPy_INCREF(cpy_r_r6.f1);
    CPy_INCREF(cpy_r_r6.f2);
    CPy_INCREF(cpy_r_r6.f4);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    return cpy_r_r6;
CPyL5: ;
    tuple_T6OOOCOC __tmp6289 = { NULL, NULL, NULL, 2, NULL, 2 };
    cpy_r_r7 = __tmp6289;
    return cpy_r_r7;
CPyL6: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL5;
}

PyObject *CPyPy_semanal_typeddict___TypedDictAnalyzer___fail_typeddict_arg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"message", "context", 0};
    static CPyArg_Parser parser = {"OO:fail_typeddict_arg", kwlist, 0};
    PyObject *obj_message;
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_message, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeddict___TypedDictAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeddict.TypedDictAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_message;
    if (likely(PyUnicode_Check(obj_message)))
        arg_message = obj_message;
    else {
        CPy_TypeError("str", obj_message); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    tuple_T6OOOCOC retval = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail_typeddict_arg(arg_self, arg_message, arg_context);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(6);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6290 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp6290);
    PyObject *__tmp6291 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp6291);
    PyObject *__tmp6292 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp6292);
    PyObject *__tmp6293 = retval.f3 ? Py_True : Py_False;
    CPy_INCREF(__tmp6293);
    PyTuple_SET_ITEM(retbox, 3, __tmp6293);
    PyObject *__tmp6294 = retval.f4;
    PyTuple_SET_ITEM(retbox, 4, __tmp6294);
    PyObject *__tmp6295 = retval.f5 ? Py_True : Py_False;
    CPy_INCREF(__tmp6295);
    PyTuple_SET_ITEM(retbox, 5, __tmp6295);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeddict.py", "fail_typeddict_arg", 509, CPyStatic_semanal_typeddict___globals);
    return NULL;
}

PyObject *CPyDef_semanal_typeddict___TypedDictAnalyzer___build_typeddict_typeinfo(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_items, PyObject *cpy_r_types, PyObject *cpy_r_required_keys, CPyTagged cpy_r_line, PyObject *cpy_r_existing_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_fallback;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_typeddict_type;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    cpy_r_r0 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[2558]; /* 'typing._TypedDict' */
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 526, CPyStatic_semanal_typeddict___globals);
        goto CPyL42;
    }
    cpy_r_r3 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_semanal_shared___SemanticAnalyzerInterface, 2, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r0, cpy_r_r1, cpy_r_r2); /* named_type_or_none */
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 526, CPyStatic_semanal_typeddict___globals);
        goto CPyL41;
    }
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL43;
    cpy_r_r6 = cpy_r_r3;
    goto CPyL12;
CPyL4: ;
    cpy_r_r7 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyStatics[5284]; /* 'typing_extensions._TypedDict' */
    cpy_r_r9 = PyList_New(0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 527, CPyStatic_semanal_typeddict___globals);
        goto CPyL44;
    }
    cpy_r_r10 = CPY_GET_METHOD_TRAIT(cpy_r_r7, CPyType_semanal_shared___SemanticAnalyzerInterface, 2, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r7, cpy_r_r8, cpy_r_r9); /* named_type_or_none */
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 527, CPyStatic_semanal_typeddict___globals);
        goto CPyL41;
    }
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_r10 != cpy_r_r11;
    if (!cpy_r_r12) goto CPyL45;
    cpy_r_r13 = cpy_r_r10;
    goto CPyL11;
CPyL8: ;
    cpy_r_r14 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyStatics[5285]; /* 'mypy_extensions._TypedDict' */
    cpy_r_r16 = PyList_New(0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 528, CPyStatic_semanal_typeddict___globals);
        goto CPyL46;
    }
    cpy_r_r17 = CPY_GET_METHOD_TRAIT(cpy_r_r14, CPyType_semanal_shared___SemanticAnalyzerInterface, 2, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r14, cpy_r_r15, cpy_r_r16); /* named_type_or_none */
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 528, CPyStatic_semanal_typeddict___globals);
        goto CPyL41;
    }
    cpy_r_r13 = cpy_r_r17;
CPyL11: ;
    cpy_r_r6 = cpy_r_r13;
CPyL12: ;
    cpy_r_fallback = cpy_r_r6;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_fallback != cpy_r_r18;
    if (cpy_r_r19) {
        goto CPyL15;
    } else
        goto CPyL47;
CPyL13: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 530, CPyStatic_semanal_typeddict___globals);
        goto CPyL41;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r21 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r22 = cpy_r_existing_info != cpy_r_r21;
    if (!cpy_r_r22) goto CPyL21;
    CPy_INCREF(cpy_r_existing_info);
    if (likely(cpy_r_existing_info != Py_None))
        cpy_r_r23 = cpy_r_existing_info;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 522, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypeInfo", cpy_r_existing_info);
        goto CPyL48;
    }
    cpy_r_r24 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 522, CPyStatic_semanal_typeddict___globals);
        goto CPyL48;
    }
    if (!cpy_r_r24) goto CPyL21;
    CPy_INCREF(cpy_r_existing_info);
    if (likely(cpy_r_existing_info != Py_None))
        cpy_r_r25 = cpy_r_existing_info;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 531, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypeInfo", cpy_r_existing_info);
        goto CPyL48;
    }
    cpy_r_r26 = cpy_r_r25;
    goto CPyL24;
CPyL21: ;
    cpy_r_r27 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r27);
    CPy_INCREF(cpy_r_fallback);
    if (likely(cpy_r_fallback != Py_None))
        cpy_r_r28 = cpy_r_fallback;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 531, CPyStatic_semanal_typeddict___globals, "mypy.types.Instance", cpy_r_fallback);
        goto CPyL49;
    }
    cpy_r_r29 = CPY_GET_METHOD_TRAIT(cpy_r_r27, CPyType_semanal_shared___SemanticAnalyzerInterface, 6, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *, CPyTagged))(cpy_r_r27, cpy_r_name, cpy_r_r28, cpy_r_line); /* basic_new_typeinfo */
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 531, CPyStatic_semanal_typeddict___globals);
        goto CPyL48;
    }
    cpy_r_r26 = cpy_r_r29;
CPyL24: ;
    cpy_r_info = cpy_r_r26;
    cpy_r_r30 = CPyModule_builtins;
    cpy_r_r31 = CPyStatics[794]; /* 'zip' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 532, CPyStatic_semanal_typeddict___globals);
        goto CPyL50;
    }
    PyObject *cpy_r_r33[2] = {cpy_r_items, cpy_r_types};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = _PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 2, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 532, CPyStatic_semanal_typeddict___globals);
        goto CPyL50;
    }
    cpy_r_r36 = CPyDict_FromAny(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 532, CPyStatic_semanal_typeddict___globals);
        goto CPyL50;
    }
    if (likely(cpy_r_fallback != Py_None))
        cpy_r_r37 = cpy_r_fallback;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 532, CPyStatic_semanal_typeddict___globals, "mypy.types.Instance", cpy_r_fallback);
        goto CPyL51;
    }
    cpy_r_r38 = CPY_INT_TAG;
    cpy_r_r39 = CPY_INT_TAG;
    cpy_r_r40 = CPyDef_types___TypedDictType(cpy_r_r36, cpy_r_required_keys, cpy_r_r37, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 532, CPyStatic_semanal_typeddict___globals);
        goto CPyL52;
    }
    cpy_r_typeddict_type = cpy_r_r40;
    cpy_r_r41 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_special_alias;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", "TypeInfo", "special_alias", 533, CPyStatic_semanal_typeddict___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r41);
CPyL30: ;
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_r41 != cpy_r_r42;
    CPy_DECREF(cpy_r_r41);
    if (!cpy_r_r43) goto CPyL39;
    cpy_r_r44 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_special_alias;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", "TypeInfo", "special_alias", 533, CPyStatic_semanal_typeddict___globals);
        goto CPyL53;
    }
CPyL32: ;
    if (likely(cpy_r_r44 != Py_None))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 533, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypeAlias", cpy_r_r44);
        goto CPyL53;
    }
    cpy_r_r46 = ((mypy___nodes___TypeAliasObject *)cpy_r_r45)->_target;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = CPyDef_semanal_shared___has_placeholder(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 533, CPyStatic_semanal_typeddict___globals);
        goto CPyL53;
    }
    if (!cpy_r_r47) goto CPyL39;
    cpy_r_r48 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[5286]; /* 'TypedDict item' */
    cpy_r_r50 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_typeddict_type;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", "TypeInfo", "typeddict_type", 535, CPyStatic_semanal_typeddict___globals);
        goto CPyL54;
    }
    CPy_INCREF(cpy_r_r50);
CPyL36: ;
    cpy_r_r51 = PyObject_RichCompare(cpy_r_typeddict_type, cpy_r_r50, 3);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 535, CPyStatic_semanal_typeddict___globals);
        goto CPyL54;
    }
    if (unlikely(!PyBool_Check(cpy_r_r51))) {
        CPy_TypeError("bool", cpy_r_r51); cpy_r_r52 = 2;
    } else
        cpy_r_r52 = cpy_r_r51 == Py_True;
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 535, CPyStatic_semanal_typeddict___globals);
        goto CPyL54;
    }
    cpy_r_r53 = Py_None;
    cpy_r_r54 = CPY_GET_METHOD_TRAIT(cpy_r_r48, CPyType_semanal_shared___SemanticAnalyzerInterface, 15, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *, char))(cpy_r_r48, cpy_r_r53, cpy_r_r49, cpy_r_info, cpy_r_r52); /* process_placeholder */
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 534, CPyStatic_semanal_typeddict___globals);
        goto CPyL53;
    }
CPyL39: ;
    cpy_r_r55 = CPyDef_nodes___TypeInfo___update_typeddict_type(cpy_r_info, cpy_r_typeddict_type);
    CPy_DECREF(cpy_r_typeddict_type);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 537, CPyStatic_semanal_typeddict___globals);
        goto CPyL52;
    }
    return cpy_r_info;
CPyL41: ;
    cpy_r_r56 = NULL;
    return cpy_r_r56;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL41;
CPyL43: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL4;
CPyL44: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL41;
CPyL45: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL8;
CPyL46: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL41;
CPyL47: ;
    CPy_DECREF(cpy_r_fallback);
    goto CPyL13;
CPyL48: ;
    CPy_DecRef(cpy_r_fallback);
    goto CPyL41;
CPyL49: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_r27);
    goto CPyL41;
CPyL50: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_info);
    goto CPyL41;
CPyL51: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r36);
    goto CPyL41;
CPyL52: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL41;
CPyL53: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_typeddict_type);
    goto CPyL41;
CPyL54: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_typeddict_type);
    CPy_DecRef(cpy_r_r48);
    goto CPyL41;
}

PyObject *CPyPy_semanal_typeddict___TypedDictAnalyzer___build_typeddict_typeinfo(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "items", "types", "required_keys", "line", "existing_info", 0};
    static CPyArg_Parser parser = {"OOOOOO:build_typeddict_typeinfo", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_items;
    PyObject *obj_types;
    PyObject *obj_required_keys;
    PyObject *obj_line;
    PyObject *obj_existing_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_items, &obj_types, &obj_required_keys, &obj_line, &obj_existing_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeddict___TypedDictAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeddict.TypedDictAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_items;
    if (likely(PyList_Check(obj_items)))
        arg_items = obj_items;
    else {
        CPy_TypeError("list", obj_items); 
        goto fail;
    }
    PyObject *arg_types;
    if (likely(PyList_Check(obj_types)))
        arg_types = obj_types;
    else {
        CPy_TypeError("list", obj_types); 
        goto fail;
    }
    PyObject *arg_required_keys;
    if (likely(PySet_Check(obj_required_keys)))
        arg_required_keys = obj_required_keys;
    else {
        CPy_TypeError("set", obj_required_keys); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *arg_existing_info;
    if ((Py_TYPE(obj_existing_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_existing_info) == CPyType_nodes___TypeInfo))
        arg_existing_info = obj_existing_info;
    else {
        arg_existing_info = NULL;
    }
    if (arg_existing_info != NULL) goto __LL6296;
    if (obj_existing_info == Py_None)
        arg_existing_info = obj_existing_info;
    else {
        arg_existing_info = NULL;
    }
    if (arg_existing_info != NULL) goto __LL6296;
    CPy_TypeError("mypy.nodes.TypeInfo or None", obj_existing_info); 
    goto fail;
__LL6296: ;
    PyObject *retval = CPyDef_semanal_typeddict___TypedDictAnalyzer___build_typeddict_typeinfo(arg_self, arg_name, arg_items, arg_types, arg_required_keys, arg_line, arg_existing_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeddict.py", "build_typeddict_typeinfo", 515, CPyStatic_semanal_typeddict___globals);
    return NULL;
}

char CPyDef_semanal_typeddict___TypedDictAnalyzer___is_typeddict(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
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
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    cpy_r_r0 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    if (cpy_r_r9) goto CPyL8;
    cpy_r_r14 = cpy_r_r9;
    goto CPyL19;
CPyL8: ;
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r15 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "is_typeddict", 545, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL20;
    }
    cpy_r_r16 = ((mypy___nodes___RefExprObject *)cpy_r_r15)->_node;
    cpy_r_r17 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_r16)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (!cpy_r_r20) goto CPyL11;
    cpy_r_r21 = cpy_r_r20;
    goto CPyL12;
CPyL11: ;
    cpy_r_r22 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r23 = (CPyPtr)&((PyObject *)cpy_r_r16)->ob_type;
    cpy_r_r24 = *(PyObject * *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 == cpy_r_r22;
    cpy_r_r21 = cpy_r_r25;
CPyL12: ;
    if (cpy_r_r21) goto CPyL14;
    cpy_r_r26 = cpy_r_r21;
    goto CPyL18;
CPyL14: ;
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r27 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "is_typeddict", 546, CPyStatic_semanal_typeddict___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL20;
    }
    cpy_r_r28 = ((mypy___nodes___RefExprObject *)cpy_r_r27)->_node;
    if (likely((Py_TYPE(cpy_r_r28) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r28) == CPyType_nodes___TypeInfo)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeddict.py", "is_typeddict", 546, CPyStatic_semanal_typeddict___globals, "mypy.nodes.TypeInfo", cpy_r_r28);
        goto CPyL20;
    }
    cpy_r_r30 = ((mypy___nodes___TypeInfoObject *)cpy_r_r29)->_typeddict_type;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeddict.py", "is_typeddict", "TypeInfo", "typeddict_type", 546, CPyStatic_semanal_typeddict___globals);
        goto CPyL20;
    }
CPyL17: ;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_r30 != cpy_r_r31;
    cpy_r_r26 = cpy_r_r32;
CPyL18: ;
    cpy_r_r14 = cpy_r_r26;
CPyL19: ;
    return cpy_r_r14;
CPyL20: ;
    cpy_r_r33 = 2;
    return cpy_r_r33;
}

PyObject *CPyPy_semanal_typeddict___TypedDictAnalyzer___is_typeddict(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:is_typeddict", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeddict___TypedDictAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeddict.TypedDictAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeddict___TypedDictAnalyzer___is_typeddict(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeddict.py", "is_typeddict", 542, CPyStatic_semanal_typeddict___globals);
    return NULL;
}

char CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(PyObject *cpy_r_self, PyObject *cpy_r_msg, PyObject *cpy_r_ctx, PyObject *cpy_r_code) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    if (cpy_r_code != NULL) goto CPyL5;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_code = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 2;
    cpy_r_r3 = 2;
    cpy_r_r4 = CPY_GET_METHOD_TRAIT(cpy_r_r1, CPyType_semanal_shared___SemanticAnalyzerInterface, 19, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r1, cpy_r_msg, cpy_r_ctx, cpy_r_r2, cpy_r_r3, cpy_r_code); /* fail */
    CPy_DECREF(cpy_r_code);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "fail", 550, CPyStatic_semanal_typeddict___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
CPyL5: ;
    CPy_INCREF(cpy_r_code);
    goto CPyL2;
}

PyObject *CPyPy_semanal_typeddict___TypedDictAnalyzer___fail(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "ctx", "code", 0};
    static CPyArg_Parser parser = {"OO|$O:fail", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_ctx;
    PyObject *obj_code = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_msg, &obj_ctx, &obj_code)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeddict___TypedDictAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeddict.TypedDictAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    PyObject *arg_code;
    if (obj_code == NULL) {
        arg_code = NULL;
        goto __LL6297;
    }
    if (PyObject_TypeCheck(obj_code, CPyType_errorcodes___ErrorCode))
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL6297;
    if (obj_code == Py_None)
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL6297;
    CPy_TypeError("mypy.errorcodes.ErrorCode or None", obj_code); 
    goto fail;
__LL6297: ;
    char retval = CPyDef_semanal_typeddict___TypedDictAnalyzer___fail(arg_self, arg_msg, arg_ctx, arg_code);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeddict.py", "fail", 549, CPyStatic_semanal_typeddict___globals);
    return NULL;
}

char CPyDef_semanal_typeddict___TypedDictAnalyzer___note(PyObject *cpy_r_self, PyObject *cpy_r_msg, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___semanal_typeddict___TypedDictAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_semanal_shared___SemanticAnalyzerInterface, 20, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *))(cpy_r_r0, cpy_r_msg, cpy_r_ctx, cpy_r_r1); /* note */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "note", 553, CPyStatic_semanal_typeddict___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_typeddict___TypedDictAnalyzer___note(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "ctx", 0};
    static CPyArg_Parser parser = {"OO:note", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_msg, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeddict___TypedDictAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeddict.TypedDictAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeddict___TypedDictAnalyzer___note(arg_self, arg_msg, arg_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeddict.py", "note", 552, CPyStatic_semanal_typeddict___globals);
    return NULL;
}

char CPyDef_semanal_typeddict_____top_level__(void) {
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
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
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
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", -1, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_semanal_typeddict___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 3, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9301]; /* ('Final',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_semanal_typeddict___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 5, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9513]; /* ('errorcodes', 'message_registry') */
    cpy_r_r14 = CPyStatics[9514]; /* ('codes', 'message_registry') */
    cpy_r_r15 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r16 = CPyStatic_semanal_typeddict___globals;
    cpy_r_r17 = CPyImport_ImportFromMany(cpy_r_r15, cpy_r_r13, cpy_r_r14, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 7, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    CPyModule_mypy = cpy_r_r17;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r18 = CPyStatics[9515]; /* ('ErrorCode',) */
    cpy_r_r19 = CPyStatics[924]; /* 'mypy.errorcodes' */
    cpy_r_r20 = CPyStatic_semanal_typeddict___globals;
    cpy_r_r21 = CPyImport_ImportFromMany(cpy_r_r19, cpy_r_r18, cpy_r_r18, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 8, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    CPyModule_mypy___errorcodes = cpy_r_r21;
    CPy_INCREF(CPyModule_mypy___errorcodes);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r22 = CPyStatics[9494]; /* ('expand_type',) */
    cpy_r_r23 = CPyStatics[31]; /* 'mypy.expandtype' */
    cpy_r_r24 = CPyStatic_semanal_typeddict___globals;
    cpy_r_r25 = CPyImport_ImportFromMany(cpy_r_r23, cpy_r_r22, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 9, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    CPyModule_mypy___expandtype = cpy_r_r25;
    CPy_INCREF(CPyModule_mypy___expandtype);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r26 = CPyStatics[9586]; /* ('TypeTranslationError', 'expr_to_unanalyzed_type') */
    cpy_r_r27 = CPyStatics[2338]; /* 'mypy.exprtotype' */
    cpy_r_r28 = CPyStatic_semanal_typeddict___globals;
    cpy_r_r29 = CPyImport_ImportFromMany(cpy_r_r27, cpy_r_r26, cpy_r_r26, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 10, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    CPyModule_mypy___exprtotype = cpy_r_r29;
    CPy_INCREF(CPyModule_mypy___exprtotype);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r30 = CPyStatics[9135]; /* ('MessageBuilder',) */
    cpy_r_r31 = CPyStatics[530]; /* 'mypy.messages' */
    cpy_r_r32 = CPyStatic_semanal_typeddict___globals;
    cpy_r_r33 = CPyImport_ImportFromMany(cpy_r_r31, cpy_r_r30, cpy_r_r30, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 11, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    CPyModule_mypy___messages = cpy_r_r33;
    CPy_INCREF(CPyModule_mypy___messages);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r34 = CPyStatics[9741]; /* ('ARG_NAMED', 'ARG_POS', 'AssignmentStmt', 'CallExpr',
                                     'ClassDef', 'Context', 'DictExpr', 'EllipsisExpr',
                                     'Expression', 'ExpressionStmt', 'IndexExpr', 'NameExpr',
                                     'PassStmt', 'RefExpr', 'Statement', 'StrExpr',
                                     'TempNode', 'TupleExpr', 'TypedDictExpr', 'TypeInfo') */
    cpy_r_r35 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r36 = CPyStatic_semanal_typeddict___globals;
    cpy_r_r37 = CPyImport_ImportFromMany(cpy_r_r35, cpy_r_r34, cpy_r_r34, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 12, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    CPyModule_mypy___nodes = cpy_r_r37;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r38 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r39 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r40 = CPyStatic_semanal_typeddict___globals;
    cpy_r_r41 = CPyImport_ImportFromMany(cpy_r_r39, cpy_r_r38, cpy_r_r38, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 34, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    CPyModule_mypy___options = cpy_r_r41;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r42 = CPyStatics[9742]; /* ('SemanticAnalyzerInterface', 'has_placeholder',
                                     'require_bool_literal_argument') */
    cpy_r_r43 = CPyStatics[4478]; /* 'mypy.semanal_shared' */
    cpy_r_r44 = CPyStatic_semanal_typeddict___globals;
    cpy_r_r45 = CPyImport_ImportFromMany(cpy_r_r43, cpy_r_r42, cpy_r_r42, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 35, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    CPyModule_mypy___semanal_shared = cpy_r_r45;
    CPy_INCREF(CPyModule_mypy___semanal_shared);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r46 = CPyStatics[9726]; /* ('check_for_explicit_any',
                                     'has_any_from_unimported_type') */
    cpy_r_r47 = CPyStatics[1035]; /* 'mypy.typeanal' */
    cpy_r_r48 = CPyStatic_semanal_typeddict___globals;
    cpy_r_r49 = CPyImport_ImportFromMany(cpy_r_r47, cpy_r_r46, cpy_r_r46, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 40, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    CPyModule_mypy___typeanal = cpy_r_r49;
    CPy_INCREF(CPyModule_mypy___typeanal);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r50 = CPyStatics[9743]; /* ('TPDICT_NAMES', 'AnyType', 'RequiredType', 'Type',
                                     'TypedDictType', 'TypeOfAny', 'TypeVarLikeType') */
    cpy_r_r51 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r52 = CPyStatic_semanal_typeddict___globals;
    cpy_r_r53 = CPyImport_ImportFromMany(cpy_r_r51, cpy_r_r50, cpy_r_r50, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 41, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    CPyModule_mypy___types = cpy_r_r53;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r54 = CPyStatics[5268]; /* ('Invalid statement in TypedDict definition; expected '
                                     '"field_name: field_type"') */
    cpy_r_r55 = CPyStatic_semanal_typeddict___globals;
    cpy_r_r56 = CPyStatics[5288]; /* 'TPDICT_CLASS_ERROR' */
    cpy_r_r57 = CPyDict_SetItem(cpy_r_r55, cpy_r_r56, cpy_r_r54);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 52, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    cpy_r_r59 = NULL;
    cpy_r_r60 = CPyStatics[5074]; /* 'mypy.semanal_typeddict' */
    cpy_r_r61 = (PyObject *)CPyType_semanal_typeddict___TypedDictAnalyzer_template;
    cpy_r_r62 = CPyType_FromTemplate(cpy_r_r61, cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 56, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    cpy_r_r63 = CPyDef_semanal_typeddict___TypedDictAnalyzer_trait_vtable_setup();
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", -1, CPyStatic_semanal_typeddict___globals);
        goto CPyL23;
    }
    cpy_r_r64 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r65 = CPyStatics[159]; /* 'options' */
    cpy_r_r66 = CPyStatics[4369]; /* 'api' */
    cpy_r_r67 = CPyStatics[1098]; /* 'msg' */
    cpy_r_r68 = PyTuple_Pack(3, cpy_r_r65, cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 56, CPyStatic_semanal_typeddict___globals);
        goto CPyL23;
    }
    cpy_r_r69 = PyObject_SetAttr(cpy_r_r62, cpy_r_r64, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 56, CPyStatic_semanal_typeddict___globals);
        goto CPyL23;
    }
    CPyType_semanal_typeddict___TypedDictAnalyzer = (PyTypeObject *)cpy_r_r62;
    CPy_INCREF(CPyType_semanal_typeddict___TypedDictAnalyzer);
    cpy_r_r71 = CPyStatic_semanal_typeddict___globals;
    cpy_r_r72 = CPyStatics[5073]; /* 'TypedDictAnalyzer' */
    cpy_r_r73 = CPyDict_SetItem(cpy_r_r71, cpy_r_r72, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/semanal_typeddict.py", "<module>", 56, CPyStatic_semanal_typeddict___globals);
        goto CPyL22;
    }
    return 1;
CPyL22: ;
    cpy_r_r75 = 2;
    return cpy_r_r75;
CPyL23: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL22;
}
