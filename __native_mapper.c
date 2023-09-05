#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
mapper___Mapper_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *mapper___Mapper_setup(PyTypeObject *type);
PyObject *CPyDef_mapper___Mapper(PyObject *cpy_r_group_map);

static PyObject *
mapper___Mapper_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mapper___Mapper) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = mapper___Mapper_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_mapper___Mapper_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
mapper___Mapper_traverse(mypyc___irbuild___mapper___MapperObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_group_map);
    Py_VISIT(self->_type_to_ir);
    Py_VISIT(self->_func_to_decl);
    return 0;
}

static int
mapper___Mapper_clear(mypyc___irbuild___mapper___MapperObject *self)
{
    Py_CLEAR(self->_group_map);
    Py_CLEAR(self->_type_to_ir);
    Py_CLEAR(self->_func_to_decl);
    return 0;
}

static void
mapper___Mapper_dealloc(mypyc___irbuild___mapper___MapperObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mapper___Mapper_dealloc)
    mapper___Mapper_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mapper___Mapper_vtable[7];
static bool
CPyDef_mapper___Mapper_trait_vtable_setup(void)
{
    CPyVTableItem mapper___Mapper_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mapper___Mapper_____init__,
        (CPyVTableItem)CPyDef_mapper___Mapper___type_to_rtype,
        (CPyVTableItem)CPyDef_mapper___Mapper___get_arg_rtype,
        (CPyVTableItem)CPyDef_mapper___Mapper___fdef_to_sig,
        (CPyVTableItem)CPyDef_mapper___Mapper___is_native_module,
        (CPyVTableItem)CPyDef_mapper___Mapper___is_native_ref_expr,
        (CPyVTableItem)CPyDef_mapper___Mapper___is_native_module_ref_expr,
    };
    memcpy(mapper___Mapper_vtable, mapper___Mapper_vtable_scratch, sizeof(mapper___Mapper_vtable));
    return 1;
}

static PyObject *
mapper___Mapper_get_group_map(mypyc___irbuild___mapper___MapperObject *self, void *closure);
static int
mapper___Mapper_set_group_map(mypyc___irbuild___mapper___MapperObject *self, PyObject *value, void *closure);
static PyObject *
mapper___Mapper_get_type_to_ir(mypyc___irbuild___mapper___MapperObject *self, void *closure);
static int
mapper___Mapper_set_type_to_ir(mypyc___irbuild___mapper___MapperObject *self, PyObject *value, void *closure);
static PyObject *
mapper___Mapper_get_func_to_decl(mypyc___irbuild___mapper___MapperObject *self, void *closure);
static int
mapper___Mapper_set_func_to_decl(mypyc___irbuild___mapper___MapperObject *self, PyObject *value, void *closure);

static PyGetSetDef mapper___Mapper_getseters[] = {
    {"group_map",
     (getter)mapper___Mapper_get_group_map, (setter)mapper___Mapper_set_group_map,
     NULL, NULL},
    {"type_to_ir",
     (getter)mapper___Mapper_get_type_to_ir, (setter)mapper___Mapper_set_type_to_ir,
     NULL, NULL},
    {"func_to_decl",
     (getter)mapper___Mapper_get_func_to_decl, (setter)mapper___Mapper_set_func_to_decl,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef mapper___Mapper_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_mapper___Mapper_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"type_to_rtype",
     (PyCFunction)CPyPy_mapper___Mapper___type_to_rtype,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_arg_rtype",
     (PyCFunction)CPyPy_mapper___Mapper___get_arg_rtype,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fdef_to_sig",
     (PyCFunction)CPyPy_mapper___Mapper___fdef_to_sig,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_native_module",
     (PyCFunction)CPyPy_mapper___Mapper___is_native_module,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_native_ref_expr",
     (PyCFunction)CPyPy_mapper___Mapper___is_native_ref_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_native_module_ref_expr",
     (PyCFunction)CPyPy_mapper___Mapper___is_native_module_ref_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mapper___Mapper_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Mapper",
    .tp_new = mapper___Mapper_new,
    .tp_dealloc = (destructor)mapper___Mapper_dealloc,
    .tp_traverse = (traverseproc)mapper___Mapper_traverse,
    .tp_clear = (inquiry)mapper___Mapper_clear,
    .tp_getset = mapper___Mapper_getseters,
    .tp_methods = mapper___Mapper_methods,
    .tp_init = mapper___Mapper_init,
    .tp_basicsize = sizeof(mypyc___irbuild___mapper___MapperObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mapper___Mapper_template = &CPyType_mapper___Mapper_template_;

static PyObject *
mapper___Mapper_setup(PyTypeObject *type)
{
    mypyc___irbuild___mapper___MapperObject *self;
    self = (mypyc___irbuild___mapper___MapperObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mapper___Mapper_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_mapper___Mapper(PyObject *cpy_r_group_map)
{
    PyObject *self = mapper___Mapper_setup(CPyType_mapper___Mapper);
    if (self == NULL)
        return NULL;
    char res = CPyDef_mapper___Mapper_____init__(self, cpy_r_group_map);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
mapper___Mapper_get_group_map(mypyc___irbuild___mapper___MapperObject *self, void *closure)
{
    if (unlikely(self->_group_map == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'group_map' of 'Mapper' undefined");
        return NULL;
    }
    CPy_INCREF(self->_group_map);
    PyObject *retval = self->_group_map;
    return retval;
}

static int
mapper___Mapper_set_group_map(mypyc___irbuild___mapper___MapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Mapper' object attribute 'group_map' cannot be deleted");
        return -1;
    }
    if (self->_group_map != NULL) {
        CPy_DECREF(self->_group_map);
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
    self->_group_map = tmp;
    return 0;
}

static PyObject *
mapper___Mapper_get_type_to_ir(mypyc___irbuild___mapper___MapperObject *self, void *closure)
{
    if (unlikely(self->_type_to_ir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'type_to_ir' of 'Mapper' undefined");
        return NULL;
    }
    CPy_INCREF(self->_type_to_ir);
    PyObject *retval = self->_type_to_ir;
    return retval;
}

static int
mapper___Mapper_set_type_to_ir(mypyc___irbuild___mapper___MapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Mapper' object attribute 'type_to_ir' cannot be deleted");
        return -1;
    }
    if (self->_type_to_ir != NULL) {
        CPy_DECREF(self->_type_to_ir);
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
    self->_type_to_ir = tmp;
    return 0;
}

static PyObject *
mapper___Mapper_get_func_to_decl(mypyc___irbuild___mapper___MapperObject *self, void *closure)
{
    if (unlikely(self->_func_to_decl == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'func_to_decl' of 'Mapper' undefined");
        return NULL;
    }
    CPy_INCREF(self->_func_to_decl);
    PyObject *retval = self->_func_to_decl;
    return retval;
}

static int
mapper___Mapper_set_func_to_decl(mypyc___irbuild___mapper___MapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Mapper' object attribute 'func_to_decl' cannot be deleted");
        return -1;
    }
    if (self->_func_to_decl != NULL) {
        CPy_DECREF(self->_func_to_decl);
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
    self->_func_to_decl = tmp;
    return 0;
}
static PyMethodDef mappermodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mappermodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.mapper",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    mappermodule_methods
};

PyObject *CPyInit_mypyc___irbuild___mapper(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___mapper_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___mapper_internal);
        return CPyModule_mypyc___irbuild___mapper_internal;
    }
    CPyModule_mypyc___irbuild___mapper_internal = PyModule_Create(&mappermodule);
    if (unlikely(CPyModule_mypyc___irbuild___mapper_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___mapper_internal, "__name__");
    CPyStatic_mapper___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___mapper_internal);
    if (unlikely(CPyStatic_mapper___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_mapper_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___mapper_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___mapper_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_mapper___Mapper);
    return NULL;
}

char CPyDef_mapper___Mapper_____init__(PyObject *cpy_r_self, PyObject *cpy_r_group_map) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    CPy_INCREF(cpy_r_group_map);
    ((mypyc___irbuild___mapper___MapperObject *)cpy_r_self)->_group_map = cpy_r_group_map;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "__init__", 62, CPyStatic_mapper___globals);
        goto CPyL3;
    }
    ((mypyc___irbuild___mapper___MapperObject *)cpy_r_self)->_type_to_ir = cpy_r_r0;
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "__init__", 63, CPyStatic_mapper___globals);
        goto CPyL3;
    }
    ((mypyc___irbuild___mapper___MapperObject *)cpy_r_self)->_func_to_decl = cpy_r_r1;
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_mapper___Mapper_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"group_map", 0};
    PyObject *obj_group_map;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_group_map)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mapper___Mapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_self); 
        goto fail;
    }
    PyObject *arg_group_map;
    if (likely(PyDict_Check(obj_group_map)))
        arg_group_map = obj_group_map;
    else {
        CPy_TypeError("dict", obj_group_map); 
        goto fail;
    }
    char retval = CPyDef_mapper___Mapper_____init__(arg_self, arg_group_map);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/mapper.py", "__init__", 60, CPyStatic_mapper___globals);
    return NULL;
}

PyObject *CPyDef_mapper___Mapper___type_to_rtype(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
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
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyTagged cpy_r_r87;
    CPyPtr cpy_r_r88;
    int64_t cpy_r_r89;
    CPyTagged cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_cls;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    CPyTagged cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    int32_t cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    int32_t cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    char cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_inst;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    CPyPtr cpy_r_r159;
    CPyPtr cpy_r_r160;
    CPyPtr cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
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
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    int32_t cpy_r_r179;
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    char cpy_r_r182;
    char cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    int32_t cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    char cpy_r_r194;
    char cpy_r_r195;
    char cpy_r_r196;
    PyObject *cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    int32_t cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    char cpy_r_r206;
    char cpy_r_r207;
    char cpy_r_r208;
    PyObject *cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    CPyPtr cpy_r_r214;
    PyObject *cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    int32_t cpy_r_r222;
    char cpy_r_r223;
    PyObject *cpy_r_r224;
    char cpy_r_r225;
    char cpy_r_r226;
    char cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    CPyPtr cpy_r_r230;
    int64_t cpy_r_r231;
    PyObject *cpy_r_r232;
    CPyTagged cpy_r_r233;
    CPyPtr cpy_r_r234;
    int64_t cpy_r_r235;
    CPyTagged cpy_r_r236;
    char cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r240;
    char cpy_r_r241;
    CPyTagged cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    char cpy_r_r245;
    PyObject *cpy_r_r246;
    CPyPtr cpy_r_r247;
    PyObject *cpy_r_r248;
    char cpy_r_r249;
    PyObject *cpy_r_r250;
    char cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    int32_t cpy_r_r255;
    char cpy_r_r256;
    char cpy_r_r257;
    PyObject *cpy_r_r258;
    char cpy_r_r259;
    PyObject *cpy_r_r260;
    CPyPtr cpy_r_r261;
    PyObject *cpy_r_r262;
    char cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    CPyPtr cpy_r_r266;
    int64_t cpy_r_r267;
    PyObject *cpy_r_r268;
    CPyTagged cpy_r_r269;
    CPyPtr cpy_r_r270;
    int64_t cpy_r_r271;
    CPyTagged cpy_r_r272;
    char cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r276;
    char cpy_r_r277;
    CPyTagged cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    CPyPtr cpy_r_r281;
    PyObject *cpy_r_r282;
    char cpy_r_r283;
    PyObject *cpy_r_r284;
    char cpy_r_r285;
    PyObject *cpy_r_r286;
    CPyPtr cpy_r_r287;
    PyObject *cpy_r_r288;
    char cpy_r_r289;
    PyObject *cpy_r_r290;
    char cpy_r_r291;
    PyObject *cpy_r_r292;
    CPyPtr cpy_r_r293;
    PyObject *cpy_r_r294;
    char cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    CPyPtr cpy_r_r300;
    PyObject *cpy_r_r301;
    char cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    char cpy_r_r307;
    char cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    CPyPtr cpy_r_r315;
    PyObject *cpy_r_r316;
    char cpy_r_r317;
    PyObject *cpy_r_r318;
    char cpy_r_r319;
    PyObject *cpy_r_r320;
    CPyPtr cpy_r_r321;
    PyObject *cpy_r_r322;
    char cpy_r_r323;
    PyObject *cpy_r_r324;
    char cpy_r_r325;
    PyObject *cpy_r_r326;
    CPyPtr cpy_r_r327;
    PyObject *cpy_r_r328;
    char cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    CPyPtr cpy_r_r334;
    PyObject *cpy_r_r335;
    char cpy_r_r336;
    char cpy_r_r337;
    PyObject *cpy_r_r338;
    CPyPtr cpy_r_r339;
    PyObject *cpy_r_r340;
    char cpy_r_r341;
    PyObject *cpy_r_r342;
    char cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject **cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_typ == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL5;
    cpy_r_r2 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r2 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 67, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_r2);
    return cpy_r_r2;
