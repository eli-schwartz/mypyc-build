#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
semanal_newtype___NewTypeAnalyzer_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *semanal_newtype___NewTypeAnalyzer_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_newtype___NewTypeAnalyzer(PyObject *cpy_r_options, PyObject *cpy_r_api, PyObject *cpy_r_msg);

static PyObject *
semanal_newtype___NewTypeAnalyzer_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_newtype___NewTypeAnalyzer) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = semanal_newtype___NewTypeAnalyzer_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_semanal_newtype___NewTypeAnalyzer_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
semanal_newtype___NewTypeAnalyzer_traverse(mypy___semanal_newtype___NewTypeAnalyzerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_options);
    Py_VISIT(self->_api);
    Py_VISIT(self->_msg);
    return 0;
}

static int
semanal_newtype___NewTypeAnalyzer_clear(mypy___semanal_newtype___NewTypeAnalyzerObject *self)
{
    Py_CLEAR(self->_options);
    Py_CLEAR(self->_api);
    Py_CLEAR(self->_msg);
    return 0;
}

static void
semanal_newtype___NewTypeAnalyzer_dealloc(mypy___semanal_newtype___NewTypeAnalyzerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_newtype___NewTypeAnalyzer_dealloc)
    semanal_newtype___NewTypeAnalyzer_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_newtype___NewTypeAnalyzer_vtable[7];
static bool
CPyDef_semanal_newtype___NewTypeAnalyzer_trait_vtable_setup(void)
{
    CPyVTableItem semanal_newtype___NewTypeAnalyzer_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_semanal_newtype___NewTypeAnalyzer_____init__,
        (CPyVTableItem)CPyDef_semanal_newtype___NewTypeAnalyzer___process_newtype_declaration,
        (CPyVTableItem)CPyDef_semanal_newtype___NewTypeAnalyzer___analyze_newtype_declaration,
        (CPyVTableItem)CPyDef_semanal_newtype___NewTypeAnalyzer___check_newtype_args,
        (CPyVTableItem)CPyDef_semanal_newtype___NewTypeAnalyzer___build_newtype_typeinfo,
        (CPyVTableItem)CPyDef_semanal_newtype___NewTypeAnalyzer___make_argument,
        (CPyVTableItem)CPyDef_semanal_newtype___NewTypeAnalyzer___fail,
    };
    memcpy(semanal_newtype___NewTypeAnalyzer_vtable, semanal_newtype___NewTypeAnalyzer_vtable_scratch, sizeof(semanal_newtype___NewTypeAnalyzer_vtable));
    return 1;
}

static PyObject *
semanal_newtype___NewTypeAnalyzer_get_options(mypy___semanal_newtype___NewTypeAnalyzerObject *self, void *closure);
static int
semanal_newtype___NewTypeAnalyzer_set_options(mypy___semanal_newtype___NewTypeAnalyzerObject *self, PyObject *value, void *closure);
static PyObject *
semanal_newtype___NewTypeAnalyzer_get_api(mypy___semanal_newtype___NewTypeAnalyzerObject *self, void *closure);
static int
semanal_newtype___NewTypeAnalyzer_set_api(mypy___semanal_newtype___NewTypeAnalyzerObject *self, PyObject *value, void *closure);
static PyObject *
semanal_newtype___NewTypeAnalyzer_get_msg(mypy___semanal_newtype___NewTypeAnalyzerObject *self, void *closure);
static int
semanal_newtype___NewTypeAnalyzer_set_msg(mypy___semanal_newtype___NewTypeAnalyzerObject *self, PyObject *value, void *closure);

static PyGetSetDef semanal_newtype___NewTypeAnalyzer_getseters[] = {
    {"options",
     (getter)semanal_newtype___NewTypeAnalyzer_get_options, (setter)semanal_newtype___NewTypeAnalyzer_set_options,
     NULL, NULL},
    {"api",
     (getter)semanal_newtype___NewTypeAnalyzer_get_api, (setter)semanal_newtype___NewTypeAnalyzer_set_api,
     NULL, NULL},
    {"msg",
     (getter)semanal_newtype___NewTypeAnalyzer_get_msg, (setter)semanal_newtype___NewTypeAnalyzer_set_msg,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef semanal_newtype___NewTypeAnalyzer_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_semanal_newtype___NewTypeAnalyzer_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_newtype_declaration",
     (PyCFunction)CPyPy_semanal_newtype___NewTypeAnalyzer___process_newtype_declaration,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"analyze_newtype_declaration",
     (PyCFunction)CPyPy_semanal_newtype___NewTypeAnalyzer___analyze_newtype_declaration,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_newtype_args",
     (PyCFunction)CPyPy_semanal_newtype___NewTypeAnalyzer___check_newtype_args,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"build_newtype_typeinfo",
     (PyCFunction)CPyPy_semanal_newtype___NewTypeAnalyzer___build_newtype_typeinfo,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"make_argument",
     (PyCFunction)CPyPy_semanal_newtype___NewTypeAnalyzer___make_argument,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fail",
     (PyCFunction)CPyPy_semanal_newtype___NewTypeAnalyzer___fail,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_newtype___NewTypeAnalyzer_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "NewTypeAnalyzer",
    .tp_new = semanal_newtype___NewTypeAnalyzer_new,
    .tp_dealloc = (destructor)semanal_newtype___NewTypeAnalyzer_dealloc,
    .tp_traverse = (traverseproc)semanal_newtype___NewTypeAnalyzer_traverse,
    .tp_clear = (inquiry)semanal_newtype___NewTypeAnalyzer_clear,
    .tp_getset = semanal_newtype___NewTypeAnalyzer_getseters,
    .tp_methods = semanal_newtype___NewTypeAnalyzer_methods,
    .tp_init = semanal_newtype___NewTypeAnalyzer_init,
    .tp_basicsize = sizeof(mypy___semanal_newtype___NewTypeAnalyzerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_semanal_newtype___NewTypeAnalyzer_template = &CPyType_semanal_newtype___NewTypeAnalyzer_template_;

static PyObject *
semanal_newtype___NewTypeAnalyzer_setup(PyTypeObject *type)
{
    mypy___semanal_newtype___NewTypeAnalyzerObject *self;
    self = (mypy___semanal_newtype___NewTypeAnalyzerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_newtype___NewTypeAnalyzer_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_newtype___NewTypeAnalyzer(PyObject *cpy_r_options, PyObject *cpy_r_api, PyObject *cpy_r_msg)
{
    PyObject *self = semanal_newtype___NewTypeAnalyzer_setup(CPyType_semanal_newtype___NewTypeAnalyzer);
    if (self == NULL)
        return NULL;
    char res = CPyDef_semanal_newtype___NewTypeAnalyzer_____init__(self, cpy_r_options, cpy_r_api, cpy_r_msg);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
semanal_newtype___NewTypeAnalyzer_get_options(mypy___semanal_newtype___NewTypeAnalyzerObject *self, void *closure)
{
    if (unlikely(self->_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options' of 'NewTypeAnalyzer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options);
    PyObject *retval = self->_options;
    return retval;
}

static int
semanal_newtype___NewTypeAnalyzer_set_options(mypy___semanal_newtype___NewTypeAnalyzerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NewTypeAnalyzer' object attribute 'options' cannot be deleted");
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
semanal_newtype___NewTypeAnalyzer_get_api(mypy___semanal_newtype___NewTypeAnalyzerObject *self, void *closure)
{
    if (unlikely(self->_api == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'api' of 'NewTypeAnalyzer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_api);
    PyObject *retval = self->_api;
    return retval;
}

static int
semanal_newtype___NewTypeAnalyzer_set_api(mypy___semanal_newtype___NewTypeAnalyzerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NewTypeAnalyzer' object attribute 'api' cannot be deleted");
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
semanal_newtype___NewTypeAnalyzer_get_msg(mypy___semanal_newtype___NewTypeAnalyzerObject *self, void *closure)
{
    if (unlikely(self->_msg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'msg' of 'NewTypeAnalyzer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_msg);
    PyObject *retval = self->_msg;
    return retval;
}

static int
semanal_newtype___NewTypeAnalyzer_set_msg(mypy___semanal_newtype___NewTypeAnalyzerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NewTypeAnalyzer' object attribute 'msg' cannot be deleted");
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
static PyMethodDef semanal_newtypemodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef semanal_newtypemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.semanal_newtype",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    semanal_newtypemodule_methods
};

PyObject *CPyInit_mypy___semanal_newtype(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___semanal_newtype_internal) {
        Py_INCREF(CPyModule_mypy___semanal_newtype_internal);
        return CPyModule_mypy___semanal_newtype_internal;
    }
    CPyModule_mypy___semanal_newtype_internal = PyModule_Create(&semanal_newtypemodule);
    if (unlikely(CPyModule_mypy___semanal_newtype_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___semanal_newtype_internal, "__name__");
    CPyStatic_semanal_newtype___globals = PyModule_GetDict(CPyModule_mypy___semanal_newtype_internal);
    if (unlikely(CPyStatic_semanal_newtype___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_semanal_newtype_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___semanal_newtype_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___semanal_newtype_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_semanal_newtype___NewTypeAnalyzer);
    return NULL;
}

char CPyDef_semanal_newtype___NewTypeAnalyzer_____init__(PyObject *cpy_r_self, PyObject *cpy_r_options, PyObject *cpy_r_api, PyObject *cpy_r_msg) {
    CPy_INCREF(cpy_r_options);
    ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_options = cpy_r_options;
    CPy_INCREF(cpy_r_api);
    ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api = cpy_r_api;
    CPy_INCREF(cpy_r_msg);
    ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_msg = cpy_r_msg;
    return 1;
}

PyObject *CPyPy_semanal_newtype___NewTypeAnalyzer_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"options", "api", "msg", 0};
    PyObject *obj_options;
    PyObject *obj_api;
    PyObject *obj_msg;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO", "__init__", kwlist, &obj_options, &obj_api, &obj_msg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_newtype___NewTypeAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_newtype.NewTypeAnalyzer", obj_self); 
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
    char retval = CPyDef_semanal_newtype___NewTypeAnalyzer_____init__(arg_self, arg_options, arg_api, arg_msg);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_newtype.py", "__init__", 47, CPyStatic_semanal_newtype___globals);
    return NULL;
}

char CPyDef_semanal_newtype___NewTypeAnalyzer___process_newtype_declaration(PyObject *cpy_r_self, PyObject *cpy_r_s) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_var_name;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_call;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_fullname;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_placeholder;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    tuple_T2OC cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_old_type;
    char cpy_r_r46;
    char cpy_r_should_defer;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyPtr cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyPtr cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    CPyTagged cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_newtype_class_info;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyPtr cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
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
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_message;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyTagged cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject **cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    CPyTagged cpy_r_r134;
    CPyTagged cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_object_type;
    PyObject *cpy_r_r141;
    CPyTagged cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    CPyPtr cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    char cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    char cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    char cpy_r_r197;
    char cpy_r_r198;
    char cpy_r_r199;
    PyObject *cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    char cpy_r_r208;
    CPyTagged cpy_r_r209;
    char cpy_r_r210;
    char cpy_r_r211;
    cpy_r_r0 = CPyDef_semanal_newtype___NewTypeAnalyzer___analyze_newtype_declaration(cpy_r_self, cpy_r_s);
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 64, CPyStatic_semanal_newtype___globals);
        goto CPyL127;
    }
    cpy_r_r1 = cpy_r_r0.f0;
    CPy_INCREF(cpy_r_r1);
    cpy_r_var_name = cpy_r_r1;
    cpy_r_r2 = cpy_r_r0.f1;
    CPy_INCREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r0.f0);
    CPy_DECREF(cpy_r_r0.f1);
    cpy_r_call = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_var_name == cpy_r_r3;
    if (cpy_r_r4) goto CPyL128;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_call == cpy_r_r5;
    if (cpy_r_r6) {
        goto CPyL128;
    } else
        goto CPyL4;
CPyL3: ;
    return 0;
CPyL4: ;
    CPy_INCREF(cpy_r_var_name);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r7 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 67, CPyStatic_semanal_newtype___globals, "str", cpy_r_var_name);
        goto CPyL129;
    }
    cpy_r_name = cpy_r_r7;
    cpy_r_r8 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPY_GET_METHOD_TRAIT(cpy_r_r8, CPyType_semanal_shared___SemanticAnalyzerInterface, 28, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *))(cpy_r_r8); /* is_func_scope */
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 71, CPyStatic_semanal_newtype___globals);
        goto CPyL130;
    }
    if (!cpy_r_r9) goto CPyL11;
    cpy_r_r10 = CPyStatics[1784]; /* '@' */
    cpy_r_r11 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_line;
    CPyTagged_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyTagged_Str(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 72, CPyStatic_semanal_newtype___globals);
        goto CPyL130;
    }
    cpy_r_r13 = PyUnicode_Concat(cpy_r_r10, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 72, CPyStatic_semanal_newtype___globals);
        goto CPyL130;
    }
    cpy_r_r14 = CPyStr_Append(cpy_r_name, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 72, CPyStatic_semanal_newtype___globals);
        goto CPyL129;
    }
    cpy_r_name = cpy_r_r14;
