#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef exprtotype___TypeTranslationError_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef exprtotype___TypeTranslationError_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef exprtotype___TypeTranslationError_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_exprtotype___TypeTranslationError_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeTranslationError",
    .tp_getset = exprtotype___TypeTranslationError_getseters,
    .tp_methods = exprtotype___TypeTranslationError_methods,
    .tp_members = exprtotype___TypeTranslationError_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyBaseExceptionObject),
    .tp_weaklistoffset = sizeof(PyBaseExceptionObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_exprtotype___TypeTranslationError_template = &CPyType_exprtotype___TypeTranslationError_template_;

static PyMethodDef exprtotypemodule_methods[] = {
    {"_extract_argument_name", (PyCFunction)CPyPy_exprtotype____extract_argument_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"expr_to_unanalyzed_type", (PyCFunction)CPyPy_exprtotype___expr_to_unanalyzed_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef exprtotypemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.exprtotype",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    exprtotypemodule_methods
};

PyObject *CPyInit_mypy___exprtotype(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___exprtotype_internal) {
        Py_INCREF(CPyModule_mypy___exprtotype_internal);
        return CPyModule_mypy___exprtotype_internal;
    }
    CPyModule_mypy___exprtotype_internal = PyModule_Create(&exprtotypemodule);
    if (unlikely(CPyModule_mypy___exprtotype_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___exprtotype_internal, "__name__");
    CPyStatic_exprtotype___globals = PyModule_GetDict(CPyModule_mypy___exprtotype_internal);
    if (unlikely(CPyStatic_exprtotype___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_exprtotype_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___exprtotype_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___exprtotype_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_exprtotype___TypeTranslationError);
    return NULL;
}

PyObject *CPyDef_exprtotype____extract_argument_name(PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    cpy_r_r0 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL7;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r4 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "_extract_argument_name", 46, CPyStatic_exprtotype___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL14;
    }
    cpy_r_r5 = ((mypy___nodes___NameExprObject *)cpy_r_r4)->_name;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStatics[423]; /* 'None' */
    cpy_r_r7 = PyUnicode_Compare(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r8 = cpy_r_r7 == -1;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = PyErr_Occurred();
    cpy_r_r10 = cpy_r_r9 != NULL;
    if (!cpy_r_r10) goto CPyL5;
    cpy_r_r11 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/exprtotype.py", "_extract_argument_name", 46, CPyStatic_exprtotype___globals);
        goto CPyL14;
    }
CPyL5: ;
    cpy_r_r12 = cpy_r_r7 == 0;
    if (!cpy_r_r12) goto CPyL7;
    cpy_r_r13 = Py_None;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL7: ;
    cpy_r_r14 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL10;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___StrExpr))
        cpy_r_r18 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "_extract_argument_name", 49, CPyStatic_exprtotype___globals, "mypy.nodes.StrExpr", cpy_r_expr);
        goto CPyL14;
    }
    cpy_r_r19 = ((mypy___nodes___StrExprObject *)cpy_r_r18)->_value;
    CPy_INCREF(cpy_r_r19);
    return cpy_r_r19;
CPyL10: ;
    cpy_r_r20 = (PyObject *)CPyType_exprtotype___TypeTranslationError;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r20, 0, 0, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "_extract_argument_name", 51, CPyStatic_exprtotype___globals);
        goto CPyL14;
    }
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_exprtotype___TypeTranslationError))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "_extract_argument_name", 51, CPyStatic_exprtotype___globals, "mypy.exprtotype.TypeTranslationError", cpy_r_r21);
        goto CPyL14;
    }
    CPy_Raise(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/exprtotype.py", "_extract_argument_name", 51, CPyStatic_exprtotype___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
}

PyObject *CPyPy_exprtotype____extract_argument_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:_extract_argument_name", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_exprtotype____extract_argument_name(arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/exprtotype.py", "_extract_argument_name", 45, CPyStatic_exprtotype___globals);
    return NULL;
}

PyObject *CPyDef_exprtotype___expr_to_unanalyzed_type(PyObject *cpy_r_expr, PyObject *cpy_r_options, char cpy_r_allow_new_syntax, PyObject *cpy_r__parent) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
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
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_fullname;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyPtr cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r84;
    CPyPtr cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    CPyPtr cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyPtr cpy_r_r109;
    CPyPtr cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    CPyPtr cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    CPyPtr cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    CPyPtr cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    tuple_T2OO cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    int32_t cpy_r_r134;
    char cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    CPyPtr cpy_r_r141;
    int64_t cpy_r_r142;
    PyObject *cpy_r_r143;
    CPyTagged cpy_r_r144;
    CPyPtr cpy_r_r145;
    int64_t cpy_r_r146;
    CPyTagged cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    char cpy_r_r153;
    CPyTagged cpy_r_r154;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    int32_t cpy_r_r159;
    char cpy_r_r160;
    char cpy_r_r161;
    PyObject *cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    CPyPtr cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    int32_t cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    char cpy_r_r179;
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    tuple_T2II cpy_r_r184;
    tuple_T2II cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    CPyPtr cpy_r_r199;
    CPyPtr cpy_r_r200;
    CPyPtr cpy_r_r201;
    CPyTagged cpy_r_r202;
    CPyTagged cpy_r_r203;
    char cpy_r_r204;
    char cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    CPyPtr cpy_r_r208;
    PyObject *cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    CPyPtr cpy_r_r212;
    PyObject *cpy_r_r213;
    char cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_names;
    PyObject *cpy_r_r218;
    CPyPtr cpy_r_r219;
    PyObject *cpy_r_r220;
    char cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    int32_t cpy_r_r224;
    char cpy_r_r225;
    PyObject *cpy_r_r226;
    CPyPtr cpy_r_r227;
    PyObject *cpy_r_r228;
    char cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    int32_t cpy_r_r232;
    char cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject **cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_arg_const;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    CPyTagged cpy_r_r250;
    CPyTagged cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_default_type;
    PyObject *cpy_r_typ;
    CPyTagged cpy_r_r253;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    CPyTagged cpy_r_r256;
    CPyPtr cpy_r_r257;
    int64_t cpy_r_r258;
    CPyTagged cpy_r_r259;
    char cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_arg_2;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    char cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    char cpy_r_r275;
    PyObject *cpy_r_r276;
    char cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    char cpy_r_r288;
    char cpy_r_r289;
    char cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    char cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    char cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    CPyTagged cpy_r_r307;
    CPyTagged cpy_r_r308;
    PyObject *cpy_r_r309;
    CPyTagged cpy_r_r310;
    PyObject *cpy_r_r311;
    CPyTagged cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    CPyPtr cpy_r_r315;
    PyObject *cpy_r_r316;
    char cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    CPyPtr cpy_r_r320;
    int64_t cpy_r_r321;
    PyObject *cpy_r_r322;
    CPyTagged cpy_r_r323;
    CPyPtr cpy_r_r324;
    int64_t cpy_r_r325;
    CPyTagged cpy_r_r326;
    char cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    char cpy_r_r332;
    CPyTagged cpy_r_r333;
    PyObject *cpy_r_r334;
    CPyTagged cpy_r_r335;
    PyObject *cpy_r_r336;
    CPyTagged cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    CPyPtr cpy_r_r340;
    PyObject *cpy_r_r341;
    char cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    CPyTagged cpy_r_r347;
    PyObject *cpy_r_r348;
    CPyTagged cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    CPyPtr cpy_r_r352;
    PyObject *cpy_r_r353;
    char cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    CPyTagged cpy_r_r359;
    PyObject *cpy_r_r360;
    CPyTagged cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    CPyPtr cpy_r_r364;
    PyObject *cpy_r_r365;
    char cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    CPyPtr cpy_r_r372;
    PyObject *cpy_r_r373;
    char cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    int32_t cpy_r_r378;
    char cpy_r_r379;
    char cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    int32_t cpy_r_r384;
    char cpy_r_r385;
    PyObject *cpy_r_r386;
    char cpy_r_r387;
    char cpy_r_r388;
    char cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    char cpy_r_r395;
    PyObject *cpy_r_r396;
    PyObject *cpy_r_r397;
    PyObject *cpy_r_r398;
    PyObject *cpy_r_r399;
    PyObject *cpy_r_r400;
    CPyPtr cpy_r_r401;
    PyObject *cpy_r_r402;
    char cpy_r_r403;
    PyObject *cpy_r_r404;
    CPyTagged cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    CPyTagged cpy_r_r408;
    PyObject *cpy_r_r409;
    CPyTagged cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    CPyPtr cpy_r_r415;
    PyObject *cpy_r_r416;
    char cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    CPyTagged cpy_r_r420;
    PyObject *cpy_r_r421;
    CPyTagged cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject *cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    CPyPtr cpy_r_r427;
    PyObject *cpy_r_r428;
    char cpy_r_r429;
    PyObject *cpy_r_r430;
    PyObject *cpy_r_r431;
    CPyTagged cpy_r_r432;
    PyObject *cpy_r_r433;
    CPyTagged cpy_r_r434;
    PyObject *cpy_r_r435;
    PyObject *cpy_r_r436;
    PyObject *cpy_r_r437;
    PyObject *cpy_r_r438;
    CPyPtr cpy_r_r439;
    PyObject *cpy_r_r440;
    char cpy_r_r441;
    PyObject *cpy_r_r442;
    CPyTagged cpy_r_r443;
    CPyTagged cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    if (cpy_r_options != NULL) goto CPyL276;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_options = cpy_r_r0;
CPyL2: ;
    if (cpy_r_allow_new_syntax != 2) goto CPyL4;
    cpy_r_allow_new_syntax = 0;
CPyL4: ;
    if (cpy_r__parent != NULL) goto CPyL277;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r__parent = cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_name = cpy_r_r2;
    CPy_DECREF(cpy_r_name);
    cpy_r_r3 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (cpy_r_r6) {
        goto CPyL278;
    } else
        goto CPyL31;
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r7 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 72, CPyStatic_exprtotype___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL275;
    }
    cpy_r_r8 = ((mypy___nodes___NameExprObject *)cpy_r_r7)->_name;
    CPy_INCREF(cpy_r_r8);
    cpy_r_name = cpy_r_r8;
    CPy_INCREF(cpy_r_name);
    if (likely(cpy_r_name != Py_None))
        cpy_r_r9 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 73, CPyStatic_exprtotype___globals, "str", cpy_r_name);
        goto CPyL279;
    }
    cpy_r_r10 = CPyStatics[1151]; /* 'True' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL12;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL12;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 73, CPyStatic_exprtotype___globals);
        goto CPyL279;
    }
CPyL12: ;
    cpy_r_r16 = cpy_r_r11 == 0;
    if (cpy_r_r16) {
        goto CPyL280;
    } else
        goto CPyL17;
CPyL13: ;
    cpy_r_r17 = CPyStatics[831]; /* 'builtins.bool' */
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r18 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 74, CPyStatic_exprtotype___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL275;
    }
    cpy_r_r19 = ((mypy___nodes___NameExprObject *)cpy_r_r18)->_line;
    CPyTagged_INCREF(cpy_r_r19);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r20 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 74, CPyStatic_exprtotype___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL281;
    }
    cpy_r_r21 = ((mypy___nodes___NameExprObject *)cpy_r_r20)->_column;
    CPyTagged_INCREF(cpy_r_r21);
    cpy_r_r22 = 1 ? Py_True : Py_False;
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_types___RawExpressionType(cpy_r_r22, cpy_r_r17, cpy_r_r19, cpy_r_r21, cpy_r_r23);
    CPyTagged_DECREF(cpy_r_r19);
    CPyTagged_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 74, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    return cpy_r_r24;