CPyL5: ;
    CPy_INCREF(cpy_r_typ);
    if (likely(cpy_r_typ != Py_None))
        cpy_r_r4 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 69, CPyStatic_mapper___globals, "mypy.types.Type", cpy_r_typ);
        goto CPyL275;
    }
    cpy_r_r5 = CPyDef_types___get_proper_type(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 69, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 69, CPyStatic_mapper___globals, "mypy.types.ProperType", cpy_r_r5);
        goto CPyL275;
    }
    cpy_r_typ = cpy_r_r6;
    cpy_r_r7 = (PyObject *)CPyType_types___Instance;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL177;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r11 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 71, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r12 = ((mypy___types___InstanceObject *)cpy_r_r11)->_type;
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_r12, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 71, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL11: ;
    cpy_r_r14 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL14;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL14;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 71, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL14: ;
    cpy_r_r20 = cpy_r_r15 == 0;
    if (cpy_r_r20) {
        goto CPyL277;
    } else
        goto CPyL19;
CPyL15: ;
    cpy_r_r21 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r21 != NULL)) goto CPyL18;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r22 = 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 72, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL18: ;
    CPy_INCREF(cpy_r_r21);
    return cpy_r_r21;
CPyL19: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r23 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 73, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r24 = ((mypy___types___InstanceObject *)cpy_r_r23)->_type;
    cpy_r_r25 = CPY_GET_ATTR(cpy_r_r24, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 73, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL21: ;
    cpy_r_r26 = CPyStatics[1180]; /* 'builtins.float' */
    cpy_r_r27 = PyUnicode_Compare(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r28 = cpy_r_r27 == -1;
    if (!cpy_r_r28) goto CPyL24;
    cpy_r_r29 = PyErr_Occurred();
    cpy_r_r30 = cpy_r_r29 != NULL;
    if (!cpy_r_r30) goto CPyL24;
    cpy_r_r31 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 73, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL24: ;
    cpy_r_r32 = cpy_r_r27 == 0;
    if (cpy_r_r32) {
        goto CPyL278;
    } else
        goto CPyL29;
CPyL25: ;
    cpy_r_r33 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r33 != NULL)) goto CPyL28;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 74, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL28: ;
    CPy_INCREF(cpy_r_r33);
    return cpy_r_r33;
CPyL29: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r35 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 75, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r36 = ((mypy___types___InstanceObject *)cpy_r_r35)->_type;
    cpy_r_r37 = CPY_GET_ATTR(cpy_r_r36, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 75, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL31: ;
    cpy_r_r38 = CPyStatics[831]; /* 'builtins.bool' */
    cpy_r_r39 = PyUnicode_Compare(cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r40 = cpy_r_r39 == -1;
    if (!cpy_r_r40) goto CPyL34;
    cpy_r_r41 = PyErr_Occurred();
    cpy_r_r42 = cpy_r_r41 != NULL;
    if (!cpy_r_r42) goto CPyL34;
    cpy_r_r43 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 75, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL34: ;
    cpy_r_r44 = cpy_r_r39 == 0;
    if (cpy_r_r44) {
        goto CPyL279;
    } else
        goto CPyL39;
CPyL35: ;
    cpy_r_r45 = CPyStatic_rtypes___bool_rprimitive;
    if (likely(cpy_r_r45 != NULL)) goto CPyL38;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 76, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL38: ;
    CPy_INCREF(cpy_r_r45);
    return cpy_r_r45;
CPyL39: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r47 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 77, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r48 = ((mypy___types___InstanceObject *)cpy_r_r47)->_type;
    cpy_r_r49 = CPY_GET_ATTR(cpy_r_r48, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 77, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL41: ;
    cpy_r_r50 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r51 = PyUnicode_Compare(cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r52 = cpy_r_r51 == -1;
    if (!cpy_r_r52) goto CPyL44;
    cpy_r_r53 = PyErr_Occurred();
    cpy_r_r54 = cpy_r_r53 != NULL;
    if (!cpy_r_r54) goto CPyL44;
    cpy_r_r55 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 77, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL44: ;
    cpy_r_r56 = cpy_r_r51 == 0;
    if (cpy_r_r56) {
        goto CPyL280;
    } else
        goto CPyL49;
CPyL45: ;
    cpy_r_r57 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r57 != NULL)) goto CPyL48;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r58 = 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 78, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL48: ;
    CPy_INCREF(cpy_r_r57);
    return cpy_r_r57;
CPyL49: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r59 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 79, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r60 = ((mypy___types___InstanceObject *)cpy_r_r59)->_type;
    cpy_r_r61 = CPY_GET_ATTR(cpy_r_r60, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 79, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL51: ;
    cpy_r_r62 = CPyStatics[1179]; /* 'builtins.bytes' */
    cpy_r_r63 = PyUnicode_Compare(cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r64 = cpy_r_r63 == -1;
    if (!cpy_r_r64) goto CPyL54;
    cpy_r_r65 = PyErr_Occurred();
    cpy_r_r66 = cpy_r_r65 != NULL;
    if (!cpy_r_r66) goto CPyL54;
    cpy_r_r67 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 79, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL54: ;
    cpy_r_r68 = cpy_r_r63 == 0;
    if (cpy_r_r68) {
        goto CPyL281;
    } else
        goto CPyL59;
CPyL55: ;
    cpy_r_r69 = CPyStatic_rtypes___bytes_rprimitive;
    if (likely(cpy_r_r69 != NULL)) goto CPyL58;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r70 = 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 80, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL58: ;
    CPy_INCREF(cpy_r_r69);
    return cpy_r_r69;
CPyL59: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r71 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 81, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r72 = ((mypy___types___InstanceObject *)cpy_r_r71)->_type;
    cpy_r_r73 = CPY_GET_ATTR(cpy_r_r72, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 81, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL61: ;
    cpy_r_r74 = CPyStatics[796]; /* 'builtins.list' */
    cpy_r_r75 = PyUnicode_Compare(cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r76 = cpy_r_r75 == -1;
    if (!cpy_r_r76) goto CPyL64;
    cpy_r_r77 = PyErr_Occurred();
    cpy_r_r78 = cpy_r_r77 != NULL;
    if (!cpy_r_r78) goto CPyL64;
    cpy_r_r79 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 81, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL64: ;
    cpy_r_r80 = cpy_r_r75 == 0;
    if (cpy_r_r80) {
        goto CPyL282;
    } else
        goto CPyL69;
CPyL65: ;
    cpy_r_r81 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r81 != NULL)) goto CPyL68;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r82 = 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 82, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL68: ;
    CPy_INCREF(cpy_r_r81);
    return cpy_r_r81;
CPyL69: ;
    cpy_r_r83 = 0;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r84 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 86, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r85 = ((mypy___types___InstanceObject *)cpy_r_r84)->_type;
    cpy_r_r86 = ((mypy___nodes___TypeInfoObject *)cpy_r_r85)->_mro;
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/mapper.py", "type_to_rtype", "TypeInfo", "mro", 86, CPyStatic_mapper___globals);
        goto CPyL276;
    }
    CPy_INCREF(cpy_r_r86);
CPyL71: ;
    cpy_r_r87 = 0;
CPyL72: ;
    cpy_r_r88 = (CPyPtr)&((PyVarObject *)cpy_r_r86)->ob_size;
    cpy_r_r89 = *(int64_t *)cpy_r_r88;
    cpy_r_r90 = cpy_r_r89 << 1;
    cpy_r_r91 = (Py_ssize_t)cpy_r_r87 < (Py_ssize_t)cpy_r_r90;
    if (!cpy_r_r91) goto CPyL283;
    cpy_r_r92 = CPyList_GetItemUnsafe(cpy_r_r86, cpy_r_r87);
    if (likely((Py_TYPE(cpy_r_r92) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r92) == CPyType_nodes___TypeInfo)))
        cpy_r_r93 = cpy_r_r92;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 86, CPyStatic_mapper___globals, "mypy.nodes.TypeInfo", cpy_r_r92);
        goto CPyL284;
    }
    cpy_r_cls = cpy_r_r93;
    cpy_r_r94 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_cls);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 86, CPyStatic_mapper___globals);
        goto CPyL284;
    }
CPyL75: ;
    cpy_r_r95 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r96 = PyUnicode_Compare(cpy_r_r94, cpy_r_r95);
    CPy_DECREF(cpy_r_r94);
    cpy_r_r97 = cpy_r_r96 == -1;
    if (!cpy_r_r97) goto CPyL78;
    cpy_r_r98 = PyErr_Occurred();
    cpy_r_r99 = cpy_r_r98 != NULL;
    if (!cpy_r_r99) goto CPyL78;
    cpy_r_r100 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 86, CPyStatic_mapper___globals);
        goto CPyL284;
    }
CPyL78: ;
    cpy_r_r101 = cpy_r_r96 == 0;
    if (cpy_r_r101) {
        goto CPyL285;
    } else
        goto CPyL80;
CPyL79: ;
    cpy_r_r83 = 1;
    goto CPyL81;
CPyL80: ;
    cpy_r_r102 = cpy_r_r87 + 2;
    cpy_r_r87 = cpy_r_r102;
    goto CPyL72;
CPyL81: ;
    if (cpy_r_r83) {
        goto CPyL286;
    } else
        goto CPyL86;
CPyL82: ;
    cpy_r_r103 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r103 != NULL)) goto CPyL85;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r104 = 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 87, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL85: ;
    CPy_INCREF(cpy_r_r103);
    return cpy_r_r103;
CPyL86: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r105 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 88, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r106 = ((mypy___types___InstanceObject *)cpy_r_r105)->_type;
    cpy_r_r107 = CPY_GET_ATTR(cpy_r_r106, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 88, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL88: ;
    cpy_r_r108 = CPyStatics[797]; /* 'builtins.set' */
    cpy_r_r109 = PyUnicode_Compare(cpy_r_r107, cpy_r_r108);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r110 = cpy_r_r109 == -1;
    if (!cpy_r_r110) goto CPyL91;
    cpy_r_r111 = PyErr_Occurred();
    cpy_r_r112 = cpy_r_r111 != NULL;
    if (!cpy_r_r112) goto CPyL91;
    cpy_r_r113 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 88, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL91: ;
    cpy_r_r114 = cpy_r_r109 == 0;
    if (cpy_r_r114) {
        goto CPyL287;
    } else
        goto CPyL96;
CPyL92: ;
    cpy_r_r115 = CPyStatic_rtypes___set_rprimitive;
    if (likely(cpy_r_r115 != NULL)) goto CPyL95;
    PyErr_SetString(PyExc_NameError, "value for final name \"set_rprimitive\" was not set");
    cpy_r_r116 = 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 89, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL95: ;
    CPy_INCREF(cpy_r_r115);
    return cpy_r_r115;
CPyL96: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r117 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 90, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r118 = ((mypy___types___InstanceObject *)cpy_r_r117)->_type;
    cpy_r_r119 = CPY_GET_ATTR(cpy_r_r118, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 90, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL98: ;
    cpy_r_r120 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r121 = PyUnicode_Compare(cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    cpy_r_r122 = cpy_r_r121 == -1;
    if (!cpy_r_r122) goto CPyL101;
    cpy_r_r123 = PyErr_Occurred();
    cpy_r_r124 = cpy_r_r123 != NULL;
    if (!cpy_r_r124) goto CPyL101;
    cpy_r_r125 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 90, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL101: ;
    cpy_r_r126 = cpy_r_r121 == 0;
    if (cpy_r_r126) {
        goto CPyL288;
    } else
        goto CPyL106;
CPyL102: ;
    cpy_r_r127 = CPyStatic_rtypes___tuple_rprimitive;
    if (likely(cpy_r_r127 != NULL)) goto CPyL105;
    PyErr_SetString(PyExc_NameError, "value for final name \"tuple_rprimitive\" was not set");
    cpy_r_r128 = 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 91, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL105: ;
    CPy_INCREF(cpy_r_r127);
    return cpy_r_r127;
CPyL106: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r129 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 92, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r130 = ((mypy___types___InstanceObject *)cpy_r_r129)->_type;
    cpy_r_r131 = CPY_GET_ATTR(cpy_r_r130, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 92, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL108: ;
    cpy_r_r132 = CPyStatics[825]; /* 'builtins.range' */
    cpy_r_r133 = PyUnicode_Compare(cpy_r_r131, cpy_r_r132);
    CPy_DECREF(cpy_r_r131);
    cpy_r_r134 = cpy_r_r133 == -1;
    if (!cpy_r_r134) goto CPyL111;
    cpy_r_r135 = PyErr_Occurred();
    cpy_r_r136 = cpy_r_r135 != NULL;
    if (!cpy_r_r136) goto CPyL111;
    cpy_r_r137 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 92, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL111: ;
    cpy_r_r138 = cpy_r_r133 == 0;
    if (cpy_r_r138) {
        goto CPyL289;
    } else
        goto CPyL116;
CPyL112: ;
    cpy_r_r139 = CPyStatic_rtypes___range_rprimitive;
    if (likely(cpy_r_r139 != NULL)) goto CPyL115;
    PyErr_SetString(PyExc_NameError, "value for final name \"range_rprimitive\" was not set");
    cpy_r_r140 = 0;
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 93, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL115: ;
    CPy_INCREF(cpy_r_r139);
    return cpy_r_r139;
CPyL116: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r141 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 94, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r142 = ((mypy___types___InstanceObject *)cpy_r_r141)->_type;
    CPy_INCREF(cpy_r_r142);
    cpy_r_r143 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_self)->_type_to_ir;
    CPy_INCREF(cpy_r_r143);
    cpy_r_r144 = PyDict_Contains(cpy_r_r143, cpy_r_r142);
    CPy_DECREF(cpy_r_r143);
    CPy_DECREF(cpy_r_r142);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 94, CPyStatic_mapper___globals);
        goto CPyL276;
    }
    cpy_r_r146 = cpy_r_r144;
    if (!cpy_r_r146) goto CPyL133;
    cpy_r_r147 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_self)->_type_to_ir;
    CPy_INCREF(cpy_r_r147);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r148 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 95, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL290;
    }
    cpy_r_r149 = ((mypy___types___InstanceObject *)cpy_r_r148)->_type;
    CPy_INCREF(cpy_r_r149);
    cpy_r_r150 = CPyDict_GetItem(cpy_r_r147, cpy_r_r149);
    CPy_DECREF(cpy_r_r147);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 95, CPyStatic_mapper___globals);
        goto CPyL276;
    }
    if (likely(Py_TYPE(cpy_r_r150) == CPyType_class_ir___ClassIR))
        cpy_r_r151 = cpy_r_r150;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 95, CPyStatic_mapper___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r150);
        goto CPyL276;
    }
    cpy_r_r152 = CPyDef_rtypes___RInstance(cpy_r_r151);
    CPy_DECREF(cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 95, CPyStatic_mapper___globals);
        goto CPyL276;
    }
    cpy_r_inst = cpy_r_r152;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r153 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 99, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL291;
    }
    cpy_r_r154 = ((mypy___types___InstanceObject *)cpy_r_r153)->_type;
    cpy_r_r155 = ((mypy___nodes___TypeInfoObject *)cpy_r_r154)->_is_protocol;
    if (unlikely(cpy_r_r155 == 2)) {
        CPy_AttributeError("mypyc/irbuild/mapper.py", "type_to_rtype", "TypeInfo", "is_protocol", 99, CPyStatic_mapper___globals);
        goto CPyL291;
    }