CPyL11: ;
    cpy_r_r15 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPY_GET_METHOD_TRAIT(cpy_r_r15, CPyType_semanal_shared___SemanticAnalyzerInterface, 13, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r15, cpy_r_name); /* qualified_name */
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 73, CPyStatic_semanal_newtype___globals);
        goto CPyL130;
    }
    cpy_r_fullname = cpy_r_r16;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r17 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 75, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL131;
    }
    cpy_r_r18 = ((mypy___nodes___CallExprObject *)cpy_r_r17)->_analyzed;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_r18 != cpy_r_r19;
    CPy_DECREF(cpy_r_r18);
    if (!cpy_r_r20) goto CPyL22;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r21 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 75, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL131;
    }
    cpy_r_r22 = ((mypy___nodes___CallExprObject *)cpy_r_r21)->_analyzed;
    cpy_r_r23 = (PyObject *)CPyType_nodes___NewTypeExpr;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r22)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (!cpy_r_r26) goto CPyL132;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r27 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 75, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL131;
    }
    cpy_r_r28 = ((mypy___nodes___CallExprObject *)cpy_r_r27)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_nodes___NewTypeExpr))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 75, CPyStatic_semanal_newtype___globals, "mypy.nodes.NewTypeExpr", cpy_r_r28);
        goto CPyL131;
    }
    cpy_r_r30 = ((mypy___nodes___NewTypeExprObject *)cpy_r_r29)->_info;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_r30 != cpy_r_r31;
    if (!cpy_r_r32) goto CPyL133;
    if (likely(cpy_r_r30 != Py_None))
        cpy_r_r33 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 75, CPyStatic_semanal_newtype___globals, "mypy.nodes.TypeInfo", cpy_r_r30);
        goto CPyL131;
    }
    cpy_r_r34 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 75, CPyStatic_semanal_newtype___globals);
        goto CPyL131;
    }
    if (cpy_r_r34) goto CPyL132;
CPyL22: ;
    cpy_r_r35 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_line;
    CPyTagged_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyDef_nodes___PlaceholderNode(cpy_r_fullname, cpy_r_s, cpy_r_r35, 1);
    CPy_DECREF(cpy_r_fullname);
    CPyTagged_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 77, CPyStatic_semanal_newtype___globals);
        goto CPyL130;
    }
    cpy_r_placeholder = cpy_r_r36;
    cpy_r_r37 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r37);
    CPy_INCREF(cpy_r_var_name);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r38 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 78, CPyStatic_semanal_newtype___globals, "str", cpy_r_var_name);
        goto CPyL134;
    }
    cpy_r_r39 = 2;
    cpy_r_r40 = 2;
    cpy_r_r41 = CPY_GET_METHOD_TRAIT(cpy_r_r37, CPyType_semanal_shared___SemanticAnalyzerInterface, 10, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *, char, char, char))(cpy_r_r37, cpy_r_r38, cpy_r_placeholder, cpy_r_s, cpy_r_r39, cpy_r_r40, 0); /* add_symbol */
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_placeholder);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 78, CPyStatic_semanal_newtype___globals);
        goto CPyL130;
    }
CPyL25: ;
    CPy_INCREF(cpy_r_var_name);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r42 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 80, CPyStatic_semanal_newtype___globals, "str", cpy_r_var_name);
        goto CPyL130;
    }
    CPy_INCREF(cpy_r_call);
    if (likely(cpy_r_call != Py_None))
        cpy_r_r43 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 80, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL135;
    }
    cpy_r_r44 = CPyDef_semanal_newtype___NewTypeAnalyzer___check_newtype_args(cpy_r_self, cpy_r_r42, cpy_r_r43, cpy_r_s);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 80, CPyStatic_semanal_newtype___globals);
        goto CPyL130;
    }
    cpy_r_r45 = cpy_r_r44.f0;
    CPy_INCREF(cpy_r_r45);
    cpy_r_old_type = cpy_r_r45;
    cpy_r_r46 = cpy_r_r44.f1;
    CPy_DECREF(cpy_r_r44.f0);
    cpy_r_should_defer = cpy_r_r46;
    cpy_r_r47 = CPyDef_types___get_proper_type(cpy_r_old_type);
    CPy_DECREF(cpy_r_old_type);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 81, CPyStatic_semanal_newtype___globals);
        goto CPyL130;
    }
    cpy_r_old_type = cpy_r_r47;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r48 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 82, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL136;
    }
    cpy_r_r49 = ((mypy___nodes___CallExprObject *)cpy_r_r48)->_analyzed;
    cpy_r_r50 = (PyObject *)CPyType_nodes___NewTypeExpr;
    cpy_r_r51 = (CPyPtr)&((PyObject *)cpy_r_r49)->ob_type;
    cpy_r_r52 = *(PyObject * *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 == cpy_r_r50;
    if (cpy_r_r53) goto CPyL38;
    CPy_INCREF(cpy_r_var_name);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r54 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 83, CPyStatic_semanal_newtype___globals, "str", cpy_r_var_name);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_old_type);
    if (PyObject_TypeCheck(cpy_r_old_type, CPyType_types___ProperType))
        cpy_r_r55 = cpy_r_old_type;
    else {
        cpy_r_r55 = NULL;
    }
    if (cpy_r_r55 != NULL) goto __LL6112;
    if (cpy_r_old_type == Py_None)
        cpy_r_r55 = cpy_r_old_type;
    else {
        cpy_r_r55 = NULL;
    }
    if (cpy_r_r55 != NULL) goto __LL6112;
    CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 83, CPyStatic_semanal_newtype___globals, "mypy.types.ProperType or None", cpy_r_old_type);
    goto CPyL137;
__LL6112: ;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r56 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 83, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL138;
    }
    cpy_r_r57 = ((mypy___nodes___CallExprObject *)cpy_r_r56)->_line;
    CPyTagged_INCREF(cpy_r_r57);
    if (likely(cpy_r_call != Py_None))
        cpy_r_r58 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 83, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL139;
    }
    cpy_r_r59 = ((mypy___nodes___CallExprObject *)cpy_r_r58)->_column;
    CPyTagged_INCREF(cpy_r_r59);
    cpy_r_r60 = CPyDef_nodes___NewTypeExpr(cpy_r_r54, cpy_r_r55, cpy_r_r57, cpy_r_r59);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    CPyTagged_DECREF(cpy_r_r57);
    CPyTagged_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 83, CPyStatic_semanal_newtype___globals);
        goto CPyL136;
    }
    if (likely(cpy_r_call != Py_None))
        cpy_r_r61 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 83, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL140;
    }
    CPy_DECREF(((mypy___nodes___CallExprObject *)cpy_r_r61)->_analyzed);
    ((mypy___nodes___CallExprObject *)cpy_r_r61)->_analyzed = cpy_r_r60;
    goto CPyL42;
CPyL38: ;
    CPy_INCREF(cpy_r_old_type);
    if (PyObject_TypeCheck(cpy_r_old_type, CPyType_types___ProperType))
        cpy_r_r63 = cpy_r_old_type;
    else {
        cpy_r_r63 = NULL;
    }
    if (cpy_r_r63 != NULL) goto __LL6113;
    if (cpy_r_old_type == Py_None)
        cpy_r_r63 = cpy_r_old_type;
    else {
        cpy_r_r63 = NULL;
    }
    if (cpy_r_r63 != NULL) goto __LL6113;
    CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 85, CPyStatic_semanal_newtype___globals, "mypy.types.ProperType or None", cpy_r_old_type);
    goto CPyL136;
__LL6113: ;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r64 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 85, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL141;
    }
    cpy_r_r65 = ((mypy___nodes___CallExprObject *)cpy_r_r64)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r65) == CPyType_nodes___NewTypeExpr))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 85, CPyStatic_semanal_newtype___globals, "mypy.nodes.NewTypeExpr", cpy_r_r65);
        goto CPyL141;
    }
    CPy_DECREF(((mypy___nodes___NewTypeExprObject *)cpy_r_r66)->_old_type);
    ((mypy___nodes___NewTypeExprObject *)cpy_r_r66)->_old_type = cpy_r_r63;
CPyL42: ;
    if (PyObject_TypeCheck(cpy_r_old_type, CPyType_types___ProperType))
        cpy_r_r68 = cpy_r_old_type;
    else {
        cpy_r_r68 = NULL;
    }
    if (cpy_r_r68 != NULL) goto __LL6114;
    if (cpy_r_old_type == Py_None)
        cpy_r_r68 = cpy_r_old_type;
    else {
        cpy_r_r68 = NULL;
    }
    if (cpy_r_r68 != NULL) goto __LL6114;
    CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 86, CPyStatic_semanal_newtype___globals, "mypy.types.ProperType or None", cpy_r_old_type);
    goto CPyL136;
__LL6114: ;
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = cpy_r_r68 == cpy_r_r69;
    if (!cpy_r_r70) goto CPyL47;
    if (cpy_r_should_defer) {
        goto CPyL142;
    } else
        goto CPyL47;
CPyL45: ;
    cpy_r_r71 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r71);
    cpy_r_r72 = NULL;
    cpy_r_r73 = 2;
    cpy_r_r74 = CPY_GET_METHOD_TRAIT(cpy_r_r71, CPyType_semanal_shared___SemanticAnalyzerInterface, 23, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, char))(cpy_r_r71, cpy_r_r72, cpy_r_r73); /* defer */
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 89, CPyStatic_semanal_newtype___globals);
        goto CPyL127;
    }
    return 1;
CPyL47: ;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r75 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 93, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL136;
    }
    cpy_r_r76 = ((mypy___nodes___CallExprObject *)cpy_r_r75)->_analyzed;
    cpy_r_r77 = (PyObject *)CPyType_nodes___NewTypeExpr;
    cpy_r_r78 = (CPyPtr)&((PyObject *)cpy_r_r76)->ob_type;
    cpy_r_r79 = *(PyObject * *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 == cpy_r_r77;
    if (cpy_r_r80) {
        goto CPyL51;
    } else
        goto CPyL143;
CPyL49: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r81 = 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 93, CPyStatic_semanal_newtype___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r82 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r83 = (CPyPtr)&((PyObject *)cpy_r_old_type)->ob_type;
    cpy_r_r84 = *(PyObject * *)cpy_r_r83;
    cpy_r_r85 = cpy_r_r84 == cpy_r_r82;
    if (!cpy_r_r85) goto CPyL59;
    CPy_INCREF(cpy_r_old_type);
    if (likely(Py_TYPE(cpy_r_old_type) == CPyType_types___TupleType))
        cpy_r_r86 = cpy_r_old_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 96, CPyStatic_semanal_newtype___globals, "mypy.types.TupleType", cpy_r_old_type);
        goto CPyL136;
    }
    if (likely(Py_TYPE(cpy_r_old_type) == CPyType_types___TupleType))
        cpy_r_r87 = cpy_r_old_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 96, CPyStatic_semanal_newtype___globals, "mypy.types.TupleType", cpy_r_old_type);
        goto CPyL144;
    }
    cpy_r_r88 = ((mypy___types___TupleTypeObject *)cpy_r_r87)->_partial_fallback;
    CPy_INCREF(cpy_r_r88);
    cpy_r_r89 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_line;
    CPyTagged_INCREF(cpy_r_r89);
    if (likely(cpy_r_call != Py_None))
        cpy_r_r90 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 96, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL145;
    }
    cpy_r_r91 = ((mypy___nodes___CallExprObject *)cpy_r_r90)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r91) == CPyType_nodes___NewTypeExpr))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 96, CPyStatic_semanal_newtype___globals, "mypy.nodes.NewTypeExpr", cpy_r_r91);
        goto CPyL145;
    }
    cpy_r_r93 = ((mypy___nodes___NewTypeExprObject *)cpy_r_r92)->_info;
    CPy_INCREF(cpy_r_r93);
    cpy_r_r94 = CPyDef_semanal_newtype___NewTypeAnalyzer___build_newtype_typeinfo(cpy_r_self, cpy_r_name, cpy_r_r86, cpy_r_r88, cpy_r_r89, cpy_r_r93);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r88);
    CPyTagged_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 95, CPyStatic_semanal_newtype___globals);
        goto CPyL136;
    }
    cpy_r_newtype_class_info = cpy_r_r94;
    CPy_INCREF(cpy_r_old_type);
    if (likely(Py_TYPE(cpy_r_old_type) == CPyType_types___TupleType))
        cpy_r_r95 = cpy_r_old_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 98, CPyStatic_semanal_newtype___globals, "mypy.types.TupleType", cpy_r_old_type);
        goto CPyL146;
    }
    cpy_r_r96 = CPyDef_nodes___TypeInfo___update_tuple_type(cpy_r_newtype_class_info, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 98, CPyStatic_semanal_newtype___globals);
        goto CPyL146;
    } else
        goto CPyL87;
CPyL59: ;
    cpy_r_r97 = (PyObject *)CPyType_types___Instance;
    cpy_r_r98 = (CPyPtr)&((PyObject *)cpy_r_old_type)->ob_type;
    cpy_r_r99 = *(PyObject * *)cpy_r_r98;
    cpy_r_r100 = cpy_r_r99 == cpy_r_r97;
    if (!cpy_r_r100) goto CPyL70;
    if (likely(Py_TYPE(cpy_r_old_type) == CPyType_types___Instance))
        cpy_r_r101 = cpy_r_old_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 100, CPyStatic_semanal_newtype___globals, "mypy.types.Instance", cpy_r_old_type);
        goto CPyL136;
    }
    cpy_r_r102 = ((mypy___types___InstanceObject *)cpy_r_r101)->_type;
    cpy_r_r103 = ((mypy___nodes___TypeInfoObject *)cpy_r_r102)->_is_protocol;
    if (unlikely(cpy_r_r103 == 2)) {
        CPy_AttributeError("mypy/semanal_newtype.py", "process_newtype_declaration", "TypeInfo", "is_protocol", 100, CPyStatic_semanal_newtype___globals);
        goto CPyL136;
    }
CPyL62: ;
    if (!cpy_r_r103) goto CPyL64;
CPyL63: ;
    cpy_r_r104 = CPyStatics[5235]; /* 'NewType cannot be used with protocol classes' */
    cpy_r_r105 = NULL;
    cpy_r_r106 = CPyDef_semanal_newtype___NewTypeAnalyzer___fail(cpy_r_self, cpy_r_r104, cpy_r_s, cpy_r_r105);
    if (unlikely(cpy_r_r106 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 101, CPyStatic_semanal_newtype___globals);
        goto CPyL136;
    }