CPyL17: ;
    CPy_INCREF(cpy_r_name);
    if (likely(cpy_r_name != Py_None))
        cpy_r_r25 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 75, CPyStatic_exprtotype___globals, "str", cpy_r_name);
        goto CPyL279;
    }
    cpy_r_r26 = CPyStatics[1152]; /* 'False' */
    cpy_r_r27 = PyUnicode_Compare(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r28 = cpy_r_r27 == -1;
    if (!cpy_r_r28) goto CPyL21;
    cpy_r_r29 = PyErr_Occurred();
    cpy_r_r30 = cpy_r_r29 != NULL;
    if (!cpy_r_r30) goto CPyL21;
    cpy_r_r31 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 75, CPyStatic_exprtotype___globals);
        goto CPyL279;
    }
CPyL21: ;
    cpy_r_r32 = cpy_r_r27 == 0;
    if (cpy_r_r32) {
        goto CPyL282;
    } else
        goto CPyL26;
CPyL22: ;
    cpy_r_r33 = CPyStatics[831]; /* 'builtins.bool' */
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r34 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 76, CPyStatic_exprtotype___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL275;
    }
    cpy_r_r35 = ((mypy___nodes___NameExprObject *)cpy_r_r34)->_line;
    CPyTagged_INCREF(cpy_r_r35);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r36 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 76, CPyStatic_exprtotype___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL283;
    }
    cpy_r_r37 = ((mypy___nodes___NameExprObject *)cpy_r_r36)->_column;
    CPyTagged_INCREF(cpy_r_r37);
    cpy_r_r38 = 0 ? Py_True : Py_False;
    cpy_r_r39 = NULL;
    cpy_r_r40 = CPyDef_types___RawExpressionType(cpy_r_r38, cpy_r_r33, cpy_r_r35, cpy_r_r37, cpy_r_r39);
    CPyTagged_DECREF(cpy_r_r35);
    CPyTagged_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 76, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    return cpy_r_r40;
CPyL26: ;
    if (likely(cpy_r_name != Py_None))
        cpy_r_r41 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 78, CPyStatic_exprtotype___globals, "str", cpy_r_name);
        goto CPyL275;
    }
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r42 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 78, CPyStatic_exprtotype___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL284;
    }
    cpy_r_r43 = ((mypy___nodes___NameExprObject *)cpy_r_r42)->_line;
    CPyTagged_INCREF(cpy_r_r43);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r44 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 78, CPyStatic_exprtotype___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL285;
    }
    cpy_r_r45 = ((mypy___nodes___NameExprObject *)cpy_r_r44)->_column;
    CPyTagged_INCREF(cpy_r_r45);
    cpy_r_r46 = NULL;
    cpy_r_r47 = 2;
    cpy_r_r48 = 2;
    cpy_r_r49 = NULL;
    cpy_r_r50 = NULL;
    cpy_r_r51 = CPyDef_types___UnboundType(cpy_r_r41, cpy_r_r46, cpy_r_r43, cpy_r_r45, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r41);
    CPyTagged_DECREF(cpy_r_r43);
    CPyTagged_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 78, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    return cpy_r_r51;
CPyL31: ;
    cpy_r_r52 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r53 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r54 = *(PyObject * *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 == cpy_r_r52;
    if (cpy_r_r55) {
        goto CPyL286;
    } else
        goto CPyL46;
CPyL32: ;
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr))
        cpy_r_r56 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 80, CPyStatic_exprtotype___globals, "mypy.nodes.MemberExpr", cpy_r_expr);
        goto CPyL275;
    }
    cpy_r_r57 = CPyDef_nodes___get_member_expr_fullname(cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 80, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    cpy_r_fullname = cpy_r_r57;
    cpy_r_r58 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r59 = cpy_r_fullname != cpy_r_r58;
    if (!cpy_r_r59) goto CPyL287;
    CPy_INCREF(cpy_r_fullname);
    if (likely(cpy_r_fullname != Py_None))
        cpy_r_r60 = cpy_r_fullname;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 80, CPyStatic_exprtotype___globals, "str", cpy_r_fullname);
        goto CPyL288;
    }
    cpy_r_r61 = CPyStr_IsTrue(cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    if (!cpy_r_r61) goto CPyL287;
    if (likely(cpy_r_fullname != Py_None))
        cpy_r_r62 = cpy_r_fullname;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 82, CPyStatic_exprtotype___globals, "str", cpy_r_fullname);
        goto CPyL275;
    }
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr))
        cpy_r_r63 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 82, CPyStatic_exprtotype___globals, "mypy.nodes.MemberExpr", cpy_r_expr);
        goto CPyL289;
    }
    cpy_r_r64 = ((mypy___nodes___MemberExprObject *)cpy_r_r63)->_line;
    CPyTagged_INCREF(cpy_r_r64);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr))
        cpy_r_r65 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 82, CPyStatic_exprtotype___globals, "mypy.nodes.MemberExpr", cpy_r_expr);
        goto CPyL290;
    }
    cpy_r_r66 = ((mypy___nodes___MemberExprObject *)cpy_r_r65)->_column;
    CPyTagged_INCREF(cpy_r_r66);
    cpy_r_r67 = NULL;
    cpy_r_r68 = 2;
    cpy_r_r69 = 2;
    cpy_r_r70 = NULL;
    cpy_r_r71 = NULL;
    cpy_r_r72 = CPyDef_types___UnboundType(cpy_r_r62, cpy_r_r67, cpy_r_r64, cpy_r_r66, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_r62);
    CPyTagged_DECREF(cpy_r_r64);
    CPyTagged_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 82, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    return cpy_r_r72;
CPyL42: ;
    cpy_r_r73 = (PyObject *)CPyType_exprtotype___TypeTranslationError;
    cpy_r_r74 = _PyObject_Vectorcall(cpy_r_r73, 0, 0, 0);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 84, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    if (likely(Py_TYPE(cpy_r_r74) == CPyType_exprtotype___TypeTranslationError))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 84, CPyStatic_exprtotype___globals, "mypy.exprtotype.TypeTranslationError", cpy_r_r74);
        goto CPyL275;
    }
    CPy_Raise(cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 84, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r76 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r77 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r78 = *(PyObject * *)cpy_r_r77;
    cpy_r_r79 = cpy_r_r78 == cpy_r_r76;
    if (cpy_r_r79) {
        goto CPyL291;
    } else
        goto CPyL108;
CPyL47: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r80 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 86, CPyStatic_exprtotype___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL292;
    }
    cpy_r_r81 = ((mypy___nodes___IndexExprObject *)cpy_r_r80)->_base;
    CPy_INCREF(cpy_r_r81);
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r82 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 86, CPyStatic_exprtotype___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL293;
    }
    cpy_r_r83 = CPyDef_exprtotype___expr_to_unanalyzed_type(cpy_r_r81, cpy_r_options, cpy_r_allow_new_syntax, cpy_r_r82);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 86, CPyStatic_exprtotype___globals);
        goto CPyL292;
    }
    cpy_r_base = cpy_r_r83;
    cpy_r_r84 = (PyObject *)CPyType_types___UnboundType;
    cpy_r_r85 = (CPyPtr)&((PyObject *)cpy_r_base)->ob_type;
    cpy_r_r86 = *(PyObject * *)cpy_r_r85;
    cpy_r_r87 = cpy_r_r86 == cpy_r_r84;
    if (!cpy_r_r87) goto CPyL294;
    if (likely(Py_TYPE(cpy_r_base) == CPyType_types___UnboundType))
        cpy_r_r88 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 88, CPyStatic_exprtotype___globals, "mypy.types.UnboundType", cpy_r_base);
        goto CPyL295;
    }
    cpy_r_r89 = ((mypy___types___UnboundTypeObject *)cpy_r_r88)->_args;
    CPy_INCREF(cpy_r_r89);
    cpy_r_r90 = PyObject_IsTrue(cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 88, CPyStatic_exprtotype___globals);
        goto CPyL295;
    }
    cpy_r_r92 = cpy_r_r90;
    if (cpy_r_r92) {
        goto CPyL296;
    } else
        goto CPyL58;
CPyL54: ;
    cpy_r_r93 = (PyObject *)CPyType_exprtotype___TypeTranslationError;
    cpy_r_r94 = _PyObject_Vectorcall(cpy_r_r93, 0, 0, 0);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 89, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    if (likely(Py_TYPE(cpy_r_r94) == CPyType_exprtotype___TypeTranslationError))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 89, CPyStatic_exprtotype___globals, "mypy.exprtotype.TypeTranslationError", cpy_r_r94);
        goto CPyL275;
    }
    CPy_Raise(cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 89, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL58: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r96 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 90, CPyStatic_exprtotype___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL295;
    }
    cpy_r_r97 = ((mypy___nodes___IndexExprObject *)cpy_r_r96)->_index;
    cpy_r_r98 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r99 = (CPyPtr)&((PyObject *)cpy_r_r97)->ob_type;
    cpy_r_r100 = *(PyObject * *)cpy_r_r99;
    cpy_r_r101 = cpy_r_r100 == cpy_r_r98;
    if (!cpy_r_r101) goto CPyL63;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r102 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 91, CPyStatic_exprtotype___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL295;
    }
    cpy_r_r103 = ((mypy___nodes___IndexExprObject *)cpy_r_r102)->_index;
    if (likely(Py_TYPE(cpy_r_r103) == CPyType_nodes___TupleExpr))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 91, CPyStatic_exprtotype___globals, "mypy.nodes.TupleExpr", cpy_r_r103);
        goto CPyL295;
    }
    cpy_r_r105 = ((mypy___nodes___TupleExprObject *)cpy_r_r104)->_items;
    CPy_INCREF(cpy_r_r105);
    cpy_r_args = cpy_r_r105;
    goto CPyL66;
CPyL63: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r106 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 93, CPyStatic_exprtotype___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL295;
    }
    cpy_r_r107 = ((mypy___nodes___IndexExprObject *)cpy_r_r106)->_index;
    CPy_INCREF(cpy_r_r107);
    cpy_r_r108 = PyList_New(1);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 93, CPyStatic_exprtotype___globals);
        goto CPyL297;
    }
    cpy_r_r109 = (CPyPtr)&((PyListObject *)cpy_r_r108)->ob_item;
    cpy_r_r110 = *(CPyPtr *)cpy_r_r109;
    *(PyObject * *)cpy_r_r110 = cpy_r_r107;
    cpy_r_args = cpy_r_r108;
CPyL66: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r111 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 95, CPyStatic_exprtotype___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL298;
    }
    cpy_r_r112 = ((mypy___nodes___IndexExprObject *)cpy_r_r111)->_base;
    cpy_r_r113 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r114 = (CPyPtr)&((PyObject *)cpy_r_r112)->ob_type;
    cpy_r_r115 = *(PyObject * *)cpy_r_r114;
    cpy_r_r116 = cpy_r_r115 == cpy_r_r113;
    if (!cpy_r_r116) goto CPyL69;
    cpy_r_r117 = cpy_r_r116;
    goto CPyL70;
