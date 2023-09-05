#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
argmap___ArgTypeExpander_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *argmap___ArgTypeExpander_setup(PyTypeObject *type);
PyObject *CPyDef_argmap___ArgTypeExpander(PyObject *cpy_r_context);

static PyObject *
argmap___ArgTypeExpander_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_argmap___ArgTypeExpander) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = argmap___ArgTypeExpander_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_argmap___ArgTypeExpander_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
argmap___ArgTypeExpander_traverse(mypy___argmap___ArgTypeExpanderObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_tuple_index)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_tuple_index));
    }
    Py_VISIT(self->_kwargs_used);
    Py_VISIT(self->_context);
    return 0;
}

static int
argmap___ArgTypeExpander_clear(mypy___argmap___ArgTypeExpanderObject *self)
{
    if (CPyTagged_CheckLong(self->_tuple_index)) {
        CPyTagged __tmp = self->_tuple_index;
        self->_tuple_index = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_kwargs_used);
    Py_CLEAR(self->_context);
    return 0;
}

static void
argmap___ArgTypeExpander_dealloc(mypy___argmap___ArgTypeExpanderObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, argmap___ArgTypeExpander_dealloc)
    argmap___ArgTypeExpander_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem argmap___ArgTypeExpander_vtable[2];
static bool
CPyDef_argmap___ArgTypeExpander_trait_vtable_setup(void)
{
    CPyVTableItem argmap___ArgTypeExpander_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_argmap___ArgTypeExpander_____init__,
        (CPyVTableItem)CPyDef_argmap___ArgTypeExpander___expand_actual_type,
    };
    memcpy(argmap___ArgTypeExpander_vtable, argmap___ArgTypeExpander_vtable_scratch, sizeof(argmap___ArgTypeExpander_vtable));
    return 1;
}

static PyObject *
argmap___ArgTypeExpander_get_tuple_index(mypy___argmap___ArgTypeExpanderObject *self, void *closure);
static int
argmap___ArgTypeExpander_set_tuple_index(mypy___argmap___ArgTypeExpanderObject *self, PyObject *value, void *closure);
static PyObject *
argmap___ArgTypeExpander_get_kwargs_used(mypy___argmap___ArgTypeExpanderObject *self, void *closure);
static int
argmap___ArgTypeExpander_set_kwargs_used(mypy___argmap___ArgTypeExpanderObject *self, PyObject *value, void *closure);
static PyObject *
argmap___ArgTypeExpander_get_context(mypy___argmap___ArgTypeExpanderObject *self, void *closure);
static int
argmap___ArgTypeExpander_set_context(mypy___argmap___ArgTypeExpanderObject *self, PyObject *value, void *closure);

static PyGetSetDef argmap___ArgTypeExpander_getseters[] = {
    {"tuple_index",
     (getter)argmap___ArgTypeExpander_get_tuple_index, (setter)argmap___ArgTypeExpander_set_tuple_index,
     NULL, NULL},
    {"kwargs_used",
     (getter)argmap___ArgTypeExpander_get_kwargs_used, (setter)argmap___ArgTypeExpander_set_kwargs_used,
     NULL, NULL},
    {"context",
     (getter)argmap___ArgTypeExpander_get_context, (setter)argmap___ArgTypeExpander_set_context,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef argmap___ArgTypeExpander_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_argmap___ArgTypeExpander_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"expand_actual_type",
     (PyCFunction)CPyPy_argmap___ArgTypeExpander___expand_actual_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_argmap___ArgTypeExpander_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ArgTypeExpander",
    .tp_new = argmap___ArgTypeExpander_new,
    .tp_dealloc = (destructor)argmap___ArgTypeExpander_dealloc,
    .tp_traverse = (traverseproc)argmap___ArgTypeExpander_traverse,
    .tp_clear = (inquiry)argmap___ArgTypeExpander_clear,
    .tp_getset = argmap___ArgTypeExpander_getseters,
    .tp_methods = argmap___ArgTypeExpander_methods,
    .tp_init = argmap___ArgTypeExpander_init,
    .tp_basicsize = sizeof(mypy___argmap___ArgTypeExpanderObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_argmap___ArgTypeExpander_template = &CPyType_argmap___ArgTypeExpander_template_;

static PyObject *
argmap___ArgTypeExpander_setup(PyTypeObject *type)
{
    mypy___argmap___ArgTypeExpanderObject *self;
    self = (mypy___argmap___ArgTypeExpanderObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = argmap___ArgTypeExpander_vtable;
    self->_tuple_index = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_argmap___ArgTypeExpander(PyObject *cpy_r_context)
{
    PyObject *self = argmap___ArgTypeExpander_setup(CPyType_argmap___ArgTypeExpander);
    if (self == NULL)
        return NULL;
    char res = CPyDef_argmap___ArgTypeExpander_____init__(self, cpy_r_context);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
argmap___ArgTypeExpander_get_tuple_index(mypy___argmap___ArgTypeExpanderObject *self, void *closure)
{
    if (unlikely(self->_tuple_index == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'tuple_index' of 'ArgTypeExpander' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_tuple_index);
    PyObject *retval = CPyTagged_StealAsObject(self->_tuple_index);
    return retval;
}

static int
argmap___ArgTypeExpander_set_tuple_index(mypy___argmap___ArgTypeExpanderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ArgTypeExpander' object attribute 'tuple_index' cannot be deleted");
        return -1;
    }
    if (self->_tuple_index != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_tuple_index);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_tuple_index = tmp;
    return 0;
}

static PyObject *
argmap___ArgTypeExpander_get_kwargs_used(mypy___argmap___ArgTypeExpanderObject *self, void *closure)
{
    if (unlikely(self->_kwargs_used == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'kwargs_used' of 'ArgTypeExpander' undefined");
        return NULL;
    }
    CPy_INCREF(self->_kwargs_used);
    PyObject *retval = self->_kwargs_used;
    return retval;
}

static int
argmap___ArgTypeExpander_set_kwargs_used(mypy___argmap___ArgTypeExpanderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ArgTypeExpander' object attribute 'kwargs_used' cannot be deleted");
        return -1;
    }
    if (self->_kwargs_used != NULL) {
        CPy_DECREF(self->_kwargs_used);
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
    self->_kwargs_used = tmp;
    return 0;
}

static PyObject *
argmap___ArgTypeExpander_get_context(mypy___argmap___ArgTypeExpanderObject *self, void *closure)
{
    if (unlikely(self->_context == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'context' of 'ArgTypeExpander' undefined");
        return NULL;
    }
    CPy_INCREF(self->_context);
    PyObject *retval = self->_context;
    return retval;
}

static int
argmap___ArgTypeExpander_set_context(mypy___argmap___ArgTypeExpanderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ArgTypeExpander' object attribute 'context' cannot be deleted");
        return -1;
    }
    if (self->_context != NULL) {
        CPy_DECREF(self->_context);
    }
    PyObject * tmp;
    if (likely(PyTuple_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("tuple", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_context = tmp;
    return 0;
}
static PyMethodDef argmapmodule_methods[] = {
    {"map_actuals_to_formals", (PyCFunction)CPyPy_argmap___map_actuals_to_formals, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"map_formals_to_actuals", (PyCFunction)CPyPy_argmap___map_formals_to_actuals, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef argmapmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.argmap",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    argmapmodule_methods
};

PyObject *CPyInit_mypy___argmap(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___argmap_internal) {
        Py_INCREF(CPyModule_mypy___argmap_internal);
        return CPyModule_mypy___argmap_internal;
    }
    CPyModule_mypy___argmap_internal = PyModule_Create(&argmapmodule);
    if (unlikely(CPyModule_mypy___argmap_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___argmap_internal, "__name__");
    CPyStatic_argmap___globals = PyModule_GetDict(CPyModule_mypy___argmap_internal);
    if (unlikely(CPyStatic_argmap___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_argmap_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___argmap_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___argmap_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_argmap___ArgTypeExpander);
    return NULL;
}

PyObject *CPyDef_argmap___map_actuals_to_formals(PyObject *cpy_r_actual_kinds, PyObject *cpy_r_actual_names, PyObject *cpy_r_formal_kinds, PyObject *cpy_r_formal_names, PyObject *cpy_r_actual_arg_type) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_nformals;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r5;
    char cpy_r_r6;
    int64_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_formal_to_actual;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_ambiguous_actual_kwargs;
    CPyTagged cpy_r_fi;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_ai;
    CPyTagged cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_actual_kind;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    int64_t cpy_r_r29;
    char cpy_r_r30;
    int64_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject **cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_actualt;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    int64_t cpy_r_r75;
    CPyTagged cpy_r_r76;
    CPyTagged cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r__;
    char cpy_r_r79;
    int64_t cpy_r_r80;
    char cpy_r_r81;
    int64_t cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    CPyTagged cpy_r_r101;
    CPyTagged cpy_r_r102;
    PyObject *cpy_r_r103;
    int64_t cpy_r_r104;
    char cpy_r_r105;
    int64_t cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject **cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    char cpy_r_r128;
    CPyTagged cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject **cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_name;
    int32_t cpy_r_r143;
    char cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject **cpy_r_r148;
    PyObject *cpy_r_r149;
    CPyTagged cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    int32_t cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    CPyTagged cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    int32_t cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    char cpy_r_r170;
    char cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject **cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    CPyPtr cpy_r_r181;
    PyObject *cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    CPyTagged cpy_r_r186;
    int64_t cpy_r_r187;
    CPyTagged cpy_r_r188;
    PyObject *cpy_r_r189;
    tuple_T3CIO cpy_r_r190;
    CPyTagged cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    int32_t cpy_r_r196;
    char cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject **cpy_r_r202;
    PyObject *cpy_r_r203;
    CPyTagged cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    int32_t cpy_r_r208;
    char cpy_r_r209;
    PyObject *cpy_r_r210;
    char cpy_r_r211;
    int32_t cpy_r_r212;
    char cpy_r_r213;
    char cpy_r_r214;
    PyObject *cpy_r_r215;
    char cpy_r_r216;
    CPyTagged cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    int32_t cpy_r_r221;
    char cpy_r_r222;
    char cpy_r_r223;
    char cpy_r_r224;
    PyObject *cpy_r_r225;
    int32_t cpy_r_r226;
    char cpy_r_r227;
    CPyTagged cpy_r_r228;
    CPyTagged cpy_r_r229;
    CPyPtr cpy_r_r230;
    int64_t cpy_r_r231;
    CPyTagged cpy_r_r232;
    char cpy_r_r233;
    PyObject *cpy_r_r234;
    CPyTagged cpy_r_r235;
    CPyTagged cpy_r_fi_2;
    int64_t cpy_r_r236;
    char cpy_r_r237;
    int64_t cpy_r_r238;
    char cpy_r_r239;
    char cpy_r_r240;
    char cpy_r_r241;
    char cpy_r_r242;
    char cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    char cpy_r_r248;
    PyObject *cpy_r_r249;
    char cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    int32_t cpy_r_r254;
    char cpy_r_r255;
    char cpy_r_r256;
    char cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    CPyTagged cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    char cpy_r_r265;
    char cpy_r_r266;
    char cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    char cpy_r_r271;
    char cpy_r_r272;
    PyObject *cpy_r_r273;
    int32_t cpy_r_r274;
    char cpy_r_r275;
    char cpy_r_r276;
    char cpy_r_r277;
    char cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    char cpy_r_r282;
    char cpy_r_r283;
    PyObject *cpy_r_r284;
    int32_t cpy_r_r285;
    char cpy_r_r286;
    CPyTagged cpy_r_r287;
    PyObject *cpy_r_unmatched_formals;
    CPyTagged cpy_r_r288;
    CPyPtr cpy_r_r289;
    int64_t cpy_r_r290;
    CPyTagged cpy_r_r291;
    char cpy_r_r292;
    PyObject *cpy_r_r293;
    CPyTagged cpy_r_r294;
    CPyTagged cpy_r_r295;
    CPyPtr cpy_r_r296;
    int64_t cpy_r_r297;
    CPyTagged cpy_r_r298;
    char cpy_r_r299;
    PyObject *cpy_r_r300;
    CPyTagged cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    int32_t cpy_r_r305;
    char cpy_r_r306;
    CPyTagged cpy_r_r307;
    CPyTagged cpy_r_r308;
    PyObject *cpy_r_r309;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_formal_kinds)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_nformals = cpy_r_r2;
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 40, CPyStatic_argmap___globals);
        goto CPyL222;
    }
    cpy_r_r4 = 0;
    CPyTagged_INCREF(cpy_r_r4);
    cpy_r_i = cpy_r_r4;
    CPyTagged_DECREF(cpy_r_i);
CPyL2: ;
    cpy_r_r5 = cpy_r_r4 & 1;
    cpy_r_r6 = cpy_r_r5 == 0;
    cpy_r_r7 = cpy_r_nformals & 1;
    cpy_r_r8 = cpy_r_r7 == 0;
    cpy_r_r9 = cpy_r_r6 & cpy_r_r8;
    if (!cpy_r_r9) goto CPyL4;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_nformals;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL5;
CPyL4: ;
    cpy_r_r12 = CPyTagged_IsLt_(cpy_r_r4, cpy_r_nformals);
    cpy_r_r11 = cpy_r_r12;
CPyL5: ;
    if (!cpy_r_r11) goto CPyL223;
    cpy_r_r13 = PyList_New(0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 40, CPyStatic_argmap___globals);
        goto CPyL224;
    }
    cpy_r_r14 = PyList_Append(cpy_r_r3, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 40, CPyStatic_argmap___globals);
        goto CPyL224;
    }
    cpy_r_r16 = CPyTagged_Add(cpy_r_r4, 2);
    CPyTagged_DECREF(cpy_r_r4);
    CPyTagged_INCREF(cpy_r_r16);
    cpy_r_r4 = cpy_r_r16;
    cpy_r_i = cpy_r_r16;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL2;
CPyL9: ;
    cpy_r_formal_to_actual = cpy_r_r3;
    cpy_r_r17 = PyList_New(0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 41, CPyStatic_argmap___globals);
        goto CPyL225;
    }
    cpy_r_ambiguous_actual_kwargs = cpy_r_r17;
    cpy_r_fi = 0;
    cpy_r_r18 = 0;
    cpy_r_ai = 0;
    cpy_r_r19 = 0;
CPyL11: ;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_actual_kinds)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r22;
    if (!cpy_r_r23) goto CPyL226;
    cpy_r_r24 = CPyList_GetItemUnsafe(cpy_r_actual_kinds, cpy_r_r19);
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_nodes___ArgKind))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 43, CPyStatic_argmap___globals, "mypy.nodes.ArgKind", cpy_r_r24);
        goto CPyL227;
    }
    cpy_r_actual_kind = cpy_r_r25;
    cpy_r_r26 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r26 == NULL)) {
        goto CPyL228;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 44, CPyStatic_argmap___globals);
        goto CPyL221;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r28 = cpy_r_actual_kind == cpy_r_r26;
    if (cpy_r_r28) {
        goto CPyL229;
    } else
        goto CPyL39;