CPyL64: ;
    CPy_INCREF(cpy_r_old_type);
    if (likely(Py_TYPE(cpy_r_old_type) == CPyType_types___Instance))
        cpy_r_r107 = cpy_r_old_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 103, CPyStatic_semanal_newtype___globals, "mypy.types.Instance", cpy_r_old_type);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_old_type);
    if (likely(Py_TYPE(cpy_r_old_type) == CPyType_types___Instance))
        cpy_r_r108 = cpy_r_old_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 103, CPyStatic_semanal_newtype___globals, "mypy.types.Instance", cpy_r_old_type);
        goto CPyL147;
    }
    cpy_r_r109 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_line;
    CPyTagged_INCREF(cpy_r_r109);
    if (likely(cpy_r_call != Py_None))
        cpy_r_r110 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 103, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL148;
    }
    cpy_r_r111 = ((mypy___nodes___CallExprObject *)cpy_r_r110)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r111) == CPyType_nodes___NewTypeExpr))
        cpy_r_r112 = cpy_r_r111;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 103, CPyStatic_semanal_newtype___globals, "mypy.nodes.NewTypeExpr", cpy_r_r111);
        goto CPyL148;
    }
    cpy_r_r113 = ((mypy___nodes___NewTypeExprObject *)cpy_r_r112)->_info;
    CPy_INCREF(cpy_r_r113);
    cpy_r_r114 = CPyDef_semanal_newtype___NewTypeAnalyzer___build_newtype_typeinfo(cpy_r_self, cpy_r_name, cpy_r_r107, cpy_r_r108, cpy_r_r109, cpy_r_r113);
    CPy_DECREF(cpy_r_r107);
    CPy_DECREF(cpy_r_r108);
    CPyTagged_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 102, CPyStatic_semanal_newtype___globals);
        goto CPyL136;
    }
    cpy_r_newtype_class_info = cpy_r_r114;
    goto CPyL87;
CPyL70: ;
    if (PyObject_TypeCheck(cpy_r_old_type, CPyType_types___ProperType))
        cpy_r_r115 = cpy_r_old_type;
    else {
        cpy_r_r115 = NULL;
    }
    if (cpy_r_r115 != NULL) goto __LL6115;
    if (cpy_r_old_type == Py_None)
        cpy_r_r115 = cpy_r_old_type;
    else {
        cpy_r_r115 = NULL;
    }
    if (cpy_r_r115 != NULL) goto __LL6115;
    CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 106, CPyStatic_semanal_newtype___globals, "mypy.types.ProperType or None", cpy_r_old_type);
    goto CPyL136;
__LL6115: ;
    cpy_r_r116 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r117 = cpy_r_r115 != cpy_r_r116;
    if (!cpy_r_r117) goto CPyL149;
    cpy_r_r118 = CPyStatics[5236]; /* ('Argument 2 to NewType(...) must be subclassable (got '
                                      '{})') */
    CPy_INCREF(cpy_r_r118);
    cpy_r_message = cpy_r_r118;
    if (likely(PyObject_TypeCheck(cpy_r_old_type, CPyType_types___ProperType)))
        cpy_r_r119 = cpy_r_old_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 109, CPyStatic_semanal_newtype___globals, "mypy.types.ProperType", cpy_r_old_type);
        goto CPyL150;
    }
    cpy_r_r120 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r120);
    cpy_r_r121 = CPY_INT_TAG;
    cpy_r_r122 = 2;
    cpy_r_r123 = CPyDef_messages___format_type(cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122);
    CPy_DECREF(cpy_r_r119);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 109, CPyStatic_semanal_newtype___globals);
        goto CPyL150;
    }
    cpy_r_r124 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r125[2] = {cpy_r_message, cpy_r_r123};
    cpy_r_r126 = (PyObject **)&cpy_r_r125;
    cpy_r_r127 = PyObject_VectorcallMethod(cpy_r_r124, cpy_r_r126, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 109, CPyStatic_semanal_newtype___globals);
        goto CPyL151;
    }
    CPy_DECREF(cpy_r_message);
    CPy_DECREF(cpy_r_r123);
    if (likely(PyUnicode_Check(cpy_r_r127)))
        cpy_r_r128 = cpy_r_r127;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 109, CPyStatic_semanal_newtype___globals, "str", cpy_r_r127);
        goto CPyL130;
    }
    cpy_r_r129 = CPyStatic_errorcodes___VALID_NEWTYPE;
    if (unlikely(cpy_r_r129 == NULL)) {
        goto CPyL152;
    } else
        goto CPyL79;
CPyL77: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"VALID_NEWTYPE\" was not set");
    cpy_r_r130 = 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 111, CPyStatic_semanal_newtype___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL79: ;
    cpy_r_r131 = CPyDef_semanal_newtype___NewTypeAnalyzer___fail(cpy_r_self, cpy_r_r128, cpy_r_s, cpy_r_r129);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r131 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 108, CPyStatic_semanal_newtype___globals);
        goto CPyL130;
    }
CPyL80: ;
    cpy_r_r132 = NULL;
    cpy_r_r133 = NULL;
    cpy_r_r134 = CPY_INT_TAG;
    cpy_r_r135 = CPY_INT_TAG;
    cpy_r_r136 = CPyDef_types___AnyType(10, cpy_r_r132, cpy_r_r133, cpy_r_r134, cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 114, CPyStatic_semanal_newtype___globals);
        goto CPyL130;
    }
    cpy_r_old_type = cpy_r_r136;
    cpy_r_r137 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r137);
    cpy_r_r138 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r139 = NULL;
    cpy_r_r140 = CPY_GET_METHOD_TRAIT(cpy_r_r137, CPyType_semanal_shared___SemanticAnalyzerInterface, 1, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r137, cpy_r_r138, cpy_r_r139); /* named_type */
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 115, CPyStatic_semanal_newtype___globals);
        goto CPyL136;
    }
    cpy_r_object_type = cpy_r_r140;
    CPy_INCREF(cpy_r_old_type);
    if (likely(Py_TYPE(cpy_r_old_type) == CPyType_types___AnyType))
        cpy_r_r141 = cpy_r_old_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 117, CPyStatic_semanal_newtype___globals, "mypy.types.AnyType", cpy_r_old_type);
        goto CPyL153;
    }
    cpy_r_r142 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_line;
    CPyTagged_INCREF(cpy_r_r142);
    if (likely(cpy_r_call != Py_None))
        cpy_r_r143 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 117, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL154;
    }
    cpy_r_r144 = ((mypy___nodes___CallExprObject *)cpy_r_r143)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r144) == CPyType_nodes___NewTypeExpr))
        cpy_r_r145 = cpy_r_r144;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 117, CPyStatic_semanal_newtype___globals, "mypy.nodes.NewTypeExpr", cpy_r_r144);
        goto CPyL154;
    }
    cpy_r_r146 = ((mypy___nodes___NewTypeExprObject *)cpy_r_r145)->_info;
    CPy_INCREF(cpy_r_r146);
    cpy_r_r147 = CPyDef_semanal_newtype___NewTypeAnalyzer___build_newtype_typeinfo(cpy_r_self, cpy_r_name, cpy_r_r141, cpy_r_object_type, cpy_r_r142, cpy_r_r146);
    CPy_DECREF(cpy_r_r141);
    CPy_DECREF(cpy_r_object_type);
    CPyTagged_DECREF(cpy_r_r142);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 116, CPyStatic_semanal_newtype___globals);
        goto CPyL136;
    }
    cpy_r_newtype_class_info = cpy_r_r147;
    ((mypy___nodes___TypeInfoObject *)cpy_r_newtype_class_info)->_fallback_to_any = 1;
    cpy_r_r148 = 1;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 119, CPyStatic_semanal_newtype___globals);
        goto CPyL146;
    }
CPyL87: ;
    CPy_INCREF(cpy_r_old_type);
    if (Py_TYPE(cpy_r_old_type) == CPyType_types___TupleType)
        cpy_r_r149 = cpy_r_old_type;
    else {
        cpy_r_r149 = NULL;
    }
    if (cpy_r_r149 != NULL) goto __LL6116;
    if (Py_TYPE(cpy_r_old_type) == CPyType_types___Instance)
        cpy_r_r149 = cpy_r_old_type;
    else {
        cpy_r_r149 = NULL;
    }
    if (cpy_r_r149 != NULL) goto __LL6116;
    if (Py_TYPE(cpy_r_old_type) == CPyType_types___AnyType)
        cpy_r_r149 = cpy_r_old_type;
    else {
        cpy_r_r149 = NULL;
    }
    if (cpy_r_r149 != NULL) goto __LL6116;
    CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 122, CPyStatic_semanal_newtype___globals, "union[mypy.types.TupleType, mypy.types.Instance, mypy.types.AnyType]", cpy_r_old_type);
    goto CPyL146;
__LL6116: ;
    cpy_r_r150 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r150);
    cpy_r_r151 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    cpy_r_r152 = CPY_GET_ATTR_TRAIT(cpy_r_r151, CPyType_semanal_shared___SemanticAnalyzerInterface, 14, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char); /* is_typeshed_stub_file */
    if (unlikely(cpy_r_r152 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 122, CPyStatic_semanal_newtype___globals);
        goto CPyL155;
    }
CPyL89: ;
    cpy_r_r153 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r153);
    cpy_r_r154 = CPyDef_typeanal___check_for_explicit_any(cpy_r_r149, cpy_r_r150, cpy_r_r152, cpy_r_r153, cpy_r_s);
    CPy_DECREF(cpy_r_r149);
    CPy_DECREF(cpy_r_r150);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r154 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 121, CPyStatic_semanal_newtype___globals);
        goto CPyL146;
    }
    cpy_r_r155 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_options;
    cpy_r_r156 = ((mypy___options___OptionsObject *)cpy_r_r155)->_disallow_any_unimported;
    if (!cpy_r_r156) goto CPyL156;
CPyL91: ;
    CPy_INCREF(cpy_r_old_type);
    if (Py_TYPE(cpy_r_old_type) == CPyType_types___TupleType)
        cpy_r_r157 = cpy_r_old_type;
    else {
        cpy_r_r157 = NULL;
    }
    if (cpy_r_r157 != NULL) goto __LL6117;
    if (Py_TYPE(cpy_r_old_type) == CPyType_types___Instance)
        cpy_r_r157 = cpy_r_old_type;
    else {
        cpy_r_r157 = NULL;
    }
    if (cpy_r_r157 != NULL) goto __LL6117;
    if (Py_TYPE(cpy_r_old_type) == CPyType_types___AnyType)
        cpy_r_r157 = cpy_r_old_type;
    else {
        cpy_r_r157 = NULL;
    }
    if (cpy_r_r157 != NULL) goto __LL6117;
    CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 125, CPyStatic_semanal_newtype___globals, "union[mypy.types.TupleType, mypy.types.Instance, mypy.types.AnyType]", cpy_r_old_type);
    goto CPyL146;
__LL6117: ;
    cpy_r_r158 = CPyDef_typeanal___has_any_from_unimported_type(cpy_r_r157);
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r158 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 125, CPyStatic_semanal_newtype___globals);
        goto CPyL146;
    }
    if (!cpy_r_r158) goto CPyL156;
    cpy_r_r159 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r159);
    cpy_r_r160 = CPyStatics[5237]; /* 'Argument 2 to NewType(...)' */
    if (Py_TYPE(cpy_r_old_type) == CPyType_types___TupleType)
        cpy_r_r161 = cpy_r_old_type;
    else {
        cpy_r_r161 = NULL;
    }
    if (cpy_r_r161 != NULL) goto __LL6118;
    if (Py_TYPE(cpy_r_old_type) == CPyType_types___Instance)
        cpy_r_r161 = cpy_r_old_type;
    else {
        cpy_r_r161 = NULL;
    }
    if (cpy_r_r161 != NULL) goto __LL6118;
    if (Py_TYPE(cpy_r_old_type) == CPyType_types___AnyType)
        cpy_r_r161 = cpy_r_old_type;
    else {
        cpy_r_r161 = NULL;
    }
    if (cpy_r_r161 != NULL) goto __LL6118;
    CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 126, CPyStatic_semanal_newtype___globals, "union[mypy.types.TupleType, mypy.types.Instance, mypy.types.AnyType]", cpy_r_old_type);
    goto CPyL157;
__LL6118: ;
    cpy_r_r162 = CPyDef_messages___MessageBuilder___unimported_type_becomes_any(cpy_r_r159, cpy_r_r160, cpy_r_r161, cpy_r_s);
    CPy_DECREF(cpy_r_r161);
    CPy_DECREF(cpy_r_r159);
    if (unlikely(cpy_r_r162 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 126, CPyStatic_semanal_newtype___globals);
        goto CPyL158;
    }
CPyL96: ;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r163 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 129, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL158;
    }
    cpy_r_r164 = ((mypy___nodes___CallExprObject *)cpy_r_r163)->_analyzed;
    cpy_r_r165 = (PyObject *)CPyType_nodes___NewTypeExpr;
    cpy_r_r166 = (CPyPtr)&((PyObject *)cpy_r_r164)->ob_type;
    cpy_r_r167 = *(PyObject * *)cpy_r_r166;
    cpy_r_r168 = cpy_r_r167 == cpy_r_r165;
    if (cpy_r_r168) {
        goto CPyL100;
    } else
        goto CPyL159;
CPyL98: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r169 = 0;
    if (unlikely(!cpy_r_r169)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 129, CPyStatic_semanal_newtype___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL100: ;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r170 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 132, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL158;
    }
    cpy_r_r171 = ((mypy___nodes___CallExprObject *)cpy_r_r170)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r171) == CPyType_nodes___NewTypeExpr))
        cpy_r_r172 = cpy_r_r171;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 132, CPyStatic_semanal_newtype___globals, "mypy.nodes.NewTypeExpr", cpy_r_r171);
        goto CPyL158;
    }
    cpy_r_r173 = ((mypy___nodes___NewTypeExprObject *)cpy_r_r172)->_info;
    CPy_INCREF(cpy_r_r173);
    cpy_r_r174 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r175 = cpy_r_r173 != cpy_r_r174;
    if (!cpy_r_r175) goto CPyL160;
    if (likely(cpy_r_r173 != Py_None))
        cpy_r_r176 = cpy_r_r173;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 132, CPyStatic_semanal_newtype___globals, "mypy.nodes.TypeInfo", cpy_r_r173);
        goto CPyL158;
    }
    cpy_r_r177 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r176);
    CPy_DECREF(cpy_r_r176);
    if (unlikely(cpy_r_r177 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 132, CPyStatic_semanal_newtype___globals);
        goto CPyL158;
    }
    if (cpy_r_r177) goto CPyL109;