CPyL69: ;
    cpy_r_r118 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r119 = (CPyPtr)&((PyObject *)cpy_r_r112)->ob_type;
    cpy_r_r120 = *(PyObject * *)cpy_r_r119;
    cpy_r_r121 = cpy_r_r120 == cpy_r_r118;
    cpy_r_r117 = cpy_r_r121;
CPyL70: ;
    if (!cpy_r_r117) goto CPyL72;
    cpy_r_r122 = cpy_r_r117;
    goto CPyL73;
CPyL72: ;
    cpy_r_r123 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r124 = (CPyPtr)&((PyObject *)cpy_r_r112)->ob_type;
    cpy_r_r125 = *(PyObject * *)cpy_r_r124;
    cpy_r_r126 = cpy_r_r125 == cpy_r_r123;
    cpy_r_r122 = cpy_r_r126;
CPyL73: ;
    if (!cpy_r_r122) goto CPyL87;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r127 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 95, CPyStatic_exprtotype___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL298;
    }
    cpy_r_r128 = ((mypy___nodes___IndexExprObject *)cpy_r_r127)->_base;
    CPy_INCREF(cpy_r_r128);
    if (likely((Py_TYPE(cpy_r_r128) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r128) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r128) == CPyType_nodes___RefExpr)))
        cpy_r_r129 = cpy_r_r128;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 95, CPyStatic_exprtotype___globals, "mypy.nodes.RefExpr", cpy_r_r128);
        goto CPyL298;
    }
    cpy_r_r130 = CPY_GET_ATTR(cpy_r_r129, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 95, CPyStatic_exprtotype___globals);
        goto CPyL298;
    }
CPyL77: ;
    cpy_r_r131 = CPyStatic_types___ANNOTATED_TYPE_NAMES;
    if (unlikely(cpy_r_r131.f0 == NULL)) {
        goto CPyL299;
    } else
        goto CPyL80;
CPyL78: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ANNOTATED_TYPE_NAMES\" was not set");
    cpy_r_r132 = 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 95, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL80: ;
    CPy_INCREF(cpy_r_r131.f0);
    CPy_INCREF(cpy_r_r131.f1);
    cpy_r_r133 = PyTuple_New(2);
    if (unlikely(cpy_r_r133 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2664 = cpy_r_r131.f0;
    PyTuple_SET_ITEM(cpy_r_r133, 0, __tmp2664);
    PyObject *__tmp2665 = cpy_r_r131.f1;
    PyTuple_SET_ITEM(cpy_r_r133, 1, __tmp2665);
    cpy_r_r134 = PySequence_Contains(cpy_r_r133, cpy_r_r130);
    CPy_DECREF(cpy_r_r133);
    CPy_DECREF(cpy_r_r130);
    cpy_r_r135 = cpy_r_r134 >= 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 95, CPyStatic_exprtotype___globals);
        goto CPyL298;
    }
    cpy_r_r136 = cpy_r_r134;
    if (cpy_r_r136) {
        goto CPyL300;
    } else
        goto CPyL87;
CPyL82: ;
    cpy_r_r137 = CPyList_GetItemShort(cpy_r_args, 0);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 100, CPyStatic_exprtotype___globals);
        goto CPyL292;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r137, CPyType_nodes___Expression)))
        cpy_r_r138 = cpy_r_r137;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 100, CPyStatic_exprtotype___globals, "mypy.nodes.Expression", cpy_r_r137);
        goto CPyL292;
    }
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r139 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 100, CPyStatic_exprtotype___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL301;
    }
    cpy_r_r140 = CPyDef_exprtotype___expr_to_unanalyzed_type(cpy_r_r138, cpy_r_options, cpy_r_allow_new_syntax, cpy_r_r139);
    CPy_DECREF(cpy_r_r138);
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 100, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    return cpy_r_r140;
CPyL87: ;
    cpy_r_r141 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r142 = *(int64_t *)cpy_r_r141;
    cpy_r_r143 = PyTuple_New(cpy_r_r142);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 102, CPyStatic_exprtotype___globals);
        goto CPyL298;
    }
    cpy_r_r144 = 0;
CPyL89: ;
    cpy_r_r145 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r146 = *(int64_t *)cpy_r_r145;
    cpy_r_r147 = cpy_r_r146 << 1;
    cpy_r_r148 = (Py_ssize_t)cpy_r_r144 < (Py_ssize_t)cpy_r_r147;
    if (!cpy_r_r148) goto CPyL302;
    cpy_r_r149 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r144);
    if (likely(PyObject_TypeCheck(cpy_r_r149, CPyType_nodes___Expression)))
        cpy_r_r150 = cpy_r_r149;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 102, CPyStatic_exprtotype___globals, "mypy.nodes.Expression", cpy_r_r149);
        goto CPyL303;
    }
    cpy_r_arg = cpy_r_r150;
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r151 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 103, CPyStatic_exprtotype___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL304;
    }
    cpy_r_r152 = CPyDef_exprtotype___expr_to_unanalyzed_type(cpy_r_arg, cpy_r_options, cpy_r_allow_new_syntax, cpy_r_r151);
    CPy_DECREF(cpy_r_arg);
    CPy_DECREF(cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 103, CPyStatic_exprtotype___globals);
        goto CPyL303;
    }
    cpy_r_r153 = CPySequenceTuple_SetItemUnsafe(cpy_r_r143, cpy_r_r144, cpy_r_r152);
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 102, CPyStatic_exprtotype___globals);
        goto CPyL303;
    }
    cpy_r_r154 = cpy_r_r144 + 2;
    cpy_r_r144 = cpy_r_r154;
    goto CPyL89;
CPyL95: ;
    if (likely(Py_TYPE(cpy_r_base) == CPyType_types___UnboundType))
        cpy_r_r155 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 102, CPyStatic_exprtotype___globals, "mypy.types.UnboundType", cpy_r_base);
        goto CPyL305;
    }
    CPy_DECREF(((mypy___types___UnboundTypeObject *)cpy_r_r155)->_args);
    ((mypy___types___UnboundTypeObject *)cpy_r_r155)->_args = cpy_r_r143;
    if (likely(Py_TYPE(cpy_r_base) == CPyType_types___UnboundType))
        cpy_r_r157 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 105, CPyStatic_exprtotype___globals, "mypy.types.UnboundType", cpy_r_base);
        goto CPyL306;
    }
    cpy_r_r158 = ((mypy___types___UnboundTypeObject *)cpy_r_r157)->_args;
    CPy_INCREF(cpy_r_r158);
    cpy_r_r159 = PyObject_IsTrue(cpy_r_r158);
    CPy_DECREF(cpy_r_r158);
    cpy_r_r160 = cpy_r_r159 >= 0;
    if (unlikely(!cpy_r_r160)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 105, CPyStatic_exprtotype___globals);
        goto CPyL306;
    }
    cpy_r_r161 = cpy_r_r159;
    if (cpy_r_r161) goto CPyL102;
    if (likely(Py_TYPE(cpy_r_base) == CPyType_types___UnboundType))
        cpy_r_r162 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 106, CPyStatic_exprtotype___globals, "mypy.types.UnboundType", cpy_r_base);
        goto CPyL306;
    }
    ((mypy___types___UnboundTypeObject *)cpy_r_r162)->_empty_tuple_index = 1;
CPyL102: ;
    if (likely(Py_TYPE(cpy_r_base) == CPyType_types___UnboundType))
        cpy_r_r164 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 107, CPyStatic_exprtotype___globals, "mypy.types.UnboundType", cpy_r_base);
        goto CPyL275;
    }
    return cpy_r_r164;
CPyL104: ;
    cpy_r_r165 = (PyObject *)CPyType_exprtotype___TypeTranslationError;
    cpy_r_r166 = _PyObject_Vectorcall(cpy_r_r165, 0, 0, 0);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 109, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    if (likely(Py_TYPE(cpy_r_r166) == CPyType_exprtotype___TypeTranslationError))
        cpy_r_r167 = cpy_r_r166;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 109, CPyStatic_exprtotype___globals, "mypy.exprtotype.TypeTranslationError", cpy_r_r166);
        goto CPyL275;
    }
    CPy_Raise(cpy_r_r167);
    CPy_DECREF(cpy_r_r167);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 109, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL108: ;
    cpy_r_r168 = (PyObject *)CPyType_nodes___OpExpr;
    cpy_r_r169 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r170 = *(PyObject * *)cpy_r_r169;
    cpy_r_r171 = cpy_r_r170 == cpy_r_r168;
    if (!cpy_r_r171) goto CPyL127;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___OpExpr))
        cpy_r_r172 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 112, CPyStatic_exprtotype___globals, "mypy.nodes.OpExpr", cpy_r_expr);
        goto CPyL307;
    }
    cpy_r_r173 = ((mypy___nodes___OpExprObject *)cpy_r_r172)->_op;
    CPy_INCREF(cpy_r_r173);
    cpy_r_r174 = CPyStatics[885]; /* '|' */
    cpy_r_r175 = PyUnicode_Compare(cpy_r_r173, cpy_r_r174);
    CPy_DECREF(cpy_r_r173);
    cpy_r_r176 = cpy_r_r175 == -1;
    if (!cpy_r_r176) goto CPyL113;
    cpy_r_r177 = PyErr_Occurred();
    cpy_r_r178 = cpy_r_r177 != NULL;
    if (!cpy_r_r178) goto CPyL113;
    cpy_r_r179 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r179)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 112, CPyStatic_exprtotype___globals);
        goto CPyL307;
    }