CPyL125: ;
    CPy_DECREF(cpy_r_typ);
    if (!cpy_r_r155) goto CPyL132;
CPyL126: ;
    cpy_r_r156 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r156 == NULL)) {
        goto CPyL292;
    } else
        goto CPyL129;
CPyL127: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r157 = 0;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 100, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL129: ;
    cpy_r_r158 = PyList_New(2);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 100, CPyStatic_mapper___globals);
        goto CPyL293;
    }
    cpy_r_r159 = (CPyPtr)&((PyListObject *)cpy_r_r158)->ob_item;
    cpy_r_r160 = *(CPyPtr *)cpy_r_r159;
    *(PyObject * *)cpy_r_r160 = cpy_r_inst;
    cpy_r_r161 = cpy_r_r160 + 8;
    CPy_INCREF(cpy_r_r156);
    *(PyObject * *)cpy_r_r161 = cpy_r_r156;
    cpy_r_r162 = CPyDef_rtypes___RUnion(cpy_r_r158);
    CPy_DECREF(cpy_r_r158);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 100, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    return cpy_r_r162;
CPyL132: ;
    return cpy_r_inst;
CPyL133: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r163 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 103, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r164 = ((mypy___types___InstanceObject *)cpy_r_r163)->_type;
    cpy_r_r165 = CPY_GET_ATTR(cpy_r_r164, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 103, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL135: ;
    cpy_r_r166 = CPyStatics[6454]; /* 'mypy_extensions.i64' */
    cpy_r_r167 = PyUnicode_Compare(cpy_r_r165, cpy_r_r166);
    CPy_DECREF(cpy_r_r165);
    cpy_r_r168 = cpy_r_r167 == -1;
    if (!cpy_r_r168) goto CPyL138;
    cpy_r_r169 = PyErr_Occurred();
    cpy_r_r170 = cpy_r_r169 != NULL;
    if (!cpy_r_r170) goto CPyL138;
    cpy_r_r171 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 103, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL138: ;
    cpy_r_r172 = cpy_r_r167 == 0;
    if (cpy_r_r172) {
        goto CPyL294;
    } else
        goto CPyL143;
CPyL139: ;
    cpy_r_r173 = CPyStatic_rtypes___int64_rprimitive;
    if (likely(cpy_r_r173 != NULL)) goto CPyL142;
    PyErr_SetString(PyExc_NameError, "value for final name \"int64_rprimitive\" was not set");
    cpy_r_r174 = 0;
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 104, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL142: ;
    CPy_INCREF(cpy_r_r173);
    return cpy_r_r173;
CPyL143: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r175 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 105, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r176 = ((mypy___types___InstanceObject *)cpy_r_r175)->_type;
    cpy_r_r177 = CPY_GET_ATTR(cpy_r_r176, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 105, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL145: ;
    cpy_r_r178 = CPyStatics[6455]; /* 'mypy_extensions.i32' */
    cpy_r_r179 = PyUnicode_Compare(cpy_r_r177, cpy_r_r178);
    CPy_DECREF(cpy_r_r177);
    cpy_r_r180 = cpy_r_r179 == -1;
    if (!cpy_r_r180) goto CPyL148;
    cpy_r_r181 = PyErr_Occurred();
    cpy_r_r182 = cpy_r_r181 != NULL;
    if (!cpy_r_r182) goto CPyL148;
    cpy_r_r183 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r183)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 105, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL148: ;
    cpy_r_r184 = cpy_r_r179 == 0;
    if (cpy_r_r184) {
        goto CPyL295;
    } else
        goto CPyL153;
CPyL149: ;
    cpy_r_r185 = CPyStatic_rtypes___int32_rprimitive;
    if (likely(cpy_r_r185 != NULL)) goto CPyL152;
    PyErr_SetString(PyExc_NameError, "value for final name \"int32_rprimitive\" was not set");
    cpy_r_r186 = 0;
    if (unlikely(!cpy_r_r186)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 106, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL152: ;
    CPy_INCREF(cpy_r_r185);
    return cpy_r_r185;
CPyL153: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r187 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 107, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r188 = ((mypy___types___InstanceObject *)cpy_r_r187)->_type;
    cpy_r_r189 = CPY_GET_ATTR(cpy_r_r188, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 107, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL155: ;
    cpy_r_r190 = CPyStatics[6456]; /* 'mypy_extensions.i16' */
    cpy_r_r191 = PyUnicode_Compare(cpy_r_r189, cpy_r_r190);
    CPy_DECREF(cpy_r_r189);
    cpy_r_r192 = cpy_r_r191 == -1;
    if (!cpy_r_r192) goto CPyL158;
    cpy_r_r193 = PyErr_Occurred();
    cpy_r_r194 = cpy_r_r193 != NULL;
    if (!cpy_r_r194) goto CPyL158;
    cpy_r_r195 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r195)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 107, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL158: ;
    cpy_r_r196 = cpy_r_r191 == 0;
    if (cpy_r_r196) {
        goto CPyL296;
    } else
        goto CPyL163;
CPyL159: ;
    cpy_r_r197 = CPyStatic_rtypes___int16_rprimitive;
    if (likely(cpy_r_r197 != NULL)) goto CPyL162;
    PyErr_SetString(PyExc_NameError, "value for final name \"int16_rprimitive\" was not set");
    cpy_r_r198 = 0;
    if (unlikely(!cpy_r_r198)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 108, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL162: ;
    CPy_INCREF(cpy_r_r197);
    return cpy_r_r197;
CPyL163: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r199 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 109, CPyStatic_mapper___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r200 = ((mypy___types___InstanceObject *)cpy_r_r199)->_type;
    cpy_r_r201 = CPY_GET_ATTR(cpy_r_r200, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 109, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL165: ;
    CPy_DECREF(cpy_r_typ);
    cpy_r_r202 = CPyStatics[6457]; /* 'mypy_extensions.u8' */
    cpy_r_r203 = PyUnicode_Compare(cpy_r_r201, cpy_r_r202);
    CPy_DECREF(cpy_r_r201);
    cpy_r_r204 = cpy_r_r203 == -1;
    if (!cpy_r_r204) goto CPyL168;
    cpy_r_r205 = PyErr_Occurred();
    cpy_r_r206 = cpy_r_r205 != NULL;
    if (!cpy_r_r206) goto CPyL168;
    cpy_r_r207 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r207)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 109, CPyStatic_mapper___globals);
        goto CPyL275;
    }
CPyL168: ;
    cpy_r_r208 = cpy_r_r203 == 0;
    if (!cpy_r_r208) goto CPyL173;
    cpy_r_r209 = CPyStatic_rtypes___uint8_rprimitive;
    if (likely(cpy_r_r209 != NULL)) goto CPyL172;
    PyErr_SetString(PyExc_NameError, "value for final name \"uint8_rprimitive\" was not set");
    cpy_r_r210 = 0;
    if (unlikely(!cpy_r_r210)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 110, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL172: ;
    CPy_INCREF(cpy_r_r209);
    return cpy_r_r209;
CPyL173: ;
    cpy_r_r211 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r211 != NULL)) goto CPyL176;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r212 = 0;
    if (unlikely(!cpy_r_r212)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 112, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL176: ;
    CPy_INCREF(cpy_r_r211);
    return cpy_r_r211;
CPyL177: ;
    cpy_r_r213 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r214 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r215 = *(PyObject * *)cpy_r_r214;
    cpy_r_r216 = cpy_r_r215 == cpy_r_r213;
    if (!cpy_r_r216) goto CPyL198;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TupleType))
        cpy_r_r217 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 116, CPyStatic_mapper___globals, "mypy.types.TupleType", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r218 = ((mypy___types___TupleTypeObject *)cpy_r_r217)->_partial_fallback;
    cpy_r_r219 = ((mypy___types___InstanceObject *)cpy_r_r218)->_type;
    cpy_r_r220 = CPY_GET_ATTR(cpy_r_r219, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 116, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL180: ;
    cpy_r_r221 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r222 = PyUnicode_Compare(cpy_r_r220, cpy_r_r221);
    CPy_DECREF(cpy_r_r220);
    cpy_r_r223 = cpy_r_r222 == -1;
    if (!cpy_r_r223) goto CPyL183;
    cpy_r_r224 = PyErr_Occurred();
    cpy_r_r225 = cpy_r_r224 != NULL;
    if (!cpy_r_r225) goto CPyL183;
    cpy_r_r226 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 116, CPyStatic_mapper___globals);
        goto CPyL276;
    }
CPyL183: ;
    cpy_r_r227 = cpy_r_r222 == 0;
    if (!cpy_r_r227) goto CPyL297;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TupleType))
        cpy_r_r228 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 117, CPyStatic_mapper___globals, "mypy.types.TupleType", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r229 = ((mypy___types___TupleTypeObject *)cpy_r_r228)->_items;
    CPy_INCREF(cpy_r_r229);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r230 = (CPyPtr)&((PyVarObject *)cpy_r_r229)->ob_size;
    cpy_r_r231 = *(int64_t *)cpy_r_r230;
    cpy_r_r232 = PyList_New(cpy_r_r231);
    if (unlikely(cpy_r_r232 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 117, CPyStatic_mapper___globals);
        goto CPyL298;
    }
    cpy_r_r233 = 0;
CPyL187: ;
    cpy_r_r234 = (CPyPtr)&((PyVarObject *)cpy_r_r229)->ob_size;
    cpy_r_r235 = *(int64_t *)cpy_r_r234;
    cpy_r_r236 = cpy_r_r235 << 1;
    cpy_r_r237 = (Py_ssize_t)cpy_r_r233 < (Py_ssize_t)cpy_r_r236;
    if (!cpy_r_r237) goto CPyL299;
    cpy_r_r238 = CPyList_GetItemUnsafe(cpy_r_r229, cpy_r_r233);
    if (likely(PyObject_TypeCheck(cpy_r_r238, CPyType_types___Type)))
        cpy_r_r239 = cpy_r_r238;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 117, CPyStatic_mapper___globals, "mypy.types.Type", cpy_r_r238);
        goto CPyL300;
    }
    cpy_r_t = cpy_r_r239;
    cpy_r_r240 = CPyDef_mapper___Mapper___type_to_rtype(cpy_r_self, cpy_r_t);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 117, CPyStatic_mapper___globals);
        goto CPyL300;
    }
    cpy_r_r241 = CPyList_SetItemUnsafe(cpy_r_r232, cpy_r_r233, cpy_r_r240);
    if (unlikely(!cpy_r_r241)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 117, CPyStatic_mapper___globals);
        goto CPyL300;
    }
    cpy_r_r242 = cpy_r_r233 + 2;
    cpy_r_r233 = cpy_r_r242;
    goto CPyL187;