CPyL106: ;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r178 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 133, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL158;
    }
    cpy_r_r179 = ((mypy___nodes___CallExprObject *)cpy_r_r178)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r179) == CPyType_nodes___NewTypeExpr))
        cpy_r_r180 = cpy_r_r179;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 133, CPyStatic_semanal_newtype___globals, "mypy.nodes.NewTypeExpr", cpy_r_r179);
        goto CPyL158;
    }
    CPy_INCREF(cpy_r_newtype_class_info);
    CPy_DECREF(((mypy___nodes___NewTypeExprObject *)cpy_r_r180)->_info);
    ((mypy___nodes___NewTypeExprObject *)cpy_r_r180)->_info = cpy_r_newtype_class_info;
    goto CPyL114;
CPyL109: ;
    cpy_r_r182 = ((mypy___nodes___TypeInfoObject *)cpy_r_newtype_class_info)->_bases;
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AttributeError("mypy/semanal_newtype.py", "process_newtype_declaration", "TypeInfo", "bases", 135, CPyStatic_semanal_newtype___globals);
        goto CPyL158;
    }
    CPy_INCREF(cpy_r_r182);
CPyL110: ;
    if (likely(cpy_r_call != Py_None))
        cpy_r_r183 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 135, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL161;
    }
    cpy_r_r184 = ((mypy___nodes___CallExprObject *)cpy_r_r183)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r184) == CPyType_nodes___NewTypeExpr))
        cpy_r_r185 = cpy_r_r184;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 135, CPyStatic_semanal_newtype___globals, "mypy.nodes.NewTypeExpr", cpy_r_r184);
        goto CPyL161;
    }
    cpy_r_r186 = ((mypy___nodes___NewTypeExprObject *)cpy_r_r185)->_info;
    if (likely(cpy_r_r186 != Py_None))
        cpy_r_r187 = cpy_r_r186;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 135, CPyStatic_semanal_newtype___globals, "mypy.nodes.TypeInfo", cpy_r_r186);
        goto CPyL161;
    }
    if (((mypy___nodes___TypeInfoObject *)cpy_r_r187)->_bases != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_r187)->_bases);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_r187)->_bases = cpy_r_r182;
    cpy_r_r188 = 1;
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 135, CPyStatic_semanal_newtype___globals);
        goto CPyL158;
    }
CPyL114: ;
    cpy_r_r189 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r189);
    if (likely(cpy_r_var_name != Py_None))
        cpy_r_r190 = cpy_r_var_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 136, CPyStatic_semanal_newtype___globals, "str", cpy_r_var_name);
        goto CPyL162;
    }
    if (likely(cpy_r_call != Py_None))
        cpy_r_r191 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 136, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL163;
    }
    cpy_r_r192 = ((mypy___nodes___CallExprObject *)cpy_r_r191)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r192) == CPyType_nodes___NewTypeExpr))
        cpy_r_r193 = cpy_r_r192;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 136, CPyStatic_semanal_newtype___globals, "mypy.nodes.NewTypeExpr", cpy_r_r192);
        goto CPyL163;
    }
    cpy_r_r194 = ((mypy___nodes___NewTypeExprObject *)cpy_r_r193)->_info;
    CPy_INCREF(cpy_r_r194);
    if (likely(cpy_r_r194 != Py_None))
        cpy_r_r195 = cpy_r_r194;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 136, CPyStatic_semanal_newtype___globals, "mypy.nodes.TypeInfo", cpy_r_r194);
        goto CPyL163;
    }
    cpy_r_r196 = 2;
    cpy_r_r197 = 2;
    cpy_r_r198 = 2;
    cpy_r_r199 = CPY_GET_METHOD_TRAIT(cpy_r_r189, CPyType_semanal_shared___SemanticAnalyzerInterface, 10, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *, char, char, char))(cpy_r_r189, cpy_r_r190, cpy_r_r195, cpy_r_s, cpy_r_r196, cpy_r_r197, cpy_r_r198); /* add_symbol */
    CPy_DECREF(cpy_r_r190);
    CPy_DECREF(cpy_r_r195);
    CPy_DECREF(cpy_r_r189);
    if (unlikely(cpy_r_r199 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 136, CPyStatic_semanal_newtype___globals);
        goto CPyL164;
    }
    cpy_r_r200 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r200);
    cpy_r_r201 = CPY_GET_METHOD_TRAIT(cpy_r_r200, CPyType_semanal_shared___SemanticAnalyzerInterface, 28, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *))(cpy_r_r200); /* is_func_scope */
    CPy_DECREF(cpy_r_r200);
    if (unlikely(cpy_r_r201 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 137, CPyStatic_semanal_newtype___globals);
        goto CPyL164;
    }
    if (!cpy_r_r201) goto CPyL165;
    cpy_r_r202 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r202);
    if (likely(cpy_r_call != Py_None))
        cpy_r_r203 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 138, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL166;
    }
    cpy_r_r204 = ((mypy___nodes___CallExprObject *)cpy_r_r203)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r204) == CPyType_nodes___NewTypeExpr))
        cpy_r_r205 = cpy_r_r204;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 138, CPyStatic_semanal_newtype___globals, "mypy.nodes.NewTypeExpr", cpy_r_r204);
        goto CPyL166;
    }
    cpy_r_r206 = ((mypy___nodes___NewTypeExprObject *)cpy_r_r205)->_info;
    CPy_INCREF(cpy_r_r206);
    if (likely(cpy_r_r206 != Py_None))
        cpy_r_r207 = cpy_r_r206;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 138, CPyStatic_semanal_newtype___globals, "mypy.nodes.TypeInfo", cpy_r_r206);
        goto CPyL166;
    }
    CPy_DECREF(cpy_r_call);
    cpy_r_r208 = CPY_GET_METHOD_TRAIT(cpy_r_r202, CPyType_semanal_shared___SemanticAnalyzerInterface, 11, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r202, cpy_r_name, cpy_r_r207); /* add_symbol_skip_local */
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r207);
    CPy_DECREF(cpy_r_r202);
    if (unlikely(cpy_r_r208 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 138, CPyStatic_semanal_newtype___globals);
        goto CPyL167;
    }
CPyL125: ;
    cpy_r_r209 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_line;
    CPyTagged_INCREF(cpy_r_r209);
    if (((mypy___nodes___TypeInfoObject *)cpy_r_newtype_class_info)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_newtype_class_info)->_line);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_newtype_class_info)->_line = cpy_r_r209;
    cpy_r_r210 = 1;
    CPy_DECREF(cpy_r_newtype_class_info);
    if (unlikely(!cpy_r_r210)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 139, CPyStatic_semanal_newtype___globals);
        goto CPyL127;
    }
    return 1;
CPyL127: ;
    cpy_r_r211 = 2;
    return cpy_r_r211;
CPyL128: ;
    CPy_DECREF(cpy_r_var_name);
    CPy_DECREF(cpy_r_call);
    goto CPyL3;
CPyL129: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    goto CPyL127;
CPyL130: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    goto CPyL127;
CPyL131: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_fullname);
    goto CPyL127;
CPyL132: ;
    CPy_DECREF(cpy_r_fullname);
    goto CPyL25;
CPyL133: ;
    CPy_DECREF(cpy_r_r30);
    goto CPyL22;
CPyL134: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_placeholder);
    CPy_DecRef(cpy_r_r37);
    goto CPyL127;
CPyL135: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r42);
    goto CPyL127;
CPyL136: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_old_type);
    goto CPyL127;
CPyL137: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_old_type);
    CPy_DecRef(cpy_r_r54);
    goto CPyL127;
CPyL138: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_old_type);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r55);
    goto CPyL127;
CPyL139: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_old_type);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r55);
    CPyTagged_DecRef(cpy_r_r57);
    goto CPyL127;
CPyL140: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_old_type);
    CPy_DecRef(cpy_r_r60);
    goto CPyL127;
CPyL141: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_old_type);
    CPy_DecRef(cpy_r_r63);
    goto CPyL127;
CPyL142: ;
    CPy_DECREF(cpy_r_var_name);
    CPy_DECREF(cpy_r_call);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_old_type);
    goto CPyL45;
CPyL143: ;
    CPy_DECREF(cpy_r_var_name);
    CPy_DECREF(cpy_r_call);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_old_type);
    goto CPyL49;
CPyL144: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_old_type);
    CPy_DecRef(cpy_r_r86);
    goto CPyL127;
CPyL145: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_old_type);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r88);
    CPyTagged_DecRef(cpy_r_r89);
    goto CPyL127;
CPyL146: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_old_type);
    CPy_DecRef(cpy_r_newtype_class_info);
    goto CPyL127;
CPyL147: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_old_type);
    CPy_DecRef(cpy_r_r107);
    goto CPyL127;
CPyL148: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_old_type);
    CPy_DecRef(cpy_r_r107);
    CPy_DecRef(cpy_r_r108);
    CPyTagged_DecRef(cpy_r_r109);
    goto CPyL127;
CPyL149: ;
    CPy_DECREF(cpy_r_old_type);
    goto CPyL80;
CPyL150: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_message);
    goto CPyL127;
CPyL151: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_r123);
    goto CPyL127;
CPyL152: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r128);
    goto CPyL77;
CPyL153: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_old_type);
    CPy_DecRef(cpy_r_object_type);
    goto CPyL127;
CPyL154: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_old_type);
    CPy_DecRef(cpy_r_object_type);
    CPy_DecRef(cpy_r_r141);
    CPyTagged_DecRef(cpy_r_r142);
    goto CPyL127;
CPyL155: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_old_type);
    CPy_DecRef(cpy_r_newtype_class_info);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r150);
    goto CPyL127;
CPyL156: ;
    CPy_DECREF(cpy_r_old_type);
    goto CPyL96;
CPyL157: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_newtype_class_info);
    CPy_DecRef(cpy_r_r159);
    goto CPyL127;
CPyL158: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_newtype_class_info);
    goto CPyL127;
CPyL159: ;
    CPy_DECREF(cpy_r_var_name);
    CPy_DECREF(cpy_r_call);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_newtype_class_info);
    goto CPyL98;
CPyL160: ;
    CPy_DECREF(cpy_r_r173);
    goto CPyL106;
CPyL161: ;
    CPy_DecRef(cpy_r_var_name);
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_newtype_class_info);
    CPy_DecRef(cpy_r_r182);
    goto CPyL127;
CPyL162: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_newtype_class_info);
    CPy_DecRef(cpy_r_r189);
    goto CPyL127;
CPyL163: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_newtype_class_info);
    CPy_DecRef(cpy_r_r189);
    CPy_DecRef(cpy_r_r190);
    goto CPyL127;
CPyL164: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_newtype_class_info);
    goto CPyL127;
CPyL165: ;
    CPy_DECREF(cpy_r_call);
    CPy_DECREF(cpy_r_name);
    goto CPyL125;
CPyL166: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_newtype_class_info);
    CPy_DecRef(cpy_r_r202);
    goto CPyL127;
CPyL167: ;
    CPy_DecRef(cpy_r_newtype_class_info);
    goto CPyL127;
}

PyObject *CPyPy_semanal_newtype___NewTypeAnalyzer___process_newtype_declaration(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:process_newtype_declaration", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_newtype___NewTypeAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_newtype.NewTypeAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___AssignmentStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_s); 
        goto fail;
    }
    char retval = CPyDef_semanal_newtype___NewTypeAnalyzer___process_newtype_declaration(arg_self, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_newtype.py", "process_newtype_declaration", 54, CPyStatic_semanal_newtype___globals);
    return NULL;
}

tuple_T2OO CPyDef_semanal_newtype___NewTypeAnalyzer___analyze_newtype_declaration(PyObject *cpy_r_self, PyObject *cpy_r_s) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_call;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
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
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_names;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_existing;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    tuple_T2OO cpy_r_r85;
    tuple_T2OO cpy_r_r86;
    cpy_r_r0 = 1;
    cpy_r_r1 = 1;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_name = cpy_r_r2;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    cpy_r_call = cpy_r_r3;
    cpy_r_r4 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_lvalues;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = cpy_r_r7 == 2;
    if (!cpy_r_r8) goto CPyL37;
    cpy_r_r9 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_lvalues;
    cpy_r_r10 = CPyList_GetItemShortBorrow(cpy_r_r9, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 147, CPyStatic_semanal_newtype___globals);
        goto CPyL39;
    }
    cpy_r_r11 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_r10)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL37;
    cpy_r_r15 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_rvalue;
    cpy_r_r16 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL37;
    cpy_r_r20 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_rvalue;
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_nodes___CallExpr))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 149, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_r20);
        goto CPyL39;
    }
    cpy_r_r22 = ((mypy___nodes___CallExprObject *)cpy_r_r21)->_callee;
    cpy_r_r23 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r22)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (!cpy_r_r26) goto CPyL7;
    cpy_r_r27 = cpy_r_r26;
    goto CPyL8;
CPyL7: ;
    cpy_r_r28 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_r22)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    cpy_r_r27 = cpy_r_r31;
CPyL8: ;
    if (!cpy_r_r27) goto CPyL10;
    cpy_r_r32 = cpy_r_r27;
    goto CPyL11;
CPyL10: ;
    cpy_r_r33 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_r22)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    cpy_r_r32 = cpy_r_r36;