CPyL113: ;
    cpy_r_r180 = cpy_r_r175 == 0;
    if (!cpy_r_r180) goto CPyL127;
    cpy_r_r181 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r182 = cpy_r_options != cpy_r_r181;
    if (!cpy_r_r182) goto CPyL119;
    if (likely(cpy_r_options != Py_None))
        cpy_r_r183 = cpy_r_options;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 113, CPyStatic_exprtotype___globals, "mypy.options.Options", cpy_r_options);
        goto CPyL307;
    }
    cpy_r_r184 = ((mypy___options___OptionsObject *)cpy_r_r183)->_python_version;
    CPyTagged_INCREF(cpy_r_r184.f0);
    CPyTagged_INCREF(cpy_r_r184.f1);
    cpy_r_r185.f0 = 6;
    cpy_r_r185.f1 = 20;
    CPyTagged_INCREF(cpy_r_r185.f0);
    CPyTagged_INCREF(cpy_r_r185.f1);
    cpy_r_r186 = PyTuple_New(2);
    if (unlikely(cpy_r_r186 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2666 = CPyTagged_StealAsObject(cpy_r_r184.f0);
    PyTuple_SET_ITEM(cpy_r_r186, 0, __tmp2666);
    PyObject *__tmp2667 = CPyTagged_StealAsObject(cpy_r_r184.f1);
    PyTuple_SET_ITEM(cpy_r_r186, 1, __tmp2667);
    cpy_r_r187 = PyTuple_New(2);
    if (unlikely(cpy_r_r187 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2668 = CPyTagged_StealAsObject(cpy_r_r185.f0);
    PyTuple_SET_ITEM(cpy_r_r187, 0, __tmp2668);
    PyObject *__tmp2669 = CPyTagged_StealAsObject(cpy_r_r185.f1);
    PyTuple_SET_ITEM(cpy_r_r187, 1, __tmp2669);
    cpy_r_r188 = PyObject_RichCompare(cpy_r_r186, cpy_r_r187, 5);
    CPy_DECREF(cpy_r_r186);
    CPy_DECREF(cpy_r_r187);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 113, CPyStatic_exprtotype___globals);
        goto CPyL307;
    }
    if (unlikely(!PyBool_Check(cpy_r_r188))) {
        CPy_TypeError("bool", cpy_r_r188); cpy_r_r189 = 2;
    } else
        cpy_r_r189 = cpy_r_r188 == Py_True;
    CPy_DECREF(cpy_r_r188);
    if (unlikely(cpy_r_r189 == 2)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 113, CPyStatic_exprtotype___globals);
        goto CPyL307;
    }
    if (cpy_r_r189) goto CPyL308;
CPyL119: ;
    if (cpy_r_allow_new_syntax) {
        goto CPyL308;
    } else
        goto CPyL127;
CPyL120: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___OpExpr))
        cpy_r_r190 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 117, CPyStatic_exprtotype___globals, "mypy.nodes.OpExpr", cpy_r_expr);
        goto CPyL292;
    }
    cpy_r_r191 = ((mypy___nodes___OpExprObject *)cpy_r_r190)->_left;
    CPy_INCREF(cpy_r_r191);
    cpy_r_r192 = NULL;
    cpy_r_r193 = CPyDef_exprtotype___expr_to_unanalyzed_type(cpy_r_r191, cpy_r_options, cpy_r_allow_new_syntax, cpy_r_r192);
    CPy_DECREF(cpy_r_r191);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 117, CPyStatic_exprtotype___globals);
        goto CPyL292;
    }
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___OpExpr))
        cpy_r_r194 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 118, CPyStatic_exprtotype___globals, "mypy.nodes.OpExpr", cpy_r_expr);
        goto CPyL309;
    }
    cpy_r_r195 = ((mypy___nodes___OpExprObject *)cpy_r_r194)->_right;
    CPy_INCREF(cpy_r_r195);
    cpy_r_r196 = NULL;
    cpy_r_r197 = CPyDef_exprtotype___expr_to_unanalyzed_type(cpy_r_r195, cpy_r_options, cpy_r_allow_new_syntax, cpy_r_r196);
    CPy_DECREF(cpy_r_r195);
    CPy_DECREF(cpy_r_options);
    if (unlikely(cpy_r_r197 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 118, CPyStatic_exprtotype___globals);
        goto CPyL310;
    }
    cpy_r_r198 = PyList_New(2);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 116, CPyStatic_exprtotype___globals);
        goto CPyL311;
    }
    cpy_r_r199 = (CPyPtr)&((PyListObject *)cpy_r_r198)->ob_item;
    cpy_r_r200 = *(CPyPtr *)cpy_r_r199;
    *(PyObject * *)cpy_r_r200 = cpy_r_r193;
    cpy_r_r201 = cpy_r_r200 + 8;
    *(PyObject * *)cpy_r_r201 = cpy_r_r197;
    cpy_r_r202 = CPY_INT_TAG;
    cpy_r_r203 = CPY_INT_TAG;
    cpy_r_r204 = 2;
    cpy_r_r205 = 2;
    cpy_r_r206 = CPyDef_types___UnionType(cpy_r_r198, cpy_r_r202, cpy_r_r203, cpy_r_r204, cpy_r_r205);
    CPy_DECREF(cpy_r_r198);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 115, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    return cpy_r_r206;
CPyL127: ;
    cpy_r_r207 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r208 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r209 = *(PyObject * *)cpy_r_r208;
    cpy_r_r210 = cpy_r_r209 == cpy_r_r207;
    if (!cpy_r_r210) goto CPyL312;
    cpy_r_r211 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r212 = (CPyPtr)&((PyObject *)cpy_r__parent)->ob_type;
    cpy_r_r213 = *(PyObject * *)cpy_r_r212;
    CPy_DECREF(cpy_r__parent);
    cpy_r_r214 = cpy_r_r213 == cpy_r_r211;
    if (!cpy_r_r214) goto CPyL204;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r215 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 122, CPyStatic_exprtotype___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL292;
    }
    cpy_r_r216 = ((mypy___nodes___CallExprObject *)cpy_r_r215)->_callee;
    CPy_INCREF(cpy_r_r216);
    cpy_r_c = cpy_r_r216;
    cpy_r_r217 = PyList_New(0);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 123, CPyStatic_exprtotype___globals);
        goto CPyL313;
    }
    cpy_r_names = cpy_r_r217;
CPyL132: ;
    if (!1) goto CPyL314;
    cpy_r_r218 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r219 = (CPyPtr)&((PyObject *)cpy_r_c)->ob_type;
    cpy_r_r220 = *(PyObject * *)cpy_r_r219;
    cpy_r_r221 = cpy_r_r220 == cpy_r_r218;
    if (!cpy_r_r221) goto CPyL136;
    if (likely(Py_TYPE(cpy_r_c) == CPyType_nodes___NameExpr))
        cpy_r_r222 = cpy_r_c;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 128, CPyStatic_exprtotype___globals, "mypy.nodes.NameExpr", cpy_r_c);
        goto CPyL315;
    }
    cpy_r_r223 = ((mypy___nodes___NameExprObject *)cpy_r_r222)->_name;
    CPy_INCREF(cpy_r_r223);
    CPy_DECREF(cpy_r_c);
    cpy_r_r224 = PyList_Append(cpy_r_names, cpy_r_r223);
    CPy_DECREF(cpy_r_r223);
    cpy_r_r225 = cpy_r_r224 >= 0;
    if (unlikely(!cpy_r_r225)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 128, CPyStatic_exprtotype___globals);
        goto CPyL316;
    } else
        goto CPyL145;
CPyL136: ;
    cpy_r_r226 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r227 = (CPyPtr)&((PyObject *)cpy_r_c)->ob_type;
    cpy_r_r228 = *(PyObject * *)cpy_r_r227;
    cpy_r_r229 = cpy_r_r228 == cpy_r_r226;
    if (!cpy_r_r229) goto CPyL317;
    if (likely(Py_TYPE(cpy_r_c) == CPyType_nodes___MemberExpr))
        cpy_r_r230 = cpy_r_c;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 131, CPyStatic_exprtotype___globals, "mypy.nodes.MemberExpr", cpy_r_c);
        goto CPyL315;
    }
    cpy_r_r231 = ((mypy___nodes___MemberExprObject *)cpy_r_r230)->_name;
    CPy_INCREF(cpy_r_r231);
    cpy_r_r232 = PyList_Append(cpy_r_names, cpy_r_r231);
    CPy_DECREF(cpy_r_r231);
    cpy_r_r233 = cpy_r_r232 >= 0;
    if (unlikely(!cpy_r_r233)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 131, CPyStatic_exprtotype___globals);
        goto CPyL315;
    }
    if (likely(Py_TYPE(cpy_r_c) == CPyType_nodes___MemberExpr))
        cpy_r_r234 = cpy_r_c;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 132, CPyStatic_exprtotype___globals, "mypy.nodes.MemberExpr", cpy_r_c);
        goto CPyL315;
    }
    cpy_r_r235 = ((mypy___nodes___MemberExprObject *)cpy_r_r234)->_expr;
    CPy_INCREF(cpy_r_r235);
    CPy_DECREF(cpy_r_c);
    cpy_r_c = cpy_r_r235;
    goto CPyL132;
CPyL141: ;
    cpy_r_r236 = (PyObject *)CPyType_exprtotype___TypeTranslationError;
    cpy_r_r237 = _PyObject_Vectorcall(cpy_r_r236, 0, 0, 0);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 134, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    if (likely(Py_TYPE(cpy_r_r237) == CPyType_exprtotype___TypeTranslationError))
        cpy_r_r238 = cpy_r_r237;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 134, CPyStatic_exprtotype___globals, "mypy.exprtotype.TypeTranslationError", cpy_r_r237);
        goto CPyL275;
    }
    CPy_Raise(cpy_r_r238);
    CPy_DECREF(cpy_r_r238);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 134, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL145: ;
    cpy_r_r239 = CPyStatics[224]; /* '.' */
    cpy_r_r240 = CPyModule_builtins;
    cpy_r_r241 = CPyStatics[2328]; /* 'reversed' */
    cpy_r_r242 = CPyObject_GetAttr(cpy_r_r240, cpy_r_r241);
    if (unlikely(cpy_r_r242 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 135, CPyStatic_exprtotype___globals);
        goto CPyL316;
    }
    PyObject *cpy_r_r243[1] = {cpy_r_names};
    cpy_r_r244 = (PyObject **)&cpy_r_r243;
    cpy_r_r245 = _PyObject_Vectorcall(cpy_r_r242, cpy_r_r244, 1, 0);
    CPy_DECREF(cpy_r_r242);
    if (unlikely(cpy_r_r245 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 135, CPyStatic_exprtotype___globals);
        goto CPyL316;
    }
    CPy_DECREF(cpy_r_names);
    cpy_r_r246 = PyUnicode_Join(cpy_r_r239, cpy_r_r245);
    CPy_DECREF(cpy_r_r245);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 135, CPyStatic_exprtotype___globals);
        goto CPyL292;
    }
    cpy_r_arg_const = cpy_r_r246;
    cpy_r_r247 = Py_None;
    CPy_INCREF(cpy_r_r247);
    cpy_r_name = cpy_r_r247;
    cpy_r_r248 = NULL;
    cpy_r_r249 = NULL;
    cpy_r_r250 = CPY_INT_TAG;
    cpy_r_r251 = CPY_INT_TAG;
    cpy_r_r252 = CPyDef_types___AnyType(2, cpy_r_r248, cpy_r_r249, cpy_r_r250, cpy_r_r251);
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 139, CPyStatic_exprtotype___globals);
        goto CPyL318;
    }
    cpy_r_default_type = cpy_r_r252;
    CPy_INCREF(cpy_r_default_type);
    cpy_r_typ = cpy_r_default_type;
    cpy_r_r253 = 0;
    cpy_r_i = 0;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r254 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 141, CPyStatic_exprtotype___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL319;
    }
    cpy_r_r255 = ((mypy___nodes___CallExprObject *)cpy_r_r254)->_args;
    CPy_INCREF(cpy_r_r255);
    cpy_r_r256 = 0;
CPyL151: ;
    cpy_r_r257 = (CPyPtr)&((PyVarObject *)cpy_r_r255)->ob_size;
    cpy_r_r258 = *(int64_t *)cpy_r_r257;
    cpy_r_r259 = cpy_r_r258 << 1;
    cpy_r_r260 = (Py_ssize_t)cpy_r_r256 < (Py_ssize_t)cpy_r_r259;
    if (!cpy_r_r260) goto CPyL320;
    cpy_r_r261 = CPyList_GetItemUnsafe(cpy_r_r255, cpy_r_r256);
    if (likely(PyObject_TypeCheck(cpy_r_r261, CPyType_nodes___Expression)))
        cpy_r_r262 = cpy_r_r261;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 141, CPyStatic_exprtotype___globals, "mypy.nodes.Expression", cpy_r_r261);
        goto CPyL321;
    }
    cpy_r_arg_2 = cpy_r_r262;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r263 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 142, CPyStatic_exprtotype___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL322;
    }
    cpy_r_r264 = ((mypy___nodes___CallExprObject *)cpy_r_r263)->_arg_names;
    cpy_r_r265 = CPyList_GetItemBorrow(cpy_r_r264, cpy_r_i);
    if (unlikely(cpy_r_r265 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 142, CPyStatic_exprtotype___globals);
        goto CPyL322;
    }
    if (PyUnicode_Check(cpy_r_r265))
        cpy_r_r266 = cpy_r_r265;
    else {
        cpy_r_r266 = NULL;
    }
    if (cpy_r_r266 != NULL) goto __LL2670;
    if (cpy_r_r265 == Py_None)
        cpy_r_r266 = cpy_r_r265;
    else {
        cpy_r_r266 = NULL;
    }
    if (cpy_r_r266 != NULL) goto __LL2670;
    CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 142, CPyStatic_exprtotype___globals, "str or None", cpy_r_r265);
    goto CPyL322;