CPyL192: ;
    cpy_r_r243 = CPyDef_rtypes___RTuple(cpy_r_r232);
    CPy_DECREF(cpy_r_r232);
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 117, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    return cpy_r_r243;
CPyL194: ;
    cpy_r_r244 = CPyStatic_rtypes___tuple_rprimitive;
    if (likely(cpy_r_r244 != NULL)) goto CPyL197;
    PyErr_SetString(PyExc_NameError, "value for final name \"tuple_rprimitive\" was not set");
    cpy_r_r245 = 0;
    if (unlikely(!cpy_r_r245)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 119, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL197: ;
    CPy_INCREF(cpy_r_r244);
    return cpy_r_r244;
CPyL198: ;
    cpy_r_r246 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r247 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r248 = *(PyObject * *)cpy_r_r247;
    cpy_r_r249 = cpy_r_r248 == cpy_r_r246;
    if (cpy_r_r249) {
        goto CPyL301;
    } else
        goto CPyL203;
CPyL199: ;
    cpy_r_r250 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r250 != NULL)) goto CPyL202;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r251 = 0;
    if (unlikely(!cpy_r_r251)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 121, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL202: ;
    CPy_INCREF(cpy_r_r250);
    return cpy_r_r250;
CPyL203: ;
    cpy_r_r252 = CPyStatic_mapper___globals;
    cpy_r_r253 = CPyStatics[6488]; /* 'NoneTyp' */
    cpy_r_r254 = CPyDict_GetItem(cpy_r_r252, cpy_r_r253);
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 122, CPyStatic_mapper___globals);
        goto CPyL276;
    }
    cpy_r_r255 = PyObject_IsInstance(cpy_r_typ, cpy_r_r254);
    CPy_DECREF(cpy_r_r254);
    cpy_r_r256 = cpy_r_r255 >= 0;
    if (unlikely(!cpy_r_r256)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 122, CPyStatic_mapper___globals);
        goto CPyL276;
    }
    cpy_r_r257 = cpy_r_r255;
    if (cpy_r_r257) {
        goto CPyL302;
    } else
        goto CPyL210;
CPyL206: ;
    cpy_r_r258 = CPyStatic_rtypes___none_rprimitive;
    if (likely(cpy_r_r258 != NULL)) goto CPyL209;
    PyErr_SetString(PyExc_NameError, "value for final name \"none_rprimitive\" was not set");
    cpy_r_r259 = 0;
    if (unlikely(!cpy_r_r259)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 123, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL209: ;
    CPy_INCREF(cpy_r_r258);
    return cpy_r_r258;
CPyL210: ;
    cpy_r_r260 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r261 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r262 = *(PyObject * *)cpy_r_r261;
    cpy_r_r263 = cpy_r_r262 == cpy_r_r260;
    if (!cpy_r_r263) goto CPyL221;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r264 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 125, CPyStatic_mapper___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r265 = ((mypy___types___UnionTypeObject *)cpy_r_r264)->_items;
    CPy_INCREF(cpy_r_r265);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r266 = (CPyPtr)&((PyVarObject *)cpy_r_r265)->ob_size;
    cpy_r_r267 = *(int64_t *)cpy_r_r266;
    cpy_r_r268 = PyList_New(cpy_r_r267);
    if (unlikely(cpy_r_r268 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 125, CPyStatic_mapper___globals);
        goto CPyL303;
    }
    cpy_r_r269 = 0;
CPyL214: ;
    cpy_r_r270 = (CPyPtr)&((PyVarObject *)cpy_r_r265)->ob_size;
    cpy_r_r271 = *(int64_t *)cpy_r_r270;
    cpy_r_r272 = cpy_r_r271 << 1;
    cpy_r_r273 = (Py_ssize_t)cpy_r_r269 < (Py_ssize_t)cpy_r_r272;
    if (!cpy_r_r273) goto CPyL304;
    cpy_r_r274 = CPyList_GetItemUnsafe(cpy_r_r265, cpy_r_r269);
    if (likely(PyObject_TypeCheck(cpy_r_r274, CPyType_types___Type)))
        cpy_r_r275 = cpy_r_r274;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 125, CPyStatic_mapper___globals, "mypy.types.Type", cpy_r_r274);
        goto CPyL305;
    }
    cpy_r_item = cpy_r_r275;
    cpy_r_r276 = CPyDef_mapper___Mapper___type_to_rtype(cpy_r_self, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r276 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 125, CPyStatic_mapper___globals);
        goto CPyL305;
    }
    cpy_r_r277 = CPyList_SetItemUnsafe(cpy_r_r268, cpy_r_r269, cpy_r_r276);
    if (unlikely(!cpy_r_r277)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 125, CPyStatic_mapper___globals);
        goto CPyL305;
    }
    cpy_r_r278 = cpy_r_r269 + 2;
    cpy_r_r269 = cpy_r_r278;
    goto CPyL214;
CPyL219: ;
    cpy_r_r279 = CPyDef_rtypes___RUnion___make_simplified_union(cpy_r_r268);
    CPy_DECREF(cpy_r_r268);
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 125, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    return cpy_r_r279;
CPyL221: ;
    cpy_r_r280 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r281 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r282 = *(PyObject * *)cpy_r_r281;
    cpy_r_r283 = cpy_r_r282 == cpy_r_r280;
    if (cpy_r_r283) {
        goto CPyL306;
    } else
        goto CPyL226;
CPyL222: ;
    cpy_r_r284 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r284 != NULL)) goto CPyL225;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r285 = 0;
    if (unlikely(!cpy_r_r285)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 127, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL225: ;
    CPy_INCREF(cpy_r_r284);
    return cpy_r_r284;
CPyL226: ;
    cpy_r_r286 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r287 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r288 = *(PyObject * *)cpy_r_r287;
    cpy_r_r289 = cpy_r_r288 == cpy_r_r286;
    if (cpy_r_r289) {
        goto CPyL307;
    } else
        goto CPyL231;
CPyL227: ;
    cpy_r_r290 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r290 != NULL)) goto CPyL230;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r291 = 0;
    if (unlikely(!cpy_r_r291)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 129, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL230: ;
    CPy_INCREF(cpy_r_r290);
    return cpy_r_r290;
CPyL231: ;
    cpy_r_r292 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r293 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r294 = *(PyObject * *)cpy_r_r293;
    cpy_r_r295 = cpy_r_r294 == cpy_r_r292;
    if (!cpy_r_r295) goto CPyL235;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r296 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 133, CPyStatic_mapper___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r297 = ((mypy___types___TypeVarTypeObject *)cpy_r_r296)->_upper_bound;
    CPy_INCREF(cpy_r_r297);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r298 = CPyDef_mapper___Mapper___type_to_rtype(cpy_r_self, cpy_r_r297);
    CPy_DECREF(cpy_r_r297);
    if (unlikely(cpy_r_r298 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 133, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    return cpy_r_r298;
CPyL235: ;
    cpy_r_r299 = (PyObject *)CPyType_types___PartialType;
    cpy_r_r300 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r301 = *(PyObject * *)cpy_r_r300;
    cpy_r_r302 = cpy_r_r301 == cpy_r_r299;
    if (!cpy_r_r302) goto CPyL244;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___PartialType))
        cpy_r_r303 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 135, CPyStatic_mapper___globals, "mypy.types.PartialType", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r304 = ((mypy___types___PartialTypeObject *)cpy_r_r303)->_var;
    cpy_r_r305 = ((mypy___nodes___VarObject *)cpy_r_r304)->_type;
    cpy_r_r306 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r307 = cpy_r_r305 != cpy_r_r306;
    if (cpy_r_r307) {
        goto CPyL240;
    } else
        goto CPyL308;
CPyL238: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r308 = 0;
    if (unlikely(!cpy_r_r308)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 135, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL240: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___PartialType))
        cpy_r_r309 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 136, CPyStatic_mapper___globals, "mypy.types.PartialType", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r310 = ((mypy___types___PartialTypeObject *)cpy_r_r309)->_var;
    cpy_r_r311 = ((mypy___nodes___VarObject *)cpy_r_r310)->_type;
    CPy_INCREF(cpy_r_r311);
    if (likely(cpy_r_r311 != Py_None))
        cpy_r_r312 = cpy_r_r311;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 136, CPyStatic_mapper___globals, "mypy.types.Type", cpy_r_r311);
        goto CPyL276;
    }
    CPy_DECREF(cpy_r_typ);
    cpy_r_r313 = CPyDef_mapper___Mapper___type_to_rtype(cpy_r_self, cpy_r_r312);
    CPy_DECREF(cpy_r_r312);
    if (unlikely(cpy_r_r313 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 136, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    return cpy_r_r313;
CPyL244: ;
    cpy_r_r314 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r315 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r316 = *(PyObject * *)cpy_r_r315;
    cpy_r_r317 = cpy_r_r316 == cpy_r_r314;
    if (cpy_r_r317) {
        goto CPyL309;
    } else
        goto CPyL249;
CPyL245: ;
    cpy_r_r318 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r318 != NULL)) goto CPyL248;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r319 = 0;
    if (unlikely(!cpy_r_r319)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 138, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL248: ;
    CPy_INCREF(cpy_r_r318);
    return cpy_r_r318;
CPyL249: ;
    cpy_r_r320 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r321 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r322 = *(PyObject * *)cpy_r_r321;
    cpy_r_r323 = cpy_r_r322 == cpy_r_r320;
    if (cpy_r_r323) {
        goto CPyL310;
    } else
        goto CPyL254;
CPyL250: ;
    cpy_r_r324 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r324 != NULL)) goto CPyL253;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r325 = 0;
    if (unlikely(!cpy_r_r325)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 140, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL253: ;
    CPy_INCREF(cpy_r_r324);
    return cpy_r_r324;
CPyL254: ;
    cpy_r_r326 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r327 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r328 = *(PyObject * *)cpy_r_r327;
    cpy_r_r329 = cpy_r_r328 == cpy_r_r326;
    if (!cpy_r_r329) goto CPyL258;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___LiteralType))
        cpy_r_r330 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 142, CPyStatic_mapper___globals, "mypy.types.LiteralType", cpy_r_typ);
        goto CPyL276;
    }
    cpy_r_r331 = ((mypy___types___LiteralTypeObject *)cpy_r_r330)->_fallback;
    CPy_INCREF(cpy_r_r331);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r332 = CPyDef_mapper___Mapper___type_to_rtype(cpy_r_self, cpy_r_r331);
    CPy_DECREF(cpy_r_r331);
    if (unlikely(cpy_r_r332 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 142, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    return cpy_r_r332;
CPyL258: ;
    cpy_r_r333 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r334 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r335 = *(PyObject * *)cpy_r_r334;
    cpy_r_r336 = cpy_r_r335 == cpy_r_r333;
    if (!cpy_r_r336) goto CPyL260;
    cpy_r_r337 = cpy_r_r336;
    goto CPyL261;
CPyL260: ;
    cpy_r_r338 = (PyObject *)CPyType_types___UnboundType;
    cpy_r_r339 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r340 = *(PyObject * *)cpy_r_r339;
    cpy_r_r341 = cpy_r_r340 == cpy_r_r338;
    cpy_r_r337 = cpy_r_r341;
CPyL261: ;
    if (cpy_r_r337) {
        goto CPyL311;
    } else
        goto CPyL266;
CPyL262: ;
    cpy_r_r342 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r342 != NULL)) goto CPyL265;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r343 = 0;
    if (unlikely(!cpy_r_r343)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 145, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL265: ;
    CPy_INCREF(cpy_r_r342);
    return cpy_r_r342;
CPyL266: ;
    if (0) goto CPyL312;
    if (likely(PyObject_TypeCheck(cpy_r_typ, CPyType_types___ProperType)))
        cpy_r_r344 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 149, CPyStatic_mapper___globals, "mypy.types.ProperType", cpy_r_typ);
        goto CPyL275;
    }
    cpy_r_r345 = PyObject_Type(cpy_r_r344);
    CPy_DECREF(cpy_r_r344);
    cpy_r_r346 = PyObject_Str(cpy_r_r345);
    CPy_DECREF(cpy_r_r345);
    if (unlikely(cpy_r_r346 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 149, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    cpy_r_r347 = CPyStatics[8470]; /* 'unexpected type ' */
    cpy_r_r348 = CPyStr_Build(2, cpy_r_r347, cpy_r_r346);
    CPy_DECREF(cpy_r_r346);
    if (unlikely(cpy_r_r348 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 149, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    cpy_r_r349 = CPyModule_builtins;
    cpy_r_r350 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r351 = CPyObject_GetAttr(cpy_r_r349, cpy_r_r350);
    if (unlikely(cpy_r_r351 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 149, CPyStatic_mapper___globals);
        goto CPyL313;
    }
    PyObject *cpy_r_r352[1] = {cpy_r_r348};
    cpy_r_r353 = (PyObject **)&cpy_r_r352;
    cpy_r_r354 = _PyObject_Vectorcall(cpy_r_r351, cpy_r_r353, 1, 0);
    CPy_DECREF(cpy_r_r351);
    if (unlikely(cpy_r_r354 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 149, CPyStatic_mapper___globals);
        goto CPyL313;
    }
    CPy_DECREF(cpy_r_r348);
    CPy_Raise(cpy_r_r354);
    CPy_DECREF(cpy_r_r354);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 149, CPyStatic_mapper___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL274: ;
    CPy_Unreachable();
CPyL275: ;
    cpy_r_r355 = NULL;
    return cpy_r_r355;
CPyL276: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL275;
CPyL277: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL15;
CPyL278: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL25;
CPyL279: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL35;
CPyL280: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL45;
CPyL281: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL55;
CPyL282: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL65;
CPyL283: ;
    CPy_DECREF(cpy_r_r86);
    goto CPyL81;
CPyL284: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r86);
    goto CPyL275;
CPyL285: ;
    CPy_DECREF(cpy_r_r86);
    goto CPyL79;
CPyL286: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL82;
CPyL287: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL92;
CPyL288: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL102;
CPyL289: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL112;
CPyL290: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r147);
    goto CPyL275;
CPyL291: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_inst);
    goto CPyL275;
CPyL292: ;
    CPy_DecRef(cpy_r_inst);
    goto CPyL127;
CPyL293: ;
    CPy_DecRef(cpy_r_inst);
    goto CPyL275;
CPyL294: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL139;
CPyL295: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL149;
CPyL296: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL159;
CPyL297: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL194;
CPyL298: ;
    CPy_DecRef(cpy_r_r229);
    goto CPyL275;
CPyL299: ;
    CPy_DECREF(cpy_r_r229);
    goto CPyL192;
CPyL300: ;
    CPy_DecRef(cpy_r_r229);
    CPy_DecRef(cpy_r_r232);
    goto CPyL275;
CPyL301: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL199;
CPyL302: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL206;
CPyL303: ;
    CPy_DecRef(cpy_r_r265);
    goto CPyL275;
CPyL304: ;
    CPy_DECREF(cpy_r_r265);
    goto CPyL219;
CPyL305: ;
    CPy_DecRef(cpy_r_r265);
    CPy_DecRef(cpy_r_r268);
    goto CPyL275;
CPyL306: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL222;
CPyL307: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL227;
CPyL308: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL238;
CPyL309: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL245;
CPyL310: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL250;
CPyL311: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL262;
CPyL312: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL274;
CPyL313: ;
    CPy_DecRef(cpy_r_r348);
    goto CPyL275;
}