CPyL17: ;
    cpy_r_r29 = cpy_r_fi & 1;
    cpy_r_r30 = cpy_r_r29 != 0;
    if (cpy_r_r30) goto CPyL19;
    cpy_r_r31 = cpy_r_nformals & 1;
    cpy_r_r32 = cpy_r_r31 != 0;
    if (!cpy_r_r32) goto CPyL20;
CPyL19: ;
    cpy_r_r33 = CPyTagged_IsLt_(cpy_r_fi, cpy_r_nformals);
    if (cpy_r_r33) {
        goto CPyL21;
    } else
        goto CPyL230;
CPyL20: ;
    cpy_r_r34 = (Py_ssize_t)cpy_r_fi < (Py_ssize_t)cpy_r_nformals;
    if (!cpy_r_r34) goto CPyL230;
CPyL21: ;
    cpy_r_r35 = CPyList_GetItem(cpy_r_formal_kinds, cpy_r_fi);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 46, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (likely(Py_TYPE(cpy_r_r35) == CPyType_nodes___ArgKind))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 46, CPyStatic_argmap___globals, "mypy.nodes.ArgKind", cpy_r_r35);
        goto CPyL227;
    }
    cpy_r_r37 = CPyStatics[53]; /* 'is_star' */
    PyObject *cpy_r_r38[1] = {cpy_r_r36};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = PyObject_VectorcallMethod(cpy_r_r37, cpy_r_r39, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 46, CPyStatic_argmap___globals);
        goto CPyL231;
    }
    CPy_DECREF(cpy_r_r36);
    if (unlikely(!PyBool_Check(cpy_r_r40))) {
        CPy_TypeError("bool", cpy_r_r40); cpy_r_r41 = 2;
    } else
        cpy_r_r41 = cpy_r_r40 == Py_True;
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 46, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (cpy_r_r41) goto CPyL30;
    cpy_r_r42 = CPyList_GetItem(cpy_r_formal_to_actual, cpy_r_fi);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 47, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (likely(PyList_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 47, CPyStatic_argmap___globals, "list", cpy_r_r42);
        goto CPyL227;
    }
    cpy_r_r44 = CPyTagged_StealAsObject(cpy_r_ai);
    cpy_r_r45 = PyList_Append(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 47, CPyStatic_argmap___globals);
        goto CPyL232;
    }
    cpy_r_r47 = CPyTagged_Add(cpy_r_fi, 2);
    CPyTagged_DECREF(cpy_r_fi);
    cpy_r_fi = cpy_r_r47;
    goto CPyL158;
CPyL30: ;
    cpy_r_r48 = CPyList_GetItem(cpy_r_formal_kinds, cpy_r_fi);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 49, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_nodes___ArgKind))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 49, CPyStatic_argmap___globals, "mypy.nodes.ArgKind", cpy_r_r48);
        goto CPyL227;
    }
    cpy_r_r50 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r50 == NULL)) {
        goto CPyL233;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 49, CPyStatic_argmap___globals);
        goto CPyL221;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r52 = cpy_r_r49 == cpy_r_r50;
    CPy_DECREF(cpy_r_r49);
    if (!cpy_r_r52) goto CPyL230;
    cpy_r_r53 = CPyList_GetItem(cpy_r_formal_to_actual, cpy_r_fi);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 50, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (likely(PyList_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 50, CPyStatic_argmap___globals, "list", cpy_r_r53);
        goto CPyL227;
    }
    cpy_r_r55 = CPyTagged_StealAsObject(cpy_r_ai);
    cpy_r_r56 = PyList_Append(cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 50, CPyStatic_argmap___globals);
        goto CPyL232;
    } else
        goto CPyL158;
CPyL39: ;
    cpy_r_r58 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r58 == NULL)) {
        goto CPyL234;
    } else
        goto CPyL42;
CPyL40: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r59 = 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 51, CPyStatic_argmap___globals);
        goto CPyL221;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r60 = cpy_r_actual_kind == cpy_r_r58;
    if (cpy_r_r60) {
        goto CPyL235;
    } else
        goto CPyL91;
CPyL43: ;
    CPyTagged_INCREF(cpy_r_ai);
    cpy_r_r61 = CPyTagged_StealAsObject(cpy_r_ai);
    PyObject *cpy_r_r62[1] = {cpy_r_r61};
    cpy_r_r63 = (PyObject **)&cpy_r_r62;
    cpy_r_r64 = _PyObject_Vectorcall(cpy_r_actual_arg_type, cpy_r_r63, 1, 0);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 53, CPyStatic_argmap___globals);
        goto CPyL236;
    }
    CPy_DECREF(cpy_r_r61);
    if (likely(PyObject_TypeCheck(cpy_r_r64, CPyType_types___Type)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 53, CPyStatic_argmap___globals, "mypy.types.Type", cpy_r_r64);
        goto CPyL227;
    }
    cpy_r_r66 = CPyDef_types___get_proper_type(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 53, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (likely(cpy_r_r66 != Py_None))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 53, CPyStatic_argmap___globals, "mypy.types.ProperType", cpy_r_r66);
        goto CPyL227;
    }
    cpy_r_actualt = cpy_r_r67;
    cpy_r_r68 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r69 = (CPyPtr)&((PyObject *)cpy_r_actualt)->ob_type;
    cpy_r_r70 = *(PyObject * *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 == cpy_r_r68;
    if (!cpy_r_r71) goto CPyL237;
    if (likely(Py_TYPE(cpy_r_actualt) == CPyType_types___TupleType))
        cpy_r_r72 = cpy_r_actualt;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 56, CPyStatic_argmap___globals, "mypy.types.TupleType", cpy_r_actualt);
        goto CPyL238;
    }
    cpy_r_r73 = ((mypy___types___TupleTypeObject *)cpy_r_r72)->_items;
    cpy_r_r74 = (CPyPtr)&((PyVarObject *)cpy_r_r73)->ob_size;
    cpy_r_r75 = *(int64_t *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 << 1;
    CPy_DECREF(cpy_r_actualt);
    cpy_r_r77 = 0;
    cpy_r_r78 = CPyTagged_StealAsObject(cpy_r_r77);
    cpy_r__ = cpy_r_r78;
    CPy_DECREF(cpy_r__);
CPyL50: ;
    cpy_r_r79 = (Py_ssize_t)cpy_r_r77 < (Py_ssize_t)cpy_r_r76;
    if (!cpy_r_r79) goto CPyL230;
    cpy_r_r80 = cpy_r_fi & 1;
    cpy_r_r81 = cpy_r_r80 != 0;
    if (cpy_r_r81) goto CPyL53;
    cpy_r_r82 = cpy_r_nformals & 1;
    cpy_r_r83 = cpy_r_r82 != 0;
    if (!cpy_r_r83) goto CPyL54;
CPyL53: ;
    cpy_r_r84 = CPyTagged_IsLt_(cpy_r_fi, cpy_r_nformals);
    if (cpy_r_r84) {
        goto CPyL55;
    } else
        goto CPyL71;
CPyL54: ;
    cpy_r_r85 = (Py_ssize_t)cpy_r_fi < (Py_ssize_t)cpy_r_nformals;
    if (!cpy_r_r85) goto CPyL71;
CPyL55: ;
    cpy_r_r86 = CPyList_GetItem(cpy_r_formal_kinds, cpy_r_fi);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 58, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (likely(Py_TYPE(cpy_r_r86) == CPyType_nodes___ArgKind))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 58, CPyStatic_argmap___globals, "mypy.nodes.ArgKind", cpy_r_r86);
        goto CPyL227;
    }
    cpy_r_r88 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r88 == NULL)) {
        goto CPyL239;
    } else
        goto CPyL60;
CPyL58: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r89 = 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 58, CPyStatic_argmap___globals);
        goto CPyL221;
    }
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r90 = cpy_r_r87 != cpy_r_r88;
    CPy_DECREF(cpy_r_r87);
    if (!cpy_r_r90) goto CPyL230;
    cpy_r_r91 = CPyList_GetItem(cpy_r_formal_to_actual, cpy_r_fi);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 59, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (likely(PyList_Check(cpy_r_r91)))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 59, CPyStatic_argmap___globals, "list", cpy_r_r91);
        goto CPyL227;
    }
    CPyTagged_INCREF(cpy_r_ai);
    cpy_r_r93 = CPyTagged_StealAsObject(cpy_r_ai);
    cpy_r_r94 = PyList_Append(cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 59, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    cpy_r_r96 = CPyList_GetItem(cpy_r_formal_kinds, cpy_r_fi);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 62, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (likely(Py_TYPE(cpy_r_r96) == CPyType_nodes___ArgKind))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 62, CPyStatic_argmap___globals, "mypy.nodes.ArgKind", cpy_r_r96);
        goto CPyL227;
    }
    cpy_r_r98 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r98 == NULL)) {
        goto CPyL240;
    } else
        goto CPyL69;
CPyL67: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r99 = 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 62, CPyStatic_argmap___globals);
        goto CPyL221;
    }
    CPy_Unreachable();
CPyL69: ;
    cpy_r_r100 = cpy_r_r97 != cpy_r_r98;
    CPy_DECREF(cpy_r_r97);
    if (!cpy_r_r100) goto CPyL71;
    cpy_r_r101 = CPyTagged_Add(cpy_r_fi, 2);
    CPyTagged_DECREF(cpy_r_fi);
    cpy_r_fi = cpy_r_r101;
CPyL71: ;
    cpy_r_r102 = cpy_r_r77 + 2;
    cpy_r_r77 = cpy_r_r102;
    cpy_r_r103 = CPyTagged_StealAsObject(cpy_r_r102);
    cpy_r__ = cpy_r_r103;
    CPy_DECREF(cpy_r__);
    goto CPyL50;
CPyL72: ;
    cpy_r_r104 = cpy_r_fi & 1;
    cpy_r_r105 = cpy_r_r104 != 0;
    if (cpy_r_r105) goto CPyL74;
    cpy_r_r106 = cpy_r_nformals & 1;
    cpy_r_r107 = cpy_r_r106 != 0;
    if (!cpy_r_r107) goto CPyL75;
CPyL74: ;
    cpy_r_r108 = CPyTagged_IsLt_(cpy_r_fi, cpy_r_nformals);
    if (cpy_r_r108) {
        goto CPyL76;
    } else
        goto CPyL230;
CPyL75: ;
    cpy_r_r109 = (Py_ssize_t)cpy_r_fi < (Py_ssize_t)cpy_r_nformals;
    if (!cpy_r_r109) goto CPyL230;