__LL2670: ;
    cpy_r_r267 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r268 = cpy_r_r266 != cpy_r_r267;
    if (!cpy_r_r268) goto CPyL188;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r269 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 143, CPyStatic_exprtotype___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL322;
    }
    cpy_r_r270 = ((mypy___nodes___CallExprObject *)cpy_r_r269)->_arg_names;
    cpy_r_r271 = CPyList_GetItem(cpy_r_r270, cpy_r_i);
    if (unlikely(cpy_r_r271 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 143, CPyStatic_exprtotype___globals);
        goto CPyL322;
    }
    if (PyUnicode_Check(cpy_r_r271))
        cpy_r_r272 = cpy_r_r271;
    else {
        cpy_r_r272 = NULL;
    }
    if (cpy_r_r272 != NULL) goto __LL2671;
    if (cpy_r_r271 == Py_None)
        cpy_r_r272 = cpy_r_r271;
    else {
        cpy_r_r272 = NULL;
    }
    if (cpy_r_r272 != NULL) goto __LL2671;
    CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 143, CPyStatic_exprtotype___globals, "str or None", cpy_r_r271);
    goto CPyL322;
__LL2671: ;
    cpy_r_r273 = CPyStatics[2329]; /* 'name' */
    cpy_r_r274 = PyObject_RichCompare(cpy_r_r272, cpy_r_r273, 2);
    CPy_DECREF(cpy_r_r272);
    if (unlikely(cpy_r_r274 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 143, CPyStatic_exprtotype___globals);
        goto CPyL322;
    }
    if (unlikely(!PyBool_Check(cpy_r_r274))) {
        CPy_TypeError("bool", cpy_r_r274); cpy_r_r275 = 2;
    } else
        cpy_r_r275 = cpy_r_r274 == Py_True;
    CPy_DECREF(cpy_r_r274);
    if (unlikely(cpy_r_r275 == 2)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 143, CPyStatic_exprtotype___globals);
        goto CPyL322;
    }
    if (cpy_r_r275) {
        goto CPyL323;
    } else
        goto CPyL170;
CPyL163: ;
    cpy_r_r276 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r277 = cpy_r_name != cpy_r_r276;
    CPy_DECREF(cpy_r_name);
    if (cpy_r_r277) {
        goto CPyL324;
    } else
        goto CPyL168;
CPyL164: ;
    cpy_r_r278 = (PyObject *)CPyType_exprtotype___TypeTranslationError;
    cpy_r_r279 = _PyObject_Vectorcall(cpy_r_r278, 0, 0, 0);
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 146, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    if (likely(Py_TYPE(cpy_r_r279) == CPyType_exprtotype___TypeTranslationError))
        cpy_r_r280 = cpy_r_r279;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 146, CPyStatic_exprtotype___globals, "mypy.exprtotype.TypeTranslationError", cpy_r_r279);
        goto CPyL275;
    }
    CPy_Raise(cpy_r_r280);
    CPy_DECREF(cpy_r_r280);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 146, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL168: ;
    cpy_r_r281 = CPyDef_exprtotype____extract_argument_name(cpy_r_arg_2);
    CPy_DECREF(cpy_r_arg_2);
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 147, CPyStatic_exprtotype___globals);
        goto CPyL325;
    }
    cpy_r_name = cpy_r_r281;
    goto CPyL199;
CPyL170: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r282 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 149, CPyStatic_exprtotype___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL322;
    }
    cpy_r_r283 = ((mypy___nodes___CallExprObject *)cpy_r_r282)->_arg_names;
    cpy_r_r284 = CPyList_GetItem(cpy_r_r283, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r284 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 149, CPyStatic_exprtotype___globals);
        goto CPyL326;
    }
    if (PyUnicode_Check(cpy_r_r284))
        cpy_r_r285 = cpy_r_r284;
    else {
        cpy_r_r285 = NULL;
    }
    if (cpy_r_r285 != NULL) goto __LL2672;
    if (cpy_r_r284 == Py_None)
        cpy_r_r285 = cpy_r_r284;
    else {
        cpy_r_r285 = NULL;
    }
    if (cpy_r_r285 != NULL) goto __LL2672;
    CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 149, CPyStatic_exprtotype___globals, "str or None", cpy_r_r284);
    goto CPyL326;
__LL2672: ;
    cpy_r_r286 = CPyStatics[802]; /* 'type' */
    cpy_r_r287 = PyObject_RichCompare(cpy_r_r285, cpy_r_r286, 2);
    CPy_DECREF(cpy_r_r285);
    if (unlikely(cpy_r_r287 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 149, CPyStatic_exprtotype___globals);
        goto CPyL326;
    }
    if (unlikely(!PyBool_Check(cpy_r_r287))) {
        CPy_TypeError("bool", cpy_r_r287); cpy_r_r288 = 2;
    } else
        cpy_r_r288 = cpy_r_r287 == Py_True;
    CPy_DECREF(cpy_r_r287);
    if (unlikely(cpy_r_r288 == 2)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 149, CPyStatic_exprtotype___globals);
        goto CPyL326;
    }
    if (!cpy_r_r288) goto CPyL327;
    cpy_r_r289 = cpy_r_typ == cpy_r_default_type;
    CPy_DECREF(cpy_r_typ);
    cpy_r_r290 = cpy_r_r289 ^ 1;
    if (cpy_r_r290) {
        goto CPyL328;
    } else
        goto CPyL181;
CPyL177: ;
    cpy_r_r291 = (PyObject *)CPyType_exprtotype___TypeTranslationError;
    cpy_r_r292 = _PyObject_Vectorcall(cpy_r_r291, 0, 0, 0);
    if (unlikely(cpy_r_r292 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 152, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    if (likely(Py_TYPE(cpy_r_r292) == CPyType_exprtotype___TypeTranslationError))
        cpy_r_r293 = cpy_r_r292;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 152, CPyStatic_exprtotype___globals, "mypy.exprtotype.TypeTranslationError", cpy_r_r292);
        goto CPyL275;
    }
    CPy_Raise(cpy_r_r293);
    CPy_DECREF(cpy_r_r293);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 152, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL181: ;
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r294 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 153, CPyStatic_exprtotype___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL329;
    }
    cpy_r_r295 = CPyDef_exprtotype___expr_to_unanalyzed_type(cpy_r_arg_2, cpy_r_options, cpy_r_allow_new_syntax, cpy_r_r294);
    CPy_DECREF(cpy_r_arg_2);
    CPy_DECREF(cpy_r_r294);
    if (unlikely(cpy_r_r295 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 153, CPyStatic_exprtotype___globals);
        goto CPyL330;
    }
    cpy_r_typ = cpy_r_r295;
    goto CPyL199;
CPyL184: ;
    cpy_r_r296 = (PyObject *)CPyType_exprtotype___TypeTranslationError;
    cpy_r_r297 = _PyObject_Vectorcall(cpy_r_r296, 0, 0, 0);
    if (unlikely(cpy_r_r297 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 156, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    if (likely(Py_TYPE(cpy_r_r297) == CPyType_exprtotype___TypeTranslationError))
        cpy_r_r298 = cpy_r_r297;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 156, CPyStatic_exprtotype___globals, "mypy.exprtotype.TypeTranslationError", cpy_r_r297);
        goto CPyL275;
    }
    CPy_Raise(cpy_r_r298);
    CPy_DECREF(cpy_r_r298);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 156, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL188: ;
    cpy_r_r299 = cpy_r_i == 0;
    if (cpy_r_r299) {
        goto CPyL331;
    } else
        goto CPyL332;
CPyL189: ;
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r300 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 158, CPyStatic_exprtotype___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL329;
    }
    cpy_r_r301 = CPyDef_exprtotype___expr_to_unanalyzed_type(cpy_r_arg_2, cpy_r_options, cpy_r_allow_new_syntax, cpy_r_r300);
    CPy_DECREF(cpy_r_arg_2);
    CPy_DECREF(cpy_r_r300);
    if (unlikely(cpy_r_r301 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 158, CPyStatic_exprtotype___globals);
        goto CPyL330;
    }
    cpy_r_typ = cpy_r_r301;
    goto CPyL199;
CPyL192: ;
    cpy_r_r302 = cpy_r_i == 2;
    CPyTagged_DECREF(cpy_r_i);
    if (!cpy_r_r302) goto CPyL333;
    cpy_r_r303 = CPyDef_exprtotype____extract_argument_name(cpy_r_arg_2);
    CPy_DECREF(cpy_r_arg_2);
    if (unlikely(cpy_r_r303 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 160, CPyStatic_exprtotype___globals);
        goto CPyL325;
    }
    cpy_r_name = cpy_r_r303;
    goto CPyL199;
CPyL195: ;
    cpy_r_r304 = (PyObject *)CPyType_exprtotype___TypeTranslationError;
    cpy_r_r305 = _PyObject_Vectorcall(cpy_r_r304, 0, 0, 0);
    if (unlikely(cpy_r_r305 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 162, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    if (likely(Py_TYPE(cpy_r_r305) == CPyType_exprtotype___TypeTranslationError))
        cpy_r_r306 = cpy_r_r305;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 162, CPyStatic_exprtotype___globals, "mypy.exprtotype.TypeTranslationError", cpy_r_r305);
        goto CPyL275;
    }
    CPy_Raise(cpy_r_r306);
    CPy_DECREF(cpy_r_r306);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 162, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL199: ;
    cpy_r_r307 = cpy_r_r253 + 2;
    cpy_r_r253 = cpy_r_r307;
    cpy_r_i = cpy_r_r307;
    cpy_r_r308 = cpy_r_r256 + 2;
    cpy_r_r256 = cpy_r_r308;
    goto CPyL151;
CPyL200: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r309 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 163, CPyStatic_exprtotype___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL334;
    }
    cpy_r_r310 = ((mypy___nodes___CallExprObject *)cpy_r_r309)->_line;
    CPyTagged_INCREF(cpy_r_r310);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r311 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 163, CPyStatic_exprtotype___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL335;
    }
    cpy_r_r312 = ((mypy___nodes___CallExprObject *)cpy_r_r311)->_column;
    CPyTagged_INCREF(cpy_r_r312);
    cpy_r_r313 = CPyDef_types___CallableArgument(cpy_r_typ, cpy_r_name, cpy_r_arg_const, cpy_r_r310, cpy_r_r312);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_arg_const);
    CPyTagged_DECREF(cpy_r_r310);
    CPyTagged_DECREF(cpy_r_r312);
    if (unlikely(cpy_r_r313 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 163, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    return cpy_r_r313;
CPyL204: ;
    cpy_r_r314 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r315 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r316 = *(PyObject * *)cpy_r_r315;
    cpy_r_r317 = cpy_r_r316 == cpy_r_r314;
    if (!cpy_r_r317) goto CPyL218;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ListExpr))
        cpy_r_r318 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 166, CPyStatic_exprtotype___globals, "mypy.nodes.ListExpr", cpy_r_expr);
        goto CPyL292;
    }
    cpy_r_r319 = ((mypy___nodes___ListExprObject *)cpy_r_r318)->_items;
    CPy_INCREF(cpy_r_r319);
    cpy_r_r320 = (CPyPtr)&((PyVarObject *)cpy_r_r319)->ob_size;
    cpy_r_r321 = *(int64_t *)cpy_r_r320;
    cpy_r_r322 = PyList_New(cpy_r_r321);
    if (unlikely(cpy_r_r322 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 166, CPyStatic_exprtotype___globals);
        goto CPyL336;
    }
    cpy_r_r323 = 0;