CPyL11: ;
    if (!cpy_r_r32) goto CPyL37;
    cpy_r_r37 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_rvalue;
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_nodes___CallExpr))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 150, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_r37);
        goto CPyL39;
    }
    cpy_r_r39 = ((mypy___nodes___CallExprObject *)cpy_r_r38)->_callee;
    CPy_INCREF(cpy_r_r39);
    if (likely((Py_TYPE(cpy_r_r39) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r39) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r39) == CPyType_nodes___RefExpr)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 150, CPyStatic_semanal_newtype___globals, "mypy.nodes.RefExpr", cpy_r_r39);
        goto CPyL39;
    }
    cpy_r_r41 = CPY_GET_ATTR(cpy_r_r40, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 150, CPyStatic_semanal_newtype___globals);
        goto CPyL39;
    }
CPyL15: ;
    cpy_r_r42 = CPyStatics[5238]; /* 'typing.NewType' */
    cpy_r_r43 = PyUnicode_Compare(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r44 = cpy_r_r43 == -1;
    if (!cpy_r_r44) goto CPyL18;
    cpy_r_r45 = PyErr_Occurred();
    cpy_r_r46 = cpy_r_r45 != NULL;
    if (!cpy_r_r46) goto CPyL18;
    cpy_r_r47 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 150, CPyStatic_semanal_newtype___globals);
        goto CPyL39;
    }
CPyL18: ;
    cpy_r_r48 = cpy_r_r43 == 0;
    if (cpy_r_r48) {
        goto CPyL40;
    } else
        goto CPyL37;
CPyL19: ;
    cpy_r_r49 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_lvalues;
    cpy_r_r50 = CPyList_GetItemShortBorrow(cpy_r_r49, 0);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 152, CPyStatic_semanal_newtype___globals);
        goto CPyL38;
    }
    if (likely(Py_TYPE(cpy_r_r50) == CPyType_nodes___NameExpr))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 152, CPyStatic_semanal_newtype___globals, "mypy.nodes.NameExpr", cpy_r_r50);
        goto CPyL38;
    }
    cpy_r_r52 = ((mypy___nodes___NameExprObject *)cpy_r_r51)->_name;
    CPy_INCREF(cpy_r_r52);
    cpy_r_name = cpy_r_r52;
    cpy_r_r53 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_type;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r55 = cpy_r_r53 != cpy_r_r54;
    CPy_DECREF(cpy_r_r53);
    if (!cpy_r_r55) goto CPyL23;
    cpy_r_r56 = CPyStatics[5239]; /* 'Cannot declare the type of a NewType declaration' */
    cpy_r_r57 = NULL;
    cpy_r_r58 = CPyDef_semanal_newtype___NewTypeAnalyzer___fail(cpy_r_self, cpy_r_r56, cpy_r_s, cpy_r_r57);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 155, CPyStatic_semanal_newtype___globals);
        goto CPyL41;
    }
CPyL23: ;
    cpy_r_r59 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r59);
    cpy_r_r60 = CPY_GET_METHOD_TRAIT(cpy_r_r59, CPyType_semanal_shared___SemanticAnalyzerInterface, 9, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *))(cpy_r_r59); /* current_symbol_table */
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 157, CPyStatic_semanal_newtype___globals);
        goto CPyL41;
    }
    cpy_r_names = cpy_r_r60;
    CPy_INCREF(cpy_r_name);
    if (likely(cpy_r_name != Py_None))
        cpy_r_r61 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 158, CPyStatic_semanal_newtype___globals, "str", cpy_r_name);
        goto CPyL42;
    }
    cpy_r_r62 = CPyDict_GetWithNone(cpy_r_names, cpy_r_r61);
    CPy_DECREF(cpy_r_names);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 158, CPyStatic_semanal_newtype___globals);
        goto CPyL41;
    }
    if (Py_TYPE(cpy_r_r62) == CPyType_nodes___SymbolTableNode)
        cpy_r_r63 = cpy_r_r62;
    else {
        cpy_r_r63 = NULL;
    }
    if (cpy_r_r63 != NULL) goto __LL6119;
    if (cpy_r_r62 == Py_None)
        cpy_r_r63 = cpy_r_r62;
    else {
        cpy_r_r63 = NULL;
    }
    if (cpy_r_r63 != NULL) goto __LL6119;
    CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 158, CPyStatic_semanal_newtype___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r62);
    goto CPyL41;
__LL6119: ;
    cpy_r_existing = cpy_r_r63;
    cpy_r_r64 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r65 = cpy_r_existing != cpy_r_r64;
    if (!cpy_r_r65) goto CPyL43;
    if (likely(cpy_r_existing != Py_None))
        cpy_r_r66 = cpy_r_existing;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 162, CPyStatic_semanal_newtype___globals, "mypy.nodes.SymbolTableNode", cpy_r_existing);
        goto CPyL44;
    }
    cpy_r_r67 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r66)->_node;
    cpy_r_r68 = (PyObject *)CPyType_nodes___PlaceholderNode;
    cpy_r_r69 = (CPyPtr)&((PyObject *)cpy_r_r67)->ob_type;
    cpy_r_r70 = *(PyObject * *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 == cpy_r_r68;
    CPy_DECREF(cpy_r_existing);
    if (cpy_r_r71) goto CPyL35;
    cpy_r_r72 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_rvalue;
    if (likely(Py_TYPE(cpy_r_r72) == CPyType_nodes___CallExpr))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 163, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_r72);
        goto CPyL41;
    }
    cpy_r_r74 = ((mypy___nodes___CallExprObject *)cpy_r_r73)->_analyzed;
    CPy_INCREF(cpy_r_r74);
    cpy_r_r75 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r76 = cpy_r_r74 != cpy_r_r75;
    CPy_DECREF(cpy_r_r74);
    if (cpy_r_r76) goto CPyL35;
    cpy_r_r77 = CPyStatics[4962]; /* 'Cannot redefine "' */
    CPy_INCREF(cpy_r_name);
    if (likely(cpy_r_name != Py_None))
        cpy_r_r78 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 165, CPyStatic_semanal_newtype___globals, "str", cpy_r_name);
        goto CPyL41;
    }
    cpy_r_r79 = CPyStatics[5240]; /* '" as a NewType' */
    cpy_r_r80 = CPyStr_Build(3, cpy_r_r77, cpy_r_r78, cpy_r_r79);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 165, CPyStatic_semanal_newtype___globals);
        goto CPyL41;
    }
    cpy_r_r81 = NULL;
    cpy_r_r82 = CPyDef_semanal_newtype___NewTypeAnalyzer___fail(cpy_r_self, cpy_r_r80, cpy_r_s, cpy_r_r81);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 165, CPyStatic_semanal_newtype___globals);
        goto CPyL41;
    }
CPyL35: ;
    cpy_r_r83 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_rvalue;
    CPy_INCREF(cpy_r_r83);
    if (likely(Py_TYPE(cpy_r_r83) == CPyType_nodes___CallExpr))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 170, CPyStatic_semanal_newtype___globals, "mypy.nodes.CallExpr", cpy_r_r83);
        goto CPyL41;
    }
    cpy_r_call = cpy_r_r84;
CPyL37: ;
    cpy_r_r85.f0 = cpy_r_name;
    cpy_r_r85.f1 = cpy_r_call;
    CPy_INCREF(cpy_r_r85.f0);
    CPy_INCREF(cpy_r_r85.f1);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_call);
    return cpy_r_r85;
CPyL38: ;
    tuple_T2OO __tmp6120 = { NULL, NULL };
    cpy_r_r86 = __tmp6120;
    return cpy_r_r86;
CPyL39: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_call);
    goto CPyL38;
CPyL40: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_call);
    goto CPyL19;
CPyL41: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL38;
CPyL42: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_names);
    goto CPyL38;
CPyL43: ;
    CPy_DECREF(cpy_r_existing);
    goto CPyL35;
CPyL44: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_existing);
    goto CPyL38;
}

PyObject *CPyPy_semanal_newtype___NewTypeAnalyzer___analyze_newtype_declaration(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:analyze_newtype_declaration", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_newtype___NewTypeAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_newtype.NewTypeAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___AssignmentStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_s); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_semanal_newtype___NewTypeAnalyzer___analyze_newtype_declaration(arg_self, arg_s);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6121 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp6121);
    PyObject *__tmp6122 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp6122);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_newtype.py", "analyze_newtype_declaration", 142, CPyStatic_semanal_newtype___globals);
    return NULL;
}

tuple_T2OC CPyDef_semanal_newtype___NewTypeAnalyzer___check_newtype_args(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_call, PyObject *cpy_r_context) {
    char cpy_r_has_failed;
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_args;
    PyObject *cpy_r_arg_kinds;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    tuple_T2CC cpy_r_r21;
    PyObject *cpy_r_r22;
    tuple_T2OC cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_msg;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_unanalyzed_type;
    tuple_T3OOO cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    tuple_T2CC cpy_r_r65;
    PyObject *cpy_r_r66;
    tuple_T2OC cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_old_type;
    char cpy_r_should_defer;
    PyObject *cpy_r_r84;
    CPyPtr cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyPtr cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    tuple_T2CC cpy_r_r99;
    PyObject *cpy_r_r100;
    tuple_T2OC cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    tuple_T2OC cpy_r_r104;
    tuple_T2OC cpy_r_r105;
    cpy_r_has_failed = 0;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_kinds;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = cpy_r_r2;
    cpy_r_args = cpy_r_r1;
    cpy_r_arg_kinds = cpy_r_r3;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = cpy_r_r6 != 4;
    if (cpy_r_r7) goto CPyL65;
    cpy_r_r8 = CPyList_GetItemShort(cpy_r_arg_kinds, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 183, CPyStatic_semanal_newtype___globals);
        goto CPyL66;
    }
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_nodes___ArgKind))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "check_newtype_args", 183, CPyStatic_semanal_newtype___globals, "mypy.nodes.ArgKind", cpy_r_r8);
        goto CPyL66;
    }
    cpy_r_r10 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r10 == NULL)) {
        goto CPyL67;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 183, CPyStatic_semanal_newtype___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r12 = cpy_r_r9 != cpy_r_r10;
    CPy_DECREF(cpy_r_r9);
    if (cpy_r_r12) goto CPyL65;
    cpy_r_r13 = CPyList_GetItemShort(cpy_r_arg_kinds, 2);
    CPy_DECREF(cpy_r_arg_kinds);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 183, CPyStatic_semanal_newtype___globals);
        goto CPyL68;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_nodes___ArgKind))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "check_newtype_args", 183, CPyStatic_semanal_newtype___globals, "mypy.nodes.ArgKind", cpy_r_r13);
        goto CPyL68;
    }
    cpy_r_r15 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r15 == NULL)) {
        goto CPyL69;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 183, CPyStatic_semanal_newtype___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r17 = cpy_r_r14 != cpy_r_r15;
    CPy_DECREF(cpy_r_r14);
    if (cpy_r_r17) {
        goto CPyL70;
    } else
        goto CPyL15;
CPyL13: ;
    cpy_r_r18 = CPyStatics[5241]; /* 'NewType(...) expects exactly two positional arguments' */
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyDef_semanal_newtype___NewTypeAnalyzer___fail(cpy_r_self, cpy_r_r18, cpy_r_context, cpy_r_r19);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 184, CPyStatic_semanal_newtype___globals);
        goto CPyL64;
    }
    cpy_r_r21.f0 = 1;
    cpy_r_r21.f1 = 0;
    cpy_r_r22 = Py_None;
    cpy_r_r23.f0 = cpy_r_r22;
    cpy_r_r23.f1 = 0;
    CPy_INCREF(cpy_r_r23.f0);
    return cpy_r_r23;
CPyL15: ;
    cpy_r_r24 = CPyList_GetItemShortBorrow(cpy_r_args, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 188, CPyStatic_semanal_newtype___globals);
        goto CPyL68;
    }
    cpy_r_r25 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_r24)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    if (cpy_r_r28) goto CPyL19;
    cpy_r_r29 = CPyStatics[5242]; /* 'Argument 1 to NewType(...) must be a string literal' */
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPyDef_semanal_newtype___NewTypeAnalyzer___fail(cpy_r_self, cpy_r_r29, cpy_r_context, cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 189, CPyStatic_semanal_newtype___globals);
        goto CPyL68;
    }
    cpy_r_has_failed = 1;
    goto CPyL31;
CPyL19: ;
    cpy_r_r32 = CPyList_GetItemShortBorrow(cpy_r_args, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 191, CPyStatic_semanal_newtype___globals);
        goto CPyL68;
    }
    if (likely(Py_TYPE(cpy_r_r32) == CPyType_nodes___StrExpr))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "check_newtype_args", 191, CPyStatic_semanal_newtype___globals, "mypy.nodes.StrExpr", cpy_r_r32);
        goto CPyL68;
    }
    cpy_r_r34 = ((mypy___nodes___StrExprObject *)cpy_r_r33)->_value;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = PyUnicode_Compare(cpy_r_r34, cpy_r_name);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 == -1;
    if (!cpy_r_r36) goto CPyL24;
    cpy_r_r37 = PyErr_Occurred();
    cpy_r_r38 = cpy_r_r37 != NULL;
    if (!cpy_r_r38) goto CPyL24;
    cpy_r_r39 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 191, CPyStatic_semanal_newtype___globals);
        goto CPyL68;
    }