CPyL76: ;
    cpy_r_r110 = CPyList_GetItem(cpy_r_formal_kinds, cpy_r_fi);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 68, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (likely(Py_TYPE(cpy_r_r110) == CPyType_nodes___ArgKind))
        cpy_r_r111 = cpy_r_r110;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 68, CPyStatic_argmap___globals, "mypy.nodes.ArgKind", cpy_r_r110);
        goto CPyL227;
    }
    cpy_r_r112 = CPyStatics[54]; /* 'is_named' */
    cpy_r_r113 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r114[2] = {cpy_r_r111, cpy_r_r113};
    cpy_r_r115 = (PyObject **)&cpy_r_r114;
    cpy_r_r116 = CPyStatics[9077]; /* ('star',) */
    cpy_r_r117 = PyObject_VectorcallMethod(cpy_r_r112, cpy_r_r115, 9223372036854775809ULL, cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 68, CPyStatic_argmap___globals);
        goto CPyL241;
    }
    CPy_DECREF(cpy_r_r111);
    if (unlikely(!PyBool_Check(cpy_r_r117))) {
        CPy_TypeError("bool", cpy_r_r117); cpy_r_r118 = 2;
    } else
        cpy_r_r118 = cpy_r_r117 == Py_True;
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r118 == 2)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 68, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (cpy_r_r118) goto CPyL230;
    cpy_r_r119 = CPyList_GetItem(cpy_r_formal_to_actual, cpy_r_fi);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 71, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (likely(PyList_Check(cpy_r_r119)))
        cpy_r_r120 = cpy_r_r119;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 71, CPyStatic_argmap___globals, "list", cpy_r_r119);
        goto CPyL227;
    }
    CPyTagged_INCREF(cpy_r_ai);
    cpy_r_r121 = CPyTagged_StealAsObject(cpy_r_ai);
    cpy_r_r122 = PyList_Append(cpy_r_r120, cpy_r_r121);
    CPy_DECREF(cpy_r_r120);
    CPy_DECREF(cpy_r_r121);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 71, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    cpy_r_r124 = CPyList_GetItem(cpy_r_formal_kinds, cpy_r_fi);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 72, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (likely(Py_TYPE(cpy_r_r124) == CPyType_nodes___ArgKind))
        cpy_r_r125 = cpy_r_r124;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 72, CPyStatic_argmap___globals, "mypy.nodes.ArgKind", cpy_r_r124);
        goto CPyL227;
    }
    cpy_r_r126 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r126 == NULL)) {
        goto CPyL242;
    } else
        goto CPyL89;
CPyL87: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r127 = 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 72, CPyStatic_argmap___globals);
        goto CPyL221;
    }
    CPy_Unreachable();
CPyL89: ;
    cpy_r_r128 = cpy_r_r125 == cpy_r_r126;
    CPy_DECREF(cpy_r_r125);
    if (cpy_r_r128) goto CPyL230;
    cpy_r_r129 = CPyTagged_Add(cpy_r_fi, 2);
    CPyTagged_DECREF(cpy_r_fi);
    cpy_r_fi = cpy_r_r129;
    goto CPyL72;
CPyL91: ;
    cpy_r_r130 = CPyStatics[54]; /* 'is_named' */
    PyObject *cpy_r_r131[1] = {cpy_r_actual_kind};
    cpy_r_r132 = (PyObject **)&cpy_r_r131;
    cpy_r_r133 = PyObject_VectorcallMethod(cpy_r_r130, cpy_r_r132, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 75, CPyStatic_argmap___globals);
        goto CPyL243;
    }
    if (unlikely(!PyBool_Check(cpy_r_r133))) {
        CPy_TypeError("bool", cpy_r_r133); cpy_r_r134 = 2;
    } else
        cpy_r_r134 = cpy_r_r133 == Py_True;
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r134 == 2)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 75, CPyStatic_argmap___globals);
        goto CPyL243;
    }
    if (cpy_r_r134) {
        goto CPyL244;
    } else
        goto CPyL119;
CPyL94: ;
    cpy_r_r135 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r136 = cpy_r_actual_names != cpy_r_r135;
    if (cpy_r_r136) {
        goto CPyL97;
    } else
        goto CPyL245;
CPyL95: ;
    PyErr_SetString(PyExc_AssertionError, "Internal error: named kinds without names given");
    cpy_r_r137 = 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 76, CPyStatic_argmap___globals);
        goto CPyL221;
    }
    CPy_Unreachable();
CPyL97: ;
    CPy_INCREF(cpy_r_actual_names);
    cpy_r_r138 = cpy_r_actual_names;
    CPyTagged_INCREF(cpy_r_ai);
    cpy_r_r139 = CPyTagged_StealAsObject(cpy_r_ai);
    cpy_r_r140 = PyObject_GetItem(cpy_r_r138, cpy_r_r139);
    CPy_DECREF(cpy_r_r138);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 77, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (PyUnicode_Check(cpy_r_r140))
        cpy_r_r141 = cpy_r_r140;
    else {
        cpy_r_r141 = NULL;
    }
    if (cpy_r_r141 != NULL) goto __LL17;
    if (cpy_r_r140 == Py_None)
        cpy_r_r141 = cpy_r_r140;
    else {
        cpy_r_r141 = NULL;
    }
    if (cpy_r_r141 != NULL) goto __LL17;
    CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 77, CPyStatic_argmap___globals, "str or None", cpy_r_r140);
    goto CPyL227;
__LL17: ;
    cpy_r_r142 = cpy_r_r141;
    cpy_r_name = cpy_r_r142;
    cpy_r_r143 = PySequence_Contains(cpy_r_formal_names, cpy_r_name);
    cpy_r_r144 = cpy_r_r143 >= 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 78, CPyStatic_argmap___globals);
        goto CPyL246;
    }
    cpy_r_r145 = cpy_r_r143;
    if (!cpy_r_r145) goto CPyL247;
    cpy_r_r146 = CPyStatics[56]; /* 'index' */
    PyObject *cpy_r_r147[2] = {cpy_r_formal_names, cpy_r_name};
    cpy_r_r148 = (PyObject **)&cpy_r_r147;
    cpy_r_r149 = PyObject_VectorcallMethod(cpy_r_r146, cpy_r_r148, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 79, CPyStatic_argmap___globals);
        goto CPyL246;
    }
    CPy_DECREF(cpy_r_name);
    if (likely(PyLong_Check(cpy_r_r149)))
        cpy_r_r150 = CPyTagged_FromObject(cpy_r_r149);
    else {
        CPy_TypeError("int", cpy_r_r149); cpy_r_r150 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r150 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 79, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    cpy_r_r151 = CPyList_GetItem(cpy_r_formal_to_actual, cpy_r_r150);
    CPyTagged_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 79, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (likely(PyList_Check(cpy_r_r151)))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 79, CPyStatic_argmap___globals, "list", cpy_r_r151);
        goto CPyL227;
    }
    cpy_r_r153 = CPyTagged_StealAsObject(cpy_r_ai);
    cpy_r_r154 = PyList_Append(cpy_r_r152, cpy_r_r153);
    CPy_DECREF(cpy_r_r152);
    CPy_DECREF(cpy_r_r153);
    cpy_r_r155 = cpy_r_r154 >= 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 79, CPyStatic_argmap___globals);
        goto CPyL232;
    } else
        goto CPyL158;
CPyL107: ;
    cpy_r_r156 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r156 == NULL)) {
        goto CPyL248;
    } else
        goto CPyL110;
CPyL108: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r157 = 0;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 80, CPyStatic_argmap___globals);
        goto CPyL221;
    }
    CPy_Unreachable();
CPyL110: ;
    cpy_r_r158 = PySequence_Contains(cpy_r_formal_kinds, cpy_r_r156);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 80, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    cpy_r_r160 = cpy_r_r158;
    if (!cpy_r_r160) goto CPyL230;
    cpy_r_r161 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r161 == NULL)) {
        goto CPyL249;
    } else
        goto CPyL115;
CPyL113: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r162 = 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 81, CPyStatic_argmap___globals);
        goto CPyL221;
    }
    CPy_Unreachable();
CPyL115: ;
    cpy_r_r163 = CPyList_Index(cpy_r_formal_kinds, cpy_r_r161);
    if (unlikely(cpy_r_r163 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 81, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    cpy_r_r164 = CPyList_GetItem(cpy_r_formal_to_actual, cpy_r_r163);
    CPyTagged_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 81, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (likely(PyList_Check(cpy_r_r164)))
        cpy_r_r165 = cpy_r_r164;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 81, CPyStatic_argmap___globals, "list", cpy_r_r164);
        goto CPyL227;
    }
    cpy_r_r166 = CPyTagged_StealAsObject(cpy_r_ai);
    cpy_r_r167 = PyList_Append(cpy_r_r165, cpy_r_r166);
    CPy_DECREF(cpy_r_r165);
    CPy_DECREF(cpy_r_r166);
    cpy_r_r168 = cpy_r_r167 >= 0;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 81, CPyStatic_argmap___globals);
        goto CPyL232;
    } else
        goto CPyL158;
CPyL119: ;
    cpy_r_r169 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r169 == NULL)) {
        goto CPyL250;
    } else
        goto CPyL122;
CPyL120: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r170 = 0;
    if (unlikely(!cpy_r_r170)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 83, CPyStatic_argmap___globals);
        goto CPyL221;
    }
    CPy_Unreachable();
CPyL122: ;
    cpy_r_r171 = cpy_r_actual_kind == cpy_r_r169;
    CPy_DECREF(cpy_r_actual_kind);
    if (cpy_r_r171) {
        goto CPyL125;
    } else
        goto CPyL251;
CPyL123: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r172 = 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 83, CPyStatic_argmap___globals);
        goto CPyL221;
    }
    CPy_Unreachable();
CPyL125: ;
    CPyTagged_INCREF(cpy_r_ai);
    cpy_r_r173 = CPyTagged_StealAsObject(cpy_r_ai);
    PyObject *cpy_r_r174[1] = {cpy_r_r173};
    cpy_r_r175 = (PyObject **)&cpy_r_r174;
    cpy_r_r176 = _PyObject_Vectorcall(cpy_r_actual_arg_type, cpy_r_r175, 1, 0);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 84, CPyStatic_argmap___globals);
        goto CPyL252;
    }
    CPy_DECREF(cpy_r_r173);
    if (likely(PyObject_TypeCheck(cpy_r_r176, CPyType_types___Type)))
        cpy_r_r177 = cpy_r_r176;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 84, CPyStatic_argmap___globals, "mypy.types.Type", cpy_r_r176);
        goto CPyL227;
    }
    cpy_r_r178 = CPyDef_types___get_proper_type(cpy_r_r177);
    CPy_DECREF(cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 84, CPyStatic_argmap___globals);
        goto CPyL227;
    }
    if (likely(cpy_r_r178 != Py_None))
        cpy_r_r179 = cpy_r_r178;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 84, CPyStatic_argmap___globals, "mypy.types.ProperType", cpy_r_r178);
        goto CPyL227;
    }
    cpy_r_actualt = cpy_r_r179;
    cpy_r_r180 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r181 = (CPyPtr)&((PyObject *)cpy_r_actualt)->ob_type;
    cpy_r_r182 = *(PyObject * *)cpy_r_r181;
    cpy_r_r183 = cpy_r_r182 == cpy_r_r180;
    if (!cpy_r_r183) goto CPyL253;
    if (likely(Py_TYPE(cpy_r_actualt) == CPyType_types___TypedDictType))
        cpy_r_r184 = cpy_r_actualt;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 86, CPyStatic_argmap___globals, "mypy.types.TypedDictType", cpy_r_actualt);
        goto CPyL238;
    }
    cpy_r_r185 = ((mypy___types___TypedDictTypeObject *)cpy_r_r184)->_items;
    CPy_INCREF(cpy_r_r185);
    CPy_DECREF(cpy_r_actualt);
    cpy_r_r186 = 0;
    cpy_r_r187 = PyDict_Size(cpy_r_r185);
    cpy_r_r188 = cpy_r_r187 << 1;
    cpy_r_r189 = CPyDict_GetKeysIter(cpy_r_r185);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 86, CPyStatic_argmap___globals);
        goto CPyL254;
    }
CPyL132: ;
    cpy_r_r190 = CPyDict_NextKey(cpy_r_r189, cpy_r_r186);
    cpy_r_r191 = cpy_r_r190.f1;
    cpy_r_r186 = cpy_r_r191;
    cpy_r_r192 = cpy_r_r190.f0;
    if (!cpy_r_r192) goto CPyL255;
    cpy_r_r193 = cpy_r_r190.f2;
    CPy_INCREF(cpy_r_r193);
    CPy_DECREF(cpy_r_r190.f2);
    if (likely(PyUnicode_Check(cpy_r_r193)))
        cpy_r_r194 = cpy_r_r193;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 86, CPyStatic_argmap___globals, "str", cpy_r_r193);
        goto CPyL256;
    }
    cpy_r_name = cpy_r_r194;
    CPy_INCREF(cpy_r_name);
    if (likely(cpy_r_name != Py_None))
        cpy_r_r195 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 87, CPyStatic_argmap___globals, "str", cpy_r_name);
        goto CPyL257;
    }
    cpy_r_r196 = PySequence_Contains(cpy_r_formal_names, cpy_r_r195);
    CPy_DECREF(cpy_r_r195);
    cpy_r_r197 = cpy_r_r196 >= 0;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 87, CPyStatic_argmap___globals);
        goto CPyL257;
    }
    cpy_r_r198 = cpy_r_r196;
    if (!cpy_r_r198) goto CPyL258;
    if (likely(cpy_r_name != Py_None))
        cpy_r_r199 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 88, CPyStatic_argmap___globals, "str", cpy_r_name);
        goto CPyL256;
    }
    cpy_r_r200 = CPyStatics[56]; /* 'index' */
    PyObject *cpy_r_r201[2] = {cpy_r_formal_names, cpy_r_r199};
    cpy_r_r202 = (PyObject **)&cpy_r_r201;
    cpy_r_r203 = PyObject_VectorcallMethod(cpy_r_r200, cpy_r_r202, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 88, CPyStatic_argmap___globals);
        goto CPyL259;
    }
    CPy_DECREF(cpy_r_r199);
    if (likely(PyLong_Check(cpy_r_r203)))
        cpy_r_r204 = CPyTagged_FromObject(cpy_r_r203);
    else {
        CPy_TypeError("int", cpy_r_r203); cpy_r_r204 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r203);
    if (unlikely(cpy_r_r204 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 88, CPyStatic_argmap___globals);
        goto CPyL256;
    }
    cpy_r_r205 = CPyList_GetItem(cpy_r_formal_to_actual, cpy_r_r204);
    CPyTagged_DECREF(cpy_r_r204);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 88, CPyStatic_argmap___globals);
        goto CPyL256;
    }
    if (likely(PyList_Check(cpy_r_r205)))
        cpy_r_r206 = cpy_r_r205;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 88, CPyStatic_argmap___globals, "list", cpy_r_r205);
        goto CPyL256;
    }
    CPyTagged_INCREF(cpy_r_ai);
    cpy_r_r207 = CPyTagged_StealAsObject(cpy_r_ai);
    cpy_r_r208 = PyList_Append(cpy_r_r206, cpy_r_r207);
    CPy_DECREF(cpy_r_r206);
    CPy_DECREF(cpy_r_r207);
    cpy_r_r209 = cpy_r_r208 >= 0;
    if (unlikely(!cpy_r_r209)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 88, CPyStatic_argmap___globals);
        goto CPyL256;
    } else
        goto CPyL155;