CPyL208: ;
    cpy_r_r324 = (CPyPtr)&((PyVarObject *)cpy_r_r319)->ob_size;
    cpy_r_r325 = *(int64_t *)cpy_r_r324;
    cpy_r_r326 = cpy_r_r325 << 1;
    cpy_r_r327 = (Py_ssize_t)cpy_r_r323 < (Py_ssize_t)cpy_r_r326;
    if (!cpy_r_r327) goto CPyL337;
    cpy_r_r328 = CPyList_GetItemUnsafe(cpy_r_r319, cpy_r_r323);
    if (likely(PyObject_TypeCheck(cpy_r_r328, CPyType_nodes___Expression)))
        cpy_r_r329 = cpy_r_r328;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 166, CPyStatic_exprtotype___globals, "mypy.nodes.Expression", cpy_r_r328);
        goto CPyL338;
    }
    cpy_r_t = cpy_r_r329;
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ListExpr))
        cpy_r_r330 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 166, CPyStatic_exprtotype___globals, "mypy.nodes.ListExpr", cpy_r_expr);
        goto CPyL339;
    }
    cpy_r_r331 = CPyDef_exprtotype___expr_to_unanalyzed_type(cpy_r_t, cpy_r_options, cpy_r_allow_new_syntax, cpy_r_r330);
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_r330);
    if (unlikely(cpy_r_r331 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 166, CPyStatic_exprtotype___globals);
        goto CPyL338;
    }
    cpy_r_r332 = CPyList_SetItemUnsafe(cpy_r_r322, cpy_r_r323, cpy_r_r331);
    if (unlikely(!cpy_r_r332)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 166, CPyStatic_exprtotype___globals);
        goto CPyL338;
    }
    cpy_r_r333 = cpy_r_r323 + 2;
    cpy_r_r323 = cpy_r_r333;
    goto CPyL208;
CPyL214: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ListExpr))
        cpy_r_r334 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 167, CPyStatic_exprtotype___globals, "mypy.nodes.ListExpr", cpy_r_expr);
        goto CPyL340;
    }
    cpy_r_r335 = ((mypy___nodes___ListExprObject *)cpy_r_r334)->_line;
    CPyTagged_INCREF(cpy_r_r335);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ListExpr))
        cpy_r_r336 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 168, CPyStatic_exprtotype___globals, "mypy.nodes.ListExpr", cpy_r_expr);
        goto CPyL341;
    }
    cpy_r_r337 = ((mypy___nodes___ListExprObject *)cpy_r_r336)->_column;
    CPyTagged_INCREF(cpy_r_r337);
    cpy_r_r338 = CPyDef_types___TypeList(cpy_r_r322, cpy_r_r335, cpy_r_r337);
    CPy_DECREF(cpy_r_r322);
    CPyTagged_DECREF(cpy_r_r335);
    CPyTagged_DECREF(cpy_r_r337);
    if (unlikely(cpy_r_r338 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 165, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    return cpy_r_r338;
CPyL218: ;
    cpy_r_r339 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r340 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r341 = *(PyObject * *)cpy_r_r340;
    cpy_r_r342 = cpy_r_r341 == cpy_r_r339;
    if (cpy_r_r342) {
        goto CPyL342;
    } else
        goto CPyL224;
CPyL219: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___StrExpr))
        cpy_r_r343 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 171, CPyStatic_exprtotype___globals, "mypy.nodes.StrExpr", cpy_r_expr);
        goto CPyL275;
    }
    cpy_r_r344 = ((mypy___nodes___StrExprObject *)cpy_r_r343)->_value;
    CPy_INCREF(cpy_r_r344);
    cpy_r_r345 = CPyStatics[697]; /* 'builtins.str' */
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___StrExpr))
        cpy_r_r346 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 171, CPyStatic_exprtotype___globals, "mypy.nodes.StrExpr", cpy_r_expr);
        goto CPyL343;
    }
    cpy_r_r347 = ((mypy___nodes___StrExprObject *)cpy_r_r346)->_line;
    CPyTagged_INCREF(cpy_r_r347);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___StrExpr))
        cpy_r_r348 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 171, CPyStatic_exprtotype___globals, "mypy.nodes.StrExpr", cpy_r_expr);
        goto CPyL344;
    }
    cpy_r_r349 = ((mypy___nodes___StrExprObject *)cpy_r_r348)->_column;
    CPyTagged_INCREF(cpy_r_r349);
    cpy_r_r350 = CPyDef_fastparse___parse_type_string(cpy_r_r344, cpy_r_r345, cpy_r_r347, cpy_r_r349);
    CPy_DECREF(cpy_r_r344);
    CPyTagged_DECREF(cpy_r_r347);
    CPyTagged_DECREF(cpy_r_r349);
    if (unlikely(cpy_r_r350 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 171, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    return cpy_r_r350;
CPyL224: ;
    cpy_r_r351 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r352 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r353 = *(PyObject * *)cpy_r_r352;
    cpy_r_r354 = cpy_r_r353 == cpy_r_r351;
    if (cpy_r_r354) {
        goto CPyL345;
    } else
        goto CPyL230;
CPyL225: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___BytesExpr))
        cpy_r_r355 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 173, CPyStatic_exprtotype___globals, "mypy.nodes.BytesExpr", cpy_r_expr);
        goto CPyL275;
    }
    cpy_r_r356 = ((mypy___nodes___BytesExprObject *)cpy_r_r355)->_value;
    CPy_INCREF(cpy_r_r356);
    cpy_r_r357 = CPyStatics[1179]; /* 'builtins.bytes' */
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___BytesExpr))
        cpy_r_r358 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 173, CPyStatic_exprtotype___globals, "mypy.nodes.BytesExpr", cpy_r_expr);
        goto CPyL346;
    }
    cpy_r_r359 = ((mypy___nodes___BytesExprObject *)cpy_r_r358)->_line;
    CPyTagged_INCREF(cpy_r_r359);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___BytesExpr))
        cpy_r_r360 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 173, CPyStatic_exprtotype___globals, "mypy.nodes.BytesExpr", cpy_r_expr);
        goto CPyL347;
    }
    cpy_r_r361 = ((mypy___nodes___BytesExprObject *)cpy_r_r360)->_column;
    CPyTagged_INCREF(cpy_r_r361);
    cpy_r_r362 = CPyDef_fastparse___parse_type_string(cpy_r_r356, cpy_r_r357, cpy_r_r359, cpy_r_r361);
    CPy_DECREF(cpy_r_r356);
    CPyTagged_DECREF(cpy_r_r359);
    CPyTagged_DECREF(cpy_r_r361);
    if (unlikely(cpy_r_r362 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 173, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    return cpy_r_r362;
CPyL230: ;
    cpy_r_r363 = (PyObject *)CPyType_nodes___UnaryExpr;
    cpy_r_r364 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r365 = *(PyObject * *)cpy_r_r364;
    cpy_r_r366 = cpy_r_r365 == cpy_r_r363;
    if (!cpy_r_r366) goto CPyL348;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___UnaryExpr))
        cpy_r_r367 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 175, CPyStatic_exprtotype___globals, "mypy.nodes.UnaryExpr", cpy_r_expr);
        goto CPyL292;
    }
    cpy_r_r368 = ((mypy___nodes___UnaryExprObject *)cpy_r_r367)->_expr;
    CPy_INCREF(cpy_r_r368);
    cpy_r_r369 = NULL;
    cpy_r_r370 = CPyDef_exprtotype___expr_to_unanalyzed_type(cpy_r_r368, cpy_r_options, cpy_r_allow_new_syntax, cpy_r_r369);
    CPy_DECREF(cpy_r_r368);
    CPy_DECREF(cpy_r_options);
    if (unlikely(cpy_r_r370 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 175, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    cpy_r_typ = cpy_r_r370;
    cpy_r_r371 = (PyObject *)CPyType_types___RawExpressionType;
    cpy_r_r372 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r373 = *(PyObject * *)cpy_r_r372;
    cpy_r_r374 = cpy_r_r373 == cpy_r_r371;
    if (!cpy_r_r374) goto CPyL349;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___RawExpressionType))
        cpy_r_r375 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 177, CPyStatic_exprtotype___globals, "mypy.types.RawExpressionType", cpy_r_typ);
        goto CPyL350;
    }
    cpy_r_r376 = ((mypy___types___RawExpressionTypeObject *)cpy_r_r375)->_literal_value;
    CPy_INCREF(cpy_r_r376);
    cpy_r_r377 = (PyObject *)&PyLong_Type;
    cpy_r_r378 = PyObject_IsInstance(cpy_r_r376, cpy_r_r377);
    CPy_DECREF(cpy_r_r376);
    cpy_r_r379 = cpy_r_r378 >= 0;
    if (unlikely(!cpy_r_r379)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 177, CPyStatic_exprtotype___globals);
        goto CPyL350;
    }
    cpy_r_r380 = cpy_r_r378;
    if (!cpy_r_r380) goto CPyL349;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___UnaryExpr))
        cpy_r_r381 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 177, CPyStatic_exprtotype___globals, "mypy.nodes.UnaryExpr", cpy_r_expr);
        goto CPyL350;
    }
    cpy_r_r382 = ((mypy___nodes___UnaryExprObject *)cpy_r_r381)->_op;
    CPy_INCREF(cpy_r_r382);
    cpy_r_r383 = CPyStatics[1198]; /* '-' */
    cpy_r_r384 = PyUnicode_Compare(cpy_r_r382, cpy_r_r383);
    CPy_DECREF(cpy_r_r382);
    cpy_r_r385 = cpy_r_r384 == -1;
    if (!cpy_r_r385) goto CPyL241;
    cpy_r_r386 = PyErr_Occurred();
    cpy_r_r387 = cpy_r_r386 != NULL;
    if (!cpy_r_r387) goto CPyL241;
    cpy_r_r388 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r388)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 177, CPyStatic_exprtotype___globals);
        goto CPyL350;
    }