CPyL24: ;
    cpy_r_r40 = cpy_r_r35 != 0;
    if (!cpy_r_r40) goto CPyL31;
    cpy_r_r41 = CPyStatics[5243]; /* ('String argument 1 "{}" to NewType(...) does not match '
                                     'variable name "{}"') */
    CPy_INCREF(cpy_r_r41);
    cpy_r_msg = cpy_r_r41;
    cpy_r_r42 = CPyList_GetItemShortBorrow(cpy_r_args, 0);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 193, CPyStatic_semanal_newtype___globals);
        goto CPyL71;
    }
    if (likely(Py_TYPE(cpy_r_r42) == CPyType_nodes___StrExpr))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "check_newtype_args", 193, CPyStatic_semanal_newtype___globals, "mypy.nodes.StrExpr", cpy_r_r42);
        goto CPyL71;
    }
    cpy_r_r44 = ((mypy___nodes___StrExprObject *)cpy_r_r43)->_value;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r46[3] = {cpy_r_msg, cpy_r_r44, cpy_r_name};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = PyObject_VectorcallMethod(cpy_r_r45, cpy_r_r47, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 193, CPyStatic_semanal_newtype___globals);
        goto CPyL72;
    }
    CPy_DECREF(cpy_r_msg);
    CPy_DECREF(cpy_r_r44);
    if (likely(PyUnicode_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "check_newtype_args", 193, CPyStatic_semanal_newtype___globals, "str", cpy_r_r48);
        goto CPyL68;
    }
    cpy_r_r50 = NULL;
    cpy_r_r51 = CPyDef_semanal_newtype___NewTypeAnalyzer___fail(cpy_r_self, cpy_r_r49, cpy_r_context, cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 193, CPyStatic_semanal_newtype___globals);
        goto CPyL68;
    }
    cpy_r_has_failed = 1;
CPyL31: ;
    cpy_r_r52 = CPyStatics[5244]; /* 'Argument 2 to NewType(...) must be a valid type' */
    CPy_INCREF(cpy_r_r52);
    cpy_r_msg = cpy_r_r52;
    cpy_r_r53 = CPyList_GetItemShort(cpy_r_args, 2);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 199, CPyStatic_semanal_newtype___globals);
        goto CPyL37;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r53, CPyType_nodes___Expression)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "check_newtype_args", 199, CPyStatic_semanal_newtype___globals, "mypy.nodes.Expression", cpy_r_r53);
        goto CPyL37;
    }
    cpy_r_r55 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    cpy_r_r57 = CPY_GET_ATTR_TRAIT(cpy_r_r56, CPyType_semanal_shared___SemanticAnalyzerInterface, 27, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char); /* is_stub_file */
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 199, CPyStatic_semanal_newtype___globals);
        goto CPyL73;
    }
CPyL35: ;
    cpy_r_r58 = NULL;
    cpy_r_r59 = CPyDef_exprtotype___expr_to_unanalyzed_type(cpy_r_r54, cpy_r_r55, cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 199, CPyStatic_semanal_newtype___globals);
        goto CPyL37;
    }
    cpy_r_unanalyzed_type = cpy_r_r59;
    goto CPyL44;
CPyL37: ;
    cpy_r_r60 = CPy_CatchError();
    cpy_r_r61 = (PyObject *)CPyType_exprtotype___TypeTranslationError;
    cpy_r_r62 = CPy_ExceptionMatches(cpy_r_r61);
    if (!cpy_r_r62) goto CPyL74;
    cpy_r_r63 = NULL;
    cpy_r_r64 = CPyDef_semanal_newtype___NewTypeAnalyzer___fail(cpy_r_self, cpy_r_msg, cpy_r_context, cpy_r_r63);
    CPy_DecRef(cpy_r_msg);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 201, CPyStatic_semanal_newtype___globals);
        goto CPyL42;
    }
    cpy_r_r65.f0 = 1;
    cpy_r_r65.f1 = 0;
    cpy_r_r66 = Py_None;
    cpy_r_r67.f0 = cpy_r_r66;
    cpy_r_r67.f1 = 0;
    CPy_INCREF(cpy_r_r67.f0);
    CPy_RestoreExcInfo(cpy_r_r60);
    CPy_DecRef(cpy_r_r60.f0);
    CPy_DecRef(cpy_r_r60.f1);
    CPy_DecRef(cpy_r_r60.f2);
    return cpy_r_r67;
CPyL40: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL42;
    } else
        goto CPyL75;
CPyL41: ;
    CPy_Unreachable();
CPyL42: ;
    CPy_RestoreExcInfo(cpy_r_r60);
    CPy_DecRef(cpy_r_r60.f0);
    CPy_DecRef(cpy_r_r60.f1);
    CPy_DecRef(cpy_r_r60.f2);
    cpy_r_r68 = CPy_KeepPropagating();
    if (!cpy_r_r68) goto CPyL64;
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r69 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r69);
    cpy_r_r70 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_options;
    cpy_r_r71 = ((mypy___options___OptionsObject *)cpy_r_r70)->_disable_recursive_aliases;
    cpy_r_r72 = cpy_r_r71 ^ 1;
    if (cpy_r_r72) goto CPyL46;
    cpy_r_r73 = cpy_r_r72;
    goto CPyL48;
CPyL46: ;
    cpy_r_r74 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r74);
    cpy_r_r75 = CPY_GET_METHOD_TRAIT(cpy_r_r74, CPyType_semanal_shared___SemanticAnalyzerInterface, 28, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *))(cpy_r_r74); /* is_func_scope */
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 211, CPyStatic_semanal_newtype___globals);
        goto CPyL76;
    }
    cpy_r_r76 = cpy_r_r75 ^ 1;
    cpy_r_r73 = cpy_r_r76;
CPyL48: ;
    cpy_r_r77 = NULL;
    cpy_r_r78 = 2;
    cpy_r_r79 = 2;
    cpy_r_r80 = 2;
    cpy_r_r81 = NULL;
    cpy_r_r82 = CPY_GET_METHOD_TRAIT(cpy_r_r69, CPyType_semanal_shared___SemanticAnalyzerInterface, 4, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *, char, char, char, char, char, PyObject *))(cpy_r_r69, cpy_r_unanalyzed_type, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80, cpy_r_r73, 0, cpy_r_r81); /* anal_type */
    CPy_DECREF(cpy_r_unanalyzed_type);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 207, CPyStatic_semanal_newtype___globals);
        goto CPyL77;
    }
    cpy_r_r83 = CPyDef_types___get_proper_type(cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 206, CPyStatic_semanal_newtype___globals);
        goto CPyL77;
    }
    cpy_r_old_type = cpy_r_r83;
    cpy_r_should_defer = 0;
    cpy_r_r84 = (PyObject *)CPyType_types___PlaceholderType;
    cpy_r_r85 = (CPyPtr)&((PyObject *)cpy_r_old_type)->ob_type;
    cpy_r_r86 = *(PyObject * *)cpy_r_r85;
    cpy_r_r87 = cpy_r_r86 == cpy_r_r84;
    if (cpy_r_r87) {
        goto CPyL78;
    } else
        goto CPyL52;
CPyL51: ;
    cpy_r_r88 = Py_None;
    CPy_INCREF(cpy_r_r88);
    cpy_r_old_type = cpy_r_r88;
CPyL52: ;
    cpy_r_r89 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r90 = cpy_r_old_type == cpy_r_r89;
    if (!cpy_r_r90) goto CPyL54;
    cpy_r_should_defer = 1;
CPyL54: ;
    cpy_r_r91 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r92 = (CPyPtr)&((PyObject *)cpy_r_old_type)->ob_type;
    cpy_r_r93 = *(PyObject * *)cpy_r_r92;
    cpy_r_r94 = cpy_r_r93 == cpy_r_r91;
    if (!cpy_r_r94) goto CPyL79;
    CPy_INCREF(cpy_r_old_type);
    if (likely(Py_TYPE(cpy_r_old_type) == CPyType_types___AnyType))
        cpy_r_r95 = cpy_r_old_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "check_newtype_args", 222, CPyStatic_semanal_newtype___globals, "mypy.types.AnyType", cpy_r_old_type);
        goto CPyL80;
    }
    cpy_r_r96 = CPY_GET_ATTR(cpy_r_r95, CPyType_types___AnyType, 16, mypy___types___AnyTypeObject, char); /* is_from_error */
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 222, CPyStatic_semanal_newtype___globals);
        goto CPyL80;
    }
CPyL57: ;
    if (cpy_r_r96) {
        goto CPyL81;
    } else
        goto CPyL79;
CPyL58: ;
    cpy_r_r97 = NULL;
    cpy_r_r98 = CPyDef_semanal_newtype___NewTypeAnalyzer___fail(cpy_r_self, cpy_r_msg, cpy_r_context, cpy_r_r97);
    CPy_DECREF(cpy_r_msg);
    if (unlikely(cpy_r_r98 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 223, CPyStatic_semanal_newtype___globals);
        goto CPyL64;
    }
    cpy_r_r99.f0 = 1;
    cpy_r_r99.f1 = 0;
    cpy_r_r100 = Py_None;
    cpy_r_r101.f0 = cpy_r_r100;
    cpy_r_r101.f1 = 0;
    CPy_INCREF(cpy_r_r101.f0);
    return cpy_r_r101;
CPyL60: ;
    if (cpy_r_has_failed) {
        goto CPyL82;
    } else
        goto CPyL62;
CPyL61: ;
    cpy_r_r102 = Py_None;
    CPy_INCREF(cpy_r_r102);
    cpy_r_r103 = cpy_r_r102;
    goto CPyL63;
CPyL62: ;
    cpy_r_r103 = cpy_r_old_type;
CPyL63: ;
    cpy_r_r104.f0 = cpy_r_r103;
    cpy_r_r104.f1 = cpy_r_should_defer;
    CPy_INCREF(cpy_r_r104.f0);
    CPy_DECREF(cpy_r_r103);
    return cpy_r_r104;
CPyL64: ;
    tuple_T2OC __tmp6123 = { NULL, 2 };
    cpy_r_r105 = __tmp6123;
    return cpy_r_r105;
CPyL65: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_arg_kinds);
    goto CPyL13;
CPyL66: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_kinds);
    goto CPyL64;
CPyL67: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_r9);
    goto CPyL4;
CPyL68: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL64;
CPyL69: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r14);
    goto CPyL10;
CPyL70: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL13;
CPyL71: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_msg);
    goto CPyL64;
CPyL72: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_msg);
    CPy_DecRef(cpy_r_r44);
    goto CPyL64;
CPyL73: ;
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r55);
    goto CPyL37;
CPyL74: ;
    CPy_DecRef(cpy_r_msg);
    goto CPyL40;
CPyL75: ;
    CPy_DecRef(cpy_r_r60.f0);
    CPy_DecRef(cpy_r_r60.f1);
    CPy_DecRef(cpy_r_r60.f2);
    goto CPyL41;
CPyL76: ;
    CPy_DecRef(cpy_r_msg);
    CPy_DecRef(cpy_r_unanalyzed_type);
    CPy_DecRef(cpy_r_r69);
    goto CPyL64;
CPyL77: ;
    CPy_DecRef(cpy_r_msg);
    goto CPyL64;
CPyL78: ;
    CPy_DECREF(cpy_r_old_type);
    goto CPyL51;
CPyL79: ;
    CPy_DECREF(cpy_r_msg);
    goto CPyL60;
CPyL80: ;
    CPy_DecRef(cpy_r_msg);
    CPy_DecRef(cpy_r_old_type);
    goto CPyL64;
CPyL81: ;
    CPy_DECREF(cpy_r_old_type);
    goto CPyL58;
CPyL82: ;
    CPy_DECREF(cpy_r_old_type);
    goto CPyL61;
}

PyObject *CPyPy_semanal_newtype___NewTypeAnalyzer___check_newtype_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "call", "context", 0};
    static CPyArg_Parser parser = {"OOO:check_newtype_args", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_call;
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_call, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_newtype___NewTypeAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_newtype.NewTypeAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_call;
    if (likely(Py_TYPE(obj_call) == CPyType_nodes___CallExpr))
        arg_call = obj_call;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_call); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    tuple_T2OC retval = CPyDef_semanal_newtype___NewTypeAnalyzer___check_newtype_args(arg_self, arg_name, arg_call, arg_context);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6124 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp6124);
    PyObject *__tmp6125 = retval.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp6125);
    PyTuple_SET_ITEM(retbox, 1, __tmp6125);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_newtype.py", "check_newtype_args", 174, CPyStatic_semanal_newtype___globals);
    return NULL;
}

PyObject *CPyDef_semanal_newtype___NewTypeAnalyzer___build_newtype_typeinfo(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_old_type, PyObject *cpy_r_base_type, CPyTagged cpy_r_line, PyObject *cpy_r_existing_info) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyPtr cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    CPyPtr cpy_r_r38;
    CPyPtr cpy_r_r39;
    CPyPtr cpy_r_r40;
    int64_t cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyPtr cpy_r_r44;
    int64_t cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    CPyPtr cpy_r_r57;
    CPyPtr cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyTagged cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_signature;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_init_func;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_updated;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_previous_sym;
    PyObject *cpy_r_r98;
    CPyPtr cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    int32_t cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_existing_info != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL6;
    CPy_INCREF(cpy_r_existing_info);
    if (likely(cpy_r_existing_info != Py_None))
        cpy_r_r2 = cpy_r_existing_info;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 234, CPyStatic_semanal_newtype___globals, "mypy.nodes.TypeInfo", cpy_r_existing_info);
        goto CPyL62;
    }
    cpy_r_r3 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 234, CPyStatic_semanal_newtype___globals);
        goto CPyL62;
    }
    if (!cpy_r_r3) goto CPyL6;
    CPy_INCREF(cpy_r_existing_info);
    if (likely(cpy_r_existing_info != Py_None))
        cpy_r_r4 = cpy_r_existing_info;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 236, CPyStatic_semanal_newtype___globals, "mypy.nodes.TypeInfo", cpy_r_existing_info);
        goto CPyL62;
    }
    cpy_r_r5 = cpy_r_r4;
    goto CPyL8;
CPyL6: ;
    cpy_r_r6 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPY_GET_METHOD_TRAIT(cpy_r_r6, CPyType_semanal_shared___SemanticAnalyzerInterface, 6, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *, CPyTagged))(cpy_r_r6, cpy_r_name, cpy_r_base_type, cpy_r_line); /* basic_new_typeinfo */
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 236, CPyStatic_semanal_newtype___globals);
        goto CPyL62;
    }
    cpy_r_r5 = cpy_r_r7;