CPyL143: ;
    cpy_r_r210 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r210 == NULL)) {
        goto CPyL260;
    } else
        goto CPyL146;
CPyL144: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r211 = 0;
    if (unlikely(!cpy_r_r211)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 89, CPyStatic_argmap___globals);
        goto CPyL221;
    }
    CPy_Unreachable();
CPyL146: ;
    cpy_r_r212 = PySequence_Contains(cpy_r_formal_kinds, cpy_r_r210);
    cpy_r_r213 = cpy_r_r212 >= 0;
    if (unlikely(!cpy_r_r213)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 89, CPyStatic_argmap___globals);
        goto CPyL256;
    }
    cpy_r_r214 = cpy_r_r212;
    if (!cpy_r_r214) goto CPyL155;
    cpy_r_r215 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r215 == NULL)) {
        goto CPyL261;
    } else
        goto CPyL151;
CPyL149: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r216 = 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 90, CPyStatic_argmap___globals);
        goto CPyL221;
    }
    CPy_Unreachable();
CPyL151: ;
    cpy_r_r217 = CPyList_Index(cpy_r_formal_kinds, cpy_r_r215);
    if (unlikely(cpy_r_r217 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 90, CPyStatic_argmap___globals);
        goto CPyL256;
    }
    cpy_r_r218 = CPyList_GetItem(cpy_r_formal_to_actual, cpy_r_r217);
    CPyTagged_DECREF(cpy_r_r217);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 90, CPyStatic_argmap___globals);
        goto CPyL256;
    }
    if (likely(PyList_Check(cpy_r_r218)))
        cpy_r_r219 = cpy_r_r218;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 90, CPyStatic_argmap___globals, "list", cpy_r_r218);
        goto CPyL256;
    }
    CPyTagged_INCREF(cpy_r_ai);
    cpy_r_r220 = CPyTagged_StealAsObject(cpy_r_ai);
    cpy_r_r221 = PyList_Append(cpy_r_r219, cpy_r_r220);
    CPy_DECREF(cpy_r_r219);
    CPy_DECREF(cpy_r_r220);
    cpy_r_r222 = cpy_r_r221 >= 0;
    if (unlikely(!cpy_r_r222)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 90, CPyStatic_argmap___globals);
        goto CPyL256;
    }
CPyL155: ;
    cpy_r_r223 = CPyDict_CheckSize(cpy_r_r185, cpy_r_r188);
    if (unlikely(!cpy_r_r223)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 86, CPyStatic_argmap___globals);
        goto CPyL256;
    } else
        goto CPyL132;
CPyL156: ;
    cpy_r_r224 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r224)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 86, CPyStatic_argmap___globals);
        goto CPyL232;
    } else
        goto CPyL158;
CPyL157: ;
    cpy_r_r225 = CPyTagged_StealAsObject(cpy_r_ai);
    cpy_r_r226 = PyList_Append(cpy_r_ambiguous_actual_kwargs, cpy_r_r225);
    CPy_DECREF(cpy_r_r225);
    cpy_r_r227 = cpy_r_r226 >= 0;
    if (unlikely(!cpy_r_r227)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 95, CPyStatic_argmap___globals);
        goto CPyL232;
    }
CPyL158: ;
    cpy_r_r228 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r228;
    cpy_r_ai = cpy_r_r228;
    cpy_r_r229 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r229;
    goto CPyL11;
CPyL159: ;
    cpy_r_r230 = (CPyPtr)&((PyVarObject *)cpy_r_ambiguous_actual_kwargs)->ob_size;
    cpy_r_r231 = *(int64_t *)cpy_r_r230;
    cpy_r_r232 = cpy_r_r231 << 1;
    cpy_r_r233 = cpy_r_r232 != 0;
    if (!cpy_r_r233) goto CPyL262;
    cpy_r_r234 = PyList_New(0);
    if (unlikely(cpy_r_r234 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 102, CPyStatic_argmap___globals);
        goto CPyL263;
    }
    cpy_r_r235 = 0;
    CPyTagged_INCREF(cpy_r_r235);
    cpy_r_fi_2 = cpy_r_r235;
CPyL162: ;
    cpy_r_r236 = cpy_r_r235 & 1;
    cpy_r_r237 = cpy_r_r236 == 0;
    cpy_r_r238 = cpy_r_nformals & 1;
    cpy_r_r239 = cpy_r_r238 == 0;
    cpy_r_r240 = cpy_r_r237 & cpy_r_r239;
    if (!cpy_r_r240) goto CPyL164;
    cpy_r_r241 = (Py_ssize_t)cpy_r_r235 < (Py_ssize_t)cpy_r_nformals;
    cpy_r_r242 = cpy_r_r241;
    goto CPyL165;
CPyL164: ;
    cpy_r_r243 = CPyTagged_IsLt_(cpy_r_r235, cpy_r_nformals);
    cpy_r_r242 = cpy_r_r243;
CPyL165: ;
    if (!cpy_r_r242) goto CPyL264;
    CPyTagged_INCREF(cpy_r_fi_2);
    cpy_r_r244 = CPyTagged_StealAsObject(cpy_r_fi_2);
    cpy_r_r245 = PyObject_GetItem(cpy_r_formal_names, cpy_r_r244);
    CPy_DECREF(cpy_r_r244);
    if (unlikely(cpy_r_r245 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 106, CPyStatic_argmap___globals);
        goto CPyL265;
    }
    if (PyUnicode_Check(cpy_r_r245))
        cpy_r_r246 = cpy_r_r245;
    else {
        cpy_r_r246 = NULL;
    }
    if (cpy_r_r246 != NULL) goto __LL18;
    if (cpy_r_r245 == Py_None)
        cpy_r_r246 = cpy_r_r245;
    else {
        cpy_r_r246 = NULL;
    }
    if (cpy_r_r246 != NULL) goto __LL18;
    CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 106, CPyStatic_argmap___globals, "str or None", cpy_r_r245);
    goto CPyL265;
__LL18: ;
    cpy_r_r247 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r248 = cpy_r_r246 != cpy_r_r247;
    if (!cpy_r_r248) goto CPyL171;
    CPy_INCREF(cpy_r_r246);
    if (likely(cpy_r_r246 != Py_None))
        cpy_r_r249 = cpy_r_r246;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 106, CPyStatic_argmap___globals, "str", cpy_r_r246);
        goto CPyL266;
    }
    cpy_r_r250 = CPyStr_IsTrue(cpy_r_r249);
    CPy_DECREF(cpy_r_r249);
    if (cpy_r_r250) goto CPyL267;
CPyL171: ;
    cpy_r_r251 = cpy_r_r246;
    goto CPyL196;
CPyL172: ;
    cpy_r_r252 = CPyList_GetItem(cpy_r_formal_to_actual, cpy_r_fi_2);
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 108, CPyStatic_argmap___globals);
        goto CPyL265;
    }
    if (likely(PyList_Check(cpy_r_r252)))
        cpy_r_r253 = cpy_r_r252;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 108, CPyStatic_argmap___globals, "list", cpy_r_r252);
        goto CPyL265;
    }
    cpy_r_r254 = PyObject_Not(cpy_r_r253);
    CPy_DECREF(cpy_r_r253);
    cpy_r_r255 = cpy_r_r254 >= 0;
    if (unlikely(!cpy_r_r255)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 108, CPyStatic_argmap___globals);
        goto CPyL265;
    }
    cpy_r_r256 = cpy_r_r254;
    if (!cpy_r_r256) goto CPyL177;
    cpy_r_r257 = cpy_r_r256;
    goto CPyL187;
CPyL177: ;
    cpy_r_r258 = CPyList_GetItemBorrow(cpy_r_formal_to_actual, cpy_r_fi_2);
    if (unlikely(cpy_r_r258 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 109, CPyStatic_argmap___globals);
        goto CPyL265;
    }
    if (likely(PyList_Check(cpy_r_r258)))
        cpy_r_r259 = cpy_r_r258;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 109, CPyStatic_argmap___globals, "list", cpy_r_r258);
        goto CPyL265;
    }
    cpy_r_r260 = CPyList_GetItemShortBorrow(cpy_r_r259, 0);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 109, CPyStatic_argmap___globals);
        goto CPyL265;
    }
    if (likely(PyLong_Check(cpy_r_r260)))
        cpy_r_r261 = CPyTagged_FromObject(cpy_r_r260);
    else {
        CPy_TypeError("int", cpy_r_r260); cpy_r_r261 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r261 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 109, CPyStatic_argmap___globals);
        goto CPyL265;
    }
    cpy_r_r262 = CPyList_GetItem(cpy_r_actual_kinds, cpy_r_r261);
    CPyTagged_DECREF(cpy_r_r261);
    if (unlikely(cpy_r_r262 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 109, CPyStatic_argmap___globals);
        goto CPyL265;
    }
    if (likely(Py_TYPE(cpy_r_r262) == CPyType_nodes___ArgKind))
        cpy_r_r263 = cpy_r_r262;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 109, CPyStatic_argmap___globals, "mypy.nodes.ArgKind", cpy_r_r262);
        goto CPyL265;
    }
    cpy_r_r264 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r264 == NULL)) {
        goto CPyL268;
    } else
        goto CPyL186;
CPyL184: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r265 = 0;
    if (unlikely(!cpy_r_r265)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 109, CPyStatic_argmap___globals);
        goto CPyL221;
    }
    CPy_Unreachable();
CPyL186: ;
    cpy_r_r266 = cpy_r_r263 == cpy_r_r264;
    CPy_DECREF(cpy_r_r263);
    cpy_r_r257 = cpy_r_r266;
CPyL187: ;
    if (cpy_r_r257) goto CPyL189;
    cpy_r_r267 = cpy_r_r257;
    goto CPyL195;
CPyL189: ;
    cpy_r_r268 = CPyList_GetItem(cpy_r_formal_kinds, cpy_r_fi_2);
    if (unlikely(cpy_r_r268 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 111, CPyStatic_argmap___globals);
        goto CPyL265;
    }
    if (likely(Py_TYPE(cpy_r_r268) == CPyType_nodes___ArgKind))
        cpy_r_r269 = cpy_r_r268;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 111, CPyStatic_argmap___globals, "mypy.nodes.ArgKind", cpy_r_r268);
        goto CPyL265;
    }
    cpy_r_r270 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r270 == NULL)) {
        goto CPyL269;
    } else
        goto CPyL194;
CPyL192: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r271 = 0;
    if (unlikely(!cpy_r_r271)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 111, CPyStatic_argmap___globals);
        goto CPyL221;
    }
    CPy_Unreachable();
CPyL194: ;
    cpy_r_r272 = cpy_r_r269 != cpy_r_r270;
    CPy_DECREF(cpy_r_r269);
    cpy_r_r267 = cpy_r_r272;
CPyL195: ;
    cpy_r_r273 = cpy_r_r267 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r273);
    cpy_r_r251 = cpy_r_r273;
CPyL196: ;
    cpy_r_r274 = PyObject_IsTrue(cpy_r_r251);
    cpy_r_r275 = cpy_r_r274 >= 0;
    if (unlikely(!cpy_r_r275)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", -1, CPyStatic_argmap___globals);
        goto CPyL270;
    }
    cpy_r_r276 = cpy_r_r274;
    if (!cpy_r_r276) goto CPyL271;
    if (unlikely(!PyBool_Check(cpy_r_r251))) {
        CPy_TypeError("bool", cpy_r_r251); cpy_r_r277 = 2;
    } else
        cpy_r_r277 = cpy_r_r251 == Py_True;
    CPy_DECREF(cpy_r_r251);
    if (unlikely(cpy_r_r277 == 2)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 105, CPyStatic_argmap___globals);
        goto CPyL265;
    }
    cpy_r_r278 = cpy_r_r277;
    goto CPyL206;
CPyL200: ;
    cpy_r_r279 = CPyList_GetItem(cpy_r_formal_kinds, cpy_r_fi_2);
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 113, CPyStatic_argmap___globals);
        goto CPyL265;
    }
    if (likely(Py_TYPE(cpy_r_r279) == CPyType_nodes___ArgKind))
        cpy_r_r280 = cpy_r_r279;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 113, CPyStatic_argmap___globals, "mypy.nodes.ArgKind", cpy_r_r279);
        goto CPyL265;
    }
    cpy_r_r281 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r281 == NULL)) {
        goto CPyL272;
    } else
        goto CPyL205;