CPyL241: ;
    cpy_r_r389 = cpy_r_r384 == 0;
    if (!cpy_r_r389) goto CPyL349;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___RawExpressionType))
        cpy_r_r390 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 178, CPyStatic_exprtotype___globals, "mypy.types.RawExpressionType", cpy_r_typ);
        goto CPyL350;
    }
    cpy_r_r391 = ((mypy___types___RawExpressionTypeObject *)cpy_r_r390)->_literal_value;
    CPy_INCREF(cpy_r_r391);
    cpy_r_r392 = CPyStatics[9017]; /* -1 */
    cpy_r_r393 = PyNumber_InPlaceMultiply(cpy_r_r391, cpy_r_r392);
    CPy_DECREF(cpy_r_r391);
    if (unlikely(cpy_r_r393 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 178, CPyStatic_exprtotype___globals);
        goto CPyL350;
    }
    if (PyLong_Check(cpy_r_r393))
        cpy_r_r394 = cpy_r_r393;
    else {
        cpy_r_r394 = NULL;
    }
    if (cpy_r_r394 != NULL) goto __LL2673;
    if (PyUnicode_Check(cpy_r_r393))
        cpy_r_r394 = cpy_r_r393;
    else {
        cpy_r_r394 = NULL;
    }
    if (cpy_r_r394 != NULL) goto __LL2673;
    if (PyBool_Check(cpy_r_r393))
        cpy_r_r394 = cpy_r_r393;
    else {
        cpy_r_r394 = NULL;
    }
    if (cpy_r_r394 != NULL) goto __LL2673;
    if (CPyFloat_Check(cpy_r_r393))
        cpy_r_r394 = cpy_r_r393;
    else {
        cpy_r_r394 = NULL;
    }
    if (cpy_r_r394 != NULL) goto __LL2673;
    if (cpy_r_r393 == Py_None)
        cpy_r_r394 = cpy_r_r393;
    else {
        cpy_r_r394 = NULL;
    }
    if (cpy_r_r394 != NULL) goto __LL2673;
    CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 178, CPyStatic_exprtotype___globals, "union[int, str, bool, float, None]", cpy_r_r393);
    goto CPyL350;
__LL2673: ;
    CPy_DECREF(((mypy___types___RawExpressionTypeObject *)cpy_r_r390)->_literal_value);
    ((mypy___types___RawExpressionTypeObject *)cpy_r_r390)->_literal_value = cpy_r_r394;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___RawExpressionType))
        cpy_r_r396 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 179, CPyStatic_exprtotype___globals, "mypy.types.RawExpressionType", cpy_r_typ);
        goto CPyL275;
    }
    return cpy_r_r396;
CPyL247: ;
    cpy_r_r397 = (PyObject *)CPyType_exprtotype___TypeTranslationError;
    cpy_r_r398 = _PyObject_Vectorcall(cpy_r_r397, 0, 0, 0);
    if (unlikely(cpy_r_r398 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 180, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    if (likely(Py_TYPE(cpy_r_r398) == CPyType_exprtotype___TypeTranslationError))
        cpy_r_r399 = cpy_r_r398;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 180, CPyStatic_exprtotype___globals, "mypy.exprtotype.TypeTranslationError", cpy_r_r398);
        goto CPyL275;
    }
    CPy_Raise(cpy_r_r399);
    CPy_DECREF(cpy_r_r399);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 180, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL251: ;
    cpy_r_r400 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r401 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r402 = *(PyObject * *)cpy_r_r401;
    cpy_r_r403 = cpy_r_r402 == cpy_r_r400;
    if (!cpy_r_r403) goto CPyL257;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IntExpr))
        cpy_r_r404 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 182, CPyStatic_exprtotype___globals, "mypy.nodes.IntExpr", cpy_r_expr);
        goto CPyL275;
    }
    cpy_r_r405 = ((mypy___nodes___IntExprObject *)cpy_r_r404)->_value;
    CPyTagged_INCREF(cpy_r_r405);
    cpy_r_r406 = CPyStatics[1178]; /* 'builtins.int' */
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IntExpr))
        cpy_r_r407 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 182, CPyStatic_exprtotype___globals, "mypy.nodes.IntExpr", cpy_r_expr);
        goto CPyL351;
    }
    cpy_r_r408 = ((mypy___nodes___IntExprObject *)cpy_r_r407)->_line;
    CPyTagged_INCREF(cpy_r_r408);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IntExpr))
        cpy_r_r409 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 182, CPyStatic_exprtotype___globals, "mypy.nodes.IntExpr", cpy_r_expr);
        goto CPyL352;
    }
    cpy_r_r410 = ((mypy___nodes___IntExprObject *)cpy_r_r409)->_column;
    CPyTagged_INCREF(cpy_r_r410);
    cpy_r_r411 = CPyTagged_StealAsObject(cpy_r_r405);
    cpy_r_r412 = NULL;
    cpy_r_r413 = CPyDef_types___RawExpressionType(cpy_r_r411, cpy_r_r406, cpy_r_r408, cpy_r_r410, cpy_r_r412);
    CPy_DECREF(cpy_r_r411);
    CPyTagged_DECREF(cpy_r_r408);
    CPyTagged_DECREF(cpy_r_r410);
    if (unlikely(cpy_r_r413 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 182, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    return cpy_r_r413;
CPyL257: ;
    cpy_r_r414 = (PyObject *)CPyType_nodes___FloatExpr;
    cpy_r_r415 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r416 = *(PyObject * *)cpy_r_r415;
    cpy_r_r417 = cpy_r_r416 == cpy_r_r414;
    if (!cpy_r_r417) goto CPyL262;
    cpy_r_r418 = CPyStatics[1180]; /* 'builtins.float' */
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___FloatExpr))
        cpy_r_r419 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 186, CPyStatic_exprtotype___globals, "mypy.nodes.FloatExpr", cpy_r_expr);
        goto CPyL275;
    }
    cpy_r_r420 = ((mypy___nodes___FloatExprObject *)cpy_r_r419)->_line;
    CPyTagged_INCREF(cpy_r_r420);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___FloatExpr))
        cpy_r_r421 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 186, CPyStatic_exprtotype___globals, "mypy.nodes.FloatExpr", cpy_r_expr);
        goto CPyL353;
    }
    cpy_r_r422 = ((mypy___nodes___FloatExprObject *)cpy_r_r421)->_column;
    CPyTagged_INCREF(cpy_r_r422);
    cpy_r_r423 = Py_None;
    cpy_r_r424 = NULL;
    cpy_r_r425 = CPyDef_types___RawExpressionType(cpy_r_r423, cpy_r_r418, cpy_r_r420, cpy_r_r422, cpy_r_r424);
    CPyTagged_DECREF(cpy_r_r420);
    CPyTagged_DECREF(cpy_r_r422);
    if (unlikely(cpy_r_r425 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 186, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    return cpy_r_r425;
CPyL262: ;
    cpy_r_r426 = (PyObject *)CPyType_nodes___ComplexExpr;
    cpy_r_r427 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r428 = *(PyObject * *)cpy_r_r427;
    cpy_r_r429 = cpy_r_r428 == cpy_r_r426;
    if (!cpy_r_r429) goto CPyL267;
    cpy_r_r430 = CPyStatics[1181]; /* 'builtins.complex' */
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ComplexExpr))
        cpy_r_r431 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 189, CPyStatic_exprtotype___globals, "mypy.nodes.ComplexExpr", cpy_r_expr);
        goto CPyL275;
    }
    cpy_r_r432 = ((mypy___nodes___ComplexExprObject *)cpy_r_r431)->_line;
    CPyTagged_INCREF(cpy_r_r432);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ComplexExpr))
        cpy_r_r433 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 189, CPyStatic_exprtotype___globals, "mypy.nodes.ComplexExpr", cpy_r_expr);
        goto CPyL354;
    }
    cpy_r_r434 = ((mypy___nodes___ComplexExprObject *)cpy_r_r433)->_column;
    CPyTagged_INCREF(cpy_r_r434);
    cpy_r_r435 = Py_None;
    cpy_r_r436 = NULL;
    cpy_r_r437 = CPyDef_types___RawExpressionType(cpy_r_r435, cpy_r_r430, cpy_r_r432, cpy_r_r434, cpy_r_r436);
    CPyTagged_DECREF(cpy_r_r432);
    CPyTagged_DECREF(cpy_r_r434);
    if (unlikely(cpy_r_r437 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 189, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    return cpy_r_r437;
CPyL267: ;
    cpy_r_r438 = (PyObject *)CPyType_nodes___EllipsisExpr;
    cpy_r_r439 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r440 = *(PyObject * *)cpy_r_r439;
    cpy_r_r441 = cpy_r_r440 == cpy_r_r438;
    if (!cpy_r_r441) goto CPyL271;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___EllipsisExpr))
        cpy_r_r442 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 191, CPyStatic_exprtotype___globals, "mypy.nodes.EllipsisExpr", cpy_r_expr);
        goto CPyL275;
    }
    cpy_r_r443 = ((mypy___nodes___EllipsisExprObject *)cpy_r_r442)->_line;
    CPyTagged_INCREF(cpy_r_r443);
    cpy_r_r444 = CPY_INT_TAG;
    cpy_r_r445 = CPyDef_types___EllipsisType(cpy_r_r443, cpy_r_r444);
    CPyTagged_DECREF(cpy_r_r443);
    if (unlikely(cpy_r_r445 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 191, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    return cpy_r_r445;
CPyL271: ;
    cpy_r_r446 = (PyObject *)CPyType_exprtotype___TypeTranslationError;
    cpy_r_r447 = _PyObject_Vectorcall(cpy_r_r446, 0, 0, 0);
    if (unlikely(cpy_r_r447 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 193, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    if (likely(Py_TYPE(cpy_r_r447) == CPyType_exprtotype___TypeTranslationError))
        cpy_r_r448 = cpy_r_r447;
    else {
        CPy_TypeErrorTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 193, CPyStatic_exprtotype___globals, "mypy.exprtotype.TypeTranslationError", cpy_r_r447);
        goto CPyL275;
    }
    CPy_Raise(cpy_r_r448);
    CPy_DECREF(cpy_r_r448);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 193, CPyStatic_exprtotype___globals);
        goto CPyL275;
    }
    CPy_Unreachable();
CPyL275: ;
    cpy_r_r449 = NULL;
    return cpy_r_r449;
CPyL276: ;
    CPy_INCREF(cpy_r_options);
    goto CPyL2;
CPyL277: ;
    CPy_INCREF(cpy_r__parent);
    goto CPyL6;
CPyL278: ;
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r__parent);
    goto CPyL7;
CPyL279: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL275;
CPyL280: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL13;
CPyL281: ;
    CPyTagged_DecRef(cpy_r_r19);
    goto CPyL275;
CPyL282: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL22;
CPyL283: ;
    CPyTagged_DecRef(cpy_r_r35);
    goto CPyL275;
CPyL284: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL275;
CPyL285: ;
    CPy_DecRef(cpy_r_r41);
    CPyTagged_DecRef(cpy_r_r43);
    goto CPyL275;
CPyL286: ;
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r__parent);
    goto CPyL32;
CPyL287: ;
    CPy_DECREF(cpy_r_fullname);
    goto CPyL42;
CPyL288: ;
    CPy_DecRef(cpy_r_fullname);
    goto CPyL275;
CPyL289: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL275;
CPyL290: ;
    CPy_DecRef(cpy_r_r62);
    CPyTagged_DecRef(cpy_r_r64);
    goto CPyL275;
CPyL291: ;
    CPy_DECREF(cpy_r__parent);
    goto CPyL47;
CPyL292: ;
    CPy_DecRef(cpy_r_options);
    goto CPyL275;
CPyL293: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r81);
    goto CPyL275;
CPyL294: ;
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_base);
    goto CPyL104;
CPyL295: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_base);
    goto CPyL275;
CPyL296: ;
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_base);
    goto CPyL54;
CPyL297: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r107);
    goto CPyL275;
CPyL298: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_args);
    goto CPyL275;
CPyL299: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r130);
    goto CPyL78;
CPyL300: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL82;
CPyL301: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r138);
    goto CPyL275;
CPyL302: ;
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_args);
    goto CPyL95;
CPyL303: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r143);
    goto CPyL275;
CPyL304: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r143);
    CPy_DecRef(cpy_r_arg);
    goto CPyL275;