CPyL8: ;
    cpy_r_info = cpy_r_r5;
    cpy_r_r8 = PyList_New(1);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 237, CPyStatic_semanal_newtype___globals);
        goto CPyL63;
    }
    cpy_r_r9 = (CPyPtr)&((PyListObject *)cpy_r_r8)->ob_item;
    cpy_r_r10 = *(CPyPtr *)cpy_r_r9;
    CPy_INCREF(cpy_r_base_type);
    *(PyObject * *)cpy_r_r10 = cpy_r_base_type;
    if (((mypy___nodes___TypeInfoObject *)cpy_r_info)->_bases != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_info)->_bases);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_bases = cpy_r_r8;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 237, CPyStatic_semanal_newtype___globals);
        goto CPyL63;
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_is_newtype = 1;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 238, CPyStatic_semanal_newtype___globals);
        goto CPyL63;
    }
    cpy_r_r13 = CPyStatics[729]; /* 'self' */
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPyDef_nodes___Var(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 242, CPyStatic_semanal_newtype___globals);
        goto CPyL63;
    }
    cpy_r_r16 = CPY_INT_TAG;
    cpy_r_r17 = CPY_INT_TAG;
    cpy_r_r18 = CPyDef_types___NoneType(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 242, CPyStatic_semanal_newtype___globals);
        goto CPyL64;
    }
    cpy_r_r19 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r19 == NULL)) {
        goto CPyL65;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 242, CPyStatic_semanal_newtype___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r21 = Py_None;
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_nodes___Argument(cpy_r_r15, cpy_r_r18, cpy_r_r21, cpy_r_r19, cpy_r_r22);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 242, CPyStatic_semanal_newtype___globals);
        goto CPyL63;
    }
    cpy_r_r24 = CPyStatics[1095]; /* 'item' */
    cpy_r_r25 = CPyDef_semanal_newtype___NewTypeAnalyzer___make_argument(cpy_r_self, cpy_r_r24, cpy_r_old_type);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 243, CPyStatic_semanal_newtype___globals);
        goto CPyL66;
    }
    cpy_r_r26 = PyList_New(2);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 241, CPyStatic_semanal_newtype___globals);
        goto CPyL67;
    }
    cpy_r_r27 = (CPyPtr)&((PyListObject *)cpy_r_r26)->ob_item;
    cpy_r_r28 = *(CPyPtr *)cpy_r_r27;
    *(PyObject * *)cpy_r_r28 = cpy_r_r23;
    cpy_r_r29 = cpy_r_r28 + 8;
    *(PyObject * *)cpy_r_r29 = cpy_r_r25;
    cpy_r_args = cpy_r_r26;
    cpy_r_r30 = PyList_New(0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 246, CPyStatic_semanal_newtype___globals);
        goto CPyL68;
    }
    cpy_r_r31 = CPY_INT_TAG;
    cpy_r_r32 = CPY_INT_TAG;
    cpy_r_r33 = NULL;
    cpy_r_r34 = NULL;
    cpy_r_r35 = CPyDef_types___Instance(cpy_r_info, cpy_r_r30, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 246, CPyStatic_semanal_newtype___globals);
        goto CPyL68;
    }
    cpy_r_r36 = PyList_New(2);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 246, CPyStatic_semanal_newtype___globals);
        goto CPyL69;
    }
    cpy_r_r37 = (CPyPtr)&((PyListObject *)cpy_r_r36)->ob_item;
    cpy_r_r38 = *(CPyPtr *)cpy_r_r37;
    *(PyObject * *)cpy_r_r38 = cpy_r_r35;
    cpy_r_r39 = cpy_r_r38 + 8;
    CPy_INCREF(cpy_r_old_type);
    *(PyObject * *)cpy_r_r39 = cpy_r_old_type;
    cpy_r_r40 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r41 = *(int64_t *)cpy_r_r40;
    cpy_r_r42 = PyList_New(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 247, CPyStatic_semanal_newtype___globals);
        goto CPyL70;
    }
    cpy_r_r43 = 0;
CPyL24: ;
    cpy_r_r44 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r45 = *(int64_t *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 << 1;
    cpy_r_r47 = (Py_ssize_t)cpy_r_r43 < (Py_ssize_t)cpy_r_r46;
    if (!cpy_r_r47) goto CPyL28;
    cpy_r_r48 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r43);
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_nodes___Argument))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 247, CPyStatic_semanal_newtype___globals, "mypy.nodes.Argument", cpy_r_r48);
        goto CPyL71;
    }
    cpy_r_arg = cpy_r_r49;
    cpy_r_r50 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_kind;
    CPy_INCREF(cpy_r_r50);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r51 = CPyList_SetItemUnsafe(cpy_r_r42, cpy_r_r43, cpy_r_r50);
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 247, CPyStatic_semanal_newtype___globals);
        goto CPyL71;
    }
    cpy_r_r52 = cpy_r_r43 + 2;
    cpy_r_r43 = cpy_r_r52;
    goto CPyL24;
CPyL28: ;
    cpy_r_r53 = CPyStatics[729]; /* 'self' */
    cpy_r_r54 = CPyStatics[1095]; /* 'item' */
    cpy_r_r55 = PyList_New(2);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 248, CPyStatic_semanal_newtype___globals);
        goto CPyL71;
    }
    cpy_r_r56 = (CPyPtr)&((PyListObject *)cpy_r_r55)->ob_item;
    cpy_r_r57 = *(CPyPtr *)cpy_r_r56;
    CPy_INCREF(cpy_r_r53);
    *(PyObject * *)cpy_r_r57 = cpy_r_r53;
    cpy_r_r58 = cpy_r_r57 + 8;
    CPy_INCREF(cpy_r_r54);
    *(PyObject * *)cpy_r_r58 = cpy_r_r54;
    cpy_r_r59 = CPY_INT_TAG;
    cpy_r_r60 = CPY_INT_TAG;
    cpy_r_r61 = CPyDef_types___NoneType(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 249, CPyStatic_semanal_newtype___globals);
        goto CPyL72;
    }
    cpy_r_r62 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r64 = NULL;
    cpy_r_r65 = CPY_GET_METHOD_TRAIT(cpy_r_r62, CPyType_semanal_shared___SemanticAnalyzerInterface, 1, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r62, cpy_r_r63, cpy_r_r64); /* named_type */
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 250, CPyStatic_semanal_newtype___globals);
        goto CPyL73;
    }
    cpy_r_r66 = NULL;
    cpy_r_r67 = NULL;
    cpy_r_r68 = CPY_INT_TAG;
    cpy_r_r69 = CPY_INT_TAG;
    cpy_r_r70 = 2;
    cpy_r_r71 = 2;
    cpy_r_r72 = NULL;
    cpy_r_r73 = 2;
    cpy_r_r74 = NULL;
    cpy_r_r75 = NULL;
    cpy_r_r76 = NULL;
    cpy_r_r77 = 2;
    cpy_r_r78 = 2;
    cpy_r_r79 = CPyDef_types___CallableType(cpy_r_r36, cpy_r_r42, cpy_r_r55, cpy_r_r61, cpy_r_r65, cpy_r_name, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_r71, cpy_r_r72, cpy_r_r73, cpy_r_r74, cpy_r_r75, cpy_r_r76, cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 245, CPyStatic_semanal_newtype___globals);
        goto CPyL68;
    }
    cpy_r_signature = cpy_r_r79;
    cpy_r_r80 = CPyStatics[288]; /* '__init__' */
    cpy_r_r81 = PyList_New(0);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 253, CPyStatic_semanal_newtype___globals);
        goto CPyL74;
    }
    cpy_r_r82 = CPyDef_nodes___Block(cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 253, CPyStatic_semanal_newtype___globals);
        goto CPyL74;
    }
    cpy_r_r83 = CPyDef_nodes___FuncDef(cpy_r_r80, cpy_r_args, cpy_r_r82, cpy_r_signature);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r82);
    CPy_DECREF(cpy_r_signature);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 253, CPyStatic_semanal_newtype___globals);
        goto CPyL63;
    }
    cpy_r_init_func = cpy_r_r83;
    CPy_INCREF(cpy_r_info);
    CPy_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_init_func)->_info);
    ((mypy___nodes___FuncDefObject *)cpy_r_init_func)->_info = cpy_r_info;
    cpy_r_r85 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 255, CPyStatic_semanal_newtype___globals);
        goto CPyL75;
    }
CPyL36: ;
    cpy_r_r86 = CPyStatics[5245]; /* '.__init__' */
    cpy_r_r87 = PyUnicode_Concat(cpy_r_r85, cpy_r_r86);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 255, CPyStatic_semanal_newtype___globals);
        goto CPyL75;
    }
    CPy_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_init_func)->__fullname);
    ((mypy___nodes___FuncDefObject *)cpy_r_init_func)->__fullname = cpy_r_r87;
    cpy_r_r89 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r90 = cpy_r_existing_info != cpy_r_r89;
    if (!cpy_r_r90) goto CPyL41;
    CPy_INCREF(cpy_r_existing_info);
    if (likely(cpy_r_existing_info != Py_None))
        cpy_r_r91 = cpy_r_existing_info;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 234, CPyStatic_semanal_newtype___globals, "mypy.nodes.TypeInfo", cpy_r_existing_info);
        goto CPyL75;
    }
    cpy_r_r92 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 234, CPyStatic_semanal_newtype___globals);
        goto CPyL75;
    }
    if (cpy_r_r92) goto CPyL42;
CPyL41: ;
    cpy_r_updated = 1;
    goto CPyL55;
CPyL42: ;
    cpy_r_r93 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AttributeError("mypy/semanal_newtype.py", "build_newtype_typeinfo", "TypeInfo", "names", 259, CPyStatic_semanal_newtype___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r93);
CPyL43: ;
    cpy_r_r94 = CPyStatics[288]; /* '__init__' */
    cpy_r_r95 = CPyDict_GetItem(cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 259, CPyStatic_semanal_newtype___globals);
        goto CPyL75;
    }
    if (likely(Py_TYPE(cpy_r_r95) == CPyType_nodes___SymbolTableNode))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 259, CPyStatic_semanal_newtype___globals, "mypy.nodes.SymbolTableNode", cpy_r_r95);
        goto CPyL75;
    }
    cpy_r_r97 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r96)->_node;
    CPy_INCREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r96);
    cpy_r_previous_sym = cpy_r_r97;
    cpy_r_r98 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r99 = (CPyPtr)&((PyObject *)cpy_r_previous_sym)->ob_type;
    cpy_r_r100 = *(PyObject * *)cpy_r_r99;
    cpy_r_r101 = cpy_r_r100 == cpy_r_r98;
    if (cpy_r_r101) {
        goto CPyL48;
    } else
        goto CPyL76;
CPyL46: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r102 = 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 260, CPyStatic_semanal_newtype___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL48: ;
    if (likely(Py_TYPE(cpy_r_previous_sym) == CPyType_nodes___FuncDef))
        cpy_r_r103 = cpy_r_previous_sym;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 261, CPyStatic_semanal_newtype___globals, "mypy.nodes.FuncDef", cpy_r_previous_sym);
        goto CPyL77;
    }
    cpy_r_r104 = ((mypy___nodes___FuncDefObject *)cpy_r_r103)->_arguments;
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AttributeError("mypy/semanal_newtype.py", "build_newtype_typeinfo", "FuncDef", "arguments", 261, CPyStatic_semanal_newtype___globals);
        goto CPyL77;
    }
CPyL50: ;
    cpy_r_r105 = CPyList_GetItemShortBorrow(cpy_r_r104, 2);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 261, CPyStatic_semanal_newtype___globals);
        goto CPyL77;
    }
    if (likely(Py_TYPE(cpy_r_r105) == CPyType_nodes___Argument))
        cpy_r_r106 = cpy_r_r105;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 261, CPyStatic_semanal_newtype___globals, "mypy.nodes.Argument", cpy_r_r105);
        goto CPyL77;
    }
    cpy_r_r107 = ((mypy___nodes___ArgumentObject *)cpy_r_r106)->_variable;
    cpy_r_r108 = ((mypy___nodes___VarObject *)cpy_r_r107)->_type;
    CPy_INCREF(cpy_r_r108);
    CPy_DECREF(cpy_r_previous_sym);
    cpy_r_r109 = PyObject_RichCompare(cpy_r_old_type, cpy_r_r108, 3);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 261, CPyStatic_semanal_newtype___globals);
        goto CPyL75;
    }
    if (unlikely(!PyBool_Check(cpy_r_r109))) {
        CPy_TypeError("bool", cpy_r_r109); cpy_r_r110 = 2;
    } else
        cpy_r_r110 = cpy_r_r109 == Py_True;
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r110 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 261, CPyStatic_semanal_newtype___globals);
        goto CPyL75;
    }
    cpy_r_updated = cpy_r_r110;
CPyL55: ;
    cpy_r_r111 = 2;
    cpy_r_r112 = 2;
    cpy_r_r113 = 2;
    cpy_r_r114 = 2;
    cpy_r_r115 = 2;
    cpy_r_r116 = CPyDef_nodes___SymbolTableNode(4, cpy_r_init_func, cpy_r_r111, cpy_r_r112, cpy_r_r113, cpy_r_r114, cpy_r_r115);
    CPy_DECREF(cpy_r_init_func);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 262, CPyStatic_semanal_newtype___globals);
        goto CPyL63;
    }
    cpy_r_r117 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AttributeError("mypy/semanal_newtype.py", "build_newtype_typeinfo", "TypeInfo", "names", 262, CPyStatic_semanal_newtype___globals);
        goto CPyL78;
    }
    CPy_INCREF(cpy_r_r117);