PyObject *CPyPy_mapper___Mapper___type_to_rtype(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:type_to_rtype", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mapper___Mapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (PyObject_TypeCheck(obj_typ, CPyType_types___Type))
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL10368;
    if (obj_typ == Py_None)
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL10368;
    CPy_TypeError("mypy.types.Type or None", obj_typ); 
    goto fail;
__LL10368: ;
    PyObject *retval = CPyDef_mapper___Mapper___type_to_rtype(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/mapper.py", "type_to_rtype", 65, CPyStatic_mapper___globals);
    return NULL;
}

PyObject *CPyDef_mapper___Mapper___get_arg_rtype(PyObject *cpy_r_self, PyObject *cpy_r_typ, PyObject *cpy_r_kind) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPyStatic_nodes___ARG_STAR;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "get_arg_rtype", 152, CPyStatic_mapper___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = cpy_r_kind == cpy_r_r0;
    if (!cpy_r_r2) goto CPyL8;
    cpy_r_r3 = CPyStatic_rtypes___tuple_rprimitive;
    if (likely(cpy_r_r3 != NULL)) goto CPyL7;
    PyErr_SetString(PyExc_NameError, "value for final name \"tuple_rprimitive\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "get_arg_rtype", 153, CPyStatic_mapper___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL7: ;
    CPy_INCREF(cpy_r_r3);
    return cpy_r_r3;
CPyL8: ;
    cpy_r_r5 = CPyStatic_nodes___ARG_STAR2;
    if (likely(cpy_r_r5 != NULL)) goto CPyL11;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "get_arg_rtype", 154, CPyStatic_mapper___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r7 = cpy_r_kind == cpy_r_r5;
    if (!cpy_r_r7) goto CPyL16;
    cpy_r_r8 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r8 != NULL)) goto CPyL15;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "get_arg_rtype", 155, CPyStatic_mapper___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL15: ;
    CPy_INCREF(cpy_r_r8);
    return cpy_r_r8;
CPyL16: ;
    cpy_r_r10 = CPyDef_mapper___Mapper___type_to_rtype(cpy_r_self, cpy_r_typ);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "get_arg_rtype", 157, CPyStatic_mapper___globals);
        goto CPyL18;
    }
    return cpy_r_r10;
CPyL18: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
}

PyObject *CPyPy_mapper___Mapper___get_arg_rtype(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", "kind", 0};
    static CPyArg_Parser parser = {"OO:get_arg_rtype", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_kind;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_kind)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mapper___Mapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_kind;
    if (likely(Py_TYPE(obj_kind) == CPyType_nodes___ArgKind))
        arg_kind = obj_kind;
    else {
        CPy_TypeError("mypy.nodes.ArgKind", obj_kind); 
        goto fail;
    }
    PyObject *retval = CPyDef_mapper___Mapper___get_arg_rtype(arg_self, arg_typ, arg_kind);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/mapper.py", "get_arg_rtype", 151, CPyStatic_mapper___globals);
    return NULL;
}

PyObject *CPyDef_mapper___Mapper___fdef_to_sig(PyObject *cpy_r_self, PyObject *cpy_r_fdef) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_kind;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_arg_types;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_arg_pos_onlys;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_ret;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    int64_t cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyTagged cpy_r_r57;
    CPyPtr cpy_r_r58;
    int64_t cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r__;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    CPyTagged cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    int64_t cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyTagged cpy_r_r72;
    CPyPtr cpy_r_r73;
    int64_t cpy_r_r74;
    CPyTagged cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_arg;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    CPyTagged cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_is_init_method;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyPtr cpy_r_r101;
    int64_t cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyTagged cpy_r_r104;
    CPyPtr cpy_r_r105;
    int64_t cpy_r_r106;
    CPyTagged cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_arg_2;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    CPyTagged cpy_r_r114;
    PyObject *cpy_r_arg_names;
    PyObject *cpy_r_r115;
    CPyPtr cpy_r_r116;
    int64_t cpy_r_r117;
    PyObject *cpy_r_r118;
    CPyTagged cpy_r_r119;
    CPyPtr cpy_r_r120;
    int64_t cpy_r_r121;
    CPyTagged cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_name_2;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    CPyTagged cpy_r_r134;
    PyObject *cpy_r_r135;
    CPyTagged cpy_r_r136;
    PyObject *cpy_r_r137;
    CPyTagged cpy_r_r138;
    CPyTagged cpy_r_r139;
    CPyTagged cpy_r_r140;
    CPyPtr cpy_r_r141;
    int64_t cpy_r_r142;
    CPyTagged cpy_r_r143;
    char cpy_r_r144;
    CPyPtr cpy_r_r145;
    int64_t cpy_r_r146;
    CPyTagged cpy_r_r147;
    char cpy_r_r148;
    CPyPtr cpy_r_r149;
    int64_t cpy_r_r150;
    CPyTagged cpy_r_r151;
    char cpy_r_r152;
    CPyPtr cpy_r_r153;
    int64_t cpy_r_r154;
    CPyTagged cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_arg_name;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_arg_kind;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_arg_type;
    PyObject *cpy_r_r163;
    char cpy_r_r164;
    char cpy_r_arg_pos_only;
    PyObject *cpy_r_r165;
    int32_t cpy_r_r166;
    char cpy_r_r167;
    CPyTagged cpy_r_r168;
    CPyTagged cpy_r_r169;
    CPyTagged cpy_r_r170;
    CPyTagged cpy_r_r171;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    int32_t cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    char cpy_r_r177;
    char cpy_r_r178;
    char cpy_r_r179;
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    int32_t cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_r185;
    char cpy_r_r186;
    char cpy_r_r187;
    char cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    int32_t cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    char cpy_r_r196;
    char cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    int32_t cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    char cpy_r_r204;
    char cpy_r_r205;
    char cpy_r_r206;
    char cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    int32_t cpy_r_r210;
    char cpy_r_r211;
    PyObject *cpy_r_r212;
    char cpy_r_r213;
    char cpy_r_r214;
    char cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    int32_t cpy_r_r219;
    char cpy_r_r220;
    PyObject *cpy_r_r221;
    char cpy_r_r222;
    char cpy_r_r223;
    char cpy_r_r224;
    PyObject *cpy_r_r225;
    char cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    cpy_r_r0 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_type;
    cpy_r_r1 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL22;
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 161, CPyStatic_mapper___globals);
        goto CPyL138;
    }
    cpy_r_r6 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_type;
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_types___CallableType))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 163, CPyStatic_mapper___globals, "mypy.types.CallableType", cpy_r_r6);
        goto CPyL139;
    }
    cpy_r_r8 = ((mypy___types___CallableTypeObject *)cpy_r_r7)->_arg_types;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = 0;
    cpy_r_r10 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_type;
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_types___CallableType))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 163, CPyStatic_mapper___globals, "mypy.types.CallableType", cpy_r_r10);
        goto CPyL140;
    }
    cpy_r_r12 = ((mypy___types___CallableTypeObject *)cpy_r_r11)->_arg_kinds;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = 0;
CPyL5: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL141;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL141;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r8, cpy_r_r9);
    if (likely(PyObject_TypeCheck(cpy_r_r22, CPyType_types___Type)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 161, CPyStatic_mapper___globals, "mypy.types.Type", cpy_r_r22);
        goto CPyL142;
    }
    cpy_r_typ = cpy_r_r23;
    cpy_r_r24 = CPyList_GetItemUnsafe(cpy_r_r12, cpy_r_r13);
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_nodes___ArgKind))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 161, CPyStatic_mapper___globals, "mypy.nodes.ArgKind", cpy_r_r24);
        goto CPyL143;
    }
    cpy_r_kind = cpy_r_r25;
    cpy_r_r26 = CPyDef_mapper___Mapper___get_arg_rtype(cpy_r_self, cpy_r_typ, cpy_r_kind);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_kind);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 162, CPyStatic_mapper___globals);
        goto CPyL142;
    }
    cpy_r_r27 = PyList_Append(cpy_r_r5, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 161, CPyStatic_mapper___globals);
        goto CPyL142;
    }
    cpy_r_r29 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r29;
    cpy_r_r30 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r30;
    goto CPyL5;
CPyL12: ;
    cpy_r_arg_types = cpy_r_r5;
    cpy_r_r31 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_type;
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_types___CallableType))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 165, CPyStatic_mapper___globals, "mypy.types.CallableType", cpy_r_r31);
        goto CPyL144;
    }
    cpy_r_r33 = ((mypy___types___CallableTypeObject *)cpy_r_r32)->_arg_names;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r33)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = PyList_New(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 165, CPyStatic_mapper___globals);
        goto CPyL145;
    }
    cpy_r_r37 = 0;
CPyL15: ;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_r33)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r37 < (Py_ssize_t)cpy_r_r40;
    if (!cpy_r_r41) goto CPyL146;
    cpy_r_r42 = CPyList_GetItemUnsafe(cpy_r_r33, cpy_r_r37);
    if (PyUnicode_Check(cpy_r_r42))
        cpy_r_r43 = cpy_r_r42;
    else {
        cpy_r_r43 = NULL;
    }
    if (cpy_r_r43 != NULL) goto __LL10369;
    if (cpy_r_r42 == Py_None)
        cpy_r_r43 = cpy_r_r42;
    else {
        cpy_r_r43 = NULL;
    }
    if (cpy_r_r43 != NULL) goto __LL10369;
    CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 165, CPyStatic_mapper___globals, "str or None", cpy_r_r42);
    goto CPyL147;
__LL10369: ;
    cpy_r_name = cpy_r_r43;
    cpy_r_r44 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r45 = cpy_r_name == cpy_r_r44;
    CPy_DECREF(cpy_r_name);
    cpy_r_r46 = cpy_r_r45 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = CPyList_SetItemUnsafe(cpy_r_r36, cpy_r_r37, cpy_r_r46);
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 165, CPyStatic_mapper___globals);
        goto CPyL147;
    }
    cpy_r_r48 = cpy_r_r37 + 2;
    cpy_r_r37 = cpy_r_r48;
    goto CPyL15;
CPyL19: ;
    cpy_r_arg_pos_onlys = cpy_r_r36;
    cpy_r_r49 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_type;
    if (likely(Py_TYPE(cpy_r_r49) == CPyType_types___CallableType))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 166, CPyStatic_mapper___globals, "mypy.types.CallableType", cpy_r_r49);
        goto CPyL148;
    }
    cpy_r_r51 = ((mypy___types___CallableTypeObject *)cpy_r_r50)->_ret_type;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = CPyDef_mapper___Mapper___type_to_rtype(cpy_r_self, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 166, CPyStatic_mapper___globals);
        goto CPyL148;
    }
    cpy_r_ret = cpy_r_r52;
    goto CPyL56;