CPyL203: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r282 = 0;
    if (unlikely(!cpy_r_r282)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 113, CPyStatic_argmap___globals);
        goto CPyL221;
    }
    CPy_Unreachable();
CPyL205: ;
    cpy_r_r283 = cpy_r_r280 == cpy_r_r281;
    CPy_DECREF(cpy_r_r280);
    cpy_r_r278 = cpy_r_r283;
CPyL206: ;
    if (!cpy_r_r278) goto CPyL273;
    cpy_r_r284 = CPyTagged_StealAsObject(cpy_r_fi_2);
    cpy_r_r285 = PyList_Append(cpy_r_r234, cpy_r_r284);
    CPy_DECREF(cpy_r_r284);
    cpy_r_r286 = cpy_r_r285 >= 0;
    if (unlikely(!cpy_r_r286)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 102, CPyStatic_argmap___globals);
        goto CPyL274;
    }
CPyL208: ;
    cpy_r_r287 = CPyTagged_Add(cpy_r_r235, 2);
    CPyTagged_DECREF(cpy_r_r235);
    CPyTagged_INCREF(cpy_r_r287);
    cpy_r_r235 = cpy_r_r287;
    cpy_r_fi_2 = cpy_r_r287;
    goto CPyL162;
CPyL209: ;
    cpy_r_unmatched_formals = cpy_r_r234;
    cpy_r_r288 = 0;
CPyL210: ;
    cpy_r_r289 = (CPyPtr)&((PyVarObject *)cpy_r_ambiguous_actual_kwargs)->ob_size;
    cpy_r_r290 = *(int64_t *)cpy_r_r289;
    cpy_r_r291 = cpy_r_r290 << 1;
    cpy_r_r292 = (Py_ssize_t)cpy_r_r288 < (Py_ssize_t)cpy_r_r291;
    if (!cpy_r_r292) goto CPyL275;
    cpy_r_r293 = CPyList_GetItemUnsafe(cpy_r_ambiguous_actual_kwargs, cpy_r_r288);
    if (likely(PyLong_Check(cpy_r_r293)))
        cpy_r_r294 = CPyTagged_FromObject(cpy_r_r293);
    else {
        CPy_TypeError("int", cpy_r_r293); cpy_r_r294 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r293);
    if (unlikely(cpy_r_r294 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 115, CPyStatic_argmap___globals);
        goto CPyL276;
    }
    cpy_r_ai = cpy_r_r294;
    cpy_r_r295 = 0;
CPyL213: ;
    cpy_r_r296 = (CPyPtr)&((PyVarObject *)cpy_r_unmatched_formals)->ob_size;
    cpy_r_r297 = *(int64_t *)cpy_r_r296;
    cpy_r_r298 = cpy_r_r297 << 1;
    cpy_r_r299 = (Py_ssize_t)cpy_r_r295 < (Py_ssize_t)cpy_r_r298;
    if (!cpy_r_r299) goto CPyL277;
    cpy_r_r300 = CPyList_GetItemUnsafe(cpy_r_unmatched_formals, cpy_r_r295);
    if (likely(PyLong_Check(cpy_r_r300)))
        cpy_r_r301 = CPyTagged_FromObject(cpy_r_r300);
    else {
        CPy_TypeError("int", cpy_r_r300); cpy_r_r301 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r300);
    if (unlikely(cpy_r_r301 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 116, CPyStatic_argmap___globals);
        goto CPyL278;
    }
    cpy_r_fi = cpy_r_r301;
    cpy_r_r302 = CPyList_GetItem(cpy_r_formal_to_actual, cpy_r_fi);
    CPyTagged_DECREF(cpy_r_fi);
    if (unlikely(cpy_r_r302 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 117, CPyStatic_argmap___globals);
        goto CPyL278;
    }
    if (likely(PyList_Check(cpy_r_r302)))
        cpy_r_r303 = cpy_r_r302;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_actuals_to_formals", 117, CPyStatic_argmap___globals, "list", cpy_r_r302);
        goto CPyL278;
    }
    CPyTagged_INCREF(cpy_r_ai);
    cpy_r_r304 = CPyTagged_StealAsObject(cpy_r_ai);
    cpy_r_r305 = PyList_Append(cpy_r_r303, cpy_r_r304);
    CPy_DECREF(cpy_r_r303);
    CPy_DECREF(cpy_r_r304);
    cpy_r_r306 = cpy_r_r305 >= 0;
    if (unlikely(!cpy_r_r306)) {
        CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 117, CPyStatic_argmap___globals);
        goto CPyL278;
    }
    cpy_r_r307 = cpy_r_r295 + 2;
    cpy_r_r295 = cpy_r_r307;
    goto CPyL213;
CPyL219: ;
    cpy_r_r308 = cpy_r_r288 + 2;
    cpy_r_r288 = cpy_r_r308;
    goto CPyL210;
CPyL220: ;
    return cpy_r_formal_to_actual;
CPyL221: ;
    cpy_r_r309 = NULL;
    return cpy_r_r309;
CPyL222: ;
    CPyTagged_DecRef(cpy_r_nformals);
    goto CPyL221;
CPyL223: ;
    CPyTagged_DECREF(cpy_r_r4);
    goto CPyL9;
CPyL224: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_r3);
    CPyTagged_DecRef(cpy_r_r4);
    goto CPyL221;
CPyL225: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    goto CPyL221;
CPyL226: ;
    CPyTagged_DECREF(cpy_r_fi);
    CPyTagged_DECREF(cpy_r_ai);
    goto CPyL159;
CPyL227: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    goto CPyL221;
CPyL228: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_actual_kind);
    goto CPyL14;
CPyL229: ;
    CPy_DECREF(cpy_r_actual_kind);
    goto CPyL17;
CPyL230: ;
    CPyTagged_DECREF(cpy_r_ai);
    goto CPyL158;
CPyL231: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_r36);
    goto CPyL221;
CPyL232: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    goto CPyL221;
CPyL233: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_r49);
    goto CPyL33;
CPyL234: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_actual_kind);
    goto CPyL40;
CPyL235: ;
    CPy_DECREF(cpy_r_actual_kind);
    goto CPyL43;
CPyL236: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_r61);
    goto CPyL221;
CPyL237: ;
    CPy_DECREF(cpy_r_actualt);
    goto CPyL72;
CPyL238: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_actualt);
    goto CPyL221;
CPyL239: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_r87);
    goto CPyL58;
CPyL240: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_r97);
    goto CPyL67;
CPyL241: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_r111);
    goto CPyL221;
CPyL242: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_r125);
    goto CPyL87;
CPyL243: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_actual_kind);
    goto CPyL221;
CPyL244: ;
    CPy_DECREF(cpy_r_actual_kind);
    goto CPyL94;
CPyL245: ;
    CPyTagged_DECREF(cpy_r_nformals);
    CPy_DECREF(cpy_r_formal_to_actual);
    CPy_DECREF(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DECREF(cpy_r_fi);
    CPyTagged_DECREF(cpy_r_ai);
    goto CPyL95;
CPyL246: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_name);
    goto CPyL221;
CPyL247: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL107;
CPyL248: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    goto CPyL108;
CPyL249: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    goto CPyL113;
CPyL250: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_actual_kind);
    goto CPyL120;
CPyL251: ;
    CPyTagged_DECREF(cpy_r_nformals);
    CPy_DECREF(cpy_r_formal_to_actual);
    CPy_DECREF(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DECREF(cpy_r_fi);
    CPyTagged_DECREF(cpy_r_ai);
    goto CPyL123;
CPyL252: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_r173);
    goto CPyL221;
CPyL253: ;
    CPy_DECREF(cpy_r_actualt);
    goto CPyL157;
CPyL254: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_r185);
    goto CPyL221;
CPyL255: ;
    CPyTagged_DECREF(cpy_r_ai);
    CPy_DECREF(cpy_r_r185);
    CPy_DECREF(cpy_r_r189);
    CPy_DECREF(cpy_r_r190.f2);
    goto CPyL156;
CPyL256: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_r185);
    CPy_DecRef(cpy_r_r189);
    goto CPyL221;
CPyL257: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r185);
    CPy_DecRef(cpy_r_r189);
    goto CPyL221;
CPyL258: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL143;
CPyL259: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_r185);
    CPy_DecRef(cpy_r_r189);
    CPy_DecRef(cpy_r_r199);
    goto CPyL221;
CPyL260: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_r185);
    CPy_DecRef(cpy_r_r189);
    goto CPyL144;
CPyL261: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_fi);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_r185);
    CPy_DecRef(cpy_r_r189);
    goto CPyL149;
CPyL262: ;
    CPyTagged_DECREF(cpy_r_nformals);
    CPy_DECREF(cpy_r_ambiguous_actual_kwargs);
    goto CPyL220;
CPyL263: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    goto CPyL221;
CPyL264: ;
    CPyTagged_DECREF(cpy_r_nformals);
    CPyTagged_DECREF(cpy_r_r235);
    CPyTagged_DECREF(cpy_r_fi_2);
    goto CPyL209;
CPyL265: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPy_DecRef(cpy_r_r234);
    CPyTagged_DecRef(cpy_r_r235);
    CPyTagged_DecRef(cpy_r_fi_2);
    goto CPyL221;
CPyL266: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPy_DecRef(cpy_r_r234);
    CPyTagged_DecRef(cpy_r_r235);
    CPyTagged_DecRef(cpy_r_fi_2);
    CPy_DecRef(cpy_r_r246);
    goto CPyL221;
CPyL267: ;
    CPy_DECREF(cpy_r_r246);
    goto CPyL172;
CPyL268: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPy_DecRef(cpy_r_r234);
    CPyTagged_DecRef(cpy_r_r235);
    CPyTagged_DecRef(cpy_r_fi_2);
    CPy_DecRef(cpy_r_r263);
    goto CPyL184;
CPyL269: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPy_DecRef(cpy_r_r234);
    CPyTagged_DecRef(cpy_r_r235);
    CPyTagged_DecRef(cpy_r_fi_2);
    CPy_DecRef(cpy_r_r269);
    goto CPyL192;
CPyL270: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPy_DecRef(cpy_r_r234);
    CPyTagged_DecRef(cpy_r_r235);
    CPyTagged_DecRef(cpy_r_fi_2);
    CPy_DecRef(cpy_r_r251);
    goto CPyL221;
CPyL271: ;
    CPy_DECREF(cpy_r_r251);
    goto CPyL200;
CPyL272: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPy_DecRef(cpy_r_r234);
    CPyTagged_DecRef(cpy_r_r235);
    CPyTagged_DecRef(cpy_r_fi_2);
    CPy_DecRef(cpy_r_r280);
    goto CPyL203;
CPyL273: ;
    CPyTagged_DECREF(cpy_r_fi_2);
    goto CPyL208;
CPyL274: ;
    CPyTagged_DecRef(cpy_r_nformals);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPy_DecRef(cpy_r_r234);
    CPyTagged_DecRef(cpy_r_r235);
    goto CPyL221;
CPyL275: ;
    CPy_DECREF(cpy_r_ambiguous_actual_kwargs);
    CPy_DECREF(cpy_r_unmatched_formals);
    goto CPyL220;
CPyL276: ;
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPy_DecRef(cpy_r_unmatched_formals);
    goto CPyL221;
CPyL277: ;
    CPyTagged_DECREF(cpy_r_ai);
    goto CPyL219;
CPyL278: ;
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_ambiguous_actual_kwargs);
    CPyTagged_DecRef(cpy_r_ai);
    CPy_DecRef(cpy_r_unmatched_formals);
    goto CPyL221;
}

PyObject *CPyPy_argmap___map_actuals_to_formals(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"actual_kinds", "actual_names", "formal_kinds", "formal_names", "actual_arg_type", 0};
    static CPyArg_Parser parser = {"OOOOO:map_actuals_to_formals", kwlist, 0};
    PyObject *obj_actual_kinds;
    PyObject *obj_actual_names;
    PyObject *obj_formal_kinds;
    PyObject *obj_formal_names;
    PyObject *obj_actual_arg_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_actual_kinds, &obj_actual_names, &obj_formal_kinds, &obj_formal_names, &obj_actual_arg_type)) {
        return NULL;
    }
    PyObject *arg_actual_kinds;
    if (likely(PyList_Check(obj_actual_kinds)))
        arg_actual_kinds = obj_actual_kinds;
    else {
        CPy_TypeError("list", obj_actual_kinds); 
        goto fail;
    }
    PyObject *arg_actual_names;
    arg_actual_names = obj_actual_names;
    if (arg_actual_names != NULL) goto __LL19;
    if (obj_actual_names == Py_None)
        arg_actual_names = obj_actual_names;
    else {
        arg_actual_names = NULL;
    }
    if (arg_actual_names != NULL) goto __LL19;
    CPy_TypeError("object or None", obj_actual_names); 
    goto fail;
__LL19: ;
    PyObject *arg_formal_kinds;
    if (likely(PyList_Check(obj_formal_kinds)))
        arg_formal_kinds = obj_formal_kinds;
    else {
        CPy_TypeError("list", obj_formal_kinds); 
        goto fail;
    }
    PyObject *arg_formal_names = obj_formal_names;
    PyObject *arg_actual_arg_type = obj_actual_arg_type;
    PyObject *retval = CPyDef_argmap___map_actuals_to_formals(arg_actual_kinds, arg_actual_names, arg_formal_kinds, arg_formal_names, arg_actual_arg_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/argmap.py", "map_actuals_to_formals", 24, CPyStatic_argmap___globals);
    return NULL;
}