CPyL57: ;
    cpy_r_r118 = CPyStatics[288]; /* '__init__' */
    cpy_r_r119 = CPyDict_SetItem(cpy_r_r117, cpy_r_r118, cpy_r_r116);
    CPy_DECREF(cpy_r_r117);
    CPy_DECREF(cpy_r_r116);
    cpy_r_r120 = cpy_r_r119 >= 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 262, CPyStatic_semanal_newtype___globals);
        goto CPyL63;
    }
    cpy_r_r121 = CPyDef_semanal_shared___has_placeholder(cpy_r_old_type);
    if (unlikely(cpy_r_r121 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 264, CPyStatic_semanal_newtype___globals);
        goto CPyL63;
    }
    if (!cpy_r_r121) goto CPyL61;
    cpy_r_r122 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r122);
    cpy_r_r123 = CPyStatics[5246]; /* 'NewType base' */
    cpy_r_r124 = Py_None;
    cpy_r_r125 = CPY_GET_METHOD_TRAIT(cpy_r_r122, CPyType_semanal_shared___SemanticAnalyzerInterface, 15, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *, char))(cpy_r_r122, cpy_r_r124, cpy_r_r123, cpy_r_info, cpy_r_updated); /* process_placeholder */
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r125 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 265, CPyStatic_semanal_newtype___globals);
        goto CPyL63;
    }
CPyL61: ;
    return cpy_r_info;
CPyL62: ;
    cpy_r_r126 = NULL;
    return cpy_r_r126;
CPyL63: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL62;
CPyL64: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r15);
    goto CPyL62;
CPyL65: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r18);
    goto CPyL14;
CPyL66: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r23);
    goto CPyL62;
CPyL67: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r25);
    goto CPyL62;
CPyL68: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_args);
    goto CPyL62;
CPyL69: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r35);
    goto CPyL62;
CPyL70: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r36);
    goto CPyL62;
CPyL71: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r42);
    goto CPyL62;
CPyL72: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r55);
    goto CPyL62;
CPyL73: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r61);
    goto CPyL62;
CPyL74: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_signature);
    goto CPyL62;
CPyL75: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_init_func);
    goto CPyL62;
CPyL76: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_init_func);
    CPy_DECREF(cpy_r_previous_sym);
    goto CPyL46;
CPyL77: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_init_func);
    CPy_DecRef(cpy_r_previous_sym);
    goto CPyL62;
CPyL78: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r116);
    goto CPyL62;
}

PyObject *CPyPy_semanal_newtype___NewTypeAnalyzer___build_newtype_typeinfo(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "old_type", "base_type", "line", "existing_info", 0};
    static CPyArg_Parser parser = {"OOOOO:build_newtype_typeinfo", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_old_type;
    PyObject *obj_base_type;
    PyObject *obj_line;
    PyObject *obj_existing_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_old_type, &obj_base_type, &obj_line, &obj_existing_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_newtype___NewTypeAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_newtype.NewTypeAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_old_type;
    if (likely(PyObject_TypeCheck(obj_old_type, CPyType_types___Type)))
        arg_old_type = obj_old_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_old_type); 
        goto fail;
    }
    PyObject *arg_base_type;
    if (likely(Py_TYPE(obj_base_type) == CPyType_types___Instance))
        arg_base_type = obj_base_type;
    else {
        CPy_TypeError("mypy.types.Instance", obj_base_type); 
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
    if (arg_existing_info != NULL) goto __LL6126;
    if (obj_existing_info == Py_None)
        arg_existing_info = obj_existing_info;
    else {
        arg_existing_info = NULL;
    }
    if (arg_existing_info != NULL) goto __LL6126;
    CPy_TypeError("mypy.nodes.TypeInfo or None", obj_existing_info); 
    goto fail;
__LL6126: ;
    PyObject *retval = CPyDef_semanal_newtype___NewTypeAnalyzer___build_newtype_typeinfo(arg_self, arg_name, arg_old_type, arg_base_type, arg_line, arg_existing_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_newtype.py", "build_newtype_typeinfo", 228, CPyStatic_semanal_newtype___globals);
    return NULL;
}

PyObject *CPyDef_semanal_newtype___NewTypeAnalyzer___make_argument(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = NULL;
    cpy_r_r1 = CPyDef_nodes___Var(cpy_r_name, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "make_argument", 271, CPyStatic_semanal_newtype___globals);
        goto CPyL6;
    }
    cpy_r_r2 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r2 == NULL)) {
        goto CPyL7;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "make_argument", 271, CPyStatic_semanal_newtype___globals);
        goto CPyL6;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r4 = Py_None;
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_nodes___Argument(cpy_r_r1, cpy_r_type, cpy_r_r4, cpy_r_r2, cpy_r_r5);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "make_argument", 271, CPyStatic_semanal_newtype___globals);
        goto CPyL6;
    }
    return cpy_r_r6;
CPyL6: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL2;
}

PyObject *CPyPy_semanal_newtype___NewTypeAnalyzer___make_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "type", 0};
    static CPyArg_Parser parser = {"OO:make_argument", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_newtype___NewTypeAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_newtype.NewTypeAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_type;
    if (likely(PyObject_TypeCheck(obj_type, CPyType_types___Type)))
        arg_type = obj_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_type); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_newtype___NewTypeAnalyzer___make_argument(arg_self, arg_name, arg_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_newtype.py", "make_argument", 270, CPyStatic_semanal_newtype___globals);
    return NULL;
}

char CPyDef_semanal_newtype___NewTypeAnalyzer___fail(PyObject *cpy_r_self, PyObject *cpy_r_msg, PyObject *cpy_r_ctx, PyObject *cpy_r_code) {
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
    cpy_r_r1 = ((mypy___semanal_newtype___NewTypeAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 2;
    cpy_r_r3 = 2;
    cpy_r_r4 = CPY_GET_METHOD_TRAIT(cpy_r_r1, CPyType_semanal_shared___SemanticAnalyzerInterface, 19, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r1, cpy_r_msg, cpy_r_ctx, cpy_r_r2, cpy_r_r3, cpy_r_code); /* fail */
    CPy_DECREF(cpy_r_code);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "fail", 274, CPyStatic_semanal_newtype___globals);
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

PyObject *CPyPy_semanal_newtype___NewTypeAnalyzer___fail(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_newtype___NewTypeAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_newtype.NewTypeAnalyzer", obj_self); 
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
        goto __LL6127;
    }
    if (PyObject_TypeCheck(obj_code, CPyType_errorcodes___ErrorCode))
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL6127;
    if (obj_code == Py_None)
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL6127;
    CPy_TypeError("mypy.errorcodes.ErrorCode or None", obj_code); 
    goto fail;
__LL6127: ;
    char retval = CPyDef_semanal_newtype___NewTypeAnalyzer___fail(arg_self, arg_msg, arg_ctx, arg_code);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_newtype.py", "fail", 273, CPyStatic_semanal_newtype___globals);
    return NULL;
}

char CPyDef_semanal_newtype_____top_level__(void) {
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
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "<module>", -1, CPyStatic_semanal_newtype___globals);
        goto CPyL19;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_semanal_newtype___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "<module>", 6, CPyStatic_semanal_newtype___globals);
        goto CPyL19;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9141]; /* ('errorcodes',) */
    cpy_r_r10 = CPyStatics[9142]; /* ('codes',) */
    cpy_r_r11 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r12 = CPyStatic_semanal_newtype___globals;
    cpy_r_r13 = CPyImport_ImportFromMany(cpy_r_r11, cpy_r_r9, cpy_r_r10, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "<module>", 8, CPyStatic_semanal_newtype___globals);
        goto CPyL19;
    }
    CPyModule_mypy = cpy_r_r13;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r14 = CPyStatics[9515]; /* ('ErrorCode',) */
    cpy_r_r15 = CPyStatics[924]; /* 'mypy.errorcodes' */
    cpy_r_r16 = CPyStatic_semanal_newtype___globals;
    cpy_r_r17 = CPyImport_ImportFromMany(cpy_r_r15, cpy_r_r14, cpy_r_r14, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "<module>", 9, CPyStatic_semanal_newtype___globals);
        goto CPyL19;
    }
    CPyModule_mypy___errorcodes = cpy_r_r17;
    CPy_INCREF(CPyModule_mypy___errorcodes);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r18 = CPyStatics[9586]; /* ('TypeTranslationError', 'expr_to_unanalyzed_type') */
    cpy_r_r19 = CPyStatics[2338]; /* 'mypy.exprtotype' */
    cpy_r_r20 = CPyStatic_semanal_newtype___globals;
    cpy_r_r21 = CPyImport_ImportFromMany(cpy_r_r19, cpy_r_r18, cpy_r_r18, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "<module>", 10, CPyStatic_semanal_newtype___globals);
        goto CPyL19;
    }
    CPyModule_mypy___exprtotype = cpy_r_r21;
    CPy_INCREF(CPyModule_mypy___exprtotype);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r22 = CPyStatics[9723]; /* ('MessageBuilder', 'format_type') */
    cpy_r_r23 = CPyStatics[530]; /* 'mypy.messages' */
    cpy_r_r24 = CPyStatic_semanal_newtype___globals;
    cpy_r_r25 = CPyImport_ImportFromMany(cpy_r_r23, cpy_r_r22, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "<module>", 11, CPyStatic_semanal_newtype___globals);
        goto CPyL19;
    }
    CPyModule_mypy___messages = cpy_r_r25;
    CPy_INCREF(CPyModule_mypy___messages);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r26 = CPyStatics[9724]; /* ('ARG_POS', 'MDEF', 'Argument', 'AssignmentStmt',
                                     'Block', 'CallExpr', 'Context', 'FuncDef', 'NameExpr',
                                     'NewTypeExpr', 'PlaceholderNode', 'RefExpr', 'StrExpr',
                                     'SymbolTableNode', 'TypeInfo', 'Var') */
    cpy_r_r27 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r28 = CPyStatic_semanal_newtype___globals;
    cpy_r_r29 = CPyImport_ImportFromMany(cpy_r_r27, cpy_r_r26, cpy_r_r26, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "<module>", 12, CPyStatic_semanal_newtype___globals);
        goto CPyL19;
    }
    CPyModule_mypy___nodes = cpy_r_r29;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r30 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r31 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r32 = CPyStatic_semanal_newtype___globals;
    cpy_r_r33 = CPyImport_ImportFromMany(cpy_r_r31, cpy_r_r30, cpy_r_r30, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "<module>", 30, CPyStatic_semanal_newtype___globals);
        goto CPyL19;
    }
    CPyModule_mypy___options = cpy_r_r33;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r34 = CPyStatics[9725]; /* ('SemanticAnalyzerInterface', 'has_placeholder') */
    cpy_r_r35 = CPyStatics[4478]; /* 'mypy.semanal_shared' */
    cpy_r_r36 = CPyStatic_semanal_newtype___globals;
    cpy_r_r37 = CPyImport_ImportFromMany(cpy_r_r35, cpy_r_r34, cpy_r_r34, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "<module>", 31, CPyStatic_semanal_newtype___globals);
        goto CPyL19;
    }
    CPyModule_mypy___semanal_shared = cpy_r_r37;
    CPy_INCREF(CPyModule_mypy___semanal_shared);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r38 = CPyStatics[9726]; /* ('check_for_explicit_any',
                                     'has_any_from_unimported_type') */
    cpy_r_r39 = CPyStatics[1035]; /* 'mypy.typeanal' */
    cpy_r_r40 = CPyStatic_semanal_newtype___globals;
    cpy_r_r41 = CPyImport_ImportFromMany(cpy_r_r39, cpy_r_r38, cpy_r_r38, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "<module>", 32, CPyStatic_semanal_newtype___globals);
        goto CPyL19;
    }
    CPyModule_mypy___typeanal = cpy_r_r41;
    CPy_INCREF(CPyModule_mypy___typeanal);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r42 = CPyStatics[9727]; /* ('AnyType', 'CallableType', 'Instance', 'NoneType',
                                     'PlaceholderType', 'TupleType', 'Type', 'TypeOfAny',
                                     'get_proper_type') */
    cpy_r_r43 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r44 = CPyStatic_semanal_newtype___globals;
    cpy_r_r45 = CPyImport_ImportFromMany(cpy_r_r43, cpy_r_r42, cpy_r_r42, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "<module>", 33, CPyStatic_semanal_newtype___globals);
        goto CPyL19;
    }
    CPyModule_mypy___types = cpy_r_r45;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r46 = NULL;
    cpy_r_r47 = CPyStatics[5068]; /* 'mypy.semanal_newtype' */
    cpy_r_r48 = (PyObject *)CPyType_semanal_newtype___NewTypeAnalyzer_template;
    cpy_r_r49 = CPyType_FromTemplate(cpy_r_r48, cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "<module>", 46, CPyStatic_semanal_newtype___globals);
        goto CPyL19;
    }
    cpy_r_r50 = CPyDef_semanal_newtype___NewTypeAnalyzer_trait_vtable_setup();
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "<module>", -1, CPyStatic_semanal_newtype___globals);
        goto CPyL20;
    }
    cpy_r_r51 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r52 = CPyStatics[159]; /* 'options' */
    cpy_r_r53 = CPyStatics[4369]; /* 'api' */
    cpy_r_r54 = CPyStatics[1098]; /* 'msg' */
    cpy_r_r55 = PyTuple_Pack(3, cpy_r_r52, cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "<module>", 46, CPyStatic_semanal_newtype___globals);
        goto CPyL20;
    }
    cpy_r_r56 = PyObject_SetAttr(cpy_r_r49, cpy_r_r51, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "<module>", 46, CPyStatic_semanal_newtype___globals);
        goto CPyL20;
    }
    CPyType_semanal_newtype___NewTypeAnalyzer = (PyTypeObject *)cpy_r_r49;
    CPy_INCREF(CPyType_semanal_newtype___NewTypeAnalyzer);
    cpy_r_r58 = CPyStatic_semanal_newtype___globals;
    cpy_r_r59 = CPyStatics[5067]; /* 'NewTypeAnalyzer' */
    cpy_r_r60 = CPyDict_SetItem(cpy_r_r58, cpy_r_r59, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/semanal_newtype.py", "<module>", 46, CPyStatic_semanal_newtype___globals);
        goto CPyL19;
    }
    return 1;
CPyL19: ;
    cpy_r_r62 = 2;
    return cpy_r_r62;
CPyL20: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL19;
}