CPyL22: ;
    cpy_r_r53 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_arguments;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/mapper.py", "fdef_to_sig", "FuncDef", "arguments", 169, CPyStatic_mapper___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r53);
CPyL23: ;
    cpy_r_r54 = (CPyPtr)&((PyVarObject *)cpy_r_r53)->ob_size;
    cpy_r_r55 = *(int64_t *)cpy_r_r54;
    cpy_r_r56 = PyList_New(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 169, CPyStatic_mapper___globals);
        goto CPyL149;
    }
    cpy_r_r57 = 0;
CPyL25: ;
    cpy_r_r58 = (CPyPtr)&((PyVarObject *)cpy_r_r53)->ob_size;
    cpy_r_r59 = *(int64_t *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 << 1;
    cpy_r_r61 = (Py_ssize_t)cpy_r_r57 < (Py_ssize_t)cpy_r_r60;
    if (!cpy_r_r61) goto CPyL150;
    cpy_r_r62 = CPyList_GetItemUnsafe(cpy_r_r53, cpy_r_r57);
    if (likely(Py_TYPE(cpy_r_r62) == CPyType_nodes___Argument))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 169, CPyStatic_mapper___globals, "mypy.nodes.Argument", cpy_r_r62);
        goto CPyL151;
    }
    cpy_r__ = cpy_r_r63;
    CPy_DECREF(cpy_r__);
    cpy_r_r64 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r64 == NULL)) {
        goto CPyL152;
    } else
        goto CPyL30;
CPyL28: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r65 = 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 169, CPyStatic_mapper___globals);
        goto CPyL138;
    }
    CPy_Unreachable();
CPyL30: ;
    CPy_INCREF(cpy_r_r64);
    cpy_r_r66 = CPyList_SetItemUnsafe(cpy_r_r56, cpy_r_r57, cpy_r_r64);
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 169, CPyStatic_mapper___globals);
        goto CPyL151;
    }
    cpy_r_r67 = cpy_r_r57 + 2;
    cpy_r_r57 = cpy_r_r67;
    goto CPyL25;
CPyL32: ;
    cpy_r_arg_types = cpy_r_r56;
    cpy_r_r68 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_arguments;
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/mapper.py", "fdef_to_sig", "FuncDef", "arguments", 170, CPyStatic_mapper___globals);
        goto CPyL144;
    }
    CPy_INCREF(cpy_r_r68);
CPyL33: ;
    cpy_r_r69 = (CPyPtr)&((PyVarObject *)cpy_r_r68)->ob_size;
    cpy_r_r70 = *(int64_t *)cpy_r_r69;
    cpy_r_r71 = PyList_New(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 170, CPyStatic_mapper___globals);
        goto CPyL153;
    }
    cpy_r_r72 = 0;
CPyL35: ;
    cpy_r_r73 = (CPyPtr)&((PyVarObject *)cpy_r_r68)->ob_size;
    cpy_r_r74 = *(int64_t *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r74 << 1;
    cpy_r_r76 = (Py_ssize_t)cpy_r_r72 < (Py_ssize_t)cpy_r_r75;
    if (!cpy_r_r76) goto CPyL154;
    cpy_r_r77 = CPyList_GetItemUnsafe(cpy_r_r68, cpy_r_r72);
    if (likely(Py_TYPE(cpy_r_r77) == CPyType_nodes___Argument))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 170, CPyStatic_mapper___globals, "mypy.nodes.Argument", cpy_r_r77);
        goto CPyL155;
    }
    cpy_r_arg = cpy_r_r78;
    cpy_r_r79 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_pos_only;
    CPy_DECREF(cpy_r_arg);
    cpy_r_r80 = cpy_r_r79 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r80);
    cpy_r_r81 = CPyList_SetItemUnsafe(cpy_r_r71, cpy_r_r72, cpy_r_r80);
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 170, CPyStatic_mapper___globals);
        goto CPyL155;
    }
    cpy_r_r82 = cpy_r_r72 + 2;
    cpy_r_r72 = cpy_r_r82;
    goto CPyL35;
CPyL39: ;
    cpy_r_arg_pos_onlys = cpy_r_r71;
    cpy_r_r83 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 172, CPyStatic_mapper___globals);
        goto CPyL148;
    }
CPyL40: ;
    cpy_r_r84 = CPyStatics[288]; /* '__init__' */
    cpy_r_r85 = PyUnicode_Compare(cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r86 = cpy_r_r85 == -1;
    if (!cpy_r_r86) goto CPyL43;
    cpy_r_r87 = PyErr_Occurred();
    cpy_r_r88 = cpy_r_r87 != NULL;
    if (!cpy_r_r88) goto CPyL43;
    cpy_r_r89 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 172, CPyStatic_mapper___globals);
        goto CPyL148;
    }
CPyL43: ;
    cpy_r_r90 = cpy_r_r85 == 0;
    if (cpy_r_r90) goto CPyL45;
    cpy_r_r91 = cpy_r_r90;
    goto CPyL47;
CPyL45: ;
    cpy_r_r92 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_info;
    CPy_INCREF(cpy_r_r92);
    cpy_r_r93 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r93 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 172, CPyStatic_mapper___globals);
        goto CPyL148;
    }
    cpy_r_r91 = cpy_r_r93;
CPyL47: ;
    cpy_r_is_init_method = cpy_r_r91;
    if (!cpy_r_is_init_method) goto CPyL52;
    cpy_r_r94 = CPyStatic_rtypes___none_rprimitive;
    if (unlikely(cpy_r_r94 == NULL)) {
        goto CPyL156;
    } else
        goto CPyL51;
CPyL49: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"none_rprimitive\" was not set");
    cpy_r_r95 = 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 174, CPyStatic_mapper___globals);
        goto CPyL138;
    }
    CPy_Unreachable();
CPyL51: ;
    CPy_INCREF(cpy_r_r94);
    cpy_r_ret = cpy_r_r94;
    goto CPyL56;
CPyL52: ;
    cpy_r_r96 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r96 == NULL)) {
        goto CPyL157;
    } else
        goto CPyL55;
CPyL53: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r97 = 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 176, CPyStatic_mapper___globals);
        goto CPyL138;
    }
    CPy_Unreachable();
CPyL55: ;
    CPy_INCREF(cpy_r_r96);
    cpy_r_ret = cpy_r_r96;
CPyL56: ;
    cpy_r_r98 = CPyStatics[3704]; /* 'arguments' */
    cpy_r_r99 = PyObject_HasAttr(cpy_r_fdef, cpy_r_r98);
    if (!cpy_r_r99) goto CPyL66;
    cpy_r_r100 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_arguments;
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/mapper.py", "fdef_to_sig", "FuncDef", "arguments", 187, CPyStatic_mapper___globals);
        goto CPyL158;
    }
    CPy_INCREF(cpy_r_r100);
CPyL58: ;
    cpy_r_r101 = (CPyPtr)&((PyVarObject *)cpy_r_r100)->ob_size;
    cpy_r_r102 = *(int64_t *)cpy_r_r101;
    cpy_r_r103 = PyList_New(cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 187, CPyStatic_mapper___globals);
        goto CPyL159;
    }
    cpy_r_r104 = 0;
CPyL60: ;
    cpy_r_r105 = (CPyPtr)&((PyVarObject *)cpy_r_r100)->ob_size;
    cpy_r_r106 = *(int64_t *)cpy_r_r105;
    cpy_r_r107 = cpy_r_r106 << 1;
    cpy_r_r108 = (Py_ssize_t)cpy_r_r104 < (Py_ssize_t)cpy_r_r107;
    if (!cpy_r_r108) goto CPyL160;
    cpy_r_r109 = CPyList_GetItemUnsafe(cpy_r_r100, cpy_r_r104);
    if (likely(Py_TYPE(cpy_r_r109) == CPyType_nodes___Argument))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 187, CPyStatic_mapper___globals, "mypy.nodes.Argument", cpy_r_r109);
        goto CPyL161;
    }
    cpy_r_arg_2 = cpy_r_r110;
    cpy_r_r111 = ((mypy___nodes___ArgumentObject *)cpy_r_arg_2)->_variable;
    cpy_r_r112 = CPY_GET_ATTR(cpy_r_r111, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 187, CPyStatic_mapper___globals);
        goto CPyL162;
    }
CPyL63: ;
    CPy_DECREF(cpy_r_arg_2);
    cpy_r_r113 = CPyList_SetItemUnsafe(cpy_r_r103, cpy_r_r104, cpy_r_r112);
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 187, CPyStatic_mapper___globals);
        goto CPyL161;
    }
    cpy_r_r114 = cpy_r_r104 + 2;
    cpy_r_r104 = cpy_r_r114;
    goto CPyL60;
CPyL65: ;
    cpy_r_arg_names = cpy_r_r103;
    goto CPyL79;
CPyL66: ;
    cpy_r_r115 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_arg_names;
    CPy_INCREF(cpy_r_r115);
    cpy_r_r116 = (CPyPtr)&((PyVarObject *)cpy_r_r115)->ob_size;
    cpy_r_r117 = *(int64_t *)cpy_r_r116;
    cpy_r_r118 = PyList_New(cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 189, CPyStatic_mapper___globals);
        goto CPyL163;
    }
    cpy_r_r119 = 0;
CPyL68: ;
    cpy_r_r120 = (CPyPtr)&((PyVarObject *)cpy_r_r115)->ob_size;
    cpy_r_r121 = *(int64_t *)cpy_r_r120;
    cpy_r_r122 = cpy_r_r121 << 1;
    cpy_r_r123 = (Py_ssize_t)cpy_r_r119 < (Py_ssize_t)cpy_r_r122;
    if (!cpy_r_r123) goto CPyL164;
    cpy_r_r124 = CPyList_GetItemUnsafe(cpy_r_r115, cpy_r_r119);
    if (PyUnicode_Check(cpy_r_r124))
        cpy_r_r125 = cpy_r_r124;
    else {
        cpy_r_r125 = NULL;
    }
    if (cpy_r_r125 != NULL) goto __LL10370;
    if (cpy_r_r124 == Py_None)
        cpy_r_r125 = cpy_r_r124;
    else {
        cpy_r_r125 = NULL;
    }
    if (cpy_r_r125 != NULL) goto __LL10370;
    CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 189, CPyStatic_mapper___globals, "str or None", cpy_r_r124);
    goto CPyL165;
__LL10370: ;
    cpy_r_name_2 = cpy_r_r125;
    cpy_r_r126 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r127 = cpy_r_name_2 != cpy_r_r126;
    if (!cpy_r_r127) goto CPyL166;
    CPy_INCREF(cpy_r_name_2);
    if (likely(cpy_r_name_2 != Py_None))
        cpy_r_r128 = cpy_r_name_2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 189, CPyStatic_mapper___globals, "str", cpy_r_name_2);
        goto CPyL167;
    }
    cpy_r_r129 = CPyStr_IsTrue(cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    if (!cpy_r_r129) goto CPyL166;
    if (likely(cpy_r_name_2 != Py_None))
        cpy_r_r130 = cpy_r_name_2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 189, CPyStatic_mapper___globals, "str", cpy_r_name_2);
        goto CPyL165;
    }
    cpy_r_r131 = cpy_r_r130;
    goto CPyL76;
CPyL75: ;
    cpy_r_r132 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r132);
    cpy_r_r131 = cpy_r_r132;
CPyL76: ;
    cpy_r_r133 = CPyList_SetItemUnsafe(cpy_r_r118, cpy_r_r119, cpy_r_r131);
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 189, CPyStatic_mapper___globals);
        goto CPyL165;
    }
    cpy_r_r134 = cpy_r_r119 + 2;
    cpy_r_r119 = cpy_r_r134;
    goto CPyL68;
CPyL78: ;
    cpy_r_arg_names = cpy_r_r118;
CPyL79: ;
    cpy_r_r135 = PyList_New(0);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 191, CPyStatic_mapper___globals);
        goto CPyL168;
    }
    cpy_r_r136 = 0;
    cpy_r_r137 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_arg_kinds;
    CPy_INCREF(cpy_r_r137);
    cpy_r_r138 = 0;
    cpy_r_r139 = 0;
    cpy_r_r140 = 0;