PyObject *CPyDef_argmap___map_formals_to_actuals(PyObject *cpy_r_actual_kinds, PyObject *cpy_r_actual_names, PyObject *cpy_r_formal_kinds, PyObject *cpy_r_formal_names, PyObject *cpy_r_actual_arg_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_formal_to_actual;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r__;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_actual_to_formal;
    CPyTagged cpy_r_r14;
    CPyTagged cpy_r_formal;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_actuals;
    CPyTagged cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyTagged cpy_r_actual;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    cpy_r_r0 = CPyDef_argmap___map_actuals_to_formals(cpy_r_actual_kinds, cpy_r_actual_names, cpy_r_formal_kinds, cpy_r_formal_names, cpy_r_actual_arg_type);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_formals_to_actuals", 130, CPyStatic_argmap___globals);
        goto CPyL20;
    }
    cpy_r_formal_to_actual = cpy_r_r0;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_actual_kinds)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_formals_to_actuals", 134, CPyStatic_argmap___globals);
        goto CPyL21;
    }
    cpy_r_r4 = 0;
CPyL3: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_actual_kinds)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL8;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_actual_kinds, cpy_r_r4);
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_nodes___ArgKind))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_formals_to_actuals", 134, CPyStatic_argmap___globals, "mypy.nodes.ArgKind", cpy_r_r9);
        goto CPyL22;
    }
    cpy_r__ = cpy_r_r10;
    CPy_DECREF(cpy_r__);
    cpy_r_r11 = PyList_New(0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_formals_to_actuals", 134, CPyStatic_argmap___globals);
        goto CPyL22;
    }
    cpy_r_r12 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/argmap.py", "map_formals_to_actuals", 134, CPyStatic_argmap___globals);
        goto CPyL22;
    }
    cpy_r_r13 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r13;
    goto CPyL3;
CPyL8: ;
    cpy_r_actual_to_formal = cpy_r_r3;
    cpy_r_r14 = 0;
    cpy_r_formal = 0;
    cpy_r_r15 = 0;
CPyL9: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_formal_to_actual)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL23;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_formal_to_actual, cpy_r_r15);
    if (likely(PyList_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_formals_to_actuals", 135, CPyStatic_argmap___globals, "list", cpy_r_r20);
        goto CPyL24;
    }
    cpy_r_actuals = cpy_r_r21;
    cpy_r_r22 = 0;
CPyL12: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_actuals)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL25;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_actuals, cpy_r_r22);
    if (likely(PyLong_Check(cpy_r_r27)))
        cpy_r_r28 = CPyTagged_FromObject(cpy_r_r27);
    else {
        CPy_TypeError("int", cpy_r_r27); cpy_r_r28 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/argmap.py", "map_formals_to_actuals", 136, CPyStatic_argmap___globals);
        goto CPyL26;
    }
    cpy_r_actual = cpy_r_r28;
    cpy_r_r29 = CPyList_GetItem(cpy_r_actual_to_formal, cpy_r_actual);
    CPyTagged_DECREF(cpy_r_actual);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "map_formals_to_actuals", 137, CPyStatic_argmap___globals);
        goto CPyL26;
    }
    if (likely(PyList_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "map_formals_to_actuals", 137, CPyStatic_argmap___globals, "list", cpy_r_r29);
        goto CPyL26;
    }
    CPyTagged_INCREF(cpy_r_formal);
    cpy_r_r31 = CPyTagged_StealAsObject(cpy_r_formal);
    cpy_r_r32 = PyList_Append(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/argmap.py", "map_formals_to_actuals", 137, CPyStatic_argmap___globals);
        goto CPyL26;
    }
    cpy_r_r34 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r34;
    goto CPyL12;
CPyL18: ;
    cpy_r_r35 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r35;
    cpy_r_formal = cpy_r_r35;
    cpy_r_r36 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r36;
    goto CPyL9;
CPyL19: ;
    return cpy_r_actual_to_formal;
CPyL20: ;
    cpy_r_r37 = NULL;
    return cpy_r_r37;
CPyL21: ;
    CPy_DecRef(cpy_r_formal_to_actual);
    goto CPyL20;
CPyL22: ;
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_r3);
    goto CPyL20;
CPyL23: ;
    CPy_DECREF(cpy_r_formal_to_actual);
    CPyTagged_DECREF(cpy_r_formal);
    goto CPyL19;
CPyL24: ;
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_actual_to_formal);
    CPyTagged_DecRef(cpy_r_formal);
    goto CPyL20;
CPyL25: ;
    CPyTagged_DECREF(cpy_r_formal);
    CPy_DECREF(cpy_r_actuals);
    goto CPyL18;
CPyL26: ;
    CPy_DecRef(cpy_r_formal_to_actual);
    CPy_DecRef(cpy_r_actual_to_formal);
    CPyTagged_DecRef(cpy_r_formal);
    CPy_DecRef(cpy_r_actuals);
    goto CPyL20;
}

PyObject *CPyPy_argmap___map_formals_to_actuals(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"actual_kinds", "actual_names", "formal_kinds", "formal_names", "actual_arg_type", 0};
    static CPyArg_Parser parser = {"OOOOO:map_formals_to_actuals", kwlist, 0};
    PyObject *obj_actual_kinds;
    PyObject *obj_actual_names;
    PyObject *obj_formal_kinds;
    PyObject *obj_formal_names;
    PyObject *obj_actual_arg_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_actual_kinds, &obj_actual_names, &obj_formal_kinds, &obj_formal_names, &obj_actual_arg_type)) {
        return NULL;
    }
    PyObject *arg_actual_kinds;
    if (likely(PyList_Check(obj_actual_kinds)))
        arg_actual_kinds = obj_actual_kinds;
    else {
        CPy_TypeError("list", obj_actual_kinds); 
        goto fail;
    }
    PyObject *arg_actual_names;
    arg_actual_names = obj_actual_names;
    if (arg_actual_names != NULL) goto __LL20;
    if (obj_actual_names == Py_None)
        arg_actual_names = obj_actual_names;
    else {
        arg_actual_names = NULL;
    }
    if (arg_actual_names != NULL) goto __LL20;
    CPy_TypeError("object or None", obj_actual_names); 
    goto fail;
__LL20: ;
    PyObject *arg_formal_kinds;
    if (likely(PyList_Check(obj_formal_kinds)))
        arg_formal_kinds = obj_formal_kinds;
    else {
        CPy_TypeError("list", obj_formal_kinds); 
        goto fail;
    }
    PyObject *arg_formal_names;
    if (likely(PyList_Check(obj_formal_names)))
        arg_formal_names = obj_formal_names;
    else {
        CPy_TypeError("list", obj_formal_names); 
        goto fail;
    }
    PyObject *arg_actual_arg_type = obj_actual_arg_type;
    PyObject *retval = CPyDef_argmap___map_formals_to_actuals(arg_actual_kinds, arg_actual_names, arg_formal_kinds, arg_formal_names, arg_actual_arg_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/argmap.py", "map_formals_to_actuals", 122, CPyStatic_argmap___globals);
    return NULL;
}

char CPyDef_argmap___ArgTypeExpander_____init__(PyObject *cpy_r_self, PyObject *cpy_r_context) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    ((mypy___argmap___ArgTypeExpanderObject *)cpy_r_self)->_tuple_index = 0;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "__init__", 167, CPyStatic_argmap___globals);
        goto CPyL2;
    }
    ((mypy___argmap___ArgTypeExpanderObject *)cpy_r_self)->_kwargs_used = cpy_r_r0;
    CPy_INCREF(cpy_r_context);
    ((mypy___argmap___ArgTypeExpanderObject *)cpy_r_self)->_context = cpy_r_context;
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_argmap___ArgTypeExpander_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"context", 0};
    PyObject *obj_context;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_argmap___ArgTypeExpander))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.argmap.ArgTypeExpander", obj_self); 
        goto fail;
    }
    PyObject * arg_context;
    if (likely(PyTuple_Check(obj_context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("tuple", obj_context); 
        goto fail;
    }
    char retval = CPyDef_argmap___ArgTypeExpander_____init__(arg_self, arg_context);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/argmap.py", "__init__", 163, CPyStatic_argmap___globals);
    return NULL;
}

PyObject *CPyDef_argmap___ArgTypeExpander___expand_actual_type(PyObject *cpy_r_self, PyObject *cpy_r_actual_type, PyObject *cpy_r_actual_kind, PyObject *cpy_r_formal_name, PyObject *cpy_r_formal_kind) {
    PyObject *cpy_r_original_actual;
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
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
    CPyTagged cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    int64_t cpy_r_r52;
    CPyTagged cpy_r_r53;
    int64_t cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyTagged cpy_r_r75;
    CPyTagged cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyPtr cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
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
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    int32_t cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    CPyPtr cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    CPyPtr cpy_r_r125;
    int64_t cpy_r_r126;
    CPyTagged cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    char cpy_r_r135;
    char cpy_r_r136;
    char cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    CPyPtr cpy_r_r151;
    PyObject *cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    CPyTagged cpy_r_r157;
    CPyTagged cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    CPy_INCREF(cpy_r_actual_type);
    cpy_r_original_actual = cpy_r_actual_type;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_actual_type);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 190, CPyStatic_argmap___globals);
        goto CPyL95;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 190, CPyStatic_argmap___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL95;
    }
    cpy_r_actual_type = cpy_r_r1;
    cpy_r_r2 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r2 == NULL)) {
        goto CPyL96;
    } else
        goto CPyL5;
CPyL3: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 191, CPyStatic_argmap___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = cpy_r_actual_kind == cpy_r_r2;
    if (cpy_r_r4) {
        goto CPyL97;
    } else
        goto CPyL41;
CPyL6: ;
    cpy_r_r5 = (PyObject *)CPyType_types___Instance;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_actual_type)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    if (!cpy_r_r8) goto CPyL25;
    if (likely(Py_TYPE(cpy_r_actual_type) == CPyType_types___Instance))
        cpy_r_r9 = cpy_r_actual_type;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 192, CPyStatic_argmap___globals, "mypy.types.Instance", cpy_r_actual_type);
        goto CPyL98;
    }
    cpy_r_r10 = ((mypy___types___InstanceObject *)cpy_r_r9)->_args;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = PyObject_IsTrue(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 192, CPyStatic_argmap___globals);
        goto CPyL98;
    }
    cpy_r_r13 = cpy_r_r11;
    if (!cpy_r_r13) goto CPyL25;
    cpy_r_r14 = CPyStatics[9078]; /* ('is_subtype',) */
    cpy_r_r15 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r16 = CPyStatic_argmap___globals;
    cpy_r_r17 = CPyImport_ImportFromMany(cpy_r_r15, cpy_r_r14, cpy_r_r14, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 193, CPyStatic_argmap___globals);
        goto CPyL98;
    }
    CPyModule_mypy___subtypes = cpy_r_r17;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r17);
    CPy_INCREF(cpy_r_actual_type);
    if (likely(Py_TYPE(cpy_r_actual_type) == CPyType_types___Instance))
        cpy_r_r18 = cpy_r_actual_type;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 195, CPyStatic_argmap___globals, "mypy.types.Instance", cpy_r_actual_type);
        goto CPyL98;
    }
    cpy_r_r19 = ((mypy___argmap___ArgTypeExpanderObject *)cpy_r_self)->_context;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPySequenceTuple_GetItem(cpy_r_r19, 2);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 195, CPyStatic_argmap___globals);
        goto CPyL99;
    }
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_types___Instance))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 195, CPyStatic_argmap___globals, "mypy.types.Instance", cpy_r_r20);
        goto CPyL99;
    }
    cpy_r_r22 = NULL;
    cpy_r_r23 = 2;
    cpy_r_r24 = 2;
    cpy_r_r25 = 2;
    cpy_r_r26 = 2;
    cpy_r_r27 = 2;
    cpy_r_r28 = NULL;
    cpy_r_r29 = CPyDef_subtypes___is_subtype(cpy_r_r18, cpy_r_r21, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 195, CPyStatic_argmap___globals);
        goto CPyL98;
    }
    if (!cpy_r_r29) goto CPyL100;
    if (likely(Py_TYPE(cpy_r_actual_type) == CPyType_types___Instance))
        cpy_r_r30 = cpy_r_actual_type;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 197, CPyStatic_argmap___globals, "mypy.types.Instance", cpy_r_actual_type);
        goto CPyL94;
    }
    cpy_r_r31 = ((mypy___argmap___ArgTypeExpanderObject *)cpy_r_self)->_context;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = CPySequenceTuple_GetItem(cpy_r_r31, 2);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 197, CPyStatic_argmap___globals);
        goto CPyL101;
    }
    if (likely(Py_TYPE(cpy_r_r32) == CPyType_types___Instance))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 197, CPyStatic_argmap___globals, "mypy.types.Instance", cpy_r_r32);
        goto CPyL101;
    }
    cpy_r_r34 = ((mypy___types___InstanceObject *)cpy_r_r33)->_type;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = CPyDef_maptype___map_instance_to_supertype(cpy_r_r30, cpy_r_r34);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 196, CPyStatic_argmap___globals);
        goto CPyL94;
    }
    cpy_r_r36 = ((mypy___types___InstanceObject *)cpy_r_r35)->_args;
    CPy_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = CPySequenceTuple_GetItem(cpy_r_r36, 0);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 196, CPyStatic_argmap___globals);
        goto CPyL94;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r37, CPyType_types___Type)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 196, CPyStatic_argmap___globals, "mypy.types.Type", cpy_r_r37);
        goto CPyL94;
    }
    return cpy_r_r38;