CPyL305: ;
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r143);
    goto CPyL275;
CPyL306: ;
    CPy_DecRef(cpy_r_base);
    goto CPyL275;
CPyL307: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r__parent);
    goto CPyL275;
CPyL308: ;
    CPy_DECREF(cpy_r__parent);
    goto CPyL120;
CPyL309: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r193);
    goto CPyL275;
CPyL310: ;
    CPy_DecRef(cpy_r_r193);
    goto CPyL275;
CPyL311: ;
    CPy_DecRef(cpy_r_r193);
    CPy_DecRef(cpy_r_r197);
    goto CPyL275;
CPyL312: ;
    CPy_DECREF(cpy_r__parent);
    goto CPyL204;
CPyL313: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_c);
    goto CPyL275;
CPyL314: ;
    CPy_DECREF(cpy_r_c);
    goto CPyL145;
CPyL315: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_c);
    CPy_DecRef(cpy_r_names);
    goto CPyL275;
CPyL316: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_names);
    goto CPyL275;
CPyL317: ;
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_c);
    CPy_DECREF(cpy_r_names);
    goto CPyL141;
CPyL318: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_arg_const);
    goto CPyL275;
CPyL319: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_arg_const);
    CPy_DecRef(cpy_r_default_type);
    CPy_DecRef(cpy_r_typ);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL275;
CPyL320: ;
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_default_type);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r255);
    goto CPyL200;
CPyL321: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_arg_const);
    CPy_DecRef(cpy_r_default_type);
    CPy_DecRef(cpy_r_typ);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r255);
    goto CPyL275;
CPyL322: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_arg_const);
    CPy_DecRef(cpy_r_default_type);
    CPy_DecRef(cpy_r_typ);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r255);
    CPy_DecRef(cpy_r_arg_2);
    goto CPyL275;
CPyL323: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL163;
CPyL324: ;
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_arg_const);
    CPy_DECREF(cpy_r_default_type);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_r255);
    CPy_DECREF(cpy_r_arg_2);
    goto CPyL164;
CPyL325: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_arg_const);
    CPy_DecRef(cpy_r_default_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r255);
    goto CPyL275;
CPyL326: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_arg_const);
    CPy_DecRef(cpy_r_default_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r255);
    CPy_DecRef(cpy_r_arg_2);
    goto CPyL275;
CPyL327: ;
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_arg_const);
    CPy_DECREF(cpy_r_default_type);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_r255);
    CPy_DECREF(cpy_r_arg_2);
    goto CPyL184;
CPyL328: ;
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_arg_const);
    CPy_DECREF(cpy_r_default_type);
    CPy_DECREF(cpy_r_r255);
    CPy_DECREF(cpy_r_arg_2);
    goto CPyL177;
CPyL329: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_arg_const);
    CPy_DecRef(cpy_r_default_type);
    CPy_DecRef(cpy_r_r255);
    CPy_DecRef(cpy_r_arg_2);
    goto CPyL275;
CPyL330: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_arg_const);
    CPy_DecRef(cpy_r_default_type);
    CPy_DecRef(cpy_r_r255);
    goto CPyL275;
CPyL331: ;
    CPy_DECREF(cpy_r_typ);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL189;
CPyL332: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL192;
CPyL333: ;
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_arg_const);
    CPy_DECREF(cpy_r_default_type);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_r255);
    CPy_DECREF(cpy_r_arg_2);
    goto CPyL195;
CPyL334: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_arg_const);
    CPy_DecRef(cpy_r_typ);
    goto CPyL275;
CPyL335: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_arg_const);
    CPy_DecRef(cpy_r_typ);
    CPyTagged_DecRef(cpy_r_r310);
    goto CPyL275;
CPyL336: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r319);
    goto CPyL275;
CPyL337: ;
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_r319);
    goto CPyL214;
CPyL338: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r319);
    CPy_DecRef(cpy_r_r322);
    goto CPyL275;
CPyL339: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r319);
    CPy_DecRef(cpy_r_r322);
    CPy_DecRef(cpy_r_t);
    goto CPyL275;
CPyL340: ;
    CPy_DecRef(cpy_r_r322);
    goto CPyL275;
CPyL341: ;
    CPy_DecRef(cpy_r_r322);
    CPyTagged_DecRef(cpy_r_r335);
    goto CPyL275;
CPyL342: ;
    CPy_DECREF(cpy_r_options);
    goto CPyL219;
CPyL343: ;
    CPy_DecRef(cpy_r_r344);
    goto CPyL275;
CPyL344: ;
    CPy_DecRef(cpy_r_r344);
    CPyTagged_DecRef(cpy_r_r347);
    goto CPyL275;
CPyL345: ;
    CPy_DECREF(cpy_r_options);
    goto CPyL225;
CPyL346: ;
    CPy_DecRef(cpy_r_r356);
    goto CPyL275;
CPyL347: ;
    CPy_DecRef(cpy_r_r356);
    CPyTagged_DecRef(cpy_r_r359);
    goto CPyL275;
CPyL348: ;
    CPy_DECREF(cpy_r_options);
    goto CPyL251;
CPyL349: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL247;
CPyL350: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL275;
CPyL351: ;
    CPyTagged_DecRef(cpy_r_r405);
    goto CPyL275;
CPyL352: ;
    CPyTagged_DecRef(cpy_r_r405);
    CPyTagged_DecRef(cpy_r_r408);
    goto CPyL275;
CPyL353: ;
    CPyTagged_DecRef(cpy_r_r420);
    goto CPyL275;
CPyL354: ;
    CPyTagged_DecRef(cpy_r_r432);
    goto CPyL275;
}

PyObject *CPyPy_exprtotype___expr_to_unanalyzed_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", "options", "allow_new_syntax", "_parent", 0};
    static CPyArg_Parser parser = {"O|OOO:expr_to_unanalyzed_type", kwlist, 0};
    PyObject *obj_expr;
    PyObject *obj_options = NULL;
    PyObject *obj_allow_new_syntax = NULL;
    PyObject *obj__parent = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr, &obj_options, &obj_allow_new_syntax, &obj__parent)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *arg_options;
    if (obj_options == NULL) {
        arg_options = NULL;
        goto __LL2674;
    }
    if (Py_TYPE(obj_options) == CPyType_mypy___options___Options)
        arg_options = obj_options;
    else {
        arg_options = NULL;
    }
    if (arg_options != NULL) goto __LL2674;
    if (obj_options == Py_None)
        arg_options = obj_options;
    else {
        arg_options = NULL;
    }
    if (arg_options != NULL) goto __LL2674;
    CPy_TypeError("mypy.options.Options or None", obj_options); 
    goto fail;
__LL2674: ;
    char arg_allow_new_syntax;
    if (obj_allow_new_syntax == NULL) {
        arg_allow_new_syntax = 2;
    } else if (unlikely(!PyBool_Check(obj_allow_new_syntax))) {
        CPy_TypeError("bool", obj_allow_new_syntax); goto fail;
    } else
        arg_allow_new_syntax = obj_allow_new_syntax == Py_True;
    PyObject *arg__parent;
    if (obj__parent == NULL) {
        arg__parent = NULL;
        goto __LL2675;
    }
    if (PyObject_TypeCheck(obj__parent, CPyType_nodes___Expression))
        arg__parent = obj__parent;
    else {
        arg__parent = NULL;
    }
    if (arg__parent != NULL) goto __LL2675;
    if (obj__parent == Py_None)
        arg__parent = obj__parent;
    else {
        arg__parent = NULL;
    }
    if (arg__parent != NULL) goto __LL2675;
    CPy_TypeError("mypy.nodes.Expression or None", obj__parent); 
    goto fail;
__LL2675: ;
    PyObject *retval = CPyDef_exprtotype___expr_to_unanalyzed_type(arg_expr, arg_options, arg_allow_new_syntax, arg__parent);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/exprtotype.py", "expr_to_unanalyzed_type", 54, CPyStatic_exprtotype___globals);
    return NULL;
}

char CPyDef_exprtotype_____top_level__(void) {
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
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "<module>", -1, CPyStatic_exprtotype___globals);
        goto CPyL15;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_exprtotype___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "<module>", 3, CPyStatic_exprtotype___globals);
        goto CPyL15;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9382]; /* ('parse_type_string',) */
    cpy_r_r10 = CPyStatics[2331]; /* 'mypy.fastparse' */
    cpy_r_r11 = CPyStatic_exprtotype___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "<module>", 5, CPyStatic_exprtotype___globals);
        goto CPyL15;
    }
    CPyModule_mypy___fastparse = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___fastparse);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9383]; /* ('BytesExpr', 'CallExpr', 'ComplexExpr', 'EllipsisExpr',
                                     'Expression', 'FloatExpr', 'IndexExpr', 'IntExpr',
                                     'ListExpr', 'MemberExpr', 'NameExpr', 'OpExpr',
                                     'RefExpr', 'StrExpr', 'TupleExpr', 'UnaryExpr',
                                     'get_member_expr_fullname') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_exprtotype___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "<module>", 6, CPyStatic_exprtotype___globals);
        goto CPyL15;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r18 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r19 = CPyStatic_exprtotype___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "<module>", 25, CPyStatic_exprtotype___globals);
        goto CPyL15;
    }
    CPyModule_mypy___options = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9384]; /* ('ANNOTATED_TYPE_NAMES', 'AnyType', 'CallableArgument',
                                     'EllipsisType', 'ProperType', 'RawExpressionType',
                                     'Type', 'TypeList', 'TypeOfAny', 'UnboundType',
                                     'UnionType') */
    cpy_r_r22 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r23 = CPyStatic_exprtotype___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "<module>", 26, CPyStatic_exprtotype___globals);
        goto CPyL15;
    }
    CPyModule_mypy___types = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyModule_builtins;
    cpy_r_r26 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "<module>", 41, CPyStatic_exprtotype___globals);
        goto CPyL15;
    }
    cpy_r_r28 = PyTuple_Pack(1, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "<module>", 41, CPyStatic_exprtotype___globals);
        goto CPyL15;
    }
    cpy_r_r29 = CPyStatics[2338]; /* 'mypy.exprtotype' */
    cpy_r_r30 = (PyObject *)CPyType_exprtotype___TypeTranslationError_template;
    cpy_r_r31 = CPyType_FromTemplate(cpy_r_r30, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "<module>", 41, CPyStatic_exprtotype___globals);
        goto CPyL15;
    }
    cpy_r_r32 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r33 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r34 = PyTuple_Pack(1, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/exprtotype.py", "<module>", 41, CPyStatic_exprtotype___globals);
        goto CPyL16;
    }
    cpy_r_r35 = PyObject_SetAttr(cpy_r_r31, cpy_r_r32, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/exprtotype.py", "<module>", 41, CPyStatic_exprtotype___globals);
        goto CPyL16;
    }
    CPyType_exprtotype___TypeTranslationError = (PyTypeObject *)cpy_r_r31;
    CPy_INCREF(CPyType_exprtotype___TypeTranslationError);
    cpy_r_r37 = CPyStatic_exprtotype___globals;
    cpy_r_r38 = CPyStatics[2339]; /* 'TypeTranslationError' */
    cpy_r_r39 = CPyDict_SetItem(cpy_r_r37, cpy_r_r38, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/exprtotype.py", "<module>", 41, CPyStatic_exprtotype___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r41 = 2;
    return cpy_r_r41;
CPyL16: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL15;
}