CPyL81: ;
    cpy_r_r141 = (CPyPtr)&((PyVarObject *)cpy_r_arg_names)->ob_size;
    cpy_r_r142 = *(int64_t *)cpy_r_r141;
    cpy_r_r143 = cpy_r_r142 << 1;
    cpy_r_r144 = (Py_ssize_t)cpy_r_r136 < (Py_ssize_t)cpy_r_r143;
    if (!cpy_r_r144) goto CPyL169;
    cpy_r_r145 = (CPyPtr)&((PyVarObject *)cpy_r_r137)->ob_size;
    cpy_r_r146 = *(int64_t *)cpy_r_r145;
    cpy_r_r147 = cpy_r_r146 << 1;
    cpy_r_r148 = (Py_ssize_t)cpy_r_r138 < (Py_ssize_t)cpy_r_r147;
    if (!cpy_r_r148) goto CPyL169;
    cpy_r_r149 = (CPyPtr)&((PyVarObject *)cpy_r_arg_types)->ob_size;
    cpy_r_r150 = *(int64_t *)cpy_r_r149;
    cpy_r_r151 = cpy_r_r150 << 1;
    cpy_r_r152 = (Py_ssize_t)cpy_r_r139 < (Py_ssize_t)cpy_r_r151;
    if (!cpy_r_r152) goto CPyL169;
    cpy_r_r153 = (CPyPtr)&((PyVarObject *)cpy_r_arg_pos_onlys)->ob_size;
    cpy_r_r154 = *(int64_t *)cpy_r_r153;
    cpy_r_r155 = cpy_r_r154 << 1;
    cpy_r_r156 = (Py_ssize_t)cpy_r_r140 < (Py_ssize_t)cpy_r_r155;
    if (!cpy_r_r156) goto CPyL169;
    cpy_r_r157 = CPyList_GetItemUnsafe(cpy_r_arg_names, cpy_r_r136);
    if (likely(PyUnicode_Check(cpy_r_r157)))
        cpy_r_r158 = cpy_r_r157;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 191, CPyStatic_mapper___globals, "str", cpy_r_r157);
        goto CPyL170;
    }
    cpy_r_arg_name = cpy_r_r158;
    cpy_r_r159 = CPyList_GetItemUnsafe(cpy_r_r137, cpy_r_r138);
    if (likely(Py_TYPE(cpy_r_r159) == CPyType_nodes___ArgKind))
        cpy_r_r160 = cpy_r_r159;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 191, CPyStatic_mapper___globals, "mypy.nodes.ArgKind", cpy_r_r159);
        goto CPyL171;
    }
    cpy_r_arg_kind = cpy_r_r160;
    cpy_r_r161 = CPyList_GetItemUnsafe(cpy_r_arg_types, cpy_r_r139);
    if (likely(PyObject_TypeCheck(cpy_r_r161, CPyType_rtypes___RType)))
        cpy_r_r162 = cpy_r_r161;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 191, CPyStatic_mapper___globals, "mypyc.ir.rtypes.RType", cpy_r_r161);
        goto CPyL172;
    }
    cpy_r_arg_type = cpy_r_r162;
    cpy_r_r163 = CPyList_GetItemUnsafe(cpy_r_arg_pos_onlys, cpy_r_r140);
    if (unlikely(!PyBool_Check(cpy_r_r163))) {
        CPy_TypeError("bool", cpy_r_r163); cpy_r_r164 = 2;
    } else
        cpy_r_r164 = cpy_r_r163 == Py_True;
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r164 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 191, CPyStatic_mapper___globals);
        goto CPyL173;
    }
    cpy_r_arg_pos_only = cpy_r_r164;
    cpy_r_r165 = CPyDef_func_ir___RuntimeArg(cpy_r_arg_name, cpy_r_arg_type, cpy_r_arg_kind, cpy_r_arg_pos_only);
    CPy_DECREF(cpy_r_arg_name);
    CPy_DECREF(cpy_r_arg_type);
    CPy_DECREF(cpy_r_arg_kind);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 192, CPyStatic_mapper___globals);
        goto CPyL170;
    }
    cpy_r_r166 = PyList_Append(cpy_r_r135, cpy_r_r165);
    CPy_DECREF(cpy_r_r165);
    cpy_r_r167 = cpy_r_r166 >= 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 191, CPyStatic_mapper___globals);
        goto CPyL170;
    }
    cpy_r_r168 = cpy_r_r136 + 2;
    cpy_r_r136 = cpy_r_r168;
    cpy_r_r169 = cpy_r_r138 + 2;
    cpy_r_r138 = cpy_r_r169;
    cpy_r_r170 = cpy_r_r139 + 2;
    cpy_r_r139 = cpy_r_r170;
    cpy_r_r171 = cpy_r_r140 + 2;
    cpy_r_r140 = cpy_r_r171;
    goto CPyL81;
CPyL92: ;
    cpy_r_args = cpy_r_r135;
    cpy_r_r172 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 201, CPyStatic_mapper___globals);
        goto CPyL174;
    }
CPyL93: ;
    cpy_r_r173 = CPyStatics[753]; /* '__eq__' */
    cpy_r_r174 = PyUnicode_Compare(cpy_r_r172, cpy_r_r173);
    CPy_DECREF(cpy_r_r172);
    cpy_r_r175 = cpy_r_r174 == -1;
    if (!cpy_r_r175) goto CPyL96;
    cpy_r_r176 = PyErr_Occurred();
    cpy_r_r177 = cpy_r_r176 != NULL;
    if (!cpy_r_r177) goto CPyL96;
    cpy_r_r178 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", -1, CPyStatic_mapper___globals);
        goto CPyL174;
    }
CPyL96: ;
    cpy_r_r179 = cpy_r_r174 == 0;
    if (!cpy_r_r179) goto CPyL98;
    cpy_r_r180 = cpy_r_r179;
    goto CPyL103;
CPyL98: ;
    cpy_r_r181 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 201, CPyStatic_mapper___globals);
        goto CPyL174;
    }
CPyL99: ;
    cpy_r_r182 = CPyStatics[754]; /* '__ne__' */
    cpy_r_r183 = PyUnicode_Compare(cpy_r_r181, cpy_r_r182);
    CPy_DECREF(cpy_r_r181);
    cpy_r_r184 = cpy_r_r183 == -1;
    if (!cpy_r_r184) goto CPyL102;
    cpy_r_r185 = PyErr_Occurred();
    cpy_r_r186 = cpy_r_r185 != NULL;
    if (!cpy_r_r186) goto CPyL102;
    cpy_r_r187 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", -1, CPyStatic_mapper___globals);
        goto CPyL174;
    }
CPyL102: ;
    cpy_r_r188 = cpy_r_r183 == 0;
    cpy_r_r180 = cpy_r_r188;
CPyL103: ;
    if (!cpy_r_r180) goto CPyL105;
    cpy_r_r189 = cpy_r_r180;
    goto CPyL110;
CPyL105: ;
    cpy_r_r190 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 201, CPyStatic_mapper___globals);
        goto CPyL174;
    }
CPyL106: ;
    cpy_r_r191 = CPyStatics[4196]; /* '__lt__' */
    cpy_r_r192 = PyUnicode_Compare(cpy_r_r190, cpy_r_r191);
    CPy_DECREF(cpy_r_r190);
    cpy_r_r193 = cpy_r_r192 == -1;
    if (!cpy_r_r193) goto CPyL109;
    cpy_r_r194 = PyErr_Occurred();
    cpy_r_r195 = cpy_r_r194 != NULL;
    if (!cpy_r_r195) goto CPyL109;
    cpy_r_r196 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r196)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", -1, CPyStatic_mapper___globals);
        goto CPyL174;
    }
CPyL109: ;
    cpy_r_r197 = cpy_r_r192 == 0;
    cpy_r_r189 = cpy_r_r197;
CPyL110: ;
    if (!cpy_r_r189) goto CPyL112;
    cpy_r_r198 = cpy_r_r189;
    goto CPyL117;
CPyL112: ;
    cpy_r_r199 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 201, CPyStatic_mapper___globals);
        goto CPyL174;
    }
CPyL113: ;
    cpy_r_r200 = CPyStatics[4198]; /* '__gt__' */
    cpy_r_r201 = PyUnicode_Compare(cpy_r_r199, cpy_r_r200);
    CPy_DECREF(cpy_r_r199);
    cpy_r_r202 = cpy_r_r201 == -1;
    if (!cpy_r_r202) goto CPyL116;
    cpy_r_r203 = PyErr_Occurred();
    cpy_r_r204 = cpy_r_r203 != NULL;
    if (!cpy_r_r204) goto CPyL116;
    cpy_r_r205 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r205)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", -1, CPyStatic_mapper___globals);
        goto CPyL174;
    }
CPyL116: ;
    cpy_r_r206 = cpy_r_r201 == 0;
    cpy_r_r198 = cpy_r_r206;
CPyL117: ;
    if (!cpy_r_r198) goto CPyL119;
    cpy_r_r207 = cpy_r_r198;
    goto CPyL124;
CPyL119: ;
    cpy_r_r208 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 201, CPyStatic_mapper___globals);
        goto CPyL174;
    }
CPyL120: ;
    cpy_r_r209 = CPyStatics[4199]; /* '__le__' */
    cpy_r_r210 = PyUnicode_Compare(cpy_r_r208, cpy_r_r209);
    CPy_DECREF(cpy_r_r208);
    cpy_r_r211 = cpy_r_r210 == -1;
    if (!cpy_r_r211) goto CPyL123;
    cpy_r_r212 = PyErr_Occurred();
    cpy_r_r213 = cpy_r_r212 != NULL;
    if (!cpy_r_r213) goto CPyL123;
    cpy_r_r214 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r214)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", -1, CPyStatic_mapper___globals);
        goto CPyL174;
    }
CPyL123: ;
    cpy_r_r215 = cpy_r_r210 == 0;
    cpy_r_r207 = cpy_r_r215;
CPyL124: ;
    if (!cpy_r_r207) goto CPyL126;
    cpy_r_r216 = cpy_r_r207;
    goto CPyL131;
CPyL126: ;
    cpy_r_r217 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 201, CPyStatic_mapper___globals);
        goto CPyL174;
    }
CPyL127: ;
    cpy_r_r218 = CPyStatics[4197]; /* '__ge__' */
    cpy_r_r219 = PyUnicode_Compare(cpy_r_r217, cpy_r_r218);
    CPy_DECREF(cpy_r_r217);
    cpy_r_r220 = cpy_r_r219 == -1;
    if (!cpy_r_r220) goto CPyL130;
    cpy_r_r221 = PyErr_Occurred();
    cpy_r_r222 = cpy_r_r221 != NULL;
    if (!cpy_r_r222) goto CPyL130;
    cpy_r_r223 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r223)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", -1, CPyStatic_mapper___globals);
        goto CPyL174;
    }
CPyL130: ;
    cpy_r_r224 = cpy_r_r219 == 0;
    cpy_r_r216 = cpy_r_r224;
CPyL131: ;
    if (cpy_r_r216) {
        goto CPyL175;
    } else
        goto CPyL136;
CPyL132: ;
    cpy_r_r225 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r225 == NULL)) {
        goto CPyL176;
    } else
        goto CPyL135;
CPyL133: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r226 = 0;
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 202, CPyStatic_mapper___globals);
        goto CPyL138;
    }
    CPy_Unreachable();
CPyL135: ;
    CPy_INCREF(cpy_r_r225);
    cpy_r_ret = cpy_r_r225;
CPyL136: ;
    cpy_r_r227 = CPyDef_func_ir___FuncSignature(cpy_r_args, cpy_r_ret);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_ret);
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 203, CPyStatic_mapper___globals);
        goto CPyL138;
    }
    return cpy_r_r227;
CPyL138: ;
    cpy_r_r228 = NULL;
    return cpy_r_r228;
CPyL139: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL138;
CPyL140: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL138;
CPyL141: ;
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r12);
    goto CPyL12;
CPyL142: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r12);
    goto CPyL138;
CPyL143: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_typ);
    goto CPyL138;
CPyL144: ;
    CPy_DecRef(cpy_r_arg_types);
    goto CPyL138;
CPyL145: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_r33);
    goto CPyL138;
CPyL146: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL19;
CPyL147: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r36);
    goto CPyL138;
CPyL148: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_pos_onlys);
    goto CPyL138;
CPyL149: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL138;
CPyL150: ;
    CPy_DECREF(cpy_r_r53);
    goto CPyL32;
CPyL151: ;
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r56);
    goto CPyL138;
CPyL152: ;
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r56);
    goto CPyL28;
CPyL153: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_r68);
    goto CPyL138;
CPyL154: ;
    CPy_DECREF(cpy_r_r68);
    goto CPyL39;
CPyL155: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r71);
    goto CPyL138;
CPyL156: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_pos_onlys);
    goto CPyL49;
CPyL157: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_pos_onlys);
    goto CPyL53;
CPyL158: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_pos_onlys);
    CPy_DecRef(cpy_r_ret);
    goto CPyL138;
CPyL159: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_pos_onlys);
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_r100);
    goto CPyL138;
CPyL160: ;
    CPy_DECREF(cpy_r_r100);
    goto CPyL65;
CPyL161: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_pos_onlys);
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r103);
    goto CPyL138;
CPyL162: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_pos_onlys);
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_arg_2);
    goto CPyL138;
CPyL163: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_pos_onlys);
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_r115);
    goto CPyL138;
CPyL164: ;
    CPy_DECREF(cpy_r_r115);
    goto CPyL78;
CPyL165: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_pos_onlys);
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r118);
    goto CPyL138;
CPyL166: ;
    CPy_DECREF(cpy_r_name_2);
    goto CPyL75;
CPyL167: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_pos_onlys);
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_name_2);
    goto CPyL138;
CPyL168: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_pos_onlys);
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_arg_names);
    goto CPyL138;