CPyL23: ;
    cpy_r_r39 = NULL;
    cpy_r_r40 = NULL;
    cpy_r_r41 = CPY_INT_TAG;
    cpy_r_r42 = CPY_INT_TAG;
    cpy_r_r43 = CPyDef_types___AnyType(10, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 204, CPyStatic_argmap___globals);
        goto CPyL94;
    }
    return cpy_r_r43;
CPyL25: ;
    cpy_r_r44 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r45 = (CPyPtr)&((PyObject *)cpy_r_actual_type)->ob_type;
    cpy_r_r46 = *(PyObject * *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 == cpy_r_r44;
    if (!cpy_r_r47) goto CPyL36;
    cpy_r_r48 = ((mypy___argmap___ArgTypeExpanderObject *)cpy_r_self)->_tuple_index;
    CPyTagged_INCREF(cpy_r_r48);
    if (likely(Py_TYPE(cpy_r_actual_type) == CPyType_types___TupleType))
        cpy_r_r49 = cpy_r_actual_type;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 207, CPyStatic_argmap___globals, "mypy.types.TupleType", cpy_r_actual_type);
        goto CPyL102;
    }
    cpy_r_r50 = ((mypy___types___TupleTypeObject *)cpy_r_r49)->_items;
    cpy_r_r51 = (CPyPtr)&((PyVarObject *)cpy_r_r50)->ob_size;
    cpy_r_r52 = *(int64_t *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 << 1;
    cpy_r_r54 = cpy_r_r48 & 1;
    cpy_r_r55 = cpy_r_r54 != 0;
    if (!cpy_r_r55) goto CPyL29;
    cpy_r_r56 = CPyTagged_IsLt_(cpy_r_r48, cpy_r_r53);
    CPyTagged_DECREF(cpy_r_r48);
    if (cpy_r_r56) {
        goto CPyL31;
    } else
        goto CPyL30;
CPyL29: ;
    cpy_r_r57 = (Py_ssize_t)cpy_r_r48 >= (Py_ssize_t)cpy_r_r53;
    CPyTagged_DECREF(cpy_r_r48);
    if (!cpy_r_r57) goto CPyL31;
CPyL30: ;
    CPyTagged_DECREF(((mypy___argmap___ArgTypeExpanderObject *)cpy_r_self)->_tuple_index);
    ((mypy___argmap___ArgTypeExpanderObject *)cpy_r_self)->_tuple_index = 2;
    goto CPyL32;
CPyL31: ;
    cpy_r_r59 = ((mypy___argmap___ArgTypeExpanderObject *)cpy_r_self)->_tuple_index;
    cpy_r_r60 = CPyTagged_Add(cpy_r_r59, 2);
    CPyTagged_DECREF(((mypy___argmap___ArgTypeExpanderObject *)cpy_r_self)->_tuple_index);
    ((mypy___argmap___ArgTypeExpanderObject *)cpy_r_self)->_tuple_index = cpy_r_r60;
CPyL32: ;
    if (likely(Py_TYPE(cpy_r_actual_type) == CPyType_types___TupleType))
        cpy_r_r62 = cpy_r_actual_type;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 212, CPyStatic_argmap___globals, "mypy.types.TupleType", cpy_r_actual_type);
        goto CPyL98;
    }
    cpy_r_r63 = ((mypy___types___TupleTypeObject *)cpy_r_r62)->_items;
    CPy_INCREF(cpy_r_r63);
    CPy_DECREF(cpy_r_actual_type);
    cpy_r_r64 = ((mypy___argmap___ArgTypeExpanderObject *)cpy_r_self)->_tuple_index;
    cpy_r_r65 = CPyTagged_Subtract(cpy_r_r64, 2);
    cpy_r_r66 = CPyList_GetItem(cpy_r_r63, cpy_r_r65);
    CPy_DECREF(cpy_r_r63);
    CPyTagged_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 212, CPyStatic_argmap___globals);
        goto CPyL94;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r66, CPyType_types___Type)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 212, CPyStatic_argmap___globals, "mypy.types.Type", cpy_r_r66);
        goto CPyL94;
    }
    return cpy_r_r67;
CPyL36: ;
    cpy_r_r68 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r69 = (CPyPtr)&((PyObject *)cpy_r_actual_type)->ob_type;
    cpy_r_r70 = *(PyObject * *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 == cpy_r_r68;
    if (!cpy_r_r71) goto CPyL103;
    if (likely(Py_TYPE(cpy_r_actual_type) == CPyType_types___ParamSpecType))
        cpy_r_r72 = cpy_r_actual_type;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 215, CPyStatic_argmap___globals, "mypy.types.ParamSpecType", cpy_r_actual_type);
        goto CPyL94;
    }
    return cpy_r_r72;
CPyL39: ;
    cpy_r_r73 = NULL;
    cpy_r_r74 = NULL;
    cpy_r_r75 = CPY_INT_TAG;
    cpy_r_r76 = CPY_INT_TAG;
    cpy_r_r77 = CPyDef_types___AnyType(10, cpy_r_r73, cpy_r_r74, cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 217, CPyStatic_argmap___globals);
        goto CPyL94;
    }
    return cpy_r_r77;
CPyL41: ;
    cpy_r_r78 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r78 == NULL)) {
        goto CPyL104;
    } else
        goto CPyL44;
CPyL42: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r79 = 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 218, CPyStatic_argmap___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r80 = cpy_r_actual_kind == cpy_r_r78;
    if (cpy_r_r80) {
        goto CPyL105;
    } else
        goto CPyL106;
CPyL45: ;
    cpy_r_r81 = CPyStatics[9078]; /* ('is_subtype',) */
    cpy_r_r82 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r83 = CPyStatic_argmap___globals;
    cpy_r_r84 = CPyImport_ImportFromMany(cpy_r_r82, cpy_r_r81, cpy_r_r81, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 219, CPyStatic_argmap___globals);
        goto CPyL98;
    }
    CPyModule_mypy___subtypes = cpy_r_r84;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r85 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r86 = (CPyPtr)&((PyObject *)cpy_r_actual_type)->ob_type;
    cpy_r_r87 = *(PyObject * *)cpy_r_r86;
    cpy_r_r88 = cpy_r_r87 == cpy_r_r85;
    if (!cpy_r_r88) goto CPyL73;
    cpy_r_r89 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r89 == NULL)) {
        goto CPyL107;
    } else
        goto CPyL50;
CPyL48: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r90 = 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 222, CPyStatic_argmap___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r91 = cpy_r_formal_kind != cpy_r_r89;
    if (!cpy_r_r91) goto CPyL58;
    if (likely(Py_TYPE(cpy_r_actual_type) == CPyType_types___TypedDictType))
        cpy_r_r92 = cpy_r_actual_type;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 222, CPyStatic_argmap___globals, "mypy.types.TypedDictType", cpy_r_actual_type);
        goto CPyL98;
    }
    cpy_r_r93 = ((mypy___types___TypedDictTypeObject *)cpy_r_r92)->_items;
    CPy_INCREF(cpy_r_r93);
    cpy_r_r94 = PyDict_Contains(cpy_r_r93, cpy_r_formal_name);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 222, CPyStatic_argmap___globals);
        goto CPyL98;
    }
    cpy_r_r96 = cpy_r_r94;
    if (!cpy_r_r96) goto CPyL58;
    if (likely(cpy_r_formal_name != Py_None))
        cpy_r_r97 = cpy_r_formal_name;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 224, CPyStatic_argmap___globals, "str", cpy_r_formal_name);
        goto CPyL98;
    }
    cpy_r_r98 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r99 = cpy_r_r97 != cpy_r_r98;
    if (cpy_r_r99) {
        goto CPyL108;
    } else
        goto CPyL109;
CPyL56: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r100 = 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 224, CPyStatic_argmap___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL58: ;
    if (likely(Py_TYPE(cpy_r_actual_type) == CPyType_types___TypedDictType))
        cpy_r_r101 = cpy_r_actual_type;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 227, CPyStatic_argmap___globals, "mypy.types.TypedDictType", cpy_r_actual_type);
        goto CPyL98;
    }
    cpy_r_r102 = ((mypy___types___TypedDictTypeObject *)cpy_r_r101)->_items;
    CPy_INCREF(cpy_r_r102);
    cpy_r_r103 = CPyDict_KeysView(cpy_r_r102);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 227, CPyStatic_argmap___globals);
        goto CPyL98;
    }
    cpy_r_r104 = PySet_New(cpy_r_r103);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 227, CPyStatic_argmap___globals);
        goto CPyL98;
    }
    cpy_r_r105 = ((mypy___argmap___ArgTypeExpanderObject *)cpy_r_self)->_kwargs_used;
    CPy_INCREF(cpy_r_r105);
    cpy_r_r106 = PyNumber_Subtract(cpy_r_r104, cpy_r_r105);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 227, CPyStatic_argmap___globals);
        goto CPyL98;
    }
    if (likely(PySet_Check(cpy_r_r106)))
        cpy_r_r107 = cpy_r_r106;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 227, CPyStatic_argmap___globals, "set", cpy_r_r106);
        goto CPyL98;
    }
    cpy_r_r108 = PySet_Pop(cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 227, CPyStatic_argmap___globals);
        goto CPyL98;
    }
    if (likely(PyUnicode_Check(cpy_r_r108)))
        cpy_r_r109 = cpy_r_r108;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 227, CPyStatic_argmap___globals, "str", cpy_r_r108);
        goto CPyL98;
    }
    cpy_r_formal_name = cpy_r_r109;
CPyL66: ;
    cpy_r_r110 = ((mypy___argmap___ArgTypeExpanderObject *)cpy_r_self)->_kwargs_used;
    CPy_INCREF(cpy_r_r110);
    CPy_INCREF(cpy_r_formal_name);
    if (likely(cpy_r_formal_name != Py_None))
        cpy_r_r111 = cpy_r_formal_name;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 228, CPyStatic_argmap___globals, "str", cpy_r_formal_name);
        goto CPyL110;
    }
    cpy_r_r112 = PySet_Add(cpy_r_r110, cpy_r_r111);
    CPy_DECREF(cpy_r_r110);
    CPy_DECREF(cpy_r_r111);
    cpy_r_r113 = cpy_r_r112 >= 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 228, CPyStatic_argmap___globals);
        goto CPyL111;
    }
    if (likely(Py_TYPE(cpy_r_actual_type) == CPyType_types___TypedDictType))
        cpy_r_r114 = cpy_r_actual_type;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 229, CPyStatic_argmap___globals, "mypy.types.TypedDictType", cpy_r_actual_type);
        goto CPyL111;
    }
    cpy_r_r115 = ((mypy___types___TypedDictTypeObject *)cpy_r_r114)->_items;
    CPy_INCREF(cpy_r_r115);
    CPy_DECREF(cpy_r_actual_type);
    if (likely(cpy_r_formal_name != Py_None))
        cpy_r_r116 = cpy_r_formal_name;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 229, CPyStatic_argmap___globals, "str", cpy_r_formal_name);
        goto CPyL112;
    }
    cpy_r_r117 = CPyDict_GetItem(cpy_r_r115, cpy_r_r116);
    CPy_DECREF(cpy_r_r115);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 229, CPyStatic_argmap___globals);
        goto CPyL94;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r117, CPyType_types___Type)))
        cpy_r_r118 = cpy_r_r117;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 229, CPyStatic_argmap___globals, "mypy.types.Type", cpy_r_r117);
        goto CPyL94;
    }
    return cpy_r_r118;