CPyL169: ;
    CPy_DECREF(cpy_r_arg_types);
    CPy_DECREF(cpy_r_arg_pos_onlys);
    CPy_DECREF(cpy_r_arg_names);
    CPy_DECREF(cpy_r_r137);
    goto CPyL92;
CPyL170: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_pos_onlys);
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r137);
    goto CPyL138;
CPyL171: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_pos_onlys);
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_arg_name);
    goto CPyL138;
CPyL172: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_pos_onlys);
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_arg_name);
    CPy_DecRef(cpy_r_arg_kind);
    goto CPyL138;
CPyL173: ;
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_arg_pos_onlys);
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_arg_name);
    CPy_DecRef(cpy_r_arg_kind);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL138;
CPyL174: ;
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_args);
    goto CPyL138;
CPyL175: ;
    CPy_DECREF(cpy_r_ret);
    goto CPyL132;
CPyL176: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL133;
}

PyObject *CPyPy_mapper___Mapper___fdef_to_sig(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fdef", 0};
    static CPyArg_Parser parser = {"O:fdef_to_sig", kwlist, 0};
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mapper___Mapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_self); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    PyObject *retval = CPyDef_mapper___Mapper___fdef_to_sig(arg_self, arg_fdef);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/mapper.py", "fdef_to_sig", 159, CPyStatic_mapper___globals);
    return NULL;
}

char CPyDef_mapper___Mapper___is_native_module(PyObject *cpy_r_self, PyObject *cpy_r_module) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_self)->_group_map;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_module);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "is_native_module", 207, CPyStatic_mapper___globals);
        goto CPyL2;
    }
    cpy_r_r3 = cpy_r_r1;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_mapper___Mapper___is_native_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module", 0};
    static CPyArg_Parser parser = {"O:is_native_module", kwlist, 0};
    PyObject *obj_module;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_module)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mapper___Mapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_self); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    char retval = CPyDef_mapper___Mapper___is_native_module(arg_self, arg_module);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/mapper.py", "is_native_module", 205, CPyStatic_mapper___globals);
    return NULL;
}

char CPyDef_mapper___Mapper___is_native_ref_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    tuple_T3OOO cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = ((mypy___nodes___RefExprObject *)cpy_r_expr)->_node;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (!cpy_r_r2) goto CPyL2;
    return 0;
CPyL2: ;
    cpy_r_r3 = CPyStatics[224]; /* '.' */
    cpy_r_r4 = ((mypy___nodes___RefExprObject *)cpy_r_expr)->_node;
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "is_native_ref_expr", 212, CPyStatic_mapper___globals, "mypy.nodes.SymbolNode", cpy_r_r4);
        goto CPyL13;
    }
    cpy_r_r6 = CPY_GET_ATTR_TRAIT(cpy_r_r5, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "is_native_ref_expr", 212, CPyStatic_mapper___globals);
        goto CPyL13;
    }
CPyL4: ;
    cpy_r_r7 = PySequence_Contains(cpy_r_r6, cpy_r_r3);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "is_native_ref_expr", 212, CPyStatic_mapper___globals);
        goto CPyL13;
    }
    cpy_r_r9 = cpy_r_r7;
    if (!cpy_r_r9) goto CPyL12;
    cpy_r_r10 = ((mypy___nodes___RefExprObject *)cpy_r_expr)->_node;
    if (likely(cpy_r_r10 != Py_None))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/mapper.py", "is_native_ref_expr", 213, CPyStatic_mapper___globals, "mypy.nodes.SymbolNode", cpy_r_r10);
        goto CPyL13;
    }
    cpy_r_r12 = CPY_GET_ATTR_TRAIT(cpy_r_r11, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "is_native_ref_expr", 213, CPyStatic_mapper___globals);
        goto CPyL13;
    }
CPyL8: ;
    cpy_r_r13 = CPyStatics[224]; /* '.' */
    cpy_r_r14 = CPyStatics[5576]; /* 'rpartition' */
    PyObject *cpy_r_r15[2] = {cpy_r_r12, cpy_r_r13};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = PyObject_VectorcallMethod(cpy_r_r14, cpy_r_r16, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "is_native_ref_expr", 213, CPyStatic_mapper___globals);
        goto CPyL14;
    }
    CPy_DECREF(cpy_r_r12);
    PyObject *__tmp10371;
    if (unlikely(!(PyTuple_Check(cpy_r_r17) && PyTuple_GET_SIZE(cpy_r_r17) == 3))) {
        __tmp10371 = NULL;
        goto __LL10372;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r17, 0))))
        __tmp10371 = PyTuple_GET_ITEM(cpy_r_r17, 0);
    else {
        __tmp10371 = NULL;
    }
    if (__tmp10371 == NULL) goto __LL10372;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r17, 1))))
        __tmp10371 = PyTuple_GET_ITEM(cpy_r_r17, 1);
    else {
        __tmp10371 = NULL;
    }
    if (__tmp10371 == NULL) goto __LL10372;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r17, 2))))
        __tmp10371 = PyTuple_GET_ITEM(cpy_r_r17, 2);
    else {
        __tmp10371 = NULL;
    }
    if (__tmp10371 == NULL) goto __LL10372;
    __tmp10371 = cpy_r_r17;
__LL10372: ;
    if (unlikely(__tmp10371 == NULL)) {
        CPy_TypeError("tuple[str, str, str]", cpy_r_r17); cpy_r_r18 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp10373 = PyTuple_GET_ITEM(cpy_r_r17, 0);
        CPy_INCREF(__tmp10373);
        PyObject *__tmp10374;
        if (likely(PyUnicode_Check(__tmp10373)))
            __tmp10374 = __tmp10373;
        else {
            CPy_TypeError("str", __tmp10373); 
            __tmp10374 = NULL;
        }
        cpy_r_r18.f0 = __tmp10374;
        PyObject *__tmp10375 = PyTuple_GET_ITEM(cpy_r_r17, 1);
        CPy_INCREF(__tmp10375);
        PyObject *__tmp10376;
        if (likely(PyUnicode_Check(__tmp10375)))
            __tmp10376 = __tmp10375;
        else {
            CPy_TypeError("str", __tmp10375); 
            __tmp10376 = NULL;
        }
        cpy_r_r18.f1 = __tmp10376;
        PyObject *__tmp10377 = PyTuple_GET_ITEM(cpy_r_r17, 2);
        CPy_INCREF(__tmp10377);
        PyObject *__tmp10378;
        if (likely(PyUnicode_Check(__tmp10377)))
            __tmp10378 = __tmp10377;
        else {
            CPy_TypeError("str", __tmp10377); 
            __tmp10378 = NULL;
        }
        cpy_r_r18.f2 = __tmp10378;
    }
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "is_native_ref_expr", 213, CPyStatic_mapper___globals);
        goto CPyL13;
    }
    cpy_r_r19 = cpy_r_r18.f0;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r18.f0);
    CPy_DECREF(cpy_r_r18.f1);
    CPy_DECREF(cpy_r_r18.f2);
    cpy_r_r20 = CPyDef_mapper___Mapper___is_native_module(cpy_r_self, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "is_native_ref_expr", 213, CPyStatic_mapper___globals);
        goto CPyL13;
    }
    return cpy_r_r20;
CPyL12: ;
    return 1;
CPyL13: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL14: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL13;
}

PyObject *CPyPy_mapper___Mapper___is_native_ref_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:is_native_ref_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mapper___Mapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely((Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_expr) == CPyType_nodes___RefExpr)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_mapper___Mapper___is_native_ref_expr(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/mapper.py", "is_native_ref_expr", 209, CPyStatic_mapper___globals);
    return NULL;
}

char CPyDef_mapper___Mapper___is_native_module_ref_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = CPyDef_mapper___Mapper___is_native_ref_expr(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "is_native_module_ref_expr", 217, CPyStatic_mapper___globals);
        goto CPyL7;
    }
    if (cpy_r_r0) goto CPyL3;
    cpy_r_r1 = cpy_r_r0;
    goto CPyL6;
CPyL3: ;
    cpy_r_r2 = ((mypy___nodes___RefExprObject *)cpy_r_expr)->_kind;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyStatics[9016]; /* 1 */
    cpy_r_r4 = PyObject_RichCompare(cpy_r_r2, cpy_r_r3, 2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "is_native_module_ref_expr", 217, CPyStatic_mapper___globals);
        goto CPyL7;
    }
    if (unlikely(!PyBool_Check(cpy_r_r4))) {
        CPy_TypeError("bool", cpy_r_r4); cpy_r_r5 = 2;
    } else
        cpy_r_r5 = cpy_r_r4 == Py_True;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "is_native_module_ref_expr", 217, CPyStatic_mapper___globals);
        goto CPyL7;
    }
    cpy_r_r1 = cpy_r_r5;
CPyL6: ;
    return cpy_r_r1;
CPyL7: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_mapper___Mapper___is_native_module_ref_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:is_native_module_ref_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mapper___Mapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely((Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_expr) == CPyType_nodes___RefExpr)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_mapper___Mapper___is_native_module_ref_expr(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/mapper.py", "is_native_module_ref_expr", 216, CPyStatic_mapper___globals);
    return NULL;
}

char CPyDef_mapper_____top_level__(void) {
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
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "<module>", -1, CPyStatic_mapper___globals);
        goto CPyL15;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_mapper___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "<module>", 3, CPyStatic_mapper___globals);
        goto CPyL15;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10189]; /* ('ARG_STAR', 'ARG_STAR2', 'GDEF', 'ArgKind', 'FuncDef',
                                     'RefExpr', 'SymbolNode', 'TypeInfo') */
    cpy_r_r10 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r11 = CPyStatic_mapper___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "<module>", 5, CPyStatic_mapper___globals);
        goto CPyL15;
    }
    CPyModule_mypy___nodes = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10190]; /* ('AnyType', 'CallableType', 'Instance', 'LiteralType',
                                      'NoneTyp', 'Overloaded', 'PartialType', 'TupleType',
                                      'Type', 'TypedDictType', 'TypeType', 'TypeVarType',
                                      'UnboundType', 'UninhabitedType', 'UnionType',
                                      'get_proper_type') */
    cpy_r_r14 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r15 = CPyStatic_mapper___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "<module>", 6, CPyStatic_mapper___globals);
        goto CPyL15;
    }
    CPyModule_mypy___types = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9904]; /* ('ClassIR',) */
    cpy_r_r18 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r19 = CPyStatic_mapper___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "<module>", 24, CPyStatic_mapper___globals);
        goto CPyL15;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10191]; /* ('FuncDecl', 'FuncSignature', 'RuntimeArg') */
    cpy_r_r22 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r23 = CPyStatic_mapper___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "<module>", 25, CPyStatic_mapper___globals);
        goto CPyL15;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10192]; /* ('RInstance', 'RTuple', 'RType', 'RUnion',
                                      'bool_rprimitive', 'bytes_rprimitive',
                                      'dict_rprimitive', 'float_rprimitive',
                                      'int16_rprimitive', 'int32_rprimitive',
                                      'int64_rprimitive', 'int_rprimitive',
                                      'list_rprimitive', 'none_rprimitive',
                                      'object_rprimitive', 'range_rprimitive',
                                      'set_rprimitive', 'str_rprimitive', 'tuple_rprimitive',
                                      'uint8_rprimitive') */
    cpy_r_r26 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r27 = CPyStatic_mapper___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "<module>", 26, CPyStatic_mapper___globals);
        goto CPyL15;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyStatics[7560]; /* 'mypyc.irbuild.mapper' */
    cpy_r_r31 = (PyObject *)CPyType_mapper___Mapper_template;
    cpy_r_r32 = CPyType_FromTemplate(cpy_r_r31, cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "<module>", 50, CPyStatic_mapper___globals);
        goto CPyL15;
    }
    cpy_r_r33 = CPyDef_mapper___Mapper_trait_vtable_setup();
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "<module>", -1, CPyStatic_mapper___globals);
        goto CPyL16;
    }
    cpy_r_r34 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r35 = CPyStatics[7054]; /* 'group_map' */
    cpy_r_r36 = CPyStatics[8471]; /* 'type_to_ir' */
    cpy_r_r37 = CPyStatics[8472]; /* 'func_to_decl' */
    cpy_r_r38 = PyTuple_Pack(3, cpy_r_r35, cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "<module>", 50, CPyStatic_mapper___globals);
        goto CPyL16;
    }
    cpy_r_r39 = PyObject_SetAttr(cpy_r_r32, cpy_r_r34, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "<module>", 50, CPyStatic_mapper___globals);
        goto CPyL16;
    }
    CPyType_mapper___Mapper = (PyTypeObject *)cpy_r_r32;
    CPy_INCREF(CPyType_mapper___Mapper);
    cpy_r_r41 = CPyStatic_mapper___globals;
    cpy_r_r42 = CPyStatics[7559]; /* 'Mapper' */
    cpy_r_r43 = CPyDict_SetItem(cpy_r_r41, cpy_r_r42, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypyc/irbuild/mapper.py", "<module>", 50, CPyStatic_mapper___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r45 = 2;
    return cpy_r_r45;
CPyL16: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL15;
}