CPyL73: ;
    cpy_r_r119 = (PyObject *)CPyType_types___Instance;
    cpy_r_r120 = (CPyPtr)&((PyObject *)cpy_r_actual_type)->ob_type;
    cpy_r_r121 = *(PyObject * *)cpy_r_r120;
    cpy_r_r122 = cpy_r_r121 == cpy_r_r119;
    if (!cpy_r_r122) goto CPyL88;
    if (likely(Py_TYPE(cpy_r_actual_type) == CPyType_types___Instance))
        cpy_r_r123 = cpy_r_actual_type;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 232, CPyStatic_argmap___globals, "mypy.types.Instance", cpy_r_actual_type);
        goto CPyL98;
    }
    cpy_r_r124 = ((mypy___types___InstanceObject *)cpy_r_r123)->_args;
    CPy_INCREF(cpy_r_r124);
    cpy_r_r125 = (CPyPtr)&((PyVarObject *)cpy_r_r124)->ob_size;
    cpy_r_r126 = *(int64_t *)cpy_r_r125;
    CPy_DECREF(cpy_r_r124);
    cpy_r_r127 = cpy_r_r126 << 1;
    cpy_r_r128 = (Py_ssize_t)cpy_r_r127 > (Py_ssize_t)2;
    if (!cpy_r_r128) goto CPyL88;
    CPy_INCREF(cpy_r_actual_type);
    if (likely(Py_TYPE(cpy_r_actual_type) == CPyType_types___Instance))
        cpy_r_r129 = cpy_r_actual_type;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 233, CPyStatic_argmap___globals, "mypy.types.Instance", cpy_r_actual_type);
        goto CPyL98;
    }
    cpy_r_r130 = ((mypy___argmap___ArgTypeExpanderObject *)cpy_r_self)->_context;
    CPy_INCREF(cpy_r_r130);
    cpy_r_r131 = CPySequenceTuple_GetItem(cpy_r_r130, 0);
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 233, CPyStatic_argmap___globals);
        goto CPyL113;
    }
    if (likely(Py_TYPE(cpy_r_r131) == CPyType_types___Instance))
        cpy_r_r132 = cpy_r_r131;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 233, CPyStatic_argmap___globals, "mypy.types.Instance", cpy_r_r131);
        goto CPyL113;
    }
    cpy_r_r133 = NULL;
    cpy_r_r134 = 2;
    cpy_r_r135 = 2;
    cpy_r_r136 = 2;
    cpy_r_r137 = 2;
    cpy_r_r138 = 2;
    cpy_r_r139 = NULL;
    cpy_r_r140 = CPyDef_subtypes___is_subtype(cpy_r_r129, cpy_r_r132, cpy_r_r133, cpy_r_r134, cpy_r_r135, cpy_r_r136, cpy_r_r137, cpy_r_r138, cpy_r_r139);
    CPy_DECREF(cpy_r_r129);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r140 == 2)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 233, CPyStatic_argmap___globals);
        goto CPyL98;
    }
    if (!cpy_r_r140) goto CPyL88;
    if (likely(Py_TYPE(cpy_r_actual_type) == CPyType_types___Instance))
        cpy_r_r141 = cpy_r_actual_type;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 237, CPyStatic_argmap___globals, "mypy.types.Instance", cpy_r_actual_type);
        goto CPyL94;
    }
    cpy_r_r142 = ((mypy___argmap___ArgTypeExpanderObject *)cpy_r_self)->_context;
    CPy_INCREF(cpy_r_r142);
    cpy_r_r143 = CPySequenceTuple_GetItem(cpy_r_r142, 0);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 237, CPyStatic_argmap___globals);
        goto CPyL114;
    }
    if (likely(Py_TYPE(cpy_r_r143) == CPyType_types___Instance))
        cpy_r_r144 = cpy_r_r143;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 237, CPyStatic_argmap___globals, "mypy.types.Instance", cpy_r_r143);
        goto CPyL114;
    }
    cpy_r_r145 = ((mypy___types___InstanceObject *)cpy_r_r144)->_type;
    CPy_INCREF(cpy_r_r145);
    CPy_DECREF(cpy_r_r144);
    cpy_r_r146 = CPyDef_maptype___map_instance_to_supertype(cpy_r_r141, cpy_r_r145);
    CPy_DECREF(cpy_r_r141);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 237, CPyStatic_argmap___globals);
        goto CPyL94;
    }
    cpy_r_r147 = ((mypy___types___InstanceObject *)cpy_r_r146)->_args;
    CPy_INCREF(cpy_r_r147);
    CPy_DECREF(cpy_r_r146);
    cpy_r_r148 = CPySequenceTuple_GetItem(cpy_r_r147, 2);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 237, CPyStatic_argmap___globals);
        goto CPyL94;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r148, CPyType_types___Type)))
        cpy_r_r149 = cpy_r_r148;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 237, CPyStatic_argmap___globals, "mypy.types.Type", cpy_r_r148);
        goto CPyL94;
    }
    return cpy_r_r149;
CPyL88: ;
    cpy_r_r150 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r151 = (CPyPtr)&((PyObject *)cpy_r_actual_type)->ob_type;
    cpy_r_r152 = *(PyObject * *)cpy_r_r151;
    cpy_r_r153 = cpy_r_r152 == cpy_r_r150;
    if (!cpy_r_r153) goto CPyL115;
    if (likely(Py_TYPE(cpy_r_actual_type) == CPyType_types___ParamSpecType))
        cpy_r_r154 = cpy_r_actual_type;
    else {
        CPy_TypeErrorTraceback("mypy/argmap.py", "expand_actual_type", 242, CPyStatic_argmap___globals, "mypy.types.ParamSpecType", cpy_r_actual_type);
        goto CPyL94;
    }
    return cpy_r_r154;
CPyL91: ;
    cpy_r_r155 = NULL;
    cpy_r_r156 = NULL;
    cpy_r_r157 = CPY_INT_TAG;
    cpy_r_r158 = CPY_INT_TAG;
    cpy_r_r159 = CPyDef_types___AnyType(10, cpy_r_r155, cpy_r_r156, cpy_r_r157, cpy_r_r158);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 244, CPyStatic_argmap___globals);
        goto CPyL94;
    }
    return cpy_r_r159;
CPyL93: ;
    return cpy_r_original_actual;
CPyL94: ;
    cpy_r_r160 = NULL;
    return cpy_r_r160;
CPyL95: ;
    CPy_DecRef(cpy_r_original_actual);
    goto CPyL94;
CPyL96: ;
    CPy_DecRef(cpy_r_actual_type);
    CPy_DecRef(cpy_r_original_actual);
    goto CPyL3;
CPyL97: ;
    CPy_DECREF(cpy_r_original_actual);
    goto CPyL6;
CPyL98: ;
    CPy_DecRef(cpy_r_actual_type);
    goto CPyL94;
CPyL99: ;
    CPy_DecRef(cpy_r_actual_type);
    CPy_DecRef(cpy_r_r18);
    goto CPyL94;
CPyL100: ;
    CPy_DECREF(cpy_r_actual_type);
    goto CPyL23;
CPyL101: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL94;
CPyL102: ;
    CPy_DecRef(cpy_r_actual_type);
    CPyTagged_DecRef(cpy_r_r48);
    goto CPyL94;
CPyL103: ;
    CPy_DECREF(cpy_r_actual_type);
    goto CPyL39;
CPyL104: ;
    CPy_DecRef(cpy_r_actual_type);
    CPy_DecRef(cpy_r_original_actual);
    goto CPyL42;
CPyL105: ;
    CPy_DECREF(cpy_r_original_actual);
    goto CPyL45;
CPyL106: ;
    CPy_DECREF(cpy_r_actual_type);
    goto CPyL93;
CPyL107: ;
    CPy_DecRef(cpy_r_actual_type);
    goto CPyL48;
CPyL108: ;
    CPy_INCREF(cpy_r_formal_name);
    goto CPyL66;
CPyL109: ;
    CPy_DECREF(cpy_r_actual_type);
    goto CPyL56;
CPyL110: ;
    CPy_DecRef(cpy_r_actual_type);
    CPy_DecRef(cpy_r_formal_name);
    CPy_DecRef(cpy_r_r110);
    goto CPyL94;
CPyL111: ;
    CPy_DecRef(cpy_r_actual_type);
    CPy_DecRef(cpy_r_formal_name);
    goto CPyL94;
CPyL112: ;
    CPy_DecRef(cpy_r_r115);
    goto CPyL94;
CPyL113: ;
    CPy_DecRef(cpy_r_actual_type);
    CPy_DecRef(cpy_r_r129);
    goto CPyL94;
CPyL114: ;
    CPy_DecRef(cpy_r_r141);
    goto CPyL94;
CPyL115: ;
    CPy_DECREF(cpy_r_actual_type);
    goto CPyL91;
}

PyObject *CPyPy_argmap___ArgTypeExpander___expand_actual_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"actual_type", "actual_kind", "formal_name", "formal_kind", 0};
    static CPyArg_Parser parser = {"OOOO:expand_actual_type", kwlist, 0};
    PyObject *obj_actual_type;
    PyObject *obj_actual_kind;
    PyObject *obj_formal_name;
    PyObject *obj_formal_kind;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_actual_type, &obj_actual_kind, &obj_formal_name, &obj_formal_kind)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_argmap___ArgTypeExpander))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.argmap.ArgTypeExpander", obj_self); 
        goto fail;
    }
    PyObject *arg_actual_type;
    if (likely(PyObject_TypeCheck(obj_actual_type, CPyType_types___Type)))
        arg_actual_type = obj_actual_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_actual_type); 
        goto fail;
    }
    PyObject *arg_actual_kind;
    if (likely(Py_TYPE(obj_actual_kind) == CPyType_nodes___ArgKind))
        arg_actual_kind = obj_actual_kind;
    else {
        CPy_TypeError("mypy.nodes.ArgKind", obj_actual_kind); 
        goto fail;
    }
    PyObject *arg_formal_name;
    if (PyUnicode_Check(obj_formal_name))
        arg_formal_name = obj_formal_name;
    else {
        arg_formal_name = NULL;
    }
    if (arg_formal_name != NULL) goto __LL21;
    if (obj_formal_name == Py_None)
        arg_formal_name = obj_formal_name;
    else {
        arg_formal_name = NULL;
    }
    if (arg_formal_name != NULL) goto __LL21;
    CPy_TypeError("str or None", obj_formal_name); 
    goto fail;
__LL21: ;
    PyObject *arg_formal_kind;
    if (likely(Py_TYPE(obj_formal_kind) == CPyType_nodes___ArgKind))
        arg_formal_kind = obj_formal_kind;
    else {
        CPy_TypeError("mypy.nodes.ArgKind", obj_formal_kind); 
        goto fail;
    }
    PyObject *retval = CPyDef_argmap___ArgTypeExpander___expand_actual_type(arg_self, arg_actual_type, arg_actual_kind, arg_formal_name, arg_formal_kind);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/argmap.py", "expand_actual_type", 171, CPyStatic_argmap___globals);
    return NULL;
}

char CPyDef_argmap_____top_level__(void) {
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
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "<module>", -1, CPyStatic_argmap___globals);
        goto CPyL17;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_argmap___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "<module>", 3, CPyStatic_argmap___globals);
        goto CPyL17;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9079]; /* ('TYPE_CHECKING', 'Callable', 'Sequence') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_argmap___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "<module>", 5, CPyStatic_argmap___globals);
        goto CPyL17;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9080]; /* ('nodes',) */
    cpy_r_r14 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r15 = CPyStatic_argmap___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "<module>", 7, CPyStatic_argmap___globals);
        goto CPyL17;
    }
    CPyModule_mypy = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9081]; /* ('map_instance_to_supertype',) */
    cpy_r_r18 = CPyStatics[61]; /* 'mypy.maptype' */
    cpy_r_r19 = CPyStatic_argmap___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "<module>", 8, CPyStatic_argmap___globals);
        goto CPyL17;
    }
    CPyModule_mypy___maptype = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___maptype);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9082]; /* ('AnyType', 'Instance', 'ParamSpecType', 'TupleType',
                                     'Type', 'TypedDictType', 'TypeOfAny',
                                     'get_proper_type') */
    cpy_r_r22 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r23 = CPyStatic_argmap___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "<module>", 9, CPyStatic_argmap___globals);
        goto CPyL17;
    }
    CPyModule_mypy___types = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatic_argmap___globals;
    cpy_r_r26 = CPyStatics[58]; /* 'TYPE_CHECKING' */
    cpy_r_r27 = CPyDict_GetItem(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "<module>", 20, CPyStatic_argmap___globals);
        goto CPyL17;
    }
    if (unlikely(!PyBool_Check(cpy_r_r27))) {
        CPy_TypeError("bool", cpy_r_r27); cpy_r_r28 = 2;
    } else
        cpy_r_r28 = cpy_r_r27 == Py_True;
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/argmap.py", "<module>", 20, CPyStatic_argmap___globals);
        goto CPyL17;
    }
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyStatics[64]; /* 'mypy.argmap' */
    cpy_r_r31 = (PyObject *)CPyType_argmap___ArgTypeExpander_template;
    cpy_r_r32 = CPyType_FromTemplate(cpy_r_r31, cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "<module>", 141, CPyStatic_argmap___globals);
        goto CPyL17;
    }
    cpy_r_r33 = CPyDef_argmap___ArgTypeExpander_trait_vtable_setup();
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypy/argmap.py", "<module>", -1, CPyStatic_argmap___globals);
        goto CPyL18;
    }
    cpy_r_r34 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r35 = CPyStatics[66]; /* 'tuple_index' */
    cpy_r_r36 = CPyStatics[67]; /* 'kwargs_used' */
    cpy_r_r37 = CPyStatics[68]; /* 'context' */
    cpy_r_r38 = PyTuple_Pack(3, cpy_r_r35, cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/argmap.py", "<module>", 141, CPyStatic_argmap___globals);
        goto CPyL18;
    }
    cpy_r_r39 = PyObject_SetAttr(cpy_r_r32, cpy_r_r34, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/argmap.py", "<module>", 141, CPyStatic_argmap___globals);
        goto CPyL18;
    }
    CPyType_argmap___ArgTypeExpander = (PyTypeObject *)cpy_r_r32;
    CPy_INCREF(CPyType_argmap___ArgTypeExpander);
    cpy_r_r41 = CPyStatic_argmap___globals;
    cpy_r_r42 = CPyStatics[69]; /* 'ArgTypeExpander' */
    cpy_r_r43 = CPyDict_SetItem(cpy_r_r41, cpy_r_r42, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/argmap.py", "<module>", 141, CPyStatic_argmap___globals);
        goto CPyL17;
    }
    return 1;
CPyL17: ;
    cpy_r_r45 = 2;
    return cpy_r_r45;
CPyL18: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL17;
}
